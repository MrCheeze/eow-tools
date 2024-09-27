-------- EventFlow: BossCommon --------

Actor: Player
entrypoint: None()
actions: ['WaitForReady', 'PlayAnimation', 'BreakBurrowable', 'ResetCarriedActor', 'StopBurning', 'GetOffVehicle', 'MorphEnd']
queries: ['CheckMorph']
params: None

Actor: Audio
entrypoint: None()
actions: ['StopAllBGM', 'StopRegioBGMBeforeMiddleBoss']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['SetCanSkip']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['PlayAnimationNoWait']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['ResetFloorAbyss']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['MoveToTargetActor']
queries: []
params: None

Actor: Enemy[HitStop(enemy)]
entrypoint: HitStop(enemy)
actions: ['HitStop', 'LookAtBoss']
queries: []
params: None

Actor: Enemy[BossExtinction(enemy)]
entrypoint: BossExtinction(enemy)
actions: ['PlayTailorOtherChannelNoWait', 'SetVisibility']
queries: []
params: None

Actor: Enemy[MiniBossExtinction(enemy)]
entrypoint: MiniBossExtinction(enemy)
actions: ['PlayAnimation', 'PlayTailorOtherChannelEx', 'SetVisibility', 'ItemDropToActor']
queries: []
params: None

Actor: Enemy[MiniBossExtinction2(enemy)]
entrypoint: MiniBossExtinction2(enemy)
actions: ['PlayAnimation', 'PlayTailorOtherChannelEx', 'SetVisibility', 'ItemDropToActor']
queries: []
params: None

Actor: Enemy[MiniBossDoorClose(enemy)]
entrypoint: MiniBossDoorClose(enemy)
actions: ['RoomDoorClose']
queries: []
params: None

Actor: Enemy[HitStopSmallBoss(enemy)]
entrypoint: HitStopSmallBoss(enemy)
actions: ['HitStop', 'LookAtBoss']
queries: []
params: None

Actor: Enemy[HitStopBigBoss(enemy)]
entrypoint: HitStopBigBoss(enemy)
actions: ['HitStop', 'LookAtBoss']
queries: []
params: None

Actor: Enemy[LanmolaExtinction(enemy)]
entrypoint: LanmolaExtinction(enemy)
actions: ['PlayAnimation', 'PlayTailorOtherChannelEx', 'PlayMaterialAnimationNoWait', 'SetVisibility', 'ItemDropToActor']
queries: []
params: None

Actor: Enemy[HitStopNonStopBGM(enemy)]
entrypoint: HitStopNonStopBGM(enemy)
actions: ['HitStop', 'LookAtBoss']
queries: []
params: None

Actor: Enemy[HitStopCustom(enemy)]
entrypoint: HitStopCustom(enemy)
actions: ['HitStop', 'LookAtBoss']
queries: []
params: None

Actor: Enemy[VolvagiaExtinction(enemy)]
entrypoint: VolvagiaExtinction(enemy)
actions: ['PlayTailorOtherChannelNoWait', 'SetVisibility']
queries: []
params: None

