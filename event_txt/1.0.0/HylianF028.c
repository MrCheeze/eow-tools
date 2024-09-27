-------- EventFlow: HylianF028 --------

Actor: HylianF028
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: []
queries: ['CheckCopyDictionary']
params: None

void talk010() {
    if !Zelda.CheckCopyDictionary({'actor': 'CharmDoll'}) {
        HylianF028.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianF028Talk010_010', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        HylianF028.Talk({'message': 'scenario/HylianGeneralTalk:HylianF028Talk010_020', 'getAttention': False})
        HylianF028.Talk({'message': 'scenario/HylianGeneralTalk:HylianF028Talk010_025', 'getAttention': False})
    } else {
        HylianF028.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianF028Talk020_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        HylianF028.Talk({'message': 'scenario/HylianGeneralTalk:HylianF028Talk020_020', 'getAttention': False})
        HylianF028.Talk({'message': 'scenario/HylianGeneralTalk:HylianF028Talk020_030', 'getAttention': False})
    }
}

void talk() {
    HylianF028.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianF028Talk005_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianF028.Talk({'message': 'scenario/HylianGeneralTalk:HylianF028Talk005_020', 'getAttention': False})
}
