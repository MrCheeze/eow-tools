-------- EventFlow: HyruleKing --------

Actor: HyruleKing
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimation', 'SetTalkerName', 'AimCompassPoint', 'AimActor', 'SetFacialExpression', 'AimToInitialAngle', 'TalkKeep', 'PlayAnimationNoWait', 'SetInterestIkEnabled', 'ResetFacialExpression']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['SetZeldaHood', 'PlayAnimation']
queries: ['CheckOutfit']
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckMessgaeFlag']
params: None

Actor: MinisterRight
entrypoint: None()
actions: ['AimActor', 'SetInterestIkEnabled', 'Talk', 'SetTalkerName', 'Deactivate', 'Activate', 'PlayAnimation', 'AimToInitialAngle', 'PlayOneshotSE']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'Reset', 'LookAt3ActorsCenterAsTalker']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['GenericItemGetSequence', 'MoveToTargetLinkedPoint', 'AimActor', 'WarpToActorLinkedPoint', 'AimCompassPoint', 'PlayAnimation', 'RemoveItem', 'SetInterestIkEnabled', 'ResetAim', 'AddItem']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Impa
entrypoint: None()
actions: ['AimActor', 'SkipAutoTurn', 'AimToInitialAngle']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['CheckProgress']
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['MoveToTargetLinkedPoint', 'AimActor', 'AimCompassPoint', 'WarpToActorLinkedPoint', 'ResetAim']
queries: []
params: None

Actor: HylianFC000
entrypoint: None()
actions: ['Talk', 'SetTalkerName', 'Activate', 'AimActor', 'MoveToCompassPoint', 'Deactivate', 'SetInterestIkEnabled', 'SetFacialExpression', 'PlayAnimation', 'AimCompassPoint']
queries: []
params: None

Actor: HylianM002
entrypoint: None()
actions: ['Talk', 'Activate', 'MoveToCompassPoint', 'Deactivate', 'AimActor', 'SetInterestIkEnabled', 'SetInstanceVariableBool', 'SetFacialExpression', 'PlayAnimation']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor', 'WarpToActorLinkedPoint']
queries: []
params: None

Actor: HyruleSoldier_SpecialHyruleCastle[01]
entrypoint: None()
actions: ['Talk', 'Activate', 'PlayAnimationNoWait', 'SetInterestIkEnabled', 'MoveToBesideTargetActor', 'Deactivate', 'SetInstanceVariableBool', 'PlayAnimation', 'PlayOneshotSE']
queries: []
params: None

Actor: HyruleSoldier_SpecialHyruleCastle[02]
entrypoint: None()
actions: ['Talk', 'SetInstanceVariableBool', 'Activate', 'Deactivate', 'MoveToTargetLinkedPoint', 'SetFacialExpression', 'SetInterestIkEnabled', 'AimActor', 'PlayAnimation']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['StopAllBGM', 'Prepare', 'PlayBGM', 'PlayZoneBGM']
queries: []
params: None

