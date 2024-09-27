-------- EventFlow: HyruleSoldier021 --------

Actor: HyruleSoldier021
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimation']
queries: []
params: None

void Special_HyruleCastle010_020() {
    HyruleSoldier021.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'quest/QuestAreaA:Special_HyruleCastle050_060', 'facial': 'sad', 'aimToPlayer': True, 'selfTalkAnimName': 'salute,wait', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        HyruleSoldier021.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle050_070', 'getAttention': False})
    } {
        HyruleSoldier021.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}
