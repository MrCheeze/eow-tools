-------- EventFlow: ZoraSeaC002 --------

Actor: ZoraSeaC002
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SetFacialExpression', 'PlayAnimationNoWait']
queries: []
params: None

void talk() {
    ZoraSeaC002.SetFacialExpression({'expression': 'smile'})
    ZoraSeaC002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraSea:ZoraSeaC002Talk010_010', 'selfTalkAnimName': 'happy01,wait01', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSeaC002.SetFacialExpression({'expression': 'sad'})
    ZoraSeaC002.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSeaC002Talk010_020', 'getAttention': False})
}

void talk020() {
    ZoraSeaC002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraSea:ZoraSeaC002Talk020_010', 'facial': 'sad', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSeaC002.SetFacialExpression({'expression': 'sad'})
    ZoraSeaC002.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSeaC002.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSeaC002Talk020_020', 'getAttention': False})
}

void talk030() {
    ZoraSeaC002.SetFacialExpression({'expression': 'smile'})
    ZoraSeaC002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraSea:ZoraSeaC002Talk030_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSeaC002.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSeaC002Talk030_020', 'getAttention': False})
}

void talk040() {
    ZoraSeaC002.SetFacialExpression({'expression': 'smile'})
    ZoraSeaC002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraSea:ZoraSeaC002Talk040_010', 'selfTalkAnimName': 'think01', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSeaC002.PlayAnimationNoWait({'name': 'happy01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSeaC002.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSeaC002Talk040_020', 'getAttention': False})
}

void talk050() {
    ZoraSeaC002.SetFacialExpression({'expression': 'smile'})
    ZoraSeaC002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraSea:ZoraSeaC002Talk050_010', 'selfTalkAnimName': 'happy01,wait01', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}
