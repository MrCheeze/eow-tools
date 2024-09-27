-------- EventFlow: HylianF024 --------

Actor: HylianF024
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'ResetAim', 'PlayAnimationNoWait', 'ResetFacialExpression']
queries: []
params: None

void talk010() {
    HylianF024.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianF024Talk010_010', 'facial': 'smile', 'playerTalkAnimName': '', 'playerTalkAnim': False, 'selfTalkAnimName': 'laugh02', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianF024.ResetAim()
    HylianF024.ResetFacialExpression()
    HylianF024.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF024.Talk({'message': 'scenario/HylianGeneralTalk:HylianF024Talk010_020', 'getAttention': False})
    HylianF024.Talk({'message': 'scenario/HylianGeneralTalk:HylianF024Talk010_030', 'getAttention': False})
}

void talk020() {
    HylianF024.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianF024Talk020_010', 'playerTalkAnim': False, 'selfTalkAnimName': 'laugh02', 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianF024.ResetAim()
    HylianF024.ResetFacialExpression()
    HylianF024.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF024.Talk({'message': 'scenario/HylianGeneralTalk:HylianF024Talk020_020', 'getAttention': False})
}

void talk030() {
    HylianF024.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianF024Talk030_010', 'selfTalkAnimName': 'laugh02', 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianF024.ResetAim()
    HylianF024.ResetFacialExpression()
    HylianF024.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF024.Talk({'message': 'scenario/HylianGeneralTalk:HylianF024Talk030_020', 'getAttention': False})
}

void talkSec() {
    HylianF024.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianF024TalkSecretlyClothes_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianF024.Talk({'message': 'scenario/HylianGeneralTalk:HylianF024TalkSecretlyClothes_020', 'getAttention': False})
}
