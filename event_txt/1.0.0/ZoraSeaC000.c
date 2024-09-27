-------- EventFlow: ZoraSeaC000 --------

Actor: ZoraSeaC000
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SetFacialExpression', 'KeepAnimationAfterEvent', 'PlayAnimationNoWait', 'PlayAnimation', 'AimCompassPoint', 'AimActor', 'MoveToBesideTargetActor', 'Destroy', 'SetInterestIkEnabled']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: ZoraSeaChief
entrypoint: None()
actions: ['Talk', 'AimActor', 'PlayAnimationNoWait', 'SetFacialExpression', 'AimCompassPoint', 'ResetFacialExpression', 'SetTalkerName', 'AimPlayer', 'Destroy', 'PlayAnimation', 'MoveToBesideTargetActor', 'SetInterestIkEnabled', 'MoveToTargetLinkedPoint']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: ZoraSea006
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'MoveToTargetLinkedPoint', 'Activate', 'WarpToActorLinkedPoint', 'SetFacialExpression', 'AimActor', 'Destroy', 'PlayAnimation', 'AimCompassPoint', 'MoveToBesideTargetActor']
queries: []
params: None

Actor: ZoraRiverChief
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'AimActor', 'Activate', 'WarpToActorLinkedPoint', 'PlayAnimation', 'SetFacialExpression', 'SetComponentActive', 'MoveToTargetLinkedPoint', 'ResetFacialExpression', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel', 'AimPlayer', 'Destroy', 'SetInterestIkEnabled', 'AimCompassPoint', 'MoveToBesideTargetActor']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['WarpToActorLinkedPoint', 'AimActor', 'AimCompassPoint', 'PlayAnimation']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Shake', 'LookAt2ActorsCenterAsTalker', 'LookAt3ActorsCenterAsTalker']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'SetInterestIkEnabled', 'MoveToBesideTargetActor']
queries: []
params: None

Actor: BigRock
entrypoint: None()
actions: ['LookAtGimmick', 'WarpToActorLinkedPoint']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayBGM', 'PlayOneshotSystemSE', 'Prepare', 'StopAllBGM', 'SetPlayerVolume', 'PlayZoneBGM', 'PlaySeSpecifyPos']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor', 'DisableAutoMovement', 'PlayAnimationNoWait', 'AimCompassPoint', 'MoveToBesideTargetActor']
queries: []
params: None

void talk() {
    ZoraSeaC000.SetFacialExpression({'expression': 'smile'})
    ZoraSeaC000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraSea:ZoraSeaC000Talk010_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSeaC000.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSeaC000Talk010_020', 'getAttention': False})
    ZoraSeaC000.SetFacialExpression({'expression': 'sleep'})
    ZoraSeaC000.PlayAnimationNoWait({'name': 'happy01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSeaC000.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSeaC000Talk010_030', 'getAttention': False})
}

void talk020() {
    ZoraSeaC000.SetFacialExpression({'expression': 'sad'})
    ZoraSeaC000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraSea:ZoraSeaC000Talk020_010', 'selfTalkAnimName': 'frightened01', 'aimToPlayer': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSeaC000.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSeaC000Talk020_020', 'getAttention': False})
    ZoraSeaC000.KeepAnimationAfterEvent()
}

