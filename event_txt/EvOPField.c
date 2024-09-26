-------- EventFlow: EvOPField --------

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['LoadAsset', 'RequestLevelJump', 'SetActivateAllActor', 'LoadArea']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['StopZoneBgm', 'DisablePlaySeFromTailor', 'EnablePlaySeFromTailor', 'Prepare']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset', 'StartParam']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor', 'SetCullMode', 'PlayAnimation', 'MoveToCompassPoint', 'AimCompassPoint', 'SetShadowDecalEnable', 'AimDegreeAngle', 'ResetAim', 'SetFacialExpression', 'SetInterestIkEnabled', 'SetVisibility']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['PlayLocationOriginCameraAnimation', 'LerpDofSettings']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['InvokeTimeline', 'PreloadTimeline', 'SetCanSkip']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['SetInterestIkEnabled']
queries: []
params: None

Actor: Environment
entrypoint: None()
actions: ['ChangeWeather', 'AdvanceTime']
queries: []
params: None

Actor: HyruleSoldier[sol1]
entrypoint: None()
actions: ['MoveToBesideTargetActor', 'MoveToCompassPoint', 'Activate', 'PlayAnimationNoWait', 'ChangeSteeringAnimation', 'AimCompassPoint', 'PlayAnimation', 'AimPlayer', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel']
queries: []
params: None

Actor: HyruleSoldier[sol2]
entrypoint: None()
actions: ['MoveToBesideTargetActor', 'Activate', 'PlayAnimationNoWait', 'MoveToCompassPoint', 'ChangeSteeringAnimation', 'PlayAnimation', 'AimPlayer', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel']
queries: []
params: None

Actor: EvCrackOpening02
entrypoint: None()
actions: ['Activate', 'PlayAnimation', 'PlayMaterialAnimationNoWait']
queries: []
params: None

Actor: EvCrackOpening01
entrypoint: None()
actions: ['PlayAnimation', 'Activate', 'SetVisibility', 'SetGravityEnable', 'SetCollisionEnabled', 'Deactivate', 'PlayMaterialAnimationNoWait']
queries: []
params: None

Actor: EvOPFieldDistantView
entrypoint: None()
actions: ['PlayMaterialAnimationNoWait']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['SetVisibility']
queries: []
params: None

void Opening() {

    fork {
        Audio.StopZoneBgm()
    } {
        Audio.DisablePlaySeFromTailor()
    } {
        Audio.Prepare({'label': 'BGM_EV_TITLE_LOGO', 'kind': 0, 'volume': 1.0})
    }

    FlowControl.SetCanSkip({'enable': True})
    Environment.AdvanceTime({'hour': 4, 'timespan': 0.0, 'min': 0, 'sec': 0})
    Environment.ChangeWeather({'blendtime': 0.0, 'name': 'Sunny', 'timespan': 60.0})
    GameControl.LoadAsset({'path': 'map/EV_OPField.bfres'})
    GameControl.SetActivateAllActor({'is_active': True})
    GameControl.LoadArea({'syncLoad': True, 'extentsZ': 120.0, 'extentsX': 40.0, 'extentsY': 40.0, 'location': 'EvOpening_cam'})
    FlowControl.PreloadTimeline({'filename': 'Opening'})
    Partner[companion].SetVisibility({'visible': False})
    Zelda.SetShadowDecalEnable({'enable': False})

    fork {
        EvCrackOpening01.Activate()
        EvCrackOpening01.SetGravityEnable({'enable': False})
        EvCrackOpening01.SetCollisionEnabled({'enable': False})
        EvCrackOpening01.SetVisibility({'visible': True})

        fork {
            Zelda.PlayAnimation({'name': 'ev_TitleDemo_down_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Zelda.PlayAnimation({'name': 'ev_TitleDemo_down_lookback', 'layer': 0, 'blendFrame': -1, 'restart': False})

            fork {
                Zelda.PlayAnimation({'name': 'ev_TitleDemo_down_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Timer.Wait({'time': 0.18000000715255737})
                Zelda.SetFacialExpression({'expression': 'damage'})
                Timer.Wait({'time': 2.0})
                Zelda.SetFacialExpression({'expression': 'anxiety_cm'})
            }

        } {
            Fade.StartPreset({'preset': 'FadeInSlow'})
        } {
            EvCrackOpening01.PlayMaterialAnimationNoWait({'name': 'ev_TitleDemo_ExitPoint', 'layer': 0})
            EvCrackOpening01.PlayAnimation({'name': 'ev_TitleDemo_ExitPoint', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Zelda.PlayAnimation({'name': 'ev_TitleDemo_down_ed', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            Zelda.PlayAnimation({'name': 'ev_TitleDemo_move_slow,wait_barehands', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 9.149999618530273})
            EventFlags.SetFlag({'symbol': 'EvPrologue004', 'value': True})
            Timer.Wait({'time': 0.10000000149011612})
            Environment.AdvanceTime({'hour': 10, 'timespan': 36.5, 'min': 0, 'sec': 0})
        } {
            Timer.Wait({'time': 14.600000381469727})
            Zelda.SetFacialExpression({'expression': 'dream'})
            Timer.Wait({'time': 0.15000000596046448})
            Zelda.SetFacialExpression({'expression': 'normal'})
        }

    } {
        FlowControl.InvokeTimeline({'filename': 'Opening', 'rate': 1.0})
    } {
        EvOPFieldDistantView.PlayMaterialAnimationNoWait({'name': 'EvOPFieldDistantView', 'layer': 0})
    }

    EvCrackOpening01.Deactivate()

    fork {
        HyruleSoldier[sol2].Activate()
        HyruleSoldier[sol2].MoveToBesideTargetActor({'speed': 1, 'offsetX': 1.0, 'offsetZ': 9.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        HyruleSoldier[sol2].PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.0})
        HyruleSoldier[sol1].PlayTailorOtherChannelNoWait({'channel': 'Sweat', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        HyruleSoldier[sol2].MoveToBesideTargetActor({'speed': 1, 'offsetX': 1.0, 'offsetZ': 2.0, 'customSpeed': 7.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0})
        HyruleSoldier[sol1].StopTailorOtherChannel({'channel': 'Sweat', 'index': -1})
    } {
        HyruleSoldier[sol1].Activate()
        HyruleSoldier[sol1].MoveToBesideTargetActor({'speed': 1, 'offsetX': -1.0, 'offsetZ': 10.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        HyruleSoldier[sol1].PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.0})
        HyruleSoldier[sol2].PlayTailorOtherChannelNoWait({'channel': 'Sweat', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        HyruleSoldier[sol1].MoveToBesideTargetActor({'speed': 1, 'offsetX': -1.0, 'offsetZ': 2.0, 'customSpeed': 7.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0})
        HyruleSoldier[sol2].StopTailorOtherChannel({'channel': 'Sweat', 'index': -1})
    }


    fork {
        Zelda.AimCompassPoint({'direction': 0, 'duration': 0.800000011920929, 'withoutTurn': False, 'immediateTurn': False})
    } {
        HyruleSoldier[sol2].AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleSoldier[sol1].AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        HyruleSoldier[sol2].PlayAnimationNoWait({'name': 'kneel_st,kneel_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier[sol1].PlayAnimationNoWait({'name': 'kneel_st,kneel_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Player.SetInterestIkEnabled({'enable': True})
    Zelda.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Timer.Wait({'time': 0.800000011920929})
    Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier", sub_name="sol1"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    Zelda.AimDegreeAngle({'withoutTurn': True, 'angle': 10.0, 'duration': 0.4000000059604645, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier", sub_name="sol1"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    Zelda.PlayAnimation({'name': 'talk_hand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Zelda.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})

    fork {
        HyruleSoldier[sol2].PlayAnimationNoWait({'name': 'kneel_talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimDegreeAngle({'withoutTurn': True, 'angle': 10.0, 'duration': 0.4000000059604645, 'immediateTurn': False})
    }

    Timer.Wait({'time': 1.0})

    fork {
        HyruleSoldier[sol2].PlayAnimationNoWait({'name': 'kneel_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Zelda.ResetAim()
        Zelda.SetInterestIkEnabled({'enable': False})
        Zelda.PlayAnimation({'name': 'ev_TitleDemo_yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 1.0})

    fork {
        HyruleSoldier[sol2].PlayAnimationNoWait({'name': 'kneel_ed,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier[sol2].AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 1.5})
        HyruleSoldier[sol2].ChangeSteeringAnimation({'walk': 'ev_move_search', 'run': 'ev_move_search', 'idle': '', 'layer': 0})
        Timer.Wait({'time': 0.10000000149011612})
        HyruleSoldier[sol2].MoveToCompassPoint({'speed': 0, 'timeOut': 15.0, 'distance': 17.0, 'direction': 0, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Timer.Wait({'time': 0.5})
        Zelda.MoveToCompassPoint({'direction': 0, 'speed': 0, 'timeOut': 15.0, 'distance': 13.0, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        HyruleSoldier[sol1].PlayAnimationNoWait({'name': 'kneel_ed,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier[sol1].AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        HyruleSoldier[sol1].ChangeSteeringAnimation({'walk': 'move', 'run': 'move', 'idle': '', 'layer': 0})
        HyruleSoldier[sol1].MoveToCompassPoint({'direction': 0, 'speed': 0, 'timeOut': 15.0, 'distance': 17.0, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    EvCrackOpening02.Activate()

    fork {
        EvCrackOpening02.PlayMaterialAnimationNoWait({'name': 'ev_TitleDemo_ToHyrule', 'layer': 0})
        EvCrackOpening02.PlayAnimation({'name': 'ev_TitleDemo_ToHyrule', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 3.5})
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
    }

    Zelda.SetCullMode({'enabled': True, 'cullMode': 1})
    EventFlags.SetFlag({'symbol': 'EvPrologue005', 'value': True})
    Environment.AdvanceTime({'hour': 10, 'timespan': 0.0, 'min': 0, 'sec': 0})
    Audio.EnablePlaySeFromTailor()
    GameControl.RequestLevelJump({'level': 'EV_Goddess', 'locator': 'rd004_Opening', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void Title() {
    FlowControl.SetCanSkip({'enable': True})

    fork {
        Zelda.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    }

    GameControl.LoadArea({'syncLoad': True, 'location': 'EvOpening_cam', 'extentsX': 80.0, 'extentsY': 80.0, 'extentsZ': 240.0})
    Camera.LerpDofSettings({'kind': 13, 'FocalDistance': 0.0, 'FocusRange': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'BlurSizeScale': 1.0, 'BlurRatio': 1.0, 'TiltShiftCenterX': 0.5, 'TiltShiftCenterY': 1.100000023841858, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftRange': 0.20000000298023224, 'TiltShiftGamma': 2.0, 'TiltShiftBlurSizeScale': 0.800000011920929, 'TiltShiftBlurRatio': 0.0, 'TiltShiftDofFocalDistance': 0.0, 'TiltShiftDofBackRange': 0.800000011920929, 'TiltShiftDofBackCurve': 1.0, 'TiltShiftDofBackBlurFadeWidth': 0.5, 'TiltShiftDofBlurRatio': 0.0, 'duration': 0.0, 'noWait': True})

    fork {
        Fade.StartParam({'mode': 0, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0, 'time': 2.0})
    } {
        Camera.PlayLocationOriginCameraAnimation({'path': 'map/EV_OPField.bfres', 'location': 'EvOpening_cam', 'farClipDistanceCtrl': True, 'name': 'Title_cam', 'offsetZ': 0.0, 'offsetY': 0.0, 'offsetX': 0.0, 'chaseRatio': 1.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        EvOPFieldDistantView.PlayMaterialAnimationNoWait({'name': 'wait', 'layer': 0})
    }

    GameControl.RequestLevelJump({'level': 'EV_Goddess', 'locator': 'rd000_Title', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void GoTitle() {
    Fade.StartPreset({'preset': 'FadeOutFastB'})
    GameControl.RequestLevelJump({'locator': 'Title', 'level': 'EV_OPField', 'offsetX': 0.0, 'offsetZ': 0.0})
}
