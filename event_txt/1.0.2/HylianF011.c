-------- EventFlow: HylianF011 --------

Actor: HylianF011
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SetInstanceVariableBool', 'AimPlayer', 'SetFacialExpression']
queries: ['GetInstanceVariableBool']
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
params: None

void talk010() {
    if !HylianF011.GetInstanceVariableBool({'name': 'talk010'}) {
        HylianF011.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'message': 'scenario/HylianGeneralTalk:HylianF011Talk010_010', 'selfTalkAnimName': 'talk01', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        HylianF011.SetInstanceVariableBool({'name': 'talk010', 'value': True})
        HylianF011.Talk({'message': 'scenario/HylianGeneralTalk:HylianF011Talk010_Q1', 'getAttention': False})
        Event16:
        if !Dialog.GetLastResult({'resultOnSkip': 1}) {
            HylianF011.Talk({'message': 'scenario/HylianGeneralTalk:HylianF011Talk010_Q2', 'getAttention': False})
            if !Dialog.GetLastResult({'resultOnSkip': 1}) {
                HylianF011.Talk({'message': 'scenario/HylianGeneralTalk:HylianF011Talk010_Q2_A1_010', 'getAttention': False})
            } else {
                Event18:
                HylianF011.Talk({'message': 'scenario/HylianGeneralTalk:HylianF011Talk010_Q1_A2_010', 'getAttention': False})
            }
        } else {
            goto Event18
        }
    } else {
        HylianF011.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianF011Talk010_Q1', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        goto Event16
    }
}

void talk020() {
    HylianF011.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'message': 'scenario/HylianGeneralTalk:HylianF011Talk020_010', 'selfTalkAnimName': 'talk03', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk030() {

    fork {
        HylianF011.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'message': 'scenario/HylianGeneralTalk:HylianF011Talk030_010', 'aimFromPlayer': False, 'selfTalkAnim': False, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        HylianF011.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HylianF011.Talk({'message': 'scenario/HylianGeneralTalk:HylianF011Talk030_020', 'getAttention': False})
}

void Animal_Coast010_010() {
    HylianF011.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianF011.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaB:Animal_Coast020_030', 'facial': 'sad', 'selfTalkAnimName': '', 'selfTalkAnim': False, 'aimToPlayer': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        HylianF011.Talk({'message': 'quest/QuestAreaB:Animal_Coast020_040', 'getAttention': False})
    } {
        HylianF011.SetFacialExpression({'expression': 'smile'})
    }

}

void talk040() {

    fork {
        HylianF011.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': False, 'selfTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/HylianGeneralTalk:HylianF011Talk040_010', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        HylianF011.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HylianF011.Talk({'message': 'scenario/HylianGeneralTalk:HylianF011Talk040_020', 'getAttention': False})
}

void Animal_Coast010_FinishTalk() {
    HylianF011.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianF011.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/HylianGeneralTalk:HylianF011Talk035_010', 'facial': 'smile', 'selfTalkAnim': False, 'aimToPlayer': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        HylianF011.Talk({'message': 'scenario/HylianGeneralTalk:HylianF011Talk035_020', 'getAttention': False})
    } {
        HylianF011.SetFacialExpression({'expression': 'normal'})
    }

}
