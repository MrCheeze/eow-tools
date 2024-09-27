-------- EventFlow: Gerudo009 --------

Actor: Gerudo009
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'SetFacialExpression', 'PlayAnimation', 'GenericTalkSequence', 'AimPlayer', 'GenericTalkSequenceWithDialog', 'SetTalkerName', 'SetInterestIkEnabled', 'AimActor', 'ResetAim']
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
actions: ['MoveToDefaultPosition', 'WarpToDefaultPosition']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['MoveToBesideTargetActor', 'AimActor']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['GenericItemGetSequence', 'AddItem', 'AimActor', 'WarpToActorLinkedPoint', 'PlayAnimationNoWait']
queries: []
params: None

Actor: FlyingTile
entrypoint: None()
actions: ['AllowAttack']
queries: []
params: None

void talk010() {
    Gerudo009.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:Gerudo009Talk010_010', 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Gerudo009.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo009Talk010_020', 'getAttention': False})
}

void talk020() {
    Gerudo009.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:Gerudo009Talk020_010', 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Gerudo009.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo009Talk020_020', 'getAttention': False})
}

void talk030() {
    Gerudo009.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:Gerudo009Talk030_010', 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Gerudo009.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo009Talk030_020', 'getAttention': False})
}

void talk040() {
    Gerudo009.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:Gerudo009Talk040_010', 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Gerudo009.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo009Talk040_020', 'getAttention': False})
}

