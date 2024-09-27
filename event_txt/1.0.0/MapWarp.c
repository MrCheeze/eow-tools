-------- EventFlow: MapWarp --------

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump', 'RequestWarp']
queries: []
params: None

Actor: Hud
entrypoint: None()
actions: ['PlayOutAnimLayout']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['SetVisibility', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel', 'DisableSyncRodBallFollow', 'DisableAutoMovement', 'WarpToActorWithCompassPoint', 'PlayAnimation', 'AimCompassPoint', 'MoveToBesideTargetActor']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['PlayAnimationWithPartner', 'SetVisibility', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel', 'PlayAnimation', 'AimCompassPoint', 'LookAtTalker', 'SetGravityEnable', 'SetCollisionEnabled', 'ResetVelocity']
queries: ['CheckLife']
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['StopBurning', 'BreakBurrowable', 'PlayAnimationNoWait', 'AimCompassPoint', 'SetGravityEnable', 'MorphEnd', 'ResetCarriedActor', 'AbsorbAllPastedActors', 'ResetActiveAndPesteActors', 'LookAtWarpPlayer', 'CancelAllShooting']
queries: ['CheckMorph']
params: None

Actor: FlowControl
entrypoint: None()
actions: ['Yield_']
queries: []
params: None

Actor: Sync
entrypoint: None()
actions: ['SyncReset']
queries: []
params: None

void LevelWarpStartMenu() {

    call _WarpPerformance()


    call AreaExitCommon._OutCommon({'fadePreset': 'FadeOutNormalB'})

    Player.ResetActiveAndPesteActors({'child': True, 'cemeteryRevive': False, 'defeatedThrough': False, 'aliveCemeteryRevive': False})
    GameControl.RequestLevelJump({'level': 'level', 'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void LocationWarpStartMenu() {

    call _WarpPerformance()


    call AreaExitCommon._OutCommon({'fadePreset': 'FadeOutNormalB'})

    Player.ResetActiveAndPesteActors({'child': True, 'cemeteryRevive': False, 'defeatedThrough': False, 'aliveCemeteryRevive': False})
    GameControl.RequestWarp({'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void _WarpPerformance() {

    fork {
        Player.AimCompassPoint({'direction': 0, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner[companion].DisableSyncRodBallFollow()
        Partner[companion].DisableAutoMovement()
    } {
        Player.SetGravityEnable({'enable': False})
    } {
        Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
        Sync.SyncReset()
        Player.StopBurning()
    } {
        Player.BreakBurrowable()
        Player.ResetCarriedActor()
    } {
        Player.CancelAllShooting()
    }

    FlowControl.Yield_()
    Hud.PlayOutAnimLayout({'HeartGauge': True, 'ItemSlot': True, 'PasteSlot': True, 'Rupee': True, 'KeyItem': True, 'MiniMap': True, 'PasteGauge': True, 'Operate': True, 'TimedAbility': True})
    Player.LookAtWarpPlayer({'offsetY': 0.0, 'offsetZ': -2.0, 'chaseRatio': 1.0, 'duration': 0.0, 'distanceOffset': 0.0, 'offsetX': 0.0})
    Player.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].WarpToActorWithCompassPoint({'offsetY': 1.75, 'direction': 0, 'actor': ActorIdentifier(name="Zelda"), 'distance': 0.0, 'offsetX': 0.0})
    if !Player.CheckMorph({'morphKind': 0}) {
        Player.MorphEnd()
    }
    if Zelda.CheckLife({'amount': 1}) {

        fork {
            Zelda.PlayAnimationWithPartner({'name': '$ev_WarpStart_st', 'layer': 0})
        } {
            Timer.Wait({'time': 1.0})
            Partner[companion].PlayTailorOtherChannelNoWait({'channel': 'WarpStart_00', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        } {
            Timer.Wait({'time': 0.699999988079071})
            Audio.PlayOneshotSystemSE({'label': 'SE_SYS_WARP_START', 'volume': 1.0, 'pitch': 1.0})
        }

        Timer.Wait({'time': 0.10000000149011612})
        Zelda.PlayTailorOtherChannelNoWait({'channel': 'WarpStart_00', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Timer.Wait({'time': 0.30000001192092896})

        fork {
            Timer.Wait({'time': 0.6669999957084656})
            Zelda.StopTailorOtherChannel({'channel': 'WarpStart_00', 'index': -1})
            Partner[companion].StopTailorOtherChannel({'channel': 'WarpStart_00', 'index': -1})
            Zelda.SetVisibility({'visible': False})
            Partner[companion].SetVisibility({'visible': False})
        } {
            Zelda.PlayTailorOtherChannelNoWait({'channel': 'WarpStart_01', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            Timer.Wait({'time': 2.5})
        }

    }
}

void LevelWarpStart() {

    fork {
        Zelda.LookAtTalker({'offsetY': 0.0, 'offsetZ': -2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'keep': False})
    } {
        Zelda.ResetVelocity()

        call EvResetCommon.AllReset()

    } {
        Partner[companion].MoveToBesideTargetActor({'speed': 0, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 1.75, 'offsetX': 0.0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    }

    Timer.Wait({'time': 0.25})
    if Zelda.CheckLife({'amount': 1}) {

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


        call AreaExitCommon._OutCommon({'fadePreset': 'FadeOutNormalB'})

        GameControl.RequestLevelJump({'level': 'level', 'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
    }
}

void LocationWarpStart() {

    fork {
        Zelda.LookAtTalker({'offsetY': 0.0, 'offsetZ': -2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'keep': False})
    } {
        Zelda.SetGravityEnable({'enable': False})
        Zelda.SetCollisionEnabled({'enable': False})

        call EvResetCommon.AllReset()

    } {
        Partner[companion].MoveToBesideTargetActor({'speed': 0, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 1.75, 'offsetX': 0.0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    }

    Timer.Wait({'time': 0.25})
    if Zelda.CheckLife({'amount': 1}) {

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


        call AreaExitCommon._OutCommon({'fadePreset': 'FadeOutNormalB'})

        GameControl.RequestWarp({'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
    }
}