void HitStop() {
    Audio.StopAllBGM({'duration': 0.5})

    fork {
        Enemy[HitStop(enemy)].HitStop({'duration': -1.0, 'delay': False})
    } {
        Enemy[HitStop(enemy)].LookAtBoss({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    }


    call EvResetCommon.HitStopReset()

    Player.WaitForReady()
}

void BossExtinction() {

    fork {
        Enemy[BossExtinction(enemy)].PlayTailorOtherChannelNoWait({'channel': 'Dead_Boss', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Timer.Wait({'time': 5.833000183105469})
    } {
        Timer.Wait({'time': 2.5})

        call EvResetCommon.ExtinctionReset()

        Timer.Wait({'time': 0.10000000149011612})
        Zelda.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Enemy[BossExtinction(enemy)].SetVisibility({'visible': False})
    Timer.Wait({'time': 3.0})
}

void MiniBossExtinction() {

    fork {
        Enemy[MiniBossExtinction(enemy)].PlayAnimation({'name': 'ev_dead', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Enemy[MiniBossExtinction(enemy)].PlayTailorOtherChannelEx({'channel': 'Dead_Boss', 'time': 4.0, 'restart': False, 'index': -1, 'stopOnSkipped': True})
    }


    fork {
        Enemy[MiniBossExtinction(enemy)].SetVisibility({'visible': False})
    } {
        Enemy[MiniBossExtinction(enemy)].ItemDropToActor({'displacementY': 5.0, 'linkedItemScatter': True, 'displacementX': 0.0, 'displacementZ': 0.0})
    } {
        Timer.Wait({'time': 1.0})

        call EvResetCommon.ExtinctionReset()

        Timer.Wait({'time': 0.10000000149011612})
        Zelda.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 1.0})
}

void MiniBossExtinction2() {

    fork {
        Enemy[MiniBossExtinction2(enemy)].PlayAnimation({'name': 'dead', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Enemy[MiniBossExtinction2(enemy)].PlayTailorOtherChannelEx({'channel': 'Dead_Boss', 'time': 4.0, 'restart': False, 'index': -1, 'stopOnSkipped': True})
    }


    fork {
        Enemy[MiniBossExtinction2(enemy)].SetVisibility({'visible': False})
    } {
        Enemy[MiniBossExtinction2(enemy)].ItemDropToActor({'displacementY': 5.0, 'linkedItemScatter': True, 'displacementX': 0.0, 'displacementZ': 0.0})
    } {
        Timer.Wait({'time': 1.0})

        call EvResetCommon.ExtinctionReset()

        Timer.Wait({'time': 0.10000000149011612})
        Zelda.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 1.0})
}

void MiniBossDoorClose() {

    fork {
        Enemy[MiniBossDoorClose(enemy)].RoomDoorClose()
    } {
        Partner[companion].MoveToTargetActor({'speed': 0, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'distance': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    Player.PlayAnimation({'name': 'ev_lookback', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    FlowControl.SetCanSkip({'enable': True})
}

void PreMiniBoss() {

    call EvResetCommon.AllReset_03()

    Audio.StopRegioBGMBeforeMiddleBoss()
}

void HitStopSmallBoss() {
    Audio.StopAllBGM({'duration': 0.5})

    fork {
        Enemy[HitStopSmallBoss(enemy)].HitStop({'duration': -1.0, 'delay': False})
    } {
        Enemy[HitStopSmallBoss(enemy)].LookAtBoss({'duration': 0.4000000059604645, 'distanceOffset': -3.0, 'offsetY': 0.0, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetZ': 0.0, 'keep': False})
    }


    call EvResetCommon.HitStopReset()

    Player.WaitForReady()
}

void HitStopBigBoss() {
    Audio.StopAllBGM({'duration': 0.5})

    fork {
        Enemy[HitStopBigBoss(enemy)].HitStop({'duration': -1.0, 'delay': False})
    } {
        Enemy[HitStopBigBoss(enemy)].LookAtBoss({'duration': 0.4000000059604645, 'offsetY': 0.0, 'offsetZ': 0.0, 'distanceOffset': 5.0, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'keep': False})
    }


    call EvResetCommon.HitStopReset()

    Player.WaitForReady()
}

void LanmolaExtinction() {

    fork {
        Enemy[LanmolaExtinction(enemy)].PlayAnimation({'name': 'dead', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Enemy[LanmolaExtinction(enemy)].PlayTailorOtherChannelEx({'channel': 'Dead_Boss', 'time': 4.0, 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Enemy[LanmolaExtinction(enemy)].PlayMaterialAnimationNoWait({'name': 'dead', 'layer': 0})
    }


    fork {
        Enemy[LanmolaExtinction(enemy)].SetVisibility({'visible': False})
    } {
        Enemy[LanmolaExtinction(enemy)].ItemDropToActor({'displacementY': 5.0, 'linkedItemScatter': True, 'displacementX': 0.0, 'displacementZ': 0.0})
    } {
        Timer.Wait({'time': 1.0})
        Zelda.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 1.0})
}

void HitStopNonStopBGM() {

    fork {
        Enemy[HitStopNonStopBGM(enemy)].HitStop({'duration': -1.0, 'delay': False})
    } {
        Enemy[HitStopNonStopBGM(enemy)].LookAtBoss({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    }


    call EvResetCommon.HitStopReset()

    Player.WaitForReady()
}

void HitStopCustom() {
    Audio.StopAllBGM({'duration': 0.5})

    fork {
        Enemy[HitStopCustom(enemy)].HitStop({'duration': -1.0, 'delay': False})
    } {
        Enemy[HitStopCustom(enemy)].LookAtBoss({'duration': 0.4000000059604645, 'offsetY': -1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetZ': 0.0, 'keep': False})
    }


    call EvResetCommon.HitStopReset()

    Player.WaitForReady()
}

void VolvagiaExtinction() {

    fork {
        Enemy[VolvagiaExtinction(enemy)].PlayTailorOtherChannelNoWait({'channel': 'Dead_Boss', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Timer.Wait({'time': 5.300000190734863})
    } {
        Timer.Wait({'time': 2.5})

        fork {
            if !Player.CheckMorph({'morphKind': 0}) {
                Player.MorphEnd()
            }
        } {
            Player.BreakBurrowable()
        } {
            Player.ResetCarriedActor()
        } {
            Player.StopBurning()
        } {
            Player.GetOffVehicle({'method': 0, 'anim': 'get_off', 'disappear': True})
        } {
            GameControl.ResetFloorAbyss()
        }

        Timer.Wait({'time': 0.10000000149011612})
        Zelda.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Enemy[VolvagiaExtinction(enemy)].SetVisibility({'visible': False})
}
