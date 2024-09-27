-------- EventFlow: ZoraRiverC001 --------

Actor: ZoraRiverC001
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SetFacialExpression', 'PlayAnimationNoWait', 'WarpToActorLinkedPoint', 'PlayAnimation', 'AimActor', 'SetInterestIkEnabled', 'ResetFacialExpression', 'ResetAim', 'AimToInitialAngle', 'SetInstanceVariableString', 'SkipAutoTurn', 'PlayAnimationEx']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: ZoraRiverChief
entrypoint: None()
actions: ['Talk', 'Activate', 'SetFacialExpression', 'PlayAnimationNoWait', 'PlayAnimation', 'AimPlayer', 'MoveToCompassPoint', 'Destroy', 'ResetFacialExpression', 'AimActor', 'LookAtTalker', 'MoveToBesideTargetActor', 'ResetAim', 'AimCompassPoint', 'MoveToTargetLinkedPoint', 'SetInterestIkEnabled']
queries: []
params: None

Actor: ZoraSeaChief
entrypoint: None()
actions: ['Talk', 'AimCompassPoint', 'PlayAnimationNoWait', 'SetFacialExpression', 'MoveToCompassPoint', 'AimActor', 'PlayAnimation', 'SetComponentActive', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel', 'Activate', 'SetTalkerName', 'Destroy', 'MoveToBesideTargetActor', 'AimPlayer', 'SetInterestIkEnabled', 'ResetFacialExpression', 'PlayAnimationEx', 'AimToInitialAngle', 'WarpToActorLinkedPoint', 'MoveToTargetLinkedPoint']
queries: []
params: None

Actor: ZoraRiver003
entrypoint: None()
actions: ['Talk', 'Activate', 'PlayAnimationNoWait', 'SetFacialExpression', 'AimActor', 'PlayAnimation', 'ResetFacialExpression', 'ResetAim', 'AimToInitialAngle', 'SetInstanceVariableString', 'SkipAutoTurn', 'WarpToActorLinkedPoint']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['WarpToActor', 'DisableAutoMovement', 'MoveToBesideTargetActor', 'AimCompassPoint']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'LookAt3ActorsCenterAsTalker']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayBGM', 'StopRegionBgm', 'PlayOneshotSystemSE', 'Prepare', 'StopAllBGM', 'PlayZoneBGM', 'SetPlayerVolume']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimCompassPoint', 'AimActor', 'SetInterestIkEnabled', 'WarpToActorLinkedPoint']
queries: []
params: None

Actor: ZoraSea005
entrypoint: None()
actions: ['Talk', 'Activate', 'LookAtTalker', 'AimActor', 'PlayAnimationNoWait', 'Destroy', 'MoveToCompassPoint', 'MoveToTargetLinkedPoint', 'LookAtTalkersLinkedPoint']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'AimActor', 'MoveToBesideTargetActor', 'AimPlayer']
queries: []
params: None

Actor: AreaStartTag
entrypoint: None()
actions: []
queries: []
params: None

void talk() {
    ZoraRiverC001.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverC001Talk010_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraRiverC001.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverC001Talk010_020', 'getAttention': False})
}

void talk020() {
    ZoraRiverC001.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverC001Talk020_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraRiverC001.SetFacialExpression({'expression': 'smle'})
    ZoraRiverC001.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverC001Talk020_020', 'getAttention': False})
}

void talk030() {
    ZoraRiverC001.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverC001Talk030_010', 'facial': 'smle', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraRiverC001.PlayAnimationNoWait({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiverC001.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverC001Talk030_020', 'getAttention': False})
}

