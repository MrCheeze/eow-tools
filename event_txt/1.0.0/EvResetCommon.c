-------- EventFlow: EvResetCommon --------

Actor: Sync
entrypoint: None()
actions: ['SyncReset']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AbsorbAllPastedActors', 'MorphEnd', 'GetOffVehicle', 'HideBurningEffect', 'StopBurning', 'BreakBurrowable', 'ResetCarriedActor', 'PlayAnimation', 'MorphTo', 'HideTimedAbilityEffect', 'PlayAnimationNoWait', 'CancelAllShooting']
queries: ['CheckMorph']
params: None

Actor: Audio
entrypoint: None()
actions: ['SwitchToMainTrack']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['DisableSyncRodBallFollow', 'MoveToDefaultPosition', 'EnableAutoMovement']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['SetAllItemsVisibility', 'DestroyAllProjectiles', 'SetResetOverlappedActorsOnMoveDone', 'SetThroughObstaclesOnMove', 'ResetFloorAbyss']
queries: []
params: None

void AllReset() {

    call _AllResetImpl({'disappearHorse': True})

}

void AllReset_02() {

    fork {
        Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    } {
        Sync.SyncReset()
    } {
        if !Player.CheckMorph({'morphKind': 0}) {
            Player.MorphTo({'kind': 0})
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
        Partner[companion].DisableSyncRodBallFollow()
    } {
        GameControl.SetAllItemsVisibility({'visible': False})
    } {
        GameControl.DestroyAllProjectiles()
    } {
        GameControl.ResetFloorAbyss()
    } {
        Player.HideTimedAbilityEffect()
    }

}

void AllReset_PasteOff() {

    fork {
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
        Player.StopBurning()
    } {
        Player.GetOffVehicle({'method': 0, 'anim': 'get_off', 'disappear': True})
    } {
        Partner[companion].DisableSyncRodBallFollow()
        Partner[companion].MoveToDefaultPosition({'speed': 1, 'position': 1, 'tolerance': 0.0, 'avoidWall': False, 'avoidPlayer': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Partner[companion].EnableAutoMovement()
    } {
        GameControl.SetAllItemsVisibility({'visible': False})
    } {
        GameControl.DestroyAllProjectiles()
    } {
        GameControl.SetResetOverlappedActorsOnMoveDone({'enable': True})
        GameControl.SetThroughObstaclesOnMove({'enable': True})
    } {
        GameControl.ResetFloorAbyss()
    } {
        Player.HideTimedAbilityEffect()
    } {
        Player.CancelAllShooting()
    }

    Timer.Wait({'time': 0.10000000149011612})
    Player.PlayAnimation({'name': '', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.30000001192092896})
    Player.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void AllResetAreaChange() {

    fork {
        Sync.SyncReset()
    } {
        Player.BreakBurrowable()
    } {
        Player.ResetCarriedActor()
    } {
        Player.HideBurningEffect()
    } {
        Partner[companion].DisableSyncRodBallFollow()
    } {
        Player.CancelAllShooting()
    }

}

void AllReset_Ridinghorse() {

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
        Player.StopBurning()
    } {
        Partner[companion].DisableSyncRodBallFollow()
    } {
        GameControl.SetAllItemsVisibility({'visible': False})
    } {
        GameControl.DestroyAllProjectiles()
    } {
        GameControl.SetResetOverlappedActorsOnMoveDone({'enable': True})
        GameControl.SetThroughObstaclesOnMove({'enable': True})
    } {
        GameControl.ResetFloorAbyss()
    } {
        Player.HideTimedAbilityEffect()
    } {
        Player.CancelAllShooting()
    }

    Timer.Wait({'time': 0.10000000149011612})
    Player.PlayAnimation({'name': '', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.30000001192092896})
    Player.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void AllResetKeepTrans() {

    fork {
        Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    } {
        Sync.SyncReset()
    } {
        Player.BreakBurrowable()
    } {
        Player.ResetCarriedActor()
    } {
        Player.StopBurning()
    } {
        Player.GetOffVehicle({'method': 0, 'anim': 'get_off', 'disappear': True})
    } {
        Partner[companion].DisableSyncRodBallFollow()
    } {
        GameControl.SetAllItemsVisibility({'visible': False})
    } {
        GameControl.DestroyAllProjectiles()
    } {
        GameControl.SetResetOverlappedActorsOnMoveDone({'enable': True})
        GameControl.SetThroughObstaclesOnMove({'enable': True})
    } {
        GameControl.ResetFloorAbyss()
    } {
        Player.HideTimedAbilityEffect()
    } {
        Player.CancelAllShooting()
    }

    Timer.Wait({'time': 0.10000000149011612})
    Player.PlayAnimation({'name': '', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.30000001192092896})
    Player.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void AllReset_03() {

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
        Player.StopBurning()
    } {
        Partner[companion].DisableSyncRodBallFollow()
    } {
        Player.HideTimedAbilityEffect()
    }

}

void AngryReset() {

    fork {
        Timer.Wait({'time': 0.5})
        Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    } {
        Sync.SyncReset()
    } {
        GameControl.ResetFloorAbyss()
    } {
        Player.BreakBurrowable()
    } {
        Timer.Wait({'time': 0.5})
        GameControl.DestroyAllProjectiles()
    } {
        Player.StopBurning()
    }

}

void HitStopReset() {

    fork {
        Sync.SyncReset()
    } {
        Player.StopBurning()
    } {
        GameControl.DestroyAllProjectiles()
    } {
        Player.BreakBurrowable()
    } {
        Player.HideTimedAbilityEffect()
    } {
        Player.ResetCarriedActor()
    }

}

void ExtinctionReset() {

    fork {
        Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    } {
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

}

void AllResetNowait() {

    fork {
        Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    } {
        Sync.SyncReset()
    } {
        if !Player.CheckMorph({'morphKind': 0}) {
            Player.MorphTo({'kind': 0})
            Audio.SwitchToMainTrack()
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
        Partner[companion].DisableSyncRodBallFollow()
    } {
        GameControl.SetAllItemsVisibility({'visible': False})
    } {
        GameControl.DestroyAllProjectiles()
    } {
        GameControl.SetResetOverlappedActorsOnMoveDone({'enable': True})
        GameControl.SetThroughObstaclesOnMove({'enable': True})
    } {
        GameControl.ResetFloorAbyss()
    } {
        Player.HideTimedAbilityEffect()
    }

    Player.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void AllReset_PasteOff02() {

    fork {
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
        Player.StopBurning()
    } {
        Player.GetOffVehicle({'method': 0, 'anim': 'get_off', 'disappear': True})
    } {
        Partner[companion].DisableSyncRodBallFollow()
    } {
        GameControl.SetAllItemsVisibility({'visible': False})
    } {
        GameControl.DestroyAllProjectiles()
    } {
        GameControl.SetResetOverlappedActorsOnMoveDone({'enable': True})
        GameControl.SetThroughObstaclesOnMove({'enable': True})
    } {
        GameControl.ResetFloorAbyss()
    } {
        Player.HideTimedAbilityEffect()
    } {
        Player.CancelAllShooting()
    }

    Timer.Wait({'time': 0.10000000149011612})
    Player.PlayAnimation({'name': '', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.30000001192092896})
    Player.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void _AllResetImpl() {

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
        Player.StopBurning()
    } {
        Player.GetOffVehicle({'disappear': 'disappearHorse', 'method': 0, 'anim': 'get_off'})
    } {
        Partner[companion].DisableSyncRodBallFollow()
    } {
        GameControl.SetAllItemsVisibility({'visible': False})
    } {
        GameControl.DestroyAllProjectiles()
    } {
        GameControl.SetResetOverlappedActorsOnMoveDone({'enable': True})
        GameControl.SetThroughObstaclesOnMove({'enable': True})
    } {
        GameControl.ResetFloorAbyss()
    } {
        Player.HideTimedAbilityEffect()
    } {
        Player.CancelAllShooting()
    }

    Timer.Wait({'time': 0.10000000149011612})
    Player.PlayAnimation({'name': '', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.30000001192092896})
    Player.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void AllReset_SensorQuest() {

    fork {
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
        Player.StopBurning()
    } {
        Player.GetOffVehicle({'method': 0, 'anim': 'get_off', 'disappear': True})
    } {
        Partner[companion].DisableSyncRodBallFollow()
        Partner[companion].MoveToDefaultPosition({'speed': 1, 'position': 1, 'tolerance': 0.0, 'avoidWall': False, 'avoidPlayer': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Partner[companion].EnableAutoMovement()
    } {
        GameControl.SetAllItemsVisibility({'visible': False})
    } {
        GameControl.DestroyAllProjectiles()
    } {
        GameControl.SetResetOverlappedActorsOnMoveDone({'enable': True})
        GameControl.SetThroughObstaclesOnMove({'enable': True})
    } {
        GameControl.ResetFloorAbyss()
    } {
        Player.HideTimedAbilityEffect()
    } {
        Player.AbsorbAllPastedActors({'isExcludeLocked': True, 'isExcludeKarakuri': False})
    } {
        Player.CancelAllShooting()
    }

    Timer.Wait({'time': 0.10000000149011612})
    Player.PlayAnimation({'name': '', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.30000001192092896})
    Player.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void AllReset_SensorQuestForKarakuri() {

    fork {
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
        Player.StopBurning()
    } {
        Player.GetOffVehicle({'method': 0, 'anim': 'get_off', 'disappear': True})
    } {
        Partner[companion].DisableSyncRodBallFollow()
        Partner[companion].MoveToDefaultPosition({'speed': 1, 'position': 1, 'tolerance': 0.0, 'avoidWall': False, 'avoidPlayer': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Partner[companion].EnableAutoMovement()
    } {
        GameControl.SetAllItemsVisibility({'visible': False})
    } {
        GameControl.DestroyAllProjectiles()
    } {
        GameControl.SetResetOverlappedActorsOnMoveDone({'enable': True})
        GameControl.SetThroughObstaclesOnMove({'enable': True})
    } {
        GameControl.ResetFloorAbyss()
    } {
        Player.HideTimedAbilityEffect()
    } {
        Player.AbsorbAllPastedActors({'isExcludeLocked': True, 'isExcludeKarakuri': True})
    } {
        Player.CancelAllShooting()
    }

    Timer.Wait({'time': 0.10000000149011612})
    Player.PlayAnimation({'name': '', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.30000001192092896})
    Player.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void AllReset_InPot() {

    fork {
        Sync.SyncReset()
    } {
        if !Player.CheckMorph({'morphKind': 0}) {
            Player.MorphEnd()
        }
    } {
        Player.ResetCarriedActor()
    } {
        Player.StopBurning()
    } {
        Player.GetOffVehicle({'method': 0, 'anim': 'get_off', 'disappear': True})
    } {
        Partner[companion].DisableSyncRodBallFollow()
    } {
        GameControl.SetAllItemsVisibility({'visible': False})
    } {
        GameControl.DestroyAllProjectiles()
    } {
        GameControl.SetResetOverlappedActorsOnMoveDone({'enable': True})
        GameControl.SetThroughObstaclesOnMove({'enable': True})
    } {
        GameControl.ResetFloorAbyss()
    } {
        Player.HideTimedAbilityEffect()
    } {
        Player.CancelAllShooting()
    } {
        Player.AbsorbAllPastedActors({'isExcludeLocked': True, 'isExcludeKarakuri': False})
    }

}

void AllResetBossDead() {

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
        Player.StopBurning()
    } {
        Player.GetOffVehicle({'disappear': 'disappearHorse', 'method': 0, 'anim': 'get_off'})
    } {
        Partner[companion].DisableSyncRodBallFollow()
    } {
        GameControl.DestroyAllProjectiles()
    } {
        GameControl.SetResetOverlappedActorsOnMoveDone({'enable': True})
        GameControl.SetThroughObstaclesOnMove({'enable': True})
    } {
        GameControl.ResetFloorAbyss()
    } {
        Player.HideTimedAbilityEffect()
    } {
        Player.CancelAllShooting()
    }

    Timer.Wait({'time': 0.10000000149011612})
    Player.PlayAnimation({'name': '', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.30000001192092896})
    Player.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
}
