-------- EventFlow: Goron008 --------

Actor: Goron008
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SetFacialExpression', 'PlayAnimationNoWait', 'SetInstanceVariableBool', 'AimActor', 'AimPlayer', 'SetInterestIkEnabled', 'TalkKeep', 'ResetFacialExpression', 'PlayAnimation', 'GenericTalkSequence']
queries: ['GetInstanceVariableBool']
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
params: None

Actor: GoronC000
entrypoint: None()
actions: ['Talk', 'GenericTalkSequence']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

void talk() {
    Goron008.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGoron:Goron008Talk010_010', 'selfTalkAnim': True, 'selfTalkAnimName': 'think01', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk020() {

    fork {

        call _GoronC000Cam()

    } {
        Goron008.Talk({'message': 'scenario/GeneralTalkGoron:Goron008Talk020_Q1', 'getAttention': False})
    } {
        Goron008.GenericTalkSequence({'cameraLookAt': False, 'aimToPlayer': False, 'selfTalkAnim': False, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    }

    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        Goron008.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        if !Goron008.GetInstanceVariableBool({'name': 'talk020'}) {
            Goron008.Talk({'message': 'scenario/GeneralTalkGoron:Goron008Talk020_Q1_A1_010', 'getAttention': False})
            Goron008.SetInstanceVariableBool({'name': 'talk020', 'value': True})
            Event4:
            Goron008.Talk({'message': 'scenario/GeneralTalkGoron:Goron008Talk020_Q1_A1_020', 'getAttention': False})
        } else {
            goto Event4
        }
    } else {
        Goron008.Talk({'message': 'scenario/GeneralTalkGoron:Goron008Talk020_Q1_A2_010', 'getAttention': False})
    }
}

void talk030() {

    fork {

        call _GoronC000Cam()

    } {
        GoronC000.Talk({'message': 'scenario/GeneralTalkGoron:Goron008Talk030_010', 'getAttention': False})
    } {
        GoronC000.GenericTalkSequence({'cameraLookAt': False, 'aimToPlayer': False, 'selfTalkAnim': False, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    }

    Goron008.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron008.Talk({'message': 'scenario/GeneralTalkGoron:Goron008Talk030_020', 'getAttention': False})
}

void talk040() {
    Goron008.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'scenario/GeneralTalkGoron:Goron008Talk040_010', 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Goron008.SetFacialExpression({'expression': 'sad'})
    Goron008.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron008.Talk({'message': 'scenario/GeneralTalkGoron:Goron008Talk040_020', 'getAttention': False})
}

void talk0() {
    Goron008.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkGoron:Goron008Talk005_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void _GoronC000Cam() {

    fork {
        Goron008.SetFacialExpression({'expression': 'sad'})
        Goron008.SetInterestIkEnabled({'enable': False})
        Goron008.AimActor({'actor': ActorIdentifier(name="GoronC000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="GoronC000"), 'actor2': ActorIdentifier(name="Goron008"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

}

void talk015() {
    Goron008.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGoron:Goron008Talk015_010', 'aimToPlayer': True, 'facial': 'surprise', 'selfTalkAnimName': '', 'selfTalkAnim': False, 'keepTalk': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    Goron008.ResetFacialExpression()
    Goron008.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron008.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron008.TalkKeep({'message': 'scenario/GeneralTalkGoron:Goron008Talk015_020', 'getAttention': False})
}
