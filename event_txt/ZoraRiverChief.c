-------- EventFlow: ZoraRiverChief --------

Actor: ZoraRiverChief
entrypoint: None()
actions: ['Talk', 'GenericTalkSequenceWithDialog', 'SetFacialExpression', 'AimActor', 'PlayAnimation', 'Destroy', 'SetInterestIkEnabled', 'WarpToActorLinkedPoint', 'PlayAnimationNoWait', 'AimCompassPoint', 'AimPlayer', 'ResetFacialExpression', 'PlayOneshotSE', 'MoveToBesideTargetActor', 'SetComponentActive']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: ZoraRiver002
entrypoint: None()
actions: ['Talk', 'AimActor', 'PlayAnimation', 'SetFacialExpression', 'SetTalkerName', 'WarpToActorLinkedPoint', 'Destroy', 'SetInterestIkEnabled', 'AimCompassPoint', 'MoveToTargetLinkedPoint', 'PlayAnimationNoWait']
queries: []
params: None

Actor: ZoraSea002
entrypoint: None()
actions: ['Talk', 'SetFacialExpression', 'SetTalkerName', 'PlayAnimation', 'WarpToActorLinkedPoint', 'PlayAnimationNoWait', 'Destroy', 'SetInterestIkEnabled', 'AimCompassPoint', 'MoveToTargetLinkedPoint', 'AimActor', 'GenericTalkSequenceWithDialog', 'AimDegreeAngle', 'SetComponentActive']
queries: []
params: None

Actor: ZoraSeaChief
entrypoint: None()
actions: ['Talk', 'PlayAnimation', 'AimPlayer', 'SetFacialExpression', 'AimActor', 'Destroy', 'SetInterestIkEnabled', 'SetTalkerName', 'WarpToActorLinkedPoint', 'PlayAnimationNoWait', 'AimCompassPoint']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['Talk', 'AimActor', 'PlayAnimation', 'SetInterestIkEnabled', 'MoveToDefaultPosition', 'EnableAutoMovement', 'WarpToDefaultPosition']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt3ActorsCenterAsTalker', 'LookAt2ActorsCenterAsTalker', 'Reset']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['MoveToBesideTargetActor', 'AimActor']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimCompassPoint', 'AimActor', 'AddItem', 'GenericItemGetSequence', 'SetInterestIkEnabled', 'WarpToActorLinkedPoint', 'MoveToTargetLinkedPoint']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'AimPlayer', 'AimActor', 'MoveToTargetLinkedPoint', 'WarpToActorLinkedPoint', 'SetInterestIkEnabled', 'WarpToDefaultPosition', 'MoveToTargetActor', 'AimCompassPoint', 'WaitMoveDone', 'MoveToBesideTargetActor', 'MoveToDefaultPosition']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE', 'PlayBGM', 'Prepare', 'StopAllBGM', 'PlayZoneBGM']
queries: []
params: None

void talk() {
    ZoraRiverChief.SetFacialExpression({'expression': 'sleep'})
    ZoraRiverChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverChiefTalk010_010', 'aimFromPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'selfTalkAnimName': 'think', 'aimToPlayer': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraRiverChief.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverChiefTalk010_020', 'getAttention': False})
    ZoraRiver002.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        ZoraRiver002.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverChiefTalk010_030', 'getAttention': False})
    } {
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    ZoraRiverChief.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverChiefTalk010_040', 'getAttention': False})
}

void talk020() {
    ZoraRiverChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverChiefTalk020_010', 'aimToPlayer': False, 'selfTalkAnimName': '', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk030() {
    ZoraRiverChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverChiefTalk030_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk040() {
    ZoraRiverChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverChiefTalk040_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraRiverChief.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverChiefTalk040_020', 'getAttention': False})
}

void ZoraRiverChiefTalk015() {

    call EvResetCommon.AllReset()

    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="ZoraRiverChief"), 'actor2': ActorIdentifier(name="ZoraRiver002"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiver002.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver002.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverChiefTalk015_010', 'getAttention': False})
        ZoraRiver002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.SetInterestIkEnabled({'enable': True})
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraRiverChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverChiefTalk015_020', 'getAttention': False})
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiver002.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver002.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverChiefTalk015_030', 'getAttention': False})
        ZoraRiver002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverChiefTalk015_040', 'getAttention': False})
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Partner[companion].Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverChiefTalk015_050', 'getAttention': False})
    } {

        call GeneralSequence.Look_at_Partner()

    }

}

