-------- EventFlow: ZoraRiver000 --------

Actor: ZoraRiver000
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimationNoWait', 'AimActor', 'SetFacialExpression', 'SetInstanceVariableBool']
queries: ['GetInstanceVariableBool']
params: None

Actor: ZoraSea000
entrypoint: None()
actions: ['Talk', 'AimActor', 'SetFacialExpression', 'PlayAnimationNoWait']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: []
queries: []
params: None

void talk030() {
    ZoraRiver000.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'facial': 'sad', 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver000Talk030_010', 'selfTalkAnimName': 'talk01', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk040() {
    if !ZoraRiver000.GetInstanceVariableBool({'name': 'talk040talk040'}) {

        fork {
            ZoraRiver000.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver000Talk040_Q1', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            ZoraSea000.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        if !Dialog.GetLastResult({'resultOnSkip': 1}) {
            ZoraRiver000.AimActor({'actor': ActorIdentifier(name="Zelda"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            ZoraRiver000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

            fork {
                Timer.Wait({'time': 0.6000000238418579})
                Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSea000"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.4000000059604645})
                Player.SetInterestIkEnabled({'enable': True})
                Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSea000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                ZoraSea000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                ZoraSea000.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver000Talk040_Q1_A1_010', 'getAttention': False})
            }

            ZoraSea000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            ZoraRiver000.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

            fork {
                Timer.Wait({'time': 0.6000000238418579})
                Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiver000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.4000000059604645})
                Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiver000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                ZoraRiver000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                ZoraRiver000.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver000Talk040_Q1_A1_020', 'getAttention': False})
            }

            ZoraRiver000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            ZoraRiver000.SetInstanceVariableBool({'name': 'talk040', 'value': True})
        } else {
            ZoraRiver000.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver000Talk040_Q1_A2_010', 'getAttention': False})
        }
    } else {
        ZoraRiver000.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver000Talk040_Q1_A1_020', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
}

void talk050() {
    ZoraRiver000.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver000Talk050_010', 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraRiver000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="ZoraRiver000"), 'actor2': ActorIdentifier(name="ZoraSea000"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    ZoraSea000.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraSea000.SetFacialExpression({'expression': 'smile'})
    ZoraSea000.AimActor({'actor': ActorIdentifier(name="ZoraRiver000"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraSea000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSea000.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver000Talk050_020', 'getAttention': False})
    ZoraSea000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver000.AimActor({'actor': ActorIdentifier(name="ZoraSea000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraRiver000.SetFacialExpression({'expression': 'surprise'})
    ZoraRiver000.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver000.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver000Talk050_040', 'getAttention': False})
}

void talk015() {
    ZoraRiver000.SetFacialExpression({'expression': 'surprise'})
    ZoraRiver000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver000Talk015_010', 'selfTalkAnimName': 'surprised_st01', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraRiver000.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver000Talk015_020', 'getAttention': False})
}

void talk035() {
    ZoraRiver000.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'facial': 'sad', 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver000Talk035_010', 'selfTalkAnimName': 'talk02', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk060() {
    ZoraRiver000.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver000Talk060_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraRiver000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="ZoraRiver000"), 'actor2': ActorIdentifier(name="ZoraSea000"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    ZoraSea000.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraSea000.SetFacialExpression({'expression': 'smile'})
    ZoraSea000.AimActor({'actor': ActorIdentifier(name="ZoraRiver000"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraSea000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSea000.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver000Talk060_020', 'getAttention': False})
    ZoraSea000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver000.AimActor({'actor': ActorIdentifier(name="ZoraSea000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraRiver000.SetFacialExpression({'expression': 'smile'})
    ZoraRiver000.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver000.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver000Talk060_030', 'getAttention': False})
}
