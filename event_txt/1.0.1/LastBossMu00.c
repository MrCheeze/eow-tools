-------- EventFlow: LastBossMu00 --------

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Hud
entrypoint: None()
actions: ['PlayOutAnim', 'PlayInAnim']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['StopAllBGM', 'PlayBGM', 'PlayOneshotSystemSE', 'SetBGMMainTrackVolume', 'PlayMuBossAppearBGM', 'SetIsJumpRegionLoopFinish', 'SetBGMLabelVolume', 'Prepare', 'StopSE', 'SetSeVolume', 'EnablePlaySeFromTailor', 'DisablePlaySeFromTailor']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: []
queries: []
params: None

Actor: Mu
entrypoint: None()
actions: ['Talk', 'SetTalkerName', 'PlayAnimation', 'WarpToActorWithCompassPoint', 'SetCullMode', 'SetVisibility', 'WarpToActor', 'Deactivate', 'Activate', 'PlayAnimationNoWait', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['SetCanSkip']
queries: []
params: None

Actor: LastBossMu00
entrypoint: None()
actions: ['CameraLockon', 'ChangeHPLock', 'SetTailorProperty', 'PlayTailorOtherChannelNoWait', 'ChangeDamageState', 'PlayAnimation', 'SpritTentaclesAll', 'SetVisibility', 'Talk', 'WarpToActorWithCompassPoint', 'SetCullMode', 'MoveToCompassPoint', 'SetTalkerName', 'SetGravityEnable', 'PlayMotionTentacleNumber', 'SetTentacleModelActive', 'WarpToActor', 'PlayAnimationEx', 'ShowUI', 'StopTailorOtherChannel', 'SetCollisionEnabled', 'PlayAnimationNoWait', 'PlayOtherChannelTentacle', 'EndPlayOtherChannelTentacle', 'AimCompassPoint', 'LookAtGimmick']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump', 'RequestWarp', 'SaveToTemporarySaveData', 'ForbidLaunchApplet', 'UnforbidLaunchApplet']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset', 'StartParam']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['Signal']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['PlayActorOriginCameraAnimation', 'Reset', 'SetShadowMapSettings', 'PlayLocationOriginCameraAnimation', 'BeginInnerScroll', 'Quake', 'RelativeMoveToWithTimeout', 'LerpDofSettings']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['SetFacialExpression', 'WarpToActorWithCompassPoint', 'SetShadowDecalEnable', 'SetCullMode', 'SetVisibility', 'PlayAnimation', 'WarpToActor', 'AimActor', 'MoveToBesideTargetActor', 'SetGravityEnable', 'SetInterestIkEnabled', 'MoveToTargetActor', 'AimCompassPoint']
queries: []
params: None

Actor: CompanionLink
entrypoint: None()
actions: ['Deactivate', 'Activate']
queries: []
params: None

Actor: EvEnemyZelda
entrypoint: None()
actions: ['PlayAnimation', 'Deactivate', 'WarpToActorWithCompassPoint', 'SetCullMode', 'SetVisibility', 'Activate']
queries: []
params: None