void talk025() {
    ZoraRiverChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'aimToPlayer': False, 'selfTalkAnimName': 'think', 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverChiefTalk025_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Special_Coast010_end() {
    Audio.StopAllBGM({'duration': 2.0})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    ZoraSea002.SetTalkerName({'message': 'glossary/Character:ZoraSea002', 'keep': False})
    ZoraRiver002.SetTalkerName({'message': 'glossary/Character:ZoraRiver002', 'keep': False})

    fork {
        ZoraSea002.SetComponentActive({'active': True, 'name': 'aimControlComp'})
    } {
        ZoraRiverChief.SetComponentActive({'active': True, 'name': 'aimControlComp'})
    }


    fork {
        ZoraRiverChief.SetInterestIkEnabled({'enable': False})
    } {
        ZoraSeaChief.SetInterestIkEnabled({'enable': False})
    } {
        Player.SetInterestIkEnabled({'enable': False})
    } {
        ZoraSea002.SetInterestIkEnabled({'enable': False})
    } {
        ZoraRiver002.SetInterestIkEnabled({'enable': False})
    }

    Player.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'offsetY': 0.0})
    Player.AimCompassPoint({'direction': 1, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})

    call EvResetCommon.AllReset()

    Timer.Wait({'time': 1.0})
    Camera.LookAt3ActorsCenterAsTalker({'offsetZ': 0.0, 'actor1': ActorIdentifier(name="ZoraRiverChief"), 'actor2': ActorIdentifier(name="ZoraSeaChief"), 'actor3': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    Player.MoveToTargetLinkedPoint({'index': 1, 'speed': 0, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Camera.LookAt3ActorsCenterAsTalker({'offsetZ': 0.0, 'actor1': ActorIdentifier(name="ZoraRiverChief"), 'actor2': ActorIdentifier(name="ZoraSeaChief"), 'actor3': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0})

    fork {
        ZoraRiverChief.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.SetFacialExpression({'expression': 'surprise'})
    } {
        ZoraRiverChief.Talk({'message': 'quest/QuestAreaB:Special_Coast070_010', 'getAttention': False})
    }

    ZoraSeaChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        ZoraSeaChief.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_ZORA_SEA_CHIEF_008_1', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 0.5})

    fork {
        ZoraSeaChief.Talk({'message': 'quest/QuestAreaB:Special_Coast070_020', 'getAttention': False})
    } {
        ZoraSeaChief.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        ZoraSeaChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    call GeneralSequence.ZeldaTalkMotion()

    Timer.Wait({'time': 0.5})
    ZoraRiverChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiverChief.Talk({'message': 'quest/QuestAreaB:Special_Coast070_030', 'getAttention': False})
    } {
        ZoraRiverChief.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        ZoraRiverChief.Talk({'message': 'quest/QuestAreaB:Special_Coast070_040', 'getAttention': False})
    } {
        ZoraRiverChief.SetFacialExpression({'expression': 'smile'})
    } {
        ZoraRiverChief.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        ZoraRiver002.WarpToActorLinkedPoint({'index': 2, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'offsetY': 0.0})
        ZoraRiver002.AimCompassPoint({'direction': 1, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    } {
        ZoraSea002.WarpToActorLinkedPoint({'index': 3, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'offsetY': 0.0})
        ZoraSea002.AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    }


    fork {
        ZoraRiver002.Talk({'message': 'quest/QuestAreaB:Special_Coast070_050', 'getAttention': False})
    } {
        ZoraRiver002.SetFacialExpression({'expression': 'angry'})
    } {
        ZoraRiverChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.5})
        Player.AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.5})
        Partner[companion].MoveToTargetLinkedPoint({'index': 22, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiverChief.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        ZoraRiver002.MoveToTargetLinkedPoint({'speed': 0, 'index': 9, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 0.5})
        ZoraSea002.MoveToTargetLinkedPoint({'index': 10, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        ZoraRiverChief.MoveToBesideTargetActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'speed': 0, 'offsetX': 2.0, 'offsetZ': 2.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        ZoraRiverChief.AimActor({'offsetX': 2.0, 'offsetZ': 2.0, 'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetY': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="ZoraSeaChief"), 'actor2': ActorIdentifier(name="Player"), 'offsetX': -0.15000000596046448, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }


    fork {
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        ZoraSea002.Talk({'message': 'quest/QuestAreaB:Special_Coast070_060', 'getAttention': False})
    } {
        ZoraSea002.SetFacialExpression({'expression': 'sad'})
    } {
        ZoraSea002.AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSea002.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    ZoraRiver002.AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraSea002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiver002.Talk({'message': 'quest/QuestAreaB:Special_Coast070_070', 'getAttention': False})
    } {
        ZoraRiver002.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver002.SetFacialExpression({'expression': 'angry'})
    }

    ZoraRiver002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver002.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        ZoraRiver002.Talk({'message': 'quest/QuestAreaB:Special_Coast070_080', 'getAttention': True})
    } {
        ZoraRiver002.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        ZoraSea002.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiver002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        ZoraRiverChief.SetInterestIkEnabled({'enable': True})
    } {
        ZoraSeaChief.SetInterestIkEnabled({'enable': True})
    } {
        Player.SetInterestIkEnabled({'enable': True})
    } {
        Partner.SetInterestIkEnabled({'enable': True})
    }


    fork {
        ZoraSea002.Talk({'message': 'quest/QuestAreaB:Special_Coast070_090', 'getAttention': True})
    } {
        ZoraSea002.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea002.SetFacialExpression({'expression': 'angry'})
    }

    Event641:
    ZoraSea002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSeaChief.SetFacialExpression({'expression': 'sad'})
    ZoraRiverChief.SetFacialExpression({'expression': 'sad'})
    ZoraSeaChief.SetTalkerName({'message': 'glossary/Character:ZoraSeaChiefZoraRiverChief', 'keep': False})

    fork {
        ZoraSeaChief.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        ZoraSeaChief.Talk({'message': 'quest/QuestAreaB:Special_Coast070_100', 'getAttention': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_ZORA_RIVER_CHIEF_005_1', 'volume': 1.0, 'pitch': 1.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_ZORA_SEA_CHIEF_005_1', 'volume': 1.0, 'pitch': 1.0})
    } {
        Timer.Wait({'time': 0.5})
        Player.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    ZoraSeaChief.SetTalkerName({'message': 'glossary/Character:ZoraSeaChief', 'keep': False})

    call Special_Coast010_end0()

}

void Special_Coast010_end0() {
    Audio.StopAllBGM({'duration': 2.0})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    ZoraSea002.SetTalkerName({'message': 'glossary/Character:ZoraSea002', 'keep': False})
    ZoraRiver002.SetTalkerName({'message': 'glossary/Character:ZoraRiver002', 'keep': False})

    fork {
        ZoraSea002.SetComponentActive({'active': True, 'name': 'aimControlComp'})
    } {
        ZoraRiverChief.SetComponentActive({'active': True, 'name': 'aimControlComp'})
    }


    fork {
        ZoraRiverChief.SetInterestIkEnabled({'enable': True})
    } {
        ZoraSeaChief.SetInterestIkEnabled({'enable': True})
    } {
        Player.SetInterestIkEnabled({'enable': True})
    } {
        ZoraSea002.SetInterestIkEnabled({'enable': True})
    } {
        ZoraRiver002.SetInterestIkEnabled({'enable': True})
    }


    fork {
        Player.WarpToActorLinkedPoint({'index': 11, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'offsetY': 0.0})
    } {
        ZoraSeaChief.WarpToActorLinkedPoint({'index': 12, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'offsetY': 0.0})
    } {
        ZoraRiverChief.WarpToActorLinkedPoint({'index': 13, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'offsetY': 0.0})
    } {
        ZoraSea002.WarpToActorLinkedPoint({'index': 14, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'offsetY': 0.0})
    } {
        ZoraRiver002.WarpToActorLinkedPoint({'index': 15, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'offsetY': 0.0})
    } {
        Partner[companion].WarpToActorLinkedPoint({'index': 23, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'offsetY': 0.0})
    }


    fork {
        Player.AimCompassPoint({'duration': 0.0, 'withoutTurn': False, 'direction': 2, 'immediateTurn': False})
    } {
        ZoraSeaChief.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="ZoraRiver002"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiverChief.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="ZoraRiver002"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSea002.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiver002.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiver002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraRiverChief.ResetFacialExpression()
    }

    Partner[companion].WaitMoveDone({'timeout': 3.0})
    Partner[companion].WarpToDefaultPosition({'position': 2, 'avoidWall': False, 'avoidPlayer': False})
    Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Camera.LookAt3ActorsCenterAsTalker({'duration': 0.0, 'actor1': ActorIdentifier(name="ZoraRiver002"), 'actor2': ActorIdentifier(name="ZoraSeaChief"), 'actor3': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Audio.Prepare({'label': 'BGM_EV_COMMON5', 'kind': 0, 'volume': 1.0})
    Timer.Wait({'time': 2.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})

    fork {
        ZoraRiverChief.Talk({'message': 'quest/QuestAreaB:Special_Coast070_110', 'getAttention': False})
    } {
        ZoraRiverChief.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})

        fork {
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    } {
        Audio.PlayBGM({'label': 'BGM_EV_COMMON5', 'ignoreSkip': False, 'volume': 1.0})
    }

    ZoraRiverChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSeaChief.Talk({'message': 'quest/QuestAreaB:Special_Coast070_120', 'getAttention': False})
    } {
        ZoraSeaChief.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea002.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiver002.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})

        fork {
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    ZoraSeaChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiverChief.SetInterestIkEnabled({'enable': False})

    fork {
        ZoraRiverChief.Talk({'message': 'quest/QuestAreaB:Special_Coast070_130', 'getAttention': False})
    } {
        ZoraRiverChief.PlayAnimation({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.SetFacialExpression({'expression': 'sad'})
    } {
        ZoraSea002.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiver002.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})

        fork {
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    ZoraRiverChief.SetInterestIkEnabled({'enable': True})

    fork {
        ZoraSeaChief.Talk({'message': 'quest/QuestAreaB:Special_Coast070_140', 'getAttention': False})
    } {
        ZoraSeaChief.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'sad'})
    } {
        ZoraSea002.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiver002.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})

        fork {
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    ZoraSeaChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiverChief.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiverChief.ResetFacialExpression()
    }


    fork {
        ZoraSeaChief.Talk({'message': 'quest/QuestAreaB:Special_Coast070_150', 'getAttention': False})
    } {
        ZoraSeaChief.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraSea002.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    ZoraSeaChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSea002.Talk({'message': 'quest/QuestAreaB:Special_Coast070_160', 'getAttention': False})
    } {
        ZoraSea002.PlayAnimation({'name': 'wait14', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiver002.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})

        fork {
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }


    fork {
        ZoraSeaChief.Talk({'message': 'quest/QuestAreaB:Special_Coast070_170', 'getAttention': False})
    } {
        ZoraSeaChief.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'smile'})
    } {
        Timer.Wait({'time': 0.5})

        fork {
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    ZoraSeaChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSea002.Talk({'message': 'quest/QuestAreaB:Special_Coast070_180', 'getAttention': False})
    } {
        ZoraSea002.PlayAnimationNoWait({'name': 'happy01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea002.SetFacialExpression({'expression': 'smile'})
    } {
        ZoraRiverChief.SetFacialExpression({'expression': 'smile'})
    } {
        Timer.Wait({'time': 0.5})

        fork {
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }


    fork {
        ZoraSea002.Talk({'message': 'quest/QuestAreaB:Special_Coast070_180_02', 'getAttention': False})
    } {
        ZoraSea002.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea002.SetFacialExpression({'expression': 'smile'})
    }

    ZoraSea002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiverChief.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraRiverChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        ZoraRiverChief.Talk({'message': 'quest/QuestAreaB:Special_Coast070_190', 'getAttention': False})
    } {
        ZoraRiverChief.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver002.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraRiver002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver002.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})

        fork {
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    ZoraRiverChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiverChief.Talk({'message': 'quest/QuestAreaB:Special_Coast070_190_02', 'getAttention': False})
    } {
        ZoraRiverChief.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraSeaChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSea002.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraSea002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea002.AimDegreeAngle({'angle': 45.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        ZoraSea002.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        ZoraRiver002.Talk({'message': 'quest/QuestAreaB:Special_Coast070_200', 'getAttention': False})
    } {
        ZoraRiver002.SetFacialExpression({'expression': 'smile'})
    } {
        ZoraSea002.SetFacialExpression({'expression': 'smile'})
    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'smile'})
    } {
        ZoraRiver002.PlayAnimation({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})

        fork {
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    } {
        ZoraRiverChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        ZoraRiver002.Talk({'message': 'quest/QuestAreaB:Special_Coast070_210', 'getAttention': False})
    } {
        ZoraRiver002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver002.SetFacialExpression({'expression': 'normal'})
    } {
        Timer.Wait({'time': 1.0})
        ZoraRiverChief.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.0})
        ZoraRiverChief.SetFacialExpression({'expression': 'surprise'})
    } {
        Timer.Wait({'time': 1.5})
        ZoraSeaChief.AimCompassPoint({'withoutTurn': True, 'direction': 0, 'duration': 0.4000000059604645, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.5})
        ZoraSea002.AimDegreeAngle({'angle': 45.0, 'withoutTurn': True, 'duration': 0.4000000059604645, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.7000000476837158})

        fork {
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    } {
        Timer.Wait({'time': 1.0})
        ZoraRiverChief.PlayOneshotSE({'label': 'VO_ZORA_RIVER_CHIEF_006_1', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 1.5})

    fork {
        ZoraRiver002.Talk({'message': 'quest/QuestAreaB:Special_Coast070_220', 'getAttention': False})
    } {
        ZoraRiver002.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver002.SetFacialExpression({'expression': 'smile'})
    } {
        ZoraRiverChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSea002.AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiverChief.ResetFacialExpression()
    } {
        Timer.Wait({'time': 0.5})

        fork {
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    ZoraRiver002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetX': -1.0, 'offsetY': 0.800000011920929, 'actor': ActorIdentifier(name="Player"), 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].AimPlayer({'offsetY': -2.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Partner[companion].Talk({'message': 'quest/QuestAreaB:Special_Coast070_230', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.5})
        Player.SetInterestIkEnabled({'enable': False})
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.0})

        fork {
            ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            ZoraRiver002.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            ZoraRiver002.SetFacialExpression({'expression': 'normal'})
        } {
            ZoraRiverChief.SetFacialExpression({'expression': 'normal'})
        } {
            ZoraSea002.SetFacialExpression({'expression': 'normal'})
        } {
            ZoraSeaChief.SetFacialExpression({'expression': 'normal'})
        } {
            Timer.Wait({'time': 1.0})
            ZoraSea002.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 1.0})
            ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    Timer.Wait({'time': 0.5})

    fork {
        ZoraRiverChief.Talk({'message': 'quest/QuestAreaB:Special_Coast070_240', 'getAttention': False})
    } {
        ZoraRiverChief.SetFacialExpression({'expression': 'smile'})
    } {
        ZoraRiverChief.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].WaitMoveDone({'timeout': 3.0})
        Partner[companion].MoveToDefaultPosition({'speed': 0, 'avoidPlayer': True, 'position': 2, 'tolerance': 0.0, 'avoidWall': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    ZoraRiverChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Partner.Talk({'message': 'quest/QuestAreaB:Special_Coast070_250', 'getAttention': False})
    } {
        Partner.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner.PlayAnimation({'name': 'angry02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiver002.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        ZoraRiverChief.Talk({'message': 'quest/QuestAreaB:Special_Coast070_260', 'getAttention': False})
    } {
        ZoraRiverChief.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea002.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        ZoraSeaChief.Talk({'message': 'quest/QuestAreaB:Special_Coast070_270', 'getAttention': False})
    } {
        ZoraRiverChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSea002.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'sleep'})
    } {
        ZoraSeaChief.PlayAnimation({'name': 'fun', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        ZoraSeaChief.SetFacialExpression({'expression': 'smile'})
    } {
        ZoraSea002.SetFacialExpression({'expression': 'smile'})
    } {
        ZoraRiver002.SetFacialExpression({'expression': 'smile'})
    } {
        ZoraSeaChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 1.5})
    Audio.StopAllBGM({'duration': 3.0})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    ZoraRiverChief.Destroy()
    ZoraSeaChief.Destroy()
    ZoraRiver002.Destroy()

    fork {
        Player.WarpToActorLinkedPoint({'index': 16, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'offsetY': 0.0})
    } {
        ZoraSea002.WarpToActorLinkedPoint({'index': 17, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'offsetY': 0.0})
    }

    Partner[companion].WaitMoveDone({'timeout': 3.0})
    Partner.WarpToDefaultPosition({'position': 3, 'avoidWall': False, 'avoidPlayer': False})
    Partner.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="ZoraSea002"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Player.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="ZoraSea002"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSea002.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Camera.LookAt2ActorsCenterAsTalker({'duration': 0.0, 'actor1': ActorIdentifier(name="ZoraSea002"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 2.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    ZoraSea002.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaB:Special_Coast070_280', 'cameraLookAt': False, 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSea002.Talk({'message': 'quest/QuestAreaB:Special_Coast070_290', 'getAttention': False})
    ZoraSea002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.AddItem({'autoEquip': False, 'itemKey': 'Ornament06', 'count': 1, 'index': -1})
    Player.GenericItemGetSequence({'itemKey': 'Ornament06', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Camera.LookAt2ActorsCenterAsTalker({'duration': 0.0, 'actor1': ActorIdentifier(name="ZoraSea002"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Partner[companion].WaitMoveDone({'timeout': 3.0})
    Partner.MoveToDefaultPosition({'speed': 1, 'position': 1, 'tolerance': 0.0, 'avoidWall': False, 'avoidPlayer': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
    Partner.EnableAutoMovement()
    ZoraSea002.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaB:Special_Coast070_300', 'playerTalkAnim': False, 'lookAtOffsetX': -1.0, 'cameraLookAt': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Timer.Wait({'time': 0.5})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    ZoraSea002.Destroy()
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'S_Dungeon009_ZoraSea002_Talk'})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    QuestSystem.SetProgress({'symbol': 'Special_Coast010:1217924140', 'isShowTelopInEvent': False, 'isFrontFade': False})
    Audio.PlayZoneBGM({'stopbgm': False})
}

void Special_Coast010_end2() {
    Audio.StopAllBGM({'duration': 2.0})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    ZoraSea002.SetTalkerName({'message': 'glossary/Character:ZoraSea002', 'keep': False})
    ZoraRiver002.SetTalkerName({'message': 'glossary/Character:ZoraRiver002', 'keep': False})

    fork {
        ZoraSea002.SetComponentActive({'active': True, 'name': 'aimControlComp'})
    } {
        ZoraRiverChief.SetComponentActive({'active': True, 'name': 'aimControlComp'})
    }


    fork {
        ZoraRiverChief.SetInterestIkEnabled({'enable': False})
    } {
        ZoraSeaChief.SetInterestIkEnabled({'enable': False})
    } {
        Player.SetInterestIkEnabled({'enable': False})
    } {
        ZoraSea002.SetInterestIkEnabled({'enable': False})
    } {
        ZoraRiver002.SetInterestIkEnabled({'enable': False})
    }

    Player.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="ZoraRiverChief"), 'index': 18, 'offsetY': 0.0})
    Player.AimCompassPoint({'direction': 3, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})

    call EvResetCommon.AllReset()

    Camera.LookAt3ActorsCenterAsTalker({'offsetZ': 0.0, 'actor1': ActorIdentifier(name="ZoraRiverChief"), 'actor2': ActorIdentifier(name="ZoraSeaChief"), 'actor3': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    Player.MoveToTargetLinkedPoint({'speed': 0, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'index': 5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="ZoraRiverChief"), 'actor2': ActorIdentifier(name="ZoraSeaChief"), 'actor3': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        ZoraSeaChief.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'surprise'})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_ZORA_SEA_CHIEF_008_1', 'volume': 1.0, 'pitch': 1.0})
    }

    ZoraRiverChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        ZoraRiverChief.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.SetFacialExpression({'expression': 'surprise'})
    } {
        ZoraRiverChief.Talk({'message': 'quest/QuestAreaB:Special_Coast070_010', 'getAttention': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        ZoraSeaChief.Talk({'message': 'quest/QuestAreaB:Special_Coast070_020', 'getAttention': False})
    } {
        ZoraSeaChief.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.ResetFacialExpression()
    }


    call GeneralSequence.ZeldaTalkMotion()

    Timer.Wait({'time': 0.5})

    fork {
        ZoraRiverChief.Talk({'message': 'quest/QuestAreaB:Special_Coast070_030', 'getAttention': False})
    } {
        ZoraRiverChief.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        ZoraRiverChief.Talk({'message': 'quest/QuestAreaB:Special_Coast070_040', 'getAttention': False})
    } {
        ZoraRiverChief.SetFacialExpression({'expression': 'smile'})
    } {
        ZoraRiverChief.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        ZoraRiver002.WarpToActorLinkedPoint({'index': 2, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'offsetY': 0.0})
        ZoraRiver002.AimCompassPoint({'direction': 1, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    } {
        ZoraSea002.WarpToActorLinkedPoint({'index': 3, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'offsetY': 0.0})
        ZoraSea002.AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    }


    fork {
        ZoraRiver002.Talk({'message': 'quest/QuestAreaB:Special_Coast070_050', 'getAttention': False})
    } {
        ZoraRiver002.SetFacialExpression({'expression': 'angry'})
    } {
        ZoraRiverChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.SetFacialExpression({'expression': 'normal'})
    } {
        Timer.Wait({'time': 0.6000000238418579})

        fork {
            Timer.Wait({'time': 0.20000000298023224})
            ZoraRiverChief.AimCompassPoint({'direction': 3, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        } {
            ZoraSeaChief.AimCompassPoint({'direction': 3, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        } {
            Player.AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }


    fork {
        ZoraRiver002.MoveToTargetLinkedPoint({'speed': 0, 'index': 20, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 1.0})
        ZoraSea002.MoveToTargetLinkedPoint({'speed': 0, 'index': 21, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Zelda.MoveToBesideTargetActor({'speed': 0, 'offsetX': 1.5, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'offsetZ': 2.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Zelda.AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].MoveToTargetActor({'speed': 0, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'distance': 0.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'weight2': 10.0, 'offsetZ': 0.5, 'offsetX': 0.0, 'actor1': ActorIdentifier(name="ZoraRiverChief"), 'actor2': ActorIdentifier(name="ZoraSeaChief"), 'weight1': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetY': 0.0})
    }


    fork {
        ZoraSea002.Talk({'message': 'quest/QuestAreaB:Special_Coast070_060', 'getAttention': False})
    } {
        ZoraSea002.SetFacialExpression({'expression': 'sad'})
    } {
        ZoraSea002.AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSea002.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    ZoraRiver002.AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraSea002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiver002.Talk({'message': 'quest/QuestAreaB:Special_Coast070_070', 'getAttention': False})
    } {
        ZoraRiver002.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver002.SetFacialExpression({'expression': 'angry'})
    }

    ZoraRiver002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver002.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        ZoraRiver002.Talk({'message': 'quest/QuestAreaB:Special_Coast070_080', 'getAttention': True})
    } {
        ZoraRiver002.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        ZoraSea002.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiver002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        ZoraRiverChief.SetInterestIkEnabled({'enable': True})
    } {
        ZoraSeaChief.SetInterestIkEnabled({'enable': True})
    } {
        Player.SetInterestIkEnabled({'enable': True})
    } {
        Partner[companion].SetInterestIkEnabled({'enable': True})
    }


    fork {
        ZoraSea002.Talk({'message': 'quest/QuestAreaB:Special_Coast070_090', 'getAttention': True})
    } {
        ZoraSea002.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea002.SetFacialExpression({'expression': 'angry'})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    goto Event641
}

void mc043_after() {
    ZoraRiverChief.SetInterestIkEnabled({'enable': False})
    ZoraRiverChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverChiefTalk070_010', 'selfTalkAnimName': 'yes,talk', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk050() {
    ZoraRiverChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverChiefTalk050_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk017() {
    ZoraRiverChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'aimToPlayer': False, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverChiefTalk017_010', 'facial': 'sleep', 'selfTalkAnimName': 'strain_01', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk060() {
    ZoraRiverChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverChiefTalk060_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}
