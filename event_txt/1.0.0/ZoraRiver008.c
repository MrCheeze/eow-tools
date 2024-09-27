-------- EventFlow: ZoraRiver008 --------

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult4']
params: None

Actor: ZoraRiver008
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimationNoWait', 'SetFacialExpression', 'AimActor', 'PlayAnimation', 'Destroy', 'AimPlayer', 'KeepAnimationAfterEvent', 'SetInterestIkEnabled', 'LookAtTalker', 'SetComponentActive', 'SetTalkerName', 'AimCompassPoint', 'SetInstanceVariableString', 'GenericTalkSequence']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['CheckProgress']
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'WarpToActorLinkedPoint', 'LookAtTalker']
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

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'Shake', 'Reset']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

void talk() {
    ZoraRiver008.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver008Talk010_010', 'facial': 'smile', 'selfTalkAnimName': 'talk_swim01', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraRiver008.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver008.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver008Talk010_020', 'getAttention': False})
    ZoraRiver008.PlayAnimationNoWait({'name': 'wait_swim01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver008.KeepAnimationAfterEvent()
}

void talk020() {
    ZoraRiver008.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver008Talk020_010', 'selfTalkAnimName': 'talk_swim01', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraRiver008.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver008Talk020_020', 'getAttention': False})
    ZoraRiver008.SetFacialExpression({'expression': 'surprise'})
    ZoraRiver008.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver008Talk020_030', 'getAttention': False})
    ZoraRiver008.PlayAnimationNoWait({'name': 'wait_swim01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver008.KeepAnimationAfterEvent()
}

void talk030() {
    ZoraRiver008.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver008Talk030_010', 'selfTalkAnimName': 'talk_swim01', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraRiver008.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver008Talk030_020', 'getAttention': False})
    ZoraRiver008.PlayAnimationNoWait({'name': 'wait_swim01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver008.KeepAnimationAfterEvent()
}

void talk040() {
    ZoraRiver008.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'facial': 'smile', 'selfTalkAnimName': 'talk_swim01', 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver008Talk040_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraRiver008.SetFacialExpression({'expression': 'sad'})
    ZoraRiver008.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver008Talk040_020', 'getAttention': False})
    ZoraRiver008.PlayAnimationNoWait({'name': 'wait_swim01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver008.KeepAnimationAfterEvent()
}

void talk015() {
    ZoraRiver008.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver008Talk015_Q1', 'selfTalkAnimName': 'talk_swim01', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Event12:
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        ZoraRiver008.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver008Talk015_Q1_A1_010', 'getAttention': False})
        Event43:

        call talk015Q1_Loop()

      case 1:
        ZoraRiver008.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver008Talk015_Q1_A2_010', 'getAttention': False})
        goto Event43
      case 2:
        ZoraRiver008.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver008Talk015_Q1_A3_010', 'getAttention': False})
        ZoraRiver008.PlayAnimationNoWait({'name': 'wait_swim01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver008.KeepAnimationAfterEvent()
    }
}

void Quest_1() {

    call EvResetCommon.AllReset()

    ZoraRiver008.PlayAnimationNoWait({'name': 'frightened02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver008.SetTalkerName({'message': 'glossary/Character:Unknown', 'keep': False})
    ZoraRiver008.Talk({'message': 'quest/QuestAreaB:LostShip_Coast010_030', 'getAttention': False})
    ZoraRiver008.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 0.5})

    fork {
        ZoraRiver008.Talk({'message': 'quest/QuestAreaB:LostShip_Coast010_040', 'getAttention': False})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="ZoraRiver008"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiver008.PlayAnimationNoWait({'name': 'sad02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    ZoraRiver008.SetInterestIkEnabled({'enable': False})

    fork {
        ZoraRiver008.Talk({'message': 'quest/QuestAreaB:LostShip_Coast010_050', 'getAttention': False})
    } {
        Camera.Shake({'power': 3, 'duration': 1.0})
    } {
        ZoraRiver008.PlayAnimationNoWait({'name': 'frightened02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver008.SetFacialExpression({'expression': 'sleep'})
    }

    ZoraRiver008.SetInstanceVariableString({'name': 'idleAnim', 'value': 'frightened02'})
    ZoraRiver008.AimCompassPoint({'direction': 2, 'duration': 0.20000000298023224, 'withoutTurn': False, 'immediateTurn': False})
    QuestSystem.SetProgress({'symbol': 'LostShip_Coast010:2702105470', 'isShowTelopInEvent': False, 'isFrontFade': False})
    if EventFlags.CheckFlag({'symbol': 'LostShip_EnemyDead'}) {

        call Mc043_EnemyDead()

    }
}

void Quest_3() {
    Fade.StartPreset({'preset': 'FadeOutNormalB'})

    call EvResetCommon.AllReset()

    ZoraRiver008.SetComponentActive({'active': True, 'name': 'aimControlComp'})
    Player.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="ZoraRiver008"), 'index': 0, 'offsetY': 0.0})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="ZoraRiver008"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Player.AimActor({'actor': ActorIdentifier(name="ZoraRiver008"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiver008"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraRiver008.LookAtTalker({'keep': True, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    ZoraRiver008.SetFacialExpression({'expression': 'sleep'})
    ZoraRiver008.PlayAnimationNoWait({'name': 'frightened02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.6000000238418579})
    ZoraRiver008.SetInterestIkEnabled({'enable': False})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    Timer.Wait({'time': 1.0})
    ZoraRiver008.AimCompassPoint({'direction': 0, 'duration': 0.20000000298023224, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        ZoraRiver008.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaB:LostShip_Coast020_010', 'aimToPlayer': False, 'cameraLookAt': False, 'selfTalkAnimName': 'frightened01', 'selfTalkAnim': True, 'facial': 'surprise', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Camera.Shake({'power': 3, 'duration': 1.0})
    } {
        ZoraRiver008.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    ZoraRiver008.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 2.0})

    fork {
        ZoraRiver008.Talk({'message': 'quest/QuestAreaB:LostShip_Coast020_020', 'getAttention': False})
    } {
        ZoraRiver008.PlayAnimationNoWait({'name': 'no01,think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver008.SetFacialExpression({'expression': 'normal'})
    }

    ZoraRiver008.SetInterestIkEnabled({'enable': True})
    Timer.Wait({'time': 0.10000000149011612})
    ZoraRiver008.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver008.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})

    fork {
        ZoraRiver008.Talk({'message': 'quest/QuestAreaB:LostShip_Coast020_030', 'getAttention': False})
    } {
        ZoraRiver008.SetFacialExpression({'expression': 'surprise'})
    } {
        ZoraRiver008.AimPlayer({'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiver008.PlayAnimation({'name': 'surprised_st02,surprised_lp02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    ZoraRiver008.SetInterestIkEnabled({'enable': False})

    fork {
        ZoraRiver008.Talk({'message': 'quest/QuestAreaB:LostShip_Coast020_050', 'getAttention': False})
    } {
        ZoraRiver008.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraRiver008.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        ZoraRiver008.Talk({'message': 'quest/QuestAreaB:LostShip_Coast020_060', 'getAttention': False})
    } {
        ZoraRiver008.PlayAnimationNoWait({'name': 'yes01,happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver008.SetFacialExpression({'expression': 'smile'})
    }

    ZoraRiver008.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver008.Talk({'message': 'quest/QuestAreaB:LostShip_Coast020_070', 'getAttention': False})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    GameControl.RequestLevelJump({'locator': 'EV_House_LostShip_River010_Clear', 'level': 'SeasideHouse003', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void Quest_2() {
    ZoraRiver008.SetInterestIkEnabled({'enable': False})
    ZoraRiver008.GenericTalkSequence({'playerTalkAnim': False, 'keepPersonalSpace': True, 'aimFromPlayer': True, 'cameraLookAt': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'facial': '', 'selfTalkAnim': False, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})

    fork {
        ZoraRiver008.PlayAnimation({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver008.Talk({'message': 'quest/QuestAreaB:LostShip_Coast010_060', 'getAttention': False})
    } {
        ZoraRiver008.SetFacialExpression({'expression': 'surprise'})
    }


    fork {
        ZoraRiver008.PlayAnimation({'name': 'frightened02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver008.Talk({'message': 'quest/QuestAreaB:LostShip_Coast010_070', 'getAttention': False})
    } {
        ZoraRiver008.SetFacialExpression({'expression': 'sleep'})
    }

    ZoraRiver008.SetInstanceVariableString({'name': 'idleAnim', 'value': 'frightened02'})
}

void Quest_5() {

    call EvResetCommon.AllResetNowait()

    Player.AimActor({'actor': ActorIdentifier(name="ZoraRiver008"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraRiver008.SetInterestIkEnabled({'enable': False})
    ZoraRiver008.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraRiver008.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver008.SetFacialExpression({'expression': 'sad'})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="ZoraRiver008"), 'actor2': ActorIdentifier(name="Player"), 'duration': 0.10000000149011612, 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 0.5})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    ZoraRiver008.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'cameraLookAt': False, 'message': 'quest/QuestAreaB:LostShip_Coast030_010', 'selfTalkAnimName': 'sad01', 'facial': 'sleep', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        ZoraRiver008.Talk({'message': 'quest/QuestAreaB:LostShip_Coast030_020', 'getAttention': False})
    } {
        ZoraRiver008.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraRiver008.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        ZoraRiver008.Talk({'message': 'quest/QuestAreaB:LostShip_Coast030_030', 'getAttention': False})
    } {
        ZoraRiver008.SetFacialExpression({'expression': 'smile'})
    } {
        ZoraRiver008.PlayAnimation({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    ZoraRiver008.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    ZoraRiver008.Destroy()
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    QuestSystem.SetProgress({'symbol': 'LostShip_Coast010:2589778771', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void talk060() {

    fork {
        ZoraRiver008.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'keepPersonalSpace': True, 'facial': 'smile', 'selfTalkAnimName': 'talk_swim01', 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver008Talk060_010', 'cameraLookAt': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Player.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    }

    ZoraRiver008.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver008Talk060_020', 'getAttention': False})
    ZoraRiver008.PlayAnimationNoWait({'name': 'wait_swim01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver008.KeepAnimationAfterEvent()
}

void Mc043_EnemyDead() {
    switch QuestSystem.CheckProgress({'symbol': 'LostShip_Coast010:2702105470'}) {
      case 4294967295:
        EventFlags.SetFlag({'symbol': 'LostShip_EnemyDead', 'value': True})
      case 0:
        QuestSystem.SetProgress({'symbol': 'LostShip_Coast010:2317584573', 'isShowTelopInEvent': False, 'isFrontFade': False})
    }
}

void talk015Q1_Loop() {
    ZoraRiver008.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver008Talk015_Q1', 'getAttention': False})
    goto Event12
}
