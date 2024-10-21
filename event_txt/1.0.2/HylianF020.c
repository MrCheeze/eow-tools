-------- EventFlow: HylianF020 --------

Actor: HylianF020
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'SetInterestIkEnabled', 'PlayAnimation']
queries: []
params: None

void talk() {
    HylianF020.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianF020Talk010_010', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void GetHorse_Forest010_030() {
    HylianF020.SetInterestIkEnabled({'enable': False})
    HylianF020.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaA:GetHorse_Forest030_100', 'selfTalkAnim': True, 'aimFromPlayer': True, 'selfTalkAnimName': 'wait05', 'facial': 'surprise', 'unmorph': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'aimToPlayer': False, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianF020.PlayAnimation({'name': 'sad_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void talk030() {
    HylianF020.SetInterestIkEnabled({'enable': False})
    HylianF020.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianF020Talk030_010', 'selfTalkAnimName': 'yes01,talk03', 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}
