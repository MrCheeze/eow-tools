-------- EventFlow: HylianM024 --------

Actor: Dialog
entrypoint: None()
actions: ['ShowTalker']
queries: ['GetLastResult']
params: None

Actor: HylianM024
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'AimPlayer', 'SetTalkerName', 'PlayAnimationNoWait', 'KeepAnimationAfterEvent', 'WarpToActorLinkedPointWithCompassPoint', 'SetInterestIkEnabled', 'SetFacialExpression', 'AimActorLinkedPoint']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['CheckProgress']
params: None

Actor: Player
entrypoint: None()
actions: ['AddItem', 'GenericItemGetSequence', 'WarpToActorLinkedPointWithCompassPoint', 'SetInterestIkEnabled', 'AimActor', 'AimActorLinkedPoint', 'PlayAnimationNoWait', 'DisappearRidingHorse']
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

Actor: Partner
entrypoint: None()
actions: ['SetInterestIkEnabled', 'AimActorLinkedPoint', 'AimActor']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor', 'PlayAnimationNoWait', 'WarpToActorLinkedPointWithCompassPoint']
queries: []
params: None

void talk010() {
    HylianM024.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianM024.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianM024Talk010_010', 'aimToPlayer': False, 'selfTalkAnimName': '', 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianM024.Talk({'message': 'scenario/HylianGeneralTalk:HylianM024Talk010_020', 'getAttention': False})
}

void talk020() {
    HylianM024.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianM024Talk020_Q1', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        HylianM024.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianM024Talk020_Q1_A1_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else {
        HylianM024.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianM024Talk020_Q1_A2_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
}

