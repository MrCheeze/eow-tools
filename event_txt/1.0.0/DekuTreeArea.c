-------- EventFlow: DekuTreeArea --------

Actor: DekuTree
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait', 'PlayAnimationNoWait']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump', 'SetThroughObstaclesOnMove', 'SetResetOverlappedActorsOnMoveDone', 'LoadArea']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimCompassPoint', 'SetVisibility', 'MoveToCompassPoint', 'MoveToBesideTargetActor']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: []
queries: ['CheckProgress']
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: ElevatorTriforce
entrypoint: None()
actions: ['MoveToCompassPoint', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE', 'StopRegionBgm', 'DisableRegionBgmAutoPlay']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartParam', 'StartPreset']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['PlayLocationOriginCameraAnimation', 'LerpDofSettings']
queries: []
params: None

Actor: CrackHuge
entrypoint: None()
actions: ['PlayAnimationNoWait', 'Activate', 'PlayAnimationEx', 'PlayMaterialAnimationNoWait', 'SetAutoCalcBoundingVolumeEnabled']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['SetCanSkip']
queries: []
params: None

Actor: EvHolyPillar
entrypoint: None()
actions: ['Activate', 'PlayAnimationNoWait', 'PlayTailorOtherChannelNoWait', 'SetCullMode']
queries: []
params: None

Actor: HylianM006
entrypoint: None()
actions: ['PlayAnimationNoWait', 'WarpToActor', 'PlayMaterialAnimationNoWait', 'SetVisibility', 'PlayTailorOtherChannelNoWait', 'PlayAnimation', 'PlayTailorOtherChannelEx', 'AimCompassPoint', 'SetFacialExpression']
queries: []
params: None

Actor: HylianM009
entrypoint: None()
actions: ['PlayAnimationNoWait', 'WarpToActorWithCompassPoint', 'PlayMaterialAnimationNoWait', 'SetVisibility', 'PlayTailorOtherChannelNoWait', 'PlayAnimation', 'PlayTailorOtherChannelEx', 'SetFacialExpression', 'SetCastShadow']
queries: []
params: None

Actor: HylianF016
entrypoint: None()
actions: ['PlayAnimationNoWait', 'WarpToActor', 'PlayMaterialAnimationNoWait', 'SetVisibility', 'PlayTailorOtherChannelNoWait', 'PlayAnimation', 'PlayTailorOtherChannelEx', 'SetFacialExpression']
queries: []
params: None

Actor: HylianM011
entrypoint: None()
actions: ['SetVisibility']
queries: []
params: None

