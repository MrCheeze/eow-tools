-------- EventFlow: Goron010 --------

Actor: Goron010
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'SetFacialExpression', 'Talk', 'AimActor', 'PlayAnimationNoWait', 'SkipAutoTurn']
queries: []
params: None

Actor: GoronC000
entrypoint: None()
actions: ['Talk', 'GenericTalkSequenceWithDialog', 'AimActor']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

void talk() {
    Goron010.SetFacialExpression({'expression': 'smile'})
    Goron010.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'scenario/GeneralTalkGoron:Goron010Talk010_010', 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Goron010.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronC000.Talk({'message': 'scenario/GeneralTalkGoron:Goron010Talk010_020', 'getAttention': False})
    Goron010.AimActor({'actor': ActorIdentifier(name="GoronC000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Goron010.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron010.SetFacialExpression({'expression': 'smile'})
    Goron010.Talk({'message': 'scenario/GeneralTalkGoron:Goron010Talk010_030', 'getAttention': False})
}

void talk0() {

    fork {
        GoronC000.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkGoron:Goron010Talk005_010', 'selfTalkAnim': False, 'aimToPlayer': False, 'aimFromPlayer': False, 'playerTalkAnim': False, 'cameraLookAt': False, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        GoronC000.AimActor({'actor': ActorIdentifier(name="Goron010"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Goron010.SetFacialExpression({'expression': 'smile'})
        Goron010.AimActor({'actor': ActorIdentifier(name="GoronC000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="GoronC000"), 'actor2': ActorIdentifier(name="Goron010"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    Goron010.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron010.Talk({'message': 'scenario/GeneralTalkGoron:Goron010Talk005_020', 'getAttention': False})
}

void talkBoundary() {
    Dialog.Show({'message': 'scenario/StoryAreaC:BoundaryGoronTalk_010'})
    Goron010.SkipAutoTurn()
}
