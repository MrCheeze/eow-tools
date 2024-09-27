-------- EventFlow: AreaStartCommon --------

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait', 'SetVisibility', 'PlayAnimationNoWait', 'AimCompassPoint', 'PlayAnimation', 'LookAtTalker', 'AimDegreeAngle', 'WarpToActorWithCompassPoint', 'SetGravityEnable', 'SetCollisionEnabled']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['MoveToTargetActor', 'MoveLadder', 'SetGravityEnable', 'MoveToCompassPoint', 'PlayAnimation', 'AimCompassPoint', 'WarpToActor', 'SetVisibility', 'PlayTailorOtherChannelNoWait', 'LookAtWarpPlayer']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['WarpToActor', 'MoveToBesideTargetActor', 'MoveToDefaultPosition', 'AimCompassPoint']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Reset']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: BoundaryGate
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: AreaStartTag
entrypoint: None()
actions: ['SetRestartPositionToLinkedPoint']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['SaveToTemporarySaveData']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['PlayAnimationNoWait', 'SetVisibility', 'PlayAnimation', 'MoveToBesideTargetActor', 'AimCompassPoint', 'AimDegreeAngle', 'WarpToActorWithCompassPoint']
queries: []
params: None

void WalkIn() {

    fork {

        call _InCommon({'fadePreset': 'FadeInNormal'})

    } {
        Player.MoveToTargetActor({'speed': 0, 'actor': ActorIdentifier(name="Player"), 'distance': 1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

}

void _InCommon() {

    fork {
        Fade.StartPreset({'preset': 'fadePreset'})
    }

}

void LadderDown() {

    fork {

        call _InCommon({'fadePreset': 'FadeInNormal'})

    } {
        Player.MoveLadder({'mode': 2, 'distance': 3.0, 'timeOut': 7.0})
    }

}

void LadderUp() {

    fork {

        call _InCommon({'fadePreset': 'FadeInNormal'})

    } {
        Player.MoveLadder({'mode': 1, 'distance': 3.0, 'timeOut': 7.0})
    }

}

void WarpIn() {
    Zelda.LookAtTalker({'offsetZ': -2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'keep': False})
    Partner[companion].MoveToBesideTargetActor({'speed': 0, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 1.75, 'offsetX': 0.0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Timer.Wait({'time': 1.0})

    fork {
        Zelda.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        Zelda.PlayAnimation({'name': 'ev_WarpStart_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Zelda.PlayAnimation({'name': 'ev_WarpStart_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayAnimation({'name': 'ev_WarpStart_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].PlayAnimation({'name': 'ev_WarpStart_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Zelda.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    }


    call _InCommon({'fadePreset': 'FadeInNormal'})

    Timer.Wait({'time': 0.5})
    Zelda.PlayTailorOtherChannelNoWait({'channel': 'WarpEnd_00', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    Timer.Wait({'time': 2.5})

    fork {
        Zelda.SetVisibility({'visible': True})
    } {
        Partner[companion].SetVisibility({'visible': True})
    }

    Timer.Wait({'time': 0.5})

    fork {
        Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
}

void FieldWalkIn() {

    fork {

        call _InCommon({'fadePreset': 'FadeInNormal'})

    } {
        Player.MoveToTargetActor({'speed': 0, 'tolerance': 0.0, 'distance': 1.5, 'actor': ActorIdentifier(name="Player"), 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

}

void FallIn() {
    Player.SetGravityEnable({'enable': False})
    Player.WarpToActor({'offsetY': 7.5, 'actor': ActorIdentifier(name="Player"), 'distance': 0.0, 'offsetX': 0.0})

    fork {
        Partner.WarpToActor({'distance': -0.25, 'offsetX': 0.800000011920929, 'offsetY': 0.5, 'actor': ActorIdentifier(name="Player")})
        Partner.MoveToBesideTargetActor({'speed': 1, 'withoutTurn': True, 'offsetX': 0.0, 'offsetZ': 0.0, 'offsetY': -7.5, 'actor': ActorIdentifier(name="Partner"), 'timeOut': 1.149999976158142, 'tolerance': 0.0, 'customSpeed': 0.0, 'method': 0})
    } {
        Timer.Wait({'time': 0.3499999940395355})

        fork {
            Player.SetGravityEnable({'enable': True})
        } {

            call _InCommon({'fadePreset': 'FadeInNormal'})

        }

    }

}

void WaterFallIn() {
    Player.SetGravityEnable({'enable': False})
    Player.WarpToActor({'actor': ActorIdentifier(name="Player"), 'offsetY': 7.5, 'distance': 0.0, 'offsetX': 0.0})

    fork {
        Partner.WarpToActor({'distance': -0.25, 'offsetX': 0.800000011920929, 'actor': ActorIdentifier(name="Player"), 'offsetY': 0.5})
        Partner.MoveToBesideTargetActor({'speed': 1, 'withoutTurn': True, 'offsetX': 0.0, 'offsetZ': 0.0, 'offsetY': -7.5, 'actor': ActorIdentifier(name="Partner"), 'timeOut': 1.149999976158142, 'tolerance': 0.0, 'customSpeed': 0.0, 'method': 0})
    } {
        Timer.Wait({'time': 0.3499999940395355})

        fork {
            Player.SetGravityEnable({'enable': True})
        } {

            call _InCommon({'fadePreset': 'FadeInNormal'})

        }

    }

}

void SwimUpIn() {
    Timer.Wait({'time': 0.20000000298023224})

    fork {

        call _InCommon({'fadePreset': 'FadeInNormal'})

    } {
        Player.MoveToCompassPoint({'speed': 0, 'direction': 5, 'timeOut': 1.0, 'distance': 1.5, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

}

void MapWarpIn() {
    Player.LookAtWarpPlayer({'offsetY': 0.0, 'offsetZ': -2.0, 'chaseRatio': 1.0, 'duration': 0.0, 'distanceOffset': 0.0, 'offsetX': 0.0})

    fork {
        Zelda.AimCompassPoint({'direction': 0, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner[companion].WarpToActorWithCompassPoint({'offsetY': 1.75, 'direction': 0, 'actor': ActorIdentifier(name="Zelda"), 'distance': 0.0, 'offsetX': 0.0})
    }


    fork {
        Zelda.PlayAnimationNoWait({'name': 'ev_WarpStart_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayAnimationNoWait({'name': 'ev_WarpStart_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Zelda.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    }


    fork {
        Zelda.PlayTailorOtherChannelNoWait({'channel': 'WarpEnd_00', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Timer.Wait({'time': 2.5})

        fork {
            Zelda.SetVisibility({'visible': True})
        } {
            Partner[companion].SetVisibility({'visible': True})
        }

        Timer.Wait({'time': 0.5})

        fork {
            Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } {

        call _InCommon({'fadePreset': 'FadeInNormal'})

    }

}

void SwimDownInSide() {

    fork {

        call _InCommon({'fadePreset': 'FadeInNormal'})

    } {
        Player.MoveToCompassPoint({'speed': 0, 'direction': 4, 'distance': 3.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

}

void WallStairUpIn() {

    fork {
        Player.AimCompassPoint({'duration': 0.4000000059604645, 'direction': 0, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
    }


    fork {
        Partner.WarpToActor({'offsetX': 0.0, 'offsetY': 1.0, 'actor': ActorIdentifier(name="Player"), 'distance': -2.5})
        Timer.Wait({'time': 0.10000000149011612})

        call _InCommon({'fadePreset': 'FadeInNormal'})

    } {
        Player.PlayAnimation({'name': 'ev_spiralstaircase_levelout_d', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Partner.MoveToDefaultPosition({'withoutTurn': True, 'timeOut': 1.149999976158142, 'position': 2, 'speed': 0, 'tolerance': 0.0, 'avoidWall': False, 'avoidPlayer': False, 'customSpeed': 0.0})
        Partner.AimCompassPoint({'direction': 0, 'withoutTurn': False, 'duration': 0.4000000059604645, 'immediateTurn': False})
    }

}

void WallStairDownIn() {

    fork {
        Player.AimCompassPoint({'duration': 0.4000000059604645, 'direction': 0, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
    }


    fork {
        Partner.WarpToActor({'offsetX': 0.0, 'offsetY': 1.0, 'actor': ActorIdentifier(name="Player"), 'distance': -2.5})
        Timer.Wait({'time': 0.10000000149011612})

        call _InCommon({'fadePreset': 'FadeInNormal'})

    } {
        Player.PlayAnimation({'name': 'ev_spiralstaircase_levelout_u', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Partner.MoveToDefaultPosition({'speed': 1, 'withoutTurn': True, 'timeOut': 1.149999976158142, 'position': 2, 'tolerance': 0.0, 'avoidWall': False, 'avoidPlayer': False, 'customSpeed': 0.0})
        Partner.AimCompassPoint({'direction': 0, 'withoutTurn': False, 'duration': 0.4000000059604645, 'immediateTurn': False})
    }

}

void StairDownIn() {

    fork {

        call _InCommon({'fadePreset': 'FadeInNormal'})

    } {
        Player.MoveToTargetActor({'speed': 0, 'distance': 1.5, 'actor': ActorIdentifier(name="Player"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

}

void FieldStairUpIn() {

    fork {

        call _InCommon({'fadePreset': 'FadeInNormal'})

    } {
        Player.MoveToTargetActor({'speed': 0, 'distance': 1.5, 'actor': ActorIdentifier(name="Player"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

}

void OverWorldWarpIn() {
    Zelda.SetGravityEnable({'enable': False})
    Zelda.SetCollisionEnabled({'enable': False})
    Zelda.WarpToActorWithCompassPoint({'distance': 3.0, 'direction': 0, 'actor': ActorIdentifier(name="BoundaryGate"), 'offsetY': 0.0, 'offsetX': 0.0})
    Zelda.LookAtTalker({'offsetZ': -2.0, 'distanceOffset': 3.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'keep': False})
    Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetY': 1.75, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': 0.0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})

    fork {
        Zelda.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        Zelda.PlayAnimation({'name': 'ev_WarpStart_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Zelda.PlayAnimation({'name': 'ev_WarpStart_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayAnimation({'name': 'ev_WarpStart_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].PlayAnimation({'name': 'ev_WarpStart_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Zelda.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    }

    Zelda.SetGravityEnable({'enable': True})
    Zelda.SetCollisionEnabled({'enable': True})

    call _InCommon({'fadePreset': 'FadeInNormal'})

    BoundaryGate.PlayTailorOtherChannelNoWait({'channel': 'WarpStart_Crack', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    Zelda.PlayTailorOtherChannelNoWait({'channel': 'WarpEnd_Crack', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    Timer.Wait({'time': 2.5})

    fork {
        Zelda.SetVisibility({'visible': True})
    } {
        Partner[companion].SetVisibility({'visible': True})
    }


    fork {
        Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void BoundaryWorldWarpIn() {

    fork {

        call _InCommon({'fadePreset': 'FadeInNormal'})

    } {
        Player.MoveToTargetActor({'speed': 0, 'distance': 0.75, 'actor': ActorIdentifier(name="Player"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

}

void TopLadderDownIn() {

    fork {

        call _InCommon({'fadePreset': 'FadeInNormal'})

    } {
        Player.PlayAnimation({'name': 'ev_ladder_levelout_d', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void TopLadderUpIn() {

    fork {

        call _InCommon({'fadePreset': 'FadeInNormal'})

    } {
        Player.PlayAnimation({'name': 'ev_ladder_levelout_u', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void CatchWarpIn() {

    fork {

        call _InCommon({'fadePreset': 'FadeInNormal'})

    } {
        Zelda.SetVisibility({'visible': False})
        Timer.Wait({'time': 0.699999988079071})
        Zelda.SetVisibility({'visible': True})
    } {
        Zelda.PlayTailorOtherChannelNoWait({'channel': 'Zelda_SoldierBind_01_entry', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    }

    Timer.Wait({'time': 0.7250000238418579})
}

void Nop() {
    Timer.Wait({'time': 0.11999999731779099})
}

void FieldWaitIn() {

    call _InCommon({'fadePreset': 'FadeInNormal'})

}

void TopWallLadderUpIn() {

    fork {

        call _InCommon({'fadePreset': 'FadeInNormal'})

    } {
        Player.PlayAnimation({'name': 'ev_wall_ladder_levelout_u', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void FieldTopWallLadderUpIn() {

    fork {

        call _InCommon({'fadePreset': 'FadeInNormal'})

    } {
        Player.PlayAnimation({'name': 'ev_wall_ladder_levelout_u', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void FieldTopLadderDownIn() {

    fork {

        call _InCommon({'fadePreset': 'FadeInNormal'})

    } {
        Player.PlayAnimation({'name': 'ev_ladder_levelout_d', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void MidBossWarpIn() {
    Partner[companion].MoveToBesideTargetActor({'offsetY': 1.0, 'speed': 1, 'customSpeed': 20.0, 'offsetX': 0.75, 'offsetZ': -0.5, 'actor': ActorIdentifier(name="Zelda"), 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0})
    Timer.Wait({'time': 0.5})

    fork {
        Player.AimCompassPoint({'direction': 0, 'duration': 0.10000000149011612, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.10000000149011612, 'withoutTurn': False, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        Player.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Player.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    }


    call _InCommon({'fadePreset': 'FadeInNormal'})

    Timer.Wait({'time': 0.5})
    Player.PlayTailorOtherChannelNoWait({'channel': 'Come', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    Timer.Wait({'time': 0.5})

    fork {
        Player.SetVisibility({'visible': True})
    } {
        Partner[companion].SetVisibility({'visible': True})
    }

    Timer.Wait({'time': 0.5})
}

void LadderDown_L_Dungeon002_R002() {
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})

    fork {

        call _InCommon({'fadePreset': 'FadeInNormal'})

    } {
        Player.MoveLadder({'mode': 2, 'distance': 3.0, 'timeOut': 7.0})
    }

}

void WaterFallIn2() {
    if !EventFlags.CheckFlag({'symbol': 'EvB_AreaBBossDead'}) {
        Player.SetGravityEnable({'enable': False})
        Timer.Wait({'time': 0.11999999731779099})
    } else {

        call WaterFallIn()

    }
}

void OverWorldWarpIn45() {
    Zelda.LookAtTalker({'offsetZ': -2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'keep': False})
    Partner[companion].MoveToBesideTargetActor({'speed': 0, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 1.75, 'offsetX': 0.0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})

    fork {
        Zelda.AimDegreeAngle({'angle': 45.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner[companion].AimDegreeAngle({'angle': 45.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        Zelda.PlayAnimation({'name': 'ev_WarpStart_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Zelda.PlayAnimation({'name': 'ev_WarpStart_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayAnimation({'name': 'ev_WarpStart_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].PlayAnimation({'name': 'ev_WarpStart_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Zelda.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    }


    call _InCommon({'fadePreset': 'FadeInNormal'})

    BoundaryGate.PlayTailorOtherChannelNoWait({'channel': 'WarpStart_Crack', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    Zelda.PlayTailorOtherChannelNoWait({'channel': 'WarpEnd_Crack', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    Timer.Wait({'time': 2.5})

    fork {
        Zelda.SetVisibility({'visible': True})
    } {
        Partner[companion].SetVisibility({'visible': True})
    }


    fork {
        Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void WaterFallIn_NoPartner() {
    Player.SetGravityEnable({'enable': False})
    Player.WarpToActor({'offsetY': 7.5, 'actor': ActorIdentifier(name="Player"), 'distance': 0.0, 'offsetX': 0.0})

    fork {
        Player.SetGravityEnable({'enable': True})
    } {

        call _InCommon({'fadePreset': 'FadeInNormal'})

    }

}

void TopLadderUpIn_Last010() {

    call TopLadderUpIn()

    if !EventFlags.CheckFlag({'symbol': 'L008R010RetryUpdate'}) {
        AreaStartTag.SetRestartPositionToLinkedPoint({'direction': 2, 'pointIndex': 0, 'stance': 'Ground'})
        GameControl.SaveToTemporarySaveData()
        EventFlags.SetFlag({'symbol': 'L008R010RetryUpdate', 'value': True})
    }
}
