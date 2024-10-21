-------- EventFlow: Goron004 --------

Actor: Partner
entrypoint: None()
actions: ['AimActor', 'DisableAutoMovement']
queries: []
params: None

Actor: Goron004
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimation', 'PlayAnimationNoWait', 'SetFacialExpression', 'SetTalkerName', 'SetInterestIkEnabled', 'AimCompassPoint', 'ResetFacialExpression', 'AimPlayer', 'AimActor', 'SetComponentActive']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['StopBurning', 'AbsorbAllPastedActors', 'WarpToActorLinkedPoint', 'AimActor']
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

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: SensorQuestActor
entrypoint: None()
actions: ['TargetActorInactive']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['ResetFacialExpression', 'AddItemAndGenericItemGetSequence']
queries: []
params: None

Actor: QuestFireRock
entrypoint: None()
actions: []
queries: []
params: None

void talk() {
    Goron004.PlayAnimationNoWait({'name': 'talk_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron004.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGoron:Goron004Talk010_010', 'selfTalkAnimName': '', 'selfTalkAnim': False, 'aimToPlayer': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Goron004.PlayAnimation({'name': 'wait_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void talk020() {
    Goron004.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGoron:Goron004Talk020_010', 'selfTalkAnimName': '', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Goron004.SetFacialExpression({'expression': 'sad'})
    Goron004.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron004.Talk({'message': 'scenario/GeneralTalkGoron:Goron004Talk020_020', 'getAttention': False})
    Goron004.SetFacialExpression({'expression': 'angry'})
    Goron004.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron004.Talk({'message': 'scenario/GeneralTalkGoron:Goron004Talk020_030', 'getAttention': False})
}

void talk030() {
    Goron004.SetFacialExpression({'expression': 'smile'})
    Goron004.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron004.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGoron:Goron004Talk030_010', 'selfTalkAnim': False, 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Goron004.SetFacialExpression({'expression': 'angry'})
    Goron004.PlayAnimationNoWait({'name': 'angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron004.Talk({'message': 'scenario/GeneralTalkGoron:Goron004Talk030_020', 'getAttention': False})
}

void talk0() {
    Goron004.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'aimToPlayer': True, 'selfTalkAnim': True, 'message': 'scenario/GeneralTalkGoron:Goron004Talk005_010', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Goron004.Talk({'message': 'scenario/GeneralTalkGoron:Goron004Talk005_020', 'getAttention': False})
}

void Quest_1() {
    Player.StopBurning()

    call EvResetCommon.AllReset()

    Goron004.SetComponentActive({'name': 'aimControlComp', 'active': True})
    Goron004.SetInterestIkEnabled({'enable': True})
    Goron004.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="QuestFireRock"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    Goron004.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Goron004.SetTalkerName({'message': 'glossary/Character:Goron005', 'keep': False})
    Goron004.SetInterestIkEnabled({'enable': False})
    Goron004.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaC:Carry_Valcano030_010', 'selfTalkAnim': True, 'selfTalkAnimName': 'surprised_st01,surprised_lp01', 'facial': 'surprise', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    SensorQuestActor.TargetActorInactive()
    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    Goron004.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron004.ResetFacialExpression()
    Player.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="Goron004"), 'offsetY': 0.0})
    Goron004.AimPlayer({'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Player.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Goron004"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Goron004"), 'actor2': ActorIdentifier(name="Player"), 'offsetZ': -1.0, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0})
    Timer.Wait({'time': 2.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})

    call GeneralSequence.ZeldaTalkMotion_1.5s()

    Timer.Wait({'time': 0.5})
    Goron004.SetInterestIkEnabled({'enable': False})

    fork {
        Goron004.Talk({'message': 'quest/QuestAreaC:Carry_Valcano030_020', 'getAttention': False})
    } {
        Goron004.PlayAnimationNoWait({'name': 'yes01,talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron004.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        Goron004.Talk({'message': 'quest/QuestAreaC:Carry_Valcano030_030', 'getAttention': False})
    } {
        Goron004.PlayAnimation({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron004.ResetFacialExpression()
    }


    fork {
        Goron004.Talk({'message': 'quest/QuestAreaC:Carry_Valcano030_035', 'getAttention': False})
    } {
        Goron004.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron004.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        Goron004.Talk({'message': 'quest/QuestAreaC:Carry_Valcano030_037', 'getAttention': False})
    } {
        Goron004.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron004.SetFacialExpression({'expression': 'angry'})
    }


    fork {
        Goron004.Talk({'message': 'quest/QuestAreaC:Carry_Valcano030_040', 'getAttention': False})
    } {
        Goron004.PlayAnimation({'name': 'yes01,talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron004.SetFacialExpression({'expression': 'smile'})
    }

    Goron004.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner.DisableAutoMovement()
    Zelda.AddItemAndGenericItemGetSequence({'count': 1, 'index': 67, 'itemKey': 'WorldGlobePiece', 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})
    Zelda.ResetFacialExpression()

    fork {
        Goron004.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaC:Carry_Valcano030_050', 'facial': 'angry', 'playerTalkAnim': False, 'selfTalkAnimName': 'think01', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Goron004.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner.AimActor({'actor': ActorIdentifier(name="Goron004"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Goron004.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Goron004.SetFacialExpression({'expression': 'smile'})
    } {
        Goron004.Talk({'message': 'quest/QuestAreaC:Carry_Valcano030_061', 'getAttention': False})
    } {
        Goron004.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Goron004.SetInterestIkEnabled({'enable': True})
    QuestSystem.SetProgress({'symbol': 'Carry_Valcano010:1827192454', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Quest_2() {
    Goron004.SetTalkerName({'message': 'glossary/Character:Goron005', 'keep': False})
    Goron004.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'wait01', 'facial': 'smile', 'selfTalkAnim': True, 'message': 'scenario/GeneralTalkGoron:Goron004Talk050_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Quest_0() {
    Goron004.SetTalkerName({'message': 'glossary/Character:Goron005', 'keep': False})
    Goron004.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'quest/QuestAreaC:Carry_Valcano030_Goron004Talk010_010', 'selfTalkAnimName': 'talk01', 'facial': 'normal', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Goron004.Talk({'message': 'quest/QuestAreaC:Carry_Valcano030_Goron004Talk010_020', 'getAttention': False})
    } {
        Goron004.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        Goron004.Talk({'message': 'quest/QuestAreaC:Carry_Valcano030_Goron004Talk010_030', 'getAttention': False})
    } {
        Goron004.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}
