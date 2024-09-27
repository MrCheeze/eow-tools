-------- EventFlow: Goron003 --------

Actor: Goron003
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SetFacialExpression', 'PlayAnimationNoWait', 'PlayAnimation', 'SetTalkerName', 'ActiveteLinkedActor', 'ResetFacialExpression', 'ResetLinkedActor', 'GenericTalkSequence', 'SetInterestIkEnabled', 'AimPlayer', 'AimToInitialAngle', 'SkipAutoTurn', 'SetInstanceVariableString']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['HideBurningEffect', 'StopBurning', 'WarpToActorLinkedPoint', 'AbsorbAllPastedActors']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['ResetSensorEventResetContainsActors', 'RequestLevelJumpInCurrentLevel']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag']
params: None

void talk() {
    Goron003.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGoron:Goron003Talk010_010', 'selfTalkAnim': False, 'selfTalkAnimName': 'ask', 'facial': 'angry', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk020() {
    Goron003.SetFacialExpression({'expression': 'surprise'})
    Goron003.PlayAnimationNoWait({'name': 'surprised_st02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron003.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGoron:Goron003Talk020_010', 'selfTalkAnimName': '', 'selfTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Goron003.SetFacialExpression({'expression': 'sad'})
    Goron003.PlayAnimationNoWait({'name': 'no01,wait03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron003.Talk({'message': 'scenario/GeneralTalkGoron:Goron003Talk020_020', 'getAttention': False})
}

void talk030() {
    Goron003.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron003.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGoron:Goron003Talk030_010', 'selfTalkAnimName': '', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Goron003.Talk({'message': 'scenario/GeneralTalkGoron:Goron003Talk030_020', 'getAttention': False})
}

void talk040() {
    Goron003.SetFacialExpression({'expression': 'smile'})
    Goron003.PlayAnimationNoWait({'name': 'yes01,wait03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron003.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGoron:Goron003Talk040_010', 'selfTalkAnimName': '', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Goron003.SetFacialExpression({'expression': 'sleep'})
    Goron003.PlayAnimationNoWait({'name': 'no01,wait03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron003.SetFacialExpression({'expression': 'normal'})
    Goron003.Talk({'message': 'scenario/GeneralTalkGoron:Goron003Talk040_020', 'getAttention': False})
}

void talk0() {
    Goron003.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkGoron:Goron003Talk005_010', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Quest_1() {

    call EvResetCommon.AllReset()

    Goron003.SetInterestIkEnabled({'enable': False})
    Player.HideBurningEffect()
    if !EventFlags.CheckMessgaeFlag({'message': 'quest/QuestAreaC:Carry_Valcano010_010'}) {
        Goron003.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaC:Carry_Valcano010_005', 'facial': 'sad', 'selfTalkAnimName': 'think01', 'selfTalkAnim': True, 'aimToPlayer': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        Goron003.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

        fork {
            Goron003.Talk({'message': 'quest/QuestAreaC:Carry_Valcano010_006', 'getAttention': False})
        } {
            Goron003.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron003.SetFacialExpression({'expression': 'surprise'})
        }


        fork {
            Goron003.Talk({'message': 'quest/QuestAreaC:Carry_Valcano010_007', 'getAttention': False})
        } {
            Goron003.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron003.SetFacialExpression({'expression': 'sad'})
        }

        Goron003.SetTalkerName({'message': 'glossary/Character:Goron004', 'keep': False})

        fork {
            Goron003.Talk({'message': 'quest/QuestAreaC:Carry_Valcano010_008', 'getAttention': False})
        } {
            Goron003.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron003.ResetFacialExpression()
        }


        fork {
            Goron003.Talk({'message': 'quest/QuestAreaC:Carry_Valcano010_009', 'getAttention': False})
        } {
            Goron003.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron003.SetFacialExpression({'expression': 'smile'})
        }


        fork {
            Goron003.Talk({'message': 'quest/QuestAreaC:Carry_Valcano010_010', 'getAttention': False})
        } {
            Goron003.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            Goron003.Talk({'message': 'quest/QuestAreaC:Carry_Valcano010_020', 'getAttention': False})
        } {
            Goron003.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron003.ResetFacialExpression()
        }


        fork {
            Goron003.Talk({'message': 'quest/QuestAreaC:Carry_Valcano010_030', 'getAttention': False})
        } {
            Goron003.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron003.SetFacialExpression({'expression': 'sad'})
        }


        fork {
            Goron003.Talk({'message': 'quest/QuestAreaC:Carry_Valcano010_040', 'getAttention': False})
        } {
            Goron003.PlayAnimationNoWait({'name': 'wait03', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron003.SetFacialExpression({'expression': 'sad'})
        }


        fork {
            Goron003.Talk({'message': 'quest/QuestAreaC:Carry_Valcano010_060', 'getAttention': False})
        } {
            Goron003.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        if !Dialog.GetLastResult({'resultOnSkip': 1}) {
            Event99:

            fork {
                Goron003.SetFacialExpression({'expression': 'surprise'})
            } {
                Goron003.Talk({'message': 'quest/QuestAreaC:Carry_Valcano010_070', 'getAttention': False})
            } {
                Goron003.PlayAnimation({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }


            fork {
                Goron003.SetFacialExpression({'expression': 'smile'})
            } {
                Goron003.Talk({'message': 'quest/QuestAreaC:Carry_Valcano010_075', 'getAttention': False})
            } {
                Goron003.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

            Goron003.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Fade.StartPreset({'preset': 'FadeOutSlowB'})
            GameControl.ResetSensorEventResetContainsActors({'cemeteryRevive': True, 'eventReset': True})
            GameControl.RequestLevelJumpInCurrentLevel({'locator': 'Mc046_restart', 'offsetX': 0.0, 'offsetZ': 0.0})
        } else {

            fork {
                Goron003.SetFacialExpression({'expression': 'sad'})
            } {
                Goron003.Talk({'message': 'quest/QuestAreaC:Carry_Valcano010_120', 'getAttention': False})
            } {
                Goron003.PlayAnimation({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

            Goron003.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
            Goron003.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }
    } else {
        Goron003.SetTalkerName({'message': 'glossary/Character:Goron004', 'keep': False})
        Goron003.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'selfTalkAnim': False, 'message': 'quest/QuestAreaC:Carry_Valcano010_063', 'facial': 'sad', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        if !Dialog.GetLastResult({'resultOnSkip': 1}) {
            goto Event99
        } else {

            fork {
                Goron003.Talk({'message': 'quest/QuestAreaC:Carry_Valcano010_123', 'getAttention': False})
            } {
                Goron003.PlayAnimation({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

            Timer.Wait({'time': 0.5})

            fork {
                Goron003.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Goron003.AimToInitialAngle({'duration': 0.6000000238418579, 'withoutTurn': False, 'immediateTurn': False})
            }

            Goron003.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }
    }
}

void Quest_2() {
    Player.HideBurningEffect()
    Goron003.SetTalkerName({'message': 'glossary/Character:Goron004', 'keep': False})
    Goron003.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaC:Carry_Valcano020_010', 'playerTalkAnim': False, 'selfTalkAnimName': 'talk02', 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Goron003.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    Goron003.ResetLinkedActor({'resetWait': True, 'cemeteryRevive': True, 'index': 0})
    Player.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="Goron003"), 'offsetY': 0.0})
    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    Goron003.GenericTalkSequence({'selfTalkAnim': False, 'playerTalkAnim': False, 'cameraLookAt': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    Goron003.ActiveteLinkedActor({'index': 0})
    GameControl.ResetSensorEventResetContainsActors({'cemeteryRevive': False, 'eventReset': True})
    Timer.Wait({'time': 2.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    Goron003.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': 'normal', 'message': 'quest/QuestAreaC:Carry_Valcano020_020', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Goron003.SetFacialExpression({'expression': 'smile'})
    } {
        Goron003.Talk({'message': 'quest/QuestAreaC:Carry_Valcano020_030', 'getAttention': False})
    } {
        Goron003.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Goron003.SetFacialExpression({'expression': 'smile'})
    } {
        Goron003.GenericTalkSequenceWithDialog({'facial': 'smile', 'selfTalkAnimName': 'talk02', 'playerTalkAnim': False, 'cameraLookAt': True, 'message': 'quest/QuestAreaC:Carry_Valcano020_040', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Goron003.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Goron003.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron003.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait02'})
    Goron003.SkipAutoTurn()
}

void Quest_4() {
    Goron003.SetTalkerName({'message': 'glossary/Character:Goron004', 'keep': False})
    Player.HideBurningEffect()
    Goron003.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': '', 'selfTalkAnimName': 'think01', 'selfTalkAnim': True, 'message': 'scenario/GeneralTalkGoron:Goron003Talk050_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Goron003.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron003.Talk({'message': 'scenario/GeneralTalkGoron:Goron003Talk050_020', 'getAttention': False})
    } {
        Goron003.SetFacialExpression({'expression': 'smile'})
    }

}

void talk015() {
    Goron003.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGoron:Goron003Talk015_010', 'selfTalkAnimName': 'talk02', 'facial': '', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Goron003.SetFacialExpression({'expression': 'sad'})
    Goron003.PlayAnimationNoWait({'name': 'wait31', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.5})
    Goron003.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron003.Talk({'message': 'scenario/GeneralTalkGoron:Goron003Talk015_020', 'getAttention': False})
}

void Quest_1_2() {
    Player.StopBurning()
    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    Player.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="Goron003"), 'offsetY': 0.0})
    Goron003.ActiveteLinkedActor({'index': 0})
    Goron003.GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': 'wait01', 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    Timer.Wait({'time': 2.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    Timer.Wait({'time': 0.5})
    Goron003.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaC:Carry_Valcano010_076', 'selfTalkAnimName': 'talk02', 'playerTalkAnim': False, 'facial': 'normal', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Goron003.SetFacialExpression({'expression': 'angry'})
    } {
        Goron003.Talk({'message': 'quest/QuestAreaC:Carry_Valcano010_080', 'getAttention': False})
    } {
        Goron003.PlayAnimation({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Goron003.Talk({'message': 'quest/QuestAreaC:Carry_Valcano010_090', 'getAttention': False})
    } {
        Goron003.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Goron003.Talk({'message': 'quest/QuestAreaC:Carry_Valcano010_100', 'getAttention': False})

    fork {
        Goron003.SetFacialExpression({'expression': 'smile'})
    } {
        Goron003.Talk({'message': 'quest/QuestAreaC:Carry_Valcano010_115', 'getAttention': False})
    } {
        Goron003.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    QuestSystem.SetProgress({'symbol': 'Carry_Valcano010:1471841963', 'isShowTelopInEvent': False, 'isFrontFade': False})
    QuestSystem.SetProgress({'symbol': 'Carry_Valcano010:1703732265', 'isShowTelopInEvent': False, 'isFrontFade': False})
    Goron003.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron003.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait02'})
    Goron003.SkipAutoTurn()
}
