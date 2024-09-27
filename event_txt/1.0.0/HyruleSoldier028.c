-------- EventFlow: HyruleSoldier028 --------

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult', 'GetLastResult4']
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['WarpToActorLinkedPoint']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['SetTalkCameraMode', 'LookAt2ActorsCenterAsTalker', 'Reset']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'GenericItemGetSequence', 'AddItem', 'SetInterestIkEnabled', 'AimDegreeAngle']
queries: []
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

Actor: HyruleSoldier028
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SetFacialExpression', 'PlayAnimationNoWait', 'TalkKeep', 'PlayAnimation', 'AimPlayer', 'SetInterestIkEnabled', 'AimActor', 'WarpToActorLinkedPoint', 'Deactivate', 'Destroy', 'SetTalkerName', 'ResetFacialExpression', 'SetComponentActive', 'SetInstanceVariableString']
queries: []
params: None

Actor: HyruleSoldier013
entrypoint: None()
actions: ['SetFacialExpression', 'ResetFacialExpression', 'SetInterestIkEnabled', 'AimActor', 'AimDegreeAngle', 'AimPlayer']
queries: []
params: None

Actor: MinisterRight
entrypoint: None()
actions: ['Activate', 'SetInstanceVariableBool', 'MoveToLinkedPoint', 'Talk', 'PlayAnimationNoWait', 'SetFacialExpression', 'AimActor', 'TalkKeep', 'WarpToActorLinkedPoint', 'AimCompassPoint', 'SetInterestIkEnabled', 'SetTalkerName', 'Deactivate', 'Destroy', 'AimPlayer', 'ResetFacialExpression', 'MoveToCompassPoint']
queries: []
params: None

