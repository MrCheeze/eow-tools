-------- EventFlow: Gerudo005 --------

Actor: Gerudo005
entrypoint: None()
actions: ['GenericTalkSequence', 'Talk', 'PlayAnimationNoWait', 'PlayAnimation', 'AimActor', 'GenericTalkSequenceWithDialog', 'SetTalkerName', 'Activate', 'SetInterestIkEnabled', 'SetFacialExpression', 'LookAtTalkersLinkedPoint', 'AimActorLinkedPoint', 'LookAtTalker']
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

Actor: GerudoSoldier000
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'AimCompassPoint', 'PlayAnimation', 'Destroy', 'MoveToTargetLinkedPoint', 'AimActor', 'SetGravityEnable', 'SetCollisionEnabled', 'Deactivate', 'Activate', 'SetInstanceVariableBool', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'GenericItemGetSequence', 'AddItem', 'MoveToTargetLinkedPoint', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor', 'WarpToActor', 'MoveToTargetLinkedPoint']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['WarpToActorLinkedPoint']
queries: []
params: None

void talk010() {
    Gerudo005.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'selfTalkAnimName': 'talk', 'message': 'scenario/GeneralTalkGerudo:Gerudo005Talk010_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Gerudo005.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo005Talk010_020', 'getAttention': False})
}

void talk030() {
    Gerudo005.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': 'talk', 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:Gerudo005Talk030_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Gerudo005.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo005Talk030_020', 'getAttention': False})
}

void talk040() {
    Gerudo005.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': 'talk', 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:Gerudo005Talk040_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Gerudo005.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo005Talk040_020', 'getAttention': False})
}

