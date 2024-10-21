-------- EventFlow: GerudoSoldier008 --------

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: GerudoSoldier008
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk']
queries: []
params: None

void talk() {
    GerudoSoldier008.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier003Talk01_010', 'selfTalkAnimName': 'sad01,talk', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GerudoSoldier008.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoSoldier003Talk01_020', 'getAttention': False})
    QuestSystem.SetProgress({'symbol': 'QuestIcon_Desert:3582759495', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void talk10() {
    GerudoSoldier008.GenericTalkSequenceWithDialog({'selfTalkAnimName': 'talk', 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier003Talk02_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GerudoSoldier008.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoSoldier003Talk02_020', 'getAttention': False})
}

void talk20() {
    GerudoSoldier008.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier003Talk03_010', 'selfTalkAnimName': '', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GerudoSoldier008.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoSoldier003Talk03_020', 'getAttention': False})
}

void talk30() {
    GerudoSoldier008.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'happy01,talk', 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier003Talk04_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GerudoSoldier008.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoSoldier003Talk04_020', 'getAttention': False})
}

void talk40() {
    GerudoSoldier008.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'happy01,talk', 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier003Talk04_022', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GerudoSoldier008.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoSoldier003Talk04_021', 'getAttention': False})
}

void talk060() {
    GerudoSoldier008.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier003Talk060_010', 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}
