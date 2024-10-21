-------- EventFlow: EnemyLink --------

Actor: Player
entrypoint: None()
actions: ['WarpToActor', 'AimCompassPoint', 'SetCullMode', 'LookAtTalker', 'RelocateComponent', 'WaitForReady', 'SetVisibility', 'UpdateStrongRespawnPoint', 'OverwriteRecoveryPos']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Hud
entrypoint: None()
actions: ['PlayInAnim', 'PlayOutAnim']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['WarpToActor', 'AimCompassPoint', 'DisableAutoMovement', 'EnableAutoMovement', 'PlayAnimation', 'SetVisibility', 'PlayAnimationNoWait']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['WarpToActor', 'AimCompassPoint', 'Activate', 'Talk', 'GenericTalkSequence', 'AimActor', 'PlayAnimation', 'MoveToBesideTargetActor', 'SetCullMode', 'TalkKeep']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayBGM', 'StopAllBGM', 'WaitSamplePositionAndStopAndPlayEnemyLinkBgm', 'WaitSamplePositionAndStopAndPlayEnemyLinkBridgeBgm', 'StopRegioBGMBeforeMiddleBoss', 'PlayZoneBGM']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Reset', 'LerpDofSettings']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['PreloadTimeline', 'InvokeTimeline', 'SetCanSkip']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestAutoSave', 'ForbidSave', 'UnforbidSave', 'ForbidWarp']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: EnemyLink
entrypoint: None()
actions: ['LookAtTalker', 'StartCombat', 'WarpToActorWithCompassPoint', 'SetCullMode', 'PlayAnimation', 'CameraLockon', 'StartCombatAngry', 'PlayTailorOtherChannelNoWait', 'AimCompassPoint', 'ResetActiveAndPesteActors', 'CameraLockoff', 'WaitIdleState', 'PlayMaterialAnimation', 'SetRestartPositionToLinkedPoint', 'StopTailorOtherChannel', 'LookAtGimmick', 'RecoveryShield', 'Destroy']
queries: ['HasShield']
params: None

Actor: Zelda
entrypoint: None()
actions: ['WarpToActorWithCompassPoint', 'PlayAnimation', 'SetRightHandItem', 'SetEquipmentVisibility', 'SetShadowDecalEnable']
queries: []
params: None

Actor: BossBarrier
entrypoint: None()
actions: ['Deactivate']
queries: []
params: None

Actor: AlterLD001
entrypoint: None()
actions: ['LookAtGimmick', 'PlayAnimation']
queries: []
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: ItemSword
entrypoint: None()
actions: ['LookAtGimmick']
queries: []
params: None