Actor: HylianM014
entrypoint: None()
actions: ['WarpToActor', 'PlayAnimation', 'PlayTailorOtherChannelEx', 'PlayMaterialAnimationNoWait', 'PlayAnimationNoWait', 'SetVisibility', 'SetFacialExpression', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: Dog
entrypoint: None()
actions: ['WarpToActor', 'PlayAnimation', 'PlayTailorOtherChannelEx', 'PlayMaterialAnimationNoWait', 'PlayAnimationNoWait', 'SetVisibility', 'PlayTailorOtherChannelNoWait', 'AimDegreeAngle']
queries: []
params: None

Actor: Cow
entrypoint: None()
actions: ['WarpToActor', 'PlayAnimation', 'PlayTailorOtherChannelEx', 'PlayMaterialAnimationNoWait', 'PlayAnimationNoWait', 'SetVisibility', 'PlayTailorOtherChannelNoWait', 'AimDegreeAngle']
queries: []
params: None

Actor: ZoraRiverChief
entrypoint: None()
actions: ['PlayAnimationNoWait', 'PlayAnimation', 'SetFacialExpression', 'AimActor']
queries: []
params: None

Actor: ZoraSeaChief
entrypoint: None()
actions: ['PlayAnimationNoWait', 'PlayAnimation', 'SetFacialExpression']
queries: []
params: None

Actor: ZoraSea002
entrypoint: None()
actions: ['PlayAnimation', 'WarpToActor', 'AimCompassPoint', 'PlayAnimationNoWait', 'SetFacialExpression', 'AimActor']
queries: []
params: None

Actor: ZoraRiver002
entrypoint: None()
actions: ['PlayAnimationNoWait', 'PlayAnimation', 'SetFacialExpression', 'WarpToActor', 'AimDegreeAngle', 'AimActor']
queries: []
params: None

Actor: Horse[1]
entrypoint: None()
actions: ['SetVisibility']
queries: []
params: None

Actor: Horse[2]
entrypoint: None()
actions: ['SetVisibility']
queries: []
params: None

Actor: Horse[3]
entrypoint: None()
actions: ['SetVisibility']
queries: []
params: None

Actor: HorseLoved_CannotRental
entrypoint: None()
actions: ['SetVisibility']
queries: []
params: None

Actor: Cucco_mc_1
entrypoint: None()
actions: ['PlayTailorOtherChannelEx', 'SetVisibility', 'PlayAnimation', 'PlayMaterialAnimationNoWait', 'PlayAnimationNoWait', 'AimCompassPoint', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: EvMoriblinSpear00[1]
entrypoint: None()
actions: ['PlayAnimationNoWait', 'PlayMaterialAnimationNoWait', 'PlayAnimation', 'Activate', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: EvMoriblinSpear00[2]
entrypoint: None()
actions: ['PlayAnimationNoWait', 'PlayMaterialAnimationNoWait', 'PlayAnimation', 'Activate', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: LocationInfoUI
entrypoint: None()
actions: ['PreloadArchive', 'Show', 'Hide']
queries: []
params: None

Actor: TransitCounters
entrypoint: None()
actions: ['SetValue']
queries: []
params: None

Actor: HyruleSoldier025
entrypoint: None()
actions: ['SetVisibility']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['SetVisibility', 'MoveToCompassPoint', 'AimCompassPoint', 'MoveToBesideTargetActor']
queries: []
params: None

void LiftDownOut() {
    switch QuestSystem.CheckProgress({'symbol': 'LastDungeon:1367956526'}) {
      case 4294967295:
        Event203:

        call DekuTree.Talk1st()

        Event417:
        GameControl.SetThroughObstaclesOnMove({'enable': False})
        GameControl.SetResetOverlappedActorsOnMoveDone({'enable': False})

        fork {
            Player.MoveToBesideTargetActor({'actor': ActorIdentifier(name="ElevatorTriforce"), 'speed': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        } {
            Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetX': -1.0, 'offsetZ': 0.5, 'actor': ActorIdentifier(name="ElevatorTriforce"), 'offsetY': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        }

        Timer.Wait({'time': 0.5})

        fork {
            Player.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        } {
            Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        }

        Timer.Wait({'time': 0.5})
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_TRIFORCE_LIFT_DOWN1', 'volume': 1.0, 'pitch': 1.0})
        ElevatorTriforce.PlayTailorOtherChannelNoWait({'channel': 'on', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Timer.Wait({'time': 1.2000000476837158})

        fork {
            Timer.Wait({'time': 0.5})

            call AreaExitCommon._OutCommon({'fadePreset': 'FadeOutNormalB'})

        } {
            ElevatorTriforce.MoveToCompassPoint({'direction': 4, 'speed': 0, 'distance': 3.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        } {
            Partner[companion].MoveToCompassPoint({'direction': 4, 'distance': 3.0, 'speed': 0, 'withoutTurn': True, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        }

        TransitCounters.SetValue({'key': 'ElevatorTriforceTraffic', 'value': 1})
        GameControl.RequestLevelJump({'level': 'TriForceRemains', 'locator': 'TriForceRemains_001Start', 'offsetX': 0.0, 'offsetZ': 0.0})
      case [0, 1]:

        call EvResetCommon.AllReset()

        goto Event417
    }
}

void LiftUpIn() {
    Player.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    GameControl.SetThroughObstaclesOnMove({'enable': False})
    GameControl.SetResetOverlappedActorsOnMoveDone({'enable': False})

    fork {

        call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

    } {
        ElevatorTriforce.MoveToCompassPoint({'speed': 0, 'distance': 3.0, 'direction': 5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_TRIFORCE_LIFT_UP2', 'volume': 1.0, 'pitch': 1.0})
    }

    Player.MoveToCompassPoint({'speed': 0, 'direction': 0, 'distance': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    TransitCounters.SetValue({'key': 'ElevatorTriforceTraffic', 'value': 0})
}

void MuCrackAppear1() {
    Audio.StopRegionBgm({'fadeSec': 0.0})
    Audio.DisableRegionBgmAutoPlay()

    fork {
        Player.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    }

    FlowControl.SetCanSkip({'enable': True})
    Camera.LerpDofSettings({'kind': 7, 'TiltShiftCenterX': 0.0, 'BlurRatio': 1.0, 'BlurSizeScale': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftRange': 0.20000000298023224, 'TiltShiftGamma': 2.0, 'TiltShiftBlurSizeScale': 1.0, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofBlurRatio': 1.0, 'duration': 0.0, 'TiltShiftDofBackBlurFadeWidth': 0.05000000074505806, 'TiltShiftDofBackCurve': 0.5, 'FocalDistance': 24.5, 'FocusRange': 1.0, 'TiltShiftCenterY': 0.699999988079071, 'TiltShiftDofFocalDistance': 70.0, 'TiltShiftDofBackRange': 20.0, 'noWait': False})

    fork {
        Fade.StartPreset({'preset': 'FadeInNormal'})
    } {
        Camera.PlayLocationOriginCameraAnimation({'farClipDistanceCtrl': True, 'lookAtDistanceCtrl': True, 'name': 'MuCrackAppear02_cam', 'path': 'actor/EvLastBossMu_1st_form.bfres', 'ignoreRotation': True, 'offsetZ': 0.0, 'location': 'EvMuCrackAppear1_cam', 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'nearClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        CrackHuge.Activate()
        CrackHuge.SetAutoCalcBoundingVolumeEnabled({'enabled': True})
        CrackHuge.PlayMaterialAnimationNoWait({'name': 'Appear_DekuTreeArea', 'layer': 0})
        CrackHuge.PlayAnimationNoWait({'name': 'Appear_DekuTreeArea', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.06599999964237213})
        DekuTree.PlayTailorOtherChannelNoWait({'channel': 'MuCrackAppear_Pillar', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        DekuTree.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 4.0})
        Fade.StartParam({'mode': 1, 'time': 0.5, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0})
    }

    GameControl.RequestLevelJump({'level': 'Field', 'locator': 'EvMuCrackAppear2', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void RevivingWorld1() {
    Fade.StartPreset({'preset': 'CutOutW'})
    Audio.StopRegionBgm({'fadeSec': 0.0})
    Audio.DisableRegionBgmAutoPlay()

    fork {
        Player.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    }

    FlowControl.SetCanSkip({'enable': True})
    Camera.LerpDofSettings({'kind': 7, 'TiltShiftCenterX': 0.0, 'BlurRatio': 1.0, 'BlurSizeScale': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftRange': 0.20000000298023224, 'TiltShiftGamma': 2.0, 'TiltShiftBlurSizeScale': 1.0, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofBlurRatio': 1.0, 'duration': 0.0, 'TiltShiftDofBackBlurFadeWidth': 0.05000000074505806, 'TiltShiftDofBackCurve': 0.5, 'FocalDistance': 24.5, 'FocusRange': 1.0, 'TiltShiftCenterY': 0.699999988079071, 'TiltShiftDofFocalDistance': 70.0, 'TiltShiftDofBackRange': 20.0, 'noWait': False})

    fork {
        Fade.StartParam({'time': 0.5, 'mode': 0, 'colorR': 1.0, 'colorG': 1.0, 'colorB': 1.0})
    } {
        Camera.PlayLocationOriginCameraAnimation({'farClipDistanceCtrl': True, 'lookAtDistanceCtrl': True, 'path': 'actor/EvLastBossMu_1st_form.bfres', 'ignoreRotation': True, 'offsetZ': 0.0, 'name': 'RevivingWorld_DekuTree01_cam', 'location': 'EvRevivingWorld1_cam', 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'nearClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        CrackHuge.Activate()
        CrackHuge.PlayAnimationNoWait({'name': 'DekuTreeArea_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EvHolyPillar.Activate()
        EvHolyPillar.PlayTailorOtherChannelNoWait({'channel': 'Ev_RevivingWorld', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        EvHolyPillar.PlayAnimationNoWait({'name': 'move_RevivingWorld_DekuTree', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 6.5})
        Fade.StartParam({'colorR': 1.0, 'colorG': 1.0, 'colorB': 1.0, 'mode': 1, 'time': 1.0})
    }

    GameControl.RequestLevelJump({'level': 'Field', 'locator': 'EvRevivingWorld2', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void MuCrackAppear2() {
    Audio.StopRegionBgm({'fadeSec': 0.0})
    Audio.DisableRegionBgmAutoPlay()

    fork {
        Player.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    } {
        HylianM011.SetVisibility({'visible': False})
    } {
        HyruleSoldier025.SetVisibility({'visible': False})
    }

    FlowControl.SetCanSkip({'enable': True})
    Camera.LerpDofSettings({'kind': 7, 'TiltShiftCenterX': 0.0, 'BlurRatio': 1.0, 'BlurSizeScale': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftRange': 0.20000000298023224, 'TiltShiftGamma': 2.0, 'TiltShiftBlurSizeScale': 1.0, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofBlurRatio': 1.0, 'duration': 0.0, 'TiltShiftDofBackBlurFadeWidth': 0.05000000074505806, 'TiltShiftDofBackCurve': 0.5, 'FocalDistance': 24.5, 'FocusRange': 1.0, 'TiltShiftCenterY': 0.699999988079071, 'TiltShiftDofFocalDistance': 70.0, 'TiltShiftDofBackRange': 20.0, 'noWait': False})

    fork {
        Fade.StartPreset({'preset': 'FadeInNormal'})
    } {
        Camera.PlayLocationOriginCameraAnimation({'farClipDistanceCtrl': True, 'lookAtDistanceCtrl': True, 'path': 'actor/EvLastBossMu_1st_form.bfres', 'ignoreRotation': True, 'offsetZ': 0.0, 'name': 'MuCrackAppear03_cam', 'location': 'Field_HyrulePlains_004', 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'nearClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        CrackHuge.Activate()
        CrackHuge.PlayMaterialAnimationNoWait({'name': 'Appear_Kakariko', 'layer': 0})
        CrackHuge.PlayAnimationEx({'time': 0.0, 'name': 'Appear_Kakariko', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Cucco_mc_1.AimCompassPoint({'direction': 1, 'duration': 0.20000000298023224, 'withoutTurn': False, 'immediateTurn': False})

        fork {
            Cucco_mc_1.PlayAnimationNoWait({'name': 'ev_Crack_Sinking', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Cucco_mc_1.PlayMaterialAnimationNoWait({'name': 'SinkingBoundary', 'layer': 0})
        } {
            Cucco_mc_1.PlayTailorOtherChannelNoWait({'channel': 'SinkingCrack', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        }

    } {
        HylianM006.WarpToActor({'offsetX': -1.0, 'actor': ActorIdentifier(name="HylianM006"), 'distance': 3.5, 'offsetY': 0.0})

        fork {
            HylianM006.PlayAnimationNoWait({'name': 'ev_Crack_Sinking02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            HylianM006.PlayMaterialAnimationNoWait({'name': 'SinkingBoundary', 'layer': 0})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            HylianM006.PlayTailorOtherChannelNoWait({'channel': 'SinkingCrack', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        }

    } {
        HylianF016.WarpToActor({'offsetX': -5.0, 'actor': ActorIdentifier(name="HylianF016"), 'distance': -10.0, 'offsetY': 0.0})
        Timer.Wait({'time': 0.4000000059604645})

        fork {
            HylianF016.PlayAnimationNoWait({'name': 'ev_Crack_Sinking04', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HylianF016.PlayMaterialAnimationNoWait({'name': 'SinkingBoundary', 'layer': 0})
        } {
            HylianF016.PlayTailorOtherChannelNoWait({'channel': 'SinkingCrack', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        }

    } {
        HylianM009.WarpToActorWithCompassPoint({'offsetX': -3.0, 'distance': 10.5, 'actor': ActorIdentifier(name="HylianM009"), 'direction': 1, 'offsetY': 0.0})
        Timer.Wait({'time': 0.30000001192092896})

        fork {
            HylianM009.PlayAnimationNoWait({'name': 'ev_Crack_Sinking03', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HylianM009.PlayMaterialAnimationNoWait({'name': 'SinkingBoundary', 'layer': 0})
        } {
            HylianM009.PlayTailorOtherChannelNoWait({'channel': 'SinkingCrack', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        }

    } {
        Timer.Wait({'time': 2.5})
        Fade.StartParam({'time': 0.5, 'mode': 1, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0})
    }

    GameControl.RequestLevelJump({'level': 'Field', 'locator': 'EvMuCrackAppear3', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void RevivingWorld2() {
    Audio.StopRegionBgm({'fadeSec': 0.0})
    Audio.DisableRegionBgmAutoPlay()

    fork {
        Player.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    } {
        HylianM011.SetVisibility({'visible': False})
    } {
        HylianM006.SetVisibility({'visible': False})
    } {
        HylianF016.SetVisibility({'visible': False})
    } {
        HylianM009.SetVisibility({'visible': False})
    } {
        Cucco_mc_1.SetVisibility({'visible': False})
    }

    FlowControl.SetCanSkip({'enable': True})
    Camera.LerpDofSettings({'kind': 7, 'TiltShiftCenterY': 0.75, 'TiltShiftCenterX': 0.0, 'BlurRatio': 1.0, 'BlurSizeScale': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftRange': 0.20000000298023224, 'TiltShiftGamma': 2.0, 'TiltShiftBlurSizeScale': 1.0, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofBlurRatio': 1.0, 'duration': 0.0, 'TiltShiftDofBackBlurFadeWidth': 0.05000000074505806, 'TiltShiftDofFocalDistance': 36.0, 'TiltShiftDofBackRange': 40.0, 'TiltShiftDofBackCurve': 0.5, 'FocalDistance': 24.5, 'FocusRange': 1.0, 'noWait': False})

    fork {
        Fade.StartParam({'time': 0.5, 'mode': 0, 'colorR': 1.0, 'colorG': 1.0, 'colorB': 1.0})
    } {
        Camera.PlayLocationOriginCameraAnimation({'farClipDistanceCtrl': True, 'lookAtDistanceCtrl': True, 'path': 'actor/EvLastBossMu_1st_form.bfres', 'ignoreRotation': True, 'offsetZ': 0.0, 'name': 'RevivingWorld_HyrulePlains_002_cam', 'location': 'Field_HyrulePlains_004', 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'nearClipDistanceCtrl': False, 'aspectRatioCtrl': False})
        Fade.StartPreset({'preset': 'FadeOutNormalW'})
        GameControl.RequestLevelJump({'level': 'Field', 'locator': 'EvRevivingWorld3', 'offsetX': 0.0, 'offsetZ': 0.0})
    } {
        CrackHuge.Activate()
        CrackHuge.PlayAnimationNoWait({'name': 'Appear_Kakariko_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EvHolyPillar.Activate()
        EvHolyPillar.SetCullMode({'enabled': True, 'cullMode': 0})
        EvHolyPillar.PlayAnimationNoWait({'name': 'move_RevivingWorld_Kakariko', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM006.WarpToActor({'offsetX': -1.0, 'distance': 3.5, 'actor': ActorIdentifier(name="HylianM006"), 'offsetY': 0.0})
        HylianM006.SetFacialExpression({'expression': 'sleep'})
        HylianM006.PlayAnimation({'name': 'wait01_R', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.800000011920929})
        HylianM006.PlayTailorOtherChannelEx({'channel': 'WarpGlow', 'time': 0.25, 'restart': False, 'index': -1, 'stopOnSkipped': True})
        HylianM006.SetVisibility({'visible': True})
        Timer.Wait({'time': 1.399999976158142})
        HylianM006.SetFacialExpression({'expression': 'surprise'})
        Timer.Wait({'time': 0.6000000238418579})
        HylianM006.AimCompassPoint({'direction': 3, 'duration': 0.5, 'withoutTurn': False, 'immediateTurn': False})
        HylianM006.SetFacialExpression({'expression': 'smile'})
    } {
        HylianF016.WarpToActor({'offsetX': -5.0, 'distance': -10.0, 'actor': ActorIdentifier(name="HylianF016"), 'offsetY': 0.0})
        HylianF016.SetFacialExpression({'expression': 'sleep'})
        HylianF016.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.0})
        HylianF016.PlayTailorOtherChannelEx({'channel': 'WarpGlow', 'time': 0.25, 'restart': False, 'index': -1, 'stopOnSkipped': True})
        HylianF016.SetVisibility({'visible': True})
        Timer.Wait({'time': 1.100000023841858})
        HylianF016.SetFacialExpression({'expression': 'surprise'})
        HylianF016.PlayAnimation({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.699999988079071})
        HylianF016.PlayAnimation({'name': 'wait01', 'blendFrame': 18, 'layer': 0, 'restart': False})
        HylianF016.SetFacialExpression({'expression': 'normal'})
        Timer.Wait({'time': 0.30000001192092896})
        HylianF016.SetFacialExpression({'expression': 'smile'})
    } {
        HylianM009.WarpToActorWithCompassPoint({'offsetX': -3.0, 'distance': 10.5, 'direction': 1, 'actor': ActorIdentifier(name="HylianM009"), 'offsetY': 0.0})
        HylianM009.SetFacialExpression({'expression': 'sleep'})
        HylianM009.PlayAnimation({'name': 'surprised_lp01_P', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.0})
        HylianM009.PlayTailorOtherChannelEx({'channel': 'WarpGlow', 'time': 0.25, 'restart': False, 'index': -1, 'stopOnSkipped': True})
        HylianM009.SetCastShadow({'cast': False})
        HylianM009.SetVisibility({'visible': True})
        Timer.Wait({'time': 1.100000023841858})
        HylianM009.SetCastShadow({'cast': True})
        HylianM009.SetFacialExpression({'expression': 'surprise'})
        Timer.Wait({'time': 0.800000011920929})
        HylianM009.PlayAnimationNoWait({'name': 'no01', 'blendFrame': 18, 'layer': 0, 'restart': False})
    } {
        Timer.Wait({'time': 0.800000011920929})
        Cucco_mc_1.PlayTailorOtherChannelEx({'channel': 'WarpGlow', 'time': 0.25, 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Cucco_mc_1.SetVisibility({'visible': True})
        Timer.Wait({'time': 1.0})
        Cucco_mc_1.PlayAnimation({'name': 'land,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void MuCrackAppear3() {
    Audio.StopRegionBgm({'fadeSec': 0.0})
    Audio.DisableRegionBgmAutoPlay()

    fork {
        Player.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    } {
        Horse[1].SetVisibility({'visible': False})
    } {
        Horse[2].SetVisibility({'visible': False})
    } {
        Horse[3].SetVisibility({'visible': False})
    } {
        HorseLoved_CannotRental.SetVisibility({'visible': False})
    }

    FlowControl.SetCanSkip({'enable': True})
    Camera.LerpDofSettings({'kind': 7, 'TiltShiftCenterX': 0.0, 'BlurRatio': 1.0, 'BlurSizeScale': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftRange': 0.20000000298023224, 'TiltShiftGamma': 2.0, 'TiltShiftBlurSizeScale': 1.0, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofBlurRatio': 1.0, 'duration': 0.0, 'TiltShiftDofBackBlurFadeWidth': 0.05000000074505806, 'TiltShiftDofBackCurve': 0.5, 'FocalDistance': 24.5, 'FocusRange': 1.0, 'TiltShiftCenterY': 0.699999988079071, 'TiltShiftDofFocalDistance': 70.0, 'TiltShiftDofBackRange': 20.0, 'noWait': False})

    fork {
        Fade.StartPreset({'preset': 'FadeInNormal'})
    } {
        Camera.PlayLocationOriginCameraAnimation({'farClipDistanceCtrl': True, 'lookAtDistanceCtrl': True, 'path': 'actor/EvLastBossMu_1st_form.bfres', 'ignoreRotation': True, 'offsetZ': 0.0, 'location': 'Field_HyrulePlains_002', 'name': 'MuCrackAppear04_cam', 'offsetX': -2.0, 'chaseRatio': 1.0, 'offsetY': 0.0, 'nearClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        CrackHuge.Activate()
        CrackHuge.PlayMaterialAnimationNoWait({'name': 'Appear_Ranch', 'layer': 0})
        CrackHuge.PlayAnimationEx({'time': 0.0, 'name': 'Appear_Ranch', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM014.WarpToActor({'distance': 5.0, 'actor': ActorIdentifier(name="HylianM014"), 'offsetX': -2.0, 'offsetY': 0.0})
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            HylianM014.PlayAnimationNoWait({'name': 'ev_Crack_Sinking05', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HylianM014.PlayMaterialAnimationNoWait({'name': 'SinkingBoundary', 'layer': 0})
        } {
            HylianM014.PlayTailorOtherChannelNoWait({'channel': 'SinkingCrack', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        }

    } {
        Dog.WarpToActor({'offsetX': -5.0, 'actor': ActorIdentifier(name="Dog"), 'distance': -1.0, 'offsetY': 0.0})
        Dog.AimDegreeAngle({'angle': 330.0, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            Dog.PlayAnimationNoWait({'name': 'ev_Crack_Sinking', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Dog.PlayMaterialAnimationNoWait({'name': 'SinkingBoundary', 'layer': 0})
        } {
            Dog.PlayTailorOtherChannelNoWait({'channel': 'SinkingCrack', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        }

    } {
        Cow.WarpToActor({'actor': ActorIdentifier(name="Cow"), 'distance': 3.0, 'offsetX': -8.0, 'offsetY': 0.0})
        Cow.AimDegreeAngle({'duration': 0.0, 'angle': 225.0, 'withoutTurn': False, 'immediateTurn': False})
        Timer.Wait({'time': 0.4000000059604645})

        fork {
            Cow.PlayAnimationNoWait({'name': 'ev_Crack_Sinking', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Cow.PlayMaterialAnimationNoWait({'name': 'SinkingBoundary', 'layer': 0})
        } {
            Cow.PlayTailorOtherChannelNoWait({'channel': 'SinkingCrack', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        }

    } {
        Timer.Wait({'time': 2.5})
        Fade.StartParam({'mode': 1, 'time': 0.5, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0})
    }

    GameControl.RequestLevelJump({'level': 'Field', 'locator': 'EvMuCrackAppear4', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void RevivingWorld3() {
    Audio.StopRegionBgm({'fadeSec': 0.0})
    Audio.DisableRegionBgmAutoPlay()

    fork {
        Player.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    } {
        Horse[1].SetVisibility({'visible': False})
    } {
        Horse[2].SetVisibility({'visible': False})
    } {
        Horse[3].SetVisibility({'visible': False})
    } {
        HorseLoved_CannotRental.SetVisibility({'visible': False})
    } {
        HylianM014.SetVisibility({'visible': False})
    } {
        Dog.SetVisibility({'visible': False})
    } {
        Cow.SetVisibility({'visible': False})
    }

    FlowControl.SetCanSkip({'enable': True})
    Camera.LerpDofSettings({'kind': 7, 'TiltShiftCenterY': 0.75, 'TiltShiftCenterX': 0.0, 'BlurRatio': 1.0, 'BlurSizeScale': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftRange': 0.20000000298023224, 'TiltShiftGamma': 2.0, 'TiltShiftBlurSizeScale': 1.0, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofBlurRatio': 1.0, 'duration': 0.0, 'TiltShiftDofBackBlurFadeWidth': 0.05000000074505806, 'TiltShiftDofFocalDistance': 36.0, 'TiltShiftDofBackRange': 40.0, 'TiltShiftDofBackCurve': 0.5, 'FocalDistance': 24.5, 'FocusRange': 1.0, 'noWait': False})

    fork {
        Fade.StartParam({'time': 0.5, 'mode': 0, 'colorR': 1.0, 'colorG': 1.0, 'colorB': 1.0})
    } {
        Camera.PlayLocationOriginCameraAnimation({'farClipDistanceCtrl': True, 'lookAtDistanceCtrl': True, 'path': 'actor/EvLastBossMu_1st_form.bfres', 'ignoreRotation': True, 'name': 'RevivingWorld_HyrulePlains_002_cam', 'location': 'Field_HyrulePlains_002', 'offsetZ': -4.0, 'offsetX': -12.0, 'chaseRatio': 1.0, 'offsetY': 0.0, 'nearClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        CrackHuge.Activate()
        CrackHuge.PlayAnimationNoWait({'name': 'Appear_Ranch_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EvHolyPillar.Activate()
        EvHolyPillar.PlayAnimationNoWait({'layer': 0, 'name': 'move_RevivingWorld_Ranch', 'blendFrame': -1, 'restart': False})
    } {
        HylianM014.WarpToActor({'distance': 5.0, 'offsetX': -2.0, 'actor': ActorIdentifier(name="HylianM014"), 'offsetY': 0.0})
        HylianM014.SetFacialExpression({'expression': 'sleep'})
        HylianM014.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.8999999761581421})
        HylianM014.PlayTailorOtherChannelEx({'channel': 'WarpGlow', 'time': 0.25, 'restart': False, 'index': -1, 'stopOnSkipped': True})
        HylianM014.SetVisibility({'visible': True})
        Timer.Wait({'time': 1.100000023841858})
        HylianM014.SetFacialExpression({'expression': 'surprise'})
        HylianM014.PlayAnimation({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.8999999761581421})
        HylianM014.SetFacialExpression({'expression': 'normal'})
        HylianM014.PlayAnimation({'name': 'think01', 'blendFrame': 18, 'layer': 0, 'restart': False})
        Timer.Wait({'time': 0.800000011920929})
        HylianM014.SetFacialExpression({'expression': 'smile'})
    } {
        Dog.WarpToActor({'offsetX': -5.0, 'actor': ActorIdentifier(name="Dog"), 'distance': -1.0, 'offsetY': 0.0})
        Dog.AimDegreeAngle({'angle': 330.0, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
        Dog.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.0})
        Dog.PlayTailorOtherChannelEx({'channel': 'WarpGlow', 'time': 0.25, 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Dog.SetVisibility({'visible': True})
        Timer.Wait({'time': 0.25})
        Dog.PlayAnimation({'name': 'reaction01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Cow.WarpToActor({'distance': 3.0, 'offsetX': -8.0, 'actor': ActorIdentifier(name="Cow"), 'offsetY': 0.0})
        Cow.AimDegreeAngle({'duration': 0.0, 'angle': 225.0, 'withoutTurn': False, 'immediateTurn': False})
        Cow.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.800000011920929})
        Cow.PlayTailorOtherChannelEx({'channel': 'WarpGlow', 'time': 0.25, 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Cow.SetVisibility({'visible': True})
        Timer.Wait({'time': 0.25})
        Cow.PlayAnimation({'name': 'reaction01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Fade.StartPreset({'preset': 'FadeOutNormalW'})
    GameControl.RequestLevelJump({'level': 'Field', 'locator': 'EvRevivingWorld4', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void MuCrackAppear5() {
    Audio.StopRegionBgm({'fadeSec': 0.0})
    Audio.DisableRegionBgmAutoPlay()

    fork {
        Player.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    } {
        ZoraSea002.WarpToActor({'distance': 0.0, 'offsetX': -6.0, 'actor': ActorIdentifier(name="ZoraSea002"), 'offsetY': 0.0})
    } {
        ZoraRiver002.WarpToActor({'offsetY': 0.0, 'distance': 0.0, 'offsetX': 1.5, 'actor': ActorIdentifier(name="ZoraRiver002")})
    }

    FlowControl.SetCanSkip({'enable': True})
    Camera.LerpDofSettings({'kind': 7, 'TiltShiftCenterX': 0.0, 'BlurRatio': 1.0, 'BlurSizeScale': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftRange': 0.20000000298023224, 'TiltShiftGamma': 2.0, 'TiltShiftBlurSizeScale': 1.0, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofBlurRatio': 1.0, 'duration': 0.0, 'TiltShiftDofBackBlurFadeWidth': 0.05000000074505806, 'TiltShiftDofBackCurve': 0.5, 'FocalDistance': 24.5, 'FocusRange': 1.0, 'TiltShiftCenterY': 0.699999988079071, 'TiltShiftDofFocalDistance': 70.0, 'TiltShiftDofBackRange': 20.0, 'noWait': False})

    fork {
        Fade.StartPreset({'preset': 'FadeInNormal'})
    } {
        Camera.PlayLocationOriginCameraAnimation({'farClipDistanceCtrl': True, 'lookAtDistanceCtrl': True, 'path': 'actor/EvLastBossMu_1st_form.bfres', 'ignoreRotation': True, 'name': 'MuCrackAppear06_cam', 'location': 'EvMuCrackAppear5', 'offsetY': -4.0, 'offsetZ': -4.0, 'chaseRatio': 1.0, 'offsetX': 0.0, 'nearClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        CrackHuge.Activate()
        CrackHuge.PlayMaterialAnimationNoWait({'name': 'Appear_Coast2', 'layer': 0})
        CrackHuge.PlayAnimationEx({'time': 0.0, 'name': 'Appear_Coast2', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'ev_MuCrackAppear_c5', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'ev_MuCrackAppear_c5', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea002.SetFacialExpression({'expression': 'surprise'})
        ZoraSea002.PlayAnimationNoWait({'name': 'ev_MuCrackAppear_c5', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver002.SetFacialExpression({'expression': 'surprise'})
        ZoraRiver002.PlayAnimationNoWait({'name': 'ev_MuCrackAppear_c5', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 3.0})
        Fade.StartParam({'mode': 1, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0, 'time': 1.0})
    }

    GameControl.RequestLevelJump({'level': 'EV_Goddess', 'locator': 'CA1', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void RevivingWorld4() {

    fork {
        ZoraSea002.AimCompassPoint({'direction': 3, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    } {
        ZoraRiver002.AimDegreeAngle({'duration': 0.0, 'angle': -120.0, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.0})
    }

    Audio.StopRegionBgm({'fadeSec': 0.0})
    Audio.DisableRegionBgmAutoPlay()

    fork {
        Player.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    }

    FlowControl.SetCanSkip({'enable': True})
    Camera.LerpDofSettings({'kind': 7, 'TiltShiftCenterY': 0.75, 'TiltShiftCenterX': 0.0, 'BlurRatio': 1.0, 'BlurSizeScale': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftRange': 0.20000000298023224, 'TiltShiftGamma': 2.0, 'TiltShiftBlurSizeScale': 1.0, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofBlurRatio': 1.0, 'duration': 0.0, 'TiltShiftDofBackBlurFadeWidth': 0.05000000074505806, 'TiltShiftDofFocalDistance': 36.0, 'TiltShiftDofBackRange': 40.0, 'TiltShiftDofBackCurve': 0.5, 'FocalDistance': 24.5, 'FocusRange': 1.0, 'noWait': False})

    fork {
        Fade.StartParam({'time': 0.5, 'mode': 0, 'colorR': 1.0, 'colorG': 1.0, 'colorB': 1.0})
    } {
        Camera.PlayLocationOriginCameraAnimation({'farClipDistanceCtrl': True, 'lookAtDistanceCtrl': True, 'path': 'actor/EvLastBossMu_1st_form.bfres', 'ignoreRotation': True, 'name': 'RevivingWorld_River_004_cam', 'offsetY': 0.0, 'offsetZ': 0.0, 'location': 'EvRevivingWorld4', 'chaseRatio': 1.0, 'offsetX': 0.0, 'nearClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        CrackHuge.Activate()
        CrackHuge.PlayAnimationNoWait({'name': 'Appear_Coast2_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EvHolyPillar.Activate()
        EvHolyPillar.PlayAnimationNoWait({'name': 'move_RevivingWorld_Jabujabu', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.PlayAnimation({'name': 'surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 3.0})
        ZoraRiverChief.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraRiverChief.SetFacialExpression({'expression': 'smile'})

        fork {
            ZoraRiverChief.PlayAnimation({'name': 'happy', 'blendFrame': 12, 'layer': 0, 'restart': False})
        } {
            ZoraRiverChief.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    } {
        ZoraSeaChief.PlayAnimation({'name': 'surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 3.700000047683716})
        ZoraSeaChief.SetFacialExpression({'expression': 'smile'})
        ZoraSeaChief.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea002.SetFacialExpression({'expression': 'normal'})
        ZoraSea002.PlayAnimation({'name': 'surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 2.4000000953674316})
        ZoraSea002.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraSea002.PlayAnimation({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSea002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver002.PlayAnimation({'name': 'surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 2.5999999046325684})
        ZoraRiver002.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraRiver002.SetFacialExpression({'expression': 'smile'})
        ZoraRiver002.PlayAnimation({'name': 'laugh01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Fade.StartPreset({'preset': 'FadeOutNormalW'})
    Timer.Wait({'time': 2.0})
    GameControl.RequestLevelJump({'level': 'EV_Goddess', 'locator': 'RW1', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void MuCrackAppear4() {
    Audio.StopRegionBgm({'fadeSec': 0.0})
    Audio.DisableRegionBgmAutoPlay()

    fork {
        Player.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    } {
        EvMoriblinSpear00[1].Activate()
    } {
        EvMoriblinSpear00[2].Activate()
    }

    FlowControl.SetCanSkip({'enable': True})
    Camera.LerpDofSettings({'kind': 7, 'TiltShiftCenterX': 0.0, 'BlurRatio': 1.0, 'BlurSizeScale': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftRange': 0.20000000298023224, 'TiltShiftGamma': 2.0, 'TiltShiftBlurSizeScale': 1.0, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofBlurRatio': 1.0, 'duration': 0.0, 'TiltShiftDofBackBlurFadeWidth': 0.05000000074505806, 'TiltShiftDofBackCurve': 0.5, 'FocalDistance': 24.5, 'FocusRange': 1.0, 'TiltShiftCenterY': 0.699999988079071, 'TiltShiftDofFocalDistance': 70.0, 'TiltShiftDofBackRange': 20.0, 'noWait': False})

    fork {
        Fade.StartPreset({'preset': 'FadeInNormal'})
    } {
        Camera.PlayLocationOriginCameraAnimation({'farClipDistanceCtrl': True, 'lookAtDistanceCtrl': True, 'path': 'actor/EvLastBossMu_1st_form.bfres', 'ignoreRotation': True, 'offsetZ': 0.0, 'name': 'MuCrackAppear05_cam', 'location': 'EvMuCrackAppear4', 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'nearClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        CrackHuge.Activate()
        CrackHuge.PlayMaterialAnimationNoWait({'name': 'Appear_Coast', 'layer': 0})
        CrackHuge.PlayAnimationEx({'time': 0.0, 'name': 'Appear_Coast', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EvMoriblinSpear00[1].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            EvMoriblinSpear00[1].PlayAnimationNoWait({'name': 'ev_Crack_Sinking', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            EvMoriblinSpear00[1].PlayMaterialAnimationNoWait({'name': 'SinkingBoundary', 'layer': 0})
        } {
            EvMoriblinSpear00[1].PlayTailorOtherChannelNoWait({'channel': 'SinkingCrack', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        }

    } {
        EvMoriblinSpear00[2].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.4000000059604645})

        fork {
            EvMoriblinSpear00[2].PlayAnimationNoWait({'name': 'ev_Crack_Sinking', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            EvMoriblinSpear00[2].PlayMaterialAnimationNoWait({'name': 'SinkingBoundary', 'layer': 0})
        } {
            EvMoriblinSpear00[2].PlayTailorOtherChannelNoWait({'channel': 'SinkingCrack', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        }

    } {
        Timer.Wait({'time': 1.7000000476837158})
        Fade.StartParam({'mode': 1, 'time': 0.30000001192092896, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0})
    }

    GameControl.RequestLevelJump({'level': 'Field', 'locator': 'EvMuCrackAppear5', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void RW1() {
    Fade.StartPreset({'preset': 'FadeOutNormalW'})
    GameControl.RequestLevelJump({'level': 'DekuTreeArea', 'locator': 'RevivingWorld1', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void CA1() {
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    GameControl.RequestLevelJump({'level': 'DekuTreeArea', 'locator': 'EvMuCrackAppear1', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void RW2() {
    Fade.StartPreset({'preset': 'FadeOutNormalW'})
    GameControl.RequestLevelJump({'level': 'Field', 'locator': 'EvRevivingWorld2', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void RW3() {
    Fade.StartPreset({'preset': 'FadeOutNormalW'})
    GameControl.RequestLevelJump({'level': 'Field', 'locator': 'EvRevivingWorld3', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void RW4() {
    Fade.StartPreset({'preset': 'FadeOutNormalW'})
    GameControl.RequestLevelJump({'level': 'Field', 'locator': 'EvRevivingWorld4', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void CA2() {
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    GameControl.RequestLevelJump({'level': 'Field', 'locator': 'EvMuCrackAppear2', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void CA3() {
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    GameControl.RequestLevelJump({'level': 'Field', 'locator': 'EvMuCrackAppear3', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void CA4() {
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    GameControl.RequestLevelJump({'level': 'Field', 'locator': 'EvMuCrackAppear4', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void CA5() {
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    GameControl.RequestLevelJump({'level': 'Field', 'locator': 'EvMuCrackAppear5', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void Talk1st() {
    goto Event203
}

void rd005_MeetKingHyrule_1() {
    Fade.StartPreset({'preset': 'FadeOutFastB'})
    EventFlags.SetFlag({'value': True, 'symbol': 'MeetKingHyrule'})
    GameControl.RequestLevelJump({'locator': 'Kingreport_SouthernVillage', 'level': 'Field', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void rd005_MeetKingHyrule_2() {
    Fade.StartPreset({'preset': 'FadeOutFastB'})
    EventFlags.SetFlag({'value': True, 'symbol': 'MeetKingHyrule'})
    GameControl.RequestLevelJump({'level': 'Field', 'locator': 'Kingreport_HyrulePlains', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void rd004_Opening() {
    Fade.StartPreset({'preset': 'FadeOutFastB'})
    GameControl.RequestLevelJump({'level': 'EV_OPField', 'locator': 'EvOpening', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void rd012_EvA_WorldGlobeActivate() {
    Fade.StartPreset({'preset': 'FadeOutFastW'})
    GameControl.RequestLevelJump({'locator': 'Ev_WorldRepairForest', 'level': 'EV_WorldRepairForest', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void rd013_CoastRiverOverview() {

    fork {
        LocationInfoUI.PreloadArchive()
    } {
        Player.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    } {
        GameControl.LoadArea({'syncLoad': True, 'extentsY': 20.0, 'extentsX': 50.0, 'extentsZ': 50.0, 'location': 'ViewFieldSea02_cam'})
    }

    Fade.StartPreset({'preset': 'CutIn'})

    fork {
        Camera.PlayLocationOriginCameraAnimation({'path': 'map/Field_Coast_001.bfres', 'name': 'ViewFieldSea02_cam', 'location': 'ViewFieldSea02_cam', 'offsetY': 3.0, 'offsetZ': 8.0, 'offsetX': -4.0, 'chaseRatio': 1.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Timer.Wait({'time': 1.0})
        LocationInfoUI.Show({'eventMessage': 'ui/LocationInfo:LocationInfo_Field_RiverCoast', 'message': 'glossary/Location:region003'})
    } {
        GameControl.LoadArea({'syncLoad': True, 'extentsY': 20.0, 'extentsX': 50.0, 'extentsZ': 50.0, 'location': 'ViewFieldSea03_cam'})
    }


    fork {
        Camera.PlayLocationOriginCameraAnimation({'name': 'ViewFieldSea03_cam', 'location': 'ViewFieldSea03_cam', 'path': 'map/Field_River_004.bfres', 'offsetY': 1.0, 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Timer.Wait({'time': 3.0})
        LocationInfoUI.Hide()
    } {
        GameControl.LoadArea({'syncLoad': True, 'extentsY': 20.0, 'extentsX': 50.0, 'extentsZ': 50.0, 'location': 'ViewFieldSea04_cam'})
    }

    Camera.PlayLocationOriginCameraAnimation({'name': 'ViewFieldSea04_cam', 'location': 'ViewFieldSea04_cam', 'path': 'map/Field_River_004.bfres', 'offsetY': 0.0, 'offsetX': 1.0, 'offsetZ': 2.0, 'chaseRatio': 1.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    Fade.StartPreset({'preset': 'CutOutB'})
    GameControl.RequestLevelJump({'level': 'EV_Goddess', 'locator': 'rd013_CoastRiverOverview', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void rd017_EvB_WorldGlobeActivate() {
    Fade.StartPreset({'preset': 'FadeOutFastW'})
    GameControl.RequestLevelJump({'level': 'EV_WorldRepairRiver', 'locator': 'Ev_WorldRepairRiver', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void rd019_DesertOverview() {

    fork {
        LocationInfoUI.PreloadArchive()
    } {
        Player.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    } {
        GameControl.LoadArea({'syncLoad': True, 'extentsY': 20.0, 'extentsX': 50.0, 'extentsZ': 50.0, 'location': 'ViewFieldDesert02_cam'})
    }

    Fade.StartPreset({'preset': 'CutIn'})

    fork {
        Camera.PlayLocationOriginCameraAnimation({'name': 'ViewFieldDesert02_cam', 'location': 'ViewFieldDesert02_cam', 'path': 'map/Field_Desert_001.bfres', 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Timer.Wait({'time': 1.0})
        LocationInfoUI.Show({'message': 'glossary/Location:Field_004', 'eventMessage': 'ui/LocationInfo:LocationInfo_Field_Desert'})
    } {
        GameControl.LoadArea({'syncLoad': True, 'extentsY': 20.0, 'extentsX': 50.0, 'extentsZ': 50.0, 'location': 'ViewFieldDesert03_cam'})
    }


    fork {
        Camera.PlayLocationOriginCameraAnimation({'path': 'map/Field_Desert_002.bfres', 'name': 'ViewFieldDesert03_cam', 'location': 'ViewFieldDesert03_cam', 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Timer.Wait({'time': 3.0})
        LocationInfoUI.Hide()
    }

    Fade.StartPreset({'preset': 'CutOutB'})
    GameControl.RequestLevelJump({'level': 'EV_Goddess', 'locator': 'rd019_DesertOverview', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void rd025_EvD_WorldGlobeActivate() {
    Fade.StartPreset({'preset': 'FadeOutFastW'})
    GameControl.RequestLevelJump({'level': 'Ev_WorldRepairDesert', 'locator': 'WorldGroveActive_AreaD', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void rd026_CrackAppearHyruleCastle() {
    Fade.StartPreset({'preset': 'FadeOutFastB'})
    GameControl.RequestLevelJump({'level': 'EV_WorldRepairCastle', 'locator': 'CrackAppearHyruleCastle', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void rd031_HyruleCastle_WorldGlobeActivate() {
    Fade.StartPreset({'preset': 'FadeOutFastW'})
    GameControl.RequestLevelJump({'locator': 'Ev_WorldRepairCastle', 'level': 'EV_WorldRepairCastle', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void rd032_AreaFIntroduction() {

    fork {
        LocationInfoUI.PreloadArchive()
    } {
        Player.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    } {
        GameControl.LoadArea({'syncLoad': True, 'extentsY': 20.0, 'extentsX': 50.0, 'extentsZ': 50.0, 'location': 'ViewFieldJungle02_cam'})
    }

    Fade.StartPreset({'preset': 'CutIn'})

    fork {
        Camera.PlayLocationOriginCameraAnimation({'path': 'map/Field_Jungle_003.bfres', 'name': 'ViewFieldJungle02_cam', 'location': 'ViewFieldJungle02_cam', 'offsetX': -5.0, 'aspectRatioCtrl': True, 'offsetY': 1.0, 'chaseRatio': 1.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False})
    } {
        Timer.Wait({'time': 1.0})
        LocationInfoUI.Show({'message': 'glossary/Location:Field_010', 'eventMessage': 'ui/LocationInfo:LocationInfo_Field_Jungle'})
    } {
        GameControl.LoadArea({'syncLoad': True, 'extentsY': 20.0, 'extentsX': 50.0, 'extentsZ': 50.0, 'location': 'ViewFieldJungle03_cam'})
    }


    fork {
        Camera.PlayLocationOriginCameraAnimation({'path': 'map/Field_Jungle_004.bfres', 'name': 'ViewFieldJungle03_cam', 'location': 'ViewFieldJungle03_cam', 'offsetY': 1.0, 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Timer.Wait({'time': 3.0})
        LocationInfoUI.Hide()
    }

    Fade.StartPreset({'preset': 'CutOutB'})
    GameControl.RequestLevelJump({'level': 'EV_Goddess', 'locator': 'rd032_AreaFIntroduction', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void rd035_WorldGroveActive_AreaF() {
    Fade.StartPreset({'preset': 'FadeOutFastW'})
    GameControl.RequestLevelJump({'level': 'EV_WorldRepairJungle', 'locator': 'EV_WorldRepairJungle', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void rd036_AreaGIntroduction() {

    fork {
        LocationInfoUI.PreloadArchive()
    } {
        Player.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    } {
        GameControl.LoadArea({'syncLoad': True, 'extentsY': 20.0, 'extentsX': 50.0, 'extentsZ': 50.0, 'location': 'ViewFieldHebraMountains02_cam'})
    }

    Fade.StartPreset({'preset': 'CutIn'})

    fork {
        Camera.PlayLocationOriginCameraAnimation({'location': 'ViewFieldHebraMountains02_cam', 'path': 'map/Field_HebraMountains_003.bfres', 'name': 'ViewFieldHebraMountains02_cam', 'offsetX': 5.0, 'offsetY': 2.0, 'chaseRatio': 1.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Timer.Wait({'time': 1.0})
        LocationInfoUI.Show({'message': 'glossary/Location:Field_012', 'eventMessage': 'ui/LocationInfo:LocationInfo_Field_HebraMountains'})
    } {
        GameControl.LoadArea({'syncLoad': True, 'extentsY': 20.0, 'extentsX': 50.0, 'extentsZ': 50.0, 'location': 'ViewFieldHebraMountains03_cam'})
    }


    fork {
        Camera.PlayLocationOriginCameraAnimation({'name': 'ViewFieldHebraMountains03_cam', 'location': 'ViewFieldHebraMountains03_cam', 'path': 'map/Field_HebraMountains_004.bfres', 'offsetZ': -7.0, 'offsetX': -2.0, 'chaseRatio': 1.0, 'offsetY': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Timer.Wait({'time': 3.0})
        LocationInfoUI.Hide()
    }

    Fade.StartPreset({'preset': 'CutOutB'})
    GameControl.RequestLevelJump({'level': 'EV_Goddess', 'locator': 'rd036_AreaGIntroduction', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void rd039_EvG_WorldGlobeActivate() {
    Fade.StartPreset({'preset': 'FadeOutFastW'})
    GameControl.RequestLevelJump({'level': 'EV_WorldRepairHebraMountain', 'locator': 'EV_WorldRepairHebraMountain', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void rd040_VolcanoOverview() {

    fork {
        LocationInfoUI.PreloadArchive()
    } {
        Player.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    } {
        GameControl.LoadArea({'syncLoad': True, 'extentsY': 20.0, 'extentsX': 50.0, 'extentsZ': 50.0, 'location': 'ViewFieldVolcano02_cam'})
    }

    Fade.StartPreset({'preset': 'CutIn'})

    fork {
        Camera.PlayLocationOriginCameraAnimation({'name': 'ViewFieldVolcano02_cam', 'location': 'ViewFieldVolcano02_cam', 'path': 'map/Field_Volcano_006.bfres', 'offsetZ': 6.0, 'offsetY': 7.0, 'offsetX': -7.0, 'chaseRatio': 1.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Timer.Wait({'time': 1.0})
        LocationInfoUI.Show({'message': 'glossary/Location:Field_011', 'eventMessage': 'ui/LocationInfo:LocationInfo_Field_Volcano'})
    } {
        GameControl.LoadArea({'syncLoad': True, 'extentsY': 20.0, 'extentsX': 50.0, 'extentsZ': 50.0, 'location': 'ViewFieldVolcano03_cam'})
    }


    fork {
        Camera.PlayLocationOriginCameraAnimation({'path': 'map/Field_Volcano_004.bfres', 'name': 'ViewFieldVolcano03_cam', 'location': 'ViewFieldVolcano03_cam', 'offsetX': -6.0, 'offsetY': 4.0, 'offsetZ': 0.0, 'chaseRatio': 1.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Timer.Wait({'time': 3.0})
        LocationInfoUI.Hide()
    }

    Fade.StartPreset({'preset': 'CutOutB'})
    GameControl.RequestLevelJump({'level': 'EV_Goddess', 'locator': 'rd040_VolcanoOverview', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void rd045_EvC_WorldGlobeActivate() {
    Fade.StartPreset({'preset': 'FadeOutFastW'})
    GameControl.RequestLevelJump({'locator': 'WorldGroveActive_AreaC', 'level': 'EV_WorldRepairVolcano', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void rd058_EveryonesEpilogue() {
}

void Go_rd013() {
    Fade.StartPreset({'preset': 'FadeOutFastB'})
    GameControl.RequestLevelJump({'level': 'Field', 'locator': 'rd013_CoastRiverOverview', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void Go_rd019() {
    Fade.StartPreset({'preset': 'FadeOutFastB'})
    GameControl.RequestLevelJump({'level': 'Field', 'locator': 'rd019_DesertOverview', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void Go_rd032() {
    Fade.StartPreset({'preset': 'FadeOutFastB'})
    GameControl.RequestLevelJump({'level': 'Field', 'locator': 'rd032_AreaFIntroduction', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void Go_rd036() {
    Fade.StartPreset({'preset': 'FadeOutFastB'})
    GameControl.RequestLevelJump({'level': 'Field', 'locator': 'rd036_AreaGIntroduction', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void Go_rd040() {
    Fade.StartPreset({'preset': 'FadeOutFastB'})
    GameControl.RequestLevelJump({'level': 'Field', 'locator': 'rd040_VolcanoOverview', 'offsetX': 0.0, 'offsetZ': 0.0})
}
