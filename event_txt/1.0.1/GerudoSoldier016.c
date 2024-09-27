-------- EventFlow: GerudoSoldier016 --------

Actor: GerudoSoldier016
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'SetInterestIkEnabled']
queries: []
params: None

void talk() {
    GerudoSoldier016.GenericTalkSequenceWithDialog({'aimFromPlayer': True, 'playerTalkAnim': False, 'selfTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier005Talk01_010', 'aimToPlayer': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk10() {
    GerudoSoldier016.GenericTalkSequenceWithDialog({'aimFromPlayer': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier005Talk02_010', 'selfTalkAnim': False, 'selfTalkAnimName': '', 'aimToPlayer': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk20() {
    GerudoSoldier016.GenericTalkSequenceWithDialog({'aimFromPlayer': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier005Talk03_010', 'selfTalkAnim': False, 'selfTalkAnimName': '', 'aimToPlayer': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk30() {
    GerudoSoldier016.GenericTalkSequenceWithDialog({'aimFromPlayer': True, 'selfTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier005Talk04_010', 'selfTalkAnimName': '', 'aimToPlayer': False, 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Quest_2() {

    call EvResetCommon.AllReset()

    GerudoSoldier016.SetInterestIkEnabled({'enable': False})
    GerudoSoldier016.GenericTalkSequenceWithDialog({'aimFromPlayer': True, 'playerTalkAnim': False, 'message': 'quest/QuestAreaD:Lanmola_Desert020_030', 'facial': 'angry', 'selfTalkAnimName': 'happy01,ev_attack_swing', 'aimToPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Quest_1() {

    call EvResetCommon.AllReset()

    GerudoSoldier016.SetInterestIkEnabled({'enable': False})
    GerudoSoldier016.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaD:Lanmola_Desert010_110', 'facial': 'angry', 'selfTalkAnim': True, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'selfTalkAnimName': 'talk02,ev_attack_swing', 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk40() {

    call EvResetCommon.AllReset()

    GerudoSoldier016.GenericTalkSequenceWithDialog({'aimFromPlayer': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier016Talk010_010', 'selfTalkAnimName': 'ev_attack_swing', 'aimToPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GerudoSoldier016.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'salute,wait01', 'aimToPlayer': False, 'aimFromPlayer': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier016Talk010_020', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}
