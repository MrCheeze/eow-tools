-------- EventFlow: ZoraSea009 --------

Actor: ZoraSea009
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SetInstanceVariableBool', 'PlayAnimationNoWait', 'KeepAnimationAfterEvent', 'AimActor', 'PlayAnimation']
queries: ['GetInstanceVariableBool']
params: None

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag']
params: None

Actor: HylianFC004
entrypoint: None()
actions: ['Talk', 'AimActor']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE']
queries: []
params: None

void talk010() {
    if !ZoraSea009.GetInstanceVariableBool({'name': 'talk010'}) {
        ZoraSea009.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkZoraSea:ZoraSea009Talk010_010', 'selfTalkAnimName': 'talk_swim01', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        ZoraSea009.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea009Talk010_020', 'getAttention': False})
        ZoraSea009.SetInstanceVariableBool({'name': 'talk010', 'value': True})

        call _TalkFinish()

    } else {

        fork {
            ZoraSea009.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkZoraSea:ZoraSea009Talk010_020', 'selfTalkAnimName': 'talk_swim01', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_ZORA_M002_1_001', 'volume': 1.0, 'pitch': 1.0})
        }


        call _TalkFinish()

    }
}

void talk020() {
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/GeneralTalkZoraSea:ZoraSea009Talk020_010'}) {
        ZoraSea009.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkZoraSea:ZoraSea009Talk020_010', 'selfTalkAnimName': 'talk_swim01', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        ZoraSea009.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea009Talk010_020', 'getAttention': False})

        call _TalkFinish()

    } else {

        fork {
            ZoraSea009.GenericTalkSequenceWithDialog({'selfTalkAnimName': 'talk_swim01', 'message': 'scenario/GeneralTalkZoraSea:ZoraSea009Talk010_020', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_ZORA_M002_1_001', 'volume': 1.0, 'pitch': 1.0})
        }


        call _TalkFinish()

    }
}

void talk030() {
    ZoraSea009.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkZoraSea:ZoraSea009Talk030_010', 'selfTalkAnimName': 'talk_swim01', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    call _TalkFinish()

}

void talk040() {
    ZoraSea009.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkZoraSea:ZoraSea009Talk040_010', 'selfTalkAnimName': 'talk_swim01', 'facial': 'sad', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    call _TalkFinish()

}

void talk050() {
    ZoraSea009.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkZoraSea:ZoraSea009Talk050_010', 'selfTalkAnim': True, 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HylianFC004"), 'actor2': ActorIdentifier(name="ZoraSea009"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    ZoraSea009.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianFC004.AimActor({'actor': ActorIdentifier(name="ZoraSea009"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianFC004.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea009Talk050_020', 'getAttention': False})
    ZoraSea009.AimActor({'actor': ActorIdentifier(name="HylianFC004"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraSea009.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea009Talk050_030', 'getAttention': False})
}

void _TalkFinish() {
    ZoraSea009.PlayAnimationNoWait({'name': 'wait_swim01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSea009.KeepAnimationAfterEvent()
}

void talk060() {
    ZoraSea009.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea009Talk060_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HylianFC004"), 'actor2': ActorIdentifier(name="ZoraSea009"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    ZoraSea009.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianFC004.AimActor({'actor': ActorIdentifier(name="ZoraSea009"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianFC004.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea009Talk060_020', 'getAttention': False})
    ZoraSea009.AimActor({'actor': ActorIdentifier(name="HylianFC004"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraSea009.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea009Talk060_030', 'getAttention': False})
}
