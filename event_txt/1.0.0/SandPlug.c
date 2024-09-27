-------- EventFlow: SandPlug --------

Actor: GameControl
entrypoint: None()
actions: ['LoadArea', 'RequestWarp']
queries: []
params: None

Actor: SandObstacle
entrypoint: None()
actions: ['PlayAnimationNoWait', 'Destroy', 'LookAtGimmick', 'PlayTailorOtherChannelNoWait', 'UpDown', 'PlayMaterialAnimationNoWait']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['PlayLocationOriginCameraAnimation', 'Reset', 'SetShadowMapSettings']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag', 'SetLevelFlag']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
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

Actor: Zelda
entrypoint: None()
actions: ['SetVisibility']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayJingleTimeWait', 'PlayOneshotSystemSE', 'PlayJingle', 'StopSE', 'StopAllBGM', 'CancelNextTimeRegionBgmPlay', 'SetRegionBgmVolume']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['Yield_']
queries: []
params: None

Actor: Environment
entrypoint: None()
actions: ['LockCurrentRegion', 'UnlockCurrentRegion']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['SetVisibility']
queries: []
params: None

void SandPlugPullOut() {

    call EvResetCommon.AllResetNowait()


    fork {
        SandObstacle.PlayAnimationNoWait({'name': 'on', 'layer': 0, 'blendFrame': -1, 'restart': False})
        SandObstacle.PlayMaterialAnimationNoWait({'name': 'on', 'layer': 0})
    } {
        Timer.Wait({'time': 3.0})
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_SAND_RUNOUT', 'volume': 1.0, 'pitch': 1.0})
        Timer.Wait({'time': 3.0})
        Audio.StopSE({'duration': 1.0, 'label': 'SE_OBJ_SAND_RUNOUT'})
    } {
        Audio.StopAllBGM({'duration': 1.5})
        Audio.CancelNextTimeRegionBgmPlay()
    }

    GameControl.LoadArea({'location': 'Field:DaughtersDelight', 'extentsX': 20.0, 'extentsY': 20.0, 'extentsZ': 20.0, 'syncLoad': False})
    Environment.LockCurrentRegion({'regionName': 'FieldDesert', 'enableBlend': False})
    Camera.SetShadowMapSettings({'ShadowMapSettings': 'Demo_M'})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvD_SandObstacleOut_Start'})
    Timer.Wait({'time': 0.4000000059604645})

    fork {
        Camera.PlayLocationOriginCameraAnimation({'name': 'SandPlugPullOut01_cam', 'path': 'map/Field_Desert_005.bfres', 'location': 'Field:DaughtersDelight', 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Fade.StartPreset({'preset': 'FadeInNormal'})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_SAND_RUNOUT', 'volume': 1.0, 'pitch': 1.0})
        Timer.Wait({'time': 4.0})
        Audio.StopSE({'label': 'SE_OBJ_SAND_RUNOUT', 'duration': 1.5})
    } {
        Audio.StopAllBGM({'duration': 0.0})
    }

    Timer.Wait({'time': 1.5})
    Audio.PlayJingle({'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Environment.UnlockCurrentRegion({'regionName': 'FieldDesert', 'enableBlend': False})
    Audio.SetRegionBgmVolume({'volume': 0.0, 'fadeSec': 0.0})
    Camera.SetShadowMapSettings({'ShadowMapSettings': 'Default'})
    Camera.Reset({'resetPlayerCamera': True, 'chaseRatio': 1.0})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvD_RemainsAppear'})
    QuestSystem.SetProgress({'symbol': 'Desert:517571575', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventVariables.SetVariable({'symbol': 'Desert:1979900250'})
    Audio.SetRegionBgmVolume({'volume': 1.0, 'fadeSec': 2.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
}

void SandObstacleDrain2() {
    SandObstacle.LookAtGimmick({'distanceOffset': 0.0, 'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    SandObstacle.PlayTailorOtherChannelNoWait({'channel': 'SandStart', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    Timer.Wait({'time': 3.0})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    GameControl.RequestWarp({'locator': 'SandObstacleDrain2_1', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void SandObstacleDrain2_2() {

    fork {
        Zelda.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    }


    fork {
        FlowControl.Yield_()
        Fade.StartPreset({'preset': 'FadeInNormal'})
    } {
        SandObstacle.UpDown({'timespan': 9.899999618530273, 'movement': -6.199999809265137, 'blocking': True})
    } {
        SandObstacle.PlayTailorOtherChannelNoWait({'channel': 'SandObstacleDrain', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_SAND_RUNOUT3_LDUNG', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 1.2000000476837158})
    Audio.PlayJingleTimeWait({'duration': 1.6799999475479126, 'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
    EventFlags.SetFlag({'value': True, 'symbol': 'L003R023SandDown'})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    GameControl.RequestWarp({'locator': 'SandObstacleDrain2_3', 'offsetX': 0.0, 'offsetZ': 0.0})
    SandObstacle.Destroy()
}

void SandObstacleDrain2_3() {

    fork {
        Zelda.SetVisibility({'visible': True})
    } {
        Partner[companion].SetVisibility({'visible': True})
    }

    Fade.StartPreset({'preset': 'FadeInNormal'})
}

void SandObstacleDrain2_1() {

    fork {
        Zelda.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    } {
        EventFlags.SetLevelFlag({'index': 255, 'value': True})
    }


    fork {
        FlowControl.Yield_()
        Fade.StartPreset({'preset': 'FadeInNormal'})
        Timer.Wait({'time': 3.5})
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
    } {
        SandObstacle.UpDown({'timespan': 6.5, 'movement': -4.0625, 'blocking': False})
    } {
        SandObstacle.PlayTailorOtherChannelNoWait({'channel': 'SandObstacleDrain', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_SAND_RUNOUT2_LDUNG', 'volume': 1.0, 'pitch': 1.0})
    }

    EventFlags.SetFlag({'value': True, 'symbol': 'L003R010SandDown'})
    EventFlags.SetLevelFlag({'index': 255, 'value': False})
    GameControl.RequestWarp({'locator': 'SandObstacleDrain2_2', 'offsetX': 0.0, 'offsetZ': 0.0})
    SandObstacle.Destroy()
}
