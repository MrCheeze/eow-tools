-------- EventFlow: SwitchFootLD002 --------

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayJingle', 'PlayOneshotSystemSE']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['PlayLocationOriginCameraAnimation', 'Reset']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestAutoSave', 'LoadArea']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag', 'SetLevelFlag']
queries: ['CountFlags']
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['Yield_']
queries: ['Branch']
params: None

void SwitchRed() {

    call EvResetCommon.AllReset()

    EventFlags.SetLevelFlag({'index': 8, 'value': True})
    EventFlags.SetLevelFlag({'value': True, 'index': 100})

    call JumpToR004()


    call _SwitchFootLD002_FlagCheck({'Flag': 'L002R007SwitchFoot'})

    EventFlags.SetLevelFlag({'value': True, 'index': 40})
    EventFlags.SetLevelFlag({'value': False, 'index': 8})
    Timer.Wait({'time': 1.0})
    GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
}

void SwitchBlue() {

    call EvResetCommon.AllReset()

    EventFlags.SetLevelFlag({'index': 8, 'value': True})
    EventFlags.SetLevelFlag({'value': True, 'index': 100})

    call JumpToR004()


    call _SwitchFootLD002_FlagCheck({'Flag': 'L002R010SwitchFoot'})

    EventFlags.SetLevelFlag({'value': True, 'index': 41})
    EventFlags.SetLevelFlag({'value': False, 'index': 8})
    Timer.Wait({'time': 1.0})
    GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
}

void SwitchGreen() {

    call EvResetCommon.AllReset_PasteOff02()

    EventFlags.SetLevelFlag({'index': 8, 'value': True})
    EventFlags.SetLevelFlag({'value': True, 'index': 100})

    call JumpToR004()


    call _SwitchFootLD002_FlagCheck({'Flag': 'L002R016SwitchFoot'})

    EventFlags.SetLevelFlag({'value': True, 'index': 43})
    EventFlags.SetLevelFlag({'value': False, 'index': 8})
    Timer.Wait({'time': 1.0})
    GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
}

void SwitchYellow() {

    call EvResetCommon.AllReset()

    EventFlags.SetLevelFlag({'index': 8, 'value': True})
    EventFlags.SetLevelFlag({'value': True, 'index': 100})

    call JumpToR004()


    call _SwitchFootLD002_FlagCheck({'Flag': 'L002R014SwitchFoot'})

    EventFlags.SetLevelFlag({'value': True, 'index': 42})
    EventFlags.SetLevelFlag({'value': False, 'index': 8})
    Timer.Wait({'time': 1.0})
    GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
}

void _SwitchFootLD002_CamAnim() {

    fork {
        Camera.PlayLocationOriginCameraAnimation({'location': '004_CameraWall', 'path': 'map/L_Dungeon002_004.bfres', 'name': 'CamAnim', 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
        Timer.Wait({'time': 'wait'})
    } {
        Fade.StartPreset({'preset': 'FadeInNormal'})
        Timer.Wait({'time': 0.5})
        EventFlags.SetFlag({'value': True, 'symbol': 'Flag'})
        EventFlags.SetLevelFlag({'index': 100, 'value': False})
    } {
        if FlowControl.Branch({'value': 'Final'}) {

            fork {
                Timer.Wait({'time': 13.5})
                Audio.PlayJingle({'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
            } {
                Timer.Wait({'time': 7.099999904632568})
                EventFlags.SetFlag({'value': True, 'symbol': 'L002R004SwitchFoot4'})
            } {
                Timer.Wait({'time': 7.099999904632568})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_SEA_SYMBOL_LIGHT_END', 'volume': 1.0, 'pitch': 1.0})
            }

        }
    }

}

void _SwitchFootLD002_FlagCheck() {
    switch EventFlags.CountFlags({'symbol1': 'L002R007SwitchFoot', 'symbol2': 'L002R010SwitchFoot', 'symbol3': 'L002R014SwitchFoot', 'symbol4': 'L002R016SwitchFoot', 'symbol5': 'L002R004SwitchFoot'}) {
      case 0:

        call _SwitchFootLD002_CamAnim({'Final': False, 'CamAnim': 'GeyserType01_cam', 'Flag': 'Flag', 'wait': 3.0})

        Event45:
        FlowControl.Yield_()
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
        Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})
        Fade.StartPreset({'preset': 'FadeInNormal'})
      case 1:

        call _SwitchFootLD002_CamAnim({'Final': False, 'CamAnim': 'GeyserType02_cam', 'Flag': 'Flag', 'wait': 3.0})

        goto Event45
      case 2:

        call _SwitchFootLD002_CamAnim({'Final': False, 'Flag': 'Flag', 'CamAnim': 'GeyserType03_cam', 'wait': 3.0})

        goto Event45
      case 3:

        call _SwitchFootLD002_CamAnim({'Final': False, 'Flag': 'Flag', 'CamAnim': 'GeyserType04_cam', 'wait': 3.5})

        goto Event45
      case [4, 5]:

        call _SwitchFootLD002_CamAnim({'Final': True, 'Flag': 'Flag', 'CamAnim': 'GeyserType05_cam', 'wait': 1.0})

        goto Event45
    }
}

void SwitchPurple() {

    call EvResetCommon.AllReset()

    switch EventFlags.CountFlags({'symbol1': 'L002R007SwitchFoot', 'symbol2': 'L002R010SwitchFoot', 'symbol3': 'L002R014SwitchFoot', 'symbol4': 'L002R016SwitchFoot', 'symbol5': 'L002R004SwitchFoot'}) {
      case 0:
        Event38:
        EventFlags.SetLevelFlag({'index': 8, 'value': True})
        EventFlags.SetLevelFlag({'value': True, 'index': 100})

        call _SwitchFootLD002_FlagCheck({'Flag': 'L002R004SwitchFoot'})

        EventFlags.SetLevelFlag({'value': False, 'index': 8})
        Timer.Wait({'time': 1.0})
        GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
      case [1, 2, 3, 4, 5]:
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
        goto Event38
    }
}

void JumpToR004() {
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    GameControl.LoadArea({'location': '004_CameraWall', 'syncLoad': True, 'extentsY': 10.0, 'extentsZ': 10.0, 'extentsX': 10.0})
}
