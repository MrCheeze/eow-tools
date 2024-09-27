-------- EventFlow: Golem --------

Actor: Golem
entrypoint: None()
actions: ['CameraLockoff', 'PlayAnimation', 'LookAtGimmick', 'WaitDownEnd', 'CameraLockon', 'SetVisibility', 'Deactivate', 'ResetActiveAndPesteActors', 'Destroy', 'ItemDropToActor', 'RoomDoorClose', 'RoomDoorOpen']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['SetVisibility', 'PlayAnimation', 'WarpToActorWithCompassPoint', 'MoveToTargetActor', 'AimCompassPoint', 'SetInterestIkEnabled', 'SetRestartPositionToActor', 'AimActor', 'MoveToCompassPoint', 'DestroyCollisionHitActors', 'WarpToActorLinkedPointWithCompassPoint', 'UpdateStrongRespawnPoint', 'ForceTurn']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Hud
entrypoint: None()
actions: ['PlayInAnim']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['Talk', 'TalkKeep']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['SetVisibility', 'WarpToActor', 'DisableAutoMovement', 'AimCompassPoint', 'TalkKeep', 'Talk', 'PlayAnimationEx', 'MoveToBesideTargetActor', 'PlayAnimationNoWait', 'PlayAnimation', 'EnableAutoMovement', 'AimActor', 'AimPlayer', 'WarpToActorLinkedPointWithCompassPoint']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayBGM', 'PlayZoneBGM', 'SetBGMVolume', 'StopBGM', 'PlayOneshotSystemSE', 'StopAllBGM', 'WaitSamplePositionAndStopAndPlayBossGolemBgm', 'PlayJingle', 'StopZoneBgm', 'StopZoneBaseAmbience']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: Camera
entrypoint: None()
actions: ['Reset', 'PlayActorOriginCameraAnimation', 'LerpDofSettings', 'PlayLocationOriginCameraAnimation', 'SetShadowMapSettings']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['InvokeTimeline', 'SetCanSkip', 'PreloadTimeline']
queries: []
params: None

Actor: GolemCore
entrypoint: None()
actions: ['SetVisibility', 'Deactivate', 'CameraLockon', 'CameraLockoff', 'PlayAnimationNoWait', 'PlayTailorOtherChannelNoWait', 'PlayMaterialAnimationNoWait', 'SetCullMode', 'StopTailorOtherChannel']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestAutoSave', 'ForbidSave', 'UnforbidSave', 'RequestLevelJump', 'ResetSensorEventResetContainsActors', 'ForbidLaunchApplet', 'UnforbidLaunchApplet', 'SetAllItemsVisibility']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['SetShadowDecalEnable', 'SetRestartPositionToActor']
queries: []
params: None

Actor: ItemHeartContainer
entrypoint: None()
actions: ['SetVisibility']
queries: []
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: Door
entrypoint: None()
actions: ['SetVisibility']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: BattleChallenge
entrypoint: None()
actions: ['SetNextLevelAndLocation']
queries: ['GetConditionNumber']
params: None

Actor: PartnerPhoton[e]
entrypoint: None()
actions: ['WarpToActorLinkedPoint', 'PlayAnimation', 'PlayAnimationNoWait', 'Activate', 'SetCullMode', 'SetVisibility']
queries: []
params: None

Actor: WarpBoss
entrypoint: None()
actions: ['LookAtGimmick']
queries: []
params: None

Actor: Movie
entrypoint: None()
actions: ['Play', 'Close', 'Prepare']
queries: []
params: None

