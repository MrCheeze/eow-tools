-------- EventFlow: AreaExitCommon --------

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump', 'SetThroughObstaclesOnMove', 'SetResetOverlappedActorsOnMoveDone']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayJingle', 'StopAllSE', 'PlayOneshotSystemSE', 'StopAllBGM', 'SetPlayerVolume']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['PlayAnimation', 'AimCompassPoint', 'SetVisibility', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel', 'LookAtTalker', 'SetGravityEnable']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['MoveToTargetActor', 'MoveLadder', 'PlayAnimation', 'AimCompassPoint', 'PlayMaterialAnimation', 'MoveToCompassPoint', 'AimActor', 'ResetVelocity', 'WaitForReady', 'SetGravityEnable', 'SetCollisionEnabled', 'SetVisibility', 'AbsorbAllPastedActors', 'MorphEnd', 'BreakBurrowable', 'ResetCarriedActor', 'HideBurningEffect', 'GetOffVehicle']
queries: ['CheckMorph']
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['PlayAnimationNoWait']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: BoundaryGate
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: Sync
entrypoint: None()
actions: ['SyncReset']
queries: []
params: None

Actor: Hud
entrypoint: None()
actions: ['HidePartnerGauge']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: []
queries: []
params: None

Actor: BoundaryGateDoAction
entrypoint: None()
actions: []
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['MoveToBesideTargetActor', 'PlayAnimation', 'AimCompassPoint', 'SetVisibility', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel', 'AimActor', 'DisableSyncRodBallFollow']
queries: []
params: None

void WarpOut() {

    fork {

        call _OutCommon({'fadePreset': 'FadeOutNormalB'})

    } {
        Audio.PlayJingle({'label': 'SE_OBJ_WARP_FIELD_ON', 'volume': 1.0, 'ignoreSkip': True})
    }

    GameControl.RequestLevelJump({'level': 'level', 'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void WalkOut() {

    fork {

        call _OutCommon({'fadePreset': 'FadeOutFastB'})

    } {
        Audio.StopAllSE({'duration': 1.0})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="Area"), 'duration': 0.009999999776482582, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Player.MoveToTargetActor({'speed': 0, 'timeOut': 1.0, 'tolerance': 0.10000000149011612, 'distance': 0.0, 'actor': ActorIdentifier(name="Area"), 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    GameControl.RequestLevelJump({'level': 'level', 'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void FieldWalkOut() {

    fork {
        Player.MoveToCompassPoint({'speed': 0, 'timeOut': 1.0, 'tolerance': 0.10000000149011612, 'direction': 2, 'distance': 1.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Player.PlayMaterialAnimation({'name': 'fade_out', 'layer': 0})
    } {

        call _OutCommon({'fadePreset': 'FadeOutNormalB'})

    }

    GameControl.RequestLevelJump({'level': 'level', 'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void _OutCommon() {

    call EvResetCommon.AllResetAreaChange()

    Fade.StartPreset({'preset': 'fadePreset'})
}

void LadderDown() {

    fork {

        call _OutCommon({'fadePreset': 'FadeOutNormalB'})

    } {
        Player.MoveLadder({'mode': 2, 'timeOut': 1.0, 'distance': 3.0})
    } {
        Audio.StopAllSE({'duration': 1.0})
    }

    GameControl.RequestLevelJump({'level': 'level', 'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void LadderUp() {

    fork {

        call _OutCommon({'fadePreset': 'FadeOutNormalB'})

    } {
        Player.MoveLadder({'mode': 1, 'timeOut': 1.0, 'distance': 3.0})
    } {
        Audio.StopAllSE({'duration': 1.0})
    }

    GameControl.RequestLevelJump({'level': 'level', 'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void WalkOut_White() {

    fork {
        Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    } {
        Sync.SyncReset()
    } {
        if !Player.CheckMorph({'morphKind': 0}) {
            Player.MorphEnd()
        }
    } {
        Player.BreakBurrowable()
    } {
        Player.ResetCarriedActor()
    } {
        Player.HideBurningEffect()
    } {
        Player.GetOffVehicle({'method': 0, 'anim': 'get_off', 'disappear': True})
    } {
        Partner[companion].DisableSyncRodBallFollow()
    } {

        call _OutCommon({'fadePreset': 'FadeOutNormalW'})

    } {
        Player.MoveToTargetActor({'speed': 0, 'timeOut': 1.0, 'tolerance': 0.10000000149011612, 'actor': ActorIdentifier(name="Area"), 'distance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Audio.StopAllSE({'duration': 1.0})
    }

    GameControl.RequestLevelJump({'level': 'level', 'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void SwimUpOut() {

    fork {

        call _OutCommon({'fadePreset': 'FadeOutNormalB'})

    } {
        Player.PlayAnimation({'name': 'ev_swim_levelout', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.StopAllSE({'duration': 1.0})
    }

    GameControl.RequestLevelJump({'offsetX': 0.0, 'locator': 'locator', 'level': 'level', 'offsetZ': 0.0})
}

void FieldStairDownOut() {
    Player.ResetVelocity()
    Player.WaitForReady()
    Player.AimActor({'actor': ActorIdentifier(name="Area"), 'duration': 0.10000000149011612, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {

        call _OutCommon({'fadePreset': 'FadeOutFastB'})

    } {
        Player.MoveToTargetActor({'speed': 0, 'timeOut': 1.0, 'tolerance': 0.10000000149011612, 'actor': ActorIdentifier(name="Area"), 'distance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    GameControl.RequestLevelJump({'level': 'level', 'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void FieldWallLadderUpOut() {

    call EvResetCommon.AllResetAreaChange()

    Player.MoveToTargetActor({'speed': 0, 'timeOut': 1.0, 'tolerance': 0.10000000149011612, 'actor': ActorIdentifier(name="Area"), 'distance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Player.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {

        call _OutCommon({'fadePreset': 'FadeOutNormalB'})

    } {
        Player.PlayAnimation({'name': 'ev_ladder_levelin_u', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GameControl.RequestLevelJump({'level': 'level', 'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void SwimDownOutTop() {

    fork {

        call _OutCommon({'fadePreset': 'FadeOutNormalB'})

    } {
        Player.MoveToTargetActor({'speed': 0, 'timeOut': 1.0, 'tolerance': 0.10000000149011612, 'distance': 0.0, 'actor': ActorIdentifier(name="Area"), 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Audio.StopAllSE({'duration': 1.0})
    }

    GameControl.RequestLevelJump({'level': 'level', 'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void WallStairUpOut() {

    fork {

        call _OutCommon({'fadePreset': 'FadeOutNormalB'})

    } {
        Player.PlayAnimation({'name': 'ev_spiralstaircase_levelin_u', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.StopAllSE({'duration': 1.0})
    } {
        Player.AimCompassPoint({'direction': 2, 'duration': 0.20000000298023224, 'withoutTurn': False, 'immediateTurn': False})
    }

    GameControl.RequestLevelJump({'level': 'level', 'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void WallStairDownOut() {

    fork {

        call _OutCommon({'fadePreset': 'FadeOutNormalB'})

    } {
        Player.PlayAnimation({'name': 'ev_spiralstaircase_levelin_d', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.StopAllSE({'duration': 1.0})
    } {
        Player.AimCompassPoint({'direction': 2, 'duration': 0.20000000298023224, 'withoutTurn': False, 'immediateTurn': False})
    }

    GameControl.RequestLevelJump({'level': 'level', 'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void FieldWallLadderDownOut() {

    call EvResetCommon.AllResetAreaChange()

    Player.MoveToTargetActor({'speed': 0, 'timeOut': 1.0, 'tolerance': 0.10000000149011612, 'actor': ActorIdentifier(name="Area"), 'distance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Player.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {

        call _OutCommon({'fadePreset': 'FadeOutNormalB'})

    } {
        Player.PlayAnimation({'name': 'ev_ladder_levelin_d', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GameControl.RequestLevelJump({'level': 'level', 'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void OverWorldWarpOut() {

    call _jump_boundary()

    GameControl.RequestLevelJump({'level': 'level', 'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void BoundaryWorldWarpOut() {

    fork {

        call _OutCommon({'fadePreset': 'FadeOutNormalB'})

    } {
        Player.MoveToTargetActor({'speed': 0, 'timeOut': 1.0, 'tolerance': 0.10000000149011612, 'distance': 0.0, 'actor': ActorIdentifier(name="BoundaryGate"), 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    GameControl.RequestLevelJump({'level': 'level', 'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void WellDown() {

    fork {

        call _OutCommon({'fadePreset': 'FadeOutNormalB'})

    } {
        Audio.StopAllSE({'duration': 1.0})
    }

    GameControl.RequestLevelJump({'level': 'level', 'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void TopLadderDownOut() {
    GameControl.SetResetOverlappedActorsOnMoveDone({'enable': True})
    GameControl.SetThroughObstaclesOnMove({'enable': True})
    Player.ResetVelocity()
    Player.MoveToTargetActor({'speed': 0, 'timeOut': 1.0, 'tolerance': 0.10000000149011612, 'actor': ActorIdentifier(name="Area"), 'distance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Player.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {

        call _OutCommon({'fadePreset': 'FadeOutNormalB'})

    } {
        Player.PlayAnimation({'name': 'ev_ladder_levelin_d', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.StopAllSE({'duration': 1.0})
    }

    GameControl.RequestLevelJump({'level': 'level', 'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void StairDownOut() {
    Player.ResetVelocity()
    Player.WaitForReady()
    Player.AimActor({'actor': ActorIdentifier(name="Area"), 'duration': 0.10000000149011612, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {

        call _OutCommon({'fadePreset': 'FadeOutFastB'})

    } {
        Player.MoveToTargetActor({'speed': 0, 'timeOut': 1.0, 'tolerance': 0.10000000149011612, 'distance': 0.0, 'actor': ActorIdentifier(name="Area"), 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Audio.StopAllSE({'duration': 1.0})
    }

    GameControl.RequestLevelJump({'level': 'level', 'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void WellLadderUp() {

    fork {

        call _OutCommon({'fadePreset': 'FadeOutNormalB'})

    } {
        Player.MoveLadder({'mode': 1, 'timeOut': 1.0, 'distance': 3.0})
    } {
        Audio.StopAllSE({'duration': 1.0})
    }

    GameControl.RequestLevelJump({'level': 'level', 'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void BoundaryWorldWarpOutDo() {
    Hud.HidePartnerGauge()
    Player.AimActor({'actor': ActorIdentifier(name="BoundaryGateDoAction"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    call _jumpout_boundary()

    GameControl.RequestLevelJump({'level': 'level', 'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void _jump_boundary() {

    call EvResetCommon.AllReset()


    fork {
        Player.AimActor({'actor': ActorIdentifier(name="BoundaryGate"), 'offsetZ': -2.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="BoundaryGate"), 'offsetZ': -2.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'immediateTurn': False})
    }


    fork {
        Player.SetGravityEnable({'enable': False})
        Player.SetCollisionEnabled({'enable': False})
        Audio.StopAllBGM({'duration': 2.5})

        fork {
            Player.PlayAnimation({'name': 'ev_InBoundaryWorld_jump', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 0.800000011920929})
            BoundaryGate.PlayTailorOtherChannelNoWait({'channel': 'WarpStart_Crack', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        } {
            Timer.Wait({'time': 0.8999999761581421})
            Player.SetVisibility({'visible': False})
        }

    } {
        Timer.Wait({'time': 0.5})
        Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetY': 1.75, 'withoutTurn': True, 'offsetZ': -1.5, 'actor': ActorIdentifier(name="BoundaryGate"), 'offsetX': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0})
        Partner.PlayAnimationNoWait({'name': 'move_down', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            Partner[companion].MoveToBesideTargetActor({'withoutTurn': True, 'tolerance': 0.0, 'offsetZ': 0.0, 'offsetY': -1.5, 'speed': 1, 'actor': ActorIdentifier(name="BoundaryGate"), 'offsetX': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0})
        } {
            Timer.Wait({'time': 0.6000000238418579})
            BoundaryGate.PlayTailorOtherChannelNoWait({'channel': 'WarpStart_Crack', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        } {
            Timer.Wait({'time': 0.7670000195503235})
            Partner[companion].SetVisibility({'visible': False})
        } {
            Timer.Wait({'time': 0.5})
            Partner[companion].StopTailorOtherChannel({'channel': 'GlowKeep', 'index': -1})
        }

    }

    Fade.StartPreset({'preset': 'FadeOutNormalB'})
}

void _jumpout_boundary() {
    Zelda.SetGravityEnable({'enable': False})

    fork {
        Zelda.LookAtTalker({'offsetY': 0.0, 'offsetZ': -2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'keep': False})
    } {
        Partner[companion].MoveToBesideTargetActor({'speed': 0, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 1.75, 'offsetX': 0.0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    } {

        call EvResetCommon.AllReset()

        Audio.StopAllBGM({'duration': 2.5})
        Audio.SetPlayerVolume({'label': 'PLAYER_SE_ENEMY', 'volume': 0.0, 'duration': 0.20000000298023224})
    }


    fork {
        Zelda.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }


    fork {
        Zelda.PlayAnimation({'name': 'ev_WarpStart_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Zelda.PlayAnimation({'name': 'ev_WarpStart_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayAnimation({'name': 'ev_WarpStart_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].PlayAnimation({'name': 'ev_WarpStart_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.0})
        Partner[companion].PlayTailorOtherChannelNoWait({'channel': 'WarpStart_00', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Timer.Wait({'time': 0.699999988079071})
        Audio.PlayOneshotSystemSE({'label': 'SE_SYS_WARP_START_00', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 0.3330000042915344})
    Zelda.PlayTailorOtherChannelNoWait({'channel': 'WarpStart_00', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    Timer.Wait({'time': 0.8330000042915344})

    fork {
        Timer.Wait({'time': 0.6669999957084656})
        Zelda.StopTailorOtherChannel({'channel': 'WarpStart_00', 'index': -1})
        Partner[companion].StopTailorOtherChannel({'channel': 'WarpStart_00', 'index': -1})
        Zelda.SetVisibility({'visible': False})
        Partner[companion].SetVisibility({'visible': False})
    } {
        Zelda.PlayTailorOtherChannelNoWait({'channel': 'WarpStart_01', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Timer.Wait({'time': 3.8329999446868896})
    } {
        Timer.Wait({'time': 2.0})
        Audio.PlayOneshotSystemSE({'label': 'SE_SYS_WARP_START_01', 'volume': 1.0, 'pitch': 1.0})
    }

    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Zelda.SetVisibility({'visible': True})
    Partner[companion].SetVisibility({'visible': True})
    Audio.SetPlayerVolume({'label': 'PLAYER_SE_ENEMY', 'duration': 0.20000000298023224, 'volume': 1.0})
}

void OverWorldWarpOut0() {

    call _jump_boundary()

    GameControl.RequestLevelJump({'level': 'level', 'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}