void talk030() {
    ZoraSeaC000.SetFacialExpression({'expression': 'smile'})
    ZoraSeaC000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraSea:ZoraSeaC000Talk030_010', 'selfTalkAnimName': 'talk_swim01', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSeaC000.SetFacialExpression({'expression': 'sad'})
    ZoraSeaC000.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSeaC000Talk030_020', 'getAttention': False})
    ZoraSeaC000.PlayAnimationNoWait({'name': 'wait_swim01', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void talk040() {
    ZoraSeaC000.SetFacialExpression({'expression': 'smile'})
    ZoraSeaC000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraSea:ZoraSeaC000Talk040_010', 'selfTalkAnimName': 'talk_swim01', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void ConfinedZoraSeaChild_() {

    call EvResetCommon.AllReset()

    ZoraSeaChief.AimCompassPoint({'direction': 3, 'withoutTurn': False, 'duration': 0.4000000059604645, 'immediateTurn': False})
    BigRock.LookAtGimmick({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})

    fork {
        Timer.Wait({'time': 0.6000000238418579})
        Player.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.6000000238418579, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'surprise'})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_010', 'getAttention': False})
    }

    Audio.StopAllBGM({'duration': 2.0})
    Audio.SetPlayerVolume({'label': 'PLAYER_SE_BASE_AMBIENCE', 'duration': 1.0, 'volume': 0.20000000298023224})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})

    call EvResetCommon.AllReset()

    Zelda.WarpToActorLinkedPoint({'index': 5, 'actor': ActorIdentifier(name="ZoraSeaC000"), 'offsetY': 0.0})

    fork {
        Player.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetZ': 1.0, 'offsetY': 0.6000000238418579, 'actor': ActorIdentifier(name="Player"), 'offsetX': 0.800000011920929, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].DisableAutoMovement()
    } {
        ZoraSeaChief.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Zelda"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaChief.ResetFacialExpression()
    } {
        ZoraSeaC000.PlayAnimationNoWait({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaC000.AimCompassPoint({'direction': 0, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
        ZoraSeaC000.SetFacialExpression({'expression': 'sad'})
    } {
        ZoraSea006.Activate()
    } {
        ZoraRiverChief.Activate()
    } {
        BigRock.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="ZoraSeaC000"), 'index': 12, 'offsetY': 0.0})
    } {
        Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="ZoraSeaC000"), 'actor2': ActorIdentifier(name="Zelda"), 'actor3': ActorIdentifier(name="ZoraSeaChief"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 1.0})
    }

    Fade.StartPreset({'preset': 'FadeInSlow'})

    fork {
        ZoraSeaChief.SetFacialExpression({'expression': 'smile'})
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_020', 'getAttention': False})
    }

    ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSeaChief.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_030', 'getAttention': False})
    }


    fork {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Zelda.PlayAnimation({'name': 'talk_hand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 1.5})
    Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 1.0})
        ZoraSeaChief.SetFacialExpression({'expression': 'smile'})
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'think,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_040', 'getAttention': False})
    }


    fork {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.ResetFacialExpression()
    }


    fork {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimCompassPoint({'direction': 3, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Partner[companion].MoveToBesideTargetActor({'speed': 0, 'actor': ActorIdentifier(name="Player"), 'offsetZ': 1.0, 'offsetY': 0.6000000238418579, 'offsetX': -0.800000011920929, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Zelda.AimCompassPoint({'direction': 3, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        ZoraSeaChief.AimCompassPoint({'direction': 3, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_050', 'getAttention': False})
    } {

        fork {
            Camera.Shake({'power': 3, 'duration': 3.0})
        } {
            Timer.Wait({'time': 3.0})
        }

    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ZORA_CAVE_COLLAPSE', 'volume': 1.0, 'pitch': 1.0})
    }

    ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_060', 'getAttention': False})
    ZoraSea006.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_070', 'getAttention': False})

    fork {
        ZoraRiverChief.WarpToActorLinkedPoint({'index': 7, 'actor': ActorIdentifier(name="ZoraSeaC000"), 'offsetY': 0.0})
    } {
        ZoraSea006.WarpToActorLinkedPoint({'index': 9, 'actor': ActorIdentifier(name="ZoraSeaC000"), 'offsetY': 0.0})
    }


    fork {
        ZoraSea006.MoveToTargetLinkedPoint({'index': 2, 'speed': 1, 'offsetZ': 0.0, 'actor': ActorIdentifier(name="ZoraSeaC000"), 'offsetX': 0.20000000298023224, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetY': 0.0})
        ZoraSea006.AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        ZoraSeaC000.AimCompassPoint({'direction': 3, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Timer.Wait({'time': 0.20000000298023224})
        ZoraSeaC000.AimCompassPoint({'direction': 3, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        ZoraSeaC000.PlayAnimation({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'actor': ActorIdentifier(name="ZoraSea006"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraSea006"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSea006"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraSeaChief.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea006.SetFacialExpression({'expression': 'sad'})
        ZoraSea006.PlayAnimationNoWait({'name': 'happy01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea006.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_080', 'getAttention': False})
    }


    fork {
        ZoraSea006.PlayAnimation({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.MoveToTargetLinkedPoint({'index': 0, 'speed': 1, 'actor': ActorIdentifier(name="ZoraSeaC000"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Camera.LookAt2ActorsCenterAsTalker({'actor2': ActorIdentifier(name="Player"), 'actor1': ActorIdentifier(name="ZoraSea006"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Player.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    ZoraSeaChief.SetFacialExpression({'expression': 'surprise'})
    ZoraSeaChief.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_090', 'getAttention': False})

    fork {
        ZoraRiverChief.SetFacialExpression({'expression': 'trollface'})
    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'trollface_st,trollface_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_100', 'getAttention': False})
    }


    fork {
        ZoraRiverChief.SetFacialExpression({'expression': 'normal'})
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="Player"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.800000011920929})
    }


    fork {
        ZoraRiverChief.SetFacialExpression({'expression': 'surprise'})
        ZoraRiverChief.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_110', 'getAttention': False})
    }

    Timer.Wait({'time': 0.800000011920929})

    fork {
        Timer.Wait({'time': 0.6000000238418579})
        ZoraRiverChief.ResetFacialExpression()
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraSeaC000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        ZoraSeaChief.ResetFacialExpression()
        ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraSeaC000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Zelda.AimActor({'actor': ActorIdentifier(name="ZoraSea006"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSea006"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaC000.PlayAnimationNoWait({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaC000.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_120', 'getAttention': False})
    }


    fork {
        ZoraSea006.SetFacialExpression({'expression': 'smile'})
    } {
        ZoraSea006.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea006.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_130', 'getAttention': False})
    }


    fork {
        ZoraSea006.SetFacialExpression({'expression': 'sad'})
        ZoraSeaC000.PlayAnimationNoWait({'name': 'no01,frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaC000.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_140', 'getAttention': False})
    }

    Timer.Wait({'time': 0.4000000059604645})

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_150', 'getAttention': False})
    }

    ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Timer.Wait({'time': 0.6000000238418579})
        ZoraSeaChief.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSea006.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_160', 'getAttention': False})
    }

    ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        ZoraRiverChief.SetInterestIkEnabled({'enable': False})
        ZoraRiverChief.AimCompassPoint({'direction': 0, 'duration': 0.800000011920929, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Audio.Prepare({'label': 'BGM_EV_ZORA_RIVER_PLAY', 'kind': 0, 'volume': 1.0})

    fork {
        ZoraRiverChief.SetComponentActive({'name': 'poseAdjusterComp', 'active': False})
        ZoraRiverChief.PlayAnimation({'name': 'ev_play_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.PlayAnimation({'name': 'play_after_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})
        ZoraRiverChief.SetComponentActive({'name': 'instrument', 'active': True})
    } {
        Timer.Wait({'time': 1.0})
        ZoraSeaChief.SetFacialExpression({'expression': 'surprise'})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    ZoraRiverChief.SetFacialExpression({'expression': 'play'})
    Timer.Wait({'time': 2.0})

    fork {
        Timer.Wait({'time': 0.6000000238418579})
        Audio.PlayBGM({'label': 'BGM_EV_ZORA_RIVER_PLAY', 'volume': 1.0, 'ignoreSkip': True})
    } {
        ZoraRiverChief.PlayAnimation({'name': 'play', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    ZoraRiverChief.PlayTailorOtherChannelNoWait({'channel': 'Solo_Performances', 'restart': False, 'index': -1, 'stopOnSkipped': True})

    fork {
        Timer.Wait({'time': 5.0})
        ZoraSeaChief.ResetFacialExpression()
        ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.7000000476837158})
        ZoraSeaChief.SetFacialExpression({'expression': 'smile'})
    } {

        fork {
            Timer.Wait({'time': 2.0})

            fork {
                ZoraSea006.SetFacialExpression({'expression': 'normal'})
                ZoraSea006.AimActor({'actor': ActorIdentifier(name="ZoraSeaC000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                ZoraSeaC000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                ZoraSeaC000.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.800000011920929, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                Timer.Wait({'time': 1.0})
                ZoraSeaC000.MoveToBesideTargetActor({'speed': 0, 'offsetZ': -1.0, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'offsetX': 2.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
                ZoraSeaC000.SetFacialExpression({'expression': 'smile'})
                ZoraSeaC000.PlayAnimationNoWait({'name': 'ev_dance01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

        } {
            Timer.Wait({'time': 1.5})
            Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetY': 0.6000000238418579, 'offsetX': -1.5, 'actor': ActorIdentifier(name="Player"), 'offsetZ': 0.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        }

    }

    ZoraRiverChief.PlayAnimation({'name': 'play_after_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiverChief.StopTailorOtherChannel({'channel': 'Solo_Performances', 'index': -1})
    } {
        ZoraRiverChief.SetFacialExpression({'expression': 'normal'})
        ZoraRiverChief.PlayAnimation({'name': 'play_ed', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.SetComponentActive({'active': False, 'name': 'instrument'})
    }

    ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraSeaC000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        ZoraRiverChief.SetFacialExpression({'expression': 'trollface'})
    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'trollface_st,trollface_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_170', 'getAttention': False})
    } {
        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    ZoraSeaC000.SetInterestIkEnabled({'enable': False})

    fork {
        ZoraSeaC000.SetFacialExpression({'expression': 'smile'})
    } {
        ZoraSeaC000.PlayAnimationNoWait({'name': 'happy01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaC000.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_180', 'getAttention': False})
    }


    fork {
        ZoraRiverChief.SetFacialExpression({'expression': 'smile'})
    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        ZoraSeaC000.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaC000.PlayAnimation({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaC000.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_190', 'getAttention': False})
    }


    fork {
        ZoraSeaChief.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'trollface_st,trollface_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_200', 'getAttention': False})
    }

    ZoraSeaC000.PlayAnimation({'name': 'yes01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSea006.SetFacialExpression({'expression': 'smile'})
    ZoraRiverChief.SetInterestIkEnabled({'enable': True})
    ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSeaC000.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    ZoraSeaC000.MoveToBesideTargetActor({'speed': 1, 'offsetZ': 0.0, 'offsetX': -1.2000000476837158, 'actor': ActorIdentifier(name="ZoraSea006"), 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})

    fork {

        fork {
            ZoraSeaC000.PlayAnimationNoWait({'name': 'happy01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraSeaC000.AimActor({'actor': ActorIdentifier(name="ZoraSea006"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        ZoraSeaC000.PlayAnimationNoWait({'name': 'happy01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea006.AimActor({'actor': ActorIdentifier(name="ZoraSeaC000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraSea006.PlayAnimationNoWait({'name': 'yes01,wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Audio.Prepare({'label': 'BGM_EV_COMMON5', 'kind': 0, 'volume': 1.0})
    Timer.Wait({'time': 1.5})

    fork {

        call LookForSeaChief()

    } {
        ZoraSeaChief.SetInterestIkEnabled({'enable': False})
        ZoraSeaChief.SetFacialExpression({'expression': 'sleep'})
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'no,think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_210', 'getAttention': False})
        Audio.PlayBGM({'label': 'BGM_EV_COMMON5', 'ignoreSkip': False, 'volume': 1.0})
    }

    ZoraSeaChief.SetFacialExpression({'expression': 'normal'})
    ZoraSeaChief.MoveToBesideTargetActor({'offsetZ': 0.0, 'speed': 0, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'offsetX': 5.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})

    fork {

        call Talk_Child()

    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraRiverChief.SetFacialExpression({'expression': 'normal'})
        ZoraRiverChief.SetInterestIkEnabled({'enable': False})
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Player.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_220', 'getAttention': False})
    } {
        Audio.PlaySeSpecifyPos({'label': 'SE_NPC_ZORA_S_CHIEF_DIRT_WALK_L', 'posx': -241.6999969482422, 'posy': -2.200000047683716, 'posz': 125.19999694824219})
    }

    ZoraSeaChief.ResetFacialExpression()
    ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiverChief.MoveToBesideTargetActor({'offsetZ': 0.0, 'speed': 0, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'offsetX': -4.5, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    ZoraRiverChief.SetFacialExpression({'expression': 'smile'})

    fork {

        call LookForRiverChief()

    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_230', 'getAttention': False})
    } {
        Audio.PlaySeSpecifyPos({'posy': -2.200000047683716, 'label': 'SE_NPC_ZORA_R_CHIEF_DIRT_WALK_L', 'posx': -246.1999969482422, 'posz': 125.19999694824219})
    }

    ZoraRiverChief.SetFacialExpression({'expression': 'normal'})
    ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})

    fork {

        call Talk_Child()

    } {

        call LookForSeaChief()

    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_240', 'getAttention': False})
    }

    ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {

        call Talk_Mom()

    } {

        call LookForRiverChief()

    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_250', 'getAttention': False})
    }

    ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.5})
        Player.AimActor({'actor': ActorIdentifier(name="ZoraSeaC000"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.2999999523162842})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraSeaC000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.SetTalkerName({'message': 'glossary/Character:ZoraSeaChiefZoraRiverChief', 'keep': False})
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_260', 'getAttention': False})
        ZoraSeaChief.SetTalkerName({'message': 'glossary/Character:ZoraSeaChief', 'keep': False})
    }


    fork {
        ZoraRiverChief.SetFacialExpression({'expression': 'smile'})
        ZoraRiverChief.PlayAnimation({'name': 'happy,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_ZORA_RIVER_CHIEF_005_1', 'volume': 1.0, 'pitch': 1.0})
    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'smile'})
        ZoraSeaChief.PlayAnimation({'name': 'appalling_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Audio.PlayOneshotSystemSE({'label': 'VO_ZORA_SEA_CHIEF_002_5', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 0.800000011920929})

    fork {

        call Talk_Child()

    } {

        call ListenForSeaChief()

    } {
        ZoraRiverChief.SetFacialExpression({'expression': 'normal'})
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'normal'})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_270', 'getAttention': False})
    }

    ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_280', 'getAttention': False})
    }

    ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {

        call Talk_Mom()

    } {

        call ListenForRiverChief()

    } {
        ZoraRiverChief.SetFacialExpression({'expression': 'smile'})
    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_290', 'getAttention': False})
    }

    ZoraRiverChief.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiverChief.SetFacialExpression({'expression': 'normal'})
    ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {

        call ListenForSeaChief()

    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'smile'})
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_300', 'getAttention': False})
        Audio.StopAllBGM({'duration': 1.7000000476837158})
    }

    ZoraSeaChief.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {

        call Talk_Child()

    } {

        fork {
            Player.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Player.MoveToBesideTargetActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'offsetX': -1.2000000476837158, 'offsetZ': 1.7999999523162842, 'speed': 0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
            Player.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.30000001192092896})
            Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetY': 0.6000000238418579, 'offsetZ': 0.30000001192092896, 'actor': ActorIdentifier(name="Player"), 'offsetX': -1.2000000476837158, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Zelda.PlayAnimation({'name': 'talk_hand', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.5})
        Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {

        fork {
            Timer.Wait({'time': 0.6000000238418579})
            ZoraRiverChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.4000000059604645})
            ZoraSeaChief.SetFacialExpression({'expression': 'normal'})
            ZoraSeaChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }


    fork {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_310', 'getAttention': False})
    }

    ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {

        call Talk_Mom()

    } {

        call ListenForRiverChief()

    } {
        Player.SetInterestIkEnabled({'enable': True})
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_320', 'getAttention': False})
    }

    ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {

        call ListenForSeaChief()

    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_330', 'getAttention': False})
    }

    ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {

        call ListenForRiverChief()

    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_340', 'getAttention': False})
    }

    ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {

        call Talk_Child()

    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_350', 'getAttention': False})
    }

    ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSeaChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraRiverChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'smile'})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_355', 'getAttention': False})
    }


    fork {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraRiverChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'normal'})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'fun', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_355_02', 'getAttention': False})
    }

    ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiverChief.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {

        fork {
            ZoraRiverChief.SetInterestIkEnabled({'enable': False})
            ZoraRiverChief.MoveToTargetLinkedPoint({'speed': 1, 'actor': ActorIdentifier(name="ZoraSeaC000"), 'index': 11, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
            ZoraRiverChief.SetComponentActive({'name': 'poseAdjusterComp', 'active': True})
            ZoraRiverChief.Destroy()
        } {
            ZoraSeaChief.SetInterestIkEnabled({'enable': False})
            ZoraSeaChief.MoveToTargetLinkedPoint({'speed': 1, 'actor': ActorIdentifier(name="ZoraSeaC000"), 'index': 11, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
            ZoraSeaChief.Destroy()
        }

    } {

        fork {
            Timer.Wait({'time': 0.30000001192092896})
            ZoraSea006.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
            ZoraSea006.SetFacialExpression({'expression': 'normal'})
            ZoraSea006.AimActor({'duration': 0.6000000238418579, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            ZoraSea006.AimActor({'duration': 0.6000000238418579, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            ZoraSeaC000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            ZoraSeaC000.SetFacialExpression({'expression': 'normal'})
            ZoraSeaC000.AimActor({'duration': 0.800000011920929, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            ZoraSeaC000.AimActor({'duration': 0.800000011920929, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Timer.Wait({'time': 1.5})
        ZoraSea006.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.6000000238418579, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraSea006.MoveToBesideTargetActor({'offsetZ': -3.0, 'speed': 0, 'actor': ActorIdentifier(name="Player"), 'offsetX': -1.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})

        fork {
            Timer.Wait({'time': 0.5})
            ZoraSeaC000.SetFacialExpression({'expression': 'normal'})
            ZoraSeaC000.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.800000011920929, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            ZoraSeaC000.MoveToBesideTargetActor({'offsetZ': -3.0, 'speed': 1, 'actor': ActorIdentifier(name="Player"), 'offsetX': -2.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
            ZoraSeaC000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 0.4000000059604645})
            Player.AimActor({'withoutTurn': False, 'duration': 0.6000000238418579, 'actor': ActorIdentifier(name="ZoraSea006"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.30000001192092896})
            Partner[companion].AimActor({'withoutTurn': False, 'duration': 0.6000000238418579, 'actor': ActorIdentifier(name="ZoraSea006"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            ZoraSea006.SetFacialExpression({'expression': 'smile'})
            ZoraSea006.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            ZoraSea006.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_360', 'getAttention': False})
        }

        ZoraSea006.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            ZoraSeaC000.SetFacialExpression({'expression': 'smile'})
            ZoraSeaC000.PlayAnimationNoWait({'name': 'happy01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            ZoraSeaC000.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_Coast_370', 'getAttention': False})
        }

    }

    Timer.Wait({'time': 0.4000000059604645})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})

    fork {
        ZoraSea006.Destroy()
    } {
        ZoraSeaC000.Destroy()
    }

    Timer.Wait({'time': 2.0})
    QuestSystem.SetProgress({'symbol': 'Calamity_Coast:3500809225', 'isShowTelopInEvent': False, 'isFrontFade': False})
    QuestSystem.SetProgress({'symbol': 'Coast_River:2122875373', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvB_WhereaboutsOfJabuJabu'})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvB_CalamityByJabuJabu_Coast'})
    Audio.PlayZoneBGM({'stopbgm': False})
    Audio.SetPlayerVolume({'label': 'PLAYER_SE_BASE_AMBIENCE', 'duration': 1.0, 'volume': 1.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})
}

void talk050() {
    ZoraSeaC000.SetFacialExpression({'expression': 'smile'})
    ZoraSeaC000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraSea:ZoraSeaC000Talk050_010', 'selfTalkAnimName': 'talk_swim01', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void ListenForSeaChief() {

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void ListenForRiverChief() {

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void LookForSeaChief() {

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.6000000238418579, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void LookForRiverChief() {

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.6000000238418579, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void Talk_Child() {

    fork {
        ZoraSeaC000.SetFacialExpression({'expression': 'normal'})
        Timer.Wait({'time': 0.20000000298023224})
        ZoraSeaC000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea006.SetFacialExpression({'expression': 'smile'})
        ZoraSea006.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 2.0})
        ZoraSea006.PlayAnimationNoWait({'name': 'yes01,wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void Talk_Mom() {

    fork {
        ZoraSeaC000.SetFacialExpression({'expression': 'smile'})
        ZoraSeaC000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 2.0})
        ZoraSeaC000.PlayAnimationNoWait({'name': 'yes01,happy01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea006.SetFacialExpression({'expression': 'normal'})
        Timer.Wait({'time': 0.20000000298023224})
        ZoraSea006.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}
