-------- EventFlow: HylianM030 --------

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: HylianM030
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimation', 'PlayAnimationNoWait', 'SetFacialExpression', 'GenericTalkSequence', 'AimActor', 'AimPlayer', 'Destroy', 'PlayAnimationEx', 'SetInterestIkEnabled', 'TalkKeep', 'SetInstanceVariableBool']
queries: ['GetInstanceVariableBool']
params: None

Actor: Player
entrypoint: None()
actions: ['GenericItemGetSequence', 'AddItem', 'AimActor', 'AbsorbAllPastedActors', 'WarpToActorLinkedPoint', 'SetInterestIkEnabled', 'PlayAnimationNoWait']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Peahat
entrypoint: None()
actions: ['PlayAnimation', 'PlayAnimationNoWait', 'Deactivate', 'AimCompassPoint']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'LookAt3ActorsCenterAsTalker', 'Reset']
queries: []
params: None

Actor: HylianF026
entrypoint: None()
actions: ['Talk', 'MoveToTargetLinkedPoint', 'PlayAnimation', 'AimActor', 'PlayAnimationNoWait', 'Destroy', 'SetActorSwitch', 'AimPlayer', 'SetFacialExpression', 'Activate']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: ['GetLastResult4']
params: None

Actor: Partner
entrypoint: None()
actions: ['AimActor', 'SetInterestIkEnabled', 'PlayAnimation', 'MoveToCompassPoint', 'AimCompassPoint']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE']
queries: []
params: None

void talk010() {
    if !HylianM030.GetInstanceVariableBool({'name': 'talkFinish'}) {
        HylianM030.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianM030Talk010_010', 'facial': 'sad', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        HylianM030.SetInstanceVariableBool({'value': True, 'name': 'talkFinish'})
        Event3:
        HylianM030.Talk({'message': 'scenario/HylianGeneralTalk:HylianM030Talk010_Q1', 'getAttention': False})
        Event279:
        switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
          case 0:
            HylianM030.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            HylianM030.Talk({'message': 'scenario/HylianGeneralTalk:HylianM030Talk010_Q1_A1_010', 'getAttention': False})
            Event128:

            call talk010Q1_Loop()

          case 1:
            HylianM030.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            HylianM030.TalkKeep({'message': 'scenario/HylianGeneralTalk:HylianM030Talk010_Q1_A2_010', 'getAttention': False})
            HylianM030.Talk({'message': 'scenario/HylianGeneralTalk:HylianM030Talk010_Q1_A2_020', 'getAttention': False})
            goto Event128
          case 2:
            HylianM030.Talk({'message': 'scenario/HylianGeneralTalk:HylianM030Talk010_Q1_A3_010', 'getAttention': False})
        }
    } else {

        fork {
            HylianM030.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianM030Talk010_Q1', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_HYL_M7_1_005', 'volume': 1.0, 'pitch': 1.0})
        }

        goto Event279
    }
}

void talk020() {
    HylianM030.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'scenario/HylianGeneralTalk:HylianM030Talk020_010', 'selfTalkAnimName': '', 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianM030.Talk({'message': 'scenario/HylianGeneralTalk:HylianM030Talk020_020', 'getAttention': False})
}

