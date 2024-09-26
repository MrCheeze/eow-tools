-------- EventFlow: HyruleSoldier --------

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

Actor: Camera
entrypoint: None()
actions: ['LookAt3ActorsCenterAsTalker', 'Reset', 'SetTalkCameraMode']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: Player
entrypoint: None()
actions: ['WarpToActorLinkedPoint', 'AimActor', 'AddItem', 'GenericItemGetSequence', 'AimCompassPoint']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor', 'WarpToActor']
queries: []
params: None

Actor: HyruleSoldier020
entrypoint: None()
actions: ['AimActor', 'Talk', 'GenericTalkSequence', 'Activate', 'Deactivate', 'SetTalkerName', 'GenericTalkSequenceWithDialog', 'PlayAnimation']
queries: []
params: None

Actor: HyruleSoldier[solB]
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SetFacialExpression', 'TalkKeep', 'PlayAnimationNoWait', 'PlayAnimation', 'GenericTalkSequence', 'WarpToActorLinkedPoint', 'AimActor', 'LookAtTalker', 'Destroy', 'SetTalkerName', 'AimPlayer']
queries: []
params: None

Actor: HyruleSoldier019[sol19]
entrypoint: None()
actions: ['AimActor', 'Talk', 'SetTalkerName', 'PlayAnimation', 'SetFacialExpression']
queries: []
params: None

Actor: HyruleSoldier[Quest]
entrypoint: None()
actions: ['AimActor', 'Talk', 'PlayAnimation', 'SetTalkerName', 'SetFacialExpression', 'Destroy']
queries: []
params: None

Actor: HyruleSoldier010
entrypoint: None()
actions: ['AimActor', 'Talk', 'GenericTalkSequence', 'AimCompassPoint', 'SetFacialExpression', 'PlayAnimation', 'SetTalkerName']
queries: []
params: None

Actor: MinisterRight
entrypoint: None()
actions: ['Talk', 'SetFacialExpression', 'PlayAnimation', 'MoveToTargetLinkedPoint', 'AimActor', 'Destroy', 'Activate']
queries: []
params: None

