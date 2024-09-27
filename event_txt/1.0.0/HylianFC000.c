-------- EventFlow: HylianFC000 --------

Actor: HylianFC000
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SetFacialExpression', 'SkipAutoTurn', 'SetTalkerName', 'PlayAnimation', 'SetInterestIkEnabled', 'Activate', 'AimCompassPoint', 'MoveToCompassPoint', 'Deactivate', 'AimActor', 'SetInstanceVariableBool', 'LookAtTalker', 'ResetFacialExpression', 'PlayAnimationNoWait']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['SetTalkCameraMode', 'LookAt3ActorsCenterAsTalker', 'LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['GenericItemGetSequence', 'MorphEnd', 'SetInterestIkEnabled', 'WarpToActorLinkedPoint', 'AimActor', 'ResetFacialExpression']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartParam', 'StartPreset']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump', 'ResetSensorEventResetContainsActors']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['WarpToActorLinkedPoint', 'AimActor']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

Actor: Dog
entrypoint: None()
actions: ['MoveToCompassPoint', 'Deactivate', 'AimActor', 'PlayAnimation']
queries: []
params: None

Actor: HyruleSoldier_SpecialHyruleCastle
entrypoint: None()
actions: ['Talk', 'SetFacialExpression', 'AimActor', 'SetInterestIkEnabled', 'AimPlayer', 'PlayAnimation']
queries: []
params: None

void talk() {
    Camera.SetTalkCameraMode({'isFar': True})
    HylianFC000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'happy01', 'selfTalkAnim': True, 'message': 'scenario/HylianGeneralTalk:HylianFC000Talk01_010', 'facial': 'smile', 'keepPersonalSpace': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianFC000.SkipAutoTurn()
}

void talk2() {
    HylianFC000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'happy01', 'selfTalkAnim': True, 'message': 'scenario/HylianGeneralTalk:HylianFC000Talk02_010', 'facial': 'smi;e', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianFC000.SetFacialExpression({'expression': 'surprise'})
    HylianFC000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianFC000.Talk({'message': 'scenario/HylianGeneralTalk:HylianFC000Talk02_020', 'getAttention': False})
    HylianFC000.SkipAutoTurn()
    HylianFC000.ResetFacialExpression()
}

void talk030() {
    HylianFC000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'happy01', 'selfTalkAnim': True, 'facial': 'smile', 'message': 'scenario/HylianGeneralTalk:HylianFC000Talk030_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianFC000.SkipAutoTurn()
}

void talkSec() {
    HylianFC000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'scenario/HylianGeneralTalk:HylianFC000TalkSecretlyClothes_010', 'selfTalkAnimName': '', 'facial': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianFC000.SkipAutoTurn()
}

