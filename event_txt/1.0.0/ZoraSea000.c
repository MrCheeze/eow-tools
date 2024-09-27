-------- EventFlow: ZoraSea000 --------

Actor: ZoraSea000
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'AimActor', 'SetFacialExpression', 'PlayAnimationNoWait', 'PlayAnimation', 'AimPlayer', 'ResetFacialExpression']
queries: []
params: None

Actor: ZoraRiver000
entrypoint: None()
actions: ['Talk', 'AimActor', 'PlayAnimationEx', 'SetFacialExpression', 'PlayAnimationNoWait', 'AimPlayer', 'ResetFacialExpression']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

void talk030() {
    ZoraSea000.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea000Talk030_010', 'facial': 'sad', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk040() {
    ZoraSea000.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea000Talk040_010', 'playerTalkAnim': False, 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSea000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="ZoraRiver000"), 'actor2': ActorIdentifier(name="ZoraSea000"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    ZoraSea000.AimActor({'actor': ActorIdentifier(name="ZoraRiver000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        ZoraSea000.SetFacialExpression({'expression': 'smile'})
    } {
        ZoraSea000.PlayAnimationNoWait({'name': 'happy01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea000.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea000Talk040_020', 'getAttention': False})
    }

    ZoraSea000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver000.AimActor({'actor': ActorIdentifier(name="ZoraSea000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        ZoraRiver000.SetFacialExpression({'expression': 'smile'})
    } {
        ZoraRiver000.PlayAnimationNoWait({'name': 'no01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver000.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea000Talk040_030', 'getAttention': False})
    }

    ZoraRiver000.ResetFacialExpression()
    ZoraRiver000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSea000.PlayAnimation({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSea000.ResetFacialExpression()

    fork {
        ZoraSea000.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        ZoraRiver000.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        ZoraSea000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea000.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea000Talk040_040', 'getAttention': False})
    }

}

void talk050() {
    ZoraSea000.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea000Talk050_010', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSea000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="ZoraRiver000"), 'actor2': ActorIdentifier(name="ZoraSea000"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    ZoraRiver000.AimActor({'actor': ActorIdentifier(name="ZoraSea000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraRiver000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver000.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea000Talk050_020', 'getAttention': False})
    ZoraRiver000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSea000.AimActor({'actor': ActorIdentifier(name="ZoraRiver000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraSea000.SetFacialExpression({'expression': 'smile'})
    ZoraSea000.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSea000.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea000Talk050_030', 'getAttention': False})
    ZoraRiver000.SetFacialExpression({'expression': 'sleep'})
    ZoraRiver000.PlayAnimationEx({'time': 0.0, 'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver000.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea000Talk050_040', 'getAttention': False})
}

void talk015() {
    ZoraSea000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea000Talk015_010', 'selfTalkAnimName': 'think01', 'facial': 'sad', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk035() {
    ZoraSea000.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea000Talk035_010', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk060() {
    ZoraSea000.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea000Talk060_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSea000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="ZoraRiver000"), 'actor2': ActorIdentifier(name="ZoraSea000"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    ZoraRiver000.AimActor({'actor': ActorIdentifier(name="ZoraSea000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraRiver000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver000.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea000Talk060_020', 'getAttention': False})
    ZoraRiver000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSea000.AimActor({'actor': ActorIdentifier(name="ZoraRiver000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraSea000.SetFacialExpression({'expression': 'smile'})
    ZoraSea000.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSea000.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea000Talk060_030', 'getAttention': False})
}
