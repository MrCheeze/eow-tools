-------- EventFlow: HylianMC000 --------

Actor: HylianMC000
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'PlayAnimation', 'Talk', 'PlayAnimationNoWait', 'SetFacialExpression', 'AimPlayer', 'AimToInitialAngle', 'AimCompassPoint', 'AimActor', 'SetInterestIkEnabled', 'ResetFacialExpression', 'ActiveteLinkedActor']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['MoveToDefaultPosition', 'EnableAutoMovement']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['ResetFacialExpression', 'AddItemAndGenericItemGetSequence']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['WarpToActorLinkedPoint', 'AimActor', 'PlayAnimation', 'AbsorbAllPastedActors', 'PlayAnimationNoWait']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag']
params: None

Actor: GameControl
entrypoint: None()
actions: ['ResetSensorEventResetContainsActors']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: DandarmaBullet
entrypoint: None()
actions: ['Destroy', 'WarpToActorLinkedPoint', 'PlayAnimationNoWait']
queries: []
params: None

Actor: Dandarma
entrypoint: None()
actions: ['WarpToActorLinkedPoint', 'PlayAnimationNoWait']
queries: []
params: None

Actor: SnowBall[Bring]
entrypoint: None()
actions: ['Destroy']
queries: ['CheckPasted']
params: None

Actor: SnowBall[forDemo]
entrypoint: None()
actions: ['Deactivate']
queries: []
params: None