void Appear() {

    call EvResetCommon.AllReset()

    EnemyLink.SetRestartPositionToLinkedPoint({'direction': 2, 'pointIndex': 0, 'stance': 'Ground'})
    GameControl.RequestAutoSave({'name': 'EnemyLink', 'immediate': True, 'needsStartupEvent': False, 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})

    call BossCommon.PreMiniBoss()


    fork {
        Player.SetCullMode({'enabled': False, 'cullMode': 0})
    } {
        EnemyLink.SetCullMode({'enabled': False, 'cullMode': 0})
    } {
        Partner[companion].SetCullMode({'cullMode': 0, 'enabled': True})
        Partner.DisableAutoMovement()
    } {
        EnemyLink.StopTailorOtherChannel({'channel': 'Aura_Normal', 'index': -1})
        EnemyLink.PlayTailorOtherChannelNoWait({'channel': 'Appear_Aura', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    }


    fork {
        Audio.StopRegioBGMBeforeMiddleBoss()
    } {
        FlowControl.PreloadTimeline({'filename': 'EnemyLinkAppear'})
    } {
        FlowControl.SetCanSkip({'enable': True})
    }

    Timer.Wait({'time': 1.399999976158142})
    EnemyLink.LookAtGimmick({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})

    fork {
        Partner[companion].TalkKeep({'message': 'scenario/StoryAreaA:EnemyLinkAppear_010', 'getAttention': False})
    } {
        Zelda.SetShadowDecalEnable({'enable': False})
    }

    Partner[companion].Talk({'message': 'scenario/StoryAreaA:EnemyLinkAppear_020', 'getAttention': False})
    EnemyLink.ResetActiveAndPesteActors({'child': True, 'cemeteryRevive': False, 'defeatedThrough': False, 'aliveCemeteryRevive': False})
    Timer.Wait({'time': 0.4000000059604645})

    fork {
        Timer.Wait({'time': 0.5})
    } {
        Zelda.SetRightHandItem({'item': 2})
    } {
        Zelda.SetEquipmentVisibility({'visibility': True})
    }

    Camera.LerpDofSettings({'kind': 7, 'TiltShiftCenterX': 0.0, 'BlurRatio': 1.0, 'BlurSizeScale': 1.0, 'FocusRange': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftGamma': 2.0, 'TiltShiftBlurSizeScale': 1.0, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofBlurRatio': 1.0, 'duration': 0.0, 'TiltShiftDofBackBlurFadeWidth': 0.05000000074505806, 'TiltShiftDofBackCurve': 0.5, 'FocalDistance': 30.899999618530273, 'TiltShiftCenterY': 0.699999988079071, 'TiltShiftRange': 0.20000000298023224, 'TiltShiftDofBackRange': 20.0, 'TiltShiftDofFocalDistance': 35.0, 'noWait': False})
    FlowControl.InvokeTimeline({'filename': 'EnemyLinkAppear', 'rate': 1.0})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Player.RelocateComponent({'name': 'ZeldaSkeletalModelComp'})

    fork {
        Zelda.WarpToActorWithCompassPoint({'distance': 11.5, 'direction': 2, 'actor': ActorIdentifier(name="EnemyLink"), 'offsetY': 0.0, 'offsetX': 0.0})
        Player.AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
        Zelda.PlayAnimation({'name': 'wait', 'blendFrame': 0, 'layer': 0, 'restart': False})
    } {
        Partner.WarpToActor({'distance': 0.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': -0.5, 'offsetY': 0.0})
        Partner.EnableAutoMovement()
        Partner.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EnemyLink.PlayAnimation({'name': 'wait', 'blendFrame': 0, 'layer': 0, 'restart': False})
    } {
        Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})
    }

    EventFlags.SetFlag({'value': True, 'symbol': 'EvAreaA006'})
    Hud.PlayInAnim()
    Audio.PlayBGM({'label': 'BGM_BATTLE_ENEMY_LINK', 'volume': 1.0, 'ignoreSkip': True})
    Partner[companion].Activate()

    fork {
        Player.SetCullMode({'enabled': True, 'cullMode': 1})
    } {
        EnemyLink.SetCullMode({'enabled': True, 'cullMode': 1})
    } {
        Zelda.SetShadowDecalEnable({'enable': True})
    }

    Timer.Wait({'time': 0.20000000298023224})
    EnemyLink.CameraLockon({'maxSpeed': 100.0})
    EnemyLink.StopTailorOtherChannel({'channel': 'Appear_Aura', 'index': -1})
    GameControl.ForbidSave()
    Fade.StartPreset({'preset': 'FadeInNormal'})
    EnemyLink.StartCombat()
    Player.UpdateStrongRespawnPoint()
    Player.OverwriteRecoveryPos({'z': -75.30000305175781, 'x': -203.1999969482422, 'y': 36.0})
}

void Dead() {
    Audio.StopAllBGM({'duration': 0.5})

    call BossCommon.HitStopSmallBoss({'enemy': ActorIdentifier(name="EnemyLink")})


    fork {
        Hud.PlayOutAnim()
    } {
        FlowControl.PreloadTimeline({'filename': 'EnemyLinkDead'})
    } {
        Timer.Wait({'time': 1.0})
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
    } {
        Player.WaitForReady()
    }


    fork {
        Player.SetVisibility({'visible': False})
    } {
        Partner.SetVisibility({'visible': False})
    }


    fork {
        Timer.Wait({'time': 0.5})
    } {
        EnemyLink.ResetActiveAndPesteActors({'child': True, 'cemeteryRevive': False, 'defeatedThrough': False, 'aliveCemeteryRevive': False})
    }

    EnemyLink.WarpToActorWithCompassPoint({'offsetY': 0.0, 'direction': 0, 'actor': ActorIdentifier(name="ItemSword"), 'distance': 0.0, 'offsetX': 0.0})

    fork {
        Player.WarpToActor({'distance': 12.0, 'actor': ActorIdentifier(name="EnemyLink"), 'offsetY': 0.0, 'offsetX': 0.0})
        Player.AimCompassPoint({'duration': 0.10000000149011612, 'direction': 2, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner.WarpToActor({'distance': 12.0, 'actor': ActorIdentifier(name="EnemyLink"), 'offsetY': 0.0, 'offsetX': 0.0})
        Partner.AimCompassPoint({'duration': 0.10000000149011612, 'direction': 2, 'withoutTurn': False, 'immediateTurn': False})
    }

    Camera.LerpDofSettings({'kind': 7, 'TiltShiftCenterX': 0.0, 'BlurRatio': 1.0, 'BlurSizeScale': 1.0, 'FocusRange': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftGamma': 2.0, 'TiltShiftBlurSizeScale': 1.0, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofBlurRatio': 1.0, 'duration': 0.0, 'TiltShiftDofBackBlurFadeWidth': 0.05000000074505806, 'TiltShiftDofBackCurve': 0.5, 'TiltShiftCenterY': 0.699999988079071, 'TiltShiftRange': 0.20000000298023224, 'TiltShiftDofBackRange': 20.0, 'TiltShiftDofFocalDistance': 36.0, 'FocalDistance': 36.0, 'noWait': False})

    call Dissolve.Dissolve({'actor': ActorIdentifier(name="EnemyLink")})

    FlowControl.InvokeTimeline({'filename': 'EnemyLinkDead', 'rate': 1.0})
    Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})
    EnemyLink.CameraLockoff()

    fork {
        Player.WarpToActor({'distance': 4.5, 'actor': ActorIdentifier(name="EnemyLink"), 'offsetY': 0.0, 'offsetX': 0.0})
        Player.AimCompassPoint({'duration': 0.10000000149011612, 'direction': 2, 'withoutTurn': False, 'immediateTurn': False})
        Player.SetVisibility({'visible': True})
    } {
        Partner[companion].WarpToActor({'distance': 5.5, 'actor': ActorIdentifier(name="EnemyLink"), 'offsetX': 1.0, 'offsetY': 1.0})
        Partner[companion].AimCompassPoint({'duration': 0.10000000149011612, 'direction': 2, 'withoutTurn': False, 'immediateTurn': False})
        Partner.SetVisibility({'visible': True})
    }


    fork {
        Fade.StartPreset({'preset': 'FadeInNormal'})
    } {
        Timer.Wait({'time': 0.30000001192092896})
    }

    BossBarrier.Deactivate()
    Timer.Wait({'time': 1.0})
    AlterLD001.LookAtGimmick({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    AlterLD001.PlayAnimation({'name': 'open', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Player.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    EventFlags.SetFlag({'symbol': 'EvAreaA007', 'value': True})
    Audio.PlayZoneBGM({'stopbgm': True})
    Partner[companion].GenericTalkSequence({'aimFromPlayer': False, 'aimToPlayer': True, 'playerTalkAnim': False, 'cameraLookAt': False, 'selfTalkAnimName': 'talk02', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:CopyLInkDead_010', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.5})

        call GeneralSequence.Look_at_Partner()

    }

    Partner[companion].Talk({'message': 'scenario/StoryAreaA:CopyLInkDead_012', 'getAttention': False})
    Partner.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.4000000059604645})
    Partner.PlayAnimationNoWait({'name': 'no,talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:CopyLInkDead_013', 'getAttention': False})
    Timer.Wait({'time': 1.0})
    ItemSword.LookAtGimmick({'duration': 0.4000000059604645, 'distanceOffset': -3.0, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 0.5})
    Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetY': 1.0, 'offsetX': 1.0, 'offsetZ': 1.5, 'actor': ActorIdentifier(name="ItemSword"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="ItemSword"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:CopyLInkDead_020', 'getAttention': False})
    } {
        Partner[companion].PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.0})
    }

    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    EnemyLink.Destroy()
    EventFlags.SetFlag({'symbol': 'EvAreaA015', 'value': True})
    EventVariables.SetVariable({'symbol': 'HyruleCastle_LuberiHouse:3883717884'})
    GameControl.UnforbidSave()
    GameControl.ForbidWarp()
    GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Timer.Wait({'time': 0.5})
}

