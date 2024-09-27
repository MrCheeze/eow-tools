-------- EventFlow: Goron001 --------

Actor: Goron001
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimationNoWait', 'SetTalkerName', 'PlayAnimation', 'SetFacialExpression', 'AimPlayer', 'LookAtStagesLinkedPoint', 'SetInterestIkEnabled', 'ActiveteAllLinkedActors', 'DeactiveteAllLinkedActors', 'AimActorLinkedPoint', 'ActiveteLinkedActor', 'AimToInitialAngle', 'MoveToCompassPoint', 'LookAtTalkersLinkedPoint', 'SetInstanceVariableBool']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['Show', 'ShowTalker']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['GetStatus']
params: None

Actor: Player
entrypoint: None()
actions: ['RemoveItem', 'GenericItemGetSequence', 'AddItem', 'AimActor', 'AimActorLinkedPoint', 'AimToInitialAngle', 'AimDegreeAngle', 'PlayAnimation']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'RelativeMoveToWithTimeout']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump']
queries: []
params: None

Actor: TagEvTailorPlayer[Firework_Valcano010]
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['AimToInitialAngle']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE']
queries: []
params: None

Actor: TransitCounters
entrypoint: None()
actions: ['SetValue']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActorLinkedPoint', 'AimDegreeAngle', 'MoveToDefaultPosition']
queries: []
params: None

