-------- EventFlow: GerudoChief --------

Actor: GerudoChief
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimationNoWait']
queries: []
params: None

Actor: GerudoChiefsDaughter
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'PlayAnimation']
queries: []
params: None

Actor: GerudoAide000
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'SetInterestIkEnabled']
queries: []
params: None

Actor: GerudoSoldier012
entrypoint: None()
actions: ['Talk', 'PlayAnimation']
queries: []
params: None

void talk010() {
    GerudoChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'talk', 'message': 'scenario/GeneralTalkGerudo:GerudoChiefTalk01_010', 'aimToPlayer': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk030() {
    GerudoChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkGerudo:GerudoChiefTalk03_020', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk040() {
    GerudoChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:GerudoChiefTalk04_010', 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GerudoChief.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoChiefTalk04_020', 'getAttention': False})
}

void talk025() {

    call EvResetCommon.AllReset()

    Timer.Wait({'time': 0.30000001192092896})

    fork {
        Zelda.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.30000001192092896})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="GerudoChiefsDaughter"), 'actor2': ActorIdentifier(name="GerudoSoldier012"), 'offsetX': 0.0, 'offsetZ': -2.0, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetY': 0.0})
    Timer.Wait({'time': 0.5})
    GerudoSoldier012.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier012.Talk({'message': 'scenario/StoryAreaD:MiniBoundaryChief_010', 'getAttention': False})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MiniBoundaryChief_020', 'getAttention': False})
    GerudoChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.4000000059604645})
    GerudoChiefsDaughter.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MiniBoundaryChief_030', 'getAttention': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="GerudoChief"), 'actor2': ActorIdentifier(name="GerudoAide000"), 'distanceOffset': 2.0, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Player.SetInterestIkEnabled({'enable': True})
    Timer.Wait({'time': 0.699999988079071})

    fork {
        GerudoChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoChief.Talk({'message': 'scenario/StoryAreaD:MiniBoundaryChief_040', 'getAttention': False})
        GerudoChief.Talk({'message': 'scenario/StoryAreaD:MiniBoundaryChief_050', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoAide000.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoAide000.Talk({'message': 'scenario/StoryAreaD:MiniBoundaryChief_060', 'getAttention': False})
        GerudoAide000.Talk({'message': 'scenario/StoryAreaD:MiniBoundaryChief_070', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoAide000.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoChief.PlayAnimationNoWait({'name': 'angry_st,angry_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoChief.Talk({'message': 'scenario/StoryAreaD:MiniBoundaryChief_080', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Player.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoAide000.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoAide000.Talk({'message': 'scenario/StoryAreaD:MiniBoundaryChief_090', 'getAttention': False})
}

void talk026() {

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="GerudoChief"), 'actor2': ActorIdentifier(name="GerudoAide000"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Player.SetInterestIkEnabled({'enable': True})
    } {

        call EvResetCommon.AllReset()

    }


    fork {
        GerudoChief.Talk({'message': 'scenario/StoryAreaD:MiniBoundaryChief_040', 'getAttention': False})
        GerudoChief.Talk({'message': 'scenario/StoryAreaD:MiniBoundaryChief_050', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Player.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoAide000.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoAide000.Talk({'message': 'scenario/StoryAreaD:MiniBoundaryChief_060', 'getAttention': False})
        GerudoAide000.Talk({'message': 'scenario/StoryAreaD:MiniBoundaryChief_070', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Player.AimActor({'actor': ActorIdentifier(name="GerudoAide000"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoAide000.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoChief.PlayAnimationNoWait({'name': 'angry_st,angry_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoChief.Talk({'message': 'scenario/StoryAreaD:MiniBoundaryChief_080', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Player.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoAide000.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoAide000.Talk({'message': 'scenario/StoryAreaD:MiniBoundaryChief_090', 'getAttention': False})
}

void talk050() {
    GerudoChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkGerudo:GerudoChiefTalk060_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}
