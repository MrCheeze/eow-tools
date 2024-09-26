-------- EventFlow: HylianM008 --------

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
params: None

Actor: HylianM008
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SetInstanceVariableBool', 'AimPlayer']
queries: ['GetInstanceVariableBool']
params: None

void talk() {
    if !HylianM008.GetInstanceVariableBool({'name': 'talkFinish'}) {
        HylianM008.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianM008Talk010_010', 'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        HylianM008.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        HylianM008.Talk({'message': 'scenario/HylianGeneralTalk:HylianM008Talk010_Q1', 'getAttention': False})
        if !Dialog.GetLastResult({'resultOnSkip': 1}) {
            HylianM008.Talk({'message': 'scenario/HylianGeneralTalk:HylianM008Talk010_Q1_A1_010', 'getAttention': False})
            HylianM008.Talk({'message': 'scenario/HylianGeneralTalk:HylianM008Talk010_Q1_A1_020', 'getAttention': False})
            HylianM008.SetInstanceVariableBool({'value': True, 'name': 'talkFinish'})
        } else {
            HylianM008.Talk({'message': 'scenario/HylianGeneralTalk:HylianM008Talk010_Q1_A2_010', 'getAttention': False})
        }
    } else {
        HylianM008.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianM008Talk010_Q1_A1_020', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
}

void talk020() {
    HylianM008.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianM008Talk020_010', 'aimFromPlayer': True, 'aimToPlayer': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianM008.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianM008.Talk({'message': 'scenario/HylianGeneralTalk:HylianM008Talk020_020', 'getAttention': False})
}