void QuestStart1() {
    HyruleSoldier[solB].GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaPlains:Mystery_Forest010_010', 'selfTalkAnimName': 'think', 'playerTalkAnim': False, 'aimToPlayer': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        HyruleSoldier[solB].PlayAnimationNoWait({'name': 'salute,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier[solB].TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest010_020', 'getAttention': False})
    } {
        HyruleSoldier[solB].AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HyruleSoldier[solB].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier[solB].TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest010_025', 'getAttention': False})
    HyruleSoldier[solB].GenericTalkSequence({'playerTalkAnim': False, 'facial': 'normal', 'selfTalkAnimName': 'talk', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    HyruleSoldier[solB].TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest010_030', 'getAttention': False})
    HyruleSoldier[solB].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier[solB].TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest010_050', 'getAttention': False})
    HyruleSoldier[solB].PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier[solB].TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest010_060', 'getAttention': False})
    HyruleSoldier[solB].SetFacialExpression({'expression': 'sad'})
    HyruleSoldier[solB].PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier[solB].TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest010_067', 'getAttention': False})
    HyruleSoldier[solB].PlayAnimationNoWait({'name': 'search,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier[solB].TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest010_070', 'getAttention': False})

    fork {
        HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest010_Q1', 'getAttention': False})
    } {
        HyruleSoldier[solB].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Event192:
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        HyruleSoldier[solB].SetFacialExpression({'expression': 'smile'})
        HyruleSoldier[solB].PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier[solB].TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest010_Q1_A1_010', 'getAttention': False})
        HyruleSoldier[solB].SetFacialExpression({'expression': 'normal'})
        HyruleSoldier[solB].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier[solB].TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest010_Q1_A1_020', 'getAttention': False})
        HyruleSoldier[solB].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier[solB].TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest010_Q1_A1_030', 'getAttention': False})
        HyruleSoldier[solB].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest010_Q1_A1_040', 'getAttention': False})
        QuestSystem.SetProgress({'symbol': 'Mystery_Forest010:1272034993', 'isShowTelopInEvent': False, 'isFrontFade': False})
    } else {

        fork {
            HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest010_Q1_A2_010', 'getAttention': False})
        } {
            HyruleSoldier[solB].PlayAnimation({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest010_Q1_A2_020', 'getAttention': False})
        } {
            HyruleSoldier[solB].GenericTalkSequence({'playerTalkAnim': False, 'facial': 'smile', 'selfTalkAnimName': 'think', 'aimToPlayer': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        }

    }
}

void sol19() {
    HyruleSoldier[solB].SetFacialExpression({'expression': 'smile'})
    HyruleSoldier[solB].SetTalkerName({'message': 'glossary/Character:SoldierB', 'keep': False})
    HyruleSoldier[solB].GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaPlains:Mystery_Forest020_060', 'selfTalkAnimName': 'salute,wait', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    if !EventFlags.CheckFlag({'symbol': 'SoldierQuestClear04'}) {

        fork {
            HyruleSoldier[solB].SetFacialExpression({'expression': 'normal'})
        } {
            HyruleSoldier[solB].WarpToActorLinkedPoint({'actor': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'index': 6, 'offsetY': 0.0})
        } {
            Player.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'index': 7, 'offsetY': 0.0})
        } {
            Player.AimActor({'actor': ActorIdentifier(name="HyruleSoldier019", sub_name="sol19"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            HyruleSoldier[solB].AimActor({'actor': ActorIdentifier(name="HyruleSoldier019", sub_name="sol19"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].WarpToActor({'distance': 1.0, 'offsetY': 1.2999999523162842, 'actor': ActorIdentifier(name="Player"), 'offsetX': 0.0})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="HyruleSoldier019", sub_name="sol19"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.5})
        } {
            Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'actor2': ActorIdentifier(name="Player"), 'actor3': ActorIdentifier(name="HyruleSoldier019", sub_name="sol19"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        }

        Fade.StartPreset({'preset': 'FadeInSlow'})
        HyruleSoldier019[sol19].SetTalkerName({'message': 'glossary/Character:HyruleSoldier019', 'keep': False})

        fork {
            HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_190', 'getAttention': False})
        } {
            HyruleSoldier[solB].GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnimName': 'talk,wait', 'aimToPlayer': False, 'aimFromPlayer': False, 'keepPersonalSpace': True, 'cameraLookAt': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        }

        HyruleSoldier019[sol19].AimActor({'actor': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

        fork {
            HyruleSoldier019[sol19].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_200', 'getAttention': False})
        } {
            HyruleSoldier019[sol19].PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier019[sol19].SetFacialExpression({'expression': 'surprise'})
        }


        fork {
            HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_210', 'getAttention': False})
        } {
            HyruleSoldier[solB].PlayAnimation({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        HyruleSoldier019[sol19].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_220', 'getAttention': False})

        fork {
            HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_230', 'getAttention': False})
        } {
            HyruleSoldier[solB].PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HyruleSoldier019[sol19].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_240', 'getAttention': False})
        } {
            HyruleSoldier019[sol19].PlayAnimation({'name': 'talk,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier019[sol19].SetFacialExpression({'expression': 'smile'})
        }


        fork {
            HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_250', 'getAttention': False})
        } {
            HyruleSoldier[solB].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Fade.StartPreset({'preset': 'FadeOutSlowB'})

        fork {
            Timer.Wait({'time': 0.5})
        } {
            HyruleSoldier[solB].WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'offsetY': 0.0})
        } {
            Player.WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'offsetY': 0.0})
            Partner[companion].WarpToActor({'distance': 1.0, 'offsetY': 1.2999999523162842, 'actor': ActorIdentifier(name="Player"), 'offsetX': 0.0})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Player.AimActor({'actor': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            HyruleSoldier[solB].AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
        }

        HyruleSoldier[solB].LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        Fade.StartPreset({'preset': 'FadeInSlow'})

        fork {
            HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_260', 'getAttention': False})
        } {
            HyruleSoldier[solB].GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnimName': 'talk', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        }


        fork {
            HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_270', 'getAttention': False})
        } {
            HyruleSoldier[solB].GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnimName': 'no,wait', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        }


        fork {
            HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_280', 'getAttention': False})
        } {
            HyruleSoldier[solB].PlayAnimation({'name': 'talk,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_090', 'getAttention': False})
        } {
            HyruleSoldier[solB].GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnimName': 'salute,wait', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        }

        EventFlags.SetFlag({'value': True, 'symbol': 'SoldierQuestClear04'})
    } else {

        call Second()

    }
}

void Second() {
    HyruleSoldier[solB].SetTalkerName({'message': 'glossary/Character:SoldierB', 'keep': False})

    fork {
        Timer.Wait({'time': 2.0})
    } {
        HyruleSoldier[solB].GenericTalkSequence({'facial': 'nomal', 'selfTalkAnimName': 'think', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    }

    Fade.StartPreset({'preset': 'FadeInSlow'})
    HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_070', 'getAttention': False})

    fork {
        HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_080', 'getAttention': False})
    } {
        HyruleSoldier[solB].GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnimName': 'talk', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    }


    fork {
        HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_090', 'getAttention': False})
    } {
        HyruleSoldier[solB].GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnimName': 'salute,wait', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    }

}

void sol010() {
    HyruleSoldier[solB].SetFacialExpression({'expression': 'smile'})
    HyruleSoldier[solB].SetTalkerName({'message': 'glossary/Character:SoldierB', 'keep': False})
    HyruleSoldier[solB].GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaPlains:Mystery_Forest020_060', 'selfTalkAnimName': 'salute,wait', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    if !EventFlags.CheckFlag({'symbol': 'SoldierQuestClear03'}) {

        fork {
            HyruleSoldier[solB].SetFacialExpression({'expression': 'normal'})
        } {
            HyruleSoldier[solB].WarpToActorLinkedPoint({'index': 4, 'actor': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'offsetY': 0.0})
        } {
            Player.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'index': 5, 'offsetY': 0.0})
        } {
            Player.AimActor({'actor': ActorIdentifier(name="HyruleSoldier010"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            HyruleSoldier[solB].AimActor({'actor': ActorIdentifier(name="HyruleSoldier010"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].WarpToActor({'distance': 1.0, 'actor': ActorIdentifier(name="Player"), 'offsetY': 1.2999999523162842, 'offsetX': 0.0})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="HyruleSoldier010"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.5})
        } {
            Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'actor2': ActorIdentifier(name="Player"), 'actor3': ActorIdentifier(name="HyruleSoldier010"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        } {
            HyruleSoldier010.SetFacialExpression({'expression': 'sleep'})
        }

        Fade.StartPreset({'preset': 'FadeInSlow'})
        HyruleSoldier010.SetTalkerName({'message': 'glossary/Character:SoldierJ', 'keep': False})

        fork {
            HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_290', 'getAttention': False})
        } {
            HyruleSoldier[solB].GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnimName': 'talk,wait', 'aimFromPlayer': False, 'aimToPlayer': False, 'cameraLookAt': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        }

        HyruleSoldier010.SetFacialExpression({'expression': 'surprise'})
        HyruleSoldier010.AimActor({'actor': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

        fork {
            HyruleSoldier010.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_300', 'getAttention': False})
        } {
            HyruleSoldier010.GenericTalkSequence({'playerTalkAnim': False, 'aimToPlayer': False, 'aimFromPlayer': False, 'selfTalkAnimName': 'no,wait', 'cameraLookAt': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        } {
            HyruleSoldier010.SetFacialExpression({'expression': 'sad'})
        }

        HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_310', 'getAttention': False})

        fork {
            HyruleSoldier010.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_320', 'getAttention': False})
        } {
            HyruleSoldier010.AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
            HyruleSoldier010.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_330', 'getAttention': False})
        } {
            HyruleSoldier[solB].GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnimName': 'think', 'aimToPlayer': False, 'aimFromPlayer': False, 'cameraLookAt': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        }


        fork {
            HyruleSoldier010.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_340', 'getAttention': False})
        } {
            HyruleSoldier010.GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnimName': 'talk,wait', 'aimFromPlayer': False, 'aimToPlayer': False, 'cameraLookAt': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        } {
            HyruleSoldier010.AimActor({'actor': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        fork {
            HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_350', 'getAttention': False})
        } {
            HyruleSoldier[solB].GenericTalkSequence({'playerTalkAnim': False, 'aimToPlayer': False, 'aimFromPlayer': False, 'cameraLookAt': False, 'selfTalkAnimName': 'think', 'facial': 'smile', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        }


        fork {
            HyruleSoldier010.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_360', 'getAttention': False})
        } {
            HyruleSoldier010.GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnimName': 'talk,wait', 'aimFromPlayer': False, 'aimToPlayer': False, 'cameraLookAt': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        }


        fork {
            HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_370', 'getAttention': False})
        } {
            HyruleSoldier[solB].GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnimName': 'talk,wait', 'aimFromPlayer': False, 'aimToPlayer': False, 'cameraLookAt': False, 'facial': 'normal', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        }


        fork {
            HyruleSoldier010.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_380', 'getAttention': False})
        } {
            HyruleSoldier010.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HyruleSoldier010.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_390', 'getAttention': False})
        } {
            HyruleSoldier010.PlayAnimation({'name': 'talk,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_395', 'getAttention': False})
        } {
            HyruleSoldier[solB].PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HyruleSoldier010.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_396', 'getAttention': False})
        } {
            HyruleSoldier010.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HyruleSoldier010.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_400', 'getAttention': False})
        } {
            HyruleSoldier010.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier010.SetFacialExpression({'expression': 'smile'})
        }

        Fade.StartPreset({'preset': 'FadeOutSlowB'})

        fork {
            Timer.Wait({'time': 0.5})
        } {
            HyruleSoldier[solB].WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'offsetY': 0.0})
        } {
            Player.WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'offsetY': 0.0})
            Partner[companion].WarpToActor({'distance': 1.0, 'offsetY': 1.2999999523162842, 'actor': ActorIdentifier(name="Player"), 'offsetX': 0.0})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Player.AimActor({'actor': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            HyruleSoldier[solB].AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
        }

        HyruleSoldier[solB].LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        Fade.StartPreset({'preset': 'FadeInSlow'})

        fork {
            HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_410', 'getAttention': False})
        } {
            HyruleSoldier[solB].GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnimName': 'think', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        }

        HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_420', 'getAttention': False})

        fork {
            HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_090', 'getAttention': False})
        } {
            HyruleSoldier[solB].GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnimName': 'salute,wait', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        }

        EventFlags.SetFlag({'value': True, 'symbol': 'SoldierQuestClear03'})
    } else {

        call Second()

    }
}

void Clear() {
    HyruleSoldier[solB].SetFacialExpression({'expression': 'smile'})
    HyruleSoldier[solB].SetTalkerName({'message': 'glossary/Character:SoldierB', 'keep': False})
    HyruleSoldier[solB].GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaPlains:Mystery_Forest020_060', 'selfTalkAnimName': 'salute,wait', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    HyruleSoldier[Quest].SetTalkerName({'message': 'Talker:QuestSoldier', 'keep': False})

    fork {
        HyruleSoldier[solB].SetFacialExpression({'expression': 'normal'})
    } {
        HyruleSoldier[solB].WarpToActorLinkedPoint({'actor': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'index': 3, 'offsetY': 0.0})
    } {
        Player.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'index': 2, 'offsetY': 0.0})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="HyruleSoldier", sub_name="Quest"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleSoldier[solB].AimActor({'actor': ActorIdentifier(name="HyruleSoldier", sub_name="Quest"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].WarpToActor({'distance': 1.0, 'actor': ActorIdentifier(name="Player"), 'offsetY': 1.2999999523162842, 'offsetX': 0.0})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="HyruleSoldier", sub_name="Quest"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
    } {
        Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'actor2': ActorIdentifier(name="Player"), 'actor3': ActorIdentifier(name="HyruleSoldier", sub_name="Quest"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    Fade.StartPreset({'preset': 'FadeInSlow'})

    fork {
        HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_010', 'getAttention': False})
    } {
        HyruleSoldier[solB].PlayAnimation({'name': 'wait_spear', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HyruleSoldier[Quest].AimActor({'actor': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        HyruleSoldier[Quest].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_020', 'getAttention': False})
    } {
        HyruleSoldier[Quest].PlayAnimation({'name': 'salute,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_030', 'getAttention': False})

    fork {
        HyruleSoldier[Quest].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_040', 'getAttention': False})
    } {
        HyruleSoldier[Quest].PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_050', 'getAttention': False})
    HyruleSoldier[Quest].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HyruleSoldier[Quest].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_060', 'getAttention': False})
    } {
        HyruleSoldier[Quest].PlayAnimation({'name': 'talk,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier[Quest].SetFacialExpression({'expression': 'surprise'})
    }

    HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_070', 'getAttention': False})
    HyruleSoldier[Quest].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_080', 'getAttention': False})
    Timer.Wait({'time': 2.0})

    fork {
        HyruleSoldier[Quest].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_085', 'getAttention': False})
    } {
        HyruleSoldier[Quest].PlayAnimation({'name': 'salute,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier[Quest].SetFacialExpression({'expression': 'sad'})
    }


    fork {
        HyruleSoldier[Quest].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_090', 'getAttention': False})
    } {
        HyruleSoldier[Quest].PlayAnimation({'name': 'talk,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    EventFlags.SetFlag({'symbol': 'SoldierQuestDeku', 'value': True})

    fork {
        HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_100', 'getAttention': False})
    } {
        HyruleSoldier[solB].PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier[solB].SetFacialExpression({'expression': 'sad'})
    }


    fork {
        HyruleSoldier[Quest].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_110', 'getAttention': False})
    } {
        HyruleSoldier[Quest].PlayAnimation({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        HyruleSoldier[Quest].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_120', 'getAttention': False})
    } {
        HyruleSoldier[Quest].PlayAnimation({'name': 'talk,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_130', 'getAttention': False})

    fork {
        HyruleSoldier[Quest].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_140', 'getAttention': False})
    } {
        HyruleSoldier[Quest].PlayAnimation({'name': 'talk,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HyruleSoldier[solB].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_150', 'getAttention': False})
    } {
        HyruleSoldier[solB].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HyruleSoldier[solB].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterRight.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_160', 'getAttention': False})
    MinisterRight.Activate()

    fork {
        HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_170', 'getAttention': False})
    } {
        HyruleSoldier[solB].PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier[solB].SetFacialExpression({'expression': 'surprise'})
    } {
        HyruleSoldier[solB].AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleSoldier[Quest].AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MinisterRight.MoveToTargetLinkedPoint({'index': 10, 'speed': 0, 'actor': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="MinisterRight"), 'actor3': ActorIdentifier(name="HyruleSoldier", sub_name="Quest"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_171', 'getAttention': False})
    } {
        MinisterRight.PlayAnimation({'name': 'talk,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        HyruleSoldier[Quest].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_172', 'getAttention': False})
    } {
        HyruleSoldier[Quest].PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier[Quest].SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_173', 'getAttention': False})
    } {
        MinisterRight.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_175', 'getAttention': False})
    } {
        MinisterRight.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'angry'})
    } {
        HyruleSoldier[Quest].SetFacialExpression({'expression': 'normal'})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_176', 'getAttention': False})
    } {
        MinisterRight.PlayAnimation({'name': 'talk,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        HyruleSoldier[Quest].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_177', 'getAttention': False})
    } {
        HyruleSoldier[Quest].PlayAnimation({'name': 'salute,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier[Quest].SetFacialExpression({'expression': 'angry'})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_180', 'getAttention': False})
    } {
        MinisterRight.PlayAnimation({'name': 'talk,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        HyruleSoldier[Quest].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_190', 'getAttention': False})
    } {
        HyruleSoldier[Quest].PlayAnimation({'name': 'salute,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_193', 'getAttention': False})
    } {
        HyruleSoldier[solB].PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier[solB].SetFacialExpression({'expression': 'sad'})
    } {
        Player.AimCompassPoint({'direction': 3, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    MinisterRight.AimActor({'actor': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_195', 'getAttention': False})
    } {
        MinisterRight.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'angry'})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_196', 'getAttention': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'smile'})
    }

    HyruleSoldier[solB].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_197', 'getAttention': False})
    } {
        HyruleSoldier[solB].PlayAnimation({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Player.AimCompassPoint({'direction': 3, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    HyruleSoldier[Quest].AimActor({'actor': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        HyruleSoldier[Quest].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_198', 'getAttention': False})
    } {
        HyruleSoldier[Quest].PlayAnimation({'name': 'talk,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier[Quest].SetFacialExpression({'expression': 'smile'})
    }

    HyruleSoldier[solB].AimActor({'actor': ActorIdentifier(name="HyruleSoldier", sub_name="Quest"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_200', 'getAttention': False})
    } {
        HyruleSoldier[solB].PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier[solB].SetFacialExpression({'expression': 'angry'})
    }

    HyruleSoldier[solB].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_210', 'getAttention': False})
    } {
        HyruleSoldier[solB].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier[solB].SetFacialExpression({'expression': 'normal'})
    } {
        Player.AimCompassPoint({'direction': 3, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    HyruleSoldier[solB].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.AddItem({'autoEquip': False, 'itemKey': 'RupeeSilver', 'index': -1, 'count': 1})
    Player.GenericItemGetSequence({'itemKey': 'RupeeSilver', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Player.AimCompassPoint({'direction': 3, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="MinisterRight"), 'actor3': ActorIdentifier(name="HyruleSoldier", sub_name="Quest"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    HyruleSoldier[solB].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'facial': 'sad', 'keepPersonalSpace': False, 'cameraLookAt': False, 'aimFromPlayer': False, 'message': 'quest/QuestAreaPlains:Mystery_Forest030_220', 'selfTalkAnimName': 'salute,wait', 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    HyruleSoldier[solB].Destroy()
    HyruleSoldier[Quest].Destroy()
    MinisterRight.Destroy()
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    QuestSystem.SetProgress({'symbol': 'Mystery_Forest010:1887669916', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void sol20() {
    HyruleSoldier[solB].SetTalkerName({'message': 'glossary/Character:SoldierB', 'keep': False})
    HyruleSoldier[solB].SetFacialExpression({'expression': 'smile'})
    HyruleSoldier[solB].GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaPlains:Mystery_Forest020_060', 'selfTalkAnimName': 'salute,wait', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    if !EventFlags.CheckFlag({'symbol': 'SoldierQuestClear01'}) {
        HyruleSoldier020.Activate()
        HyruleSoldier020.SetTalkerName({'message': 'glossary/Character:HyruleSoldier020', 'keep': False})

        fork {
            HyruleSoldier[solB].SetFacialExpression({'expression': 'normal'})
        } {
            HyruleSoldier[solB].WarpToActorLinkedPoint({'index': 8, 'actor': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'offsetY': 0.0})
        } {
            Player.WarpToActorLinkedPoint({'index': 9, 'actor': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'offsetY': 0.0})
        } {
            Player.AimActor({'actor': ActorIdentifier(name="HyruleSoldier020"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            HyruleSoldier[solB].AimActor({'actor': ActorIdentifier(name="HyruleSoldier020"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].WarpToActor({'distance': 1.0, 'offsetY': 1.2999999523162842, 'actor': ActorIdentifier(name="Player"), 'offsetX': 0.0})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="HyruleSoldier020"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.5})
        } {
            Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'actor2': ActorIdentifier(name="Player"), 'actor3': ActorIdentifier(name="HyruleSoldier020"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        }

        Fade.StartPreset({'preset': 'FadeInSlow'})

        fork {
            HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_100', 'getAttention': False})
        } {
            HyruleSoldier[solB].GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnimName': 'talk,wait', 'aimToPlayer': False, 'aimFromPlayer': False, 'cameraLookAt': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        }

        HyruleSoldier020.AimActor({'actor': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

        fork {
            HyruleSoldier020.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_110', 'getAttention': False})
        } {
            HyruleSoldier020.GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnim': True, 'aimFromPlayer': False, 'aimToPlayer': False, 'cameraLookAt': False, 'selfTalkAnimName': 'no,wait', 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        }

        HyruleSoldier[solB].GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaPlains:Mystery_Forest020_120', 'playerTalkAnim': False, 'cameraLookAt': False, 'selfTalkAnimName': 'talk', 'aimFromPlayer': False, 'aimToPlayer': False, 'keepPersonalSpace': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

        fork {
            HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_130', 'getAttention': False})
        } {
            HyruleSoldier[solB].GenericTalkSequence({'playerTalkAnim': False, 'aimToPlayer': False, 'aimFromPlayer': False, 'cameraLookAt': False, 'selfTalkAnimName': 'wait', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        }


        fork {
            HyruleSoldier020.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_140', 'getAttention': False})
        } {
            HyruleSoldier020.GenericTalkSequence({'playerTalkAnim': False, 'aimToPlayer': False, 'aimFromPlayer': False, 'cameraLookAt': False, 'selfTalkAnimName': 'talk', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        }

        HyruleSoldier020.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaPlains:Mystery_Forest020_145', 'playerTalkAnim': False, 'aimFromPlayer': False, 'aimToPlayer': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'selfTalkAnimName': 'think', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

        fork {
            HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_150', 'getAttention': False})
        } {
            HyruleSoldier[solB].GenericTalkSequence({'playerTalkAnim': False, 'aimToPlayer': False, 'aimFromPlayer': False, 'cameraLookAt': False, 'selfTalkAnimName': 'no,wait', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        }


        fork {
            HyruleSoldier020.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_153', 'getAttention': False})
        } {
            HyruleSoldier020.GenericTalkSequence({'playerTalkAnim': False, 'aimToPlayer': False, 'aimFromPlayer': False, 'cameraLookAt': False, 'selfTalkAnimName': 'talk', 'facial': 'smile', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        }


        fork {
            HyruleSoldier020.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_154', 'getAttention': False})
        } {
            HyruleSoldier020.GenericTalkSequence({'playerTalkAnim': False, 'aimToPlayer': False, 'aimFromPlayer': False, 'cameraLookAt': False, 'facial': 'normal', 'selfTalkAnimName': 'think', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        }


        fork {
            HyruleSoldier020.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_155', 'getAttention': False})
        } {
            HyruleSoldier020.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        HyruleSoldier020.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_156', 'getAttention': False})
        HyruleSoldier020.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_157', 'getAttention': False})
        } {
            HyruleSoldier[solB].GenericTalkSequence({'playerTalkAnim': False, 'aimToPlayer': False, 'aimFromPlayer': False, 'cameraLookAt': False, 'selfTalkAnimName': 'think', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        }

        Fade.StartPreset({'preset': 'FadeOutSlowB'})

        fork {
            Timer.Wait({'time': 0.5})
        } {
            HyruleSoldier[solB].WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'offsetY': 0.0})
        } {
            Player.WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'offsetY': 0.0})
        } {
            Player.AimActor({'actor': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            HyruleSoldier[solB].AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].WarpToActor({'distance': 1.0, 'offsetY': 1.2999999523162842, 'actor': ActorIdentifier(name="Player"), 'offsetX': 0.0})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="HyruleSoldier", sub_name="solB"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
        }

        HyruleSoldier[solB].LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        Fade.StartPreset({'preset': 'FadeInNormal'})

        fork {
            HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_160', 'getAttention': False})
        } {
            HyruleSoldier[solB].GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnimName': 'yes,wait', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        }


        fork {
            HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_170', 'getAttention': False})
        } {
            HyruleSoldier[solB].GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnimName': 'think', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        }


        fork {
            HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_180', 'getAttention': False})
        } {
            HyruleSoldier[solB].GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnimName': 'talk', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        }


        fork {
            HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_181', 'getAttention': False})
        } {
            HyruleSoldier[solB].PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_182', 'getAttention': False})
        } {
            HyruleSoldier[solB].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_090', 'getAttention': False})
        } {
            HyruleSoldier[solB].PlayAnimation({'name': 'salute,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        EventFlags.SetFlag({'symbol': 'SoldierQuestClear01', 'value': True})
        HyruleSoldier020.Deactivate()
    } else {

        call Second()

    }
}

void Bad() {
    HyruleSoldier[solB].SetTalkerName({'message': 'glossary/Character:SoldierB', 'keep': False})
    HyruleSoldier[solB].SetFacialExpression({'expression': 'smile'})
    HyruleSoldier[solB].GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaPlains:Mystery_Forest020_060', 'selfTalkAnimName': 'salute,wait', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})

    fork {
        Timer.Wait({'time': 2.0})
    } {
        HyruleSoldier[solB].SetFacialExpression({'expression': 'normal'})
    } {
        HyruleSoldier[solB].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Fade.StartPreset({'preset': 'FadeInSlow'})
    HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_070', 'getAttention': False})

    fork {
        HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_080', 'getAttention': False})
    } {
        HyruleSoldier[solB].GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnimName': 'talk', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    }


    fork {
        HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_090', 'getAttention': False})
    } {
        HyruleSoldier[solB].GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnimName': 'salute,wait', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    }

}

void Cancel() {
    HyruleSoldier[solB].SetTalkerName({'message': 'glossary/Character:SoldierB', 'keep': False})
    HyruleSoldier[solB].GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaPlains:Mystery_Forest020_020', 'selfTalkAnimName': 'salute_talk', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Question() {
    HyruleSoldier[solB].SetTalkerName({'message': 'glossary/Character:SoldierB', 'keep': False})
    HyruleSoldier[solB].GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaPlains:Mystery_Forest020_005', 'playerTalkAnim': False, 'facial': 'sad', 'selfTalkAnimName': 'salute,wait', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_010', 'getAttention': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        fork {
            HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_030', 'getAttention': False})
        } {
            HyruleSoldier[solB].GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnimName': 'think', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        }

        switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
          case 0:
            HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_040', 'getAttention': False})
            switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
              case 0:

                call Bad()

              case 1:

                call sol010()

              case 2:

                call Bad()

              case 3:

                call Cancel()

            }
          case 1:
            HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_040', 'getAttention': False})
            switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
              case 0:

                call sol20()

              case 1:

                call Bad()

              case 2:

                call Bad()

              case 3:
                Event422:

                call Cancel()

            }
          case 2:
            HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_040', 'getAttention': False})
            switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
              case 0:

                call sol19()

              case 1:

                call Bad()

              case 2:

                call Clear()

              case 3:

                call Cancel()

            }
          case 3:
            goto Event422
        }
    } else {
        goto Event422
    }
}

void talk1() {
    Camera.SetTalkCameraMode({'isFar': True})
    HyruleSoldier[solB].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:SoldierBTalk01_010', 'keepPersonalSpace': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HyruleSoldier[solB].SetFacialExpression({'expression': 'smile'})
    HyruleSoldier[solB].PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier[solB].Talk({'message': 'scenario/HylianGeneralTalk:SoldierBTalk01_020', 'getAttention': False})
}

void talk2() {
    HyruleSoldier[solB].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:SoldierBTalk02_010', 'facial': 'sad', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HyruleSoldier[solB].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier[solB].Talk({'message': 'scenario/HylianGeneralTalk:SoldierBTalk02_020', 'getAttention': False})
}

void talk3() {
    HyruleSoldier[solB].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': 'sad', 'message': 'scenario/HylianGeneralTalk:HylianSoldier001Talk030_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void QuestStart2() {
    HyruleSoldier[solB].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': 'sad', 'selfTalkAnimName': 'no,wait', 'message': 'quest/QuestAreaPlains:Mystery_Forest010Again_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        HyruleSoldier[solB].Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest010Again_010_Q1', 'getAttention': False})
    } {
        HyruleSoldier[solB].GenericTalkSequence({'playerTalkAnim': False, 'facial': 'surprise', 'selfTalkAnimName': 'surprised_st', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    }

    goto Event192
}
