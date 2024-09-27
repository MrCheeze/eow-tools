-------- EventFlow: HylianFC001 --------

Actor: HylianFC001
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
params: None

Actor: Zelda
entrypoint: None()
actions: []
queries: ['HasItem']
params: None

void talk010() {
    HylianFC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': 'talk06', 'facial': 'angry', 'message': 'scenario/HylianGeneralTalk:HylianFC001Talk010_Q1', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        HylianFC001.Talk({'message': 'scenario/HylianGeneralTalk:HylianFC001Talk010_Q1_A1_010', 'getAttention': False})
    } else {
        HylianFC001.Talk({'message': 'scenario/HylianGeneralTalk:HylianFC001Talk010_Q1_A2_010', 'getAttention': False})
    }
}

void talk020() {
    HylianFC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': 'wait06', 'facial': 'angry', 'message': 'scenario/HylianGeneralTalk:HylianFC001Talk020_Q1', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        if !Zelda.HasItem({'itemKey': 'HeartPiece', 'index': 37, 'count': 1}) {
            HylianFC001.Talk({'message': 'scenario/HylianGeneralTalk:HylianFC001Talk020_Q1_A1_010', 'getAttention': False})
        } else {
            HylianFC001.Talk({'message': 'scenario/HylianGeneralTalk:HylianFC001Talk020_Q2', 'getAttention': False})
            if !Dialog.GetLastResult({'resultOnSkip': 1}) {
                HylianFC001.Talk({'message': 'scenario/HylianGeneralTalk:HylianFC001Talk020_Q2_A1_010', 'getAttention': False})
            } else {
                Event8:
                HylianFC001.Talk({'message': 'scenario/HylianGeneralTalk:HylianFC001Talk020_Q1_A2_010', 'getAttention': False})
            }
        }
    } else {
        goto Event8
    }
}

void talk030() {
    HylianFC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'message': 'scenario/HylianGeneralTalk:HylianFC001Talk030_010', 'selfTalkAnimName': 'talk06', 'facial': 'smile', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}
