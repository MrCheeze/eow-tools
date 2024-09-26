-------- EventFlow: GerudoSoldier003 --------

Actor: Zelda
entrypoint: None()
actions: ['AbsorbAllPastedActors']
queries: []
params: None

Actor: GerudoSoldier003
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimation']
queries: []
params: None

void talk() {
    Zelda.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    GerudoSoldier003.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkGerudo:GerudoSoldier018Talk01_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GerudoSoldier003.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoSoldier018Talk01_020', 'getAttention': False})

    fork {
        GerudoSoldier003.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoSoldier018Talk01_030', 'getAttention': False})
    } {
        GerudoSoldier003.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}
