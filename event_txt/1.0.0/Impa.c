-------- EventFlow: Impa --------

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartParam']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActorLinkedPoint', 'AimCompassPoint', 'SetInterestIkEnabled', 'SetFacialExpression']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['PlayAnimation']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckMessgaeFlag']
params: None

Actor: Camera
entrypoint: None()
actions: ['Reset', 'LookAt2ActorsCenterAsTalker', 'LookAt3ActorsCenterAsTalker']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE', 'StopAllBGM', 'PlayJingleNotWait', 'PlayZoneBGM', 'SetDisableSeLabel', 'ResetDisableSeLabel']
queries: []
params: None

Actor: Impa
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'AimActor', 'LookAtTalker', 'SetFacialExpression', 'PlayAnimation', 'SetGravityEnable', 'SetCollisionEnabled', 'MoveToCompassPoint', 'MoveToTargetLinkedPoint', 'AimCompassPoint', 'PlayAnimationNoWait', 'MoveToTargetActor', 'PlayAnimationEx', 'PlayMaterialAnimationNoWait', 'SetInterestIkEnabled', 'AimPlayer', 'AimActorLinkedPoint', 'Activate', 'SetVisibility', 'WarpToActor', 'ChangeSteeringAnimation', 'ResetAim', 'SetComponentActive']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['SetOutfit', 'AimActor', 'MoveToBesideTargetActor', 'LookAtTalker', 'MoveToTargetLinkedPoint', 'GenericItemGetSequence', 'DestroyDisplayModel', 'PlayAnimationEx', 'PlayAnimation', 'AimCompassPoint', 'ResetFacialExpression', 'SetFacialExpression', 'AimActorLinkedPoint', 'RemoveItem', 'SetEquipmentVisibility', 'PlayAnimationNoWait', 'LearnSpinAction', 'WarpToActor']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['EnableAutoMovement', 'AimActor', 'MoveToBesideTargetActor', 'PlayAnimation', 'GenericTalkSequenceWithDialog', 'MoveToTargetLinkedPoint', 'PlayAnimationNoWait', 'SetInterestIkEnabled', 'PlayAnimationEx', 'ResetAim']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: EventMap
entrypoint: None()
actions: ['PreloadArchive', 'Open', 'Close', 'HightlightCheckPoint']
queries: []
params: None

Actor: TutorialUI
entrypoint: None()
actions: ['ShowModal']
queries: []
params: None

Actor: HyruleSoldier007
entrypoint: None()
actions: ['SetFacialExpression', 'PlayAnimationNoWait', 'AimPlayer', 'ResetAim']
queries: []
params: None

Actor: HyruleSoldier016
entrypoint: None()
actions: ['SetFacialExpression', 'PlayAnimationNoWait', 'AimPlayer', 'ResetAim']
queries: []
params: None

Actor: EvHyruleSoldier001
entrypoint: None()
actions: ['KeepAnimationAfterEvent', 'SetGravityEnable', 'SetCollisionEnabled', 'SetFacialExpression', 'Talk', 'PlayAnimation', 'PlayAnimationEx', 'AimCompassPoint', 'WarpToActorLinkedPoint', 'Activate', 'SetCullMode', 'AimActor', 'ResetAim', 'SetVisibility', 'Deactivate', 'LookAtTalker']
queries: []
params: None

Actor: EvHyruleSoldier002
entrypoint: None()
actions: ['ResetAim', 'SetGravityEnable', 'SetCollisionEnabled', 'SetFacialExpression', 'PlayAnimation', 'PlayAnimationEx', 'AimCompassPoint', 'WarpToActorLinkedPoint', 'Activate', 'SetCullMode', 'AimActor', 'KeepAnimationAfterEvent', 'SetVisibility', 'Deactivate']
queries: []
params: None

Actor: EvHyruleSoldier003
entrypoint: None()
actions: ['ResetAim', 'SetGravityEnable', 'SetCollisionEnabled', 'SetFacialExpression', 'PlayAnimation', 'PlayAnimationEx', 'AimCompassPoint', 'WarpToActorLinkedPoint', 'Activate', 'SetCullMode', 'AimActor', 'KeepAnimationAfterEvent', 'SetVisibility', 'Deactivate']
queries: []
params: None

Actor: EvHyruleSoldier004
entrypoint: None()
actions: ['Deactivate', 'WarpToActorLinkedPoint']
queries: []
params: None

