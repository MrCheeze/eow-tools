-------- EventFlow: PatrolHyruleSoldierBoundary --------

Actor: GameControl
entrypoint: None()
actions: ['RequestWarp']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetLevelFlag']
queries: []
params: None

Actor: PatrolHyruleSoldierBoundary
entrypoint: None()
actions: ['PlayAnimation']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['PlayAnimationDetail', 'SetVisibility', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

void CatchR015() {

    call EvResetCommon.AllReset()


    fork {
        PatrolHyruleSoldierBoundary.PlayAnimation({'name': 'bind', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Zelda.PlayAnimationDetail({'name': 'bind_lp', 'layer': 0, 'priority': 0})
        Zelda.PlayTailorOtherChannelNoWait({'channel': 'Captured', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.SetVisibility({'visible': False})
    }


    call AreaStartCommon._InCommon({'fadePreset': 'FadeOutNormalB'})


    fork {
        EventFlags.SetLevelFlag({'value': False, 'index': 51})
    } {
        EventFlags.SetLevelFlag({'value': False, 'index': 52})
    }

    GameControl.RequestWarp({'locator': 'LCastle_R024_Warp', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void CatchR006_01() {

    call EvResetCommon.AllReset()


    fork {
        PatrolHyruleSoldierBoundary.PlayAnimation({'name': 'bind', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Zelda.PlayAnimationDetail({'name': 'bind_lp', 'layer': 0, 'priority': 0})
        Zelda.PlayTailorOtherChannelNoWait({'channel': 'Captured', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.SetVisibility({'visible': False})
    }


    call AreaStartCommon._InCommon({'fadePreset': 'FadeOutNormalB'})

    EventFlags.SetLevelFlag({'value': False, 'index': 50})
    GameControl.RequestWarp({'locator': 'LCastle_R023_Warp', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void CatchR006_02() {

    call EvResetCommon.AllReset()


    fork {
        PatrolHyruleSoldierBoundary.PlayAnimation({'name': 'bind', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Zelda.PlayAnimationDetail({'name': 'bind_lp', 'layer': 0, 'priority': 0})
        Zelda.PlayTailorOtherChannelNoWait({'channel': 'Captured', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.SetVisibility({'visible': False})
    }


    call AreaStartCommon._InCommon({'fadePreset': 'FadeOutNormalB'})

    EventFlags.SetLevelFlag({'value': False, 'index': 53})
    GameControl.RequestWarp({'locator': 'LCastle_R025_Warp', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void CatchR006_03() {

    call EvResetCommon.AllReset()


    fork {
        PatrolHyruleSoldierBoundary.PlayAnimation({'name': 'bind', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Zelda.PlayAnimationDetail({'name': 'bind_lp', 'layer': 0, 'priority': 0})
        Zelda.PlayTailorOtherChannelNoWait({'channel': 'Captured', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.SetVisibility({'visible': False})
    }


    call AreaStartCommon._InCommon({'fadePreset': 'FadeOutNormalB'})


    fork {
        EventFlags.SetLevelFlag({'value': False, 'index': 54})
    } {
        EventFlags.SetLevelFlag({'value': False, 'index': 55})
    }

    GameControl.RequestWarp({'locator': 'LCastle_R026_Warp', 'offsetX': 0.0, 'offsetZ': 0.0})
}