void SolvingCalamity_River() {

    call EvResetCommon.AllReset()

    Audio.SetPlayerVolume({'label': 'PLAYER_SE_WATERFALL1', 'duration': 2.0, 'volume': 0.30000001192092896})
    Audio.SetPlayerVolume({'duration': 2.0, 'label': 'PLAYER_SE_BASE_AMBIENCE', 'volume': 0.30000001192092896})

    fork {
        ZoraRiver003.Activate()
        ZoraRiver003.WarpToActorLinkedPoint({'index': 3, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetY': 0.0})
        ZoraRiver003.SetFacialExpression({'expression': 'sad'})
        ZoraRiver003.PlayAnimationNoWait({'name': 'frightened02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Activate()
        ZoraRiverChief.SetFacialExpression({'expression': 'sad'})
    } {
        ZoraRiverC001.WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetY': 0.0})
        ZoraRiverC001.PlayAnimationEx({'name': 'wait01', 'time': 0.009999999776482582, 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverC001.AimActor({'duration': 0.0, 'immediateTurn': True, 'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraRiver003"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        ZoraRiverC001.SetFacialExpression({'expression': 'smile'})
    } {
        Player.WarpToActorLinkedPoint({'index': 4, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetY': 0.0})
        Zelda.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner.WarpToActor({'offsetY': 1.0, 'distance': 0.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': -1.0})
        Partner.DisableAutoMovement()
    } {
        ZoraSeaChief.Activate()
        ZoraSeaChief.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="AreaStartTag"), 'index': 2, 'offsetY': 0.0})
        ZoraSeaChief.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'immediateTurn': True, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }


    fork {

        call GeneralSequence.EvMapWarpIn()

        Partner.MoveToBesideTargetActor({'speed': 1, 'offsetX': 1.0, 'offsetZ': 0.0, 'offsetY': 0.699999988079071, 'actor': ActorIdentifier(name="Player"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        ZoraRiverC001.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraSeaChief.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Player.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }


    fork {
        ZoraRiverC001.SetInterestIkEnabled({'enable': True})
        Timer.Wait({'time': 0.6000000238418579})
        ZoraRiverC001.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="ZoraRiver003"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraSeaChief.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.SetInterestIkEnabled({'enable': True})

        call Look_ZoraRivChief()

    } {
        ZoraRiverChief.SetFacialExpression({'expression': 'sad'})
        ZoraRiverChief.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_River_010', 'getAttention': False})
    }

    ZoraSeaChief.SetInterestIkEnabled({'enable': False})
    ZoraRiverChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSeaChief.PlayAnimation({'name': 'no', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaChief.SetInterestIkEnabled({'enable': True})
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="Player"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 1.0})
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {

        call _pd069ZoraSeaChief()

    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_River_020', 'getAttention': False})
    }

    ZoraRiverChief.SetFacialExpression({'expression': 'angry'})
    ZoraRiverChief.PlayAnimationNoWait({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {

        call Look_ZoraRivChief()

    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_River_030', 'getAttention': False})
    }

    ZoraSeaChief.SetTalkerName({'message': 'glossary/Character:ZoraSeaChiefZoraRiverChief', 'keep': False})

    fork {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'angry_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'strong_anger', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Audio.PlayOneshotSystemSE({'label': 'VO_ZORA_RIVER_CHIEF_004_2', 'volume': 1.0, 'pitch': 1.0})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Audio.PlayOneshotSystemSE({'label': 'VO_ZORA_SEA_CHIEF_004_4', 'volume': 1.0, 'pitch': 1.0})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_River_040', 'getAttention': False})
    }

    ZoraSeaChief.SetTalkerName({'message': 'glossary/Character:ZoraSeaChief', 'keep': False})
    Timer.Wait({'time': 0.800000011920929})
    ZoraRiver003.PlayAnimationNoWait({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    ZoraRiverC001.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraRiverC001.SetInterestIkEnabled({'enable': False})
    ZoraRiverC001.SetFacialExpression({'expression': 'sad'})
    ZoraRiverC001.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {

        call _pd069ZoraRivC001()

    } {
        ZoraRiverC001.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_River_050', 'getAttention': False})
    }

    Timer.Wait({'time': 0.20000000298023224})
    Camera.LookAt3ActorsCenterAsTalker({'distanceOffset': 0.0, 'offsetZ': 0.5, 'chaseRatio': 0.05999999865889549, 'duration': 1.0, 'actor1': ActorIdentifier(name="ZoraRiverChief"), 'actor2': ActorIdentifier(name="ZoraRiver003"), 'actor3': ActorIdentifier(name="Player"), 'offsetX': -0.5, 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'offsetY': 0.0})
    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        ZoraSeaChief.ResetFacialExpression()
        ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraRiver003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiverChief.ResetFacialExpression()
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraRiver003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.4000000059604645})
        ZoraRiverChief.SetFacialExpression({'expression': 'surprise'})
        ZoraRiverChief.PlayAnimation({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        ZoraRiverC001.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverC001.AimActor({'actor': ActorIdentifier(name="ZoraRiver003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraRiverC001.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.0})
        ZoraRiver003.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_River_060', 'getAttention': False})
    }

    Timer.Wait({'time': 0.5})
    ZoraRiverChief.ResetFacialExpression()
    ZoraRiverChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiverChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {

        call Look_ZoraRivChief()

    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_River_070', 'getAttention': False})
    }

    ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver003.PlayAnimationNoWait({'name': 'frightened02', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {

        call _pd069ZoraRiv003()

    } {
        ZoraRiver003.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_River_080', 'getAttention': False})
    }

    ZoraRiverChief.SetFacialExpression({'expression': 'sad'})
    ZoraRiverChief.PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {

        call Look_ZoraRivChief()

    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_River_090', 'getAttention': False})
    }

    ZoraSeaChief.SetFacialExpression({'expression': 'trollface'})
    ZoraSeaChief.PlayAnimationNoWait({'name': 'appalling_st', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_River_095', 'getAttention': False})
        Audio.StopRegionBgm({'fadeSec': 2.799999952316284})
    } {

        call _pd069ZoraSeaChief()

    }

    Timer.Wait({'time': 0.5})
    ZoraSeaChief.MoveToCompassPoint({'direction': 3, 'speed': 0, 'distance': 4.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Audio.Prepare({'label': 'BGM_EV_ZORA_SEA_PLAY', 'kind': 0, 'volume': 1.0})
    ZoraSeaChief.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        ZoraSeaChief.PlayAnimation({'name': 'play_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaChief.PlayAnimation({'name': 'play_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})
        ZoraSeaChief.SetComponentActive({'active': True, 'name': 'instrument'})
    }

    ZoraSeaChief.SetFacialExpression({'expression': 'play'})

    fork {
        Timer.Wait({'time': 2.0})
    } {
        ZoraRiverChief.ResetFacialExpression()
        ZoraRiverChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.4000000059604645})
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        ZoraRiverC001.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.4000000059604645})
        ZoraRiverC001.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Audio.PlayBGM({'label': 'BGM_EV_ZORA_SEA_PLAY', 'volume': 1.0, 'ignoreSkip': True})
    ZoraSeaChief.PlayAnimation({'name': 'play', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSeaChief.PlayTailorOtherChannelNoWait({'channel': 'Solo_Performances', 'restart': False, 'index': -1, 'stopOnSkipped': True})

    fork {
        Timer.Wait({'time': 4.800000190734863})
        ZoraSeaChief.PlayAnimation({'name': 'play_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.2000000476837158})
    } {
        Timer.Wait({'time': 2.0})
        ZoraRiver003.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.0})
        ZoraRiver003.SetFacialExpression({'expression': 'sleep'})
        ZoraRiver003.PlayAnimation({'name': 'chill01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.5})
        Partner[companion].PlayAnimationNoWait({'name': 'listen_sea', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 2.5})
        ZoraRiverChief.SetFacialExpression({'expression': 'normal'})
        ZoraRiverChief.PlayAnimation({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.5})
    } {
        Timer.Wait({'time': 1.5})
        ZoraRiverC001.SetFacialExpression({'expression': 'normal'})
        ZoraRiverC001.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 2.0})
        ZoraRiverC001.ResetFacialExpression()
        ZoraRiverC001.SetInterestIkEnabled({'enable': True})
        ZoraRiverC001.AimActor({'actor': ActorIdentifier(name="ZoraRiver003"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 1.0})
        ZoraRiverC001.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraRiverC001.SetInterestIkEnabled({'enable': False})
        ZoraRiverC001.SetFacialExpression({'expression': 'smile'})
        ZoraRiverC001.PlayAnimation({'name': 'chill01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    ZoraSeaChief.StopTailorOtherChannel({'channel': 'Solo_Performances', 'index': -1})
    Timer.Wait({'time': 2.0})
    ZoraSeaChief.PlayAnimation({'name': 'play_ed', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSeaChief.SetFacialExpression({'expression': 'normal'})
    ZoraSeaChief.SetComponentActive({'active': False, 'name': 'instrument'})
    ZoraSeaChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiver003.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverC001.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.5})
    ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraRiver003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'smile'})
        ZoraSeaChief.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Timer.Wait({'time': 0.6000000238418579})
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraRiver003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraRiverC001.AimActor({'actor': ActorIdentifier(name="ZoraRiver003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_River_100', 'getAttention': False})
    }


    fork {

        call _pd069ZoraRiv003()

    } {
        Timer.Wait({'time': 0.20000000298023224})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver003.SetFacialExpression({'expression': 'smile'})
        ZoraRiver003.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver003.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_River_105', 'getAttention': False})
    }

    Timer.Wait({'time': 0.5})
    ZoraRiver003.ResetFacialExpression()
    ZoraRiver003.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {

        call _pd069ZoraRiv003()

    } {
        ZoraRiver003.SetFacialExpression({'expression': 'smile'})
        ZoraRiver003.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver003.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_River_110', 'getAttention': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        ZoraRiver003.AimActor({'actor': ActorIdentifier(name="ZoraRiverC001"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraRiver003.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        ZoraRiverC001.AimActor({'actor': ActorIdentifier(name="ZoraRiver003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraRiverC001.SetFacialExpression({'expression': 'smile'})
        ZoraRiverC001.PlayAnimationNoWait({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 2.0})
    ZoraSeaChief.SetFacialExpression({'expression': 'trollface'})
    ZoraSeaChief.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {

        call _pd069ZoraSeaChief()

    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'trollface_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_River_115', 'getAttention': False})
    }

    Timer.Wait({'time': 0.5})
    ZoraRiverChief.SetFacialExpression({'expression': 'sleep'})
    ZoraRiverChief.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {

        call Look_ZoraRivChief()

    } {
        Timer.Wait({'time': 0.5})
        ZoraSeaChief.SetFacialExpression({'expression': 'normal'})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_River_120', 'getAttention': False})
    }

    Timer.Wait({'time': 0.5})
    ZoraRiverChief.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiverChief.ResetFacialExpression()
    Timer.Wait({'time': 0.20000000298023224})
    ZoraRiverChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_River_130', 'getAttention': False})
    ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSeaChief.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSea005.Activate()
    Timer.Wait({'time': 1.5})

    fork {
        ZoraSea005.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_River_200', 'getAttention': False})
        Audio.Prepare({'label': 'BGM_EV_COMMON2', 'kind': 0, 'volume': 1.0})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        ZoraSeaChief.ResetFacialExpression()
        ZoraSeaChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraSea005"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.800000011920929})
        ZoraRiverChief.ResetFacialExpression()
        ZoraRiverChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraSea005"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.8999999761581421})
        ZoraRiverC001.ResetFacialExpression()
        ZoraRiverC001.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverC001.AimActor({'actor': ActorIdentifier(name="ZoraSea005"), 'duration': 0.800000011920929, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.699999988079071})
        ZoraRiver003.ResetFacialExpression()
        ZoraRiver003.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver003.AimActor({'actor': ActorIdentifier(name="ZoraSea005"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSea005"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Player.AimActor({'actor': ActorIdentifier(name="ZoraSea005"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        ZoraSea005.LookAtTalkersLinkedPoint({'pointIndex': 0, 'chaseRatio': 0.05999999865889549, 'duration': 1.0, 'offsetZ': 0.0, 'offsetY': 2.5, 'offsetX': 1.0, 'distanceOffset': 0.0})
        ZoraSea005.MoveToTargetLinkedPoint({'actor': ActorIdentifier(name="AreaStartTag"), 'index': 5, 'speed': 1, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 1.5})
        Audio.PlayBGM({'label': 'BGM_EV_COMMON2', 'ignoreSkip': False, 'volume': 1.0})
    }


    fork {
        ZoraSea005.MoveToTargetLinkedPoint({'speed': 1, 'actor': ActorIdentifier(name="AreaStartTag"), 'index': 6, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        ZoraSea005.LookAtTalker({'keep': True, 'chaseRatio': 0.05999999865889549, 'duration': 1.0, 'distanceOffset': 0.0, 'offsetZ': 0.0, 'offsetY': 2.5, 'offsetX': 1.0})
    }

    ZoraSea005.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'offsetX': 0.0, 'distanceOffset': 0.0, 'chaseRatio': 0.029999999329447746, 'duration': 1.0, 'offsetY': 0.0, 'offsetZ': 0.5, 'actor1': ActorIdentifier(name="ZoraSeaChief"), 'actor2': ActorIdentifier(name="ZoraSea005"), 'weight1': 1.0, 'weight2': 1.0})
    } {
        ZoraSeaChief.MoveToTargetLinkedPoint({'actor': ActorIdentifier(name="AreaStartTag"), 'index': 7, 'speed': 1, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraSea005"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.699999988079071})
        ZoraRiverChief.MoveToTargetLinkedPoint({'index': 8, 'actor': ActorIdentifier(name="AreaStartTag"), 'speed': 1, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraSea005"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        ZoraRiver003.ResetAim()
    } {
        ZoraRiverChief.ResetAim()
    } {
        ZoraRiverC001.ResetAim()
    }

    ZoraSeaChief.SetFacialExpression({'expression': 'angry'})
    ZoraSeaChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_River_210', 'getAttention': False})
    } {

        call _pd069ZoraSeaChief()

    }

    ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSea005.PlayAnimationNoWait({'name': 'talk_swim01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSea005.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_River_220', 'getAttention': False})
    } {

        call _pd069ZoraSea005()

    } {
        Timer.Wait({'time': 1.0})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.100000023841858})
        ZoraRiverChief.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    ZoraSeaChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_River_230', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        ZoraSea005.PlayAnimationNoWait({'name': 'wait_swim01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {

        call _pd069ZoraSeaChief()

    }

    ZoraSeaChief.SetInterestIkEnabled({'enable': False})
    ZoraSeaChief.MoveToBesideTargetActor({'speed': 1, 'offsetX': -2.25, 'actor': ActorIdentifier(name="ZoraSea005"), 'offsetZ': 0.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    ZoraSeaChief.PlayAnimation({'name': 'wait_swim', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.25})

    fork {
        ZoraSeaChief.MoveToCompassPoint({'direction': 3, 'speed': 1, 'distance': 7.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        ZoraSeaChief.Destroy()
    } {
        Timer.Wait({'time': 0.10000000149011612})
        ZoraSea005.MoveToCompassPoint({'direction': 3, 'speed': 1, 'distance': 7.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        ZoraSea005.Destroy()
    }

    ZoraRiverChief.LookAtTalker({'keep': True, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 0.5})
    ZoraRiverChief.PlayAnimationNoWait({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {

        fork {
            Timer.Wait({'time': 0.20000000298023224})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.3499999940395355})
            Player.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.25})
            ZoraRiverC001.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.4000000059604645})
            ZoraRiver003.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_River_240', 'getAttention': False})
    }


    fork {
        ZoraRiverChief.MoveToBesideTargetActor({'speed': 1, 'offsetZ': 1.5, 'actor': ActorIdentifier(name="Player"), 'offsetX': -4.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    } {
        ZoraRiverChief.LookAtTalker({'keep': True, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    ZoraRiverChief.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})
    ZoraRiverChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_River_250', 'getAttention': False})
    ZoraRiverChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    ZoraRiverChief.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})

    fork {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_River_250_02', 'getAttention': False})
    } {

        call Look_ZoraRivChief()

    } {
        ZoraRiverC001.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiver003.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Timer.Wait({'time': 0.20000000298023224})
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Player.SetInterestIkEnabled({'enable': False})

        call GeneralSequence.ZeldaTalkMotion()

        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    ZoraRiverChief.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_River_260', 'getAttention': False})
    ZoraRiverChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_River_270', 'getAttention': False})

    fork {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_River_280', 'getAttention': False})
        Audio.StopAllBGM({'duration': 5.0})
    }


    fork {
        ZoraRiverChief.SetInterestIkEnabled({'enable': False})
        ZoraRiverChief.MoveToCompassPoint({'speed': 1, 'direction': 0, 'distance': 3.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        ZoraRiverChief.PlayAnimation({'name': 'wait_swim', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.MoveToCompassPoint({'speed': 1, 'direction': 3, 'distance': 8.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        ZoraRiverChief.Destroy()
    } {
        ZoraRiverC001.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiver003.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        ZoraRiverC001.AimToInitialAngle({'duration': 0.6000000238418579, 'withoutTurn': False, 'immediateTurn': False})
        ZoraRiverC001.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait01'})
        ZoraRiverC001.SkipAutoTurn()
    } {
        ZoraRiver003.AimToInitialAngle({'withoutTurn': False, 'duration': 0.6000000238418579, 'immediateTurn': False})
        ZoraRiver003.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait01'})
        ZoraRiver003.SkipAutoTurn()
    }

    Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetZ': 0.75, 'actor': ActorIdentifier(name="Player"), 'offsetX': -1.5, 'offsetY': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Partner", sub_name="companion"), 'actor2': ActorIdentifier(name="Player"), 'chaseRatio': 0.05999999865889549, 'duration': 2.0, 'weight1': 1.0, 'weight2': 1.0, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 0.5})
    Partner[companion].PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_River_290', 'getAttention': False})

    fork {

        call GeneralSequence.Look_at_Partner()

    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaB:SolvingCalamity_River_300', 'getAttention': False})
    QuestSystem.SetProgress({'symbol': 'Calamity_River:1439233498', 'isShowTelopInEvent': False, 'isFrontFade': False})
    QuestSystem.SetProgress({'symbol': 'Coast_River:2970438674', 'isShowTelopInEvent': False, 'isFrontFade': False})
    Audio.PlayZoneBGM({'stopbgm': False})
    Audio.SetPlayerVolume({'label': 'PLAYER_SE_WATERFALL1', 'duration': 2.0, 'volume': 1.0})
    Audio.SetPlayerVolume({'duration': 2.0, 'volume': 1.0, 'label': 'PLAYER_SE_BASE_AMBIENCE'})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvB_GetInfo_River'})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvB_Calamity_CoastStart'})
}

void CalamityByJabuJabu_River() {
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="ZoraSeaChief"), 'actor2': ActorIdentifier(name="ZoraRiverC001"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {

        call EvResetCommon.AllReset()

    } {
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraRiverC001"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiverC001.SetFacialExpression({'expression': 'sad'})
    } {
        ZoraRiverC001.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        ZoraRiverC001.PlayAnimationNoWait({'name': 'sad02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverC001.Talk({'message': 'scenario/StoryAreaB:CalamityByJabuJabu_River_005', 'getAttention': False})
    }


    fork {
        ZoraSeaChief.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:CalamityByJabuJabu_River_010', 'getAttention': False})
    }

    ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="ZoraSeaChief"), 'actor2': ActorIdentifier(name="ZoraRiverC001"), 'actor3': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {

        call GeneralSequence.Look_at_Partner()

    } {
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].Talk({'message': 'scenario/StoryAreaB:CalamityByJabuJabu_River_020', 'getAttention': False})
    }

    ZoraSeaChief.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Timer.Wait({'time': 0.30000001192092896})
        Player.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        ZoraRiverC001.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'surprise'})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:CalamityByJabuJabu_River_030', 'getAttention': False})
    }


    fork {
        ZoraSeaChief.SetFacialExpression({'expression': 'sad'})
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
    }


    fork {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:CalamityByJabuJabu_River_040', 'getAttention': False})
    }


    fork {
        ZoraSeaChief.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverC001.SetFacialExpression({'expression': 'sad'})
    } {
        ZoraRiverC001.PlayAnimationNoWait({'name': 'sad02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverC001.Talk({'message': 'scenario/StoryAreaB:CalamityByJabuJabu_River_050', 'getAttention': True})
    }


    fork {
        Timer.Wait({'time': 0.800000011920929})
        ZoraSeaChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraSeaChief.SetInterestIkEnabled({'enable': False})
        ZoraSeaChief.SetFacialExpression({'expression': 'sad'})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverC001.SetFacialExpression({'expression': 'sleep'})
    } {
        ZoraRiverC001.PlayAnimationNoWait({'name': 'frightened02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverC001.Talk({'message': 'scenario/StoryAreaB:CalamityByJabuJabu_River_060', 'getAttention': True})
    }


    fork {
        ZoraRiverC001.SetFacialExpression({'expression': 'sad'})
    } {
        ZoraRiverC001.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverC001.SetInterestIkEnabled({'enable': False})
    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:CalamityByJabuJabu_River_070', 'getAttention': False})
    }

    ZoraSeaChief.SetInterestIkEnabled({'enable': True})

    fork {
        ZoraSeaChief.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiverC001"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:CalamityByJabuJabu_River_070_02', 'getAttention': False})
    }

    ZoraSeaChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        ZoraSeaChief.SetFacialExpression({'expression': 'sad'})
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:CalamityByJabuJabu_River_080', 'getAttention': False})
    }


    fork {
        ZoraRiverC001.PlayAnimationNoWait({'name': 'sad02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraSeaChief.PlayAnimationEx({'layer': 0, 'blendFrame': -1, 'time': 2.0, 'name': 'sad_st', 'restart': False})
    }

    Timer.Wait({'time': 0.6000000238418579})

    fork {
        ZoraRiverC001.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverC001.AimToInitialAngle({'duration': 0.6000000238418579, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        ZoraSeaChief.PlayAnimationNoWait({'layer': 0, 'blendFrame': -1, 'name': 'wait', 'restart': False})
        ZoraSeaChief.AimToInitialAngle({'duration': 0.800000011920929, 'withoutTurn': False, 'immediateTurn': False})
    }

    QuestSystem.SetProgress({'symbol': 'Calamity_River:1011063871', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventFlags.SetFlag({'symbol': 'EvB_CalamityByJabuJabu_River', 'value': True})
}

void talk015() {
    ZoraRiverC001.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverC001Talk015_010', 'facial': 'sad', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Look_ZoraRivChief() {

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void _pd069ZoraSeaChief() {

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        Player.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void _pd069ZoraRivC001() {

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiverC001"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiverC001"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void _pd069ZoraRiv003() {

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiver003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiver003"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void _pd069ZoraSea005() {

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSea005"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSea005"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void talk040() {
    ZoraRiverC001.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverC001Talk040_010', 'facial': 'smle', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraRiverC001.PlayAnimationNoWait({'name': 'laugh01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiverC001.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverC001Talk040_020', 'getAttention': False})
}

void talk017() {
    ZoraRiverC001.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverC001Talk017_010', 'facial': 'surprise', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}
