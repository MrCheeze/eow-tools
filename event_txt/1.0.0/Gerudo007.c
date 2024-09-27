-------- EventFlow: Gerudo007 --------

Actor: Gerudo007
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'AimPlayer', 'AimCompassPoint', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

void talk010() {
    Gerudo007.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkGerudo:Gerudo007Talk010_010', 'aimToPlayer': False, 'playerTalkAnim': False, 'selfTalkAnim': False, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Gerudo007.SetInterestIkEnabled({'enable': True})
    Gerudo007.AimPlayer({'boneName': '', 'withoutTurn': True, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})
    Gerudo007.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo007Talk010_020', 'getAttention': False})
    Gerudo007.AimCompassPoint({'direction': 0, 'withoutTurn': True, 'duration': 0.4000000059604645, 'immediateTurn': False})
}

void talk020() {
    Gerudo007.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkGerudo:Gerudo007Talk020_010', 'aimToPlayer': False, 'playerTalkAnim': False, 'selfTalkAnim': False, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Gerudo007.AimPlayer({'boneName': '', 'withoutTurn': True, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Gerudo007.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo007Talk020_020', 'getAttention': False})
}

void talk030() {
    Gerudo007.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkGerudo:Gerudo007Talk030_010', 'aimToPlayer': False, 'selfTalkAnim': False, 'playerTalkAnim': False, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Gerudo007.AimPlayer({'boneName': '', 'withoutTurn': True, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Gerudo007.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo007Talk030_020', 'getAttention': False})
}

void talk040() {
    Gerudo007.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'selfTalkAnimName': '', 'aimToPlayer': False, 'message': 'scenario/GeneralTalkGerudo:Gerudo007Talk040_010', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Gerudo007.AimPlayer({'boneName': '', 'withoutTurn': True, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Gerudo007.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo007Talk040_020', 'getAttention': False})
}

void talk050() {
    Gerudo007.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'selfTalkAnimName': '', 'aimToPlayer': False, 'message': 'scenario/GeneralTalkGerudo:Gerudo007Talk050_010', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Gerudo007.AimPlayer({'boneName': '', 'withoutTurn': True, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Gerudo007.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo007Talk050_020', 'getAttention': False})
}

void talk060() {
    Gerudo007.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'selfTalkAnimName': '', 'aimToPlayer': False, 'message': 'scenario/GeneralTalkGerudo:Gerudo007Talk060_010', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Gerudo007.AimPlayer({'boneName': '', 'withoutTurn': True, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Gerudo007.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo007Talk060_020', 'getAttention': False})
}