void Firework_Valcano010_Unable() {
    switch QuestSystem.GetStatus({'questKey': 'Firework_Valcano010'}) {
      case 0:

        call EvResetCommon.AllReset()

        Goron001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkGoron:Goron001Talk005_010', 'facial': 'normal', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

        fork {
            Goron001.Talk({'message': 'scenario/GeneralTalkGoron:Goron001Talk005_020', 'getAttention': False})
        } {
            Goron001.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron001.SetFacialExpression({'expression': 'sad'})
        }

      case 1:

        call EvResetCommon.AllReset()

        Goron001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'scenario/GeneralTalkGoron:Goron001Talk010_010', 'facial': 'normal', 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

        fork {
            Goron001.Talk({'message': 'scenario/GeneralTalkGoron:Goron001Talk010_020', 'getAttention': False})
        } {
            Goron001.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron001.SetFacialExpression({'expression': 'sad'})
        }

      case 2:

        call EvResetCommon.AllReset()

        Goron001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'scenario/GeneralTalkGoron:Goron001Talk010_010', 'facial': 'normal', 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
}

void Firework_Valcano010_010() {

    call EvResetCommon.AllReset()

    Goron001.SetInterestIkEnabled({'enable': False})
    Goron001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaC:Firework_Valcano010_010', 'facial': 'angry', 'selfTalkAnimName': 'angry01', 'aimToPlayer': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Goron001.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron001.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Goron001.Talk({'message': 'quest/QuestAreaC:Firework_Valcano010_020', 'getAttention': False})
    } {
        Goron001.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron001.SetFacialExpression({'expression': 'smile'})
    }

    Goron001.SetTalkerName({'message': 'glossary/Character:Goron001', 'keep': False})
    Goron001.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron001.Talk({'message': 'quest/QuestAreaC:Firework_Valcano010_030', 'getAttention': False})
    } {
        Goron001.PlayAnimation({'name': 'satisfied01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Goron001.Talk({'message': 'quest/QuestAreaC:Firework_Valcano010_040', 'getAttention': False})
    } {
        Goron001.PlayAnimation({'name': 'wait03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron001.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        switch QuestSystem.GetStatus({'questKey': 'Midpoint'}) {
          case [0, 1]:
            Goron001.Talk({'message': 'quest/QuestAreaC:Firework_Valcano010_042', 'getAttention': False})
          case 2:
            Goron001.Talk({'message': 'quest/QuestAreaC:Firework_Valcano010_050', 'getAttention': False})
        }
    } {
        Goron001.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Goron001.Talk({'message': 'quest/QuestAreaC:Firework_Valcano010_060', 'getAttention': False})
    } {
        Goron001.PlayAnimation({'name': 'wait03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Goron001.Talk({'message': 'quest/QuestAreaC:Firework_Valcano010_070', 'getAttention': False})
    } {
        Goron001.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron001.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        Goron001.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron001.SetFacialExpression({'expression': 'normal'})
    }


    call GeneralSequence.ZeldaTalkMotion()

    Timer.Wait({'time': 0.5})

    fork {
        Goron001.Talk({'message': 'quest/QuestAreaC:Firework_Valcano010_072', 'getAttention': False})
    } {
        Goron001.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron001.SetFacialExpression({'expression': 'surprise'})
        Timer.Wait({'time': 0.5})
        Goron001.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        Goron001.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron001.SetFacialExpression({'expression': 'normal'})
    }

    Timer.Wait({'time': 1.0})

    fork {
        Goron001.Talk({'message': 'quest/QuestAreaC:Firework_Valcano010_080', 'getAttention': False})
    } {
        Goron001.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron001.SetFacialExpression({'expression': 'sad'})
    } {
        Goron001.AimActorLinkedPoint({'actor': ActorIdentifier(name="Goron001"), 'pointIndex': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Camera.RelativeMoveToWithTimeout({'timeout': 2.0, 'offsetZ': 2.0, 'offsetY': 0.0, 'offsetX': -1.5, 'chaseRatio': 0.10000000149011612, 'maxSpeed': 999.0})

        fork {
            Player.AimActorLinkedPoint({'actor': ActorIdentifier(name="Goron001"), 'pointIndex': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].MoveToDefaultPosition({'avoidPlayer': True, 'position': 1, 'speed': 0, 'tolerance': 0.0, 'avoidWall': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
            Partner[companion].AimActorLinkedPoint({'actor': ActorIdentifier(name="Goron001"), 'pointIndex': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    Goron001.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Goron001.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        Player.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner[companion].MoveToDefaultPosition({'avoidPlayer': True, 'position': 1, 'speed': 0, 'tolerance': 0.0, 'avoidWall': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Partner.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    QuestSystem.SetProgress({'symbol': 'Firework_Valcano010:1320333213', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Firework_Valcano010_015() {

    call EvResetCommon.AllReset()

    Goron001.SetInterestIkEnabled({'enable': False})
    Goron001.SetTalkerName({'message': 'glossary/Character:Goron001', 'keep': False})
    Goron001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaC:Firework_Valcano020_010', 'facial': 'sad', 'selfTalkAnimName': 'talk02', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Goron001.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron001.Talk({'message': 'quest/QuestAreaC:Firework_Valcano020_020', 'getAttention': False})
    } {
        Goron001.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron001.SetFacialExpression({'expression': 'sad'})
    }

}

void Firework_Valcano010_020() {

    call EvResetCommon.AllReset()

    Goron001.SetInterestIkEnabled({'enable': False})
    Goron001.SetTalkerName({'message': 'glossary/Character:Goron001', 'keep': False})
    Player.RemoveItem({'itemKey': 'ItemQuest04', 'count': 1, 'index': -1})
    Goron001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaC:Firework_Valcano030_010', 'aimToPlayer': True, 'selfTalkAnimName': 'talk02', 'facial': 'smile', 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Goron001.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron001.SetFacialExpression({'expression': 'normal'})
    }

    Player.PlayAnimation({'name': 'ev_hand_over,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})

    fork {
        Goron001.Talk({'message': 'quest/QuestAreaC:Firework_Valcano030_020', 'getAttention': False})
    } {
        Goron001.PlayAnimation({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron001.SetFacialExpression({'expression': 'sad'})
    }

    Goron001.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron001.Talk({'message': 'quest/QuestAreaC:Firework_Valcano030_030', 'getAttention': False})
    } {
        Goron001.PlayAnimation({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron001.SetFacialExpression({'expression': 'smile'})
    }

    Goron001.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 2.0})

    fork {
        Goron001.Talk({'message': 'quest/QuestAreaC:Firework_Valcano030_040', 'getAttention': False})
    } {
        Goron001.PlayAnimation({'name': 'surprised_st02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron001.SetFacialExpression({'expression': 'surprise'})
    }

    Goron001.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron001.Talk({'message': 'quest/QuestAreaC:Firework_Valcano030_050', 'getAttention': False})
    } {
        Goron001.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron001.SetFacialExpression({'expression': 'sleep'})
    }

    Timer.Wait({'time': 2.0})

    fork {
        switch QuestSystem.GetStatus({'questKey': 'Midpoint'}) {
          case [0, 1]:
            Goron001.Talk({'message': 'quest/QuestAreaC:Firework_Valcano030_052', 'getAttention': False})
          case 2:
            Goron001.Talk({'message': 'quest/QuestAreaC:Firework_Valcano030_060', 'getAttention': False})
        }
    } {
        Goron001.PlayAnimation({'name': 'wait03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron001.SetFacialExpression({'expression': 'angry'})
    }

    Goron001.Talk({'message': 'quest/QuestAreaC:Firework_Valcano030_070', 'getAttention': False})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    EventFlags.SetFlag({'symbol': 'FireFlower_Pop', 'value': True})
    QuestSystem.SetProgress({'symbol': 'Firework_Valcano010:2089078047', 'isShowTelopInEvent': False, 'isFrontFade': False})
    GameControl.RequestLevelJump({'level': 'Field', 'locator': 'EV_Field_Firework_Valcano010_Complete', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void Firework_Valcano010_end1() {

    call EvResetCommon.AllReset()

    Goron001.SetInterestIkEnabled({'enable': False})
    Goron001.SetTalkerName({'message': 'glossary/Character:Goron001', 'keep': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Goron001"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Goron001.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Player.AimActor({'actor': ActorIdentifier(name="Goron001"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Goron001.ActiveteAllLinkedActors()
    Timer.Wait({'time': 1.0})
    Goron001.SetFacialExpression({'expression': 'smile'})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    Goron001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'selfTalkAnimName': 'talk02', 'selfTalkAnim': True, 'cameraLookAt': False, 'message': 'quest/QuestAreaC:Firework_Valcano030_080', 'facial': '', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Goron001.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron001.Talk({'message': 'quest/QuestAreaC:Firework_Valcano030_090', 'getAttention': False})
    } {
        Goron001.PlayAnimation({'name': 'angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron001.SetFacialExpression({'expression': 'angry'})
    }

    Goron001.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron001.MoveToCompassPoint({'direction': 3, 'speed': 0, 'distance': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Goron001.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron001.LookAtTalkersLinkedPoint({'duration': 2.0, 'chaseRatio': 0.06499999761581421, 'pointIndex': 1, 'offsetY': 0.0, 'offsetZ': 0.0, 'distanceOffset': 0.0, 'offsetX': 0.0})
    }

    Timer.Wait({'time': 1.0})

    fork {
        Goron001.PlayAnimation({'name': 'surprised_st02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_GORON_002_2_006_4', 'volume': 1.0, 'pitch': 1.0})
    }


    fork {
        Player.AimDegreeAngle({'angle': 200.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner[companion].AimDegreeAngle({'angle': 200.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    TagEvTailorPlayer[Firework_Valcano010].PlayTailorOtherChannelNoWait({'channel': 'Ev_FireworksShow', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    Timer.Wait({'time': 0.20000000298023224})
    Goron001.LookAtStagesLinkedPoint({'pointIndex': 0, 'duration': 2.0, 'chaseRatio': 0.029999999329447746, 'panMode': 1, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 2.0})
    Dialog.Show({'message': 'quest/QuestAreaC:Firework_Valcano030_100'})
    Dialog.Show({'message': 'quest/QuestAreaC:Firework_Valcano030_110'})
    Dialog.Show({'message': 'quest/QuestAreaC:Firework_Valcano030_130'})
    switch QuestSystem.GetStatus({'questKey': 'Midpoint'}) {
      case [0, 1]:
        Dialog.Show({'message': 'quest/QuestAreaC:Firework_Valcano030_140'})
        Event103:
        Fade.StartPreset({'preset': 'FadeOutSlowB'})
        Goron001.DeactiveteAllLinkedActors()
        QuestSystem.SetProgress({'symbol': 'Firework_Valcano010:868572120', 'isShowTelopInEvent': False, 'isFrontFade': False})
        GameControl.RequestLevelJump({'level': 'GoronVillage', 'locator': 'EV_House_Firework_Valcano010_Complete', 'offsetX': 0.0, 'offsetZ': 0.0})
      case 2:
        Dialog.ShowTalker({'message': 'quest/QuestAreaC:Firework_Valcano030_140', 'talker': 'glossary/Character:GoronChief'})
        goto Event103
    }
}

void Firework_Valcano010_end2() {

    call EvResetCommon.AllReset()

    Goron001.SetInterestIkEnabled({'enable': False})
    Goron001.SetTalkerName({'message': 'glossary/Character:Goron001', 'keep': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Goron001"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Goron001.SetFacialExpression({'expression': 'smile'})
    Goron001.ActiveteLinkedActor({'index': 0})
    Goron001.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Player.AimActor({'actor': ActorIdentifier(name="Goron001"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})

    fork {
        switch QuestSystem.GetStatus({'questKey': 'Midpoint'}) {
          case [0, 1]:
            Goron001.Talk({'message': 'quest/QuestAreaC:Firework_Valcano030_142', 'getAttention': False})
          case 2:
            Goron001.Talk({'message': 'quest/QuestAreaC:Firework_Valcano030_150', 'getAttention': False})
        }
    } {
        Goron001.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Goron001.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron001.Talk({'message': 'quest/QuestAreaC:Firework_Valcano030_160', 'getAttention': False})
    } {
        Goron001.PlayAnimation({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Player.GenericItemGetSequence({'itemKey': 'RupeePurple', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Player.AddItem({'index': -1, 'itemKey': 'RupeePurple', 'count': 1, 'autoEquip': False})

    fork {
        Goron001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaC:Firework_Valcano030_170', 'selfTalkAnimName': 'talk02', 'facial': 'sad', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    Goron001.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron001.Talk({'message': 'quest/QuestAreaC:Firework_Valcano030_180', 'getAttention': False})
    } {
        Goron001.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron001.SetFacialExpression({'expression': 'smile'})
    }

    switch QuestSystem.GetStatus({'questKey': 'Volcano'}) {
      case [0, 1]:
        Event20:
        QuestSystem.SetProgress({'symbol': 'Firework_Valcano010:1977653168', 'isShowTelopInEvent': False, 'isFrontFade': False})
        Goron001.SetInstanceVariableBool({'name': 'questTalkRepeat', 'value': True})
      case 2:
        TransitCounters.SetValue({'key': 'VolcanoSubQuests', 'value': 2})
        goto Event20
    }
}

void Firework_Valcano010_FinishTalk() {
    Goron001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkGoron:Goron001Talk020_010', 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Goron001.Talk({'message': 'scenario/GeneralTalkGoron:Goron001Talk020_020', 'getAttention': False})
    } {
        Goron001.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron001.SetFacialExpression({'expression': 'smile'})
    }

}

void Firework_Valcano010_end2_repeat() {

    call EvResetCommon.AllReset()

    Goron001.SetInterestIkEnabled({'enable': False})
    Goron001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaC:Firework_Valcano030_170', 'selfTalkAnimName': 'talk02', 'facial': 'sad', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Goron001.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron001.Talk({'message': 'quest/QuestAreaC:Firework_Valcano030_180', 'getAttention': False})
    } {
        Goron001.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron001.SetFacialExpression({'expression': 'smile'})
    }

}