Actor: HyruleSoldierMystery_Forest010
entrypoint: None()
actions: ['Activate', 'SetInstanceVariableBool', 'AimActor', 'Talk', 'PlayAnimationNoWait', 'SetFacialExpression', 'TalkKeep', 'SetTalkerName', 'PlayAnimation', 'Deactivate', 'Destroy', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['WaitMoveDone', 'MoveToDefaultPosition', 'EnableAutoMovement', 'PlayAnimationNoWait', 'AimActor', 'SetInterestIkEnabled']
queries: []
params: None

Actor: TransitCounters
entrypoint: None()
actions: ['SetValue']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['StopAllBGM', 'Prepare', 'PlayBGM', 'PlayZoneBGM']
queries: []
params: None

void Special_HyruleCastle050_020() {
    HyruleSoldier028.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': 'sad', 'message': 'quest/QuestAreaA:Special_HyruleCastle050_020', 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk010() {
    Camera.SetTalkCameraMode({'isFar': True})
    HyruleSoldier028.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:SoldierBTalk01_010', 'keepPersonalSpace': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HyruleSoldier028.SetFacialExpression({'expression': 'smile'})
    HyruleSoldier028.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier028.Talk({'message': 'scenario/HylianGeneralTalk:SoldierBTalk01_020', 'getAttention': False})
}

void talk020() {
    HyruleSoldier028.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:SoldierBTalk02_010', 'facial': 'sad', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HyruleSoldier028.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier028.Talk({'message': 'scenario/HylianGeneralTalk:SoldierBTalk02_020', 'getAttention': False})
}

void talk030() {
    HyruleSoldier028.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': 'sad', 'message': 'scenario/HylianGeneralTalk:HylianSoldier001Talk030_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Mystery_Forest010() {

    call EvResetCommon.AllReset()


    fork {
        HyruleSoldier028.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaPlains:Mystery_Forest010_010', 'selfTalkAnimName': 'think', 'playerTalkAnim': False, 'aimToPlayer': False, 'keepTalk': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    } {
        HyruleSoldier028.SetInterestIkEnabled({'enable': False})
    }


    fork {
        HyruleSoldier028.PlayAnimationNoWait({'name': 'salute,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier028.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest010_020', 'getAttention': False})
    } {
        HyruleSoldier028.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        HyruleSoldier028.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest010_025', 'getAttention': False})
    } {
        HyruleSoldier028.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier028.SetInterestIkEnabled({'enable': False})
    }


    fork {
        HyruleSoldier028.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest010_030', 'getAttention': False})
    } {
        HyruleSoldier028.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        HyruleSoldier028.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest010_050', 'getAttention': False})
    } {
        HyruleSoldier028.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier028.SetTalkerName({'message': 'glossary/Character:SoldierB', 'keep': False})
    }


    fork {
        HyruleSoldier028.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest010_060', 'getAttention': False})
    } {
        HyruleSoldier028.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        HyruleSoldier028.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest010_065', 'getAttention': False})
    } {
        HyruleSoldier028.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        HyruleSoldier028.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest010_067', 'getAttention': False})
    } {
        HyruleSoldier028.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier028.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        HyruleSoldier028.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest010_070', 'getAttention': False})
    } {
        HyruleSoldier028.PlayAnimationNoWait({'name': 'search,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest010_Q1', 'getAttention': False})
    } {
        HyruleSoldier028.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        fork {
            HyruleSoldier028.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest010_Q1_A1_010', 'getAttention': False})
        } {
            HyruleSoldier028.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier028.SetFacialExpression({'expression': 'smile'})
        }

        Event88:

        fork {
            HyruleSoldier028.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest010_Q1_A1_020', 'getAttention': False})
        } {
            HyruleSoldier028.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier028.SetFacialExpression({'expression': 'normal'})
        }


        fork {
            HyruleSoldier028.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest010_Q1_A1_030', 'getAttention': False})
        } {
            HyruleSoldier028.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest010_Q1_A1_040', 'getAttention': False})
        } {
            HyruleSoldier028.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier028.SetFacialExpression({'expression': 'sad'})
        }

        QuestSystem.SetProgress({'symbol': 'Mystery_Forest010:1272034993', 'isShowTelopInEvent': False, 'isFrontFade': False})
        HyruleSoldier028.SetInstanceVariableString({'name': 'idleAnim', 'value': '$wait'})
        HyruleSoldier028.SetComponentActive({'name': 'aimControlComp', 'active': True})
    } else {

        fork {
            HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest010_Q1_A2_010', 'getAttention': False})
        } {
            HyruleSoldier028.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier028.SetFacialExpression({'expression': 'surprise'})
        }


        fork {
            HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest010_Q1_A2_020', 'getAttention': False})
        } {
            HyruleSoldier028.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier028.SetFacialExpression({'expression': 'normal'})
        }

        HyruleSoldier028.SetInstanceVariableString({'name': 'idleAnim', 'value': '$wait'})
        HyruleSoldier028.SetComponentActive({'name': 'aimControlComp', 'active': True})
    }
}

void Mystery_Forest020_OrderSoldier() {

    call EvResetCommon.AllReset()

    HyruleSoldier028.SetTalkerName({'message': 'glossary/Character:SoldierB', 'keep': False})

    fork {
        HyruleSoldier028.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': 'sad', 'message': 'quest/QuestAreaPlains:Mystery_Forest020_OrderSoldier_010', 'selfTalkAnimName': 'think', 'keepTalk': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    } {
        HyruleSoldier028.SetInterestIkEnabled({'enable': False})
    }


    fork {
        HyruleSoldier028.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest020_OrderSoldier_020', 'getAttention': False})
    } {
        HyruleSoldier028.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_OrderSoldier_030', 'getAttention': False})
    } {
        HyruleSoldier028.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void Mystery_Forest010Again() {

    call EvResetCommon.AllReset()

    HyruleSoldier028.SetTalkerName({'message': 'glossary/Character:SoldierB', 'keep': False})

    fork {
        HyruleSoldier028.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': 'sad', 'selfTalkAnimName': 'no,wait', 'message': 'quest/QuestAreaPlains:Mystery_Forest010Again_010', 'keepTalk': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    } {
        HyruleSoldier028.SetInterestIkEnabled({'enable': False})
    }


    fork {
        HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest010Again_010_Q1', 'getAttention': False})
    } {
        HyruleSoldier028.PlayAnimationNoWait({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier028.SetFacialExpression({'expression': 'surprise'})
    }

    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        fork {
            HyruleSoldier028.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest010Again_010_Q1_A1_010', 'getAttention': False})
        } {
            HyruleSoldier028.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier028.SetFacialExpression({'expression': 'smile'})
        }

        goto Event88
    } else {

        fork {
            HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest010Again_010_Q1_A2_010', 'getAttention': False})
        } {
            HyruleSoldier028.PlayAnimation({'name': 'no', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier028.SetFacialExpression({'expression': 'sad'})
        }

    }
}

void Mystery_Forest040() {

    call EvResetCommon.AllReset()

    HyruleSoldier028.SetTalkerName({'message': 'glossary/Character:SoldierB', 'keep': False})
    switch QuestSystem.CheckProgress({'symbol': 'LastDungeon:3474672201'}) {
      case 4294967295:
        Event111:

        fork {
            HyruleSoldier028.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaPlains:Mystery_Forest040_Q1', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            HyruleSoldier028.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier028.SetFacialExpression({'expression': 'normal'})
        }

        if !Dialog.GetLastResult({'resultOnSkip': 1}) {

            fork {
                HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest040_Q1_A1_010', 'getAttention': False})
            } {
                HyruleSoldier028.SetInterestIkEnabled({'enable': False})
                HyruleSoldier028.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HyruleSoldier028.SetFacialExpression({'expression': 'smile'})
            }

            Fade.StartPreset({'preset': 'FadeOutSlowB'})

            call EvResetCommon.AllReset()

            Zelda.WarpToActorLinkedPoint({'index': 2, 'actor': ActorIdentifier(name="HyruleSoldier028"), 'offsetY': 0.0})
            Player.AimActor({'duration': 0.0, 'withoutTurn': False, 'actor': ActorIdentifier(name="HyruleSoldier028"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            HyruleSoldier028.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HyruleSoldier028"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
            HyruleSoldier013.SetInterestIkEnabled({'enable': True})
            HyruleSoldier013.AimDegreeAngle({'angle': 45.0, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
            Timer.Wait({'time': 2.0})
            Fade.StartPreset({'preset': 'FadeInSlow'})

            call Mystery_Forest020_Quiz()

        } else {
            Event120:

            fork {
                HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest040_Q1_A2_010', 'getAttention': False})
            } {
                HyruleSoldier028.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

        }
      case [0, 1]:
        switch QuestSystem.CheckProgress({'symbol': 'LastDungeon:3262011794'}) {
          case [4294967295, 0]:

            fork {
                HyruleSoldier028.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': 'sad', 'message': 'quest/QuestAreaPlains:Mystery_Forest040_NoMinisterRight_010', 'selfTalkAnimName': 'no,wait', 'keepTalk': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
                HyruleSoldier028.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
                HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest040_NoMinisterRight_020', 'getAttention': False})
            } {
                HyruleSoldier028.SetInterestIkEnabled({'enable': False})
            }

          case 1:
            goto Event111
        }
    }
}

void Mystery_Forest020_Wrong() {

    fork {
        HyruleSoldier028.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
    }

    HyruleSoldier028.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': 'sad', 'message': 'quest/QuestAreaPlains:Mystery_Forest040_Fail_010', 'selfTalkAnimName': 'think', 'cameraLookAt': False, 'keepTalk': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    HyruleSoldier028.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier028.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest040_Fail_020', 'getAttention': False})

    call Mystery_Forest020_Quiz()

}

void Mystery_Forest020_Correct() {

    fork {
        HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_010', 'getAttention': False})
    } {
        HyruleSoldier028.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier028.SetFacialExpression({'expression': 'smile'})
    }

    HyruleSoldier028.ResetFacialExpression()
    Timer.Wait({'time': 1.0})
    MinisterRight.SetInstanceVariableBool({'value': True, 'name': 'mc032_active'})
    MinisterRight.SetInterestIkEnabled({'enable': False})
    MinisterRight.Activate()
    MinisterRight.MoveToCompassPoint({'direction': 2, 'speed': 0, 'distance': 0.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    MinisterRight.SetInterestIkEnabled({'enable': True})
    MinisterRight.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.4000000059604645})

    fork {
        MinisterRight.MoveToLinkedPoint({'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'index': 0, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 0.4000000059604645})
    }


    fork {
        HyruleSoldier028.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.3999999761581421, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        MinisterRight.SetTalkerName({'message': 'glossary/Character:MinisterRight', 'keep': False})
    } {
        MinisterRight.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_020', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'smile'})
    } {
        MinisterRight.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_030', 'getAttention': False})
    } {
        HyruleSoldier028.PlayAnimationNoWait({'name': 'salute_st,salute_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})
        MinisterRight.AimActor({'actor': ActorIdentifier(name="HyruleSoldier028"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Player.AimActor({'actor': ActorIdentifier(name="HyruleSoldier028"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_040', 'getAttention': False})
    } {
        MinisterRight.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        MinisterRight.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'smile'})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        HyruleSoldier028.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier028.SetFacialExpression({'expression': 'smile'})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 2.0})

    fork {
        MinisterRight.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest050_050', 'getAttention': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'surprise'})
        MinisterRight.PlayAnimationNoWait({'name': 'surprised_st,surprised', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].PlayAnimationNoWait({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})
        HyruleSoldier028.SetFacialExpression({'expression': 'surprise'})
        HyruleSoldier028.PlayAnimationNoWait({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.AimActor({'actor': ActorIdentifier(name="HyruleSoldier028"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})

        fork {
            HyruleSoldier013.SetFacialExpression({'expression': 'surprise'})
        } {
            HyruleSoldier013.SetInterestIkEnabled({'enable': True})
            HyruleSoldier013.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_060', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'ev_angry_st,ev_angry_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'angry'})
    }

    HyruleSoldier028.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_070', 'getAttention': False})
    } {
        HyruleSoldier028.SetFacialExpression({'expression': 'sad'})
        HyruleSoldier028.PlayAnimationNoWait({'name': 'no,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier013.ResetFacialExpression()
        Timer.Wait({'time': 0.6000000238418579})
        HyruleSoldier013.AimDegreeAngle({'angle': 45.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'actor': ActorIdentifier(name="HyruleSoldier028"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].SetInterestIkEnabled({'enable': True})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="HyruleSoldier028"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HyruleSoldier028.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        MinisterRight.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest050_080', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'normal'})
    } {
        MinisterRight.SetInterestIkEnabled({'enable': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterRight.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        MinisterRight.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest050_090', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        MinisterRight.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest050_100', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_110', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.AimActor({'actor': ActorIdentifier(name="HyruleSoldier028"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_120', 'getAttention': False})
    } {
        HyruleSoldier028.PlayAnimationNoWait({'name': 'salute_st,salute_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="HyruleSoldier028"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier028"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Audio.StopAllBGM({'duration': 2.0})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    Audio.Prepare({'label': 'BGM_EV_COMMON5', 'kind': 0, 'volume': 1.0})

    fork {
        HyruleSoldier028.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="HyruleSoldier028"), 'index': 3, 'offsetY': 0.0})
        HyruleSoldier028.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="MinisterRight"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleSoldierMystery_Forest010.SetInstanceVariableBool({'value': True, 'name': 'mc032_active'})
        HyruleSoldierMystery_Forest010.Activate()
        HyruleSoldierMystery_Forest010.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="MinisterRight"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Zelda.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="HyruleSoldier028"), 'index': 2, 'offsetY': 0.0})
        Player.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="HyruleSoldier028"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MinisterRight.WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="MinisterRight"), 'offsetY': 0.0})
        MinisterRight.AimCompassPoint({'duration': 0.0, 'direction': 0, 'withoutTurn': False, 'immediateTurn': False})
        MinisterRight.ResetFacialExpression()
        MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="MinisterRight"), 'offsetZ': 1.0, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0})
    Timer.Wait({'time': 2.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})

    fork {
        HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_130', 'getAttention': False})
    } {
        HyruleSoldier028.PlayAnimationNoWait({'name': 'salute_st,salute_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        HyruleSoldierMystery_Forest010.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_140', 'getAttention': False})
    } {
        HyruleSoldierMystery_Forest010.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldierMystery_Forest010.SetFacialExpression({'expression': 'smile'})
    } {
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldierMystery_Forest010"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MinisterRight.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldierMystery_Forest010"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldierMystery_Forest010"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        HyruleSoldier028.PlayAnimationNoWait({'name': 'wait_spear', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_150', 'getAttention': False})
    } {
        HyruleSoldier028.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="HyruleSoldierMystery_Forest010"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleSoldierMystery_Forest010.SetFacialExpression({'expression': 'surprise'})
        HyruleSoldierMystery_Forest010.PlayAnimationNoWait({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldierMystery_Forest010.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="HyruleSoldier028"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier028"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        MinisterRight.SetInterestIkEnabled({'enable': True})
        MinisterRight.AimActor({'actor': ActorIdentifier(name="HyruleSoldier028"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier028"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 1.0})
    HyruleSoldierMystery_Forest010.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HyruleSoldierMystery_Forest010.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest050_160', 'getAttention': False})
    } {
        HyruleSoldierMystery_Forest010.SetFacialExpression({'expression': 'sad'})
        HyruleSoldierMystery_Forest010.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldierMystery_Forest010"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        MinisterRight.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldierMystery_Forest010"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldierMystery_Forest010"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        HyruleSoldierMystery_Forest010.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_170', 'getAttention': False})
    } {
        HyruleSoldierMystery_Forest010.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})
        MinisterRight.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_180', 'getAttention': False})
    } {
        HyruleSoldier028.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier028.SetFacialExpression({'expression': 'surprise'})
    } {
        HyruleSoldierMystery_Forest010.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier028"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier028"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Audio.PlayBGM({'label': 'BGM_EV_COMMON5', 'ignoreSkip': False, 'volume': 1.0})
    }

    HyruleSoldier028.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HyruleSoldierMystery_Forest010.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest050_190', 'getAttention': False})
    } {
        HyruleSoldierMystery_Forest010.SetFacialExpression({'expression': 'normal'})
        HyruleSoldierMystery_Forest010.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldierMystery_Forest010.AimActor({'actor': ActorIdentifier(name="HyruleSoldier028"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldierMystery_Forest010"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleSoldier028.ResetFacialExpression()
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldierMystery_Forest010"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        HyruleSoldierMystery_Forest010.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_200', 'getAttention': False})
    } {
        HyruleSoldierMystery_Forest010.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        HyruleSoldierMystery_Forest010.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest050_210', 'getAttention': False})
    } {
        HyruleSoldierMystery_Forest010.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        HyruleSoldierMystery_Forest010.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_220', 'getAttention': False})
    } {
        HyruleSoldierMystery_Forest010.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.0})
        MinisterRight.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HyruleSoldierMystery_Forest010.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_230', 'getAttention': False})
    } {
        HyruleSoldier028.PlayAnimationNoWait({'name': 'yes,think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier028"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier028"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        MinisterRight.ResetFacialExpression()
        MinisterRight.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_240', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        HyruleSoldier028.PlayAnimationNoWait({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier028.SetFacialExpression({'expression': 'surprise'})
        HyruleSoldier028.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="MinisterRight"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        HyruleSoldierMystery_Forest010.PlayAnimationNoWait({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldierMystery_Forest010.SetFacialExpression({'expression': 'surprise'})
        HyruleSoldierMystery_Forest010.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="MinisterRight"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier028.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier028.SetFacialExpression({'expression': 'normal'})
        HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_250', 'getAttention': False})
    } {
        HyruleSoldierMystery_Forest010.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldierMystery_Forest010.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        MinisterRight.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_260', 'getAttention': False})
    } {
        HyruleSoldier028.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        HyruleSoldierMystery_Forest010.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldierMystery_Forest010.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_270', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldierMystery_Forest010"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldierMystery_Forest010"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HyruleSoldierMystery_Forest010.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        MinisterRight.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest050_280', 'getAttention': False})
        MinisterRight.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest050_290', 'getAttention': False})
    } {
        HyruleSoldierMystery_Forest010.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_300', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldierMystery_Forest010.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        HyruleSoldierMystery_Forest010.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldierMystery_Forest010.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_310', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldierMystery_Forest010"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldierMystery_Forest010"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HyruleSoldierMystery_Forest010.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        MinisterRight.SetFacialExpression({'expression': 'smile'})
        MinisterRight.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_320', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HyruleSoldier028.SetFacialExpression({'expression': 'surprise'})
        HyruleSoldier028.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldierMystery_Forest010.SetFacialExpression({'expression': 'surprise'})
        HyruleSoldierMystery_Forest010.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'actor': ActorIdentifier(name="HyruleSoldierMystery_Forest010"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleSoldierMystery_Forest010.SetTalkerName({'message': 'glossary/Character:QuestSoldier', 'keep': False})
        HyruleSoldierMystery_Forest010.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldierMystery_Forest010.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest050_330', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        HyruleSoldier028.SetFacialExpression({'expression': 'normal'})
        HyruleSoldier028.SetInterestIkEnabled({'enable': True})
        HyruleSoldier028.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldierMystery_Forest010"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldierMystery_Forest010"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        HyruleSoldierMystery_Forest010.SetFacialExpression({'expression': 'smile'})
    } {
        HyruleSoldierMystery_Forest010.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_340', 'getAttention': False})
    } {
        HyruleSoldierMystery_Forest010.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Timer.Wait({'time': 0.4000000059604645})
        MinisterRight.ResetFacialExpression()
        MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="HyruleSoldier028"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleSoldier028.SetFacialExpression({'expression': 'normal'})
        HyruleSoldier028.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_350', 'getAttention': False})
    } {
        HyruleSoldierMystery_Forest010.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldierMystery_Forest010.SetInterestIkEnabled({'enable': True})
        HyruleSoldierMystery_Forest010.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="HyruleSoldier028"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier028"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier028"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleSoldier028.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        MinisterRight.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_360', 'getAttention': False})
    } {
        HyruleSoldier028.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldierMystery_Forest010.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldierMystery_Forest010.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="MinisterRight"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterRight.SetFacialExpression({'expression': 'smile'})
    MinisterRight.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterRight.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_370', 'getAttention': False})
    MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        MinisterRight.SetFacialExpression({'expression': 'normal'})
        MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_380', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier028"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleSoldier028.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier028.SetInterestIkEnabled({'enable': True})
        HyruleSoldier028.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldierMystery_Forest010"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier028"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        MinisterRight.SetInterestIkEnabled({'enable': True})
        MinisterRight.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="HyruleSoldierMystery_Forest010"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        HyruleSoldier028.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier028.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="HyruleSoldierMystery_Forest010"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleSoldierMystery_Forest010.PlayAnimationNoWait({'name': 'salute_st,salute_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldierMystery_Forest010.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="HyruleSoldier028"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'actor': ActorIdentifier(name="HyruleSoldierMystery_Forest010"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleSoldierMystery_Forest010.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_390', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldierMystery_Forest010"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        MinisterRight.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="HyruleSoldier028"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleSoldier028.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_400', 'getAttention': False})
    } {
        HyruleSoldierMystery_Forest010.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'actor': ActorIdentifier(name="HyruleSoldier028"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier028"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        MinisterRight.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        MinisterRight.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest050_410', 'getAttention': False})
        MinisterRight.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest050_420', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Player.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="MinisterRight"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.AddItem({'itemKey': 'SmoothieIngredient15', 'count': 1, 'index': -1, 'autoEquip': False})
    Player.GenericItemGetSequence({'itemKey': 'SmoothieIngredient15', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Player.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'actor2': ActorIdentifier(name="Player"), 'actor1': ActorIdentifier(name="MinisterRight"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        MinisterRight.SetFacialExpression({'expression': 'smile'})
        MinisterRight.PlayAnimationNoWait({'name': 'salute,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest050_430', 'getAttention': False})
    } {
        Partner[companion].WaitMoveDone({'timeout': 3.0})
        Partner[companion].MoveToDefaultPosition({'speed': 1, 'avoidPlayer': True, 'position': 1, 'tolerance': 0.0, 'avoidWall': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Partner[companion].EnableAutoMovement()
    }

    MinisterRight.ResetFacialExpression()
    MinisterRight.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="HyruleSoldierMystery_Forest010"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        MinisterRight.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_440', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.5})
        HyruleSoldier028.SetFacialExpression({'expression': 'normal'})
        HyruleSoldier028.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="MinisterRight"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        HyruleSoldierMystery_Forest010.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="MinisterRight"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        HyruleSoldierMystery_Forest010.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldierMystery_Forest010.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier028.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="HyruleSoldierMystery_Forest010"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleSoldierMystery_Forest010.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldierMystery_Forest010.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest050_450', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldierMystery_Forest010"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldierMystery_Forest010"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Audio.StopAllBGM({'duration': 2.0})
    Timer.Wait({'time': 0.5})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})

    fork {
        MinisterRight.Deactivate()
        MinisterRight.Destroy()
    } {
        HyruleSoldier028.Deactivate()
        HyruleSoldier028.Destroy()
    } {
        HyruleSoldierMystery_Forest010.Deactivate()
        HyruleSoldierMystery_Forest010.Destroy()
    } {
        Player.AimDegreeAngle({'duration': 0.0, 'angle': 20.0, 'withoutTurn': False, 'immediateTurn': False})
    } {
        HyruleSoldier013.AimPlayer({'withoutTurn': True, 'duration': 0.0, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    QuestSystem.SetProgress({'symbol': 'Mystery_Forest010:1887669916', 'isShowTelopInEvent': False, 'isFrontFade': False})
    TransitCounters.SetValue({'key': 'mc032Clear', 'value': 1})
    TransitCounters.SetValue({'value': 1, 'key': 'mc032Clear018'})
    Audio.PlayZoneBGM({'stopbgm': False})
}

void Mystery_Forest020_Quiz() {
    Event114:

    fork {
        HyruleSoldier028.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest040_Q2', 'getAttention': False})
    } {
        HyruleSoldier028.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier028.SetFacialExpression({'expression': 'normal'})
    }

    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:

        call Quiz_Answer1()

      case 1:

        call Quiz_Answer2()

      case 2:

        call Quiz_Answer3()

      case 3:
        goto Event120
    }
}

void Quiz_Answer1() {
    HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest040_Q3', 'getAttention': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case [0, 1]:

        call Mystery_Forest020_Wrong()

      case 2:
        HyruleSoldier028.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        call Mystery_Forest020_Correct()

      case 3:
        goto Event114
    }
}

void Quiz_Answer2() {
    HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest040_Q3', 'getAttention': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case [0, 1, 2]:

        call Mystery_Forest020_Wrong()

      case 3:
        goto Event114
    }
}

void Quiz_Answer3() {
    HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest040_Q3', 'getAttention': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case [0, 1, 2]:

        call Mystery_Forest020_Wrong()

      case 3:
        goto Event114
    }
}
