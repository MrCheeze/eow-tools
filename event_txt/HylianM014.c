-------- EventFlow: HylianM014 --------

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['GetStatus']
params: None

Actor: HylianM014
entrypoint: None()
actions: ['GenericTalkSequence', 'Talk', 'TalkKeep', 'PlayAnimation', 'SetFacialExpression', 'GenericTalkSequenceWithDialog', 'WarpToLinkedPoint', 'AimPlayer', 'Reset', 'PlayAnimationNoWait', 'ResetFacialExpression', 'SetInterestIkEnabled', 'MoveToTargetActor', 'AimActor']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Reset', 'LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimCompassPoint']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['DeactivateAllStaticHorses']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag']
params: None

Actor: Zelda
entrypoint: None()
actions: ['WarpToActorLinkedPoint', 'MoveToTargetActor', 'AimActor']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: []
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['MoveToBesideTargetActor', 'AimActor']
queries: []
params: None

Actor: Horse[Stray]
entrypoint: None()
actions: ['Destroy']
queries: []
params: None

Actor: Dog
entrypoint: None()
actions: ['SetComponentActive', 'PlayAnimation', 'Reset']
queries: []
params: None

void Horse_HyrulePlains010_010() {

    call EvResetCommon.AllReset()


    fork {
        HylianM014.Talk({'message': 'quest/QuestAreaPlains:Carry_HyrulePlains020_010', 'getAttention': False})
    } {
        HylianM014.GenericTalkSequence({'playerTalkAnim': False, 'aimToPlayer': True, 'facial': 'sad', 'selfTalkAnimName': 'talk09', 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    }


    fork {
        HylianM014.TalkKeep({'message': 'quest/QuestAreaPlains:Carry_HyrulePlains020_020', 'getAttention': False})
    } {
        HylianM014.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM014.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        HylianM014.TalkKeep({'message': 'quest/QuestAreaPlains:Carry_HyrulePlains020_030', 'getAttention': False})
    } {
        HylianM014.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        HylianM014.TalkKeep({'message': 'quest/QuestAreaPlains:Carry_HyrulePlains020_040', 'getAttention': False})
    } {
        HylianM014.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HylianM014.SetInterestIkEnabled({'enable': False})

    fork {
        HylianM014.TalkKeep({'message': 'quest/QuestAreaPlains:Carry_HyrulePlains020_050', 'getAttention': False})
    } {
        HylianM014.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        HylianM014.TalkKeep({'message': 'quest/QuestAreaPlains:Carry_HyrulePlains020_060', 'getAttention': False})
    } {
        HylianM014.PlayAnimation({'name': 'talk09', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM014.ResetFacialExpression()
    }

    HylianM014.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    QuestSystem.SetProgress({'symbol': 'Horse_HyrulePlains010:3957945208', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Horse_HyrulePlains010_020() {

    call EvResetCommon._AllResetImpl({'disappearHorse': False})

    Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetY': 0.0, 'offsetX': -1.0, 'actor': ActorIdentifier(name="Player"), 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="HylianM014"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianM014.SetInterestIkEnabled({'enable': False})
    HylianM014.AimActor({'actor': ActorIdentifier(name="Horse", sub_name="Stray"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        HylianM014.Talk({'message': 'quest/QuestAreaPlains:Carry_HyrulePlains020_110', 'getAttention': False})
    } {
        HylianM014.GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnimName': 'surprised_st01,surprised_lp01', 'facial': 'surprise', 'aimToPlayer': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    }


    fork {
        HylianM014.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM014.ResetFacialExpression()
    }

    Timer.Wait({'time': 0.5})
    HylianM014.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        HylianM014.Talk({'message': 'quest/QuestAreaPlains:Carry_HyrulePlains020_120', 'getAttention': False})
    } {
        HylianM014.PlayAnimation({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM014.SetFacialExpression({'expression': 'smile'})
    }


    call GeneralSequence.ZeldaTalkMotion_1.5s()

    Timer.Wait({'time': 0.5})

    fork {
        HylianM014.TalkKeep({'message': 'quest/QuestAreaPlains:Carry_HyrulePlains020_130', 'getAttention': False})
    } {
        HylianM014.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        HylianM014.TalkKeep({'message': 'quest/QuestAreaPlains:Carry_HyrulePlains020_140', 'getAttention': False})
    } {
        HylianM014.PlayAnimation({'name': 'yes_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        HylianM014.TalkKeep({'message': 'quest/QuestAreaPlains:Carry_HyrulePlains020_150', 'getAttention': False})
    } {
        HylianM014.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        HylianM014.Talk({'message': 'quest/QuestAreaPlains:Carry_HyrulePlains020_160', 'getAttention': False})
    } {
        HylianM014.PlayAnimation({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    GameControl.DeactivateAllStaticHorses()
    Horse[Stray].Destroy()
    QuestSystem.SetProgress({'symbol': 'Horse_HyrulePlains010:3501935445', 'isShowTelopInEvent': False, 'isFrontFade': False})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
}

void HorseRentalRanch() {

    fork {
        HylianM014.Talk({'message': 'scenario/StoryAreaPlane:HoseRentalRanch_040', 'getAttention': False})
    } {
        HylianM014.GenericTalkSequence({'playerTalkAnim': False, 'aimToPlayer': True, 'selfTalkAnimName': 'talk01', 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    } {
        HylianM014.SetFacialExpression({'expression': 'smile'})
    }

}

void GetHorse_Forest010_020() {
    HylianM014.SetInterestIkEnabled({'enable': False})
    if !EventFlags.CheckMessgaeFlag({'message': 'quest/QuestAreaA:GetHorse_Forest020_130'}) {
        HylianM014.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaA:GetHorse_Forest020_130', 'facial': 'surprise', 'selfTalkAnimName': 'surprised_st01,surprised_lp01', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

        fork {
            HylianM014.Talk({'message': 'quest/QuestAreaA:GetHorse_Forest020_140', 'getAttention': False})
        } {
            HylianM014.SetFacialExpression({'expression': 'sleep'})
        } {
            HylianM014.PlayAnimation({'name': 'sad_st01,sad_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } else {
        HylianM014.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaA:GetHorse_Forest020_140', 'selfTalkAnimName': 'sad_st01,sad_lp01', 'facial': 'sleep', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
}

void Horse_HyrulePlains010_015() {

    fork {
        HylianM014.Talk({'message': 'quest/QuestAreaPlains:Carry_HyrulePlains020_080', 'getAttention': False})
    } {
        HylianM014.GenericTalkSequence({'playerTalkAnim': False, 'facial': 'sad', 'selfTalkAnimName': 'talk09', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    }


    fork {
        HylianM014.TalkKeep({'message': 'quest/QuestAreaPlains:Carry_HyrulePlains020_090', 'getAttention': False})
    } {
        HylianM014.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM014.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        HylianM014.TalkKeep({'message': 'quest/QuestAreaPlains:Carry_HyrulePlains020_100', 'getAttention': False})
    } {
        HylianM014.PlayAnimation({'name': 'talk09', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM014.ResetFacialExpression()
    }

}

void HorseRentalRanchBlock_Up() {

    call EvResetCommon.AllReset_Ridinghorse()

    HylianM014.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaPlane:HoseRentalRanchBlock_010', 'playerTalkAnim': False, 'facial': 'sad', 'selfTalkAnimName': '', 'aimFromPlayer': False, 'cameraLookAt': False, 'keepPersonalSpace': True, 'aimToPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Timer.Wait({'time': 0.5})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Dog.Reset()
    Dog.SetComponentActive({'active': False, 'name': 'steeringComp'})
    Dog.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianM014.WarpToLinkedPoint({'index': 1, 'offsetY': 0.0})
    HylianM014.AimPlayer({'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Zelda.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="Area"), 'offsetY': 0.0})
    Player.AimCompassPoint({'duration': 0.0, 'direction': 0, 'withoutTurn': False, 'immediateTurn': False})
    Camera.LookAt2ActorsCenterAsTalker({'duration': 0.0, 'offsetZ': 0.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="HylianM014"), 'offsetX': -0.5, 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetY': 0.0})
    Timer.Wait({'time': 1.0})

    fork {
        Zelda.MoveToTargetActor({'actor': ActorIdentifier(name="Player"), 'speed': 0, 'distance': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Zelda.AimActor({'actor': ActorIdentifier(name="HylianM014"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Fade.StartPreset({'preset': 'FadeInNormal'})
    } {
        HylianM014.MoveToTargetActor({'actor': ActorIdentifier(name="HylianM014"), 'speed': 1, 'distance': 1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    Event208:
    Timer.Wait({'time': 0.5})
    HylianM014.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaPlane:HoseRentalRanchBlock_020', 'selfTalkAnimName': 'talk03', 'playerTalkAnim': False, 'cameraLookAt': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianM014.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    HylianM014.Reset()
    Dog.SetComponentActive({'name': 'steeringComp', 'active': True})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
}

void HorseRentalRanchBlock_Down() {

    call EvResetCommon.AllReset_Ridinghorse()

    HylianM014.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaPlane:HoseRentalRanchBlock_010', 'playerTalkAnim': False, 'facial': 'sad', 'selfTalkAnimName': '', 'aimFromPlayer': False, 'cameraLookAt': False, 'keepPersonalSpace': True, 'aimToPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Timer.Wait({'time': 0.5})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Dog.Reset()
    Dog.SetComponentActive({'active': False, 'name': 'steeringComp'})
    Dog.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianM014.WarpToLinkedPoint({'index': 0, 'offsetY': 0.0})
    HylianM014.AimPlayer({'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Zelda.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="Area"), 'offsetY': 0.0})
    Player.AimCompassPoint({'duration': 0.0, 'direction': 2, 'withoutTurn': False, 'immediateTurn': False})
    Camera.LookAt2ActorsCenterAsTalker({'duration': 0.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="HylianM014"), 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 1.0})

    fork {
        Zelda.MoveToTargetActor({'actor': ActorIdentifier(name="Player"), 'speed': 0, 'distance': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Zelda.AimActor({'actor': ActorIdentifier(name="HylianM014"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Fade.StartPreset({'preset': 'FadeInNormal'})
    } {
        HylianM014.MoveToTargetActor({'speed': 1, 'distance': 1.5, 'actor': ActorIdentifier(name="HylianM014"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    goto Event208
}

void HylianM014Talk010() {
    HylianM014.SetInterestIkEnabled({'enable': False})
    HylianM014.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianM014Talk010_010', 'selfTalkAnimName': 'talk01', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Event231:
    if QuestSystem.GetStatus({'questKey': 'Horse_HyrulePlains010'}) == 2 {

        fork {
            HylianM014.Talk({'message': 'scenario/HylianGeneralTalk:HylianM014Talk010_020', 'getAttention': False})
        } {
            HylianM014.SetFacialExpression({'expression': 'sleep'})
        } {
            HylianM014.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }
}

void HylianM014Talk010_HyruleCatsleClear() {
    HylianM014.SetInterestIkEnabled({'enable': False})
    HylianM014.GenericTalkSequenceWithDialog({'selfTalkAnimName': 'talk01', 'message': 'scenario/HylianGeneralTalk:HylianM014Talk010_010_HyruleCatsleClear', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    goto Event231
}

void GetHorse_Forest010_After() {
    HylianM014.SetInterestIkEnabled({'enable': False})
    HylianM014.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianM014Talk020_010', 'facial': 'smile', 'selfTalkAnimName': 'sad_st01,sad_lp01', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        HylianM014.Talk({'message': 'scenario/HylianGeneralTalk:HylianM014Talk020_020', 'getAttention': False})
    } {
        HylianM014.PlayAnimation({'name': 'yes01,talk03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM014.SetFacialExpression({'expression': 'smile'})
    }

}
