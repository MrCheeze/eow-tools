-------- EventFlow: Ending --------

Actor: GameControl
entrypoint: None()
actions: ['Quit', 'RequestLevelJump', 'SaveForGameClear', 'SetThroughObstaclesOnMove', 'SetResetOverlappedActorsOnMoveDone', 'UnforbidLaunchApplet', 'ForbidLaunchApplet']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['InvokeTimeline', 'InvokeStreamSyncTimeline', 'PreloadTimeline']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['StopRegionBgm', 'StopAllBGM', 'StopZoneBaseAmbience', 'Prepare', 'PlayBGM', 'SetPlayerVolume', 'EnableRegionBgmAutoPlay']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['PlayLocationOriginCameraAnimation', 'LerpDofSettings', 'LerpSsaoSettings', 'Reset']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['SetVisibility', 'Activate']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['SetVisibility', 'Activate']
queries: []
params: None

Actor: Cat001
entrypoint: None()
actions: ['WarpToActorWithCompassPoint', 'PlayAnimation', 'SetFacialExpression', 'Activate']
queries: []
params: None

Actor: StaffRoll
entrypoint: None()
actions: ['PreloadArchive', 'ShowTheEnd', 'HideTheEnd']
queries: []
params: None

Actor: TutorialUI
entrypoint: None()
actions: ['ShowModal']
queries: []
params: None

Actor: GatePartnerPhoton
entrypoint: None()
actions: ['Deactivate']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: NxSystemControl
entrypoint: None()
actions: ['SetUserInactivityDetectionTimeExtendedUnsafe']
queries: []
params: None

void ZeldaAndLinkReturn() {

    call EvResetCommon.AllResetNowait()

    Audio.StopRegionBgm({'fadeSec': 0.0})
    Audio.SetPlayerVolume({'label': 'PLAYER_SE_ENVIROMENT', 'volume': 0.0, 'duration': 0.10000000149011612})
    GameControl.SetThroughObstaclesOnMove({'enable': False})
    GameControl.SetResetOverlappedActorsOnMoveDone({'enable': False})

    fork {
        FlowControl.PreloadTimeline({'filename': 'ZeldaAndLinkReturn'})
    } {
        Camera.LerpDofSettings({'kind': 7, 'TiltShiftCenterX': 0.0, 'BlurRatio': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftBlurSizeScale': 1.0, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofBlurRatio': 1.0, 'duration': 0.0, 'TiltShiftRange': 0.18000000715255737, 'TiltShiftGamma': 10.0, 'FocusRange': 1.0, 'TiltShiftCenterY': 0.8199999928474426, 'TiltShiftDofFocalDistance': 54.79999923706055, 'TiltShiftDofBackRange': 20.600000381469727, 'TiltShiftDofBackCurve': 0.23999999463558197, 'TiltShiftDofBackBlurFadeWidth': 0.009999999776482582, 'FocalDistance': 54.79999923706055, 'BlurSizeScale': 0.6000000238418579, 'noWait': False})
    } {
        GameControl.ForbidLaunchApplet()
    }

    FlowControl.InvokeTimeline({'filename': 'ZeldaAndLinkReturn', 'rate': 1.0})
    Audio.StopAllBGM({'duration': 2.0})
    GameControl.UnforbidLaunchApplet()
    GameControl.RequestLevelJump({'locator': 'EveryonesEpilogue', 'level': 'HyruleCastle', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void EveryonesEpilogue() {
    GameControl.ForbidLaunchApplet()

    fork {
        Player.Activate()
    } {
        Partner[companion].Activate()
    } {
        Cat001.Activate()
    } {
        GatePartnerPhoton.Deactivate()
    } {
        Camera.Reset({'chaseRatio': 0.0, 'resetPlayerCamera': False})
    }

    Audio.StopZoneBaseAmbience()
    GameControl.SaveForGameClear({'district': 'glossary/Location:FieldBoundaryLast', 'location': 'StartClearGame', 'levelName': 'FieldBoundaryLast'})
    StaffRoll.PreloadArchive()
    FlowControl.PreloadTimeline({'filename': 'EveryonesEpilogue'})
    FlowControl.InvokeStreamSyncTimeline({'label': 'BGM_EV_EVERYONESEPILOGUE', 'filename': 'EveryonesEpilogue', 'volume': 1.0})
    NxSystemControl.SetUserInactivityDetectionTimeExtendedUnsafe({'isExtended': False})
    Audio.EnableRegionBgmAutoPlay()
    GameControl.UnforbidLaunchApplet()
    GameControl.Quit()
}

void HangACopyRod() {
    Audio.StopRegionBgm({'fadeSec': 0.0})
    StaffRoll.PreloadArchive()
    Camera.LerpSsaoSettings({'duration': 0.0, 'kind': 0, 'targetValue': 15.0, 'noWait': True})

    fork {
        Player.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    } {
        Cat001.WarpToActorWithCompassPoint({'direction': 0, 'distance': 0.25, 'offsetY': 0.0, 'offsetX': 0.0, 'actor': ActorIdentifier(name="GatePartnerPhoton")})
        Cat001.PlayAnimation({'name': 'wait01', 'blendFrame': 0, 'layer': 0, 'restart': False})
    } {
        Cat001.Activate()
        Cat001.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        Fade.StartPreset({'preset': 'FadeInNormal'})
    } {
        Camera.PlayLocationOriginCameraAnimation({'path': 'map/HyruleCastle_003.bfres', 'name': 'HangACopyRod_cam', 'location': 'HangACopyRod', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'chaseRatio': 1.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Cat001.PlayAnimation({'blendFrame': 0, 'name': 'ev_ending', 'layer': 0, 'restart': False})
    } {
        Timer.Wait({'time': 2.3329999446868896})
        Cat001.SetFacialExpression({'expression': 'normal'})
    } {
        Audio.Prepare({'label': 'BGM_EV_HANG_ROD', 'kind': 0, 'volume': 1.0})
        Timer.Wait({'time': 6.316667079925537})
        Audio.PlayBGM({'label': 'BGM_EV_HANG_ROD', 'ignoreSkip': False, 'volume': 1.0})
    }

    StaffRoll.ShowTheEnd()
    Timer.Wait({'time': 5.0})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    Timer.Wait({'time': 5.0})
    StaffRoll.HideTheEnd()
    Timer.Wait({'time': 3.0})
    GameControl.RequestLevelJump({'level': 'EV_Goddess', 'locator': 'rd058_EveryonesEpilogue', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void StartClearGame() {
    if !EventFlags.CheckFlag({'symbol': 'AdditionalElementsModal_Clear'}) {

        call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

        TutorialUI.ShowModal({'key': 'AdditionalElementsModal'})
        EventFlags.SetFlag({'symbol': 'AdditionalElementsModal_Clear', 'value': True})
    } else {

        call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

    }
}
