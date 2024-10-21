-------- EventFlow: Deku010 --------

Actor: Deku010
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimationNoWait', 'AimActor', 'SetInterestIkEnabled', 'SetFacialExpression', 'PlayAnimation', 'SetInstanceVariableString', 'SetComponentActive', 'ActiveteLinkedActor']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['WarpToActorLinkedPoint', 'AimActor']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['MoveToDefaultPosition']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AddItemAndGenericItemGetSequence']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['ResetSensorEventResetContainsActors']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Reset', 'LookAt3ActorsCenterAsTalker']
queries: []
params: None

Actor: Kerotone[Bring]
entrypoint: None()
actions: ['Deactivate']
queries: ['CheckPasted']
params: None

Actor: Kerotone01[Bring]
entrypoint: None()
actions: ['Deactivate']
queries: ['CheckPasted']
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

Actor: Kerotone01[forDemo]
entrypoint: None()
actions: ['Deactivate']
queries: []
params: None

Actor: Kerotone[forDemo]
entrypoint: None()
actions: ['Deactivate']
queries: []
params: None

void BringJungle010_Orders() {

    call EvResetCommon.AllReset()

    Deku010.SetInterestIkEnabled({'enable': False})
    Deku010.PlayAnimation({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku010.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': False, 'message': 'quest/QuestAreaF:Bring_Jungle010_010', 'aimToPlayer': False, 'facial': 'sleep', 'selfTalkAnimName': '', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Deku010.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        Deku010.Talk({'message': 'quest/QuestAreaF:Bring_Jungle010_020', 'getAttention': False})
    } {
        Deku010.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku010.AimActor({'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Deku010.Talk({'message': 'quest/QuestAreaF:Bring_Jungle010_025', 'getAttention': False})
    } {
        Deku010.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku010.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        Deku010.Talk({'message': 'quest/QuestAreaF:Bring_Jungle010_030', 'getAttention': False})
    } {
        Deku010.PlayAnimationNoWait({'name': 'laugh01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku010.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        Deku010.Talk({'message': 'quest/QuestAreaF:Bring_Jungle010_040', 'getAttention': False})
    } {
        Deku010.PlayAnimationNoWait({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku010.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        Deku010.Talk({'message': 'quest/QuestAreaF:Bring_Jungle010_050', 'getAttention': False})
    } {
        Deku010.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku010.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        Deku010.Talk({'message': 'quest/QuestAreaF:Bring_Jungle010_060', 'getAttention': False})
    } {
        Deku010.PlayAnimationNoWait({'name': 'sad01,think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku010.SetFacialExpression({'expression': 'angry'})
    }


    fork {
        Deku010.Talk({'message': 'quest/QuestAreaF:Bring_Jungle010_070', 'getAttention': False})
    } {
        Deku010.PlayAnimationNoWait({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku010.SetFacialExpression({'expression': 'surprise'})
    }

    Deku010.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})

    fork {
        Deku010.Talk({'message': 'quest/QuestAreaF:Bring_Jungle010_080', 'getAttention': False})
    } {
        Deku010.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku010.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        Deku010.Talk({'message': 'quest/QuestAreaF:Bring_Jungle010_110', 'getAttention': False})
    } {
        Deku010.PlayAnimationNoWait({'name': 'yes01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku010.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        Deku010.Talk({'message': 'quest/QuestAreaF:Bring_Jungle010_120', 'getAttention': False})
    } {
        Deku010.PlayAnimationNoWait({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku010.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        Deku010.Talk({'message': 'quest/QuestAreaF:Bring_Jungle010_130', 'getAttention': False})
    } {
        Deku010.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku010.SetFacialExpression({'expression': 'angry'})
    }

    Deku010.SetFacialExpression({'expression': 'normal'})
    Deku010.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait01'})
    Deku010.SetComponentActive({'active': True, 'name': 'aimControlComp'})
    QuestSystem.SetProgress({'symbol': 'Bring_Jungle010:891501191', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void BringJungle010_talk010() {
    Deku010.SetInterestIkEnabled({'enable': False})
    Deku010.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaF:Bring_Jungle020_010', 'facial': 'sad', 'selfTalkAnimName': 'happy01', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Deku010.Talk({'message': 'quest/QuestAreaF:Bring_Jungle020_020', 'getAttention': False})
    } {
        Deku010.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku010.SetFacialExpression({'expression': 'smile'})
    }

}

void BringJungle010_Ok() {

    fork {
        Deku010.AimActor({'actor': ActorIdentifier(name="Kerotone01", sub_name="Bring"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
    }

    if !Kerotone01[Bring].CheckPasted() {
        Kerotone01[Bring].Deactivate()
    }
    GameControl.ResetSensorEventResetContainsActors({'cemeteryRevive': False, 'eventReset': True})

    call EvResetCommon.AllReset()

    Player.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="Deku010"), 'index': 0, 'offsetY': 0.0})
    Player.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Deku010"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Deku010.ActiveteLinkedActor({'index': 0})
    Deku010.AimActor({'actor': ActorIdentifier(name="Kerotone01", sub_name="forDemo"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Deku010"), 'actor3': ActorIdentifier(name="Kerotone01", sub_name="forDemo"), 'duration': 0.0, 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        Deku010.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku010.SetFacialExpression({'expression': 'sleep'})
    }

    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    Deku010.SetInterestIkEnabled({'enable': False})
    Timer.Wait({'time': 2.0})

    fork {
        Deku010.Talk({'message': 'quest/QuestAreaF:Bring_Jungle030_010', 'getAttention': False})
    } {
        Deku010.PlayAnimationNoWait({'name': 'find,happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku010.SetFacialExpression({'expression': 'surprise'})
    }


    fork {
        Deku010.Talk({'message': 'quest/QuestAreaF:Bring_Jungle030_020', 'getAttention': False})
    } {
        Deku010.PlayAnimationNoWait({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku010.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        Deku010.Talk({'message': 'quest/QuestAreaF:Bring_Jungle030_030', 'getAttention': False})
    } {
        Deku010.PlayAnimationNoWait({'name': 'yes01,think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku010.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        Deku010.Talk({'message': 'quest/QuestAreaF:Bring_Jungle030_040', 'getAttention': False})
    } {
        Deku010.PlayAnimationNoWait({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku010.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        Deku010.Talk({'message': 'quest/QuestAreaF:Bring_Jungle030_050', 'getAttention': False})
    } {
        Deku010.PlayAnimationNoWait({'name': 'laugh01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku010.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        Deku010.Talk({'message': 'quest/QuestAreaF:Bring_Jungle030_060', 'getAttention': False})
    } {
        Deku010.PlayAnimationNoWait({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku010.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'SmoothieIngredient03', 'count': 8, 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})

    fork {
        Deku010.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaF:Bring_Jungle030_070', 'selfTalkAnim': False, 'selfTalkAnimName': 'happy02', 'playerTalkAnim': False, 'keepPersonalSpace': False, 'facial': 'smile', 'absorbAllPastedActors': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Deku010.PlayAnimationNoWait({'name': 'yes01,happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku010.SetFacialExpression({'expression': 'smile'})
    } {
        Partner.MoveToDefaultPosition({'speed': 1, 'position': 1, 'tolerance': 0.0, 'avoidWall': False, 'avoidPlayer': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku010"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Kerotone01[forDemo].Deactivate()
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    Deku010.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait01'})
    QuestSystem.SetProgress({'symbol': 'Bring_Jungle010:242287274', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void BringJungle010_Ng() {

    fork {
        Deku010.AimActor({'actor': ActorIdentifier(name="Kerotone", sub_name="Bring"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
    }

    if !Kerotone[Bring].CheckPasted() {
        Kerotone[Bring].Deactivate()
    }
    GameControl.ResetSensorEventResetContainsActors({'cemeteryRevive': False, 'eventReset': True})

    call EvResetCommon.AllReset()

    Player.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="Deku010"), 'offsetY': 0.0})
    Player.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Deku010"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Deku010.ActiveteLinkedActor({'index': 1})
    Deku010.AimActor({'actor': ActorIdentifier(name="Kerotone", sub_name="forDemo"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Deku010"), 'actor3': ActorIdentifier(name="Kerotone", sub_name="forDemo"), 'duration': 0.0, 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        Deku010.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku010.SetFacialExpression({'expression': 'sleep'})
    }

    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    Deku010.SetInterestIkEnabled({'enable': False})
    Timer.Wait({'time': 2.0})
    Deku010.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': False, 'message': 'quest/QuestAreaF:Bring_Jungle025_010', 'facial': 'sleep', 'selfTalkAnimName': '', 'absorbAllPastedActors': False, 'aimToPlayer': False, 'cameraLookAt': False, 'aimFromPlayer': False, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Deku010.Talk({'message': 'quest/QuestAreaF:Bring_Jungle025_020', 'getAttention': False})
    } {
        Deku010.PlayAnimationNoWait({'name': 'no01,panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku010.SetFacialExpression({'expression': 'angry'})
    } {
        Deku010.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Deku010.Talk({'message': 'quest/QuestAreaF:Bring_Jungle025_030', 'getAttention': False})
    } {
        Deku010.PlayAnimationNoWait({'name': 'yes01,happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku010.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        Deku010.Talk({'message': 'quest/QuestAreaF:Bring_Jungle025_040', 'getAttention': False})
    } {
        Deku010.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Kerotone[forDemo].Deactivate()
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
}

void BringJungle010_After() {

    call EvResetCommon.AllReset()

    Deku010.SetInterestIkEnabled({'enable': False})
    Deku010.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkDeku:Deku010Talk040_010', 'facial': 'smile', 'selfTalkAnimName': 'yes01,happy02', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}