void talk030() {
    HylianM030.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'facial': 'smile', 'message': 'scenario/HylianGeneralTalk:HylianM030Talk030_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Quest_1() {

    call EvResetCommon.AllReset()

    HylianM030.GenericTalkSequence({'playerTalkAnim': False, 'aimToPlayer': True, 'selfTalkAnim': False, 'selfTalkAnimName': '', 'facial': '', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    HylianM030.SetInterestIkEnabled({'enable': False})

    fork {
        HylianM030.Talk({'message': 'quest/QuestAreaA:Bring_Forest010_020', 'getAttention': False})
    } {
        HylianM030.SetFacialExpression({'expression': 'smile'})
    } {
        HylianM030.PlayAnimationNoWait({'name': 'wait03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        HylianM030.Talk({'message': 'quest/QuestAreaA:Bring_Forest010_040', 'getAttention': False})
    } {
        HylianM030.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM030.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        HylianM030.Talk({'message': 'quest/QuestAreaA:Bring_Forest010_050', 'getAttention': False})
    } {
        HylianM030.PlayAnimationNoWait({'name': 'no01,talk03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM030.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        HylianM030.Talk({'message': 'quest/QuestAreaA:Bring_Forest010_060', 'getAttention': False})
    } {
        HylianM030.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM030.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        HylianM030.Talk({'message': 'quest/QuestAreaA:Bring_Forest010_070', 'getAttention': False})
    } {
        HylianM030.PlayAnimationNoWait({'name': 'yes01,talk03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM030.SetFacialExpression({'expression': 'surprise'})
    }


    fork {
        HylianM030.Talk({'message': 'quest/QuestAreaA:Bring_Forest010_080', 'getAttention': False})
    } {
        HylianM030.PlayAnimationNoWait({'name': 'sad_st01,sad_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM030.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        HylianM030.Talk({'message': 'quest/QuestAreaA:Bring_Forest010_090', 'getAttention': False})
    } {
        HylianM030.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM030.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        HylianM030.Talk({'message': 'quest/QuestAreaA:Bring_Forest010_100', 'getAttention': False})
    } {
        HylianM030.PlayAnimationNoWait({'name': 'sad_st02,sad_lp02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM030.SetFacialExpression({'expression': 'sleep'})
    }

    QuestSystem.SetProgress({'symbol': 'Pehat_HyrulePlains010:721892128', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Quest_2() {
    HylianM030.SetInterestIkEnabled({'enable': False})

    fork {
        HylianM030.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaA:Bring_Forest020_010', 'playerTalkAnim': False, 'facial': 'sleep', 'selfTalkAnimName': 'think02', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        HylianM030.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM030.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        HylianM030.Talk({'message': 'quest/QuestAreaA:Bring_Forest020_020', 'getAttention': False})
    } {
        HylianM030.PlayAnimationNoWait({'name': 'sad_st02,sad_lp02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM030.SetFacialExpression({'expression': 'sleep'})
    }

}

void PehatPaste() {

    call EvResetCommon.AllReset_SensorQuest()

    Peahat.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="HylianM030"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        HylianM030.AimActor({'actor': ActorIdentifier(name="Peahat"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HylianM030.SetFacialExpression({'expression': 'surprise'})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="HylianM030"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 2.0})

    fork {
        HylianM030.Talk({'message': 'quest/QuestAreaA:Bring_Forest030_010', 'getAttention': False})
    } {
        HylianM030.PlayAnimationNoWait({'name': 'look', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HylianM030.SetInterestIkEnabled({'enable': False})

    fork {
        HylianM030.Talk({'message': 'quest/QuestAreaA:Bring_Forest030_020', 'getAttention': False})
    } {
        HylianM030.PlayAnimation({'name': 'yes01,wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HylianM030.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        HylianM030.Talk({'message': 'quest/QuestAreaA:Bring_Forest030_030', 'getAttention': False})
    } {
        HylianM030.PlayAnimation({'name': 'talk03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM030.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        HylianM030.Talk({'message': 'quest/QuestAreaA:Bring_Forest030_040', 'getAttention': False})
    } {
        HylianM030.PlayAnimation({'name': 'wait04', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM030.SetFacialExpression({'expression': 'normal'})
    }

    HylianM030.AimActor({'actor': ActorIdentifier(name="Peahat"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        HylianM030.PlayAnimation({'name': 'look', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM030.SetFacialExpression({'expression': 'surprise'})
    }

    Timer.Wait({'time': 2.0})

    fork {
        HylianM030.Talk({'message': 'quest/QuestAreaA:Bring_Forest030_050', 'getAttention': False})
    } {
        HylianM030.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HylianM030.PlayAnimationNoWait({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    HylianM030.Talk({'message': 'quest/QuestAreaA:Bring_Forest030_060', 'getAttention': False})

    fork {
        Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_ZELDA_ABSORB_ALL_HIT', 'volume': 1.0, 'pitch': 1.0})
    }

    Event93:
    HylianF026.Activate()
    HylianF026.SetActorSwitch({'switchIndex': 0, 'value': True})
    Player.WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="HylianM030"), 'offsetY': 0.0})
    Player.AimActor({'actor': ActorIdentifier(name="HylianM030"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Player.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianM030.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        HylianM030.PlayAnimation({'name': 'sad_st01,sad_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM030.SetFacialExpression({'expression': 'sad'})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="HylianM030"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    Fade.StartPreset({'preset': 'FadeInSlow'})
    HylianM030.Talk({'message': 'quest/QuestAreaA:Bring_Forest030_070', 'getAttention': False})

    fork {
        HylianM030.Talk({'message': 'quest/QuestAreaA:Bring_Forest030_080', 'getAttention': False})
    } {
        HylianM030.PlayAnimationNoWait({'name': 'sad_st02,sad_lp02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM030.SetFacialExpression({'expression': 'sleep'})
    }

    Timer.Wait({'time': 2.0})
    Dialog.Show({'message': 'quest/QuestAreaA:Bring_Forest030_090'})
    HylianM030.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Player.SetInterestIkEnabled({'enable': True})
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HylianF026"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner.SetInterestIkEnabled({'enable': True})
        Partner.AimActor({'withoutTurn': True, 'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="HylianF026"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HylianM030.AimActor({'actor': ActorIdentifier(name="HylianF026"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        HylianM030.SetFacialExpression({'expression': 'surprise'})
    }

    HylianF026.AimActor({'actor': ActorIdentifier(name="HylianM030"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianF026.MoveToTargetLinkedPoint({'speed': 0, 'actor': ActorIdentifier(name="HylianM030"), 'index': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    HylianF026.AimActor({'actor': ActorIdentifier(name="HylianM030"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HylianM030"), 'actor2': ActorIdentifier(name="HylianF026"), 'actor3': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        HylianM030.Talk({'message': 'quest/QuestAreaA:Bring_Forest030_110', 'getAttention': False})
    } {
        HylianM030.PlayAnimation({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM030.SetFacialExpression({'expression': 'surprise'})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Player.AimActor({'actor': ActorIdentifier(name="HylianM030"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner.AimActor({'actor': ActorIdentifier(name="HylianM030"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HylianM030.AimActor({'actor': ActorIdentifier(name="HylianF026"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        HylianF026.Talk({'message': 'quest/QuestAreaA:Bring_Forest030_120', 'getAttention': False})
    } {
        HylianF026.PlayAnimation({'name': 'yes01,laugh02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="HylianF026"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HylianF026.SetFacialExpression({'expression': 'smile'})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HylianF026"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        HylianM030.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM030.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        HylianF026.Talk({'message': 'quest/QuestAreaA:Bring_Forest030_130', 'getAttention': False})
    } {
        HylianF026.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianF026.SetFacialExpression({'expression': 'normal'})
    }

    HylianF026.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianM030.Talk({'message': 'quest/QuestAreaA:Bring_Forest030_140', 'getAttention': False})
    } {
        HylianM030.SetFacialExpression({'expression': 'sleep'})
    } {
        HylianM030.PlayAnimation({'name': 'wait05', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="HylianM030"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HylianM030"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        HylianM030.Talk({'message': 'quest/QuestAreaA:Bring_Forest030_150', 'getAttention': False})
    } {
        HylianM030.SetFacialExpression({'expression': 'normal'})
    } {
        HylianM030.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HylianM030.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF026.AimActor({'actor': ActorIdentifier(name="HylianM030"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        HylianF026.Talk({'message': 'quest/QuestAreaA:Bring_Forest030_160', 'getAttention': False})
    } {
        HylianF026.PlayAnimationNoWait({'name': 'yes01,talk03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianF026.SetFacialExpression({'expression': 'smile'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HylianF026"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HylianF026"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HylianF026.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianM030.Talk({'message': 'quest/QuestAreaA:Bring_Forest030_170', 'getAttention': False})
    } {
        HylianM030.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM030.SetFacialExpression({'expression': 'smile'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="HylianM030"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HylianM030"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HylianM030.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianF026.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Player.AimActor({'actor': ActorIdentifier(name="HylianM030"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        HylianM030.Talk({'message': 'quest/QuestAreaA:Bring_Forest030_180', 'getAttention': False})
    } {
        HylianM030.PlayAnimationNoWait({'name': 'yes01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM030.SetFacialExpression({'expression': 'smile'})
    }

    HylianM030.PlayAnimationEx({'name': 'wait01', 'time': 0.5, 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.AddItem({'itemKey': 'WorldGlobePiece', 'index': 69, 'count': 1, 'autoEquip': False})
    Player.GenericItemGetSequence({'itemKey': 'WorldGlobePiece', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})

    fork {
        Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HylianM030"), 'actor2': ActorIdentifier(name="HylianF026"), 'actor3': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="HylianM030"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner.MoveToCompassPoint({'direction': 0, 'speed': 0, 'distance': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Partner.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    HylianM030.SetInterestIkEnabled({'enable': True})
    HylianM030.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HylianF026"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        HylianM030.Talk({'message': 'quest/QuestAreaA:Bring_Forest030_190', 'getAttention': False})
    } {
        HylianM030.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'actor': ActorIdentifier(name="HylianM030"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.SetInterestIkEnabled({'enable': True})
        Partner.AimActor({'actor': ActorIdentifier(name="HylianM030"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HylianF026.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HylianM030"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianM030.SetFacialExpression({'expression': 'normal'})
    HylianM030.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianF026.Talk({'message': 'quest/QuestAreaA:Bring_Forest030_200', 'getAttention': False})
    } {
        HylianF026.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HylianF026"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HylianF026"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HylianM030.PlayAnimationEx({'name': 'wait01', 'time': 0.5, 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianM030.PlayAnimation({'name': 'laugh01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM030.SetFacialExpression({'expression': 'smile'})
    } {
        HylianF026.PlayAnimation({'name': 'laugh02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 1.0})
    Player.AimActor({'actor': ActorIdentifier(name="HylianM030"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HylianM030"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner.PlayAnimation({'name': 'appeal02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    HylianM030.Destroy()
    HylianF026.SetActorSwitch({'switchIndex': 0, 'value': False})
    HylianF026.Destroy()
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Timer.Wait({'time': 2.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    QuestSystem.SetProgress({'symbol': 'Pehat_HyrulePlains010:274008845', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void talkSecretlyClothes() {
    if !HylianM030.GetInstanceVariableBool({'name': 'talkFinish'}) {
        HylianM030.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'facial': 'smile', 'aimToPlayer': True, 'message': 'scenario/HylianGeneralTalk:HylianM030TalkSecretlyClothes_010', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        HylianM030.Talk({'message': 'scenario/HylianGeneralTalk:HylianM030TalkSecretlyClothes_020', 'getAttention': False})
        HylianM030.SetInstanceVariableBool({'name': 'talkFinish', 'value': True})
    } else {
        HylianM030.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'facial': 'smile', 'aimToPlayer': True, 'message': 'scenario/HylianGeneralTalk:HylianM030TalkSecretlyClothes_020', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
}

void talk040() {
    HylianM030.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'facial': 'smile', 'aimToPlayer': True, 'message': 'scenario/HylianGeneralTalk:HylianM030Talk015_010', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianM030.Talk({'message': 'scenario/HylianGeneralTalk:HylianM030Talk015_020', 'getAttention': False})
}

void talk010Q1_Loop() {
    goto Event3
}

void PehatOriginal() {

    call EvResetCommon.AllReset_SensorQuest()

    Peahat.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Peahat.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="HylianM030"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        HylianM030.AimActor({'actor': ActorIdentifier(name="Peahat"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HylianM030.SetFacialExpression({'expression': 'surprise'})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="HylianM030"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 2.0})

    fork {
        HylianM030.Talk({'message': 'quest/QuestAreaA:Bring_Forest030_010', 'getAttention': False})
    } {
        HylianM030.PlayAnimationNoWait({'name': 'look', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HylianM030.SetInterestIkEnabled({'enable': False})

    fork {
        HylianM030.Talk({'message': 'quest/QuestAreaA:Bring_Forest030_020', 'getAttention': False})
    } {
        HylianM030.PlayAnimation({'name': 'yes01,wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HylianM030.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        HylianM030.Talk({'message': 'quest/QuestAreaA:Bring_Forest030_030', 'getAttention': False})
    } {
        HylianM030.PlayAnimation({'name': 'talk03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM030.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        HylianM030.Talk({'message': 'quest/QuestAreaA:Bring_Forest030_040', 'getAttention': False})
    } {
        HylianM030.PlayAnimation({'name': 'wait04', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM030.SetFacialExpression({'expression': 'normal'})
    }

    HylianM030.AimActor({'actor': ActorIdentifier(name="Peahat"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        HylianM030.PlayAnimation({'name': 'look', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM030.SetFacialExpression({'expression': 'surprise'})
    }

    Timer.Wait({'time': 2.0})

    fork {
        HylianM030.Talk({'message': 'quest/QuestAreaA:Bring_Forest030_050', 'getAttention': False})
    } {
        HylianM030.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HylianM030.PlayAnimationNoWait({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    HylianM030.Talk({'message': 'quest/QuestAreaA:Bring_Forest030_060', 'getAttention': False})

    fork {
        Peahat.Deactivate()
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_ENEMY_LOST_FX', 'volume': 1.0, 'pitch': 1.0})
    }

    goto Event93
}