void talk() {
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/HylianGeneralTalk:HylianMC000Talk010_010'}) {
        HylianMC000.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianMC000Talk010_010', 'playerTalkAnim': False, 'keepPersonalSpace': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else {
        HylianMC000.GenericTalkSequenceWithDialog({'selfTalkAnimName': 'wait06', 'facial': 'smile', 'message': 'scenario/HylianGeneralTalk:HylianMC000Talk010_030', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
}

void talk020() {
    HylianMC000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'keepPersonalSpace': False, 'message': 'scenario/HylianGeneralTalk:HylianMC000Talk020_020', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talkSecretlyClothes() {
    HylianMC000.GenericTalkSequenceWithDialog({'selfTalkAnimName': 'wait06', 'facial': 'smile', 'message': 'scenario/HylianGeneralTalk:HylianMC000TalkSecretlyClothes_010', 'playerTalkAnim': False, 'keepPersonalSpace': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Quest_1() {

    call EvResetCommon.AllReset()

    HylianMC000.GenericTalkSequenceWithDialog({'facial': 'smile', 'message': 'quest/QuestAreaG:Bring_SnowMountain010_010', 'playerTalkAnim': False, 'selfTalkAnimName': 'happy02,wait07', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianMC000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain010_020', 'getAttention': False})
    } {
        HylianMC000.PlayAnimation({'name': 'talk03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC000.SetFacialExpression({'expression': 'normal'})
    }

    HylianMC000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain010_030', 'getAttention': False})
    } {
        HylianMC000.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC000.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain010_040', 'getAttention': False})
    } {
        HylianMC000.PlayAnimation({'name': 'talk06', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC000.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain010_050', 'getAttention': False})
    } {
        HylianMC000.PlayAnimation({'name': 'happy02,wait07', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC000.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain010_060', 'getAttention': False})
    } {
        HylianMC000.SetFacialExpression({'expression': 'sad'})
    } {
        HylianMC000.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    QuestSystem.SetProgress({'symbol': 'Bring_SnowMountain010:3232483662', 'isShowTelopInEvent': False, 'isFrontFade': False})
    HylianMC000.PlayAnimationNoWait({'name': 'wait06', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianMC000.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
}

void Quest_2() {
    HylianMC000.GenericTalkSequenceWithDialog({'facial': 'smile', 'message': 'quest/QuestAreaG:Bring_SnowMountain020_010', 'playerTalkAnim': False, 'selfTalkAnimName': 'happy02', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain020_020', 'getAttention': False})
    } {
        HylianMC000.SetFacialExpression({'expression': 'sad'})
    }

    HylianMC000.PlayAnimationNoWait({'name': 'wait06', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianMC000.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
}

void Quest_9() {

    call EvResetCommon.AllReset_SensorQuest()

    HylianMC000.SetInterestIkEnabled({'enable': True})
    HylianMC000.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="SnowBall", sub_name="Bring"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianMC000.SetFacialExpression({'expression': 'surprise'})
    HylianMC000.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    if !SnowBall[Bring].CheckPasted() {
        SnowBall[Bring].Destroy()
    }
    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    GameControl.ResetSensorEventResetContainsActors({'cemeteryRevive': False, 'eventReset': True})
    HylianMC000.ActiveteLinkedActor({'index': 2})
    HylianMC000.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="SnowBall", sub_name="forDemo"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Player.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="HylianMC000"), 'offsetY': 0.0})
    Player.AimActor({'actor': ActorIdentifier(name="HylianMC000"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    HylianMC000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaG:Bring_SnowMountain030_010', 'facial': 'surprise', 'selfTalkAnimName': 'talk06', 'aimToPlayer': False, 'absorbAllPastedActors': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianMC000.SetInterestIkEnabled({'enable': False})
    HylianMC000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain030_020', 'getAttention': False})
    } {
        HylianMC000.PlayAnimation({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HylianMC000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianMC000.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain030_030', 'getAttention': False})
    } {
        HylianMC000.PlayAnimation({'name': 'talk03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC000.SetFacialExpression({'expression': 'smile'})
    }

    HylianMC000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain030_040', 'getAttention': False})
    } {
        HylianMC000.PlayAnimation({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC000.SetFacialExpression({'expression': 'normal'})
    }

    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    Player.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="HylianMC000"), 'offsetY': 0.0})
    Player.AimActor({'actor': ActorIdentifier(name="HylianMC000"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Player.PlayAnimationNoWait({'name': '', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain030_060', 'getAttention': False})
    } {
        HylianMC000.PlayAnimation({'name': 'angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HylianMC000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain030_070', 'getAttention': False})
    } {
        HylianMC000.PlayAnimation({'name': 'love_cats', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC000.SetFacialExpression({'expression': 'surprise'})
    }

    HylianMC000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain030_080', 'getAttention': False})
    } {
        HylianMC000.PlayAnimation({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC000.SetFacialExpression({'expression': 'sad'})
    }

    SnowBall[forDemo].Deactivate()
    HylianMC000.PlayAnimation({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 2.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})

    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain030_090', 'getAttention': False})
    } {
        HylianMC000.SetFacialExpression({'expression': 'sad'})
    }

    HylianMC000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain030_100', 'getAttention': False})
    } {
        HylianMC000.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC000.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain030_110', 'getAttention': False})
    } {
        HylianMC000.PlayAnimation({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC000.SetFacialExpression({'expression': 'normal'})
    }

    Player.PlayAnimation({'name': 'ev_hand_over', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'SmoothieIngredient05', 'count': 8, 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})

    fork {
        Zelda.ResetFacialExpression()
    } {
        Partner.MoveToDefaultPosition({'speed': 1, 'position': 1, 'avoidPlayer': True, 'tolerance': 0.0, 'avoidWall': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
    }

    Partner.EnableAutoMovement()
    HylianMC000.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'facial': 'smile', 'message': 'quest/QuestAreaG:Bring_SnowMountain030_120', 'selfTalkAnimName': 'talk01', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain030_130', 'getAttention': False})
    } {
        HylianMC000.PlayAnimation({'name': 'happy03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC000.SetFacialExpression({'expression': 'smile'})
    }

    Timer.Wait({'time': 0.5})

    fork {
        HylianMC000.ResetFacialExpression()
    } {
        HylianMC000.PlayAnimationNoWait({'name': 'wait06', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC000.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    QuestSystem.SetProgress({'symbol': 'Bring_SnowMountain010:4227461475', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Quest_10() {

    call EvResetCommon.AllReset_SensorQuest()

    HylianMC000.SetInterestIkEnabled({'enable': True})
    HylianMC000.AimActor({'actor': ActorIdentifier(name="Dandarma"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianMC000.SetFacialExpression({'expression': 'surprise'})
    HylianMC000.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Dandarma.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="HylianMC000"), 'index': 1, 'offsetY': 0.0})
    Dandarma.PlayAnimationNoWait({'name': 'wait_c', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="HylianMC000"), 'offsetY': 0.0})
    Player.AimActor({'actor': ActorIdentifier(name="HylianMC000"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    HylianMC000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaG:Bring_SnowMountain030_010', 'facial': 'surprise', 'selfTalkAnimName': 'talk06', 'aimToPlayer': False, 'absorbAllPastedActors': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianMC000.SetInterestIkEnabled({'enable': False})
    HylianMC000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain030_020', 'getAttention': False})
    } {
        HylianMC000.PlayAnimation({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HylianMC000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianMC000.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain030_030', 'getAttention': False})
    } {
        HylianMC000.PlayAnimation({'name': 'talk03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC000.SetFacialExpression({'expression': 'smile'})
    }

    HylianMC000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain030_040', 'getAttention': False})
    } {
        HylianMC000.PlayAnimation({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC000.SetFacialExpression({'expression': 'normal'})
    }

    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    Player.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="HylianMC000"), 'offsetY': 0.0})
    Player.AimActor({'actor': ActorIdentifier(name="HylianMC000"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Player.PlayAnimationNoWait({'name': '', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain030_060', 'getAttention': False})
    } {
        HylianMC000.PlayAnimation({'name': 'angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HylianMC000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain030_070', 'getAttention': False})
    } {
        HylianMC000.PlayAnimation({'name': 'love_cats', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC000.SetFacialExpression({'expression': 'surprise'})
    }

    HylianMC000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain030_080', 'getAttention': False})
    } {
        HylianMC000.PlayAnimation({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC000.SetFacialExpression({'expression': 'sad'})
    }

    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    HylianMC000.PlayAnimation({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 2.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})

    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain030_090', 'getAttention': False})
    } {
        HylianMC000.SetFacialExpression({'expression': 'sad'})
    }

    HylianMC000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain030_100', 'getAttention': False})
    } {
        HylianMC000.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC000.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain030_110', 'getAttention': False})
    } {
        HylianMC000.PlayAnimation({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC000.SetFacialExpression({'expression': 'normal'})
    }

    Player.PlayAnimation({'name': 'ev_hand_over', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'SmoothieIngredient05', 'count': 8, 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})

    fork {
        Zelda.ResetFacialExpression()
    } {
        Partner.MoveToDefaultPosition({'speed': 1, 'position': 1, 'avoidPlayer': True, 'tolerance': 0.0, 'avoidWall': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
    }

    Partner.EnableAutoMovement()
    HylianMC000.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'facial': 'smile', 'message': 'quest/QuestAreaG:Bring_SnowMountain030_120', 'selfTalkAnimName': 'talk01', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain030_130', 'getAttention': False})
    } {
        HylianMC000.PlayAnimation({'name': 'happy03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC000.SetFacialExpression({'expression': 'smile'})
    }

    Timer.Wait({'time': 0.5})

    fork {
        HylianMC000.ResetFacialExpression()
    } {
        HylianMC000.PlayAnimationNoWait({'name': 'wait06', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC000.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    QuestSystem.SetProgress({'symbol': 'Bring_SnowMountain010:4227461475', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void talkNo() {
    HylianMC000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'keepPersonalSpace': False, 'message': 'scenario/HylianGeneralTalk:HylianMC000Talk010_040', 'facial': 'surprise', 'selfTalkAnimName': 'surprised_st01', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Bring_SnowMountain010_FinishTalk() {
    HylianMC000.SetInterestIkEnabled({'enable': False})
    HylianMC000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'talk06', 'message': 'scenario/HylianGeneralTalk:HylianMC000Talk025_010', 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianMC000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianMC000.Talk({'message': 'scenario/HylianGeneralTalk:HylianMC000Talk025_020', 'getAttention': False})
    } {
        HylianMC000.PlayAnimation({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC000.SetFacialExpression({'expression': 'smile'})
    }

}

void Quest_11() {

    call EvResetCommon.AllReset_SensorQuest()

    HylianMC000.SetInterestIkEnabled({'enable': True})
    HylianMC000.AimActor({'actor': ActorIdentifier(name="DandarmaBullet"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianMC000.SetFacialExpression({'expression': 'surprise'})
    HylianMC000.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    DandarmaBullet.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="HylianMC000"), 'index': 1, 'offsetY': 0.0})
    DandarmaBullet.PlayAnimationNoWait({'name': 'pose_copyobject_a', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="HylianMC000"), 'offsetY': 0.0})
    Player.AimActor({'actor': ActorIdentifier(name="HylianMC000"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    HylianMC000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaG:Bring_SnowMountain030_010', 'facial': 'surprise', 'selfTalkAnimName': 'talk06', 'aimToPlayer': False, 'absorbAllPastedActors': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianMC000.SetInterestIkEnabled({'enable': False})
    HylianMC000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain030_020', 'getAttention': False})
    } {
        HylianMC000.PlayAnimation({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HylianMC000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianMC000.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain030_030', 'getAttention': False})
    } {
        HylianMC000.PlayAnimation({'name': 'talk03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC000.SetFacialExpression({'expression': 'smile'})
    }

    HylianMC000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain030_040', 'getAttention': False})
    } {
        HylianMC000.PlayAnimation({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC000.SetFacialExpression({'expression': 'normal'})
    }

    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    Player.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="HylianMC000"), 'offsetY': 0.0})
    Player.AimActor({'actor': ActorIdentifier(name="HylianMC000"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain030_060', 'getAttention': False})
    } {
        HylianMC000.PlayAnimation({'name': 'angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HylianMC000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain030_070', 'getAttention': False})
    } {
        HylianMC000.PlayAnimation({'name': 'love_cats', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC000.SetFacialExpression({'expression': 'surprise'})
    }

    HylianMC000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain030_080', 'getAttention': False})
    } {
        HylianMC000.PlayAnimation({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC000.SetFacialExpression({'expression': 'sad'})
    }

    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    HylianMC000.PlayAnimation({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    DandarmaBullet.Destroy()
    Timer.Wait({'time': 2.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})

    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain030_090', 'getAttention': False})
    } {
        HylianMC000.SetFacialExpression({'expression': 'sad'})
    }

    HylianMC000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain030_100', 'getAttention': False})
    } {
        HylianMC000.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC000.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain030_110', 'getAttention': False})
    } {
        HylianMC000.PlayAnimation({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC000.SetFacialExpression({'expression': 'normal'})
    }

    Player.PlayAnimation({'name': 'ev_hand_over', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'SmoothieIngredient05', 'count': 8, 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})

    fork {
        Zelda.ResetFacialExpression()
    } {
        Partner.MoveToDefaultPosition({'speed': 1, 'position': 1, 'avoidPlayer': True, 'tolerance': 0.0, 'avoidWall': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
    }

    Partner.EnableAutoMovement()
    HylianMC000.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'facial': 'smile', 'message': 'quest/QuestAreaG:Bring_SnowMountain030_120', 'selfTalkAnimName': 'talk01', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        HylianMC000.Talk({'message': 'quest/QuestAreaG:Bring_SnowMountain030_130', 'getAttention': False})
    } {
        HylianMC000.PlayAnimation({'name': 'happy03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC000.SetFacialExpression({'expression': 'smile'})
    }

    Timer.Wait({'time': 0.5})

    fork {
        HylianMC000.ResetFacialExpression()
    } {
        HylianMC000.PlayAnimationNoWait({'name': 'wait06', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC000.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    QuestSystem.SetProgress({'symbol': 'Bring_SnowMountain010:4227461475', 'isShowTelopInEvent': False, 'isFrontFade': False})
}
