-------- EventFlow: FloorChangeCommon --------

Actor: GameControl
entrypoint: None()
actions: ['RequestWarp']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['StopAllSE']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['MoveToTargetActor', 'MoveLadder', 'PlayAnimation', 'AimCompassPoint', 'ResetVelocity', 'SetGravityEnable', 'AimActor', 'WaitForReady']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: []
queries: []
params: None

void _WarpCommon() {

    call EvResetCommon.AllResetAreaChange()

    Fade.StartPreset({'preset': 'fadePreset'})
}

void StairsUp() {
    Player.ResetVelocity()
    Player.WaitForReady()
    Player.AimActor({'actor': ActorIdentifier(name="Area"), 'duration': 0.10000000149011612, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {

        call _WarpCommon({'fadePreset': 'FadeOutFastB'})

    } {
        Player.MoveToTargetActor({'speed': 0, 'timeOut': 1.0, 'tolerance': 0.10000000149011612, 'actor': ActorIdentifier(name="Player"), 'distance': 1.5, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    GameControl.RequestWarp({'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void StairsDown() {
    Player.ResetVelocity()
    Player.WaitForReady()
    Player.AimActor({'actor': ActorIdentifier(name="Area"), 'duration': 0.10000000149011612, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {

        call _WarpCommon({'fadePreset': 'FadeOutFastB'})

    } {
        Player.MoveToTargetActor({'speed': 0, 'timeOut': 1.0, 'tolerance': 0.10000000149011612, 'actor': ActorIdentifier(name="Player"), 'distance': 1.5, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    GameControl.RequestWarp({'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void LadderDown() {

    fork {

        call _WarpCommon({'fadePreset': 'FadeOutNormalB'})

    } {
        Player.MoveLadder({'mode': 2, 'distance': 3.0, 'timeOut': 7.0})
    }

    GameControl.RequestWarp({'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void LadderUp() {

    fork {

        call _WarpCommon({'fadePreset': 'FadeOutNormalB'})

    } {
        Player.MoveLadder({'mode': 1, 'distance': 3.0, 'timeOut': 7.0})
    }

    GameControl.RequestWarp({'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void WellDown() {

    call _WarpCommon({'fadePreset': 'FadeOutNormalB'})

    GameControl.RequestWarp({'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void WallStairsUp() {

    fork {

        call _WarpCommon({'fadePreset': 'FadeOutNormalB'})

    } {
        Player.PlayAnimation({'name': 'ev_spiralstaircase_levelin_u', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Player.AimCompassPoint({'direction': 2, 'duration': 0.20000000298023224, 'withoutTurn': False, 'immediateTurn': False})
    }

    GameControl.RequestWarp({'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void WallStairsDown() {

    fork {

        call _WarpCommon({'fadePreset': 'FadeOutNormalB'})

    } {
        Player.PlayAnimation({'name': 'ev_spiralstaircase_levelin_d', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Player.AimCompassPoint({'direction': 2, 'duration': 0.20000000298023224, 'withoutTurn': False, 'immediateTurn': False})
    }

    GameControl.RequestWarp({'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void TopLadderDown() {

    call EvResetCommon.AllResetAreaChange()

    Player.ResetVelocity()
    Player.MoveToTargetActor({'speed': 0, 'timeOut': 1.0, 'tolerance': 0.10000000149011612, 'actor': ActorIdentifier(name="Area"), 'distance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Player.AimCompassPoint({'duration': 0.4000000059604645, 'direction': 2, 'withoutTurn': False, 'immediateTurn': False})

    fork {

        call _WarpCommon({'fadePreset': 'FadeOutNormalB'})

    } {
        Player.PlayAnimation({'name': 'ev_ladder_levelin_d', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GameControl.RequestWarp({'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void TopLadderUp() {
    Player.MoveToTargetActor({'speed': 0, 'timeOut': 1.0, 'tolerance': 0.10000000149011612, 'actor': ActorIdentifier(name="Area"), 'distance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Player.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {

        call _WarpCommon({'fadePreset': 'FadeOutNormalB'})

    } {
        Player.PlayAnimation({'name': 'ev_ladder_levelin_u', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GameControl.RequestWarp({'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void WalkIn() {

    fork {

        call _WarpCommon({'fadePreset': 'FadeOutNormalB'})

    } {
        Player.AimActor({'actor': ActorIdentifier(name="Area"), 'duration': 0.009999999776482582, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Player.MoveToTargetActor({'speed': 0, 'timeOut': 1.0, 'tolerance': 0.10000000149011612, 'actor': ActorIdentifier(name="Player"), 'distance': 1.5, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    GameControl.RequestWarp({'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void SwimDownOutTop() {

    fork {

        call AreaExitCommon._OutCommon({'fadePreset': 'FadeOutNormalB'})

    } {
        Player.MoveToTargetActor({'speed': 0, 'timeOut': 1.0, 'tolerance': 0.10000000149011612, 'actor': ActorIdentifier(name="Area"), 'distance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    GameControl.RequestWarp({'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void SwimUpOut() {

    fork {

        call AreaExitCommon._OutCommon({'fadePreset': 'FadeOutNormalB'})

    } {
        Player.PlayAnimation({'name': 'ev_swim_levelout', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GameControl.RequestWarp({'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void JumpOut() {

    fork {

        call AreaExitCommon._OutCommon({'fadePreset': 'FadeOutFastB'})

    } {
        Player.ResetVelocity()
        Player.SetGravityEnable({'enable': False})
    } {
        Audio.StopAllSE({'duration': 1.0})
    }

    GameControl.RequestWarp({'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}