Actor: TriforcePiece
entrypoint: None()
actions: ['SetVisibility', 'Deactivate', 'SetCullMode', 'PlayAnimationEx', 'Activate', 'PlayAnimation', 'SetGravityEnable', 'SetCollisionEnabled', 'WarpToActorWithCompassPoint', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['PlayAnimation', 'TalkKeep', 'Talk', 'MoveToCompassPoint', 'EnableAutoMovement', 'WarpToActorWithCompassPoint', 'SetCullMode', 'SetVisibility', 'MoveToDefaultPosition', 'AimActor', 'AimPlayer', 'MoveToTargetActor', 'PlayAnimationNoWait', 'AimCompassPoint', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: EvLink
entrypoint: None()
actions: ['PlayAnimation', 'WarpToActorWithCompassPoint', 'SetCullMode', 'SetVisibility', 'Activate', 'Deactivate', 'WarpToActor', 'AimActor', 'AimDegreeAngle', 'MoveToLinkedPoint', 'SetGravityEnable', 'AimCompassPoint', 'SetInterestIkEnabled', 'PlayAnimationNoWait', 'ResetAim', 'KeepAnimationAfterEvent', 'SetComponentActive']
queries: []
params: None

Actor: Environment
entrypoint: None()
actions: ['LockCurrentRegion', 'UnlockCurrentRegion']
queries: []
params: None

Actor: Movie
entrypoint: None()
actions: ['Prepare', 'Play', 'Close']
queries: []
params: None

Actor: EvMuDemoTentacle[hand00]
entrypoint: None()
actions: ['Activate', 'Appear', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel', 'AttackStart']
queries: []
params: None

Actor: EvMuDemoTentacle[hand01]
entrypoint: None()
actions: ['Activate', 'Appear', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel', 'AttackStart']
queries: []
params: None

Actor: EvMuDemoTentacle[hand02]
entrypoint: None()
actions: ['Activate', 'Appear', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel', 'AttackStart']
queries: []
params: None

Actor: EvMuDemoTentacle[hand03]
entrypoint: None()
actions: ['Activate', 'Appear', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel', 'AttackStart']
queries: []
params: None

Actor: EvMuDemoTentacle[hand04]
entrypoint: None()
actions: ['Activate', 'Appear', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel', 'AttackStart']
queries: []
params: None

Actor: TagEvTailorPlayer
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel']
queries: []
params: None

Actor: LastBossFirstWallCol
entrypoint: None()
actions: ['Deactivate']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: ['SetRestartPositionToLinkedPoint']
queries: []
params: None

Actor: EvBackWallMuPhase1
entrypoint: None()
actions: ['SetComponentActive']
queries: []
params: None

void Appear() {

    call EvResetCommon.AllResetNowait()

    Audio.StopAllBGM({'duration': 1.0})
    Environment.LockCurrentRegion({'regionName': 'Ev_Appear_01', 'enableBlend': True})

    fork {
        Hud.PlayOutAnim()
    } {
        Timer.Wait({'time': 0.5})
    }


    fork {
        LastBossMu00.SetVisibility({'visible': False})
    } {
        Mu.Activate()
        Mu.PlayTailorOtherChannelNoWait({'channel': 'Leg_haze', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        EvEnemyZelda.Activate()
    } {
        EvLink.Activate()
    } {
        CompanionLink.Deactivate()
    }


    fork {
        Zelda.WarpToActorWithCompassPoint({'direction': 0, 'distance': 0.0, 'actor': ActorIdentifier(name="TriforcePiece"), 'offsetX': -0.25, 'offsetY': 0.0})
        Zelda.SetCullMode({'cullMode': 0, 'enabled': True})
        Zelda.SetFacialExpression({'expression': 'serious_few'})
        Zelda.SetVisibility({'visible': True})
    } {
        EvLink.WarpToActorWithCompassPoint({'direction': 0, 'distance': 0.0, 'actor': ActorIdentifier(name="TriforcePiece"), 'offsetX': 0.25, 'offsetY': 0.0})
        EvLink.SetCullMode({'cullMode': 0, 'enabled': True})
        EvLink.SetVisibility({'visible': True})
    } {
        Partner[companion].WarpToActorWithCompassPoint({'offsetY': 10.0, 'distance': 5.0, 'direction': 0, 'actor': ActorIdentifier(name="TriforcePiece"), 'offsetX': 0.0})
    } {
        EvEnemyZelda.WarpToActorWithCompassPoint({'direction': 0, 'distance': 0.0, 'offsetX': 0.0, 'actor': ActorIdentifier(name="TriforcePiece"), 'offsetY': 0.0})
        EvEnemyZelda.SetCullMode({'cullMode': 0, 'enabled': True})
        EvEnemyZelda.PlayAnimation({'name': 'ev_MuTakeInTriforce_CZ_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EvEnemyZelda.SetVisibility({'visible': True})
    } {
        Mu.WarpToActorWithCompassPoint({'direction': 0, 'offsetX': 0.0, 'actor': ActorIdentifier(name="TriforcePiece"), 'distance': 0.0, 'offsetY': 0.0})
        Mu.SetCullMode({'cullMode': 0, 'enabled': True})
        Mu.PlayAnimationNoWait({'name': 'ev_MuTakeInTriforce_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Mu.SetVisibility({'visible': True})
    }

    Timer.Wait({'time': 1.0})

    fork {

        fork {
            Camera.PlayActorOriginCameraAnimation({'ignoreRotation': True, 'path': 'actor/EvLastBossMu_1st_form.bfres', 'name': 'MuTakeInTriforce01_cam', 'offsetZ': 1.0, 'offsetY': 0.25, 'target': ActorIdentifier(name="TriforcePiece"), 'chaseRatio': 1.0, 'offsetX': 0.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
        } {
            Zelda.SetFacialExpression({'expression': 'serious_few'})
            Zelda.PlayAnimation({'name': 'ev_MuTakeInTriforce_land', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            EvLink.PlayAnimation({'name': 'ev_MuTakeInTriforce_land', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Partner[companion].MoveToCompassPoint({'speed': 1, 'direction': 2, 'distance': 0.0, 'offsetY': -9.0, 'customSpeed': 10.0, 'withoutTurn': True, 'tolerance': 0.0, 'timeOut': 7.0, 'method': 0, 'offsetX': 0.0})
            Partner[companion].PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Fade.StartPreset({'preset': 'FadeInNormal'})
            FlowControl.SetCanSkip({'enable': True})
        }


        fork {
            Camera.PlayActorOriginCameraAnimation({'ignoreRotation': True, 'path': 'actor/EvLastBossMu_1st_form.bfres', 'name': 'MuTakeInTriforce02_cam', 'offsetZ': 1.0, 'offsetY': 0.25, 'target': ActorIdentifier(name="TriforcePiece"), 'chaseRatio': 1.0, 'offsetX': 0.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
        } {
            Mu.PlayAnimation({'name': 'ev_MuTakeInTriforce', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Mu.PlayAnimationNoWait({'name': 'ev_MuTakeInTriforce_before_talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Audio.PlayMuBossAppearBGM({'label': 'BGM_EV_BEFOREMUAPPEAR', 'volume': 1.0, 'ignoreSkip': False})
        } {
            Environment.LockCurrentRegion({'enableBlend': False, 'regionName': 'Ev_Appear_02'})
        } {

            fork {
                Zelda.SetVisibility({'visible': False})
            } {
                EvLink.SetVisibility({'visible': False})
            } {
                Partner[companion].SetVisibility({'visible': False})
            }

            Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Timer.Wait({'time': 1.0})
        Mu.SetTalkerName({'message': 'glossary/Character:Villan', 'keep': False})

        fork {
            Mu.Talk({'message': 'scenario/StoryAreaH:LastBossAppear_010', 'getAttention': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'SE_ENEMY_LAST_VO1', 'volume': 1.0, 'pitch': 1.0})
        }

        Mu.Talk({'message': 'scenario/StoryAreaH:LastBossAppear_020', 'getAttention': False})

        fork {
            Mu.Talk({'message': 'scenario/StoryAreaH:LastBossAppear_030', 'getAttention': False})
            Audio.SetIsJumpRegionLoopFinish()
        } {
            Audio.PlayOneshotSystemSE({'label': 'SE_ENEMY_LAST_VO2', 'volume': 1.0, 'pitch': 1.0})
        }

        Timer.Wait({'time': 1.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_RD050_NULL00_TRIFORCE1', 'volume': 1.0, 'pitch': 1.0})
    }

    Audio.StopSE({'label': 'SE_EV_RD050_NULL00_TRIFORCE1', 'duration': 1.0})

    fork {
        Camera.PlayActorOriginCameraAnimation({'ignoreRotation': True, 'path': 'actor/EvLastBossMu_1st_form.bfres', 'name': 'MuTakeInTriforce03_cam', 'offsetX': 0.0, 'offsetZ': 1.0, 'offsetY': 0.25, 'target': ActorIdentifier(name="TriforcePiece"), 'chaseRatio': 1.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Mu.PlayAnimation({'name': 'ev_MuTakeInTriforce_capture', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.2000000476837158})
        EvEnemyZelda.PlayAnimation({'name': 'ev_MuTakeInTriforce_CZ_absorb', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EvEnemyZelda.Deactivate()
    } {
        Timer.Wait({'time': 3.3329999446868896})
        Mu.PlayTailorOtherChannelNoWait({'channel': 'Crackling', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Timer.Wait({'time': 1.0})
        Mu.StopTailorOtherChannel({'channel': 'Crackling', 'index': -1})
    } {
        Timer.Wait({'time': 5.382999897003174})
        TriforcePiece.Activate()
        TriforcePiece.SetVisibility({'visible': False})
        TriforcePiece.SetCullMode({'cullMode': 0, 'enabled': True})
        TriforcePiece.PlayTailorOtherChannelNoWait({'channel': 'Absorb_Triforce_lp', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        TriforcePiece.PlayAnimation({'name': 'ev_MuTakeInTriforce_after_talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_RD050_NULL00_TRIFORCE2', 'volume': 1.0, 'pitch': 1.0})
    }


    fork {
        Camera.PlayActorOriginCameraAnimation({'ignoreRotation': True, 'path': 'actor/EvLastBossMu_1st_form.bfres', 'name': 'MuTakeInTriforce04_cam', 'offsetZ': 1.0, 'offsetY': 0.25, 'target': ActorIdentifier(name="TriforcePiece"), 'chaseRatio': 1.0, 'offsetX': 0.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Mu.PlayAnimation({'name': 'ev_MuTakeInTriforce_after_talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            Mu.Talk({'message': 'scenario/StoryAreaH:LastBossAppear_050', 'getAttention': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'SE_ENEMY_LAST_VO4', 'volume': 1.0, 'pitch': 1.0})
        }

        Mu.Talk({'message': 'scenario/StoryAreaH:LastBossAppear_060', 'getAttention': False})
    }


    fork {
        Camera.PlayActorOriginCameraAnimation({'ignoreRotation': True, 'path': 'actor/EvLastBossMu_1st_form.bfres', 'name': 'MuTakeInTriforce05_cam', 'offsetZ': 1.0, 'target': ActorIdentifier(name="TriforcePiece"), 'offsetY': 0.25, 'chaseRatio': 1.0, 'offsetX': 0.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})

        fork {
            Camera.PlayActorOriginCameraAnimation({'ignoreRotation': True, 'path': 'actor/EvLastBossMu_1st_form.bfres', 'offsetZ': 1.0, 'offsetY': 0.25, 'name': 'MuCrackAppear01_cam', 'target': ActorIdentifier(name="TriforcePiece"), 'chaseRatio': 1.0, 'offsetX': 0.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
        } {
            Timer.Wait({'time': 6.0})
            Fade.StartParam({'mode': 1, 'time': 1.0, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0})
            FlowControl.SetCanSkip({'enable': False})
        }

    } {
        Mu.PlayAnimation({'name': 'ev_MuTakeInTriforce_grow', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        TriforcePiece.PlayAnimation({'name': 'ev_MuTakeInTriforce_grow', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GameControl.ForbidLaunchApplet()
    } {
        Timer.Wait({'time': 2.0999999046325684})
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_RD050_NULL00_TRIFORCE3', 'volume': 1.0, 'pitch': 1.0})
    }

    Audio.StopSE({'label': 'SE_EV_RD050_NULL00_TRIFORCE2', 'duration': 0.5})
    TriforcePiece.StopTailorOtherChannel({'channel': 'Absorb_Triforce_lp', 'index': -1})

    call MuCrackAppear()

}

void Dead() {

    call BossCommon.HitStopNonStopBGM({'enemy': ActorIdentifier(name="LastBossMu00")})


    call Damage4()

    FlowControl.SetCanSkip({'enable': True})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})

    fork {
        EvLink.Activate()
    } {
        CompanionLink.Deactivate()
    } {

        call EvResetCommon.AllResetNowait()

    }

    EventFlags.SetFlag({'symbol': 'LastDungeon_ReturnWeaponToLink', 'value': True})
    Audio.DisablePlaySeFromTailor()

    fork {
        LastBossMu00.WarpToActorWithCompassPoint({'direction': 0, 'offsetY': 1.0, 'distance': -5.0, 'actor': ActorIdentifier(name="TriforcePiece"), 'offsetX': 0.0})
        LastBossMu00.SetCullMode({'cullMode': 0, 'enabled': True})
        LastBossMu00.SetVisibility({'visible': True})
    } {
        Zelda.WarpToActorWithCompassPoint({'direction': 2, 'offsetY': 1.0, 'distance': 0.0, 'actor': ActorIdentifier(name="TriforcePiece"), 'offsetX': -1.5})
        Zelda.SetCullMode({'cullMode': 0, 'enabled': True})
        Zelda.SetVisibility({'visible': True})
        Zelda.SetFacialExpression({'expression': 'serious_few'})
        Zelda.PlayAnimation({'name': 'ev_BossApear_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Zelda.AimActor({'actor': ActorIdentifier(name="LastBossMu00"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        EvLink.WarpToActorWithCompassPoint({'direction': 2, 'offsetY': 1.0, 'offsetX': 1.0, 'distance': 1.0, 'actor': ActorIdentifier(name="TriforcePiece")})
        EvLink.SetCullMode({'cullMode': 0, 'enabled': True})
        EvLink.SetVisibility({'visible': True})
        EvLink.PlayAnimation({'name': 'ev_BossApear_battle_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EvLink.AimActor({'actor': ActorIdentifier(name="LastBossMu00"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].WarpToActorWithCompassPoint({'direction': 2, 'offsetY': 2.0, 'offsetX': -3.0, 'distance': -1.5, 'actor': ActorIdentifier(name="TriforcePiece")})
        Partner[companion].SetCullMode({'cullMode': 0, 'enabled': True})
        Partner[companion].SetVisibility({'visible': True})
        Partner[companion].PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="LastBossMu00"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Audio.StopAllBGM({'duration': 2.0})
    }

    Audio.EnablePlaySeFromTailor()
    LastBossMu00.PlayAnimationNoWait({'name': 'First_dead_ed', 'layer': 0, 'blendFrame': -1, 'restart': False})
    LastBossFirstWallCol.Deactivate()
    Camera.LerpDofSettings({'kind': 7, 'FocalDistance': 45.0, 'FocusRange': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'BlurSizeScale': 1.0, 'BlurRatio': 1.0, 'TiltShiftCenterX': 0.0, 'TiltShiftCenterY': 0.699999988079071, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftRange': 0.18000000715255737, 'TiltShiftGamma': 2.0, 'TiltShiftBlurSizeScale': 1.0, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofFocalDistance': 51.0, 'TiltShiftDofBackRange': 51.0, 'TiltShiftDofBackCurve': 0.5, 'TiltShiftDofBackBlurFadeWidth': 0.05000000074505806, 'TiltShiftDofBlurRatio': 1.0, 'duration': -1.0, 'noWait': False})
    Camera.PlayActorOriginCameraAnimation({'ignoreRotation': True, 'farClipDistanceCtrl': False, 'offsetX': 0.0, 'path': 'actor/EvLastBossMu_1st_form.bfres', 'name': 'MuTakeInTriforce02_cam', 'offsetZ': 10.5, 'offsetY': 3.0, 'target': ActorIdentifier(name="TriforcePiece"), 'chaseRatio': 1.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    Fade.StartPreset({'preset': 'FadeInNormal'})

    fork {
        Audio.PlayBGM({'label': 'BGM_BATTLE_BOSS_MU2_INTRO', 'ignoreSkip': True, 'volume': 1.0})
        Audio.SetBGMLabelVolume({'label': 'BGM_BATTLE_BOSS_MU2_INTRO', 'volume': 0.0, 'duration': 0.0})
        Audio.SetBGMLabelVolume({'label': 'BGM_BATTLE_BOSS_MU2_INTRO', 'volume': 1.0, 'duration': 2.0})
    } {
        Audio.PlayOneshotSystemSE({'volume': 0.0, 'label': 'SE_ENEMY_NULL00_DEAD_WAIT', 'pitch': 1.0})
        Audio.SetSeVolume({'duration': 2.0, 'label': 'SE_ENEMY_NULL00_DEAD_WAIT', 'volume': 1.0})
    }

    Timer.Wait({'time': 2.0})
    LastBossMu00.SetTalkerName({'message': 'glossary/Character:Villan', 'keep': True})
    LastBossMu00.Talk({'message': 'scenario/StoryAreaH:LastBossMu00Dead_010', 'getAttention': False})
    Audio.StopSE({'duration': 1.0, 'label': 'SE_ENEMY_NULL00_DEAD_WAIT'})

    fork {
        LastBossMu00.SetCollisionEnabled({'enable': False})
        LastBossMu00.SetGravityEnable({'enable': False})
        LastBossMu00.AimCompassPoint({'direction': 2, 'duration': 1.399999976158142, 'withoutTurn': False, 'immediateTurn': False})
        Timer.Wait({'time': 1.5})
        LastBossMu00.PlayTailorOtherChannelNoWait({'channel': 'Through_LastBossGate', 'restart': False, 'index': -1, 'stopOnSkipped': True})

        fork {
            LastBossMu00.MoveToCompassPoint({'direction': 2, 'speed': 0, 'distance': 18.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        } {
            Audio.PlayOneshotSystemSE({'volume': 1.0, 'label': 'SE_ENEMY_NULL00_RUNAWAY', 'pitch': 1.0})
        }

        LastBossMu00.SetVisibility({'visible': False})
    } {
        Partner[companion].PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].PlayAnimationNoWait({'name': 'surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 2.9000000953674316})
        Partner[companion].MoveToCompassPoint({'direction': 2, 'timeOut': 1.0, 'speed': 1, 'distance': 2.0, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})

        fork {
            Partner[companion].PlayAnimation({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].Talk({'message': 'scenario/StoryAreaH:LastBossMu00Dead_030', 'getAttention': False})
        }

    } {
        Timer.Wait({'time': 1.5})
        TagEvTailorPlayer.PlayTailorOtherChannelNoWait({'channel': 'LastBossGate_Appear', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Timer.Wait({'time': 3.0})
        Zelda.PlayAnimation({'name': 'ev_surprise_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Zelda.PlayAnimation({'name': 'ev_surprise_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.0})
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.PlayAnimation({'name': 'ev_BossApear_wait', 'blendFrame': 12, 'layer': 0, 'restart': False})
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Partner"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 1.0})
        Zelda.SetInterestIkEnabled({'enable': False})
    } {
        Timer.Wait({'time': 3.200000047683716})
        EvLink.PlayAnimation({'name': 'ev_ZeldaAndLinkReturn_surprise_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EvLink.PlayAnimation({'name': 'ev_ZeldaAndLinkReturn_surprise_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.800000011920929})
        EvLink.SetInterestIkEnabled({'enable': True})
        EvLink.PlayAnimation({'name': 'ev_BossApear_battle_wait', 'blendFrame': 12, 'layer': 0, 'restart': False})
        EvLink.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Partner"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 1.0})
        EvLink.SetInterestIkEnabled({'enable': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_ENEMY_NULL_TURN', 'volume': 1.0, 'pitch': 1.0})
    }


    fork {
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.3499999940395355})
        Partner[companion].PlayTailorOtherChannelNoWait({'channel': 'Through_LastBossGate', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Partner[companion].MoveToTargetActor({'offsetY': 1.0, 'offsetX': 0.0, 'speed': 1, 'distance': 1.0, 'actor': ActorIdentifier(name="LastBossMu00"), 'customSpeed': 8.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].SetVisibility({'visible': False})
    } {
        Timer.Wait({'time': 1.75})
        EvMuDemoTentacle[hand00].Activate()
        EvMuDemoTentacle[hand00].PlayTailorOtherChannelNoWait({'channel': 'LastBossMuBinding_Sign', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Timer.Wait({'time': 1.2999999523162842})
        EvMuDemoTentacle[hand00].StopTailorOtherChannel({'channel': 'LastBossMuBinding_Sign', 'index': -1})
        EvMuDemoTentacle[hand00].PlayTailorOtherChannelNoWait({'channel': 'LastBossMuBinding_Appear', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        EvMuDemoTentacle[hand00].Appear()
    } {
        Timer.Wait({'time': 0.75})
        Player.PlayTailorOtherChannelNoWait({'channel': 'Through_LastBossGate', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Zelda.MoveToBesideTargetActor({'speed': 1, 'timeOut': 4.0, 'tolerance': 5.0, 'actor': ActorIdentifier(name="LastBossMu00"), 'customSpeed': 8.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'withoutTurn': False, 'method': 0})
        Zelda.SetVisibility({'visible': False})
        Zelda.SetGravityEnable({'enable': False})
    } {
        EvLink.SetGravityEnable({'enable': False})
        Timer.Wait({'time': 1.100000023841858})
        EvLink.MoveToLinkedPoint({'speed': 1, 'index': 0, 'customSpeed': 6.0, 'timeOut': 8.0, 'tolerance': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        EvLink.PlayAnimation({'name': 'ev_GoLastBossSecondStep_jump', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EvLink.PlayAnimation({'name': 'ev_BossApear_battle_wait', 'blendFrame': 12, 'layer': 0, 'restart': False})
    } {
        Timer.Wait({'time': 1.2000000476837158})
        Camera.RelativeMoveToWithTimeout({'offsetX': 0.0, 'offsetY': 0.5, 'timeout': 2.0, 'offsetZ': -6.0, 'chaseRatio': 0.02500000037252903, 'maxSpeed': 999.0})
    }

    Timer.Wait({'time': 1.0})
    TagEvTailorPlayer.StopTailorOtherChannel({'channel': 'LastBossGate_Appear', 'index': -1})
    TagEvTailorPlayer.PlayTailorOtherChannelNoWait({'channel': 'LastBossGate_Dissappear', 'restart': False, 'index': -1, 'stopOnSkipped': True})

    fork {
        EvLink.SetInterestIkEnabled({'enable': True})
        Timer.Wait({'time': 0.5})
        EvLink.AimCompassPoint({'withoutTurn': True, 'direction': 3, 'duration': 0.07500000298023224, 'immediateTurn': False})
        Timer.Wait({'time': 0.75})
        EvLink.AimDegreeAngle({'duration': 0.4000000059604645, 'angle': 340.0, 'withoutTurn': False, 'immediateTurn': False})
        Timer.Wait({'time': 1.5})
    } {
        EvMuDemoTentacle[hand01].Activate()
        EvMuDemoTentacle[hand01].PlayTailorOtherChannelNoWait({'channel': 'LastBossMuBinding_Sign', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Timer.Wait({'time': 1.0})
        EvMuDemoTentacle[hand01].StopTailorOtherChannel({'channel': 'LastBossMuBinding_Sign', 'index': -1})
        EvMuDemoTentacle[hand01].PlayTailorOtherChannelNoWait({'channel': 'LastBossMuBinding_Appear', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        EvMuDemoTentacle[hand01].Appear()
    } {
        EvMuDemoTentacle[hand02].Activate()
        Timer.Wait({'time': 0.5})
        EvMuDemoTentacle[hand02].PlayTailorOtherChannelNoWait({'channel': 'LastBossMuBinding_Sign', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Timer.Wait({'time': 1.0})
        EvMuDemoTentacle[hand02].StopTailorOtherChannel({'channel': 'LastBossMuBinding_Sign', 'index': -1})
        EvMuDemoTentacle[hand02].PlayTailorOtherChannelNoWait({'channel': 'LastBossMuBinding_Appear', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        EvMuDemoTentacle[hand02].Appear()
    } {
        EvMuDemoTentacle[hand03].Activate()
        Timer.Wait({'time': 0.5})
        EvMuDemoTentacle[hand03].PlayTailorOtherChannelNoWait({'channel': 'LastBossMuBinding_Sign', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Timer.Wait({'time': 1.0})
        EvMuDemoTentacle[hand03].StopTailorOtherChannel({'channel': 'LastBossMuBinding_Sign', 'index': -1})
        EvMuDemoTentacle[hand03].PlayTailorOtherChannelNoWait({'channel': 'LastBossMuBinding_Appear', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        EvMuDemoTentacle[hand03].Appear()
    } {
        EvMuDemoTentacle[hand04].Activate()
        EvMuDemoTentacle[hand04].PlayTailorOtherChannelNoWait({'channel': 'LastBossMuBinding_Sign', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Timer.Wait({'time': 1.0})
        EvMuDemoTentacle[hand04].StopTailorOtherChannel({'channel': 'LastBossMuBinding_Sign', 'index': -1})
        EvMuDemoTentacle[hand04].PlayTailorOtherChannelNoWait({'channel': 'LastBossMuBinding_Appear', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        EvMuDemoTentacle[hand04].Appear()
    }

    EvLink.AimCompassPoint({'withoutTurn': True, 'duration': 0.4000000059604645, 'direction': 3, 'immediateTurn': False})
    EvLink.AimDegreeAngle({'duration': 0.4000000059604645, 'angle': 340.0, 'withoutTurn': True, 'immediateTurn': False})
    EvLink.SetInterestIkEnabled({'enable': False})

    fork {
        Timer.Wait({'time': 0.5})
        EvLink.PlayAnimation({'name': 'ev_GoLastBossSecondStep_stance_st,ev_GoLastBossSecondStep_stance_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.5})
        EvMuDemoTentacle[hand01].AttackStart()
    } {
        Timer.Wait({'time': 1.5})
        EvMuDemoTentacle[hand02].AttackStart()
    } {
        Timer.Wait({'time': 1.5})
        EvMuDemoTentacle[hand03].AttackStart()
    } {
        Timer.Wait({'time': 1.5})
        EvMuDemoTentacle[hand04].AttackStart()
    } {
        Timer.Wait({'time': 1.5})
        EvMuDemoTentacle[hand00].AttackStart()
    }

    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    GameControl.RequestLevelJump({'level': 'L_DungeonLast', 'locator': 'L_DungeonLast_009', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void MuCrackAppear() {
    FlowControl.SetCanSkip({'enable': True})
    Movie.Prepare({'filename': 'rd051_MuCrackAppear'})

    fork {
        Movie.Play({'autoClose': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_NULL_RD051_CRACK_APPEAR', 'volume': 1.0, 'pitch': 1.0})
    }

    Fade.StartPreset({'preset': 'CutOutB'})

    fork {
        Movie.Close()
    } {
        GameControl.UnforbidLaunchApplet()
    } {
        FlowControl.SetCanSkip({'enable': False})
    }

    Audio.StopSE({'label': 'SE_EV_NULL_RD051_CRACK_APPEAR', 'duration': 0.20000000298023224})

    call LastBossAppear()

}

void LastBossAppear() {

    call EvResetCommon.AllResetNowait()

    Audio.StopAllBGM({'duration': 3.0})
    Mu.WarpToActor({'offsetY': 1.0, 'distance': -30.0, 'actor': ActorIdentifier(name="TriforcePiece"), 'offsetX': 0.0})

    fork {
        Mu.Deactivate()
    } {
        EvLink.Activate()
    } {
        CompanionLink.Deactivate()
    }


    fork {
        Zelda.WarpToActorWithCompassPoint({'offsetY': 0.0, 'direction': 2, 'offsetX': -2.0, 'distance': 6.5, 'actor': ActorIdentifier(name="TriforcePiece")})
        Zelda.SetCullMode({'cullMode': 0, 'enabled': True})
        Zelda.SetFacialExpression({'expression': 'serious_few'})
        Zelda.SetVisibility({'visible': True})
    } {
        EvLink.WarpToActorWithCompassPoint({'direction': 2, 'offsetX': 0.5, 'distance': 6.5, 'actor': ActorIdentifier(name="TriforcePiece"), 'offsetY': 0.0})
        EvLink.SetCullMode({'cullMode': 0, 'enabled': True})
        EvLink.SetVisibility({'visible': True})
    } {
        Partner[companion].WarpToActorWithCompassPoint({'direction': 2, 'offsetY': 1.0, 'offsetX': -0.5, 'distance': 6.5, 'actor': ActorIdentifier(name="TriforcePiece")})
        Partner[companion].SetCullMode({'cullMode': 0, 'enabled': True})
        Partner[companion].SetVisibility({'visible': True})
    } {
        LastBossMu00.WarpToActorWithCompassPoint({'direction': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'actor': ActorIdentifier(name="LastBossMu00"), 'distance': -3.0})
        LastBossMu00.SetGravityEnable({'enable': False})
        LastBossMu00.SetVisibility({'visible': False})
    }

    Environment.LockCurrentRegion({'regionName': 'Ev_Appear_03', 'enableBlend': False})

    fork {
        Camera.PlayLocationOriginCameraAnimation({'name': 'LastBossAppear01_cam', 'path': 'actor/EvLastBossMu_1st_form.bfres', 'ignoreRotation': True, 'offsetX': 0.0, 'offsetZ': 0.0, 'location': 'EvL019', 'offsetY': 0.0, 'chaseRatio': 1.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
        Camera.Quake({'duration': 0.0, 'targetPower': 1, 'initPower': 1})
    } {
        Zelda.PlayAnimation({'name': 'ev_LastBossAppear_endure_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EvLink.PlayAnimation({'name': 'ev_LastBossAppear_endure_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayAnimation({'name': 'wait', 'blendFrame': 15, 'layer': 0, 'restart': False})
        Timer.Wait({'time': 3.0})
        Audio.Prepare({'label': 'BGM_EV_MUAPPEAR', 'kind': 0, 'volume': 1.0})
        Partner[companion].TalkKeep({'message': 'scenario/StoryAreaH:LastBossAppear_080', 'getAttention': False})
        Timer.Wait({'time': 1.5})
        Partner[companion].Talk({'message': 'scenario/StoryAreaH:LastBossAppear_090', 'getAttention': False})
        Timer.Wait({'time': 0.5})
    } {
        Timer.Wait({'time': 1.0})
        Fade.StartPreset({'preset': 'FadeInNormal'})
        FlowControl.SetCanSkip({'enable': True})
    } {
        LastBossMu00.PlayTailorOtherChannelNoWait({'channel': 'Aura', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        LastBossMu00.PlayTailorOtherChannelNoWait({'channel': 'Aura_Blast', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        LastBossMu00.PlayOtherChannelTentacle({'searchBaseName': 'Aura', 'searchHandName': 'Aura', 'index': -1, 'restart': False})
    } {
        TriforcePiece.SetVisibility({'visible': False})
        TriforcePiece.SetGravityEnable({'enable': False})
        TriforcePiece.SetCollisionEnabled({'enable': False})
        TriforcePiece.WarpToActorWithCompassPoint({'direction': 0, 'distance': 5.0, 'actor': ActorIdentifier(name="TriforcePiece"), 'offsetY': -1.0, 'offsetX': 0.0})
    } {
        EvBackWallMuPhase1.SetComponentActive({'name': 'skeletalModelComp', 'active': True})
    } {
        Timer.Wait({'time': 1.0})
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_NULL00_APPEAR1', 'volume': 1.0, 'pitch': 1.0})
    }

    Camera.Quake({'targetPower': 0, 'initPower': 0, 'duration': 0.0})
    Audio.StopSE({'label': 'SE_EV_NULL00_APPEAR1', 'duration': 0.5})
    LastBossMu00.StopTailorOtherChannel({'channel': 'Aura_Blast', 'index': -1})

    fork {
        Camera.PlayLocationOriginCameraAnimation({'offsetZ': 0.0, 'path': 'actor/EvLastBossMu_1st_form.bfres', 'ignoreRotation': True, 'name': 'LastBossAppear02_cam', 'farClipDistanceCtrl': False, 'offsetY': 0.0, 'location': 'EvL019', 'chaseRatio': 1.0, 'offsetX': 0.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        EvBackWallMuPhase1.SetComponentActive({'name': 'skeletalModelComp', 'active': False})
    } {

        fork {
            TriforcePiece.SetVisibility({'visible': False})
            TriforcePiece.SetCullMode({'enabled': True, 'cullMode': 0})
            TriforcePiece.PlayAnimationEx({'name': 'ev_LastBossAppear', 'time': 0.0, 'restart': True, 'layer': 0, 'blendFrame': -1})
        } {
            Zelda.SetVisibility({'visible': False})
            Zelda.PlayAnimation({'name': 'ev_BossApear_battle_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            EvLink.SetVisibility({'visible': False})
            EvLink.PlayAnimation({'name': 'ev_BossApear_battle_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner[companion].SetVisibility({'visible': False})
        } {
            LastBossMu00.WarpToActor({'offsetY': 0.0, 'actor': ActorIdentifier(name="LastBossMu00"), 'distance': 6.0, 'offsetX': 0.0})
            LastBossMu00.SetVisibility({'visible': True})
        } {

            fork {
                LastBossMu00.PlayAnimationEx({'name': 'ev_LastBossAppear_wait', 'restart': True, 'time': 0.0, 'layer': 0, 'blendFrame': -1})
            } {
                LastBossMu00.PlayMotionTentacleNumber({'num': 0, 'name': 'ev_LastBossAppear_l_arm_wait', 'baseName': 'ev_LastBossAppear_l_base_wait'})
            } {
                LastBossMu00.PlayMotionTentacleNumber({'num': 1, 'name': 'ev_LastBossAppear_r_arm_wait', 'baseName': 'ev_LastBossAppear_r_base_wait'})
            } {
                LastBossMu00.PlayMotionTentacleNumber({'num': 2, 'name': 'ev_LastBossAppear_b_arm_wait', 'baseName': 'ev_LastBossAppear_b_base_wait'})
            } {
                LastBossMu00.SetTentacleModelActive({'isActive': True})
            }

        } {
            LastBossMu00.PlayTailorOtherChannelNoWait({'channel': 'Absorb_Triforce', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        } {
            TriforcePiece.PlayTailorOtherChannelNoWait({'channel': 'Absorb_Triforce', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        }

        Timer.Wait({'time': 8.5})
        TriforcePiece.Deactivate()
        Timer.Wait({'time': 2.0493268966674805})
        LastBossMu00.SetTalkerName({'message': 'glossary/Character:Villan', 'keep': False})

        fork {
            LastBossMu00.Talk({'message': 'scenario/StoryAreaH:LastBossAppear_100', 'getAttention': False})
        } {
            Timer.Wait({'time': 6.483351230621338})
            Dialog.Signal()
        }

        Timer.Wait({'time': 2.946732997894287})

        fork {
            LastBossMu00.Talk({'message': 'scenario/StoryAreaH:LastBossAppear_105', 'getAttention': False})
        } {
            Timer.Wait({'time': 6.7333664894104})
            Dialog.Signal()
        }

        Timer.Wait({'time': 2.2831668853759766})

        fork {
            LastBossMu00.PlayTailorOtherChannelNoWait({'channel': 'Electricity', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        } {
            Audio.PlayOneshotSystemSE({'label': 'SE_EV_NULL00_APPEAR2_2', 'volume': 1.0, 'pitch': 1.0})
        }


        fork {
            LastBossMu00.Talk({'message': 'scenario/StoryAreaH:LastBossAppear_106', 'getAttention': False})
        } {
            Timer.Wait({'time': 3.5666630268096924})
            Dialog.Signal()
        }

        Timer.Wait({'time': 1.0666600465774536})

        fork {
            LastBossMu00.Talk({'message': 'scenario/StoryAreaH:LastBossAppear_110', 'getAttention': False})
        } {
            Timer.Wait({'time': 3.133333921432495})
            Dialog.Signal()
        }

    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_NULL00_APPEAR2_1', 'volume': 1.0, 'pitch': 1.0})
    } {
        Timer.Wait({'time': 2.0})
        Audio.PlayBGM({'volume': 1.0, 'label': 'BGM_EV_MUAPPEAR', 'ignoreSkip': False})
    }

    Timer.Wait({'time': 0.21666666865348816})
    Audio.EnablePlaySeFromTailor()

    fork {
        Camera.PlayLocationOriginCameraAnimation({'offsetZ': 0.0, 'path': 'actor/EvLastBossMu_1st_form.bfres', 'ignoreRotation': True, 'name': 'LastBossAppear03_cam', 'farClipDistanceCtrl': True, 'offsetY': 0.0, 'location': 'EvL019', 'chaseRatio': 1.0, 'offsetX': 0.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {

        fork {

            fork {
                LastBossMu00.PlayAnimation({'name': 'ev_LastBossAppear', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                LastBossMu00.PlayMotionTentacleNumber({'baseName': 'ev_LastBossAppear_l_base', 'num': 0, 'name': 'ev_LastBossAppear_l_arm'})
            } {
                LastBossMu00.PlayMotionTentacleNumber({'baseName': 'ev_LastBossAppear_r_base', 'num': 1, 'name': 'ev_LastBossAppear_r_arm'})
            } {
                LastBossMu00.PlayMotionTentacleNumber({'baseName': 'ev_LastBossAppear_b_base', 'num': 2, 'name': 'ev_LastBossAppear_b_arm'})
            } {
                Timer.Wait({'time': 0.25})
                LastBossMu00.SetTentacleModelActive({'isActive': True})
            }

        } {
            Timer.Wait({'time': 3.3329999446868896})
            LastBossMu00.EndPlayOtherChannelTentacle({'searchBaseName': 'Aura', 'searchHandName': 'Aura', 'index': -1})
            Event365:

            fork {
                Zelda.WarpToActor({'distance': 0.0, 'offsetY': -1.0, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetX': 1.5})
                Zelda.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="LastBossMu00"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                Zelda.SetVisibility({'visible': True})
                Timer.Wait({'time': 2.299999952316284})
                Zelda.PlayAnimation({'name': 'ev_LastBossAppear_battle_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                EvLink.WarpToActor({'distance': 0.0, 'offsetY': -1.0, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetX': -2.5})
                EvLink.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="LastBossMu00"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                EvLink.SetVisibility({'visible': True})
                Timer.Wait({'time': 2.200000047683716})
                EvLink.PlayAnimation({'name': 'ev_LastBossAppear_battle_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Partner[companion].MoveToDefaultPosition({'speed': 1, 'position': 1, 'tolerance': 0.0, 'avoidWall': False, 'avoidPlayer': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
                Partner[companion].AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="LastBossMu00"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                Partner[companion].SetVisibility({'visible': True})
            }

        } {
            Timer.Wait({'time': 11.0})
            LastBossMu00.StopTailorOtherChannel({'channel': 'Aura', 'index': -1})
            LastBossMu00.PlayTailorOtherChannelNoWait({'channel': 'Clear_Haze', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            Timer.Wait({'time': 2.0666730403900146})
            LastBossMu00.ShowUI({'message': 'glossary/Boss:Enemy_605', 'visible': True})
            Timer.Wait({'time': 3.0})
            LastBossMu00.ShowUI({'message': 'glossary/Boss:Enemy_605', 'visible': False})
            goto Event365
        } {
            Timer.Wait({'time': 18.0})
            LastBossMu00.PlayTailorOtherChannelNoWait({'channel': 'Radiant_Line', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            Environment.UnlockCurrentRegion({'regionName': 'Ev_Appear_03', 'enableBlend': True})
        }

    }

    Audio.PlayBGM({'volume': 1.0, 'label': 'BGM_BATTLE_BOSS_MU1', 'ignoreSkip': True})
    Audio.SetBGMMainTrackVolume({'label': 'BGM_BATTLE_BOSS_MU1', 'track': 0, 'duration': 0.0})
    Zelda.SetShadowDecalEnable({'enable': True})
    Partner[companion].EnableAutoMovement()

    fork {
        Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})
        Camera.SetShadowMapSettings({'ShadowMapSettings': 'Default'})
    } {
        LastBossMu00.SetGravityEnable({'enable': True})
        LastBossMu00.PlayAnimation({'blendFrame': 0, 'name': 'First_wait', 'layer': 0, 'restart': False})
    } {
        LastBossMu00.WarpToActorWithCompassPoint({'direction': 0, 'offsetY': 0.0, 'actor': ActorIdentifier(name="EvEnemyZelda"), 'distance': 1.0, 'offsetX': 0.0})
    } {
        EvLink.Deactivate()
    } {
        CompanionLink.Activate()
    } {
        LastBossMu00.StopTailorOtherChannel({'channel': 'Radiant_Line', 'index': -1})
    }

    Timer.Wait({'time': 0.25})
    QuestSystem.SetProgress({'symbol': 'LastDungeon:1215263039', 'isShowTelopInEvent': False, 'isFrontFade': False})
    Hud.PlayInAnim()
    LastBossMu00.CameraLockon({'maxSpeed': 100.0})
    LastBossMu00.ChangeHPLock({'step': 0})
    Camera.BeginInnerScroll({'centerX': -26.0, 'centerY': 0.0, 'centerZ': -211.0, 'distanceToLookAt': 25.0, 'halfSizeX': 11.0, 'halfSizeZ': 11.0, 'halfSizeY': 15.0})
    EventVariables.SetVariable({'symbol': 'LastDungeon:1215263039'})
}

void Damage1() {

    fork {

        fork {
            LastBossMu00.SetTailorProperty({'propertyIndex': 0, 'value': '1', 'index': -1})
        } {
            Timer.Wait({'time': 1.0})
            LastBossMu00.PlayTailorOtherChannelNoWait({'channel': 'SwitchFirst', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            LastBossMu00.ChangeDamageState({'frame': 1.0})
        } {
            LastBossMu00.PlayAnimation({'name': 'First_damage_change', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 3.0})
        } {
            LastBossMu00.LookAtGimmick({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        }

        LastBossMu00.ChangeHPLock({'step': 2})
    } {

        call EvResetCommon.AngryReset()

    }

}

void Damage3() {

    fork {

        fork {
            LastBossMu00.SetTailorProperty({'propertyIndex': 0, 'value': '3', 'index': -1})
        } {
            Timer.Wait({'time': 1.0})
            LastBossMu00.PlayTailorOtherChannelNoWait({'channel': 'SwitchThird', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            LastBossMu00.ChangeDamageState({'frame': 2.0})
        } {
            LastBossMu00.PlayAnimation({'name': 'First_damage_change', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 3.0})
        } {
            LastBossMu00.LookAtGimmick({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        }

        Audio.SetBGMMainTrackVolume({'label': 'BGM_BATTLE_BOSS_MU1', 'track': 1, 'duration': 0.5})
        LastBossMu00.ChangeHPLock({'step': 3})
    } {

        call EvResetCommon.AngryReset()

    }

}

void Damage4() {

    fork {
        LastBossMu00.SetTailorProperty({'propertyIndex': 0, 'value': '4', 'index': -1})
    } {
        Timer.Wait({'time': 1.0})
        LastBossMu00.PlayTailorOtherChannelNoWait({'channel': 'SwicthFourth', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        LastBossMu00.PlayTailorOtherChannelNoWait({'channel': 'Phase1Dead', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        LastBossMu00.ChangeDamageState({'frame': 3.0})
    } {
        LastBossMu00.PlayAnimation({'name': 'First_dead', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.0})
    } {
        LastBossMu00.SpritTentaclesAll()
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_ENEMY_NULL00_DEAD', 'volume': 1.0, 'pitch': 1.0})
    }

    LastBossMu00.ChangeHPLock({'step': 3})
}

void LastBossFloorChange() {

    call EvResetCommon.AllReset()

    Zelda.SetGravityEnable({'enable': False})
    EvLink.PlayAnimationNoWait({'name': 'ev_InBoundaryWorld_jump', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    EvLink.SetGravityEnable({'enable': False})
    EvLink.SetVisibility({'visible': False})
    EvLink.SetComponentActive({'name': 'aimControlComp', 'active': True})
    Area.SetRestartPositionToLinkedPoint({'pointIndex': 0, 'direction': 2, 'stance': 'Ground'})
    GameControl.SaveToTemporarySaveData()

    call FloorChangeCommon._WarpCommon({'fadePreset': 'FadeOutNormalB'})

    GameControl.RequestWarp({'locator': 'LastBossAppear', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void BeforeLastBoss() {

    call EvResetCommon.AllReset()


    fork {
        Partner[companion].MoveToTargetActor({'speed': 0, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'distance': 1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Timer.Wait({'time': 0.5})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="EvLink"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Zelda.MoveToTargetActor({'speed': 0, 'actor': ActorIdentifier(name="Zelda"), 'distance': 1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Timer.Wait({'time': 0.4000000059604645})
        Zelda.AimActor({'actor': ActorIdentifier(name="EvLink"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        EvLink.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.4000000059604645})
        EvLink.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 1.2000000476837158})
        EvLink.PlayAnimationNoWait({'name': 'ev_yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.7999999523162842})
    }


    fork {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.30000001192092896, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimCompassPoint({'direction': 2, 'duration': 0.30000001192092896, 'withoutTurn': False, 'immediateTurn': False})
    } {
        EvLink.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    EvLink.ResetAim()
    EvLink.SetComponentActive({'name': 'aimControlComp', 'active': False})
    EvLink.KeepAnimationAfterEvent()
    EventFlags.SetFlag({'symbol': 'BeforeLastBoss', 'value': True})
}
