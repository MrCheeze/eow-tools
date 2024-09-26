-------- EventFlow: Gerudo004 --------

Actor: Gerudo000
entrypoint: None()
actions: ['Deactivate']
queries: []
params: None

Actor: Gerudo004
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimation', 'AimCompassPoint', 'AimPlayer', 'WarpToActorLinkedPoint', 'GenericTalkSequence', 'WarpToLinkedPoint', 'SetInstanceVariableBool', 'SetComponentActive', 'SetFacialExpression', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: ['GetLastResult']
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['CheckProgress']
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'WarpToActor', 'AimCompassPoint', 'MoveToCompassPoint', 'WarpToActorLinkedPoint', 'ResetVelocity', 'SetRestartPositionToActor']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['AimActor', 'WarpToDefaultPosition']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor', 'AimCompassPoint', 'WarpToDefaultPosition']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag']
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJumpInCurrentLevel', 'ForbidSave', 'UnforbidSave', 'RestoreHorseLayoutController', 'DisableHorseLayoutController']
queries: []
params: None

Actor: Gerudo006
entrypoint: None()
actions: ['Deactivate']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AddItemAndGenericItemGetSequence']
queries: []
params: None

Actor: Gerudo005
entrypoint: None()
actions: ['Deactivate']
queries: []
params: None

Actor: GerudoChiefsDaughter
entrypoint: None()
actions: ['Deactivate']
queries: []
params: None

void Chase_Desert010_Quest() {

    call EvResetCommon.AllReset()

    Gerudo004.SetInterestIkEnabled({'enable': False})
    if !EventFlags.CheckMessgaeFlag({'message': 'quest/QuestAreaD:Chase_Desert010_010'}) {

        call _FirstTimeEvent()

    }
    Gerudo004.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaD:Chase_Desert010_Q1', 'playerTalkAnim': False, 'selfTalkAnimName': 'wait02', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        fork {
            Gerudo004.Talk({'message': 'quest/QuestAreaD:Chase_Desert010_Q1_A1_010', 'getAttention': False})
        } {
            Gerudo004.PlayAnimation({'name': 'happy01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Gerudo004.SetFacialExpression({'expression': 'angry'})
        }

        Gerudo004.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        switch QuestSystem.CheckProgress({'symbol': 'Chase_Desert010:1383772348'}) {
          case 4294967295:

            fork {
                QuestSystem.SetProgress({'symbol': 'Chase_Desert010:1013363051', 'isShowTelopInEvent': True, 'isFrontFade': False})
            } {
                Timer.Wait({'time': 5.0})
            }

            Event182:
            GameControl.ForbidSave()
            Fade.StartPreset({'preset': 'FadeOutSlowB'})

            call _Chase_Desert_Start_NoFade()

          case 0:
            QuestSystem.SetProgress({'symbol': 'Chase_Desert010:1013363051', 'isShowTelopInEvent': False, 'isFrontFade': False})
            goto Event182
          case 1:
            goto Event182
        }
    } else {

        fork {
            Gerudo004.Talk({'message': 'quest/QuestAreaD:Chase_Desert010_Q1_A2_010', 'getAttention': False})
        } {
            Gerudo004.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Gerudo004.SetFacialExpression({'expression': 'smile'})
        }

        Gerudo004.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Gerudo004.SetComponentActive({'name': 'gerudoRunnerComp', 'active': False})
        Gerudo004.SetComponentActive({'name': 'navAgentComp', 'active': False})
        Gerudo004.SetInstanceVariableBool({'name': 'restartTrigger', 'value': True})
    }
}