void Quest_Balom010_010Talk() {
    Player.DisappearRidingHorse()

    call EvResetCommon.AllReset()

    HylianM024.SetInterestIkEnabled({'enable': False})
    HylianM024.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaPlains:Balom_HyrulePlains010_010', 'playerTalkAnim': False, 'facial': 'surprise', 'selfTalkAnimName': 'ev_down_st,ev_down_lp', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    HylianM024.WarpToActorLinkedPointWithCompassPoint({'direction': 3, 'index': 1, 'actor': ActorIdentifier(name="HylianM024"), 'offsetY': 0.0})
    Player.WarpToActorLinkedPointWithCompassPoint({'direction': 1, 'index': 0, 'actor': ActorIdentifier(name="HylianM024"), 'offsetY': 0.0})
    Partner[companion].WarpToActorLinkedPointWithCompassPoint({'offsetY': 1.0, 'actor': ActorIdentifier(name="HylianM024"), 'index': 3, 'direction': 1})
    Partner[companion].AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="HylianM024"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianM024.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianM024.SetFacialExpression({'expression': 'normal'})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})

    fork {
        HylianM024.Talk({'message': 'quest/QuestAreaPlains:Balom_HyrulePlains010_020', 'getAttention': False})
    } {
        HylianM024.PlayAnimationNoWait({'name': 'yes01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HylianM024.SetTalkerName({'message': 'glossary/Character:HylianM024', 'keep': False})

    fork {
        HylianM024.Talk({'message': 'quest/QuestAreaPlains:Balom_HyrulePlains010_030', 'getAttention': False})
    } {
        HylianM024.PlayAnimationNoWait({'name': 'no01,think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM024.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        HylianM024.Talk({'message': 'quest/QuestAreaPlains:Balom_HyrulePlains010_050', 'getAttention': False})
    } {
        HylianM024.PlayAnimationNoWait({'name': 'sad_st02,sad_lp02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM024.SetFacialExpression({'expression': 'sad'})
    }

    Timer.Wait({'time': 1.0})
    Player.SetInterestIkEnabled({'enable': False})
    Partner.SetInterestIkEnabled({'enable': False})

    fork {
        Dialog.ShowTalker({'message': 'quest/QuestAreaPlains:Balom_HyrulePlains010_060', 'talker': 'glossary/Character:Unknown'})
    } {
        Audio.PlayOneshotSystemSE({'label': 'STRM_SE_ENEMY_BALOM_LV1_EV_VOICE1', 'volume': 1.0, 'pitch': 1.0})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Player.AimActorLinkedPoint({'pointIndex': 2, 'withoutTurn': False, 'actor': ActorIdentifier(name="HylianM024"), 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Player.PlayAnimationNoWait({'name': 'search', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner.AimActorLinkedPoint({'pointIndex': 2, 'withoutTurn': False, 'actor': ActorIdentifier(name="HylianM024"), 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].PlayAnimationNoWait({'name': 'panic', 'restart': False, 'layer': 0, 'blendFrame': -1})
        Timer.Wait({'time': 0.5})
        Partner[companion].PlayAnimationNoWait({'restart': False, 'name': 'lookaround', 'layer': 0, 'blendFrame': -1})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        HylianM024.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        HylianM024.Talk({'message': 'quest/QuestAreaPlains:Balom_HyrulePlains010_070', 'getAttention': False})
    } {
        HylianM024.PlayAnimationNoWait({'name': 'yes01,think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM024.SetFacialExpression({'expression': 'sleep'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HylianM024"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].PlayAnimationNoWait({'restart': False, 'name': 'wait', 'layer': 0, 'blendFrame': -1})
        Partner.SetInterestIkEnabled({'enable': True})
        Partner.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HylianM024"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        HylianM024.PlayAnimationNoWait({'name': 'surprised_st01_P', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM024.SetFacialExpression({'expression': 'surprise'})
    } {
        HylianM024.AimActorLinkedPoint({'pointIndex': 2, 'actor': ActorIdentifier(name="HylianM024"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_HYL_M005_1_006_1', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 1.0})
    HylianM024.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianM024.SetInterestIkEnabled({'enable': True})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActorLinkedPoint({'pointIndex': 2, 'withoutTurn': True, 'actor': ActorIdentifier(name="HylianM024"), 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActorLinkedPoint({'pointIndex': 2, 'actor': ActorIdentifier(name="HylianM024"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 1.0})
    HylianM024.SetInterestIkEnabled({'enable': False})

    fork {
        HylianM024.Talk({'message': 'quest/QuestAreaPlains:Balom_HyrulePlains010_080', 'getAttention': False})
    } {
        HylianM024.PlayAnimationNoWait({'name': 'no01,look', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM024.SetFacialExpression({'expression': 'sad'})
    } {
        HylianM024.AimActorLinkedPoint({'pointIndex': 2, 'actor': ActorIdentifier(name="HylianM024"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HylianM024.KeepAnimationAfterEvent()
    QuestSystem.SetProgress({'symbol': 'Balom_HyrulePlains010:2958223707', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Quest_Balom010_020Talk() {
    HylianM024.SetTalkerName({'message': 'glossary/Character:HylianM024', 'keep': False})

    fork {
        Dialog.ShowTalker({'talker': 'glossary/Character:Unknown', 'message': 'quest/QuestAreaPlains:Balom_HyrulePlains020_010'})
    } {
        Audio.PlayOneshotSystemSE({'label': 'STRM_SE_ENEMY_BALOM_LV1_EV_VOICE1', 'volume': 1.0, 'pitch': 1.0})
    } {
        Player.SetInterestIkEnabled({'enable': True})
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActorLinkedPoint({'pointIndex': 2, 'actor': ActorIdentifier(name="HylianM024"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner.SetInterestIkEnabled({'enable': True})
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActorLinkedPoint({'pointIndex': 2, 'actor': ActorIdentifier(name="HylianM024"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HylianM024.SetInterestIkEnabled({'enable': False})

    fork {
        HylianM024.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaPlains:Balom_HyrulePlains020_020', 'playerTalkAnim': False, 'selfTalkAnimName': 'sad_st02,sad_lp02', 'facial': 'sad', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HylianM024"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HylianM024"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void Quest_Balom010_030Talk() {
    Player.DisappearRidingHorse()

    call EvResetCommon.AllReset()

    switch QuestSystem.CheckProgress({'symbol': 'Balom_HyrulePlains010:2332086646'}) {
      case 4294967295:
        HylianM024.SetTalkerName({'message': 'glossary/Character:HylianM024', 'keep': False})
        HylianM024.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaPlains:Balom_HyrulePlains030_020', 'selfTalkAnimName': 'yes01,think01', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

        call GeneralSequence.ZeldaTalkMotion()

        Timer.Wait({'time': 0.5})

        fork {
            HylianM024.Talk({'message': 'quest/QuestAreaPlains:Balom_HyrulePlains030_030', 'getAttention': False})
        } {
            HylianM024.PlayAnimationNoWait({'name': 'surprised_st01_P', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HylianM024.SetFacialExpression({'expression': 'surprise'})
        }


        fork {
            HylianM024.Talk({'message': 'quest/QuestAreaPlains:Balom_HyrulePlains030_040', 'getAttention': False})
        } {
            HylianM024.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HylianM024.SetFacialExpression({'expression': 'smile'})
        }


        fork {
            HylianM024.Talk({'message': 'quest/QuestAreaPlains:Balom_HyrulePlains030_050', 'getAttention': False})
        } {
            HylianM024.PlayAnimationNoWait({'name': 'yes01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HylianM024.SetFacialExpression({'expression': 'normal'})
        }

        HylianM024.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Player.AddItem({'itemKey': 'Ornament13', 'count': 1, 'index': -1, 'autoEquip': False})
        Player.GenericItemGetSequence({'itemKey': 'Ornament13', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})

        fork {
            HylianM024.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'facial': 'normal', 'message': 'quest/QuestAreaPlains:Balom_HyrulePlains030_055', 'selfTalkAnimName': 'wait04', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Partner[companion].AimActor({'actor': ActorIdentifier(name="HylianM024"), 'duration': 1.399999976158142, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        fork {
            HylianM024.Talk({'message': 'quest/QuestAreaPlains:Balom_HyrulePlains030_060', 'getAttention': False})
        } {
            HylianM024.SetFacialExpression({'expression': 'smile'})
        } {
            HylianM024.PlayAnimationNoWait({'name': 'yes01,talk11', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HylianM024.Talk({'message': 'quest/QuestAreaPlains:Balom_HyrulePlains030_070', 'getAttention': False})
        } {
            HylianM024.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HylianM024.SetFacialExpression({'expression': 'sleep'})
        }

        QuestSystem.SetProgress({'symbol': 'Balom_HyrulePlains010:2332086646', 'isShowTelopInEvent': False, 'isFrontFade': False})
      case [0, 1]:
        HylianM024.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianM024Talk030_010', 'playerTalkAnim': False, 'selfTalkAnimName': 'yes01,talk11', 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
}
