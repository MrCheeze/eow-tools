-------- EventFlow: HylianM003 --------

Actor: HylianM003
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'TalkKeep', 'SetFacialExpression', 'AimPlayer', 'PlayAnimationNoWait', 'AimToInitialAngle', 'ResetFacialExpression']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag']
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

void talk() {
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/HylianGeneralTalk:HylianM003Talk01_060'}) {
        HylianM003.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/HylianGeneralTalk:HylianM003Talk01_010', 'aimToPlayer': False, 'selfTalkAnimName': '', 'facial': 'sad', 'selfTalkAnim': False, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        Timer.Wait({'time': 1.0})
        HylianM003.SetFacialExpression({'expression': 'surprise'})
        HylianM003.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 1.0})
        HylianM003.SetFacialExpression({'expression': 'sad'})
        HylianM003.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HylianM003.TalkKeep({'message': 'scenario/HylianGeneralTalk:HylianM003Talk01_020', 'getAttention': False})
        HylianM003.ResetFacialExpression()
        HylianM003.PlayAnimationNoWait({'name': 'ask', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HylianM003.TalkKeep({'message': 'scenario/HylianGeneralTalk:HylianM003Talk01_030', 'getAttention': False})
        HylianM003.SetFacialExpression({'expression': 'angry'})
        HylianM003.PlayAnimationNoWait({'name': 'no01,wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HylianM003.Talk({'message': 'scenario/HylianGeneralTalk:HylianM003Talk01_040', 'getAttention': False})
        HylianM003.SetFacialExpression({'expression': 'sad'})
        HylianM003.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HylianM003.Talk({'message': 'scenario/HylianGeneralTalk:HylianM003Talk01_050', 'getAttention': False})
        HylianM003.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HylianM003.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        HylianM003.PlayAnimationNoWait({'name': 'frightened02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HylianM003.Talk({'message': 'scenario/HylianGeneralTalk:HylianM003Talk01_060', 'getAttention': False})
        Timer.Wait({'time': 1.0})
    } else {
        HylianM003.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'cameraLookAt': True, 'aimToPlayer': False, 'facial': 'sad', 'message': 'scenario/HylianGeneralTalk:HylianM003Talk01_060', 'selfTalkAnim': True, 'selfTalkAnimName': 'frightened02', 'keepPersonalSpace': False, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
}

void talk020() {
    HylianM003.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/HylianGeneralTalk:HylianM003Talk02_010', 'selfTalkAnimName': 'talk03', 'facial': 'smile', 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianM003.ResetFacialExpression()
    HylianM003.PlayAnimationNoWait({'name': 'ask', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianM003.Talk({'message': 'scenario/HylianGeneralTalk:HylianM003Talk02_020', 'getAttention': False})
}

void talk030() {
    HylianM003.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'selfTalkAnimName': 'talk03', 'facial': 'smile', 'message': 'scenario/HylianGeneralTalk:HylianM003Talk030_010', 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talkSecretlyClothes() {
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/HylianGeneralTalk:HylianM003TalkSecretlyClothes_010'}) {
        HylianM003.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'selfTalkAnimName': 'talk03', 'facial': 'smile', 'message': 'scenario/HylianGeneralTalk:HylianM003TalkSecretlyClothes_010', 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        HylianM003.Talk({'message': 'scenario/HylianGeneralTalk:HylianM003TalkSecretlyClothes_020', 'getAttention': False})
    } else {
        HylianM003.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianM003TalkSecretlyClothes_020', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
}
