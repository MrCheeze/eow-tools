-------- EventFlow: LastBossMu02 --------

Actor: Player
entrypoint: None()
actions: ['ResetCarriedActor', 'BreakBurrowable', 'StopBurning', 'HideTimedAbilityEffect']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['SetVisibility', 'PlayAnimationNoWait', 'SetCullMode', 'AimCompassPoint', 'WarpToActor', 'AimActor', 'MoveToBesideTargetActor', 'AimPlayer', 'AimDegreeAngle', 'AimActorLinkedPoint', 'MoveToTargetActor', 'WarpToActorLinkedPoint']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayBGM', 'StopAllBGM', 'WaitSamplePositionAndStopAndPlayMu3OutroBgm', 'PlayOneshotSystemSE', 'Prepare', 'StopSE', 'StopZoneBaseAmbience']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Reset', 'BeginInnerScroll', 'SetShadowMapSettings', 'PlayActorOriginCameraAnimation', 'SetTonemapExposure', 'Quake']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['Signal']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['SetCanSkip']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump', 'UnforbidSave', 'SetAllItemsVisibility', 'DestroyAllProjectiles']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['Close']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['PlayAnimation', 'PlayAnimationNoWait', 'AimActor', 'WarpToActorLinkedPoint', 'SetVisibility', 'SetEquipmentVisibility', 'WarpToActor', 'SetCullMode', 'AimCompassPoint', 'SetFacialExpression', 'SetGravityEnable', 'AbsorbAllPastedActors', 'AimDegreeAngle', 'AimActorLinkedPoint', 'SetInterestIkEnabled', 'SetShadowDecalEnable']
queries: []
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset', 'StartParam']
queries: []
params: None

Actor: Environment
entrypoint: None()
actions: ['LockCurrentRegion', 'UnlockCurrentRegion']
queries: []
params: None

Actor: LastBossMu02
entrypoint: None()
actions: ['CameraLockon', 'AimActorLinkedPoint', 'PlayAnimation', 'ResetActiveAndPesteActors', 'PullCountIncrement', 'PullCountReset', 'WarpToLinkedPoint', 'LookAtStage', 'SetGravityEnable', 'SetCollisionEnabled', 'ChangeHPLock', 'SetTailorProperty', 'PlayTailorOtherChannelNoWait', 'ChangeDamageState', 'StopTailorOtherChannel', 'PlayMotionTentacle', 'Talk', 'PlayAnimationNoWait', 'PlayMaterialAnimationNoWait', 'AimDegreeAngle', 'Deactivate', 'Activate', 'PlayMotionTentacleNumber', 'LookAtGimmick', 'SetCullMode', 'WarpToActor', 'SetTalkerName', 'PlayMaterialTentacleAll']
queries: ['PullCountCheck']
params: None

Actor: CompanionLink
entrypoint: None()
actions: ['Deactivate', 'SetVisibility', 'AimCompassPoint', 'WarpToActor']
queries: []
params: None

Actor: Sync
entrypoint: None()
actions: ['SyncReset']
queries: []
params: None

Actor: EvLink
entrypoint: None()
actions: ['MoveToBesideTargetActor', 'Activate', 'PlayAnimation', 'AimActor', 'PlayAnimationNoWait', 'SetComponentActive', 'WarpToActor', 'AimCompassPoint', 'SetCullMode', 'SetVisibility', 'Deactivate', 'WarpToLinkedPoint', 'AimActorLinkedPoint', 'AimDegreeAngle', 'SetInterestIkEnabled', 'WarpToActorLinkedPoint', 'SetShapeVisibility', 'MoveToTargetActor', 'SetCollisionEnabled', 'SetGravityEnable', 'ChangeSteeringAnimation', 'SetFacialExpression']
queries: []
params: None

Actor: LastBattleKeyInputUI
entrypoint: None()
actions: ['PreloadArchive', 'Show', 'Hide', 'WaitForInput']
queries: ['GetResult']
params: None

