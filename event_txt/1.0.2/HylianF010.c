-------- EventFlow: HylianF010 --------

Actor: HylianF010
entrypoint: None()
actions: ['Talk', 'SetFacialExpression', 'GenericTalkSequenceWithDialog', 'PlayAnimationNoWait']
queries: []
params: None

void talk() {
    HylianF010.GenericTalkSequenceWithDialog({'keepPersonalSpace': True, 'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': 'no01,wait01', 'message': 'scenario/HylianGeneralTalk:HylianF010Talk01_010', 'facial': 'sad', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianF010.SetFacialExpression({'expression': 'smile'})
    HylianF010.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF010.Talk({'message': 'scenario/HylianGeneralTalk:HylianF010Talk01_020', 'getAttention': False})
}

void talk2() {
    HylianF010.GenericTalkSequenceWithDialog({'keepPersonalSpace': True, 'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': 'no01,wait01', 'message': 'scenario/HylianGeneralTalk:HylianF010Talk02_010', 'facial': 'sad', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianF010.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF010.Talk({'message': 'scenario/HylianGeneralTalk:HylianF010Talk02_020', 'getAttention': False})
}

void talk30() {
    HylianF010.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianF010Talk030_010', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk40() {
    HylianF010.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianF010Talk040_010', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk050() {
    HylianF010.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianF010TalkSecretlyClothes_010', 'aimToPlayer': True, 'playerTalkAnim': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}