void Mc042_order_02() {

    call EvResetCommon.AllResetNowait()

    Gerudo005.Activate()
    Gerudo005.LookAtTalker({'duration': 0.10000000149011612, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Player.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Gerudo005"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Gerudo005.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Gerudo005.SetInterestIkEnabled({'enable': False})
    Gerudo005.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    Timer.Wait({'time': 0.5})

    fork {
        Gerudo005.Talk({'message': 'quest/QuestAreaD:EnemyDefeat_Desert010_020', 'getAttention': False})
    } {
        Gerudo005.GenericTalkSequence({'selfTalkAnim': True, 'playerTalkAnim': False, 'facial': 'sad', 'selfTalkAnimName': 'talk', 'cameraLookAt': False, 'keepPersonalSpace': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    }


    fork {
        Gerudo005.Talk({'message': 'quest/QuestAreaD:EnemyDefeat_Desert010_040', 'getAttention': False})
    } {
        Gerudo005.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Gerudo005.SetTalkerName({'message': 'glossary/Character:Gerudo005', 'keep': False})
    Gerudo005.SetFacialExpression({'expression': 'sleep'})
    Timer.Wait({'time': 2.0})

    fork {
        Gerudo005.Talk({'message': 'quest/QuestAreaD:EnemyDefeat_Desert010_050', 'getAttention': False})
    } {
        Gerudo005.PlayAnimationNoWait({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo005.SetFacialExpression({'expression': 'surprise'})
    }


    fork {
        Gerudo005.Talk({'message': 'quest/QuestAreaD:EnemyDefeat_Desert010_060', 'getAttention': False})
    } {
        Gerudo005.PlayAnimationNoWait({'name': 'sad02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo005.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        Gerudo005.Talk({'message': 'quest/QuestAreaD:EnemyDefeat_Desert010_070', 'getAttention': False})
    } {
        Gerudo005.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo005.SetFacialExpression({'expression': 'sad'})
    }

    Timer.Wait({'time': 3.0})

    fork {
        Gerudo005.Talk({'message': 'quest/QuestAreaD:EnemyDefeat_Desert010_080', 'getAttention': False})
    } {
        Gerudo005.PlayAnimationNoWait({'name': 'happy02_st,happy02_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo005.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        Gerudo005.Talk({'message': 'quest/QuestAreaD:EnemyDefeat_Desert010_090', 'getAttention': False})
    } {
        Gerudo005.PlayAnimationNoWait({'name': 'talk,frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo005.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        Gerudo005.Talk({'message': 'quest/QuestAreaD:EnemyDefeat_Desert010_100', 'getAttention': False})
    } {
        Gerudo005.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    QuestSystem.SetProgress({'symbol': 'EnemyDefeat_Desert010:3624456180', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Mc042_end() {
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    Zelda.WarpToActorLinkedPoint({'index': 2, 'actor': ActorIdentifier(name="Gerudo005"), 'offsetY': 0.0})
    Partner[companion].WarpToActor({'offsetY': 1.0, 'offsetX': -2.0, 'distance': 1.0, 'actor': ActorIdentifier(name="Gerudo005")})
    Player.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Gerudo005"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Gerudo005"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Gerudo005.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Gerudo005.LookAtTalker({'duration': 0.10000000149011612, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})

    call EvResetCommon.AllReset()

    Gerudo005.SetTalkerName({'message': 'glossary/Character:Gerudo005', 'keep': False})
    Gerudo005.SetInterestIkEnabled({'enable': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})

    fork {
        Gerudo005.Talk({'message': 'quest/QuestAreaD:EnemyDefeat_Desert020_010', 'getAttention': False})
    } {
        Gerudo005.PlayAnimationNoWait({'name': 'happy03,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo005.SetFacialExpression({'expression': 'smile'})
    }

    Gerudo005.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.AddItem({'itemKey': 'Ornament04', 'count': 1, 'index': -1, 'autoEquip': False})
    Player.GenericItemGetSequence({'itemKey': 'Ornament04', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})

    fork {
        Gerudo005.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="Gerudo005"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Gerudo005"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})
    GerudoSoldier000.SetInstanceVariableBool({'name': 'mc042_active', 'value': True})
    GerudoSoldier000.Activate()

    fork {
        GerudoSoldier000.SetGravityEnable({'enable': False})
    } {
        GerudoSoldier000.SetCollisionEnabled({'enable': False})
    }


    fork {
        GerudoSoldier000.MoveToTargetLinkedPoint({'speed': 0, 'index': 0, 'actor': ActorIdentifier(name="Gerudo005"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        GerudoSoldier000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.8999999761581421})
        Player.AimActor({'actor': ActorIdentifier(name="GerudoSoldier000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.0})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoSoldier000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.800000011920929})
        Gerudo005.AimActor({'actor': ActorIdentifier(name="GerudoSoldier000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Gerudo005.SetFacialExpression({'expression': 'normal'})
    } {
        Timer.Wait({'time': 0.5})
        GerudoSoldier000.Talk({'message': 'quest/QuestAreaD:EnemyDefeat_Desert020_030', 'getAttention': False})
    }

    GerudoSoldier000.AimActor({'actor': ActorIdentifier(name="Gerudo005"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoSoldier000.PlayAnimation({'name': 'salute', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Gerudo005.PlayAnimation({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Gerudo005.PlayAnimation({'name': 'surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo005.Talk({'message': 'quest/QuestAreaD:EnemyDefeat_Desert020_040', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Gerudo005.SetFacialExpression({'expression': 'surprise'})
    }


    fork {
        Player.MoveToTargetLinkedPoint({'index': 3, 'offsetZ': 0.5, 'speed': 0, 'actor': ActorIdentifier(name="Gerudo005"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Player.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="GerudoSoldier000"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].MoveToTargetLinkedPoint({'offsetY': 1.0, 'index': 3, 'speed': 1, 'offsetZ': 1.0, 'actor': ActorIdentifier(name="Gerudo005"), 'offsetX': -0.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimActor({'offsetZ': 0.0, 'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="GerudoSoldier000"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'immediateTurn': False})
    }


    fork {
        GerudoSoldier000.Talk({'message': 'quest/QuestAreaD:EnemyDefeat_Desert020_050', 'getAttention': False})
    } {
        GerudoSoldier000.PlayAnimationNoWait({'name': 'talk,think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Player.SetInterestIkEnabled({'enable': True})

    fork {
        Gerudo005.Talk({'message': 'quest/QuestAreaD:EnemyDefeat_Desert020_060', 'getAttention': False})
    } {
        Gerudo005.PlayAnimationNoWait({'name': 'talk04', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Gerudo005"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Gerudo005.SetFacialExpression({'expression': 'sad'})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Gerudo005"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Gerudo005.PlayAnimationNoWait({'name': 'wait03', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoSoldier000.Talk({'message': 'quest/QuestAreaD:EnemyDefeat_Desert020_070', 'getAttention': False})
    } {
        GerudoSoldier000.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="GerudoSoldier000"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoSoldier000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        GerudoSoldier000.Talk({'message': 'quest/QuestAreaD:EnemyDefeat_Desert020_080', 'getAttention': False})
    } {
        GerudoSoldier000.PlayAnimationNoWait({'name': 'attack_swing,happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        GerudoSoldier000.Talk({'message': 'quest/QuestAreaD:EnemyDefeat_Desert020_090', 'getAttention': False})
    } {
        GerudoSoldier000.PlayAnimationNoWait({'name': 'laugh', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GerudoSoldier000.PlayAnimation({'name': 'salute', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier000.SetInterestIkEnabled({'enable': False})

    fork {
        GerudoSoldier000.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        GerudoSoldier000.MoveToTargetLinkedPoint({'index': 1, 'speed': 0, 'actor': ActorIdentifier(name="Gerudo005"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        GerudoSoldier000.Deactivate()
    } {
        Gerudo005.AimActor({'actor': ActorIdentifier(name="GerudoSoldier000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.AimActor({'duration': 0.30000001192092896, 'actor': ActorIdentifier(name="GerudoSoldier000"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoSoldier000.Destroy()
    Timer.Wait({'time': 1.0})

    fork {
        Gerudo005.Talk({'message': 'quest/QuestAreaD:EnemyDefeat_Desert020_100', 'getAttention': False})
    } {
        Gerudo005.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo005.SetFacialExpression({'expression': 'sleep'})
    } {
        Gerudo005.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    }

    Player.AimActor({'withoutTurn': True, 'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Gerudo005"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 2.0})

    fork {
        Gerudo005.Talk({'message': 'quest/QuestAreaD:EnemyDefeat_Desert020_110', 'getAttention': False})
    } {
        Gerudo005.PlayAnimationNoWait({'name': 'wait32', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo005.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        Player.AimActor({'withoutTurn': False, 'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Gerudo005"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Gerudo005"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Gerudo005.Talk({'message': 'quest/QuestAreaD:EnemyDefeat_Desert020_120', 'getAttention': False})
    } {
        Gerudo005.PlayAnimationNoWait({'name': 'speechless01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo005.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Gerudo005.Talk({'message': 'quest/QuestAreaD:EnemyDefeat_Desert020_140', 'getAttention': False})
    } {
        Gerudo005.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo005.SetFacialExpression({'expression': 'sleep'})
    }

    Gerudo005.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 2.0})

    fork {
        Gerudo005.Talk({'message': 'quest/QuestAreaD:EnemyDefeat_Desert020_160', 'getAttention': False})
    } {
        Gerudo005.SetFacialExpression({'expression': 'angry'})
    }


    fork {
        Gerudo005.Talk({'message': 'quest/QuestAreaD:EnemyDefeat_Desert020_170', 'getAttention': False})
    } {
        Gerudo005.PlayAnimationNoWait({'name': 'happy01,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    QuestSystem.SetProgress({'symbol': 'EnemyDefeat_Desert010:3814389721', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void talk050() {
    Gerudo005.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': 'talk', 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:Gerudo005Talk050_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Gerudo005.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo005Talk050_020', 'getAttention': False})
}

void talk060() {
    Gerudo005.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': 'talk', 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:Gerudo005Talk060_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Mc042_order_01() {

    call EvResetCommon.AllReset()

    Gerudo005.SetInterestIkEnabled({'enable': False})

    fork {
        Gerudo005.LookAtTalker({'duration': 0.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {
        Gerudo005.GenericTalkSequence({'playerTalkAnim': False, 'cameraLookAt': False, 'selfTalkAnimName': '', 'selfTalkAnim': False, 'aimToPlayer': False, 'facial': '', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    }

    Timer.Wait({'time': 1.0})

    fork {
        Gerudo005.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Gerudo005.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 1.0})
    Gerudo005.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaD:EnemyDefeat_Desert010_010', 'playerTalkAnim': False, 'facial': 'surprise', 'selfTalkAnimName': 'surprised_st01,surprised_lp01', 'aimToPlayer': False, 'aimFromPlayer': False, 'cameraLookAt': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Gerudo005.Talk({'message': 'quest/QuestAreaD:EnemyDefeat_Desert010_012', 'getAttention': False})
    } {
        Gerudo005.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo005.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        Gerudo005.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo005.SetFacialExpression({'expression': 'sleep'})
    }

    Timer.Wait({'time': 2.0})

    fork {
        Gerudo005.Talk({'message': 'quest/QuestAreaD:EnemyDefeat_Desert010_015', 'getAttention': False})
    } {
        Gerudo005.PlayAnimationNoWait({'name': 'speechless01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo005.SetFacialExpression({'expression': 'sad'})
    }

    Gerudo005.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Gerudo005.SetInterestIkEnabled({'enable': True})

    fork {
        Gerudo005.AimActorLinkedPoint({'pointIndex': 0, 'withoutTurn': False, 'duration': 0.6000000238418579, 'actor': ActorIdentifier(name="Gerudo005"), 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Gerudo005.LookAtTalkersLinkedPoint({'pointIndex': 0, 'chaseRatio': 0.05000000074505806, 'duration': 0.20000000298023224, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Fade.StartPreset({'preset': 'FadeOutSlowB'})
    }

    GameControl.RequestLevelJump({'offsetZ': 1.0, 'level': 'GerudoHouse003', 'locator': 'Mc042_order_02', 'offsetX': 0.0})
}

void Mc042_talk() {
    Gerudo005.SetTalkerName({'message': 'glossary/Character:Gerudo005', 'keep': False})
    Gerudo005.SetInterestIkEnabled({'enable': False})

    fork {
        Gerudo005.Talk({'message': 'quest/QuestAreaD:EnemyDefeat_Desert010_091', 'getAttention': False})
    } {
        Gerudo005.GenericTalkSequence({'selfTalkAnim': True, 'playerTalkAnim': False, 'selfTalkAnimName': 'happy02_st,happy02_lp', 'facial': 'sad', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    }


    fork {
        Gerudo005.Talk({'message': 'quest/QuestAreaD:EnemyDefeat_Desert010_100', 'getAttention': False})
    } {
        Gerudo005.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void Mc042_after() {
    Gerudo005.SetInterestIkEnabled({'enable': False})
    Gerudo005.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkGerudo:Gerudo005Talk055_010', 'facial': '', 'selfTalkAnimName': 'happy01,wait01', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Gerudo005.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo005Talk055_015', 'getAttention': False})
    } {
        Gerudo005.PlayAnimationNoWait({'name': 'happy03,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo005.SetFacialExpression({'expression': 'angry'})
    }


    fork {
        Gerudo005.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo005Talk055_020', 'getAttention': False})
    } {
        Gerudo005.PlayAnimationNoWait({'name': 'sad01,frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo005.SetFacialExpression({'expression': 'surprise'})
    }

}