Actor: Triforce
entrypoint: None()
actions: ['WarpToActor', 'Activate', 'PlayAnimation', 'PlayAnimationNoWait', 'SetCullMode', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel']
queries: []
params: None

Actor: TriforcePiece
entrypoint: None()
actions: ['SetVisibility', 'PlayTailorOtherChannelNoWait', 'Deactivate', 'PlayAnimationNoWait']
queries: []
params: None

Actor: LastBossPhase3Room
entrypoint: None()
actions: ['SetInstanceVariableInt']
queries: []
params: None

Actor: Vibration
entrypoint: None()
actions: ['PlayVibration']
queries: []
params: None

Actor: EvBackWallMuPhase3
entrypoint: None()
actions: ['SetComponentActive']
queries: []
params: None

Actor: NxSystemControl
entrypoint: None()
actions: ['SetUserInactivityDetectionTimeExtendedUnsafe']
queries: []
params: None

Actor: Dungeon
entrypoint: None()
actions: ['SetDungeonCleared']
queries: []
params: None

void Appear() {

    call EvResetCommon.AllReset()

    EventFlags.SetFlag({'value': True, 'symbol': 'LastDungeon_ReturnWeaponToLink'})
    Audio.StopAllBGM({'duration': 0.5})
    EvLink.WarpToActor({'distance': 0.0, 'actor': ActorIdentifier(name="CompanionLink"), 'offsetX': -1.0, 'offsetY': 0.0})

    fork {
        EvLink.Activate()
        EvLink.AimCompassPoint({'duration': 0.0, 'direction': 2, 'withoutTurn': False, 'immediateTurn': False})
        EvLink.SetShapeVisibility({'shapeName': 'blade_low__MI_sword', 'visible': False})
        EvLink.SetShapeVisibility({'visible': False, 'shapeName': 'bis_low__MI_shieldA'})
    } {
        CompanionLink.AimCompassPoint({'duration': 0.0, 'direction': 2, 'withoutTurn': False, 'immediateTurn': False})
        CompanionLink.SetVisibility({'visible': False})
    } {
        Zelda.SetGravityEnable({'enable': False})
        Zelda.WarpToActor({'offsetY': 15.0, 'actor': ActorIdentifier(name="Zelda"), 'distance': 0.0, 'offsetX': 0.0})
        Zelda.AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
        Partner[companion].WarpToActor({'distance': 1.0, 'offsetX': -1.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 20.0})
        Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.10000000149011612, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Audio.Prepare({'label': 'BGM_MU3_INTRO', 'kind': 0, 'volume': 1.0})
    }


    fork {
        Zelda.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    } {
        LastBossMu02.SetGravityEnable({'enable': False})
    } {
        LastBossMu02.SetCollisionEnabled({'enable': False})
    } {
        LastBossMu02.Deactivate()
    }


    fork {
        LastBossMu02.PlayAnimation({'name': 'ev_LastBossThirdStepAppear_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        LastBossMu02.PlayMotionTentacleNumber({'baseName': 'ev_LastBossThirdStepAppear_l_base_wait', 'name': 'ev_LastBossThirdStepAppear_l_arm_wait', 'num': 0})
    } {
        LastBossMu02.PlayMotionTentacleNumber({'baseName': 'ev_LastBossThirdStepAppear_ul_base_wait', 'name': 'ev_LastBossThirdStepAppear_ul_arm_wait', 'num': 1})
    } {
        LastBossMu02.PlayMotionTentacleNumber({'baseName': 'ev_LastBossThirdStepAppear_b_base_wait', 'name': 'ev_LastBossThirdStepAppear_b_arm_wait', 'num': 2})
    } {
        LastBossMu02.PlayMotionTentacleNumber({'name': 'ev_LastBossThirdStepAppear_ur_base_wait', 'baseName': 'ev_LastBossThirdStepAppear_ur_arm_wait', 'num': 3})
    } {
        LastBossMu02.PlayMotionTentacleNumber({'baseName': 'ev_LastBossThirdStepAppear_r_base_wait', 'name': 'ev_LastBossThirdStepAppear_r_arm_wait', 'num': 4})
    }

    Environment.LockCurrentRegion({'regionName': 'BossMuPhase1', 'enableBlend': False})
    EvLink.PlayAnimationNoWait({'name': 'search', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.2999999523162842})

    fork {
        Camera.PlayActorOriginCameraAnimation({'name': 'LastBossThirdStepAppear01_cam', 'offsetX': -1.0, 'offsetZ': 7.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'path': 'actor/LastBossMu.bfres', 'nearClipDistanceCtrl': True, 'farClipDistanceCtrl': True, 'target': ActorIdentifier(name="CompanionLink"), 'chaseRatio': 1.0, 'offsetY': 0.0, 'aspectRatioCtrl': False})
    } {

        fork {

            fork {
                Fade.StartPreset({'preset': 'FadeInNormal'})
            } {
                Camera.Quake({'initPower': 1, 'duration': 0.5, 'targetPower': 2})
            }


            fork {
                Zelda.SetVisibility({'visible': True})
            } {
                Partner[companion].SetVisibility({'visible': True})
            } {
                FlowControl.SetCanSkip({'enable': True})
            }

        } {
            Audio.PlayOneshotSystemSE({'label': 'SE_EV_NULL02_APPEAR1', 'volume': 1.0, 'pitch': 1.0})
        } {
            Audio.PlayBGM({'label': 'BGM_MU3_INTRO', 'ignoreSkip': False, 'volume': 1.0})
        }


        fork {
            Timer.Wait({'time': 0.6000000238418579})
            Zelda.PlayAnimationNoWait({'name': 'damage_blowaway_reverse_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Zelda.SetGravityEnable({'enable': True})
            Timer.Wait({'time': 1.0499999523162842})
            Zelda.PlayAnimation({'name': 'damage_blowaway_reverse_ed,down_reverse_lp', 'blendFrame': 3, 'layer': 0, 'restart': False})
            Timer.Wait({'time': 2.4000000953674316})
            Zelda.PlayAnimation({'name': 'down_reverse_ed,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 0.3499999940395355})
            Zelda.SetInterestIkEnabled({'enable': True})
            Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="EvLink"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Timer.Wait({'time': 0.6000000238418579})
            Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetY': -1.0, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].AimPlayer({'duration': 0.20000000298023224, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Partner[companion].PlayAnimationNoWait({'name': 'move_down', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Partner[companion].MoveToBesideTargetActor({'offsetY': 1.0, 'speed': 1, 'withoutTurn': True, 'offsetX': -4.199999809265137, 'offsetZ': 1.600000023841858, 'customSpeed': 45.0, 'actor': ActorIdentifier(name="EvLink"), 'tolerance': 0.0, 'timeOut': 7.0, 'method': 0})
            Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Partner[companion].MoveToTargetActor({'offsetY': 1.0, 'timeOut': 7.0, 'speed': 1, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': 1.100000023841858, 'distance': 1.100000023841858, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
            Partner[companion].AimActor({'offsetY': 1.0, 'actor': ActorIdentifier(name="Zelda"), 'duration': 0.30000001192092896, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Partner[companion].PlayAnimationNoWait({'name': 'ev_think', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 1.2000000476837158})
            Partner[companion].MoveToTargetActor({'offsetY': 1.0, 'timeOut': 7.0, 'withoutTurn': True, 'offsetX': 0.800000011920929, 'distance': 0.800000011920929, 'actor': ActorIdentifier(name="Zelda"), 'speed': 0, 'tolerance': 0.0, 'customSpeed': 0.0, 'method': 0})
        } {
            Timer.Wait({'time': 1.75})
            EvLink.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            EvLink.AimActor({'offsetZ': 0.0, 'withoutTurn': False, 'actor': ActorIdentifier(name="Zelda"), 'duration': 0.20000000298023224, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'immediateTurn': False})
            Timer.Wait({'time': 0.10000000149011612})
            EvLink.PlayAnimationNoWait({'name': 'find,wait', 'layer': 0, 'blendFrame': 4, 'restart': False})
            Timer.Wait({'time': 0.20000000298023224})
            EvLink.SetInterestIkEnabled({'enable': False})
            EvLink.AimActor({'withoutTurn': False, 'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="Zelda"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            EvLink.MoveToBesideTargetActor({'speed': 1, 'withoutTurn': False, 'offsetZ': -0.5, 'offsetX': 0.8999999761581421, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0})
            EvLink.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Timer.Wait({'time': 1.5})
            EvLink.MoveToTargetActor({'speed': 1, 'withoutTurn': True, 'offsetX': 0.0, 'distance': -0.30000001192092896, 'actor': ActorIdentifier(name="EvLink"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetY': 0.0})
        } {
            Timer.Wait({'time': 1.2000000476837158})
            Camera.Quake({'targetPower': 0, 'initPower': 2, 'duration': 1.0})
        }


        fork {
            Timer.Wait({'time': 1.100000023841858})
            Zelda.SetInterestIkEnabled({'enable': False})
            Zelda.AimDegreeAngle({'angle': 150.0, 'duration': 0.30000001192092896, 'withoutTurn': False, 'immediateTurn': False})
            Timer.Wait({'time': 0.4000000059604645})
            Zelda.PlayAnimationNoWait({'name': 'search', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 2.200000047683716})
            Zelda.SetInterestIkEnabled({'enable': True})
            Zelda.PlayAnimationNoWait({'name': 'wait', 'blendFrame': 4, 'layer': 0, 'restart': False})
            Zelda.AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
            Zelda.AimActorLinkedPoint({'withoutTurn': True, 'actor': ActorIdentifier(name="LastBossMu02"), 'pointIndex': 3, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 1.2000000476837158})
            Partner[companion].AimDegreeAngle({'angle': 150.0, 'duration': 0.800000011920929, 'withoutTurn': False, 'immediateTurn': False})
            Timer.Wait({'time': 0.4000000059604645})
            Partner[companion].PlayAnimationNoWait({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 1.5})
            Partner[companion].PlayAnimationNoWait({'name': 'wait', 'blendFrame': 4, 'layer': 0, 'restart': False})
            Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
            Partner[companion].AimActorLinkedPoint({'pointIndex': 3, 'actor': ActorIdentifier(name="LastBossMu02"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            EvLink.SetInterestIkEnabled({'enable': True})
            Timer.Wait({'time': 1.0})
            EvLink.AimDegreeAngle({'duration': 0.30000001192092896, 'angle': 190.0, 'withoutTurn': False, 'immediateTurn': False})
            Timer.Wait({'time': 0.4000000059604645})
            EvLink.SetInterestIkEnabled({'enable': False})
            EvLink.PlayAnimationNoWait({'name': 'search', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 1.600000023841858})
            EvLink.PlayAnimationNoWait({'name': 'wait', 'blendFrame': 4, 'layer': 0, 'restart': False})
            EvLink.AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
            EvLink.SetInterestIkEnabled({'enable': True})
            EvLink.AimActorLinkedPoint({'withoutTurn': True, 'pointIndex': 3, 'actor': ActorIdentifier(name="LastBossMu02"), 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Camera.Quake({'duration': 1.0, 'initPower': 0, 'targetPower': 1})
        }

        Timer.Wait({'time': 0.5})
    }


    call Appear1()

}

void HP0Down() {
    EventVariables.SetVariable({'symbol': 'LastDungeon:637992014'})

    call BossCommon.HitStopNonStopBGM({'enemy': ActorIdentifier(name="LastBossMu02")})


    call EvResetCommon.AllReset_02()

    LastBossMu02.ResetActiveAndPesteActors({'child': True, 'cemeteryRevive': False, 'defeatedThrough': False, 'aliveCemeteryRevive': False})

    fork {
        LastBossMu02.AimActorLinkedPoint({'duration': 1.0, 'pointIndex': 0, 'actor': ActorIdentifier(name="LastBossMu02"), 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        LastBossMu02.PlayAnimation({'name': 'Third_dead_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        LastBossMu02.PlayAnimation({'name': 'Third_dead_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        LastBossMu02.ChangeDamageState({'frame': 5.0})
    } {
        Timer.Wait({'time': 1.0})
        LastBossMu02.StopTailorOtherChannel({'channel': 'ac_KeepTriforcePiece', 'index': -1})
        LastBossMu02.PlayTailorOtherChannelNoWait({'channel': 'ac_KeepTriforcePiece_PullWait', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Timer.Wait({'time': 1.0})
        Audio.PlayOneshotSystemSE({'label': 'SE_ENEMY_NULL02_TRIFORCE_LAST', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 2.0})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
}

void TriforceSync() {
    EventFlags.SetFlag({'symbol': 'LastDungeon_ReturnWeaponToLink', 'value': False})

    fork {
        EvLink.SetComponentActive({'name': 'PropplayerSword', 'active': False})
    } {
        EvLink.SetComponentActive({'name': 'PropplayerShield', 'active': False})
    }


    fork {
        Audio.StopAllBGM({'duration': 1.0})
        Audio.PlayBGM({'label': 'BGM_MU3_OUTRO_A', 'ignoreSkip': False, 'volume': 1.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_TRIFORCE_SYNC1_TRYFORCE_LP', 'volume': 1.0, 'pitch': 1.0})
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_TRIFORCE_SYNC1_1', 'volume': 1.0, 'pitch': 1.0})
    } {
        Audio.StopSE({'label': 'SE_ZELDA_SYNC_LINE1', 'duration': 0.5})
    }

    Zelda.SetFacialExpression({'expression': 'serious_few'})
    Zelda.PlayAnimation({'name': 'ev_TriForceEnd_pull_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.AimActor({'actor': ActorIdentifier(name="LastBossMu02"), 'duration': 0.10000000149011612, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.20000000298023224})
    Fade.StartPreset({'preset': 'FadeOutFastB'})

    fork {
        Zelda.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    } {
        GameControl.SetAllItemsVisibility({'visible': False})
    } {
        GameControl.DestroyAllProjectiles()
    } {
        Player.BreakBurrowable()
    } {
        Player.ResetCarriedActor()
    } {
        Player.StopBurning()
    } {
        Player.HideTimedAbilityEffect()
    } {
        Zelda.SetShadowDecalEnable({'enable': False})
    }

    EvLink.WarpToLinkedPoint({'index': 0, 'offsetY': 0.0})
    EvLink.SetVisibility({'visible': True})
    LastBossMu02.WarpToLinkedPoint({'index': 1, 'offsetY': 0.0})
    LastBossMu02.PlayAnimation({'name': 'ev_TriForceEnd_pull_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    LastBossMu02.AimActorLinkedPoint({'duration': 0.0, 'pointIndex': 0, 'actor': ActorIdentifier(name="LastBossMu02"), 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    LastBossMu02.LookAtStage({'chaseRatio': 1.0, 'duration': 0.10000000149011612, 'offsetZ': -6.0, 'panMode': 2, 'offsetX': -2.5, 'offsetY': 0.0, 'distanceOffset': 5.0, 'keep': False})
    Zelda.WarpToActorLinkedPoint({'index': 2, 'actor': ActorIdentifier(name="LastBossMu02"), 'offsetY': 0.0})
    Partner[companion].WarpToActor({'offsetY': 2.0, 'offsetX': 0.20000000298023224, 'actor': ActorIdentifier(name="LastBossMu02"), 'distance': 1.2000000476837158})
    Partner[companion].AimActor({'offsetY': 3.0, 'duration': 0.0, 'actor': ActorIdentifier(name="LastBossMu02"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    LastBossMu02.AimDegreeAngle({'duration': 0.0, 'angle': 32.0, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        EvLink.Activate()
    } {
        CompanionLink.Deactivate()
    } {
        Zelda.AimActor({'duration': 0.10000000149011612, 'withoutTurn': False, 'actor': ActorIdentifier(name="LastBossMu02"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        EvLink.SetComponentActive({'active': False, 'name': 'PropplayerSword'})
        EvLink.SetComponentActive({'active': False, 'name': 'PropplayerShield'})
    } {
        LastBossMu02.StopTailorOtherChannel({'channel': 'ac_KeepTriforcePiece_PullWait', 'index': -1})
    } {
        TriforcePiece.PlayAnimationNoWait({'name': 'ev_LastBossThirdStepAppear_dead', 'layer': 0, 'blendFrame': -1, 'restart': False})
        TriforcePiece.SetVisibility({'visible': True})
        TriforcePiece.PlayTailorOtherChannelNoWait({'channel': 'pulling', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    }

    Zelda.PlayAnimation({'name': 'ev_TriForceEnd_pull_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.20000000298023224})

    fork {
        EvLink.SetCollisionEnabled({'enable': False})
        EvLink.SetGravityEnable({'enable': False})
        EvLink.ChangeSteeringAnimation({'run': 'move_fast_barehands', 'idle': 'wait_barehands', 'walk': 'move_barehands', 'layer': 0})
        EvLink.MoveToBesideTargetActor({'timeOut': 5.0, 'speed': 1, 'withoutTurn': False, 'tolerance': 0.0, 'offsetZ': 0.800000011920929, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': 0.4000000059604645, 'offsetY': 0.0, 'customSpeed': 0.0, 'method': 0})
    } {
        Fade.StartPreset({'preset': 'FadeInFast'})
    }


    fork {
        EvLink.ChangeSteeringAnimation({'idle': 'ev_TriForceEnd_pull_st', 'walk': 'ev_TriForceEnd_pull_st', 'run': 'ev_TriForceEnd_pull_st', 'layer': 0})
        EvLink.MoveToBesideTargetActor({'timeOut': 5.0, 'withoutTurn': False, 'tolerance': 0.10000000149011612, 'offsetZ': 0.30000001192092896, 'offsetX': 0.10000000149011612, 'speed': 0, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 0.0, 'customSpeed': 0.0, 'method': 0})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        EvLink.AimActor({'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="LastBossMu02"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    LastBattleKeyInputUI.PreloadArchive()

    fork {
        Zelda.PlayAnimation({'name': 'ev_TriForceEnd_pull_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EvLink.PlayAnimation({'name': 'ev_TriForceEnd_pull_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        LastBossMu02.PlayAnimation({'name': 'ev_TriForceEnd_pull_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        LastBattleKeyInputUI.Show()
    } {
        Audio.StopSE({'label': 'SE_EV_TRIFORCE_SYNC1_1', 'duration': 0.5})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_TRIFORCE_SYNC1_2', 'volume': 1.0, 'pitch': 1.0})
    }


    call presskey({'count': 6})

    Audio.StopSE({'label': 'SE_EV_TRIFORCE_SYNC1_2', 'duration': 0.5})

    fork {

        call playMotion({'name': 'ev_TriForceEnd_pull_back'})

    } {
        LastBossMu02.LookAtStage({'panMode': 2, 'offsetY': 0.0, 'offsetX': -2.5, 'offsetZ': -6.0, 'duration': 0.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 3.5, 'keep': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_TRIFORCE_SYNC1_3', 'volume': 1.0, 'pitch': 1.0})
    }


    call playMotion({'name': 'ev_TriForceEnd_pull_wait'})


    call presskey({'count': 6})

    Audio.StopSE({'label': 'SE_EV_TRIFORCE_SYNC1_3', 'duration': 0.5})

    fork {

        call playMotion({'name': 'ev_TriForceEnd_pull_back'})

    } {
        LastBossMu02.LookAtStage({'panMode': 2, 'offsetY': 0.0, 'offsetX': -2.5, 'offsetZ': -6.0, 'duration': 0.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 2.0, 'keep': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_TRIFORCE_SYNC1_4', 'volume': 1.0, 'pitch': 1.0})
    }


    call playMotion({'name': 'ev_TriForceEnd_pull_wait'})


    call presskey({'count': 6})

    Audio.StopSE({'label': 'SE_EV_TRIFORCE_SYNC1_4', 'duration': 1.5})

    fork {

        call playMotion({'name': 'ev_TriForceEnd_pull_back'})

    } {
        LastBossMu02.LookAtStage({'panMode': 2, 'offsetY': 0.0, 'offsetX': -2.5, 'offsetZ': -6.0, 'duration': 0.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.5, 'keep': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_TRIFORCE_SYNC1_5', 'volume': 1.0, 'pitch': 1.0})
    }


    call playMotion({'name': 'ev_TriForceEnd_pull_wait'})


    call presskey({'count': 14})

    Audio.StopSE({'label': 'SE_EV_TRIFORCE_SYNC1_TRYFORCE_LP', 'duration': 1.0})

    fork {
        Zelda.PlayAnimation({'name': 'ev_TriForceEnd_pull_ed', 'restart': True, 'layer': 0, 'blendFrame': -1})
    } {
        EvLink.PlayAnimation({'name': 'ev_TriForceEnd_pull_ed', 'restart': True, 'layer': 0, 'blendFrame': -1})
    } {
        LastBossMu02.PlayAnimation({'name': 'ev_TriForceEnd_pull_ed', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 2.5299999713897705})
        Partner[companion].PlayAnimationNoWait({'name': 'ev_TriForceEnd_pull_ed', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        LastBattleKeyInputUI.Hide()
    } {
        Timer.Wait({'time': 2.5})
        Sync.SyncReset()
    } {
        Timer.Wait({'time': 2.5})
        Vibration.PlayVibration({'label': '07_B08_Boom1', 'ratio': 3.0, 'pan': 0.5})
    } {
        Timer.Wait({'time': 0.5})
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_TRIFORCE_SYNC1_6', 'volume': 1.0, 'pitch': 1.0})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Audio.StopSE({'label': 'SE_EV_TRIFORCE_SYNC1_5', 'duration': 0.5})
    }


    call LastBossMuDeadBefore()

}

void presskey() {
    Event95:
    LastBossMu02.PullCountReset()
    Event96:
    LastBattleKeyInputUI.WaitForInput({'timeout': 1.0})
    if !LastBattleKeyInputUI.GetResult() {
        if !LastBossMu02.PullCountCheck({'count': 1}) {
            goto Event96
        } else {

            call playMotion({'name': 'ev_TriForceEnd_pull_wait'})

            goto Event95
        }
    } else {
        LastBossMu02.PullCountIncrement()
        if !LastBossMu02.PullCountCheck({'count': 1}) {
            Event103:
            if !LastBossMu02.PullCountCheck({'count': 'count'}) {
                Timer.Wait({'time': 0.05000000074505806})
                goto Event96
            }
        } else
        if !LastBossMu02.PullCountCheck({'count': 2}) {

            call playMotion({'name': 'ev_TriForceEnd_pull_lp'})

        }
        goto Event103
    }
}

void playMotion() {

    fork {
        Zelda.PlayAnimation({'name': 'name', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EvLink.PlayAnimation({'name': 'name', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        LastBossMu02.PlayAnimation({'name': 'name', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void Damage1() {

    fork {

        fork {
            Timer.Wait({'time': 1.0})

            fork {
                LastBossMu02.SetTailorProperty({'propertyIndex': 0, 'value': '2', 'index': -1})
            } {
                LastBossMu02.PlayTailorOtherChannelNoWait({'channel': 'Switch2', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            } {
                LastBossMu02.ChangeDamageState({'frame': 2.0})
            }

        } {
            LastBossMu02.PlayAnimation({'name': 'Third_damage_change', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            LastBossMu02.PlayMotionTentacle({'name': 'Third_Arm_damage_change', 'baseName': ''})
        } {
            Timer.Wait({'time': 0.699999988079071})
        } {
            LastBossMu02.LookAtGimmick({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        }

        LastBossMu02.ChangeHPLock({'step': 1})
    } {

        call EvResetCommon.AngryReset()

    }

}

void Damage3() {

    fork {

        fork {
            Timer.Wait({'time': 1.0})

            fork {
                LastBossMu02.SetTailorProperty({'propertyIndex': 0, 'value': '3', 'index': -1})
            } {
                LastBossMu02.PlayTailorOtherChannelNoWait({'channel': 'Switch3', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            } {
                LastBossMu02.ChangeDamageState({'frame': 3.0})
            }

        } {
            LastBossMu02.PlayAnimation({'name': 'Third_damage_change', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            LastBossMu02.PlayMotionTentacle({'name': 'Third_Arm_damage_change', 'baseName': ''})
        } {
            Timer.Wait({'time': 0.699999988079071})
        } {
            LastBossMu02.LookAtGimmick({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        }

        LastBossMu02.ChangeHPLock({'step': 2})
        EventVariables.SetVariable({'symbol': 'LastDungeon:1215263039'})
    } {

        call EvResetCommon.AngryReset()

    }

}

void Appear1() {
    LastBossMu02.SetCullMode({'cullMode': 0, 'enabled': True})
    LastBossMu02.WarpToActor({'distance': 0.5, 'actor': ActorIdentifier(name="LastBossMu02"), 'offsetY': 0.0, 'offsetX': 0.0})
    LastBossMu02.Activate()
    Audio.PlayOneshotSystemSE({'label': 'SE_EV_NULL02_APPEAR2', 'volume': 1.0, 'pitch': 1.0})

    fork {
        Timer.Wait({'time': 13.666000366210938})

        fork {
            LastBossMu02.PlayTailorOtherChannelNoWait({'channel': 'Radiant_Line', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            Timer.Wait({'time': 3.5})
            LastBossMu02.StopTailorOtherChannel({'channel': 'Radiant_Line', 'index': -1})
        } {
            Environment.UnlockCurrentRegion({'regionName': 'BossMuPhase1', 'enableBlend': True})
        }

    } {
        Camera.PlayActorOriginCameraAnimation({'name': 'LastBossThirdStepAppear02_cam', 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'path': 'actor/LastBossMu.bfres', 'nearClipDistanceCtrl': True, 'farClipDistanceCtrl': True, 'offsetX': 0.0, 'offsetZ': 0.0, 'target': ActorIdentifier(name="LastBossMu02"), 'chaseRatio': 1.0, 'offsetY': 0.0, 'aspectRatioCtrl': False})
    } {
        Timer.Wait({'time': 9.0})
        Camera.Quake({'targetPower': 0, 'duration': 3.0, 'initPower': 1})
    } {
        Timer.Wait({'time': 5.0})
        LastBossPhase3Room.SetInstanceVariableInt({'name': 'color', 'value': 1})
    } {
        Zelda.SetVisibility({'visible': False})
        Zelda.WarpToActorLinkedPoint({'index': 4, 'actor': ActorIdentifier(name="LastBossMu02"), 'offsetY': 0.0})
        Zelda.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
        Partner[companion].WarpToActorLinkedPoint({'index': 6, 'actor': ActorIdentifier(name="LastBossMu02"), 'offsetY': 0.0})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="LastBossMu02"), 'offsetX': -1.0, 'duration': 0.4000000059604645, 'boneName': '', 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        EvLink.SetVisibility({'visible': False})
        EvLink.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="LastBossMu02"), 'index': 5, 'offsetY': 0.0})
        CompanionLink.WarpToActor({'actor': ActorIdentifier(name="EvLink"), 'distance': 0.0, 'offsetY': 0.0, 'offsetX': 0.0})
        EvLink.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        CompanionLink.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {

        fork {
            LastBossMu02.PlayTailorOtherChannelNoWait({'channel': 'ev_LastBossThirdStepAppear', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            LastBossMu02.PlayAnimation({'name': 'ev_LastBossThirdStepAppear', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            LastBossMu02.PlayMotionTentacleNumber({'name': 'ev_LastBossThirdStepAppear_l_arm', 'baseName': 'ev_LastBossThirdStepAppear_l_base', 'num': 0})
        } {
            LastBossMu02.PlayMotionTentacleNumber({'name': 'ev_LastBossThirdStepAppear_ul_arm', 'baseName': 'ev_LastBossThirdStepAppear_ul_base', 'num': 1})
        } {
            LastBossMu02.PlayMotionTentacleNumber({'name': 'ev_LastBossThirdStepAppear_b_arm', 'baseName': 'ev_LastBossThirdStepAppear_b_base', 'num': 2})
        } {
            LastBossMu02.PlayMotionTentacleNumber({'num': 3, 'name': 'ev_LastBossThirdStepAppear_ur_arm', 'baseName': 'ev_LastBossThirdStepAppear_ur_base'})
        } {
            LastBossMu02.PlayMotionTentacleNumber({'name': 'ev_LastBossThirdStepAppear_r_arm', 'baseName': 'ev_LastBossThirdStepAppear_r_base', 'num': 4})
        } {
            LastBossMu02.PlayMaterialAnimationNoWait({'layer': 1, 'name': 'ev_LastBossThirdStepAppear'})
        } {
            LastBossMu02.PlayMaterialTentacleAll({'animName': 'ev_LastBossThirdStepAppear', 'layer': 0})
        }

    } {
        Timer.Wait({'time': 4.0})

        fork {
            Zelda.SetVisibility({'visible': True})
            Zelda.PlayAnimationNoWait({'name': 'ev_LastBossAppear_battle_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner[companion].SetVisibility({'visible': True})
        } {
            EvLink.SetVisibility({'visible': True})
            EvLink.PlayAnimationNoWait({'name': 'ev_BossApear_battle_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            EvLink.SetShapeVisibility({'shapeName': 'blade_low__MI_sword', 'visible': True})
            EvLink.SetShapeVisibility({'shapeName': 'bis_low__MI_shieldA', 'visible': True})
        }

    }


    fork {
        Camera.SetShadowMapSettings({'ShadowMapSettings': 'Default'})
    } {
        Zelda.SetFacialExpression({'expression': 'serious_few'})
    } {
        CompanionLink.SetVisibility({'visible': True})
        EvLink.Deactivate()
    } {
        LastBossMu02.SetCollisionEnabled({'enable': True})
        Timer.Wait({'time': 0.10000000149011612})

        fork {
            LastBossMu02.PlayAnimation({'name': 'Third_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            LastBossMu02.PlayMotionTentacle({'name': 'Third_Arm_wait', 'baseName': 'Third_Arm_wait_base'})
        }

    }


    fork {
        Audio.PlayBGM({'ignoreSkip': True, 'label': 'BGM_BATTLE_BOSS_MU3', 'volume': 1.0})
    } {
        LastBossMu02.CameraLockon({'maxSpeed': 100.0})
    } {
        Camera.BeginInnerScroll({'halfSizeX': 11.25, 'centerY': 0.0, 'halfSizeY': 10.0, 'distanceToLookAt': 30.0, 'centerX': 79.0, 'halfSizeZ': 10.0, 'centerZ': -264.0})
    }

    LastBossPhase3Room.SetInstanceVariableInt({'name': 'color', 'value': 2})
    LastBossMu02.ChangeHPLock({'step': 0})
}

void LastBossDead() {

    fork {
        Zelda.PlayAnimation({'name': 'ev_LastBossDead', 'blendFrame': 20, 'layer': 0, 'restart': False})
    } {
        EvLink.PlayAnimation({'name': 'ev_LastBossDead', 'blendFrame': 20, 'layer': 0, 'restart': False})
    } {
        Triforce.PlayAnimation({'name': 'ev_LastBossDead', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 15.782999992370605})
        Triforce.PlayTailorOtherChannelNoWait({'channel': 'Triforce_Glow', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Timer.Wait({'time': 13.0})
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_TRIFORCE_SYNC5_1', 'volume': 1.0, 'pitch': 1.0})
    }

    NxSystemControl.SetUserInactivityDetectionTimeExtendedUnsafe({'isExtended': True})

    fork {
        Zelda.PlayAnimation({'name': 'ev_LastBossDead_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EvLink.PlayAnimation({'name': 'ev_LastBossDead_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        LastBossMu02.PlayAnimationNoWait({'name': 'ev_LastBossDead_talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        LastBossMu02.SetTalkerName({'message': 'glossary/Character:Villan', 'keep': True})

        fork {
            LastBossMu02.Talk({'message': 'scenario/StoryAreaH:LastBossDead_010', 'getAttention': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'SE_ENEMY_LAST_VO3', 'volume': 1.0, 'pitch': 1.0})
        }

    }


    fork {
        Zelda.PlayAnimationNoWait({'name': 'ev_LastBossDead_after', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EvLink.PlayAnimationNoWait({'name': 'ev_LastBossDead_after', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Triforce.PlayAnimationNoWait({'name': 'ev_LastBossDead_after', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        LastBossMu02.PlayAnimationNoWait({'name': 'ev_LastBossDead_down_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 5.5})
        LastBossMu02.PlayTailorOtherChannelNoWait({'channel': 'PartnerPhoton_Release', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Timer.Wait({'time': 11.0})

        fork {
            Fade.StartParam({'mode': 1, 'colorR': 1.0, 'colorG': 1.0, 'colorB': 1.0, 'time': 5.0})
        } {

            fork {
                LastBossMu02.Talk({'message': 'scenario/StoryAreaH:LastBossDead_020', 'getAttention': False})
            } {
                Timer.Wait({'time': 5.0})
                Dialog.Signal()
            } {
                Audio.PlayOneshotSystemSE({'label': 'SE_EV_TRIFORCE_SYNC5_3', 'volume': 1.0, 'pitch': 1.0})
            }

        } {
            Audio.StopZoneBaseAmbience()
        }

    } {
        Timer.Wait({'time': 9.166999816894531})

        fork {
            Triforce.StopTailorOtherChannel({'channel': 'LastBossDead_StrongLight', 'index': -1})
            Triforce.PlayTailorOtherChannelNoWait({'channel': 'LastBossDead_StrongLight_Last', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        } {
            Camera.SetTonemapExposure({'targetValue': 4.0, 'noWait': True, 'duration': 3.0})
        }

    } {
        Timer.Wait({'time': 5.166999816894531})
        Triforce.StopTailorOtherChannel({'channel': 'Triforce_Glow', 'index': -1})
        Triforce.PlayTailorOtherChannelNoWait({'channel': 'LastBossDead_StrongLight', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Timer.Wait({'time': 9.0})
        LastBossMu02.PlayAnimationNoWait({'name': 'ev_LastBossDead_melt', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 5.0})
        Audio.StopSE({'label': 'SE_EV_TRIFORCE_SYNC5_1', 'duration': 0.5})
    } {
        Timer.Wait({'time': 5.166999816894531})
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_TRIFORCE_SYNC5_2', 'volume': 1.0, 'pitch': 1.0})
        Timer.Wait({'time': 8.0})
        Audio.StopSE({'label': 'SE_EV_TRIFORCE_SYNC5_2', 'duration': 4.0})
    }

    Timer.Wait({'time': 2.0})
    Timer.Wait({'time': 2.0})

    fork {
        QuestSystem.Close({'questKey': 'LastDungeon', 'isShowTelopInEvent': True, 'isFrontFade': True})
    } {
        Timer.Wait({'time': 4.0})
    }

    Timer.Wait({'time': 8.0})
    EventFlags.SetFlag({'symbol': 'L008BossDead', 'value': True})
    GameControl.UnforbidSave()
    Dungeon.SetDungeonCleared({'dungeon': 'L_DungeonLast'})
    EventVariables.SetVariable({'symbol': 'LastDungeon:637992014'})
    GameControl.RequestLevelJump({'locator': 'PartnersGainPower', 'level': 'EV_GoToRevivingWorld', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void PartnersGainPower() {

    call EvResetCommon.AllResetNowait()


    fork {
        TriforcePiece.Deactivate()
    } {
        Triforce.Activate()
        Triforce.WarpToActor({'offsetX': 0.0, 'offsetY': 3.0, 'distance': 2.0, 'actor': ActorIdentifier(name="LastBossMu02")})
    }

}

void LastBossMuDeadBefore() {

    fork {
        Zelda.SetFacialExpression({'expression': 'serious_few'})
        Zelda.AimCompassPoint({'direction': 0, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
        Zelda.PlayAnimationNoWait({'name': 'ev_LastBossDead_before', 'restart': True, 'layer': 0, 'blendFrame': -1})
        Zelda.SetCullMode({'cullMode': 0, 'enabled': True})
        Zelda.WarpToActor({'offsetY': 0.0, 'distance': 2.0, 'offsetX': -1.0, 'actor': ActorIdentifier(name="Zelda")})
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.SetFacialExpression({'expression': 'surprise_cm'})
        Timer.Wait({'time': 0.44999998807907104})
        Zelda.SetFacialExpression({'expression': 'normal'})
        Timer.Wait({'time': 1.159999966621399})
        Zelda.SetFacialExpression({'expression': 'normal_om'})
        TriforcePiece.Deactivate()
    } {
        EvLink.PlayAnimationNoWait({'name': 'ev_LastBossDead_before', 'restart': True, 'layer': 0, 'blendFrame': -1})
        EvLink.SetCullMode({'cullMode': 0, 'enabled': True})
        EvLink.WarpToActor({'offsetY': 0.0, 'distance': 2.0, 'offsetX': -0.3499999940395355, 'actor': ActorIdentifier(name="Zelda")})
        Timer.Wait({'time': 0.20000000298023224})
        EvLink.SetFacialExpression({'expression': 'damage'})
        Timer.Wait({'time': 0.30000001192092896})
        EvLink.SetFacialExpression({'expression': 'normal'})
    } {
        Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
        Partner[companion].PlayAnimationNoWait({'name': 'ev_LastBossDead_before', 'restart': True, 'layer': 0, 'blendFrame': -1})
        Partner[companion].SetCullMode({'enabled': True, 'cullMode': 0})
        Partner[companion].WarpToActor({'distance': 0.0, 'offsetY': 0.20000000298023224, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': 0.0})
    } {
        Triforce.SetCullMode({'cullMode': 0, 'enabled': True})
        Triforce.Activate()
        Triforce.WarpToActor({'actor': ActorIdentifier(name="LastBossMu02"), 'distance': 0.0, 'offsetY': 0.0, 'offsetX': 0.0})
    } {
        Camera.PlayActorOriginCameraAnimation({'name': 'LastBossDeadBefore01_cam', 'path': 'actor/EvLastBossMu_1st_form.bfres', 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'offsetY': 0.30000001192092896, 'offsetX': 1.7999999523162842, 'target': ActorIdentifier(name="LastBossMu02"), 'chaseRatio': 1.0, 'offsetZ': 0.0, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Audio.WaitSamplePositionAndStopAndPlayMu3OutroBgm({'stoplabel': 'BGM_MU3_OUTRO_A', 'label': 'BGM_MU3_OUTRO_B'})
    } {
        EvBackWallMuPhase3.SetComponentActive({'name': 'skeletalModelComp', 'active': True})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_TRIFORCE_SYNC2', 'volume': 1.0, 'pitch': 1.0})
    }


    fork {
        Triforce.PlayAnimationNoWait({'name': 'ev_LastBossDead_before', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Camera.PlayActorOriginCameraAnimation({'path': 'actor/EvLastBossMu_1st_form.bfres', 'name': 'LastBossDeadBefore02_cam', 'ignoreRotation': True, 'target': ActorIdentifier(name="LastBossMu02"), 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="LastBossMu02"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'restart': True, 'layer': 0, 'blendFrame': -1})
        Partner[companion].WarpToActor({'offsetY': 1.0, 'distance': 6.0, 'actor': ActorIdentifier(name="LastBossMu02"), 'offsetX': -6.0})
    } {
        LastBossMu02.Deactivate()
    } {
        EvBackWallMuPhase3.SetComponentActive({'name': 'skeletalModelComp', 'active': False})
    }

    LastBossMu02.AimActorLinkedPoint({'duration': 0.0, 'pointIndex': 2, 'actor': ActorIdentifier(name="LastBossMu02"), 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Timer.Wait({'time': 2.4000000953674316})

        fork {
            LastBossPhase3Room.SetInstanceVariableInt({'name': 'color', 'value': 3})
        } {
            LastBossMu02.PlayMaterialAnimationNoWait({'name': 'weak_3rd', 'layer': 0})
        }

    } {
        LastBossMu02.Activate()
        LastBossMu02.PlayAnimationNoWait({'name': 'ev_LastBossDead_before_bark', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Zelda.WarpToActor({'offsetY': 0.0, 'distance': 0.0, 'offsetX': 0.0, 'actor': ActorIdentifier(name="LastBossMu02")})
        Zelda.SetFacialExpression({'expression': 'normal_om'})
        Zelda.SetEquipmentVisibility({'visibility': False})
        Zelda.PlayAnimationNoWait({'name': 'ev_LastBossDead_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EvLink.WarpToActor({'offsetY': 0.0, 'distance': 0.0, 'offsetX': 0.0, 'actor': ActorIdentifier(name="LastBossMu02")})
        EvLink.SetComponentActive({'name': 'PropplayerSword', 'active': False})
        EvLink.SetComponentActive({'active': False, 'name': 'PropplayerShield'})
        EvLink.PlayAnimationNoWait({'name': 'ev_LastBossDead_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Camera.PlayActorOriginCameraAnimation({'path': 'actor/EvLastBossMu_1st_form.bfres', 'name': 'LastBossDeadBefore03_cam', 'ignoreRotation': True, 'nearClipDistanceCtrl': False, 'target': ActorIdentifier(name="LastBossMu02"), 'offsetZ': 0.0, 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'lookAtDistanceCtrl': True, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_TRIFORCE_SYNC3', 'volume': 1.0, 'pitch': 1.0})
    } {
        Timer.Wait({'time': 6.333333492279053})
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_TRIFORCE_SYNC4', 'volume': 1.0, 'pitch': 1.0})
    }


    call LastBossDead()

}
