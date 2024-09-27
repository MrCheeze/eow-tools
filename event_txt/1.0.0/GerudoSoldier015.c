-------- EventFlow: GerudoSoldier015 --------

Actor: Zelda
entrypoint: None()
actions: ['WarpToActor']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt3ActorsCenterAsTalker', 'Shake', 'LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'GenericItemGetSequence', 'AddItem', 'SetInterestIkEnabled', 'AimCompassPoint', 'PlayAnimationNoWait']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor', 'WarpToActor', 'AimCompassPoint', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: GerudoSoldier015
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimationNoWait', 'SetFacialExpression', 'AimActor', 'AimPlayer', 'PlayAnimation', 'SetInterestIkEnabled', 'GetAttention', 'WarpToActor', 'SetGravityEnable', 'SetCollisionEnabled', 'AimDegreeAngle', 'LookAtTalker', 'SetComponentActive', 'Destroy', 'TrailRail']
queries: []
params: None

Actor: GerudoSoldier016
entrypoint: None()
actions: ['SetFacialExpression', 'PlayAnimation', 'Talk', 'PlayAnimationNoWait', 'AimActor', 'AimPlayer', 'SetInterestIkEnabled', 'KeepAnimationAfterEvent', 'WarpToActor', 'TrailRail', 'SetGravityEnable', 'SetCollisionEnabled', 'SetComponentActive', 'AimCompassPoint']
queries: []
params: None

Actor: GerudoAide000
entrypoint: None()
actions: ['Activate', 'MoveToTargetLinkedPoint', 'AimDegreeAngle', 'SetFacialExpression', 'Talk', 'AimActor', 'PlayAnimationNoWait', 'AimPlayer', 'PlayAnimation', 'Destroy', 'SetInterestIkEnabled', 'ActiveteLinkedActor', 'SetActorSwitch', 'SetComponentActive']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE']
queries: []
params: None