void Angry() {

    fork {
        EnemyLink.WaitIdleState()
        Audio.WaitSamplePositionAndStopAndPlayEnemyLinkBgm({'label': 'BGM_BATTLE_ENEMY_LINK_BRIDGE', 'stoplabel': 'BGM_BATTLE_ENEMY_LINK'})

        fork {
            Timer.Wait({'time': 2.0})
        } {
            EnemyLink.LookAtTalker({'distanceOffset': 4.0, 'duration': 1.5, 'chaseRatio': 0.07500000298023224, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        }


        fork {
            EnemyLink.PlayAnimation({'name': 'ev_anger', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            EnemyLink.PlayMaterialAnimation({'name': 'angry', 'layer': 1})
        } {
            EnemyLink.AimCompassPoint({'direction': 0, 'duration': 0.30000001192092896, 'withoutTurn': False, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.5})
            if !EnemyLink.HasShield() {
                EnemyLink.RecoveryShield()
            }
        }

        EnemyLink.PlayTailorOtherChannelNoWait({'channel': 'Aura_Anger', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
        EnemyLink.CameraLockon({'maxSpeed': 100.0})
        EnemyLink.StartCombatAngry()
        Audio.WaitSamplePositionAndStopAndPlayEnemyLinkBridgeBgm({'label': 'BGM_BATTLE_ENEMY_LINK2', 'stoplabel': 'BGM_BATTLE_ENEMY_LINK_BRIDGE'})
    } {

        call EvResetCommon.AngryReset()

    }

}