Actor: EvHyruleSoldier005
entrypoint: None()
actions: ['Deactivate', 'WarpToActorLinkedPoint']
queries: []
params: None

Actor: EvHyruleSoldier006
entrypoint: None()
actions: ['Deactivate', 'WarpToActorLinkedPoint']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: []
queries: []
params: None

void MeetImpa() {
    Impa.LookAtTalker({'offsetY': 0.25, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 0.5})

    fork {
        Player.WarpToActor({'actor': ActorIdentifier(name="Impa"), 'distance': 7.5, 'offsetY': 0.0, 'offsetX': 0.0})
    } {
        Impa.PlayAnimation({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Impa.SetFacialExpression({'expression': 'surprise'})
    } {
        HyruleSoldier007.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        HyruleSoldier007.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier007.SetFacialExpression({'expression': 'surprise'})
    } {
        HyruleSoldier016.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        HyruleSoldier016.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier016.SetFacialExpression({'expression': 'surprise'})
    }


    fork {
        Impa.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:MeetImpa_010', 'selfTalkAnimName': 'happy', 'playerTalkAnim': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Impa.SetCollisionEnabled({'enable': True})
        Impa.SetGravityEnable({'enable': True})
    }

    Impa.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Impa.SetFacialExpression({'expression': 'normal'})

    fork {
        Impa.MoveToTargetActor({'distance': 3.0, 'speed': 1, 'actor': ActorIdentifier(name="Zelda"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        HyruleSoldier007.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier007.SetFacialExpression({'expression': 'smile'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        HyruleSoldier016.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier016.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        Impa.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Impa"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    Impa.PlayAnimationNoWait({'name': 'sad_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Impa.SetFacialExpression({'expression': 'sad'})
    Timer.Wait({'time': 0.5})

    fork {
        Impa.Talk({'message': 'scenario/StoryAreaA:MeetImpa_020', 'getAttention': False})
    } {
        HyruleSoldier007.ResetAim()
        HyruleSoldier007.SetFacialExpression({'expression': 'normal'})
    } {
        HyruleSoldier016.ResetAim()
        HyruleSoldier016.SetFacialExpression({'expression': 'normal'})
    }

    Timer.Wait({'time': 0.5})
    Impa.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Impa.GenericTalkSequenceWithDialog({'aimFromPlayer': False, 'playerTalkAnim': False, 'aimToPlayer': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'message': 'scenario/StoryAreaA:MeetImpa_030', 'selfTalkAnimName': 'talk', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Impa.Talk({'message': 'scenario/StoryAreaA:MeetImpa_040', 'getAttention': False})
    } {
        Impa.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Impa.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        Impa.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Impa.SetFacialExpression({'expression': 'normal'})
    }

    Timer.Wait({'time': 0.5})
    Impa.Talk({'message': 'scenario/StoryAreaA:MeetImpa_050', 'getAttention': False})
    Timer.Wait({'time': 0.5})

    fork {
        Impa.Talk({'message': 'scenario/StoryAreaA:MeetImpa_060', 'getAttention': False})
    } {
        Impa.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Impa.SetFacialExpression({'expression': 'smile'})
    }

    Timer.Wait({'time': 0.30000001192092896})

    fork {
        Impa.Talk({'message': 'scenario/StoryAreaA:MeetImpa_070', 'getAttention': False})
    } {
        Impa.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Impa.Talk({'message': 'scenario/StoryAreaA:MeetImpa_080', 'getAttention': False})
    } {
        Impa.MoveToCompassPoint({'speed': 0, 'direction': 3, 'distance': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Impa.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    EventFlags.SetFlag({'symbol': 'EvPrologue007', 'value': True})
    EventVariables.SetVariable({'symbol': 'HyruleCastle_LuberiHouse:2811354988'})
}

void Talk010() {
    Impa.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/HylianGeneralTalk:ImpaTalk_010_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void GetHorse_Forest010_Orders() {

    call EvResetCommon.AllReset()

    Impa.SetInterestIkEnabled({'enable': False})
    Impa.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'quest/QuestAreaA:GetHorse_Forest010_010', 'selfTalkAnimName': 'talk,think', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Impa.Talk({'message': 'quest/QuestAreaA:GetHorse_Forest010_020', 'getAttention': False})
    } {
        Impa.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Impa.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        Impa.Talk({'message': 'quest/QuestAreaA:GetHorse_Forest010_040', 'getAttention': False})
    } {
        Impa.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Impa.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        Impa.Talk({'message': 'quest/QuestAreaA:GetHorse_Forest010_042', 'getAttention': False})
    } {
        Impa.PlayAnimationNoWait({'name': 'think,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Impa.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        Impa.Talk({'message': 'quest/QuestAreaA:GetHorse_Forest010_044', 'getAttention': False})
    } {
        Impa.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Impa.SetFacialExpression({'expression': 'smile'})
    }

    QuestSystem.SetProgress({'symbol': 'GetHorse_Forest010:3715714582', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void GetHorse_Forest010_talk() {

    call EvResetCommon.AllReset()

    Impa.SetInterestIkEnabled({'enable': False})
    Impa.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'quest/QuestAreaA:GetHorse_Forest010_060', 'selfTalkAnimName': 'happy', 'facial': 'smile', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Horse_HyrulePlains010_end() {

    call EvResetCommon.AllReset()

    Impa.SetInterestIkEnabled({'enable': False})
    Impa.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'facial': 'smile', 'message': 'scenario/HylianGeneralTalk:ImpaTalk030_010', 'selfTalkAnimName': 'talk', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Impa.Talk({'message': 'scenario/HylianGeneralTalk:ImpaTalk030_020', 'getAttention': False})
    } {
        Impa.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Impa.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        Impa.Talk({'message': 'scenario/HylianGeneralTalk:ImpaTalk030_030', 'getAttention': False})
    } {
        Impa.PlayAnimation({'name': 'observation,happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Impa.SetFacialExpression({'expression': 'smile'})
    }

}

void Talk020() {
    Impa.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/HylianGeneralTalk:ImpaTalk020_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void MeetImpaAgain() {

    call MeetImpaAgain_0()


    call EvResetCommon.AllReset()

    Zelda.SetFacialExpression({'expression': 'normal'})

    fork {
        Impa.Activate()
    } {
        Impa.SetVisibility({'visible': False})
    } {
        Impa.WarpToActor({'actor': ActorIdentifier(name="Impa"), 'distance': 1.25, 'offsetY': 0.0, 'offsetX': 0.0})
    }

    Impa.SetGravityEnable({'enable': False})
    Impa.SetCollisionEnabled({'enable': False})
    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Impa.PlayAnimation({'name': 'ev_spiralstaircase_levelout_u', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Impa.SetVisibility({'visible': True})
    }

    Impa.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Impa.LookAtTalker({'distanceOffset': 0.0, 'keep': True, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Impa.SetCollisionEnabled({'enable': True})
    Impa.SetGravityEnable({'enable': True})

    fork {
        Impa.SetFacialExpression({'expression': 'surprise'})
        Impa.GenericTalkSequenceWithDialog({'selfTalkAnimName': 'surprised_st', 'aimFromPlayer': False, 'playerTalkAnim': False, 'aimToPlayer': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'message': 'scenario/StoryAreaA:MeetImpaAgain_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.MoveToBesideTargetActor({'speed': 1, 'offsetZ': 8.0, 'actor': ActorIdentifier(name="Impa"), 'offsetX': 0.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Player.AimActor({'actor': ActorIdentifier(name="Impa"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Player.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].MoveToBesideTargetActor({'speed': 1, 'timeOut': 3.0, 'offsetY': 1.0, 'offsetX': 1.5, 'offsetZ': 0.0, 'actor': ActorIdentifier(name="Player"), 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    }

    Impa.SetFacialExpression({'expression': 'normal'})

    fork {
        Impa.MoveToTargetLinkedPoint({'index': 6, 'customSpeed': 4.0, 'actor': ActorIdentifier(name="Area"), 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Impa"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Impa"), 'actor2': ActorIdentifier(name="Zelda"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Impa.GenericTalkSequenceWithDialog({'selfTalkAnimName': 'surprised_st', 'aimFromPlayer': False, 'playerTalkAnim': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'aimToPlayer': True, 'message': 'scenario/StoryAreaA:MeetImpaAgain_011', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Impa.Talk({'message': 'scenario/StoryAreaA:MeetImpaAgain_012', 'getAttention': False})
    } {
        Impa.SetFacialExpression({'expression': 'angry'})
        Impa.PlayAnimation({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.5})
    Impa.GenericTalkSequenceWithDialog({'aimFromPlayer': False, 'playerTalkAnim': False, 'aimToPlayer': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'message': 'scenario/StoryAreaA:MeetImpaAgain_020', 'selfTalkAnimName': 'angry', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Impa.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    call GeneralSequence.ZeldaTalkMotion()

    Impa.SetFacialExpression({'expression': 'surprise'})
    Impa.GenericTalkSequenceWithDialog({'selfTalkAnimName': 'surprised_st', 'aimFromPlayer': False, 'playerTalkAnim': False, 'aimToPlayer': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'message': 'scenario/StoryAreaA:MeetImpaAgain_030', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Impa.SetFacialExpression({'expression': 'normal'})
    Impa.GenericTalkSequenceWithDialog({'aimFromPlayer': False, 'playerTalkAnim': False, 'aimToPlayer': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'message': 'scenario/StoryAreaA:MeetImpaAgain_031', 'selfTalkAnimName': 'think', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Impa"), 'actor3': ActorIdentifier(name="Partner", sub_name="companion"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Partner[companion].GenericTalkSequenceWithDialog({'aimFromPlayer': False, 'playerTalkAnim': False, 'aimToPlayer': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'message': 'scenario/StoryAreaA:MeetImpaAgain_032', 'selfTalkAnimName': 'yes', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimCompassPoint({'withoutTurn': True, 'direction': 1, 'duration': 0.4000000059604645, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Impa.SetInterestIkEnabled({'enable': True})
    Timer.Wait({'time': 0.5})
    Zelda.SetInterestIkEnabled({'enable': False})
    Impa.SetComponentActive({'name': 'aimBlockerComp', 'active': False})
    Impa.AimCompassPoint({'direction': 1, 'withoutTurn': True, 'duration': 1.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})
    Impa.AimCompassPoint({'direction': 3, 'withoutTurn': True, 'duration': 1.0, 'immediateTurn': False})

    fork {
        Timer.Wait({'time': 1.5})
        Impa.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Impa"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Impa.SetComponentActive({'name': 'aimBlockerComp', 'active': True})
    Impa.SetFacialExpression({'expression': 'normal'})
    Impa.GenericTalkSequenceWithDialog({'aimFromPlayer': False, 'playerTalkAnim': False, 'aimToPlayer': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'message': 'scenario/StoryAreaA:MeetImpaAgain_033', 'selfTalkAnimName': 'talk', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Impa.SetInterestIkEnabled({'enable': False})
    Impa.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.25})

    fork {
        Partner[companion].AimActor({'duration': 0.800000011920929, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {

        call GeneralSequence.Look_at_Partner()

    }

    Timer.Wait({'time': 1.0})
    Partner[companion].PlayAnimationEx({'time': 0.0, 'name': '$locomotion', 'blendFrame': 0, 'layer': 0, 'restart': False})
    Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetY': 1.0, 'actor': ActorIdentifier(name="Impa"), 'offsetX': 0.0, 'offsetZ': 1.25, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].PlayAnimation({'name': 'appeal', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Partner[companion].PlayAnimation({'name': 'ev_impa_appeal,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 2.5})
    Partner[companion].PlayAnimationEx({'time': 0.0, 'name': '$locomotion', 'blendFrame': 0, 'layer': 0, 'restart': False})
    Partner[companion].MoveToBesideTargetActor({'offsetY': 1.0, 'timeOut': 5.0, 'offsetX': 1.5, 'offsetZ': -0.5, 'actor': ActorIdentifier(name="Player"), 'speed': 0, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:MeetImpaAgain_034', 'selfTalkAnimName': 'sad', 'aimToPlayer': False, 'aimFromPlayer': False, 'playerTalkAnim': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Timer.Wait({'time': 0.5})
    Player.AimActor({'actor': ActorIdentifier(name="Impa"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    call GeneralSequence.ZeldaTalkMotion()

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="Impa"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Impa.SetFacialExpression({'expression': 'sleep'})
    Impa.GenericTalkSequenceWithDialog({'aimFromPlayer': False, 'playerTalkAnim': False, 'aimToPlayer': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'message': 'scenario/StoryAreaA:MeetImpaAgain_035', 'selfTalkAnimName': 'think', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Impa.SetFacialExpression({'expression': 'normal'})
    Impa.GenericTalkSequenceWithDialog({'aimFromPlayer': False, 'playerTalkAnim': False, 'aimToPlayer': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'message': 'scenario/StoryAreaA:MeetImpaAgain_036', 'selfTalkAnimName': 'happy', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Impa.GenericTalkSequenceWithDialog({'aimFromPlayer': False, 'playerTalkAnim': False, 'aimToPlayer': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'message': 'scenario/StoryAreaA:MeetImpaAgain_040', 'selfTalkAnimName': 'talk', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Impa.Talk({'message': 'scenario/StoryAreaA:MeetImpaAgain_050', 'getAttention': False})
    Impa.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Impa.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Impa.Talk({'message': 'scenario/StoryAreaA:MeetImpaAgain_051', 'getAttention': False})
    Impa.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    call GeneralSequence.ZeldaTalkMotion()

    Impa.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Impa.Talk({'message': 'scenario/StoryAreaA:MeetImpaAgain_060', 'getAttention': False})
    Impa.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Player.LookAtTalker({'keep': True, 'offsetY': 1.0, 'offsetX': 0.25, 'distanceOffset': 0.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetZ': 0.0})
    Timer.Wait({'time': 0.5})
    Zelda.SetInterestIkEnabled({'enable': True})
    Zelda.AimCompassPoint({'direction': 3, 'withoutTurn': True, 'duration': 0.5, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})
    Zelda.AimActorLinkedPoint({'withoutTurn': True, 'duration': 0.5, 'actor': ActorIdentifier(name="Area"), 'pointIndex': 4, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})

    fork {
        Player.MoveToTargetLinkedPoint({'index': 4, 'actor': ActorIdentifier(name="Area"), 'speed': 1, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 0.5})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Zelda"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Audio.StopAllBGM({'duration': 2.0})
    }


    fork {
        Impa.AimCompassPoint({'direction': 3, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Impa"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.5})
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_ZELDA_CHANGE_CLOTH', 'volume': 1.0, 'pitch': 1.0})
        Timer.Wait({'time': 4.730000019073486})
        Timer.Wait({'time': 0.5})
        Partner.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Zelda.SetInterestIkEnabled({'enable': False})
        Player.SetEquipmentVisibility({'visibility': False})
    }

    Player.SetOutfit({'kind': 'Adventure1'})

    fork {
        Player.MoveToBesideTargetActor({'offsetY': 0.0, 'timeOut': 3.0, 'speed': 1, 'offsetX': 2.0, 'actor': ActorIdentifier(name="Impa"), 'offsetZ': 0.0, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.SetEquipmentVisibility({'visibility': True})
    }

    Timer.Wait({'time': 0.20000000298023224})
    Player.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        Impa.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Zelda"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Player.PlayAnimation({'name': 'ev_clothes_change_after', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.LookAtTalker({'keep': True, 'distanceOffset': -8.0, 'offsetY': 0.5, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 0.5})

    fork {
        Dialog.Show({'message': 'scenario/StoryAreaA:MeetImpaAgain_070'})
    } {
        Zelda.SetFacialExpression({'expression': 'serious_few'})
        Player.PlayAnimation({'name': 'ev_yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.PlayJingleNotWait({'ignoreSkip': False, 'label': 'BGM_FANFARE_ITEM_GET_SMALL', 'volume': 1.0})
    }

    TutorialUI.ShowModal({'key': 'MeetImpaAgainModal'})
    Player.ResetFacialExpression()
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Impa"), 'actor2': ActorIdentifier(name="Zelda"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Player.AimActor({'actor': ActorIdentifier(name="Impa"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Audio.PlayZoneBGM({'stopbgm': False})
    Timer.Wait({'time': 0.5})
    Impa.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Impa.Talk({'message': 'scenario/StoryAreaA:MeetImpaAgain_080', 'getAttention': False})
    Timer.Wait({'time': 0.5})
    Impa.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Dialog.Show({'message': 'scenario/StoryAreaA:MeetImpaAgain_100'})

    fork {

        fork {
            Impa.AimActorLinkedPoint({'pointIndex': 0, 'actor': ActorIdentifier(name="Area"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].AimActor({'actor': ActorIdentifier(name="EvHyruleSoldier001"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Player.AimActorLinkedPoint({'pointIndex': 0, 'actor': ActorIdentifier(name="Area"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    } {

        fork {
            EvHyruleSoldier001.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'index': 11, 'offsetY': 0.0})
            EvHyruleSoldier001.AimCompassPoint({'direction': 3, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
        } {
            EvHyruleSoldier002.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'index': 11, 'offsetY': 0.0})
            EvHyruleSoldier002.AimCompassPoint({'direction': 3, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
        } {
            EvHyruleSoldier003.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'index': 11, 'offsetY': 0.0})
            EvHyruleSoldier003.AimCompassPoint({'direction': 3, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
        } {
            EvHyruleSoldier004.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'index': 11, 'offsetY': 0.0})
        } {
            EvHyruleSoldier005.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'index': 12, 'offsetY': 0.0})
        } {
            EvHyruleSoldier006.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'index': 12, 'offsetY': 0.0})
        }

    }


    fork {
        EvHyruleSoldier001.Activate()
        EvHyruleSoldier001.SetVisibility({'visible': True})
        EvHyruleSoldier001.SetCullMode({'enabled': True, 'cullMode': 0})
        EvHyruleSoldier001.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="Area"), 'offsetY': 0.0})
        EvHyruleSoldier001.AimActor({'actor': ActorIdentifier(name="Impa"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        EvHyruleSoldier001.SetFacialExpression({'expression': 'angry'})
    } {
        EvHyruleSoldier002.Activate()
        EvHyruleSoldier002.SetVisibility({'visible': True})
        EvHyruleSoldier002.SetCullMode({'enabled': True, 'cullMode': 0})
        EvHyruleSoldier002.WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Area"), 'offsetY': 0.0})
        EvHyruleSoldier002.AimActor({'actor': ActorIdentifier(name="Impa"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        EvHyruleSoldier002.SetFacialExpression({'expression': 'angry'})
    } {
        EvHyruleSoldier003.Activate()
        EvHyruleSoldier003.SetVisibility({'visible': True})
        EvHyruleSoldier003.SetCullMode({'enabled': True, 'cullMode': 0})
        EvHyruleSoldier003.WarpToActorLinkedPoint({'index': 2, 'actor': ActorIdentifier(name="Area"), 'offsetY': 0.0})
        EvHyruleSoldier003.AimActor({'actor': ActorIdentifier(name="Impa"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        EvHyruleSoldier003.SetFacialExpression({'expression': 'angry'})
    } {
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_CASTLE_SOLDIERS_STEPS1', 'volume': 1.0, 'pitch': 1.0})
        Audio.SetDisableSeLabel({'label': 'SE_NPC_HYL_SOLDIER_WAIT_SPEAR'})
        Timer.Wait({'time': 2.0})

        fork {
            EvHyruleSoldier001.PlayAnimation({'name': 'wait_spear', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            EvHyruleSoldier002.PlayAnimation({'name': 'wait_spear', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            EvHyruleSoldier003.PlayAnimation({'name': 'wait_spear', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }

    EvHyruleSoldier001.LookAtTalker({'keep': True, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 2.299999952316284})

    fork {
        Impa.LookAtTalker({'keep': True, 'offsetY': 1.0, 'offsetX': 0.5, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetZ': 0.0})
    } {
        Impa.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        Impa.Talk({'message': 'scenario/StoryAreaA:MeetImpaAgain_110', 'getAttention': False})
    } {
        Impa.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.30000001192092896})

    fork {
        Impa.Talk({'message': 'scenario/StoryAreaA:MeetImpaAgain_120', 'getAttention': False})
    } {
        Impa.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Impa.SetFacialExpression({'expression': 'sleep'})
    }

    Impa.SetFacialExpression({'expression': 'normal'})
    Impa.ChangeSteeringAnimation({'walk': 'move_fast', 'run': 'move_fast', 'idle': 'wait', 'layer': 0})

    fork {
        Impa.MoveToTargetLinkedPoint({'index': 3, 'customSpeed': 0.0, 'speed': 0, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 0.5})
        Zelda.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'actor': ActorIdentifier(name="Impa"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.699999988079071})
        Partner[companion].SetInterestIkEnabled({'enable': True})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Impa"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Impa.SetInterestIkEnabled({'enable': True})
        Impa.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="EvHyruleSoldier001"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Impa.AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        EvHyruleSoldier001.ResetAim()
    } {
        EvHyruleSoldier002.ResetAim()
    } {
        EvHyruleSoldier003.ResetAim()
    }

    EvHyruleSoldier001.Talk({'message': 'scenario/StoryAreaA:MeetImpaAgain_121', 'getAttention': False})
    Timer.Wait({'time': 1.0})
    Impa.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:MeetImpaAgain_122', 'aimToPlayer': False, 'aimFromPlayer': False, 'selfTalkAnim': True, 'cameraLookAt': False, 'keepPersonalSpace': False, 'playerTalkAnim': False, 'playerTalkAnimName': '', 'selfTalkAnimName': 'think', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Impa.PlayMaterialAnimationNoWait({'name': 'fighting', 'layer': 2})
    Impa.PlayAnimationEx({'name': 'fighting', 'time': 1.0, 'layer': 0, 'blendFrame': -1, 'restart': False})
    Impa.ResetAim()

    fork {
        Timer.Wait({'time': 0.10000000149011612})

        fork {
            EvHyruleSoldier001.PlayAnimation({'name': 'down_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
            EvHyruleSoldier001.PlayAnimationEx({'name': 'down_lp', 'time': 0.0, 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            EvHyruleSoldier001.SetFacialExpression({'expression': 'down'})
        }

        EvHyruleSoldier001.KeepAnimationAfterEvent()
    } {
        Timer.Wait({'time': 0.5})

        fork {
            EvHyruleSoldier002.PlayAnimation({'name': 'down_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
            EvHyruleSoldier002.PlayAnimationEx({'name': 'down_lp', 'time': 0.0, 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            EvHyruleSoldier002.SetFacialExpression({'expression': 'down'})
        }

        EvHyruleSoldier002.KeepAnimationAfterEvent()
    } {
        Timer.Wait({'time': 0.17000000178813934})

        fork {
            EvHyruleSoldier003.PlayAnimation({'name': 'down_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
            EvHyruleSoldier003.PlayAnimationEx({'name': 'down_lp', 'time': 0.0, 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            EvHyruleSoldier003.SetFacialExpression({'expression': 'down'})
        }

        EvHyruleSoldier003.KeepAnimationAfterEvent()
    }


    fork {
        Player.PlayAnimation({'name': 'ev_surprise_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayAnimation({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 1.0})
    Impa.MoveToTargetActor({'customSpeed': 0.0, 'speed': 0, 'actor': ActorIdentifier(name="Zelda"), 'distance': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})

    fork {
        Impa.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Impa.PlayAnimationEx({'name': 'wait', 'time': 0.0, 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Impa.Talk({'message': 'scenario/StoryAreaA:MeetImpaAgain_130', 'getAttention': False})
        Impa.PlayAnimation({'name': 'ev_give_st,ev_give_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.0})
        Player.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.2000000476837158})
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        EvHyruleSoldier001.SetGravityEnable({'enable': False})
        EvHyruleSoldier001.SetCollisionEnabled({'enable': False})
    } {
        EvHyruleSoldier002.SetGravityEnable({'enable': False})
        EvHyruleSoldier002.SetCollisionEnabled({'enable': False})
    } {
        EvHyruleSoldier003.SetGravityEnable({'enable': False})
        EvHyruleSoldier003.SetCollisionEnabled({'enable': False})
    }

    Player.AimActor({'actor': ActorIdentifier(name="Impa"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Impa.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.GenericItemGetSequence({'itemKey': 'FieldMap', 'keepRaise': True, 'count': 1, 'messageEntry': '', 'index': -1})
    QuestSystem.SetProgress({'symbol': 'HyruleCastle_LuberiHouse:425213136', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventMap.PreloadArchive({'levelName': 'Field'})
    EventMap.Open({'levelName': 'Field', 'scale': 1.0})
    Timer.Wait({'time': 0.5})
    EventMap.HightlightCheckPoint({'index': -1})
    Timer.Wait({'time': 0.5})
    Impa.Talk({'message': 'scenario/StoryAreaA:MeetImpaAgain_150', 'getAttention': False})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="Impa"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.20000000298023224})
    EventMap.Close()
    Player.DestroyDisplayModel()
    Player.PlayAnimation({'name': 'item_get_ed', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.SetEquipmentVisibility({'visibility': True})
    Player.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Zelda.SetFacialExpression({'expression': 'serious_few'})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="Impa"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Impa.LookAtTalker({'offsetY': 1.5, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetZ': 0.0, 'keep': False})
    }

    Dialog.Show({'message': 'scenario/StoryAreaA:MeetImpaAgain_165'})

    fork {
        Impa.AimActor({'actor': ActorIdentifier(name="EvHyruleSoldier004"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="EvHyruleSoldier001"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="EvHyruleSoldier004"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Audio.PlayOneshotSystemSE({'label': 'SE_EV_CASTLE_SOLDIERS_STEPS2', 'volume': 1.0, 'pitch': 1.0})
    Timer.Wait({'time': 0.5})
    Impa.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Impa.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Impa.Talk({'message': 'scenario/StoryAreaA:MeetImpaAgain_160', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="Impa"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Impa"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Impa.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Impa.AimActor({'actor': ActorIdentifier(name="EvHyruleSoldier001"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Impa.Talk({'message': 'scenario/StoryAreaA:MeetImpaAgain_170', 'getAttention': False})
    Partner[companion].ResetAim()
    Player.SetFacialExpression({'expression': 'sad'})
    EventFlags.SetFlag({'symbol': 'Map_NotOpen', 'value': False})
    Timer.Wait({'time': 0.5})

    fork {
        Player.PlayAnimationEx({'name': '', 'time': 0.0, 'layer': 0, 'blendFrame': -1, 'restart': False})
        Player.MoveToTargetLinkedPoint({'index': 10, 'customSpeed': 0.0, 'speed': 1, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 0.5})
        Fade.StartParam({'mode': 1, 'time': 0.5, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0})
    } {
        Partner[companion].EnableAutoMovement()
        Partner[companion].MoveToTargetLinkedPoint({'index': 10, 'customSpeed': 0.0, 'speed': 1, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    Audio.ResetDisableSeLabel()
    EventVariables.SetVariable({'symbol': 'HyruleCastle_LuberiHouse:3398887262'})
    GameControl.RequestLevelJump({'level': 'HyruleCastlePrison', 'locator': 'HyruleCastlePrison_004', 'offsetZ': 0.0, 'offsetX': 0.0})
    EventFlags.SetFlag({'value': True, 'symbol': 'MeetImpaAgainModal_Clear'})
    EventFlags.SetFlag({'symbol': 'FieldMap_Breakthrough_Open', 'value': True})
    Player.RemoveItem({'itemKey': 'ZeldaClothes01', 'count': 1, 'index': -1})
    Player.LearnSpinAction()
}

void ImpaTalk() {
    Impa.GenericTalkSequenceWithDialog({'selfTalkAnimName': 'happy', 'playerTalkAnimName': '', 'facial': 'smile', 'message': 'scenario/StoryAreaA:MeetImpa_070', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnim': False, 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Impa.Talk({'message': 'scenario/StoryAreaA:MeetImpa_080', 'getAttention': False})
}

void Talk040() {
    Impa.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/HylianGeneralTalk:ImpaTalk040_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void MapGetMessage() {
    Dialog.Show({'message': 'scenario/StoryAreaA:MeetImpaAgain_140'})
}

void Special_HyruleCastle040() {
    Impa.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'facial': 'sad', 'message': 'quest/QuestAreaA:Special_HyruleCastle040_050', 'selfTalkAnimName': 'think', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Talk050() {
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/HylianGeneralTalk:ImpaTalk050_010'}) {
        Impa.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/HylianGeneralTalk:ImpaTalk050_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        Impa.Talk({'message': 'scenario/HylianGeneralTalk:ImpaTalk050_020', 'getAttention': False})
        Impa.Talk({'message': 'scenario/HylianGeneralTalk:ImpaTalk050_030', 'getAttention': False})
    } else {
        Impa.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:ImpaTalk050_040', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
}

void Talk060() {
    Impa.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/HylianGeneralTalk:ImpaTalk060_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Impa.Talk({'message': 'scenario/HylianGeneralTalk:ImpaTalk060_020', 'getAttention': False})
    Impa.Talk({'message': 'scenario/HylianGeneralTalk:ImpaTalk060_030', 'getAttention': False})
}

void ImpaTalk035() {
    Impa.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'facial': 'sad', 'message': 'scenario/HylianGeneralTalk:ImpaTalk035_010', 'selfTalkAnimName': '', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Impa.Talk({'message': 'scenario/HylianGeneralTalk:ImpaTalk035_020', 'getAttention': False})
    } {
        Impa.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void MeetImpaAgain_0() {
    EvHyruleSoldier001.Deactivate()
    EvHyruleSoldier002.Deactivate()
    EvHyruleSoldier003.Deactivate()
    EvHyruleSoldier004.Deactivate()
    EvHyruleSoldier005.Deactivate()
    EvHyruleSoldier006.Deactivate()
    EventFlags.SetFlag({'value': True, 'symbol': 'EvPrologue010'})
}