void talk() {
    GerudoSoldier015.GenericTalkSequenceWithDialog({'aimFromPlayer': True, 'playerTalkAnim': False, 'selfTalkAnimName': '', 'selfTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier004Talk01_010', 'facial': '', 'aimToPlayer': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk10() {
    GerudoSoldier015.GenericTalkSequenceWithDialog({'aimFromPlayer': True, 'playerTalkAnim': False, 'selfTalkAnimName': '', 'selfTalkAnim': False, 'facial': '', 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier004Talk02_010', 'aimToPlayer': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk20() {
    GerudoSoldier015.GenericTalkSequenceWithDialog({'aimFromPlayer': True, 'playerTalkAnim': False, 'selfTalkAnimName': '', 'selfTalkAnim': False, 'facial': '', 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier004Talk03_010', 'aimToPlayer': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk30() {
    GerudoSoldier015.GenericTalkSequenceWithDialog({'aimFromPlayer': True, 'playerTalkAnim': False, 'selfTalkAnimName': '', 'selfTalkAnim': False, 'facial': '', 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier004Talk04_010', 'aimToPlayer': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Quest_1() {
    Fade.StartPreset({'preset': 'FadeOutSlowB'})

    call EvResetCommon.AllReset()

    Zelda.WarpToActor({'distance': 2.0, 'offsetX': 0.0, 'actor': ActorIdentifier(name="GerudoSoldier015"), 'offsetY': 0.0})
    Partner[companion].WarpToActor({'offsetY': 1.0, 'distance': 3.0, 'offsetX': 1.0, 'actor': ActorIdentifier(name="GerudoSoldier015")})

    fork {
        Partner[companion].AimCompassPoint({'duration': 0.0, 'direction': 2, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Player.AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    }

    GerudoSoldier015.SetComponentActive({'name': 'aimControlComp', 'active': True})
    GerudoSoldier016.SetComponentActive({'name': 'aimControlComp', 'active': True})
    GerudoSoldier016.SetInterestIkEnabled({'enable': False})
    GerudoSoldier015.SetInterestIkEnabled({'enable': False})
    GerudoSoldier015.LookAtTalker({'duration': 0.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    GerudoSoldier015.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})

    fork {
        GerudoSoldier015.GenericTalkSequenceWithDialog({'aimFromPlayer': True, 'message': 'quest/QuestAreaD:Lanmola_Desert010_010', 'cameraLookAt': False, 'facial': 'normal', 'selfTalkAnimName': 'salute,talk', 'playerTalkAnim': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="GerudoSoldier015"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        GerudoSoldier015.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert010_020', 'getAttention': False})
    } {
        GerudoSoldier015.PlayAnimationNoWait({'name': 'angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoSoldier015.SetFacialExpression({'expression': 'sad'})
    }

    GerudoSoldier016.SetComponentActive({'active': False, 'name': 'aimBlockerComp'})
    GerudoSoldier016.SetInterestIkEnabled({'enable': True})
    GerudoSoldier015.GetAttention({'duration': 0.4000000059604645, 'withoutTurn': True})

    fork {
        GerudoSoldier015.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert010_030', 'getAttention': False})
    } {
        GerudoSoldier015.SetFacialExpression({'expression': 'angry'})
    } {
        GerudoSoldier015.PlayAnimationNoWait({'name': 'salute,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GerudoSoldier015.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="GerudoSoldier016"), 'actor2': ActorIdentifier(name="Player"), 'actor3': ActorIdentifier(name="GerudoSoldier015"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    GerudoSoldier016.PlayAnimationNoWait({'name': 'salute', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier016.AimPlayer({'duration': 0.25, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Player.SetInterestIkEnabled({'enable': True})
    Partner[companion].SetInterestIkEnabled({'enable': True})

    fork {
        GerudoSoldier016.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert010_040', 'getAttention': False})
    } {
        GerudoSoldier016.SetFacialExpression({'expression': 'angry'})
    } {
        GerudoSoldier016.PlayAnimationNoWait({'name': 'talk,happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier016"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        GerudoSoldier015.SetInterestIkEnabled({'enable': True})
        GerudoSoldier015.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier016"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier016"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoSoldier016.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.20000000298023224})
    GerudoSoldier015.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        GerudoSoldier015.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert010_050', 'getAttention': False})
    } {
        GerudoSoldier015.SetFacialExpression({'expression': 'smile'})
    } {
        GerudoSoldier015.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier015"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="GerudoSoldier015"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoSoldier015.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier015.SetInterestIkEnabled({'enable': False})
    GerudoSoldier016.AimActor({'actor': ActorIdentifier(name="GerudoSoldier015"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        GerudoSoldier016.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert010_060', 'getAttention': False})
    } {
        GerudoSoldier016.SetFacialExpression({'expression': 'angry'})
    } {
        GerudoSoldier016.PlayAnimation({'name': 'talk,laugh', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier016"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        GerudoSoldier015.SetInterestIkEnabled({'enable': True})
        GerudoSoldier015.SetFacialExpression({'expression': 'normal'})
        GerudoSoldier015.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier016"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier016"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoSoldier016.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier015.AimActor({'actor': ActorIdentifier(name="GerudoSoldier016"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        GerudoSoldier015.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert010_070', 'getAttention': False})
    } {
        GerudoSoldier015.PlayAnimationNoWait({'name': 'salute,angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoSoldier015.SetFacialExpression({'expression': 'angry'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier015"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier015"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoSoldier016.AimActor({'actor': ActorIdentifier(name="GerudoSoldier015"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        GerudoSoldier016.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert010_080', 'getAttention': False})
    } {
        GerudoSoldier016.PlayAnimationNoWait({'name': 'salute,angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier016"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier016"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        GerudoSoldier015.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert010_090', 'getAttention': False})
    } {
        GerudoSoldier015.PlayAnimationNoWait({'name': 'ev_attack_swing', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier015"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="GerudoSoldier015"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoSoldier015.PlayAnimationNoWait({'name': 'angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoSoldier015.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert010_095', 'getAttention': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_GERUDO_001_1_004_2', 'volume': 1.0, 'pitch': 1.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_GERUDO_001_2_004_2', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 0.5})

    fork {
        GerudoSoldier015.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoSoldier016.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GerudoSoldier015.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoSoldier016.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})

    fork {
        GerudoSoldier015.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert010_100', 'getAttention': False})
    } {
        GerudoSoldier015.SetFacialExpression({'expression': 'angry'})
    } {
        GerudoSoldier015.PlayAnimationNoWait({'name': 'angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GerudoSoldier016.AimCompassPoint({'direction': 0, 'withoutTurn': False, 'duration': 0.4000000059604645, 'immediateTurn': False})
    GerudoSoldier016.SetInterestIkEnabled({'enable': False})
    GerudoSoldier015.SetComponentActive({'name': 'aimControlComp', 'active': False})
    GerudoSoldier016.SetComponentActive({'name': 'aimControlComp', 'active': False})
    GerudoSoldier016.SetComponentActive({'name': 'aimBlockerComp', 'active': True})
    QuestSystem.SetProgress({'symbol': 'Lanmola_Desert010:2015589749', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Quest_2() {

    call EvResetCommon.AllReset()

    GerudoSoldier015.SetInterestIkEnabled({'enable': False})
    GerudoSoldier015.GenericTalkSequenceWithDialog({'aimFromPlayer': True, 'playerTalkAnim': False, 'message': 'quest/QuestAreaD:Lanmola_Desert020_010', 'facial': 'angry', 'selfTalkAnimName': 'angry01,ev_attack_swing', 'aimToPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Quest_3() {
    Fade.StartPreset({'preset': 'FadeOutSlowB'})

    call EvResetCommon.AllReset()

    GerudoAide000.SetActorSwitch({'value': True, 'switchIndex': 0})
    GerudoSoldier015.SetComponentActive({'name': 'aimControlComp', 'active': True})
    Zelda.WarpToActor({'offsetX': 2.0, 'distance': 3.0, 'actor': ActorIdentifier(name="GerudoSoldier015"), 'offsetY': 0.0})
    Partner[companion].WarpToActor({'offsetY': 1.0, 'distance': 3.0, 'offsetX': 1.0, 'actor': ActorIdentifier(name="GerudoSoldier015")})
    Player.AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    Partner[companion].AimCompassPoint({'duration': 0.0, 'direction': 2, 'withoutTurn': False, 'immediateTurn': False})
    Camera.LookAt3ActorsCenterAsTalker({'duration': 0.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetY': 0.949999988079071, 'actor1': ActorIdentifier(name="GerudoSoldier016"), 'actor2': ActorIdentifier(name="Player"), 'actor3': ActorIdentifier(name="GerudoSoldier015"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'offsetX': 0.0, 'offsetZ': 0.0})
    GerudoSoldier015.PlayAnimation({'name': 'hurt02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier015.SetFacialExpression({'expression': 'sleep'})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    Timer.Wait({'time': 1.0})
    GerudoSoldier015.AimDegreeAngle({'withoutTurn': True, 'duration': 0.10000000149011612, 'angle': 15.0, 'immediateTurn': False})
    GerudoSoldier015.AimDegreeAngle({'withoutTurn': True, 'duration': 0.20000000298023224, 'angle': -15.0, 'immediateTurn': False})
    GerudoSoldier015.AimDegreeAngle({'withoutTurn': True, 'duration': 0.20000000298023224, 'angle': 15.0, 'immediateTurn': False})
    GerudoSoldier015.AimDegreeAngle({'withoutTurn': True, 'duration': 0.20000000298023224, 'angle': -15.0, 'immediateTurn': False})
    GerudoSoldier015.AimDegreeAngle({'withoutTurn': True, 'angle': 0.0, 'duration': 0.10000000149011612, 'immediateTurn': False})
    Player.SetInterestIkEnabled({'enable': True})
    Partner[companion].SetInterestIkEnabled({'enable': True})

    fork {
        GerudoSoldier015.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert030_010', 'getAttention': False})
    } {
        GerudoSoldier015.SetFacialExpression({'expression': 'sad'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier015"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier015"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoSoldier016.SetComponentActive({'name': 'aimControlComp', 'active': True})
    GerudoSoldier016.PlayAnimationNoWait({'name': 'salute', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier016.AimActor({'duration': 0.25, 'actor': ActorIdentifier(name="GerudoSoldier015"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        GerudoSoldier016.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert030_020', 'getAttention': False})
    } {
        GerudoSoldier016.SetFacialExpression({'expression': 'smile'})
    } {
        GerudoSoldier016.PlayAnimation({'name': 'laugh', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier016"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier016"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoSoldier016.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier016.SetFacialExpression({'expression': 'normal'})
    GerudoSoldier015.SetInterestIkEnabled({'enable': True})
    GerudoSoldier015.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier016"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        GerudoSoldier015.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert030_030', 'getAttention': False})
    } {
        GerudoSoldier015.SetFacialExpression({'expression': 'angry'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="GerudoSoldier015"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier015"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        GerudoSoldier016.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert030_035', 'getAttention': False})
    } {
        GerudoSoldier016.SetFacialExpression({'expression': 'sad'})
    } {
        GerudoSoldier016.PlayAnimationNoWait({'name': 'angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier016"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier016"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})
    GerudoSoldier015.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        GerudoSoldier015.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert030_040', 'getAttention': False})
    } {
        GerudoSoldier015.SetFacialExpression({'expression': 'normal'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier015"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        GerudoSoldier016.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier015"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Player.AimCompassPoint({'direction': 2, 'withoutTurn': False, 'duration': 0.4000000059604645, 'immediateTurn': False})
    Player.PlayAnimationNoWait({'name': 'talk_hand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].AimCompassPoint({'duration': 0.4000000059604645, 'withoutTurn': True, 'direction': 2, 'immediateTurn': False})
    Timer.Wait({'time': 2.0})
    Player.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoSoldier015.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier016"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier016.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier015"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 2.0})

    fork {
        GerudoSoldier015.AimActor({'withoutTurn': False, 'duration': 0.0, 'actor': ActorIdentifier(name="Player"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GerudoSoldier015.SetFacialExpression({'expression': 'surprise'})
        GerudoSoldier015.PlayAnimation({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoSoldier015.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert030_050', 'getAttention': False})
    } {
        Camera.Shake({'power': 3, 'duration': 1.0})
    } {
        GerudoSoldier016.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.0, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GerudoSoldier016.SetFacialExpression({'expression': 'surprise'})
        GerudoSoldier016.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_GERUDO_001_1_006_4', 'volume': 1.0, 'pitch': 1.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_GERUDO_001_2_006_4', 'volume': 1.0, 'pitch': 1.0})
    }


    fork {
        GerudoSoldier015.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert030_060', 'getAttention': False})
    } {
        GerudoSoldier015.PlayAnimationNoWait({'name': 'angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="GerudoSoldier015"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier015"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoSoldier016.PlayAnimationNoWait({'name': 'salute', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier016.AimActor({'duration': 0.25, 'actor': ActorIdentifier(name="GerudoSoldier015"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        GerudoSoldier016.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert030_070', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier016"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        GerudoSoldier015.SetFacialExpression({'expression': 'sad'})
        GerudoSoldier015.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier016"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier016.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoSoldier016.SetFacialExpression({'expression': 'normal'})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier016"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoSoldier016.SetFacialExpression({'expression': 'angry'})

    fork {
        Player.AimActor({'actor': ActorIdentifier(name="GerudoSoldier016"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoSoldier016"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier015.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoSoldier016.SetInterestIkEnabled({'enable': False})
    } {
        Timer.Wait({'time': 1.065000057220459})
        GerudoSoldier016.SetGravityEnable({'enable': False})
    } {
        Timer.Wait({'time': 1.065000057220459})
        GerudoSoldier016.SetCollisionEnabled({'enable': False})
    } {
        GerudoSoldier016.SetComponentActive({'name': 'pathWalkComp', 'active': True})
        GerudoSoldier016.TrailRail({'speed': 1, 'railIndex': 0, 'customSpeed': 0.0, 'reverse': False, 'timeOut': 7.0, 'withoutTurn': False})
        GerudoSoldier016.SetComponentActive({'name': 'pathWalkComp', 'active': False})
        GerudoSoldier016.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        GerudoSoldier015.SetFacialExpression({'expression': 'surprise'})
    } {
        GerudoSoldier015.PlayAnimation({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GerudoSoldier015.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert030_080', 'getAttention': False})
    GerudoSoldier015.SetFacialExpression({'expression': 'angry'})
    GerudoSoldier015.SetInterestIkEnabled({'enable': False})
    GerudoSoldier015.SetComponentActive({'name': 'pathWalkComp', 'active': True})

    fork {
        GerudoSoldier015.TrailRail({'speed': 1, 'withoutTurn': False, 'railIndex': 0, 'customSpeed': 0.0, 'reverse': False, 'timeOut': 7.0})
    } {
        Timer.Wait({'time': 0.5})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier015"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoSoldier015"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.065000057220459})

        fork {
            GerudoSoldier015.SetGravityEnable({'enable': False})
        } {
            GerudoSoldier015.SetCollisionEnabled({'enable': False})
        }

    }

    GerudoSoldier015.SetComponentActive({'name': 'pathWalkComp', 'active': False})
    GerudoSoldier015.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 2.0})
    GerudoSoldier015.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert030_090', 'getAttention': False})
    GerudoSoldier016.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert030_100', 'getAttention': False})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})

    fork {
        GerudoSoldier015.SetGravityEnable({'enable': True})
    } {
        GerudoSoldier015.SetCollisionEnabled({'enable': True})
    } {
        GerudoSoldier016.SetGravityEnable({'enable': True})
    } {
        GerudoSoldier016.SetCollisionEnabled({'enable': True})
    }

    Player.AimCompassPoint({'direction': 2, 'withoutTurn': False, 'duration': 0.0, 'immediateTurn': False})
    Partner[companion].AimCompassPoint({'direction': 2, 'withoutTurn': False, 'duration': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.10000000149011612})

    fork {
        GerudoSoldier015.SetFacialExpression({'expression': 'sleep'})
    } {
        GerudoSoldier016.SetFacialExpression({'expression': 'sleep'})
    } {
        GerudoSoldier015.PlayAnimation({'name': 'hurt02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoSoldier016.PlayAnimation({'name': 'hurt02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GerudoSoldier015.WarpToActor({'distance': 3.0, 'actor': ActorIdentifier(name="Player"), 'offsetX': 1.0, 'offsetY': 0.0})
    GerudoSoldier016.WarpToActor({'distance': 3.0, 'actor': ActorIdentifier(name="Player"), 'offsetX': -1.0, 'offsetY': 0.0})

    fork {
        GerudoSoldier015.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier016.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 1.5})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    GerudoSoldier015.SetFacialExpression({'expression': 'sad'})

    fork {
        GerudoSoldier015.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert030_110', 'getAttention': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_GERUDO_001_1_005_1', 'volume': 1.0, 'pitch': 1.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_GERUDO_001_2_005_1', 'volume': 1.0, 'pitch': 1.0})
    }

    GerudoSoldier016.SetFacialExpression({'expression': 'sad'})
    GerudoSoldier016.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert030_120', 'getAttention': False})
    Timer.Wait({'time': 2.0})
    Dialog.Show({'message': 'quest/QuestAreaD:Lanmola_Desert030_130'})

    fork {
        GerudoSoldier015.SetInterestIkEnabled({'enable': True})
    } {
        GerudoSoldier016.SetInterestIkEnabled({'enable': True})
    }


    fork {
        GerudoAide000.Activate()
        GerudoAide000.MoveToTargetLinkedPoint({'speed': 0, 'index': 0, 'actor': ActorIdentifier(name="GerudoSoldier015"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        GerudoAide000.AimDegreeAngle({'angle': -124.7770004272461, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'weight2': 3.0, 'distanceOffset': 0.0, 'offsetY': 0.949999988079071, 'actor1': ActorIdentifier(name="GerudoSoldier016"), 'actor2': ActorIdentifier(name="Player"), 'duration': 1.0, 'weight1': 1.0, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetZ': 0.0})
    } {
        GerudoSoldier016.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier015.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        GerudoSoldier015.SetFacialExpression({'expression': 'surprise'})
        GerudoSoldier015.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="GerudoAide000"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GerudoSoldier015.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoSoldier015.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert030_140', 'getAttention': False})
    } {
        GerudoSoldier016.SetFacialExpression({'expression': 'surprise'})
        GerudoSoldier016.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="GerudoAide000"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GerudoSoldier016.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_GERUDO_001_1_006_2', 'volume': 1.0, 'pitch': 1.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_GERUDO_001_2_006_2', 'volume': 1.0, 'pitch': 1.0})
    }


    fork {
        GerudoSoldier015.SetFacialExpression({'expression': 'angry'})
    } {
        GerudoSoldier015.PlayAnimationNoWait({'name': 'salute,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoSoldier016.PlayAnimationNoWait({'name': 'salute,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoSoldier016.SetFacialExpression({'expression': 'angry'})
    }

    Timer.Wait({'time': 2.0})
    GerudoAide000.PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoAide000.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert030_150', 'getAttention': False})
    } {
        GerudoAide000.SetFacialExpression({'expression': 'angry'})
    }

    GerudoAide000.SetComponentActive({'active': False, 'name': 'aimBlockerComp'})
    GerudoAide000.SetInterestIkEnabled({'enable': True})

    fork {
        GerudoSoldier015.SetFacialExpression({'expression': 'sad'})
    } {
        GerudoSoldier016.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        GerudoSoldier016.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert030_160', 'getAttention': False})
    } {
        GerudoSoldier016.SetFacialExpression({'expression': 'surprise'})
    } {
        GerudoSoldier016.PlayAnimation({'name': 'salute,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoAide000.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier016"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier016"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier016"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoSoldier016.SetFacialExpression({'expression': 'sad'})
    GerudoSoldier016.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Event153:
        GerudoAide000.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier015"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {

        fork {
            GerudoSoldier015.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert030_170', 'getAttention': False})
        } {
            GerudoSoldier015.SetFacialExpression({'expression': 'surprise'})
        } {
            GerudoSoldier015.PlayAnimation({'name': 'salute,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            goto Event153
        }

        GerudoSoldier015.SetFacialExpression({'expression': 'sad'})
        GerudoAide000.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.5})

        fork {
            GerudoAide000.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert030_180', 'getAttention': False})
        } {
            GerudoAide000.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.30000001192092896})
            Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        GerudoAide000.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            GerudoSoldier015.SetFacialExpression({'expression': 'sad'})
        } {
            GerudoSoldier016.SetFacialExpression({'expression': 'sad'})
        }

        Timer.Wait({'time': 0.5})

        fork {
            GerudoSoldier015.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier016"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            GerudoSoldier016.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Timer.Wait({'time': 1.0})

        fork {
            GerudoSoldier015.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert030_190', 'getAttention': False})
        } {
            GerudoSoldier015.SetFacialExpression({'expression': 'surprise'})
        } {
            GerudoSoldier015.PlayAnimation({'name': 'ev_attack_swing', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GerudoSoldier016.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier016"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.30000001192092896})
            Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier016"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        fork {
            GerudoSoldier015.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GerudoSoldier015.SetFacialExpression({'expression': 'sad'})
        }

        GerudoSoldier015.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GerudoSoldier016.SetInterestIkEnabled({'enable': True})

        fork {
            GerudoAide000.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert030_200', 'getAttention': False})
        } {
            GerudoAide000.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier015"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            GerudoAide000.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GerudoAide000.SetFacialExpression({'expression': 'sleep'})
        }

        Timer.Wait({'time': 1.0})

        fork {
            GerudoAide000.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert030_210', 'getAttention': False})
        } {
            GerudoAide000.PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GerudoSoldier016.AimActor({'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            GerudoAide000.SetFacialExpression({'expression': 'normal'})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.30000001192092896})
            Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        fork {
            GerudoAide000.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert030_220', 'getAttention': False})
        } {
            GerudoAide000.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GerudoAide000.SetFacialExpression({'expression': 'angry'})
        }

        GerudoAide000.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            GerudoSoldier015.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert030_230', 'getAttention': False})
        } {
            GerudoSoldier015.PlayAnimation({'name': 'salute,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GerudoSoldier016.PlayAnimation({'name': 'salute,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_GERUDO_001_1_007_8', 'volume': 1.0, 'pitch': 1.0})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_GERUDO_001_2_007_6', 'volume': 1.0, 'pitch': 1.0})
        }

        Timer.Wait({'time': 0.5})
        GerudoAide000.SetFacialExpression({'expression': 'smile'})
        Timer.Wait({'time': 1.0})

        fork {
            GerudoAide000.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert030_240', 'getAttention': False})
        } {
            GerudoAide000.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        GerudoAide000.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            GerudoSoldier015.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert030_245', 'getAttention': False})
        } {
            GerudoSoldier015.SetFacialExpression({'expression': 'angry'})
        } {
            GerudoSoldier015.PlayAnimation({'name': 'salute,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GerudoSoldier016.SetFacialExpression({'expression': 'angry'})
        } {
            GerudoSoldier016.PlayAnimation({'name': 'salute,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_GERUDO_001_1_008_9', 'volume': 1.0, 'pitch': 1.0})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_GERUDO_001_2_006_3', 'volume': 1.0, 'pitch': 1.0})
        }

        Timer.Wait({'time': 1.5})
        GerudoAide000.SetFacialExpression({'expression': 'normal'})
        GerudoAide000.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.5})
        GerudoSoldier015.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GerudoAide000.SetComponentActive({'name': 'aimBlockerComp', 'active': True})

        fork {
            GerudoAide000.MoveToTargetLinkedPoint({'speed': 0, 'index': 1, 'actor': ActorIdentifier(name="GerudoSoldier015"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        } {
            Camera.LookAt2ActorsCenterAsTalker({'weight2': 3.0, 'duration': 0.800000011920929, 'distanceOffset': 0.0, 'offsetY': 0.949999988079071, 'actor1': ActorIdentifier(name="GerudoSoldier016"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetZ': 0.0})
        } {
            GerudoSoldier015.SetFacialExpression({'expression': 'normal'})
        } {
            GerudoSoldier016.SetFacialExpression({'expression': 'normal'})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Player.AimActor({'actor': ActorIdentifier(name="GerudoAide000"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.30000001192092896})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoAide000"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        GerudoAide000.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            GerudoAide000.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert030_250', 'getAttention': False})
        } {
            GerudoAide000.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        GerudoAide000.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Player.GenericItemGetSequence({'itemKey': 'Ornament25', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
        Player.AddItem({'index': -1, 'itemKey': 'Ornament25', 'count': 1, 'autoEquip': False})

        fork {
            Camera.LookAt2ActorsCenterAsTalker({'weight2': 3.0, 'distanceOffset': 0.0, 'offsetY': 0.949999988079071, 'actor1': ActorIdentifier(name="GerudoSoldier016"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetZ': 0.0})
        } {
            Player.AimActor({'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        fork {
            GerudoAide000.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert030_260', 'getAttention': False})
        } {
            GerudoAide000.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        GerudoAide000.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            GerudoAide000.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert030_270', 'getAttention': False})
        } {
            GerudoAide000.SetFacialExpression({'expression': 'smile'})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            GerudoSoldier015.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            GerudoSoldier015.SetFacialExpression({'expression': 'angry'})
            GerudoSoldier015.PlayAnimationNoWait({'name': 'salute,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            GerudoSoldier016.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            GerudoSoldier016.SetFacialExpression({'expression': 'angry'})
            GerudoSoldier016.PlayAnimationNoWait({'name': 'salute,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        GerudoAide000.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
        GerudoSoldier015.Destroy()
        GerudoAide000.ActiveteLinkedActor({'index': 0})
        GerudoAide000.SetActorSwitch({'switchIndex': 0, 'value': False})
        GerudoAide000.Destroy()
        GerudoSoldier016.WarpToActor({'actor': ActorIdentifier(name="Player"), 'offsetX': 2.799999952316284, 'distance': 2.299999952316284, 'offsetY': 0.0})
        GerudoSoldier016.AimCompassPoint({'direction': 0, 'withoutTurn': False, 'duration': 0.0, 'immediateTurn': False})
        GerudoSoldier015.PlayAnimationNoWait({'name': 'training', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoSoldier016.PlayAnimationNoWait({'name': 'training', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.0})
        GerudoSoldier016.KeepAnimationAfterEvent()
        Fade.StartPreset({'preset': 'FadeInNormal'})
        QuestSystem.SetProgress({'symbol': 'Lanmola_Desert010:1131498840', 'isShowTelopInEvent': False, 'isFrontFade': False})
    }

}

void talk40() {

    call EvResetCommon.AllReset()

    GerudoSoldier015.GenericTalkSequenceWithDialog({'selfTalkAnimName': 'talk', 'aimFromPlayer': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier015Talk040_010', 'aimToPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GerudoSoldier015.SetInterestIkEnabled({'enable': True})
    GerudoSoldier015.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'laugh', 'cameraLookAt': False, 'keepPersonalSpace': False, 'aimFromPlayer': False, 'aimToPlayer': False, 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier015Talk040_020', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}
