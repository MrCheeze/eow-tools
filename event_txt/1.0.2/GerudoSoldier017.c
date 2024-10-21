-------- EventFlow: GerudoSoldier017 --------

Actor: Zelda
entrypoint: None()
actions: []
queries: []
params: None

Actor: GerudoSoldier017
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'KeepAnimationAfterEvent', 'PlayAnimation', 'SetFacialExpression', 'AimActor']
queries: []
params: None

void talk() {

    fork {
        GerudoSoldier017.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'selfTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier009Talk01_010', 'facial': '', 'aimToPlayer': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        GerudoSoldier017.SetFacialExpression({'expression': 'sad'})
    }

    GerudoSoldier017.KeepAnimationAfterEvent()
}

void talk10() {
    GerudoSoldier017.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'facial': '', 'playerTalkAnim': False, 'selfTalkAnimName': 'talk', 'message': 'scenario/StoryAreaD:DesertProblem_C2_040', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GerudoSoldier017.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier017.KeepAnimationAfterEvent()
}

void talk20() {
    GerudoSoldier017.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': '', 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier017Talk01_010', 'selfTalkAnim': False, 'aimToPlayer': False, 'selfTalkAnimName': '', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk30() {

    fork {
        GerudoSoldier017.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': '', 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier017Talk030_010', 'selfTalkAnim': True, 'aimToPlayer': True, 'selfTalkAnimName': 'talk', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        GerudoSoldier017.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}