void talk() {
    HyruleKing.SetTalkerName({'message': 'glossary/Character:HyruleKing', 'keep': False})
    HyruleKing.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HyruleKingTalk010_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk020() {
    HyruleKing.SetTalkerName({'message': 'glossary/Character:HyruleKing', 'keep': False})
    HyruleKing.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HyruleKingTalk020_010', 'playerTalkAnim': False, 'selfTalkAnimName': 'talk', 'facial': 'normal', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HyruleKing.Talk({'message': 'scenario/HylianGeneralTalk:HyruleKingTalk020_020', 'getAttention': False})
    HyruleKing.Talk({'message': 'scenario/HylianGeneralTalk:HyruleKingTalk020_030', 'getAttention': False})
    HyruleKing.Talk({'message': 'scenario/HylianGeneralTalk:HyruleKingTalk020_040', 'getAttention': False})
}

void talk030() {
    HyruleKing.SetTalkerName({'message': 'glossary/Character:HyruleKing', 'keep': False})
    HyruleKing.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'talk', 'facial': 'normal', 'message': 'scenario/HylianGeneralTalk:HyruleKingTalk030_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk010() {
    HyruleKing.SetTalkerName({'message': 'glossary/Character:HyruleKing', 'keep': False})
    HyruleKing.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'talk', 'facial': 'normal', 'message': 'scenario/HylianGeneralTalk:HyruleKingTalk010_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Special_HyruleCastle030_010() {

    call EvResetCommon.AllReset()

    HyruleKing.SetTalkerName({'message': 'glossary/Character:HyruleKing', 'keep': False})
    HyruleKing.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaA:Special_HyruleCastle030_010', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {

        call GeneralSequence.ZeldaTalkMotion()

    } {
        HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle030_030', 'getAttention': False})
    } {
        HyruleKing.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Player.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Player.PlayAnimation({'name': 'ev_hand_over', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.5})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    Player.RemoveItem({'itemKey': 'ItemQuest05', 'count': 1, 'index': -1})
    HyruleKing.AimCompassPoint({'duration': 0.0, 'direction': 0, 'withoutTurn': False, 'immediateTurn': False})
    MinisterRight.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Impa.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 2.0})

    fork {
        Player.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="HyruleKing"), 'index': 9, 'offsetY': 0.0})
    } {
        Partner[companion].WarpToActorLinkedPoint({'actor': ActorIdentifier(name="HyruleKing"), 'index': 11, 'offsetY': 0.0})
    }

    Partner[companion].AimActor({'offsetX': -1.5, 'duration': 0.0, 'actor': ActorIdentifier(name="HyruleKing"), 'withoutTurn': False, 'boneName': '', 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Player.AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    Player.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 6.0, 'weight2': 1.0, 'weight1': 2.0, 'duration': 0.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="HyruleKing"), 'offsetZ': -1.0, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0})
    HyruleKing.SetFacialExpression({'expression': 'smile'})
    HyruleKing.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle030_040', 'getAttention': False})

    fork {
        HyruleKing.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle030_060', 'getAttention': False})
    } {
        HyruleKing.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle030_070', 'getAttention': False})
        Audio.StopAllBGM({'duration': 1.0})
        Audio.Prepare({'label': 'BGM_EV_COMMON2', 'kind': 0, 'volume': 1.0})
    } {
        HyruleKing.PlayAnimation({'name': 'talk_nohand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier_SpecialHyruleCastle[01].SetInstanceVariableBool({'value': True, 'name': 'mc052_active'})
    Timer.Wait({'time': 1.0})
    HyruleSoldier_SpecialHyruleCastle[01].Activate()
    HyruleSoldier_SpecialHyruleCastle[01].Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle030_080', 'getAttention': False})
    Audio.PlayBGM({'label': 'BGM_EV_COMMON2', 'ignoreSkip': False, 'volume': 1.0})
    HyruleSoldier_SpecialHyruleCastle[01].SetInterestIkEnabled({'enable': False})

    fork {
        MinisterRight.AimActor({'actor': ActorIdentifier(name="HyruleSoldier_SpecialHyruleCastle", sub_name="01"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Impa.AimActor({'actor': ActorIdentifier(name="HyruleSoldier_SpecialHyruleCastle", sub_name="01"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.25})
        Player.AimActor({'actor': ActorIdentifier(name="HyruleSoldier_SpecialHyruleCastle", sub_name="01"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.5})
        Player.AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Player.MoveToTargetLinkedPoint({'speed': 0, 'withoutTurn': True, 'index': 10, 'actor': ActorIdentifier(name="HyruleKing"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Player.AimActor({'actor': ActorIdentifier(name="HyruleSoldier_SpecialHyruleCastle", sub_name="01"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Zelda.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="HyruleSoldier_SpecialHyruleCastle", sub_name="01"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.5})
        Partner.AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Partner.MoveToTargetLinkedPoint({'speed': 0, 'withoutTurn': True, 'index': 12, 'actor': ActorIdentifier(name="HyruleKing"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Partner.AimActor({'actor': ActorIdentifier(name="HyruleSoldier_SpecialHyruleCastle", sub_name="01"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleSoldier_SpecialHyruleCastle[01].MoveToBesideTargetActor({'speed': 1, 'actor': ActorIdentifier(name="HyruleKing"), 'offsetZ': 5.0, 'offsetX': 0.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    }

    MinisterRight.SetInterestIkEnabled({'enable': True})
    Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 6.0, 'weight2': 1.0, 'weight1': 2.0, 'duration': 0.0, 'offsetZ': -1.399999976158142, 'actor1': ActorIdentifier(name="HyruleSoldier_SpecialHyruleCastle", sub_name="01"), 'actor2': ActorIdentifier(name="HyruleKing"), 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0})

    fork {
        HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle030_090', 'getAttention': False})
    } {
        HyruleKing.SetFacialExpression({'expression': 'angry'})
    }


    fork {
        HyruleSoldier_SpecialHyruleCastle[01].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier_SpecialHyruleCastle[01].Talk({'getAttention': True, 'message': 'quest/QuestAreaA:Special_HyruleCastle030_100'})
    }

    HyruleSoldier_SpecialHyruleCastle[01].Talk({'getAttention': True, 'message': 'quest/QuestAreaA:Special_HyruleCastle030_110'})
    HyruleSoldier_SpecialHyruleCastle[01].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.SetTalkerName({'message': 'glossary/Character:HyruleKing', 'keep': False})

    fork {
        HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle030_140', 'getAttention': False})
    } {
        HyruleKing.PlayAnimation({'name': 'talk_nohand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleKing.SetFacialExpression({'expression': 'normal'})
    }

    switch QuestSystem.CheckProgress({'symbol': 'LastDungeon:868176213'}) {
      case 4294967295:
        Event277:
        HyruleKing.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        MinisterRight.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

        fork {
            HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle030_150', 'getAttention': False})
        } {
            HyruleKing.PlayAnimation({'name': 'order_st,order_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleKing.SetFacialExpression({'expression': 'angry'})
        } {
            Player.AimActor({'duration': 0.800000011920929, 'actor': ActorIdentifier(name="HyruleKing"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner.AimActor({'duration': 0.800000011920929, 'actor': ActorIdentifier(name="HyruleKing"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Impa.AimActor({'duration': 0.800000011920929, 'actor': ActorIdentifier(name="HyruleKing"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        MinisterRight.SetTalkerName({'message': 'glossary/Character:MinisterRight', 'keep': False})

        fork {
            MinisterRight.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle030_160', 'getAttention': False})
        } {
            MinisterRight.PlayAnimation({'name': 'salute', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Player.SetInterestIkEnabled({'enable': True})
            Player.AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterRight"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="MinisterRight"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            MinisterRight.PlayOneshotSE({'label': 'VO_UGI_007_7', 'volume': 1.0, 'pitch': 1.0})
        }

        Event298:
        Fade.StartPreset({'preset': 'FadeOutSlowB'})
        HyruleKing.AimCompassPoint({'duration': 0.0, 'direction': 0, 'withoutTurn': False, 'immediateTurn': False})
        HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            MinisterRight.Deactivate()
        } {
            HyruleSoldier_SpecialHyruleCastle[01].Deactivate()
        }


        fork {
            Player.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="HyruleKing"), 'index': 7, 'offsetY': 0.0})
        } {
            Partner[companion].WarpToActorLinkedPoint({'index': 8, 'actor': ActorIdentifier(name="HyruleKing"), 'offsetY': 0.0})
        }

        HyruleKing.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].AimActor({'offsetX': -1.5, 'duration': 0.0, 'actor': ActorIdentifier(name="HyruleKing"), 'withoutTurn': False, 'boneName': '', 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Player.AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
        Impa.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 6.0, 'weight2': 1.0, 'weight1': 2.0, 'duration': 0.0, 'offsetZ': -1.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="HyruleKing"), 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0})
        Timer.Wait({'time': 2.0})
        Fade.StartPreset({'preset': 'FadeInSlow'})
        HyruleKing.SetTalkerName({'message': 'glossary/Character:HyruleKing', 'keep': False})

        fork {
            HyruleKing.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle030_170', 'getAttention': False})
        }


        fork {
            HyruleKing.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle030_180', 'getAttention': False})
        } {
            HyruleKing.SetFacialExpression({'expression': 'normal'})
        }


        fork {
            HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle030_190', 'getAttention': False})
            Audio.StopAllBGM({'duration': 1.5})
        } {
            HyruleKing.PlayAnimation({'name': 'talk_onehand', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Impa.SkipAutoTurn()
        EventFlags.SetFlag({'symbol': 'ForestSquare_Crack_Active', 'value': True})
        QuestSystem.SetProgress({'symbol': 'Special_HyruleCastle010:2304516461', 'isShowTelopInEvent': False, 'isFrontFade': False})
        Audio.PlayZoneBGM({'stopbgm': False})
      case [0, 1]:
        switch QuestSystem.CheckProgress({'symbol': 'LastDungeon:3262011794'}) {
          case [4294967295, 0]:

            fork {
                HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle030_150', 'getAttention': False})
            } {
                HyruleKing.PlayAnimation({'name': 'order_st,order_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HyruleKing.SetFacialExpression({'expression': 'angry'})
            } {
                Player.SetInterestIkEnabled({'enable': True})
                Player.AimActor({'duration': 0.800000011920929, 'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleKing"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                Timer.Wait({'time': 0.5})
                Player.AimActor({'duration': 0.800000011920929, 'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier_SpecialHyruleCastle", sub_name="01"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }


            fork {
                HyruleSoldier_SpecialHyruleCastle[01].Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle030_160', 'getAttention': False})
            } {
                HyruleSoldier_SpecialHyruleCastle[01].PlayAnimation({'name': 'salute_st,salute_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HyruleSoldier_SpecialHyruleCastle[01].PlayOneshotSE({'label': 'VO_HYL_SOL_001_004', 'volume': 1.0, 'pitch': 1.0})
            }

            goto Event298
          case 1:
            goto Event277
        }
    }
}

void Special_HyruleCastle040() {
    HyruleKing.SetTalkerName({'message': 'glossary/Character:HyruleKing', 'keep': False})
    HyruleKing.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'quest/QuestAreaA:Special_HyruleCastle040_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HyruleKing.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'quest/QuestAreaA:Special_HyruleCastle040_020', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Special_HyruleCastle100() {
    HylianM002.SetInstanceVariableBool({'value': True, 'name': 'mc052_active'})
    HyruleSoldier_SpecialHyruleCastle[02].SetInstanceVariableBool({'value': True, 'name': 'HyruleSoldier_SpecialHyruleCastle_active'})

    call EvResetCommon.AllResetNowait()

    HylianFC000.Activate()
    HylianM002.Activate()
    HyruleSoldier_SpecialHyruleCastle[02].Activate()
    if Zelda.CheckOutfit({'outfit': 'Adventure1'}) {
        Zelda.SetZeldaHood({'isOn': False})
    }
    switch QuestSystem.CheckProgress({'symbol': 'LastDungeon:868176213'}) {
      case 4294967295:
        Event333:
        MinisterRight.Activate()
        Event28:

        fork {
            HyruleSoldier_SpecialHyruleCastle[02].AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="HylianFC000"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            MinisterRight.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="HylianM002"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Impa.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="HylianFC000"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            HylianFC000.AimActor({'withoutTurn': False, 'duration': 0.0, 'actor': ActorIdentifier(name="HyruleKing"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            HylianM002.AimActor({'withoutTurn': False, 'duration': 0.0, 'actor': ActorIdentifier(name="HyruleKing"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Player.AimActor({'withoutTurn': False, 'duration': 0.0, 'actor': ActorIdentifier(name="HyruleKing"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner.WarpToActorLinkedPoint({'index': 15, 'actor': ActorIdentifier(name="HyruleKing"), 'offsetY': 0.0})
            Partner.AimActor({'withoutTurn': False, 'duration': 0.0, 'actor': ActorIdentifier(name="HyruleKing"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Camera.LookAt3ActorsCenterAsTalker({'weight2': 1.0, 'weight1': 2.0, 'offsetZ': -1.2999999523162842, 'duration': 0.0, 'distanceOffset': 6.0, 'actor1': ActorIdentifier(name="HylianM002"), 'actor2': ActorIdentifier(name="HyruleKing"), 'actor3': ActorIdentifier(name="HylianFC000"), 'offsetY': -0.20000000298023224, 'weight3': 1.0, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0})
        Timer.Wait({'time': 2.0})
        Fade.StartPreset({'preset': 'FadeInSlow'})

        fork {
            HylianM002.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle100_010', 'getAttention': False})
        } {
            HylianM002.PlayAnimation({'name': 'talk01_R', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        HylianM002.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle100_020', 'getAttention': False})
        HylianM002.PlayAnimation({'name': 'wait01_R', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleKing.SetTalkerName({'message': 'glossary/Character:HyruleKing', 'keep': False})

        fork {
            HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle100_040', 'getAttention': False})
        } {
            HyruleKing.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
            HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Timer.Wait({'time': 0.5})
        HyruleKing.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="HylianFC000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle100_090', 'getAttention': False})

        fork {
            HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle100_092', 'getAttention': False})
        } {
            HyruleKing.PlayAnimation({'name': 'talk_nohand', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HylianFC000.SetTalkerName({'message': 'glossary/Character:HylianFC000', 'keep': False})

        fork {
            HylianFC000.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle100_094', 'getAttention': False})
        } {
            HylianFC000.AimActor({'actor': ActorIdentifier(name="HylianM002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.800000011920929})
            HylianM002.AimActor({'actor': ActorIdentifier(name="HylianFC000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        HyruleKing.SetTalkerName({'message': 'glossary/Character:HyruleKing', 'keep': False})

        fork {
            HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle100_100', 'getAttention': False})
        } {
            HylianFC000.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            HylianM002.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            HyruleKing.PlayAnimation({'name': 'talk_nohand', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle100_120', 'getAttention': False})

        fork {
            HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle100_130', 'getAttention': False})
        } {
            HyruleKing.SetFacialExpression({'expression': 'smile'})
        }

        HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HylianFC000.SetTalkerName({'message': 'glossary/Character:HylianFC000', 'keep': False})

        fork {
            HylianFC000.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle100_140', 'getAttention': False})
        } {
            HylianFC000.PlayAnimation({'name': 'happy03,wait06', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        HyruleKing.SetTalkerName({'message': 'glossary/Character:HyruleKing', 'keep': False})

        fork {
            HyruleKing.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
            HyruleKing.SetInterestIkEnabled({'enable': False})
        } {
            HyruleKing.SetFacialExpression({'expression': 'normal'})
        }


        fork {
            HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle100_150', 'getAttention': False})
        } {
            HyruleKing.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            HyruleSoldier_SpecialHyruleCastle[02].Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle100_160', 'getAttention': False})
        } {
            HyruleSoldier_SpecialHyruleCastle[02].PlayAnimation({'name': 'salute_st,salute_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier_SpecialHyruleCastle[02].AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            MinisterRight.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        HylianFC000.SetTalkerName({'message': 'glossary/Character:HylianFC000', 'keep': False})

        fork {
            HylianFC000.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle100_170', 'getAttention': False})
        } {
            HyruleSoldier_SpecialHyruleCastle[02].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HylianFC000.SetFacialExpression({'expression': 'smile'})
        } {
            HylianFC000.PlayAnimation({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Player.SetInterestIkEnabled({'enable': True})
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HylianFC000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.4000000059604645})
            HyruleSoldier_SpecialHyruleCastle[02].AimActor({'actor': ActorIdentifier(name="HylianFC000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.4000000059604645})
            MinisterRight.AimActor({'actor': ActorIdentifier(name="HylianFC000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        HylianFC000.SetInterestIkEnabled({'enable': False})

        fork {
            HylianFC000.MoveToCompassPoint({'direction': 0, 'distance': 8.0, 'customSpeed': 11.0, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        } {
            HyruleSoldier_SpecialHyruleCastle[02].SetFacialExpression({'expression': 'surprise'})
        } {
            Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="HylianFC000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            HylianM002.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="HylianFC000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Impa.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="HylianFC000"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            HylianM002.SetFacialExpression({'expression': 'surprise'})
        } {
            Partner.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="HylianFC000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            HylianFC000.SetInterestIkEnabled({'enable': True})
            HylianFC000.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Timer.Wait({'time': 0.20000000298023224})
            HylianFC000.AimCompassPoint({'withoutTurn': True, 'direction': 0, 'duration': 0.20000000298023224, 'immediateTurn': False})
        }


        fork {
            HylianM002.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle100_180', 'getAttention': False})
        } {
            HylianM002.SetFacialExpression({'expression': 'angry'})
        } {
            HylianM002.PlayAnimation({'name': 'talk01_R', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        HylianM002.SetInterestIkEnabled({'enable': False})
        HyruleSoldier_SpecialHyruleCastle[02].SetInterestIkEnabled({'enable': False})

        fork {
            HylianM002.MoveToCompassPoint({'speed': 1, 'direction': 0, 'distance': 8.0, 'timeOut': 4.0, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        } {
            HyruleSoldier_SpecialHyruleCastle[02].MoveToTargetLinkedPoint({'index': 6, 'speed': 1, 'actor': ActorIdentifier(name="HyruleKing"), 'timeOut': 4.0, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        } {
            HyruleSoldier_SpecialHyruleCastle[02].SetFacialExpression({'expression': 'angry'})
        }

        HylianM002.Deactivate()
        HylianFC000.Deactivate()
        HyruleSoldier_SpecialHyruleCastle[02].Deactivate()
        Timer.Wait({'time': 0.800000011920929})
        HyruleKing.SetTalkerName({'message': 'glossary/Character:HyruleKing', 'keep': False})

        fork {
            Player.ResetAim()
        } {
            Partner.ResetAim()
        }


        fork {
            Player.MoveToTargetLinkedPoint({'index': 14, 'speed': 0, 'actor': ActorIdentifier(name="HyruleKing"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        } {
            Timer.Wait({'time': 0.800000011920929})
            Partner.MoveToTargetLinkedPoint({'withoutTurn': False, 'speed': 0, 'index': 16, 'customSpeed': 0.0, 'actor': ActorIdentifier(name="HyruleKing"), 'tolerance': 0.0, 'timeOut': 7.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        } {
            MinisterRight.AimActor({'duration': 0.0, 'withoutTurn': True, 'actor': ActorIdentifier(name="Player"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Impa.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        fork {
            Player.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="HyruleKing"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="HyruleKing"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Timer.Wait({'time': 1.2000000476837158})

        fork {
            HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle110_010', 'getAttention': False})
        } {
            HyruleKing.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle110_020', 'getAttention': False})
        } {
            HyruleKing.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleKing.SetFacialExpression({'expression': 'sleep'})
        }


        fork {
            HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle110_030', 'getAttention': False})
        } {
            HyruleKing.PlayAnimation({'name': 'talk_nohand', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleKing.SetFacialExpression({'expression': 'normal'})
        }


        fork {
            HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle110_040', 'getAttention': False})
        } {
            HyruleKing.SetFacialExpression({'expression': 'think'})
        }


        fork {
            HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle110_050', 'getAttention': False})
        } {
            HyruleKing.SetFacialExpression({'expression': 'normal'})
        } {
            HyruleKing.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle110_060', 'getAttention': False})
        } {
            HyruleKing.PlayAnimation({'name': 'talk_onehand', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle110_070', 'getAttention': False})

        fork {
            HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle110_080', 'getAttention': False})
        } {
            HyruleKing.SetFacialExpression({'expression': 'think'})
        } {
            HyruleKing.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
            HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle110_090', 'getAttention': False})
        } {
            HyruleKing.SetFacialExpression({'expression': 'normal'})
        } {
            HyruleKing.PlayAnimation({'name': 'talk_onehand', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Player.GenericItemGetSequence({'itemKey': 'ZeldaClothes01', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
        Player.AddItem({'itemKey': 'ZeldaClothes01', 'count': 1, 'index': -1, 'autoEquip': False})
        Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 6.0, 'weight2': 1.0, 'weight1': 2.0, 'offsetZ': -1.2999999523162842, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0})
        HyruleKing.SetTalkerName({'message': 'glossary/Character:HyruleKing', 'keep': False})

        fork {
            Partner[companion].AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Player.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        fork {
            HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle110_100', 'getAttention': False})
        } {
            HyruleKing.PlayAnimation({'name': 'talk_onehand', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle110_110', 'getAttention': False})
        } {
            HyruleKing.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            Timer.Wait({'time': 1.2000000476837158})
        } {
            HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle110_120', 'getAttention': False})
        } {
            HyruleKing.PlayAnimation({'name': 'talk_nohand', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleKing.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle110_125', 'getAttention': False})
        } {
            HyruleKing.PlayAnimation({'name': 'talk_onehand', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle110_130', 'getAttention': False})
        } {
            HyruleKing.PlayAnimation({'name': 'talk_nohand', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleKing.SetFacialExpression({'expression': 'think'})
        }


        fork {
            HyruleKing.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle110_140', 'getAttention': False})
        } {
            HyruleKing.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleKing.SetFacialExpression({'expression': 'smile'})
        }

        Fade.StartPreset({'preset': 'FadeOutNormalB'})
        if Zelda.CheckOutfit({'outfit': 'Adventure1'}) {
            Zelda.SetZeldaHood({'isOn': True})
        }
        HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Impa.AimToInitialAngle({'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
        MinisterRight.AimToInitialAngle({'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
        Timer.Wait({'time': 1.0})
        Fade.StartPreset({'preset': 'FadeInNormal'})
        QuestSystem.SetProgress({'symbol': 'Special_HyruleCastle010:2569226883', 'isShowTelopInEvent': False, 'isFrontFade': False})
      case [0, 1]:
        switch QuestSystem.CheckProgress({'symbol': 'LastDungeon:3262011794'}) {
          case [4294967295, 0]:
            goto Event28
          case 1:
            goto Event333
        }
    }
}

void talk040() {
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/HylianGeneralTalk:HyruleKingTalk040_010'}) {
        HyruleKing.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'talk', 'facial': 'normal', 'message': 'scenario/HylianGeneralTalk:HyruleKingTalk040_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        HyruleKing.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        call GeneralSequence.ZeldaTalkMotion()

        HyruleKing.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleKing.Talk({'message': 'scenario/HylianGeneralTalk:HyruleKingTalk040_020', 'getAttention': False})
        Event457:
        HyruleKing.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleKing.Talk({'message': 'scenario/HylianGeneralTalk:HyruleKingTalk040_030', 'getAttention': False})
    } else {
        HyruleKing.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HyruleKingTalk040_020', 'selfTalkAnimName': 'think', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        goto Event457
    }
}

void talk050() {
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/HylianGeneralTalk:HyruleKingTalk050_010'}) {
        HyruleKing.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'talk', 'facial': 'normal', 'message': 'scenario/HylianGeneralTalk:HyruleKingTalk050_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        HyruleKing.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        call GeneralSequence.ZeldaTalkMotion()

        HyruleKing.SetFacialExpression({'expression': 'smile'})
        HyruleKing.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleKing.TalkKeep({'message': 'scenario/HylianGeneralTalk:HyruleKingTalk050_020', 'getAttention': False})
        HyruleKing.ResetFacialExpression()
        HyruleKing.TalkKeep({'message': 'scenario/HylianGeneralTalk:HyruleKingTalk050_030', 'getAttention': False})
        Event146:
        HyruleKing.Talk({'message': 'scenario/HylianGeneralTalk:HyruleKingTalk050_040', 'getAttention': False})
    } else {
        HyruleKing.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'talk', 'facial': 'normal', 'message': 'scenario/HylianGeneralTalk:HyruleKingTalk050_030', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        goto Event146
    }
}

void HyruleKingTalk015() {
    HyruleKing.SetTalkerName({'message': 'glossary/Character:HyruleKing', 'keep': False})
    HyruleKing.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'scenario/HylianGeneralTalk:HyruleKingTalk015_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        HyruleKing.Talk({'message': 'scenario/HylianGeneralTalk:HyruleKingTalk015_020', 'getAttention': False})
    } {
        HyruleKing.SetFacialExpression({'expression': 'smile'})
    }

}
