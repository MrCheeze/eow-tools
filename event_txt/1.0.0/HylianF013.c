-------- EventFlow: HylianF013 --------

Actor: HylianF013
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SetFacialExpression', 'AimPlayer', 'PlayAnimation', 'LookAtTalker', 'PlayAnimationNoWait', 'AimDegreeAngle', 'SetInterestIkEnabled', 'AimToInitialAngle', 'SetInstanceVariableString', 'SetDefaultFacialExpression']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['MoveToDefaultPosition', 'WaitMoveDone', 'EnableAutoMovement']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['SetInt']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['ResetFacialExpression', 'AimActor']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJumpInCurrentLevel']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AddItem', 'GenericItemGetSequence', 'AimActor']
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

Actor: SensorQuestActor
entrypoint: None()
actions: ['SetAnyNumberTargetNum']
queries: ['CanRunEvent']
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

void Carry_HyrulePlains030_Start() {

    call EvResetCommon.AllReset()

    HylianF013.SetFacialExpression({'expression': 'surprise'})
    HylianF013.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'message': 'quest/QuestAreaPlains:Carry_HyrulePlains030_010', 'aimToPlayer': False, 'selfTalkAnimName': 'frightened02', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianF013.SetFacialExpression({'expression': 'sad'})
    HylianF013.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianF013.Talk({'message': 'quest/QuestAreaPlains:Carry_HyrulePlains030_020', 'getAttention': False})
    HylianF013.Talk({'message': 'quest/QuestAreaPlains:Carry_HyrulePlains030_030', 'getAttention': False})
    HylianF013.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF013.Talk({'message': 'quest/QuestAreaPlains:Carry_HyrulePlains030_040', 'getAttention': False})
    HylianF013.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF013.Talk({'message': 'quest/QuestAreaPlains:Carry_HyrulePlains030_050', 'getAttention': False})
    Dialog.SetInt({'index': 1, 'value': 5})

    fork {
        HylianF013.Talk({'message': 'quest/QuestAreaPlains:Carry_HyrulePlains030_055', 'getAttention': False})
    } {
        HylianF013.PlayAnimation({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianF013.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        HylianF013.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        HylianF013.PlayAnimationNoWait({'name': 'frightened02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HylianF013.SetInstanceVariableString({'name': 'idleAnim', 'value': 'frightened02'})
    QuestSystem.SetProgress({'symbol': 'Carry_HyrulePlains030:3056657048', 'isShowTelopInEvent': False, 'isFrontFade': False})
    HylianF013.SetDefaultFacialExpression({'expression': 'sad'})
}

void Carry_HyrulePlains030_Carry010() {

    call EvResetCommon.AllReset()

    HylianF013.SetFacialExpression({'expression': 'smile'})
    HylianF013.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'message': 'quest/QuestAreaPlains:Carry_HyrulePlains030_Carry010_010', 'aimToPlayer': True, 'selfTalkAnimName': 'happy03', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianF013.SetInterestIkEnabled({'enable': False})

    fork {
        HylianF013.Talk({'message': 'quest/QuestAreaPlains:Carry_HyrulePlains030_Carry010_020', 'getAttention': False})
    } {
        HylianF013.PlayAnimation({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    EventFlags.SetFlag({'symbol': 'Cucco_MC001', 'value': True})
    EventFlags.SetFlag({'symbol': 'Cucco_MC002', 'value': True})
    EventFlags.SetFlag({'symbol': 'Cucco_MC003', 'value': True})
    EventFlags.SetFlag({'symbol': 'Cucco_MC004', 'value': True})
    EventFlags.SetFlag({'symbol': 'Cucco_MC005', 'value': True})
    GameControl.RequestLevelJumpInCurrentLevel({'locator': 'mc017_restart', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void Carry_HyrulePlains030_Talk010() {

    call EvResetCommon.AllReset()

    HylianF013.SetFacialExpression({'expression': 'sad'})
    if SensorQuestActor.CanRunEvent() {

        call Carry_HyrulePlains030_Carry010()

    } else {
        SensorQuestActor.SetAnyNumberTargetNum()
        HylianF013.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaPlains:Carry_HyrulePlains030_060', 'selfTalkAnimName': 'think01', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

        fork {
            HylianF013.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        } {
            HylianF013.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }
}

void Carry_HyrulePlains030_Carry020() {
    HylianF013.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': 'talk02', 'message': 'scenario/HylianGeneralTalk:HylianF013Talk010_010', 'facial': 'smile', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianF013.Talk({'message': 'scenario/HylianGeneralTalk:HylianF013Talk010_020', 'getAttention': False})
    QuestSystem.SetProgress({'symbol': 'Carry_HyrulePlains030:2372065973', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Carry_HyrulePlains030_restart() {

    call EvResetCommon.AllResetNowait()

    HylianF013.AimPlayer({'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Player.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="HylianF013"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianF013.SetFacialExpression({'expression': 'smile'})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="HylianF013"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    HylianF013.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    HylianF013.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'message': 'quest/QuestAreaPlains:Carry_HyrulePlains030_Complete_010', 'selfTalkAnimName': 'laugh02', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianF013.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF013.AimDegreeAngle({'angle': 135.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    HylianF013.Talk({'message': 'quest/QuestAreaPlains:Carry_HyrulePlains030_Complete_020', 'getAttention': False})
    HylianF013.SetInterestIkEnabled({'enable': False})

    fork {
        HylianF013.PlayAnimation({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianF013.Talk({'message': 'quest/QuestAreaPlains:Carry_HyrulePlains030_Complete_025', 'getAttention': False})
    }

    HylianF013.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        HylianF013.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianF013.Talk({'message': 'quest/QuestAreaPlains:Carry_HyrulePlains030_Complete_030', 'getAttention': False})
    }

    HylianF013.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.GenericItemGetSequence({'itemKey': 'Bottle', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Player.AddItem({'itemKey': 'Bottle', 'count': 1, 'index': 2, 'autoEquip': False})

    fork {
        HylianF013.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {
        Zelda.ResetFacialExpression()
        Zelda.AimActor({'actor': ActorIdentifier(name="HylianF013"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner.MoveToDefaultPosition({'speed': 1, 'avoidPlayer': True, 'position': 2, 'tolerance': 0.0, 'avoidWall': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Partner.WaitMoveDone({'timeout': 3.0})
    }

    Partner.EnableAutoMovement()
    HylianF013.SetFacialExpression({'expression': 'normal'})
    HylianF013.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF013.Talk({'message': 'quest/QuestAreaPlains:Carry_HyrulePlains030_Complete_040', 'getAttention': False})
    HylianF013.SetFacialExpression({'expression': 'smile'})
    HylianF013.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF013.Talk({'message': 'scenario/HylianGeneralTalk:HylianF013Talk010_010', 'getAttention': False})
    HylianF013.Talk({'message': 'scenario/HylianGeneralTalk:HylianF013Talk010_020', 'getAttention': False})
    QuestSystem.SetProgress({'symbol': 'Carry_HyrulePlains030:2372065973', 'isShowTelopInEvent': False, 'isFrontFade': False})

    fork {
        HylianF013.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        HylianF013.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HylianF013.SetInstanceVariableString({'value': 'wait01', 'name': 'idleAnim'})
    HylianF013.SetDefaultFacialExpression({'expression': 'normal'})
}
