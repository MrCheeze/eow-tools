-------- EventFlow: HylianF009 --------

Actor: HylianF009
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SetFacialExpression']
queries: []
params: None

void talk() {
}

void talk020() {
    HylianF009.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianF009Talk010_010', 'selfTalkAnimName': 'think01', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianF009.SetFacialExpression({'expression': 'smile'})
    HylianF009.Talk({'message': 'scenario/HylianGeneralTalk:HylianF009Talk010_020', 'getAttention': False})
}

void talk030() {
    HylianF009.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianF009Talk020_010', 'selfTalkAnim': True, 'facial': 'sad', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talkSecretlyClothes() {
    HylianF009.GenericTalkSequenceWithDialog({'selfTalkAnimName': '', 'facial': 'surprise', 'message': 'scenario/HylianGeneralTalk:HylianF009TalkSecretlyClothes_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianF009.Talk({'message': 'scenario/HylianGeneralTalk:HylianF009TalkSecretlyClothes_020', 'getAttention': False})
}
