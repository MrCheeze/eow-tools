-------- EventFlow: GerudoSoldier025 --------

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
params: None

Actor: QuestSystem
entrypoint: None()
actions: []
queries: ['CheckProgress']
params: None

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag']
params: None

Actor: GerudoSoldier025
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk']
queries: []
params: None

void talk() {
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/GeneralTalkGerudo:GerudoSoldier025TalkQ1_A1_010'}) {
        GerudoSoldier025.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'facial': 'normal', 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier025TalkQ1', 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        if !Dialog.GetLastResult({'resultOnSkip': 1}) {
            GerudoSoldier025.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoSoldier025TalkQ1_A1_010', 'getAttention': False})
        } else {
            GerudoSoldier025.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoSoldier025TalkQ1_A2_010', 'getAttention': False})
        }
    } else {
        GerudoSoldier025.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'facial': 'angry', 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier025Talk020_010', 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        switch QuestSystem.CheckProgress({'symbol': 'Desert:3205882340'}) {
          case 4294967295:
            GerudoSoldier025.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoSoldier025Talk020_Before', 'getAttention': False})
          case 0:
            GerudoSoldier025.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoSoldier025Talk020_After', 'getAttention': False})
        }
    }
}

void talk10() {
    GerudoSoldier025.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'facial': 'angry', 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier025Talk030_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk20() {
    if !QuestSystem.CheckProgress({'symbol': 'Lanmola_Desert010:2015589749'}) {
        GerudoSoldier025.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'facial': 'angry', 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier025Talk040_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else {
        GerudoSoldier025.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'facial': 'angry', 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier025Talk050_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
}
