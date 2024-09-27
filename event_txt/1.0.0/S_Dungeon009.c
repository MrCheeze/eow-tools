-------- EventFlow: S_Dungeon009 --------

Actor: ZoraSeaChief
entrypoint: None()
actions: ['Talk', 'AimPlayer', 'PlayAnimationNoWait', 'SetFacialExpression', 'ResetFacialExpression', 'AimActorLinkedPoint', 'AimActor', 'PlayAnimation', 'SetInterestIkEnabled']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: ZoraSeaC000
entrypoint: None()
actions: ['Talk', 'KeepAnimationAfterEvent', 'LookAtGimmicksLinkedPoint', 'SetFacialExpression', 'PlayAnimationNoWait', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor', 'PlayAnimation']
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

Actor: Player
entrypoint: None()
actions: ['PlayAnimationNoWait', 'SetInterestIkEnabled', 'AimActorLinkedPoint', 'MoveToTargetLinkedPoint', 'AimActor']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor', 'AimActorLinkedPoint', 'MoveToTargetLinkedPoint']
queries: []
params: None

void ConfinedZoraSeaChild() {
    ZoraSeaChief.SetInterestIkEnabled({'enable': False})

    call EvResetCommon.AllReset()


    fork {
        Player.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaC000.SetFacialExpression({'expression': 'sad'})
    } {
        ZoraSeaC000.SetInterestIkEnabled({'enable': False})
        ZoraSeaC000.PlayAnimationNoWait({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Zelda.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="ZoraSeaChief"), 'actor2': ActorIdentifier(name="ZoraSeaC000"), 'offsetX': 1.0, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {

        fork {
            ZoraSeaChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ConfinedZoraSeaChild_010', 'getAttention': False})
        }


        fork {
            ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraSeaC000.PlayAnimationNoWait({'name': 'no01,frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraSeaC000.Talk({'message': 'scenario/StoryAreaB:ConfinedZoraSeaChild_020', 'getAttention': False})
        }

    } {

        fork {
            Player.AimActorLinkedPoint({'pointIndex': 14, 'actor': ActorIdentifier(name="ZoraSeaC000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Player.MoveToTargetLinkedPoint({'index': 14, 'actor': ActorIdentifier(name="ZoraSeaC000"), 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
            Player.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.4000000059604645})
            Partner[companion].AimActorLinkedPoint({'actor': ActorIdentifier(name="ZoraSeaC000"), 'pointIndex': 15, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Partner[companion].MoveToTargetLinkedPoint({'index': 15, 'offsetY': 0.800000011920929, 'actor': ActorIdentifier(name="ZoraSeaC000"), 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetZ': 0.0})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    Timer.Wait({'time': 1.0})

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="ZoraSeaChief"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        ZoraSeaChief.AimPlayer({'duration': 0.6000000238418579, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ConfinedZoraSeaChild_030', 'getAttention': False})
    }

    Timer.Wait({'time': 0.4000000059604645})

    fork {
        ZoraSeaChief.SetFacialExpression({'expression': 'surprise'})
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ConfinedZoraSeaChild_040', 'getAttention': False})
    }


    fork {
        ZoraSeaChief.ResetFacialExpression()
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Zelda.PlayAnimation({'name': 'talk_hand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.5})
    Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ConfinedZoraSeaChild_050', 'getAttention': False})
    }

    ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSeaChief.AimActorLinkedPoint({'pointIndex': 13, 'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSeaC000"), 'duration': 0.20000000298023224, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraSeaChief.AimActorLinkedPoint({'pointIndex': 13, 'actor': ActorIdentifier(name="ZoraSeaC000"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Timer.Wait({'time': 1.0})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActorLinkedPoint({'pointIndex': 13, 'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraSeaC000"), 'duration': 0.6000000238418579, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.800000011920929})
        Partner[companion].AimActorLinkedPoint({'pointIndex': 13, 'actor': ActorIdentifier(name="ZoraSeaC000"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ConfinedZoraSeaChild_060', 'getAttention': False})
    }

    ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {

        call LookZoraSeaChild()

    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraSeaChief.SetInterestIkEnabled({'enable': True})
        ZoraSeaChief.AimActor({'duration': 0.800000011920929, 'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSeaC000"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaC000.PlayAnimationNoWait({'name': 'no01,frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaC000.Talk({'message': 'scenario/StoryAreaB:ConfinedZoraSeaChild_070', 'getAttention': False})
    }

    ZoraSeaChief.AimActor({'duration': 0.800000011920929, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {

        call LookZoraSeaChief()

    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ConfinedZoraSeaChild_080', 'getAttention': False})
    }

    ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActorLinkedPoint({'pointIndex': 6, 'withoutTurn': False, 'duration': 0.6000000238418579, 'actor': ActorIdentifier(name="ZoraSeaC000"), 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActorLinkedPoint({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraSeaC000"), 'pointIndex': 6, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.AimActorLinkedPoint({'pointIndex': 6, 'actor': ActorIdentifier(name="ZoraSeaC000"), 'duration': 0.6000000238418579, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})
    ZoraSeaC000.LookAtGimmicksLinkedPoint({'pointIndex': 6, 'duration': 2.0, 'chaseRatio': 0.05000000074505806, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 0.5})
    ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ConfinedZoraSeaChild_090', 'getAttention': False})
    Timer.Wait({'time': 0.5})
    Camera.LookAt3ActorsCenterAsTalker({'duration': 2.0, 'actor1': ActorIdentifier(name="ZoraSeaChief"), 'actor2': ActorIdentifier(name="ZoraSeaC000"), 'actor3': ActorIdentifier(name="Zelda"), 'chaseRatio': 0.05000000074505806, 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 0.5})

    fork {

        call LookZoraSeaChild()

    } {
        Timer.Wait({'time': 0.5})
        ZoraSeaChief.SetInterestIkEnabled({'enable': True})
        ZoraSeaChief.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraSeaC000"), 'duration': 0.6000000238418579, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaC000.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaC000.Talk({'message': 'scenario/StoryAreaB:ConfinedZoraSeaChild_100', 'getAttention': False})
    }

    ZoraSeaC000.PlayAnimationNoWait({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSeaC000.KeepAnimationAfterEvent()
    ZoraSeaChief.SetInterestIkEnabled({'enable': False})
    ZoraSeaChief.AimPlayer({'duration': 0.6000000238418579, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {

        call LookZoraSeaChief()

    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ConfinedZoraSeaChild_110', 'getAttention': False})
    }

    ZoraSeaChief.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSeaChief.AimActor({'duration': 0.6000000238418579, 'actor': ActorIdentifier(name="ZoraSeaC000"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    QuestSystem.SetProgress({'symbol': 'Calamity_Coast:72847901', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void LookZoraSeaChief() {

    fork {
        Timer.Wait({'time': 0.30000001192092896})
        Zelda.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.6000000238418579, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void LookZoraSeaChild() {

    fork {
        Timer.Wait({'time': 0.30000001192092896})
        Zelda.AimActor({'duration': 0.6000000238418579, 'actor': ActorIdentifier(name="ZoraSeaC000"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSeaC000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}
