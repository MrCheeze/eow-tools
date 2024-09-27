-------- EventFlow: GerudoSoldier005 --------

Actor: Zelda
entrypoint: None()
actions: ['MoveToCompassPoint']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'LookAt3ActorsCenterAsTalker']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: GerudoSoldier005
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'AimCompassPoint', 'PlayAnimation', 'AimPlayer', 'AimActor']
queries: []
params: None

Actor: GerudoSoldier004
entrypoint: None()
actions: ['Talk', 'PlayAnimation', 'AimPlayer', 'AimActor']
queries: []
params: None

void talk() {
    GerudoSoldier005.GenericTalkSequenceWithDialog({'selfTalkAnimName': 'talk', 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier010Talk010_010', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GerudoSoldier005.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoSoldier010Talk010_020', 'getAttention': False})
    GerudoSoldier005.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier005.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
}

void talk10() {
    GerudoSoldier005.GenericTalkSequenceWithDialog({'selfTalkAnimName': 'talk', 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier010Talk020_010', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GerudoSoldier005.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoSoldier010Talk020_020', 'getAttention': False})
    GerudoSoldier005.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier005.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
}

void talk20() {
    GerudoSoldier005.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkGerudo:GerudoSoldier010Talk030_010', 'playerTalkAnim': False, 'selfTalkAnimName': 'wait01', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GerudoSoldier005.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoSoldier010Talk030_020', 'getAttention': False})
    GerudoSoldier005.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier005.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
}

void talk30() {
    GerudoSoldier005.GenericTalkSequenceWithDialog({'selfTalkAnimName': 'talk', 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier010Talk040_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GerudoSoldier005.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier005.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
}

void talk40() {
    GerudoSoldier005.GenericTalkSequenceWithDialog({'selfTalkAnimName': 'talk', 'aimFromPlayer': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier010Talk050_010', 'aimToPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GerudoSoldier005.GenericTalkSequenceWithDialog({'aimFromPlayer': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier010Talk050_020', 'selfTalkAnimName': 'salute,wait01', 'aimToPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GerudoSoldier005.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier005.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
}

void talk060() {
    GerudoSoldier005.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier010Talk060_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk0() {

    call EvResetCommon.AllReset()

    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="GerudoSoldier005"), 'actor2': ActorIdentifier(name="GerudoSoldier004"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        GerudoSoldier004.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoSoldier000Talk010_010', 'getAttention': False})
    } {
        GerudoSoldier004.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoSoldier004.AimActor({'duration': 0.20000000298023224, 'actor': ActorIdentifier(name="GerudoSoldier005"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier005.AimActor({'duration': 0.20000000298023224, 'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier004"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoSoldier004.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoSoldier005.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoSoldier000Talk010_020', 'getAttention': True})
    } {
        GerudoSoldier005.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GerudoSoldier005.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoSoldier004.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier005.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Camera.LookAt3ActorsCenterAsTalker({'actor3': ActorIdentifier(name="Zelda"), 'actor1': ActorIdentifier(name="GerudoSoldier004"), 'actor2': ActorIdentifier(name="GerudoSoldier005"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        GerudoSoldier004.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoSoldier000Talk010_030', 'getAttention': False})
    } {
        GerudoSoldier004.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GerudoSoldier004.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoSoldier005.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoSoldier000Talk010_040', 'getAttention': False})
    } {
        GerudoSoldier005.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GerudoSoldier005.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.MoveToCompassPoint({'direction': 0, 'speed': 1, 'distance': 3.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Timer.Wait({'time': 0.4000000059604645})
}