void Special_HyruleCastle010() {
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    GameControl.ResetSensorEventResetContainsActors({'eventReset': False, 'cemeteryRevive': False})

    call EvResetCommon.AllReset()


    fork {
        Player.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="HylianFC000"), 'offsetY': 0.0})
    } {
        Partner.WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="HylianFC000"), 'offsetY': 0.0})
    }


    fork {
        Player.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="HylianFC000"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="HylianFC000"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HylianFC000.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 6.0, 'weight2': 1.0, 'weight1': 2.0, 'duration': 0.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="HylianFC000"), 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    HylianFC000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'facial': '', 'message': 'quest/QuestAreaA:Special_HyruleCastle010_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        HylianFC000.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle010_020', 'getAttention': False})
    } {
        HylianFC000.SetFacialExpression({'expression': 'smile'})
    }

    HylianFC000.SetTalkerName({'message': 'glossary/Character:HylianFC000', 'keep': False})
    HylianFC000.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle010_030', 'getAttention': False})
    HylianFC000.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle010_040', 'getAttention': False})
    HylianFC000.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle010_050', 'getAttention': False})
    HylianFC000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.GenericItemGetSequence({'itemKey': 'ItemQuest05', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HylianFC000"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        HylianFC000.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {
        Player.ResetFacialExpression()
        Player.AimActor({'actor': ActorIdentifier(name="HylianFC000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner.AimActor({'actor': ActorIdentifier(name="HylianFC000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        HylianFC000.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle010_070', 'getAttention': False})
    } {
        HylianFC000.PlayAnimation({'name': 'wait06', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Dog.MoveToCompassPoint({'speed': 1, 'direction': 0, 'distance': 8.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Dog.Deactivate()

    fork {
        HylianFC000.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle010_071', 'getAttention': False})
    } {
        HylianFC000.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        HylianFC000.SetFacialExpression({'expression': 'normal'})
    }

    HylianFC000.SetFacialExpression({'expression': 'smile'})
    HylianFC000.MoveToCompassPoint({'direction': 0, 'distance': 8.0, 'customSpeed': 11.0, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    HylianFC000.Deactivate()
    Timer.Wait({'time': 0.800000011920929})
    QuestSystem.SetProgress({'symbol': 'Special_HyruleCastle010:2725343918', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Special_HyruleCastle020() {
    HylianFC000.SetTalkerName({'message': 'glossary/Character:HylianFC000', 'keep': False})
    HylianFC000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'facial': '', 'message': 'quest/QuestAreaA:Special_HyruleCastle020_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Special_HyruleCastle0080() {
    Fade.StartParam({'time': 0.0, 'mode': 1, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0})
    Player.MorphEnd()
    HylianFC000.SetInstanceVariableBool({'value': True, 'name': 'fc000_active'})
    HylianFC000.Activate()
    HylianFC000.SetTalkerName({'message': 'glossary/Character:HylianFC000', 'keep': False})
    HylianFC000.SetInterestIkEnabled({'enable': False})
    Player.SetInterestIkEnabled({'enable': False})
    Player.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="HylianFC000"), 'offsetY': 0.0})

    call EvResetCommon.AllResetNowait()


    fork {
        HyruleSoldier_SpecialHyruleCastle.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="HylianFC000"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Dog.AimActor({'withoutTurn': False, 'duration': 0.0, 'actor': ActorIdentifier(name="HylianFC000"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Dog.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianFC000.SetFacialExpression({'expression': 'smile'})
    } {
        HylianFC000.PlayAnimation({'name': 'ask', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HylianFC000"), 'actor2': ActorIdentifier(name="Player"), 'actor3': ActorIdentifier(name="Dog"), 'duration': 0.0, 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 2.0})

    fork {
        Timer.Wait({'time': 0.5})
        HyruleSoldier_SpecialHyruleCastle.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 1.600000023841858})
        HyruleSoldier_SpecialHyruleCastle.SetInterestIkEnabled({'enable': True})
        HyruleSoldier_SpecialHyruleCastle.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {

        call GeneralSequence.EvMapWarpIn()

    } {
        Timer.Wait({'time': 1.0})
        Dog.PlayAnimation({'name': 'reaction01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 1.0})

    fork {
        HyruleSoldier_SpecialHyruleCastle.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle080_010', 'getAttention': False})
    } {
        HyruleSoldier_SpecialHyruleCastle.SetFacialExpression({'expression': 'smile'})
    } {
        Timer.Wait({'time': 0.5})
        Player.AimActor({'withoutTurn': False, 'duration': 0.800000011920929, 'actor': ActorIdentifier(name="HyruleSoldier_SpecialHyruleCastle"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Partner[companion].AimActor({'offsetX': -1.0, 'offsetY': 1.0, 'duration': 0.800000011920929, 'actor': ActorIdentifier(name="HyruleSoldier_SpecialHyruleCastle"), 'withoutTurn': False, 'boneName': '', 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleSoldier_SpecialHyruleCastle.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        HylianFC000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianFC000.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        HylianFC000.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleSoldier_SpecialHyruleCastle.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        HylianFC000.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle080_030', 'getAttention': False})
    } {
        HylianFC000.PlayAnimation({'name': 'happy03,think01_B', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner.AimActor({'actor': ActorIdentifier(name="HylianFC000"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="HylianFC000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        HyruleSoldier_SpecialHyruleCastle.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle080_035', 'getAttention': False})
    } {
        HylianFC000.SetInterestIkEnabled({'enable': True})
        Timer.Wait({'time': 0.5})

        fork {
            HylianFC000.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="HyruleSoldier_SpecialHyruleCastle"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            HylianFC000.PlayAnimation({'name': 'wait06', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } {
        HyruleSoldier_SpecialHyruleCastle.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HylianFC000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        HylianFC000.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle080_040', 'getAttention': False})
    } {
        HylianFC000.SetFacialExpression({'expression': 'smile'})
    } {
        HylianFC000.PlayAnimation({'name': 'talk06', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianFC000.AimActor({'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HylianFC000.PlayAnimation({'name': 'wait06', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier_SpecialHyruleCastle.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        HyruleSoldier_SpecialHyruleCastle.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle080_045', 'getAttention': False})
    } {
        HyruleSoldier_SpecialHyruleCastle.SetFacialExpression({'expression': 'smile'})
    } {
        Timer.Wait({'time': 0.5})
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="HyruleSoldier_SpecialHyruleCastle"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Partner.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="HyruleSoldier_SpecialHyruleCastle"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        HyruleSoldier_SpecialHyruleCastle.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle080_047', 'getAttention': False})
    } {
        HyruleSoldier_SpecialHyruleCastle.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        HylianFC000.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle080_050', 'getAttention': False})
    } {
        HylianFC000.SetFacialExpression({'expression': 'smile'})
    } {
        HylianFC000.PlayAnimation({'name': 'think01_B', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="HylianFC000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Partner.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="HylianFC000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    GameControl.RequestLevelJump({'locator': 'Special_HyruleCastle100', 'level': 'HyruleCastle', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void HylianFC000Talk040() {
    HylianFC000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'facial': '', 'message': 'scenario/HylianGeneralTalk:HylianFC000Talk040_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianFC000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'facial': '', 'message': 'scenario/HylianGeneralTalk:HylianFC000Talk040_020', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}
