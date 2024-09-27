-------- EventFlow: HylianFC002 --------

Actor: HylianFC002
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'SetFacialExpression', 'Talk', 'SetInstanceVariableBool', 'PlayAnimationNoWait']
queries: ['GetInstanceVariableBool']
params: None

void talk() {
    HylianFC002.SetFacialExpression({'expression': 'smile'})
    HylianFC002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/HylianGeneralTalk:HylianFC002Talk010_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianFC002.Talk({'message': 'scenario/HylianGeneralTalk:HylianFC002Talk010_020', 'getAttention': False})
}

void talkSec() {
    if !HylianFC002.GetInstanceVariableBool({'name': 'talkFinish'}) {
        HylianFC002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianFC002TalkSecretlyClothes_010', 'facial': 'surprise', 'selfTalkAnimName': 'surprised_st01', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        HylianFC002.SetFacialExpression({'expression': 'smile'})
        HylianFC002.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HylianFC002.Talk({'message': 'scenario/HylianGeneralTalk:HylianFC002TalkSecretlyClothes_020', 'getAttention': False})
        HylianFC002.SetInstanceVariableBool({'name': 'talkFinish', 'value': True})
    } else {
        HylianFC002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/HylianGeneralTalk:HylianFC002TalkSecretlyClothes_020', 'facial': 'smile', 'unmorph': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
}
