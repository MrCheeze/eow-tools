-------- EventFlow: Gerudo006 --------

Actor: Gerudo006
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'PlayAnimation', 'SetFacialExpression', 'Talk', 'ResetFacialExpression', 'PlayAnimationNoWait', 'AimCompassPoint', 'AimPlayer', 'SetInterestIkEnabled', 'AimActor']
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

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['WarpToActorLinkedPoint', 'AimActor', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt3ActorsCenterAsTalker', 'LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AddItemAndGenericItemGetSequence']
queries: []
params: None

Actor: SensorQuestActor
entrypoint: None()
actions: ['TargetActorInactive']
queries: []
params: None

Actor: Tumbleweed
entrypoint: None()
actions: ['WarpToActorLinkedPoint']
queries: []
params: None

void talk010() {
    Gerudo006.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'selfTalkAnimName': 'talk', 'message': 'scenario/GeneralTalkGerudo:Gerudo006Talk010_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Gerudo006.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo006Talk010_020', 'getAttention': False})
    Gerudo006.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo006Talk010_030', 'getAttention': False})
}

void talk020() {
    Gerudo006.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': 'talk', 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:Gerudo006Talk020_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Gerudo006.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo006Talk020_020', 'getAttention': False})
}

void talk030() {
    Gerudo006.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': 'talk', 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:Gerudo006Talk030_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Gerudo006.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo006Talk030_020', 'getAttention': False})
}

void talk040() {
    Gerudo006.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': 'talk', 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:Gerudo006Talk040_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Gerudo006.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo006Talk040_020', 'getAttention': False})
}

void Carry_Desert010_010() {

    call EvResetCommon.AllReset()

    Gerudo006.SetInterestIkEnabled({'enable': False})
    Gerudo006.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaD:Carry_Desert010_010', 'playerTalkAnim': False, 'facial': 'smile', 'selfTalkAnimName': 'talk', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Gerudo006.Talk({'message': 'quest/QuestAreaD:Carry_Desert010_030', 'getAttention': False})
    } {
        Gerudo006.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo006.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        Gerudo006.Talk({'message': 'quest/QuestAreaD:Carry_Desert010_060', 'getAttention': False})
    } {
        Gerudo006.PlayAnimation({'name': 'talk03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Gerudo006.Talk({'message': 'quest/QuestAreaD:Carry_Desert010_070', 'getAttention': False})
    } {
        Gerudo006.PlayAnimation({'name': 'happy02_st,happy02_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo006.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        Gerudo006.Talk({'message': 'quest/QuestAreaD:Carry_Desert010_080', 'getAttention': False})
    } {
        Gerudo006.PlayAnimation({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo006.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        Gerudo006.Talk({'message': 'quest/QuestAreaD:Carry_Desert010_100', 'getAttention': False})
    } {
        Gerudo006.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo006.SetFacialExpression({'expression': 'normal'})
    }

    Gerudo006.SetInterestIkEnabled({'enable': True})
    QuestSystem.SetProgress({'symbol': 'Carry_Desert010:793889861', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Carry_Desert010_end() {
    Fade.StartPreset({'preset': 'FadeOutNormalB'})

    call EvResetCommon.AllReset()

    Tumbleweed.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="Gerudo006"), 'index': 1, 'offsetY': 0.0})
    Player.WarpToActorLinkedPoint({'index': 2, 'actor': ActorIdentifier(name="Gerudo006"), 'offsetY': 0.0})
    Camera.LookAt3ActorsCenterAsTalker({'duration': 0.0, 'actor1': ActorIdentifier(name="Gerudo006"), 'actor2': ActorIdentifier(name="Player"), 'actor3': ActorIdentifier(name="Tumbleweed"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Player.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Gerudo006"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Gerudo006.AimPlayer({'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    Gerudo006.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaD:Carry_Desert020_020', 'selfTalkAnimName': 'happy02_st,happy02_lp', 'facial': 'smile', 'playerTalkAnim': False, 'cameraLookAt': False, 'aimFromPlayer': False, 'aimToPlayer': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Gerudo006.AimActor({'actor': ActorIdentifier(name="Tumbleweed"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Gerudo006.Talk({'message': 'quest/QuestAreaD:Carry_Desert020_030', 'getAttention': False})
    } {
        Gerudo006.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo006.ResetFacialExpression()
    } {
        Timer.Wait({'time': 0.5})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="Tumbleweed"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Gerudo006.Talk({'message': 'quest/QuestAreaD:Carry_Desert020_040', 'getAttention': False})
    } {
        Gerudo006.SetFacialExpression({'expression': 'normal'})
    } {
        Gerudo006.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Gerudo006.Talk({'message': 'quest/QuestAreaD:Carry_Desert020_050', 'getAttention': False})
    } {
        Gerudo006.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        Gerudo006.Talk({'message': 'quest/QuestAreaD:Carry_Desert020_060', 'getAttention': False})
    } {
        Gerudo006.SetFacialExpression({'expression': 'smile'})
    } {
        Gerudo006.PlayAnimation({'name': 'happy01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Player.AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="Gerudo006"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    SensorQuestActor.TargetActorInactive()
    Gerudo006.SetFacialExpression({'expression': 'smile'})
    Gerudo006.AimCompassPoint({'direction': 0, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    Gerudo006.PlayAnimationNoWait({'name': 'happy02_st,happy02_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Camera.LookAt2ActorsCenterAsTalker({'duration': 0.0, 'actor1': ActorIdentifier(name="Gerudo006"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 2.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    Timer.Wait({'time': 0.5})
    Gerudo006.Talk({'message': 'quest/QuestAreaD:Carry_Desert020_070', 'getAttention': False})
    Gerudo006.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Gerudo006.Talk({'message': 'quest/QuestAreaD:Carry_Desert020_110', 'getAttention': False})
    } {
        Gerudo006.PlayAnimation({'name': 'talk03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Gerudo006.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'WorldGlobePiece', 'count': 1, 'index': 72, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})
    Camera.LookAt2ActorsCenterAsTalker({'duration': 0.0, 'actor1': ActorIdentifier(name="Gerudo006"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        Gerudo006.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaD:Carry_Desert020_120', 'playerTalkAnim': False, 'facial': 'normal', 'selfTalkAnimName': 'talk03', 'cameraLookAt': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner.AimActor({'actor': ActorIdentifier(name="Gerudo006"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    QuestSystem.SetProgress({'symbol': 'Carry_Desert010:75276166', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void talk050() {
    Gerudo006.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': 'talk', 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:Gerudo006Talk050_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Gerudo006.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo006Talk050_020', 'getAttention': False})
}

void Carry_Desert010_015() {

    call EvResetCommon.AllReset()

    Gerudo006.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaD:Carry_Desert010_090', 'selfTalkAnimName': 'think01', 'facial': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Gerudo006.Talk({'message': 'quest/QuestAreaD:Carry_Desert010_100', 'getAttention': False})
    } {
        Gerudo006.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo006.SetFacialExpression({'expression': 'normal'})
    }

}

void talk060() {
    Gerudo006.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': 'talk', 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:Gerudo006Talk060_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Carry_Desert010_FinishTalk() {
    Gerudo006.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'think01', 'message': 'scenario/GeneralTalkGerudo:Gerudo006Talk005_010', 'facial': 'normal', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Gerudo006.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo006Talk005_020', 'getAttention': False})
    } {
        Gerudo006.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo006.SetFacialExpression({'expression': 'smile'})
    }

}