void Quest_1() {

    call EvResetCommon.AllReset()

    Gerudo009.SetInterestIkEnabled({'enable': False})

    fork {
        Gerudo009.Talk({'message': 'quest/QuestAreaD:Bring_Desert010_010', 'getAttention': False})
    } {
        Gerudo009.GenericTalkSequence({'keepPersonalSpace': True, 'playerTalkAnimName': '', 'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': 'think01', 'aimToPlayer': False, 'aimFromPlayer': True, 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    } {
        Gerudo009.SetFacialExpression({'expression': 'sleep'})
    } {
        Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetZ': 1.0, 'offsetY': 1.0, 'actor': ActorIdentifier(name="Player"), 'offsetX': -1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Gerudo009"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 1.0})
    Gerudo009.SetFacialExpression({'expression': 'normal'})
    Gerudo009.SetInterestIkEnabled({'enable': True})
    Gerudo009.AimActor({'actor': ActorIdentifier(name="Player"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})

    fork {
        Gerudo009.Talk({'message': 'quest/QuestAreaD:Bring_Desert010_020', 'getAttention': False})
    } {
        Gerudo009.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo009.SetFacialExpression({'expression': 'sad'})
    } {
        Gerudo009.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Gerudo009.SetInterestIkEnabled({'enable': False})
    Gerudo009.SetTalkerName({'message': 'glossary/Character:Gerudo009', 'keep': False})

    fork {
        Gerudo009.Talk({'message': 'quest/QuestAreaD:Bring_Desert010_030', 'getAttention': False})
    } {
        Gerudo009.PlayAnimation({'name': 'ask', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo009.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        Gerudo009.Talk({'message': 'quest/QuestAreaD:Bring_Desert010_040', 'getAttention': False})
    } {
        Gerudo009.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo009.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        Gerudo009.Talk({'message': 'quest/QuestAreaD:Bring_Desert010_050', 'getAttention': False})
    } {
        Gerudo009.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo009.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        Gerudo009.Talk({'message': 'quest/QuestAreaD:Bring_Desert010_060', 'getAttention': False})
    } {
        Gerudo009.PlayAnimation({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo009.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        Gerudo009.Talk({'message': 'quest/QuestAreaD:Bring_Desert010_070', 'getAttention': False})
    } {
        Gerudo009.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo009.SetFacialExpression({'expression': 'sad'})
    }

    QuestSystem.SetProgress({'symbol': 'Bring_Desert010:1985555052', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Quest_3() {
    Gerudo009.AimActor({'actor': ActorIdentifier(name="FlyingTile"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    call EvResetCommon.AllReset_SensorQuest()

    Gerudo009.SetTalkerName({'message': 'glossary/Character:Gerudo009', 'keep': False})

    fork {
        Gerudo009.Talk({'message': 'quest/QuestAreaD:Bring_Desert020_010', 'getAttention': False})
    } {
        Gerudo009.GenericTalkSequence({'playerTalkAnim': False, 'aimToPlayer': False, 'absorbAllPastedActors': False, 'facial': 'sad', 'selfTalkAnim': True, 'selfTalkAnimName': 'think01', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    }

    FlyingTile.AllowAttack()
    Gerudo009.SetFacialExpression({'expression': 'surprise'})
    Timer.Wait({'time': 0.4000000059604645})
    Gerudo009.ResetAim()

    fork {
        Gerudo009.Talk({'message': 'quest/QuestAreaD:Bring_Desert020_020', 'getAttention': False})
    } {
        Gerudo009.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo009.SetFacialExpression({'expression': 'surprise'})
    }


    fork {
        Gerudo009.Talk({'message': 'quest/QuestAreaD:Bring_Desert020_030', 'getAttention': False})
    } {
        Gerudo009.PlayAnimationNoWait({'name': 'happy02_st,happy02_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo009.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    Player.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="Gerudo009"), 'index': 0, 'offsetY': 0.0})
    Player.AimActor({'actor': ActorIdentifier(name="Gerudo009"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner.WarpToDefaultPosition({'avoidPlayer': True, 'position': 1, 'avoidWall': False})
    Player.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Gerudo009.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Gerudo009.PlayAnimation({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo009.SetFacialExpression({'expression': 'sleep'})
    }

    Timer.Wait({'time': 2.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    Timer.Wait({'time': 0.5})
    Gerudo009.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Gerudo009.Talk({'message': 'quest/QuestAreaD:Bring_Desert020_050', 'getAttention': False})
    } {
        Gerudo009.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo009.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        Gerudo009.Talk({'message': 'quest/QuestAreaD:Bring_Desert020_060', 'getAttention': False})
    } {
        Gerudo009.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo009.SetFacialExpression({'expression': 'smile'})
    }

    Gerudo009.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.AddItem({'itemKey': 'RupeePurple', 'count': 1, 'index': -1, 'autoEquip': False})
    Player.GenericItemGetSequence({'itemKey': 'RupeePurple', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})

    fork {
        Player.AimActor({'actor': ActorIdentifier(name="Gerudo009"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner.MoveToDefaultPosition({'speed': 1, 'position': 3, 'tolerance': 0.0, 'avoidWall': False, 'avoidPlayer': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Partner[companion].AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Gerudo009"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Gerudo009.Talk({'message': 'quest/QuestAreaD:Bring_Desert020_070', 'getAttention': False})
    } {
        Gerudo009.GenericTalkSequence({'selfTalkAnimName': 'talk', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    } {
        Gerudo009.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        Gerudo009.Talk({'message': 'quest/QuestAreaD:Bring_Desert020_080', 'getAttention': False})
    } {
        Gerudo009.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo009.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        Gerudo009.Talk({'message': 'quest/QuestAreaD:Bring_Desert020_090', 'getAttention': False})
    } {
        Gerudo009.PlayAnimationNoWait({'name': 'happy02_st,happy02_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo009.SetFacialExpression({'expression': 'smile'})
    }

    QuestSystem.SetProgress({'symbol': 'Bring_Desert010:1567914415', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void talk050() {
    Gerudo009.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:Gerudo009Talk050_010', 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Quest_2() {
    Gerudo009.SetTalkerName({'message': 'glossary/Character:Gerudo009', 'keep': False})
    Gerudo009.SetInterestIkEnabled({'enable': False})

    fork {
        Gerudo009.Talk({'message': 'quest/QuestAreaD:Bring_Desert010_040', 'getAttention': False})
    } {
        Gerudo009.GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnimName': 'talk', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    } {
        Gerudo009.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        Gerudo009.Talk({'message': 'quest/QuestAreaD:Bring_Desert010_050', 'getAttention': False})
    } {
        Gerudo009.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo009.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        Gerudo009.Talk({'message': 'quest/QuestAreaD:Bring_Desert010_060', 'getAttention': False})
    } {
        Gerudo009.PlayAnimation({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo009.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        Gerudo009.Talk({'message': 'quest/QuestAreaD:Bring_Desert010_070', 'getAttention': False})
    } {
        Gerudo009.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo009.SetFacialExpression({'expression': 'sad'})
    }

}

void talk060() {
    Gerudo009.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkGerudo:Gerudo009Talk060_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talkMc003After() {
    Gerudo009.SetInterestIkEnabled({'enable': False})
    Gerudo009.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkGerudo:Gerudo009Talk005_010', 'facial': 'smile', 'selfTalkAnimName': 'yes01,talk', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Gerudo009.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo009Talk005_020', 'getAttention': False})
    } {
        Gerudo009.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo009.SetFacialExpression({'expression': 'sleep'})
    }

}