void Chase_Desert010_Clear() {

    call EvResetCommon.AllReset()

    Gerudo004.SetInterestIkEnabled({'enable': False})
    Gerudo004.SetComponentActive({'name': 'gerudoRunnerComp', 'active': False})
    Gerudo004.SetComponentActive({'active': False, 'name': 'navAgentComp'})

    fork {
        Gerudo004.Talk({'message': 'quest/QuestAreaD:Chase_Desert010_120', 'getAttention': False})
    } {
        Gerudo004.GenericTalkSequence({'selfTalkAnim': True, 'playerTalkAnim': False, 'facial': 'surprise', 'selfTalkAnimName': 'surprised_st01', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    }

    Gerudo004.SetFacialExpression({'expression': 'normal'})
    Event269:

    call _Chase_Desert_Clear()

}

void Chase_Desert010_OutOfAreaDown() {
    Player.ResetVelocity()

    call EvResetCommon.AllReset()

    Dialog.Show({'message': 'quest/QuestAreaD:Chase_Desert010_Q2'})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        Fade.StartPreset({'preset': 'FadeOutNormalB'})

        call _Chase_End()

    } else {
        Player.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Player.MoveToCompassPoint({'speed': 0, 'tolerance': 0.10000000149011612, 'direction': 2, 'timeOut': 3.0, 'distance': 3.5, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }
}

void GerudoRace_Peplay_Quest() {

    call EvResetCommon.AllReset()

    Gerudo004.SetInterestIkEnabled({'enable': False})
    Gerudo004.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaD:Chase_Desert020_050', 'facial': 'smile', 'selfTalkAnimName': 'wait02', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        QuestSystem.SetProgress({'symbol': 'GerudoRace_Replay:3134844678', 'isShowTelopInEvent': False, 'isFrontFade': False})
        GameControl.ForbidSave()
        Fade.StartPreset({'preset': 'FadeOutSlowB'})

        call _Chase_Desert_Start_NoFade()

    } else {

        fork {
            Gerudo004.Talk({'message': 'quest/QuestAreaD:Chase_Desert020_060', 'getAttention': False})
        } {
            Gerudo004.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Gerudo004.SetFacialExpression({'expression': 'smile'})
        }

        Gerudo004.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Gerudo004.SetComponentActive({'name': 'gerudoRunnerComp', 'active': False})
        Gerudo004.SetComponentActive({'name': 'navAgentComp', 'active': False})
        Gerudo004.SetInstanceVariableBool({'name': 'restartTrigger', 'value': True})
    }
}

void GerudoRace_Peplay_Clear() {

    call EvResetCommon.AllReset()

    Gerudo004.SetInterestIkEnabled({'enable': False})
    Gerudo004.SetComponentActive({'name': 'gerudoRunnerComp', 'active': False})
    Gerudo004.SetComponentActive({'active': False, 'name': 'navAgentComp'})

    fork {
        Gerudo004.Talk({'message': 'quest/QuestAreaD:Chase_Desert020_070', 'getAttention': False})
    } {
        Gerudo004.GenericTalkSequence({'selfTalkAnim': True, 'playerTalkAnim': False, 'selfTalkAnimName': 'surprised_st01,surprised_lp01', 'facial': 'sad', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    }

    Gerudo004.SetFacialExpression({'expression': 'normal'})
    goto Event269
}

void Chase_Desert010_OutOfArea2() {
    Event260:
    Player.ResetVelocity()

    call EvResetCommon.AllReset()

    Dialog.Show({'message': 'quest/QuestAreaD:Chase_Desert010_Q2'})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        Fade.StartPreset({'preset': 'FadeOutNormalB'})

        call _Chase_End()

    } else {

        call _Chase_Desert_Select()

    }
}

void FieldWalkOut_Wildernesst() {
    switch QuestSystem.CheckProgress({'symbol': 'Chase_Desert010:1013363051'}) {
      case 4294967295:
        Event243:

        call AreaExitCommon.FieldWalkOut({'level': 'level', 'locator': 'locator'})

      case 0:

        call EvResetCommon.AllReset()

        Dialog.Show({'message': 'quest/QuestAreaD:Chase_Desert010_Q2'})
        if !Dialog.GetLastResult({'resultOnSkip': 1}) {
            Event301:
            Fade.StartPreset({'preset': 'FadeOutNormalB'})

            call _Chase_End()

        } else {
            Player.ResetVelocity()
            Player.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
            Player.MoveToCompassPoint({'speed': 0, 'timeOut': 1.0, 'tolerance': 0.10000000149011612, 'direction': 0, 'distance': 2.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        }
      case 1:
        switch QuestSystem.CheckProgress({'symbol': 'GerudoRace_Replay:3134844678'}) {
          case [4294967295, 1]:
            goto Event243
          case 0:

            call EvResetCommon.AllReset()

            Dialog.Show({'message': 'quest/QuestAreaD:Chase_Desert010_Q2'})
            if !Dialog.GetLastResult({'resultOnSkip': 1}) {
                goto Event301
            } else {
                Player.ResetVelocity()
                Player.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
                Player.MoveToCompassPoint({'speed': 0, 'tolerance': 0.10000000149011612, 'direction': 0, 'distance': 2.0, 'timeOut': 1.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
            }
        }
    }
}

void Retire_GerudoChase() {

    call EvResetCommon.AllReset()

    Gerudo004.SetInterestIkEnabled({'enable': False})
    Gerudo004.SetComponentActive({'name': 'gerudoRunnerComp', 'active': False})
    Gerudo004.SetComponentActive({'active': False, 'name': 'navAgentComp'})
    if !QuestSystem.CheckProgress({'symbol': 'Chase_Desert010:1013363051'}) {
        QuestSystem.SetProgress({'symbol': 'Chase_Desert010:1383772348', 'isShowTelopInEvent': False, 'isFrontFade': False})
        Event160:
        Gerudo004.WarpToLinkedPoint({'index': 0, 'offsetY': 0.0})
        Gerudo004.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

        fork {
            Player.WarpToActor({'actor': ActorIdentifier(name="Gerudo004"), 'distance': 1.5, 'offsetY': 0.0, 'offsetX': 0.0})
        } {
            Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        }


        fork {
            Player.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        } {
            Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Gerudo004"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        } {
            Gerudo004.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Timer.Wait({'time': 2.0})
        Fade.StartPreset({'preset': 'FadeInSlow'})

        fork {
            Gerudo004.Talk({'message': 'quest/QuestAreaD:Chase_Desert010_Q2_A1_010', 'getAttention': False})
        } {
            Gerudo004.GenericTalkSequence({'selfTalkAnim': True, 'playerTalkAnim': False, 'facial': 'smile', 'selfTalkAnimName': 'happy01,wait02', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        }


        fork {
            Gerudo004.Talk({'message': 'quest/QuestAreaD:Chase_Desert010_Q2_A1_020', 'getAttention': False})
        } {
            Gerudo004.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Gerudo004.SetFacialExpression({'expression': 'normal'})
        }

        Gerudo004.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Gerudo004.SetInstanceVariableBool({'name': 'minigameRunning', 'value': False})
        GameControl.RestoreHorseLayoutController()
        GameControl.UnforbidSave()
    } else
    if !QuestSystem.CheckProgress({'symbol': 'GerudoRace_Replay:3134844678'}) {
        QuestSystem.SetProgress({'symbol': 'GerudoRace_Replay:1875578225', 'isShowTelopInEvent': False, 'isFrontFade': False})
        goto Event160
    }
}

void _FirstTimeEvent() {
    Gerudo004.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaD:Chase_Desert010_010', 'selfTalkAnimName': 'talk', 'playerTalkAnim': False, 'facial': 'normal', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Gerudo004.Talk({'message': 'quest/QuestAreaD:Chase_Desert010_020', 'getAttention': False})
    } {
        Gerudo004.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo004.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        Gerudo004.Talk({'message': 'quest/QuestAreaD:Chase_Desert010_030', 'getAttention': False})
    } {
        Gerudo004.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo004.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        Gerudo004.Talk({'message': 'quest/QuestAreaD:Chase_Desert010_040', 'getAttention': False})
    } {
        Gerudo004.PlayAnimation({'name': 'move_fast', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo004.SetFacialExpression({'expression': 'angry'})
    } {
        Gerudo004.AimCompassPoint({'direction': 3, 'duration': 0.20000000298023224, 'withoutTurn': False, 'immediateTurn': False})
        Timer.Wait({'time': 0.5})
        Gerudo004.AimCompassPoint({'duration': 0.20000000298023224, 'direction': 1, 'withoutTurn': False, 'immediateTurn': False})
        Timer.Wait({'time': 0.5})
        Gerudo004.AimCompassPoint({'direction': 3, 'duration': 0.20000000298023224, 'withoutTurn': False, 'immediateTurn': False})
        Timer.Wait({'time': 0.5})
        Gerudo004.AimCompassPoint({'duration': 0.20000000298023224, 'direction': 1, 'withoutTurn': False, 'immediateTurn': False})
        Timer.Wait({'time': 0.5})
    }

    Timer.Wait({'time': 0.5})

    fork {
        Gerudo004.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Gerudo004.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo004.SetFacialExpression({'expression': 'normal'})
    }

    Timer.Wait({'time': 0.4000000059604645})

    fork {
        Gerudo004.Talk({'message': 'quest/QuestAreaD:Chase_Desert010_050', 'getAttention': False})
    } {
        Gerudo004.PlayAnimation({'name': 'ask', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo004.SetFacialExpression({'expression': 'angry'})
    }


    fork {
        Gerudo004.Talk({'message': 'quest/QuestAreaD:Chase_Desert010_060', 'getAttention': False})
    } {
        Gerudo004.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo004.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        Gerudo004.Talk({'message': 'quest/QuestAreaD:Chase_Desert010_070', 'getAttention': False})
    } {
        Gerudo004.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo004.SetFacialExpression({'expression': 'angry'})
    }

}

void _Chase_Desert_Start() {
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    Event209:
    GameControl.RequestLevelJumpInCurrentLevel({'locator': 'Chase_Desert_Start', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void _Chase_Win_init() {
    Gerudo004.WarpToLinkedPoint({'index': 0, 'offsetY': 0.0})
    Gerudo004.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Player.WarpToActor({'actor': ActorIdentifier(name="Gerudo004"), 'distance': 1.5, 'offsetY': 0.0, 'offsetX': 0.0})
    Player.AimActor({'actor': ActorIdentifier(name="Gerudo004"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].WarpToDefaultPosition({'avoidPlayer': False, 'position': 1, 'avoidWall': False})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="Gerudo004"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Gerudo004"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Gerudo004.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void _RemoveMiniChallengeNPC() {
    Gerudo000.Deactivate()
    Gerudo005.Deactivate()
    Gerudo006.Deactivate()
    GerudoChiefsDaughter.Deactivate()
}

void Chase_Desert_Start() {

    call EvResetCommon.AllResetNowait()


    call _Start_Pos_init()

    Timer.Wait({'time': 2.0})

    call _Chase_Desert_Start_Demo()


    call _InstanceVarStart()

}

void _Chase_Desert_Select() {
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    GameControl.RequestLevelJumpInCurrentLevel({'locator': 'Chase_Desert_Select', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void Chase_Desert_Select() {

    call EvResetCommon.AllResetNowait()


    call _Start_Pos_init()

    Fade.StartPreset({'preset': 'FadeInSlow'})

    call _InstanceVarStart()

}

void _Chase_Desert_Start_Demo() {
    Fade.StartPreset({'preset': 'FadeInSlow'})
    Timer.Wait({'time': 0.5})

    fork {
        Gerudo004.Talk({'message': 'quest/QuestAreaD:Chase_Desert010_Q1_A1_020', 'getAttention': False})
    } {
        Gerudo004.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo004.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        Gerudo004.Talk({'message': 'quest/QuestAreaD:Chase_Desert010_Q1_A1_040', 'getAttention': False})
    } {
        Gerudo004.PlayAnimation({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo004.SetFacialExpression({'expression': 'normal'})
    }

    Gerudo004.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void _Start_Pos_init() {
    GameControl.DisableHorseLayoutController({'activateParticipantHorse': False, 'deactivateBelovedHorse': True, 'deactivateRentedHorse': True, 'deactivateUnrentedRentalHorses': True, 'deactivateUnmanagedHorses': True})
    Player.SetRestartPositionToActor({'direction': 0, 'distance': 0.0, 'stance': 'Ground'})

    fork {
        Gerudo004.WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Gerudo004"), 'offsetY': 0.0})

        call _RemoveMiniChallengeNPC()

    } {
        Player.WarpToActorLinkedPoint({'index': 2, 'actor': ActorIdentifier(name="Gerudo004"), 'offsetY': 0.0})
        Partner.WarpToDefaultPosition({'position': 1, 'avoidPlayer': True, 'avoidWall': False})

        fork {
            Player.AimActor({'actor': ActorIdentifier(name="Gerudo004"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].AimActor({'actor': ActorIdentifier(name="Gerudo004"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Gerudo004.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    Camera.LookAt2ActorsCenterAsTalker({'duration': 0.20000000298023224, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Gerudo004"), 'distanceOffset': 5.0, 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
}

void _InstanceVarStart() {
    Gerudo004.SetInstanceVariableBool({'name': 'minigameRunning', 'value': False})
    Gerudo004.SetComponentActive({'name': 'gerudoRunnerComp', 'active': True})
    Gerudo004.SetComponentActive({'name': 'navAgentComp', 'active': True})
    Gerudo004.SetInstanceVariableBool({'name': 'restartTrigger', 'value': True})
}

void _Chase_Desert_Start_NoFade() {
    goto Event209
}

void _Chase_End() {
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    GameControl.RequestLevelJumpInCurrentLevel({'locator': 'Retire_GerudoChase', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void Chase_Desert_Clear() {

    call EvResetCommon.AllResetNowait()

    if !QuestSystem.CheckProgress({'symbol': 'Chase_Desert010:1013363051'}) {

        call _Chase_Win_init()

        Timer.Wait({'time': 2.0})
        Fade.StartPreset({'preset': 'FadeInSlow'})

        fork {
            Gerudo004.Talk({'message': 'quest/QuestAreaD:Chase_Desert020_010', 'getAttention': False})
        } {
            Gerudo004.GenericTalkSequence({'selfTalkAnim': True, 'playerTalkAnim': False, 'selfTalkAnimName': 'no01,wait02', 'facial': 'normal', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        }


        fork {
            Gerudo004.Talk({'message': 'quest/QuestAreaD:Chase_Desert020_020', 'getAttention': False})
        } {
            Gerudo004.PlayAnimation({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Gerudo004.SetFacialExpression({'expression': 'angry'})
        }


        fork {
            Gerudo004.Talk({'message': 'quest/QuestAreaD:Chase_Desert020_030', 'getAttention': False})
        } {
            Gerudo004.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Gerudo004.SetFacialExpression({'expression': 'smile'})
        }

        Gerudo004.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'SmoothieIngredient07', 'count': 6, 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})

        fork {
            Player.AimActor({'actor': ActorIdentifier(name="Gerudo004"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner.AimActor({'actor': ActorIdentifier(name="Gerudo004"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Gerudo004.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaD:Chase_Desert020_040', 'facial': 'normal', 'selfTalkAnimName': 'happy01,wait01', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        GameControl.RestoreHorseLayoutController()
        GameControl.UnforbidSave()
        QuestSystem.SetProgress({'symbol': 'Chase_Desert010:390849192', 'isShowTelopInEvent': False, 'isFrontFade': False})
    } else
    if !QuestSystem.CheckProgress({'symbol': 'GerudoRace_Replay:3134844678'}) {

        call _Chase_Win_init()

        Timer.Wait({'time': 2.0})
        Fade.StartPreset({'preset': 'FadeInSlow'})

        fork {
            Gerudo004.Talk({'message': 'quest/QuestAreaD:Chase_Desert020_080', 'getAttention': False})
        } {
            Gerudo004.GenericTalkSequence({'selfTalkAnim': True, 'playerTalkAnim': False, 'selfTalkAnimName': 'talk02', 'facial': 'angry', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        }


        fork {
            Gerudo004.Talk({'message': 'quest/QuestAreaD:Chase_Desert020_090', 'getAttention': False})
        } {
            Gerudo004.PlayAnimation({'name': 'yes01,wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Gerudo004.SetFacialExpression({'expression': 'smile'})
        }

        GameControl.RestoreHorseLayoutController()
        GameControl.UnforbidSave()
        QuestSystem.SetProgress({'symbol': 'GerudoRace_Replay:1875578225', 'isShowTelopInEvent': False, 'isFrontFade': False})
    }
}

void _Chase_Desert_Clear() {
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    GameControl.RequestLevelJumpInCurrentLevel({'locator': 'Chase_Desert_Clear', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void Chase_Desert010_OutOfAreaLeft() {
    Player.ResetVelocity()

    call EvResetCommon.AllReset()

    Dialog.Show({'message': 'quest/QuestAreaD:Chase_Desert010_Q2'})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        Fade.StartPreset({'preset': 'FadeOutNormalB'})

        call _Chase_End()

    } else {
        Player.AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Player.MoveToCompassPoint({'speed': 0, 'tolerance': 0.10000000149011612, 'direction': 1, 'timeOut': 3.0, 'distance': 3.5, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }
}

void Chase_Desert010_OutOfArea() {
    goto Event260
}