Actor: PartnerPhotonLiberation[a]
entrypoint: None()
actions: ['PlayAnimation', 'WarpToActorLinkedPoint', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel']
queries: []
params: None

Actor: PartnerPhotonLiberation[b]
entrypoint: None()
actions: ['PlayAnimation', 'WarpToActorLinkedPoint']
queries: []
params: None

Actor: PartnerPhoton[a]
entrypoint: None()
actions: ['WarpToActorLinkedPoint', 'PlayAnimation', 'PlayAnimationNoWait', 'Activate', 'SetCullMode', 'SetVisibility']
queries: []
params: None

Actor: PartnerPhoton[b]
entrypoint: None()
actions: ['WarpToActorLinkedPoint', 'PlayAnimation', 'PlayAnimationNoWait', 'Activate', 'SetCullMode', 'SetVisibility']
queries: []
params: None

Actor: PartnerPhoton[c]
entrypoint: None()
actions: ['WarpToActorLinkedPoint', 'PlayAnimation', 'PlayAnimationNoWait', 'Activate', 'SetCullMode', 'SetVisibility']
queries: []
params: None

Actor: PartnerPhoton[d]
entrypoint: None()
actions: ['WarpToActorLinkedPoint', 'PlayAnimation', 'PlayAnimationNoWait', 'Activate', 'SetCullMode', 'SetVisibility']
queries: []
params: None

Actor: PartnerPhoton[f]
entrypoint: None()
actions: ['WarpToActorLinkedPoint', 'PlayAnimation', 'PlayAnimationNoWait', 'Activate', 'SetCullMode', 'SetVisibility']
queries: []
params: None

void Appear() {
    Player.SetRestartPositionToActor({'distance': -9.0, 'direction': 2, 'stance': 'Ground'})
    GameControl.RequestAutoSave({'immediate': True, 'name': 'Golem', 'needsStartupEvent': False, 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})

    call EvResetCommon.AllReset()

    if !EventFlags.CheckFlag({'symbol': 'EvAreaA008'}) {
        EventFlags.SetFlag({'symbol': 'EvAreaA008', 'value': True})
    }

    call AppearCommon()

    Player.WarpToActorWithCompassPoint({'distance': 10.0, 'direction': 2, 'actor': ActorIdentifier(name="Golem"), 'offsetY': 0.0, 'offsetX': 0.0})
    Player.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].DisableAutoMovement()
    Partner[companion].WarpToActor({'offsetY': 1.0, 'offsetX': 1.0, 'actor': ActorIdentifier(name="Player"), 'distance': 0.0})
    Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        Fade.StartPreset({'preset': 'FadeInSlow'})
    } {
        Player.MoveToTargetActor({'speed': 0, 'tolerance': 0.0, 'distance': 1.5, 'actor': ActorIdentifier(name="Player"), 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Camera.LerpDofSettings({'kind': 7, 'TiltShiftCenterX': 0.0, 'BlurRatio': 1.0, 'BlurSizeScale': 1.0, 'FocusRange': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftGamma': 2.0, 'TiltShiftBlurSizeScale': 1.0, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofBlurRatio': 1.0, 'duration': 0.0, 'TiltShiftDofBackBlurFadeWidth': 0.05000000074505806, 'TiltShiftCenterY': 0.699999988079071, 'FocalDistance': 45.0, 'TiltShiftRange': 0.18000000715255737, 'TiltShiftDofFocalDistance': 51.0, 'TiltShiftDofBackRange': 51.0, 'TiltShiftDofBackCurve': 0.5, 'noWait': False})
        Camera.PlayActorOriginCameraAnimation({'path': 'actor/Golem.bfres', 'name': 'Golem_appear00_1_cam', 'chaseRatio': 1.0, 'target': ActorIdentifier(name="Golem"), 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    }


    fork {
        Timer.Wait({'time': 0.5})
        Camera.LerpDofSettings({'kind': 7, 'TiltShiftCenterX': 0.0, 'BlurRatio': 1.0, 'BlurSizeScale': 1.0, 'FocusRange': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftGamma': 2.0, 'TiltShiftBlurSizeScale': 1.0, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofBlurRatio': 1.0, 'duration': 0.0, 'TiltShiftDofBackBlurFadeWidth': 0.05000000074505806, 'TiltShiftCenterY': 0.699999988079071, 'FocalDistance': 45.0, 'TiltShiftRange': 0.18000000715255737, 'TiltShiftDofFocalDistance': 51.0, 'TiltShiftDofBackRange': 51.0, 'TiltShiftDofBackCurve': 0.5, 'noWait': False})
        Camera.PlayActorOriginCameraAnimation({'path': 'actor/Golem.bfres', 'name': 'Golem_appear00_1_cam', 'target': ActorIdentifier(name="Golem"), 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Player.AimCompassPoint({'direction': 2, 'withoutTurn': True, 'duration': 0.4000000059604645, 'immediateTurn': False})
        Timer.Wait({'time': 0.5})
        Player.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].AimCompassPoint({'duration': 0.4000000059604645, 'direction': 2, 'withoutTurn': False, 'immediateTurn': False})
        Timer.Wait({'time': 0.5})
        Partner[companion].PlayAnimationEx({'time': 0.0, 'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    call EnterBossArea()


    fork {
        Camera.LerpDofSettings({'kind': 7, 'TiltShiftCenterX': 0.0, 'BlurRatio': 1.0, 'BlurSizeScale': 1.0, 'FocusRange': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftGamma': 2.0, 'TiltShiftBlurSizeScale': 1.0, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofBlurRatio': 1.0, 'duration': 0.0, 'TiltShiftDofBackBlurFadeWidth': 0.05000000074505806, 'TiltShiftCenterY': 0.699999988079071, 'FocalDistance': 45.0, 'TiltShiftRange': 0.18000000715255737, 'TiltShiftDofFocalDistance': 51.0, 'TiltShiftDofBackRange': 51.0, 'TiltShiftDofBackCurve': 0.5, 'noWait': False})
        Camera.PlayActorOriginCameraAnimation({'path': 'actor/Golem.bfres', 'name': 'Golem_appear01_cam', 'chaseRatio': 1.0, 'target': ActorIdentifier(name="Golem"), 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Timer.Wait({'time': 0.5})
        Player.SetInterestIkEnabled({'enable': False})
        Player.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Player.PlayAnimation({'name': 'search', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})
        Partner[companion].PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_ENEMY_GOLEM_APPEAR_RUMBLE_PRE', 'volume': 1.0, 'pitch': 1.0})
    }


    call AppearPerformance()


    fork {
        Player.SetVisibility({'visible': True})
    } {
        Partner[companion].SetVisibility({'visible': True})
    } {
        Golem.PlayAnimation({'name': 'ev_appear_wait_ready', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Camera.LerpDofSettings({'kind': 7, 'TiltShiftCenterX': 0.0, 'BlurRatio': 1.0, 'BlurSizeScale': 1.0, 'FocusRange': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftGamma': 2.0, 'TiltShiftBlurSizeScale': 1.0, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofBlurRatio': 1.0, 'duration': 0.0, 'TiltShiftDofBackBlurFadeWidth': 0.05000000074505806, 'FocalDistance': 45.0, 'TiltShiftDofBackCurve': 0.5, 'TiltShiftCenterY': 0.5400000214576721, 'TiltShiftRange': 0.4300000071525574, 'TiltShiftDofBackRange': 50.0, 'TiltShiftDofFocalDistance': 52.0, 'noWait': False})
    Camera.PlayActorOriginCameraAnimation({'name': 'Golem_appear03_cam', 'path': 'actor/Golem.bfres', 'chaseRatio': 1.0, 'target': ActorIdentifier(name="Golem"), 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})

    fork {
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Golem"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.6000000238418579})
        Player.SetInterestIkEnabled({'enable': True})

        call GeneralSequence.Look_at_Partner_neck()

    } {
        Audio.PlayBGM({'label': 'BGM_BATTLE_BOSS_FOREST_BRIDGE', 'ignoreSkip': False, 'volume': 1.0})

        call EnterBossArea_2()

    }

    Audio.WaitSamplePositionAndStopAndPlayBossGolemBgm({'stoplabel': 'BGM_BATTLE_BOSS_FOREST_BRIDGE', 'label': 'BGM_BATTLE_BOSS_FOREST'})

    call BattleSetting()

    GameControl.ForbidSave()
}

void Dead() {

    call BossCommon.HitStopCustom({'enemy': ActorIdentifier(name="GolemCore")})

    GolemCore.PlayAnimationNoWait({'name': 'ev_dead', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GolemCore.PlayTailorOtherChannelNoWait({'channel': 'PartnerPhoton_Release', 'restart': False, 'index': -1, 'stopOnSkipped': True})

    fork {
        Timer.Wait({'time': 1.6670000553131104})

        call Dissolve.Dissolve({'actor': ActorIdentifier(name="GolemCore")})

        GolemCore.PlayMaterialAnimationNoWait({'name': 'GolemCore_dissolve', 'layer': 0})
        GolemCore.StopTailorOtherChannel({'channel': 'ac_Keep', 'index': -1})
    } {
        Timer.Wait({'time': 3.3329999446868896})
    }

    Timer.Wait({'time': 1.1670000553131104})

    fork {

        call BossCommon.BossExtinction({'enemy': ActorIdentifier(name="GolemCore")})

    } {
        Timer.Wait({'time': 1.6670000553131104})
        Golem.ItemDropToActor({'displacementY': 0.0, 'displacementX': 0.0, 'displacementZ': 0.0, 'linkedItemScatter': False})
    }

    Golem.CameraLockoff()
    GolemCore.CameraLockoff()
    EventFlags.SetFlag({'symbol': 'EvAreaA011', 'value': True})

    call AreaABossDead()

}

void Angry() {

    fork {

        fork {
            Audio.StopBGM({'label': 'BGM_BATTLE_BOSS_FOREST', 'duration': 1.0})
        } {
            Audio.PlayBGM({'ignoreSkip': True, 'label': 'BGM_BATTLE_BOSS_FOREST_BRIDGE', 'volume': 1.0})
        }


        fork {
            Golem.PlayAnimation({'name': 'ev_anger', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Golem.LookAtGimmick({'duration': 1.0, 'chaseRatio': 0.30000001192092896, 'distanceOffset': 4.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        }

        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
        Audio.WaitSamplePositionAndStopAndPlayBossGolemBgm({'label': 'BGM_BATTLE_BOSS_FOREST2', 'stoplabel': 'BGM_BATTLE_BOSS_FOREST_BRIDGE'})
    } {

        call EvResetCommon.AngryReset()

    }

}

void Down() {

    fork {
        Golem.WaitDownEnd()
    } {
        Golem.LookAtGimmick({'duration': 1.0, 'chaseRatio': 0.30000001192092896, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    }

    Golem.CameraLockoff()
    GolemCore.CameraLockon({'maxSpeed': 100.0})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
}

void AppearFlame() {
    Player.ForceTurn({'direction': 2})
    Zelda.SetRestartPositionToActor({'distance': -9.0, 'direction': 2, 'stance': 'Ground'})
    GameControl.RequestAutoSave({'immediate': True, 'name': 'GolemFlameMain', 'needsStartupEvent': False, 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})

    call BossCommon.PreMiniBoss()

    Golem.SetVisibility({'visible': True})
    GolemCore.SetVisibility({'visible': False})

    call BossCommon.MiniBossDoorClose({'enemy': ActorIdentifier(name="Golem")})

    if !EventFlags.CheckFlag({'symbol': 'EvAreaA008'}) {
        EventFlags.SetFlag({'symbol': 'EvAreaA008', 'value': True})
    }
    Golem.LookAtGimmick({'duration': 1.0, 'chaseRatio': 0.05000000074505806, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Golem.PlayAnimation({'name': 'ev_anger', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Audio.PlayBGM({'label': 'BGM_BATTLE_BOSS_FOREST', 'volume': 1.0, 'ignoreSkip': True})
    Golem.CameraLockon({'maxSpeed': 100.0})
    GameControl.ForbidSave()
    Player.UpdateStrongRespawnPoint()
}

void AngryFlame() {

    fork {

        fork {
            Audio.StopBGM({'label': 'BGM_BATTLE_BOSS_FOREST', 'duration': 1.0})
        } {
            Audio.PlayBGM({'ignoreSkip': True, 'label': 'BGM_BATTLE_BOSS_FOREST_BRIDGE', 'volume': 1.0})
        }


        fork {
            Golem.PlayAnimation({'name': 'ev_anger', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Golem.LookAtGimmick({'duration': 1.0, 'chaseRatio': 0.30000001192092896, 'distanceOffset': 4.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        }

        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
        Audio.WaitSamplePositionAndStopAndPlayBossGolemBgm({'label': 'BGM_BATTLE_BOSS_FOREST2', 'stoplabel': 'BGM_BATTLE_BOSS_FOREST_BRIDGE'})
    } {

        call EvResetCommon.AngryReset()

    }

}

void DownFlame() {

    fork {
        Golem.WaitDownEnd()
    } {
        Golem.LookAtGimmick({'duration': 1.0, 'chaseRatio': 0.30000001192092896, 'distanceOffset': 4.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    }

    Golem.CameraLockoff()
    GolemCore.CameraLockon({'maxSpeed': 100.0})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
}

void DeadFlame() {

    call BossCommon.HitStopCustom({'enemy': ActorIdentifier(name="GolemCore")})


    call BossCommon.MiniBossExtinction({'enemy': ActorIdentifier(name="GolemCore")})

    WarpBoss.LookAtGimmick({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvC_GolemFlameDead'})
    Timer.Wait({'time': 0.5})
    Audio.PlayJingle({'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
    Golem.CameraLockoff()
    GolemCore.CameraLockoff()
    GolemCore.Deactivate()
    Golem.Deactivate()
    Golem.RoomDoorOpen()
    Timer.Wait({'time': 1.0})
    GameControl.UnforbidSave()
    GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Audio.PlayZoneBGM({'stopbgm': True})
    Golem.Destroy()
}

void AreaABossDead() {
    Audio.SetBGMVolume({'volume': 0.0, 'duration': 1.0})

    call TriRelease()

}

void EnterBossArea() {
    Partner[companion].SetVisibility({'visible': True})
    Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetX': -1.0, 'offsetY': 1.0, 'offsetZ': -1.0, 'actor': ActorIdentifier(name="Zelda"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Timer.Wait({'time': 2.0})
    Partner[companion].PlayAnimationEx({'time': 0.0, 'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:EnterBossArea_10', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.699999988079071})

        call GeneralSequence.Look_at_Partner_neck()

    }

    Partner[companion].PlayAnimationNoWait({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:EnterBossArea_20', 'getAttention': False})
    Partner[companion].PlayAnimationEx({'time': 0.0, 'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void EnterBossArea_2() {
    Timer.Wait({'time': 0.4000000059604645})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].TalkKeep({'message': 'scenario/StoryAreaA:EnterBossArea_30', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:EnterBossArea_40', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void TriRelease() {

    call EvResetCommon.AllResetBossDead({'disappearHorse': True})

    GameControl.SetAllItemsVisibility({'visible': False})
    Golem.ResetActiveAndPesteActors({'child': True, 'cemeteryRevive': False, 'defeatedThrough': False, 'aliveCemeteryRevive': False})

    fork {
        ItemHeartContainer.SetVisibility({'visible': False})
    } {
        PartnerPhotonLiberation[a].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Golem"), 'offsetY': 0.0})
    } {
        PartnerPhotonLiberation[b].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Golem"), 'offsetY': 0.0})
    } {
        PartnerPhoton[a].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Golem"), 'offsetY': 0.0})
    } {
        PartnerPhoton[b].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Golem"), 'offsetY': 0.0})
    } {
        PartnerPhoton[c].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Golem"), 'offsetY': 0.0})
    } {
        PartnerPhoton[d].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Golem"), 'offsetY': 0.0})
    } {
        PartnerPhoton[e].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Golem"), 'offsetY': 0.0})
    } {
        PartnerPhoton[f].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Golem"), 'offsetY': 0.0})
    }


    fork {
        Camera.PlayLocationOriginCameraAnimation({'name': 'EvA_TriRelease01_cam', 'location': 'EvA_TriRelease01_cam', 'path': 'actor/PartnerPhotonLiberation.bfres', 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Player.SetVisibility({'visible': False})
        Timer.Wait({'time': 0.10000000149011612})
        Player.WarpToActorLinkedPointWithCompassPoint({'index': 1, 'direction': 2, 'actor': ActorIdentifier(name="Golem"), 'offsetY': 0.0})
        Timer.Wait({'time': 0.10000000149011612})
        Player.DestroyCollisionHitActors({'eventReset': False})
        Player.PlayAnimation({'name': 'ev_A_TriRelease_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
        Timer.Wait({'time': 0.10000000149011612})
        Partner[companion].WarpToActorLinkedPointWithCompassPoint({'index': 1, 'direction': 2, 'actor': ActorIdentifier(name="Golem"), 'offsetY': 0.0})
        Partner[companion].PlayAnimation({'name': 'ev_A_TriRelease_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        GameControl.ResetSensorEventResetContainsActors({'cemeteryRevive': False, 'eventReset': True})
    } {

        fork {
            PartnerPhotonLiberation[a].PlayTailorOtherChannelNoWait({'channel': 'Down', 'index': -1, 'restart': False, 'stopOnSkipped': True})
        } {
            PartnerPhoton[a].Activate()
            PartnerPhoton[a].SetVisibility({'visible': False})
            PartnerPhoton[a].SetCullMode({'cullMode': 0, 'enabled': True})
            PartnerPhoton[a].PlayAnimationNoWait({'name': 'ev_A_TriRelease_fall_1', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 3.1670000553131104})
            PartnerPhoton[a].SetVisibility({'visible': True})
        } {
            PartnerPhoton[b].Activate()
            PartnerPhoton[b].SetVisibility({'visible': False})
            PartnerPhoton[b].SetCullMode({'cullMode': 0, 'enabled': True})
            PartnerPhoton[b].PlayAnimationNoWait({'name': 'ev_A_TriRelease_fall_2', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 5.833000183105469})
            PartnerPhoton[b].SetVisibility({'visible': True})
        } {
            PartnerPhoton[c].Activate()
            PartnerPhoton[c].SetVisibility({'visible': False})
            PartnerPhoton[c].SetCullMode({'cullMode': 0, 'enabled': True})
            PartnerPhoton[c].PlayAnimationNoWait({'name': 'ev_A_TriRelease_fall_3', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 2.6670000553131104})
            PartnerPhoton[c].SetVisibility({'visible': True})
        } {
            PartnerPhoton[d].Activate()
            PartnerPhoton[d].SetVisibility({'visible': False})
            PartnerPhoton[d].SetCullMode({'cullMode': 0, 'enabled': True})
            PartnerPhoton[d].PlayAnimationNoWait({'name': 'ev_A_TriRelease_fall_4', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 3.8329999446868896})
            PartnerPhoton[d].SetVisibility({'visible': True})
        } {
            PartnerPhoton[e].Activate()
            PartnerPhoton[e].SetVisibility({'visible': False})
            PartnerPhoton[e].SetCullMode({'cullMode': 0, 'enabled': True})
            PartnerPhoton[e].PlayAnimationNoWait({'name': 'ev_A_TriRelease_fall_5', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 4.833000183105469})
            PartnerPhoton[e].SetVisibility({'visible': True})
        } {
            PartnerPhoton[f].Activate()
            PartnerPhoton[f].SetVisibility({'visible': False})
            PartnerPhoton[f].SetCullMode({'cullMode': 0, 'enabled': True})
            PartnerPhoton[f].PlayAnimationNoWait({'name': 'ev_A_TriRelease_fall_6', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 4.5})
            PartnerPhoton[f].SetVisibility({'visible': True})
        }

    }

    Partner.TalkKeep({'message': 'scenario/StoryAreaA:TouchWedge_010', 'getAttention': False})
    Partner.Talk({'message': 'scenario/StoryAreaA:TouchWedge_030', 'getAttention': False})

    fork {
        GameControl.ForbidLaunchApplet()
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Golem.ResetActiveAndPesteActors({'child': True, 'cemeteryRevive': False, 'defeatedThrough': False, 'aliveCemeteryRevive': False})
    } {
        Timer.Wait({'time': 21.299999237060547})
        Fade.StartPreset({'preset': 'FadeOutNormalW'})
        Audio.StopZoneBaseAmbience()
        Golem.Destroy()
        Golem.CameraLockoff()
        GolemCore.CameraLockoff()
    } {
        PartnerPhotonLiberation[a].StopTailorOtherChannel({'channel': 'Down', 'index': -1})
        PartnerPhotonLiberation[a].PlayTailorOtherChannelNoWait({'index': -1, 'channel': 'move_up', 'restart': False, 'stopOnSkipped': True})

        fork {
            Camera.PlayLocationOriginCameraAnimation({'location': 'EvA_TriRelease01_cam', 'path': 'actor/PartnerPhotonLiberation.bfres', 'name': 'EvA_TriRelease02_cam', 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
        } {
            Player.SetVisibility({'visible': True})
            Player.PlayAnimation({'name': 'ev_A_TriRelease', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner[companion].SetVisibility({'visible': True})
            Partner[companion].PlayAnimation({'name': 'ev_A_TriRelease', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } {

        fork {
            PartnerPhotonLiberation[a].PlayAnimation({'name': 'move_up_00', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            PartnerPhotonLiberation[b].PlayAnimation({'name': 'move_up_00', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            PartnerPhoton[a].PlayAnimation({'name': 'ev_A_TriRelease_wait_1', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            PartnerPhoton[b].PlayAnimation({'name': 'ev_A_TriRelease_wait_2', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            PartnerPhoton[c].PlayAnimation({'name': 'ev_A_TriRelease_wait_3', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            PartnerPhoton[d].PlayAnimation({'name': 'ev_A_TriRelease_wait_4', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            PartnerPhoton[e].PlayAnimation({'name': 'ev_A_TriRelease_wait_5', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            PartnerPhoton[f].PlayAnimation({'name': 'ev_A_TriRelease_wait_6', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }

    EventFlags.SetFlag({'symbol': 'EvAreaA012', 'value': True})
    EventVariables.SetVariable({'symbol': 'HyruleCastle_LuberiHouse:1290795765'})
    Audio.SetBGMVolume({'duration': 1.0, 'volume': 1.0})
    Partner[companion].DisableAutoMovement()
    EventVariables.SetVariable({'symbol': 'HyruleCastle_LuberiHouse:3666267468'})

    fork {
        Movie.Prepare({'filename': 'rd012_EvA_WorldGlobeActivate'})
    } {
        Audio.StopZoneBgm()
    }


    fork {
        Movie.Play({'autoClose': False})
    } {
        Timer.Wait({'time': 1.149999976158142})
        Audio.PlayBGM({'ignoreSkip': True, 'label': 'BGM_EV_REVIVING_AREA', 'volume': 1.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_WORLD_REPAIR_FOREST_ALL', 'volume': 1.0, 'pitch': 1.0})
    }

    Fade.StartPreset({'preset': 'CutOutW'})

    fork {
        Movie.Close()
    } {
        GameControl.UnforbidLaunchApplet()
    }

    Hud.PlayInAnim()
    GameControl.RequestLevelJump({'level': 'L_Dungeon001', 'locator': 'EV_AfterReleasTriTalk', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void BC_Appear() {

    call AppearCommon()

    Player.MoveToCompassPoint({'direction': 2, 'speed': 0, 'timeOut': 7.0, 'distance': 2.5, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})

    call AppearPerformance()

    Golem.PlayAnimation({'name': 'ev_appear_wait_ready', 'layer': 0, 'blendFrame': -1, 'restart': False})

    call BattleSetting()

    Audio.PlayBGM({'label': 'BGM_BATTLE_BOSS_FOREST', 'volume': 1.0, 'ignoreSkip': True})
}

void BC_Dead() {

    call BossCommon.HitStop({'enemy': ActorIdentifier(name="GolemCore")})

    GolemCore.PlayAnimationNoWait({'name': 'ev_dead', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 1.6670000553131104})

        call Dissolve.Dissolve({'actor': ActorIdentifier(name="GolemCore")})

        GolemCore.PlayMaterialAnimationNoWait({'name': 'GolemCore_dissolve', 'layer': 0})
        GolemCore.StopTailorOtherChannel({'channel': 'ac_Keep', 'index': -1})
    } {
        Timer.Wait({'time': 3.3329999446868896})
    }

    Timer.Wait({'time': 1.1670000553131104})

    call BossCommon.BossExtinction({'enemy': ActorIdentifier(name="GolemCore")})

    Golem.CameraLockoff()
    GolemCore.CameraLockoff()
    Golem.Destroy()
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    if BattleChallenge.GetConditionNumber() in [1, 2, 3] {
        BattleChallenge.SetNextLevelAndLocation({'NextLevelName': 'BC_BossAnomalocaris', 'NextLocatorName': 'BC_BossAnomalocaris_Start'})
    }
}

void AppearCommon() {
    Audio.StopAllBGM({'duration': 1.0})
    Camera.SetShadowMapSettings({'ShadowMapSettings': 'DemoStageCamera'})
    FlowControl.SetCanSkip({'enable': True})
    Player.SetInterestIkEnabled({'enable': True})

    fork {
        Zelda.SetShadowDecalEnable({'enable': False})
    } {
        FlowControl.PreloadTimeline({'filename': 'Golem'})
    }

}

void AppearPerformance() {

    fork {
        Player.SetVisibility({'visible': True})
    } {
        Golem.SetVisibility({'visible': False})
    } {
        GolemCore.SetVisibility({'visible': False})
    } {
        GolemCore.SetCullMode({'cullMode': 0, 'enabled': False})
    }


    fork {
        Audio.PlayOneshotSystemSE({'label': 'SE_ENEMY_GOLEM_APPEAR', 'volume': 1.0, 'pitch': 1.0})
    } {
        Camera.LerpDofSettings({'kind': 7, 'TiltShiftCenterX': 0.0, 'BlurRatio': 1.0, 'BlurSizeScale': 1.0, 'FocusRange': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftGamma': 2.0, 'TiltShiftBlurSizeScale': 1.0, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofBlurRatio': 1.0, 'duration': 0.0, 'TiltShiftDofBackBlurFadeWidth': 0.05000000074505806, 'TiltShiftCenterY': 0.699999988079071, 'FocalDistance': 45.0, 'TiltShiftRange': 0.18000000715255737, 'TiltShiftDofFocalDistance': 51.0, 'TiltShiftDofBackRange': 51.0, 'TiltShiftDofBackCurve': 0.5, 'noWait': False})
    }

    FlowControl.InvokeTimeline({'filename': 'Golem', 'rate': 1.0})
}

void BattleSetting() {

    fork {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Golem"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Golem"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Golem.CameraLockon({'maxSpeed': 100.0})
    }


    fork {
        GolemCore.SetCullMode({'cullMode': 1, 'enabled': True})
    } {
        GolemCore.SetVisibility({'visible': False})
    }

    Zelda.SetShadowDecalEnable({'enable': True})
    Partner[companion].EnableAutoMovement()

    fork {
        Door.SetVisibility({'visible': True})
        Golem.RoomDoorClose()
    } {
        Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})
        Camera.SetShadowMapSettings({'ShadowMapSettings': 'Default'})
    }

}
