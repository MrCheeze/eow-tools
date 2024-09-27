-------- EventFlow: ZoraSeaChief --------

Actor: ZoraSeaChief
entrypoint: None()
actions: ['Talk', 'GenericTalkSequenceWithDialog', 'PlayAnimationNoWait', 'PlayAnimation', 'AimActor', 'Deactivate', 'MoveToCompassPoint', 'WarpToActorLinkedPointWithCompassPoint', 'AimDegreeAngle', 'AimPlayer', 'SetFacialExpression', 'ResetFacialExpression', 'SetInterestIkEnabled', 'LookAtGimmicksLinkedPoint']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: ZoraSea002
entrypoint: None()
actions: ['Talk', 'AimActor', 'PlayAnimationNoWait']
queries: []
params: None

Actor: ZoraRiverChief
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'SetFacialExpression', 'Deactivate', 'MoveToCompassPoint', 'WarpToActorLinkedPointWithCompassPoint', 'AimDegreeAngle', 'AimPlayer', 'ResetFacialExpression', 'PlayAnimation', 'AimActor', 'SetInterestIkEnabled']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['ForbidLaunchApplet', 'UnforbidLaunchApplet']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset', 'StartParam']
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

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'LookAt3ActorsCenterAsTalker', 'LerpDofSettings', 'Reset']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['WarpToActorLinkedPointWithCompassPoint', 'AimActor']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['PreloadTimeline', 'InvokeTimeline']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayJingle', 'PlayBGM', 'Prepare', 'StopAllBGM', 'SetPlayerVolume']
queries: []
params: None

Actor: EvRecitalPlatform
entrypoint: None()
actions: ['Destroy']
queries: []
params: None

Actor: EvJabujabuDebrisSyncLong
entrypoint: None()
actions: ['Destroy']
queries: []
params: None

Actor: EvJabujabuDebrisSync
entrypoint: None()
actions: ['Destroy']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['PlayAnimationNoWait', 'AimCompassPoint', 'WarpToActorLinkedPointWithCompassPoint', 'AimActor', 'SetInterestIkEnabled']
queries: []
params: None

Actor: RecitalPlatformBroken00[ev01]
entrypoint: None()
actions: ['Destroy']
queries: []
params: None

Actor: RecitalPlatformBroken01[ev01]
entrypoint: None()
actions: ['Destroy']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['MoveToBesideTargetActor', 'DisableAutoMovement', 'AimCompassPoint', 'Talk', 'PlayAnimationNoWait', 'AimActor', 'AimPlayer']
queries: []
params: None

void talk020() {
    ZoraSeaChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraSea:ZoraSeaChiefTalk020_010', 'aimToPlayer': False, 'selfTalkAnimName': '', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk() {
    ZoraSeaChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraSea:ZoraSeaChiefTalk010_010', 'aimToPlayer': False, 'selfTalkAnimName': 'think', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSea002.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        ZoraSea002.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSea002.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSeaChiefTalk010_020', 'getAttention': False})
        ZoraSea002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    ZoraSeaChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSeaChief.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSeaChiefTalk010_030', 'getAttention': False})
    ZoraSeaChief.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSeaChief.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSeaChiefTalk010_040', 'getAttention': False})
}

void talk030() {
    ZoraSeaChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraSea:ZoraSeaChiefTalk030_010', 'selfTalkAnimName': 'yes,wait', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk040() {
    ZoraSeaChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraSea:ZoraSeaChiefTalk040_010', 'selfTalkAnimName': '', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSeaChief.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSeaChiefTalk040_020', 'getAttention': False})
}

void CompleteHarmony() {

    call EvResetCommon.AllReset()

    Player.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSeaChief.LookAtGimmicksLinkedPoint({'pointIndex': 8, 'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 1.2999999523162842})
    Audio.PlayJingle({'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="ZoraSeaChief"), 'actor2': ActorIdentifier(name="ZoraRiverChief"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    FlowControl.PreloadTimeline({'filename': 'CompleteHarmony'})

    fork {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraSeaChief.SetInterestIkEnabled({'enable': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Timer.Wait({'time': 0.6000000238418579})
        Zelda.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraRiverChief.SetFacialExpression({'expression': 'surprise'})
        ZoraRiverChief.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'surprise'})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:CompleteHarmony_010', 'getAttention': False})
    }

    ZoraSeaChief.PlayAnimation({'name': 'no', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiverChief.ResetFacialExpression()
        ZoraRiverChief.PlayAnimationNoWait({'name': 'surprised_ed,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaChief.ResetFacialExpression()
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:CompleteHarmony_015', 'getAttention': False})
    }

    ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:CompleteHarmony_020', 'getAttention': False})
    }

    ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.4000000059604645})

    call Performance()


    call AfterSetting()


    fork {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:CompleteHarmony_040', 'getAttention': False})
    }

    Audio.Prepare({'label': 'BGM_EV_COMMON5', 'kind': 0, 'volume': 1.0})

    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'appeal02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].Talk({'message': 'scenario/StoryAreaB:CompleteHarmony_045', 'getAttention': False})
    }

    Partner[companion].AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'offsetY': -0.6000000238418579, 'duration': 0.6000000238418579, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].Talk({'message': 'scenario/StoryAreaB:CompleteHarmony_046', 'getAttention': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {

        fork {
            Timer.Wait({'time': 0.4000000059604645})
            Player.SetInterestIkEnabled({'enable': True})
            Player.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.6000000238418579})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    } {
        ZoraRiverChief.SetFacialExpression({'expression': 'smile'})
        ZoraRiverChief.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:CompleteHarmony_050', 'getAttention': False})
    } {
        Audio.PlayBGM({'label': 'BGM_EV_COMMON5', 'ignoreSkip': False, 'volume': 1.0})
    }


    fork {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:CompleteHarmony_051', 'getAttention': False})
    }

    ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {

        fork {
            Timer.Wait({'time': 0.4000000059604645})
            Player.SetInterestIkEnabled({'enable': True})
            Player.AimActor({'duration': 0.6000000238418579, 'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.6000000238418579})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'smile'})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:CompleteHarmony_052', 'getAttention': False})
    }

    ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'offsetY': -0.6000000238418579, 'duration': 0.6000000238418579, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].Talk({'message': 'scenario/StoryAreaB:CompleteHarmony_055', 'getAttention': False})
    }


    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].Talk({'message': 'scenario/StoryAreaB:CompleteHarmony_056', 'getAttention': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiverChief.ResetFacialExpression()
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'sleep'})
        ZoraSeaChief.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 2.0})
    ZoraSeaChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSeaChief.PlayAnimation({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSeaChief.ResetFacialExpression()

    fork {

        fork {
            Timer.Wait({'time': 0.4000000059604645})
            Player.SetInterestIkEnabled({'enable': True})
            Player.AimActor({'duration': 0.6000000238418579, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.6000000238418579})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:CompleteHarmony_080', 'getAttention': False})
    }


    fork {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:CompleteHarmony_081', 'getAttention': False})
    }

    ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {

        fork {
            Timer.Wait({'time': 0.4000000059604645})
            Player.SetInterestIkEnabled({'enable': True})
            Player.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.6000000238418579})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    } {
        ZoraRiverChief.SetFacialExpression({'expression': 'surprise'})
        ZoraRiverChief.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:CompleteHarmony_090', 'getAttention': False})
    }

    ZoraRiverChief.ResetFacialExpression()
    ZoraRiverChief.PlayAnimation({'name': 'surprised_ed,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.6000000238418579})

    fork {
        ZoraRiverChief.SetFacialExpression({'expression': 'smile'})
        ZoraRiverChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:CompleteHarmony_100', 'getAttention': False})
    }

    ZoraSeaChief.SetFacialExpression({'expression': 'smile'})
    ZoraSeaChief.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSeaChief.ResetFacialExpression()
    ZoraRiverChief.ResetFacialExpression()
    ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {

        fork {
            Timer.Wait({'time': 0.4000000059604645})
            Player.SetInterestIkEnabled({'enable': True})
            Player.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.6000000238418579})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    } {
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'smile'})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:CompleteHarmony_110', 'getAttention': False})
    }


    fork {

        fork {
            Timer.Wait({'time': 0.4000000059604645})
            Player.SetInterestIkEnabled({'enable': True})
            Player.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.6000000238418579})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    } {
        ZoraRiverChief.SetFacialExpression({'expression': 'smile'})
        ZoraRiverChief.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:CompleteHarmony_111', 'getAttention': False})
    }

    ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {

        fork {
            Timer.Wait({'time': 0.4000000059604645})
            Player.SetInterestIkEnabled({'enable': True})
            Player.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.6000000238418579})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    } {
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'angry'})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'angry_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:CompleteHarmony_120', 'getAttention': False})
    }


    fork {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimCompassPoint({'direction': 2, 'withoutTurn': False, 'duration': 0.4000000059604645, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        ZoraRiverChief.SetFacialExpression({'expression': 'angry'})
        ZoraRiverChief.PlayAnimation({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:CompleteHarmony_130', 'getAttention': False})
    }

    Timer.Wait({'time': 1.0})

    fork {
        ZoraRiverChief.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Audio.StopAllBGM({'duration': 1.7999999523162842})

    fork {
        ZoraSeaChief.MoveToCompassPoint({'speed': 1, 'direction': 3, 'distance': 3.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        ZoraSeaChief.MoveToCompassPoint({'direction': 2, 'speed': 1, 'distance': 5.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        ZoraSeaChief.Deactivate()
    } {
        ZoraRiverChief.MoveToCompassPoint({'speed': 1, 'direction': 1, 'distance': 3.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        ZoraRiverChief.MoveToCompassPoint({'direction': 2, 'speed': 1, 'distance': 5.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        ZoraRiverChief.Deactivate()
    }

    QuestSystem.SetProgress({'symbol': 'Coast_River:1333737924', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EvJabujabuDebrisSyncLong.Destroy()
    EvJabujabuDebrisSync.Destroy()
}

void CalamityByJabuJabu_Coast_talk() {
    ZoraSeaChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'selfTalkAnimName': 'think', 'message': 'scenario/StoryAreaB:ConfinedZoraSeaChild_110', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void ZoraSeaChiefTalk015() {

    call EvResetCommon.AllReset()

    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="ZoraSeaChief"), 'actor2': ActorIdentifier(name="ZoraSea002"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaChief.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSeaChiefTalk015_010', 'getAttention': False})
    } {
        ZoraSea002.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSea002.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSea002.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSeaChiefTalk015_020', 'getAttention': False})
    }

    ZoraSea002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaChief.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSeaChiefTalk015_030', 'getAttention': False})
    }

    ZoraSeaChief.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSeaChief.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSeaChiefTalk015_040', 'getAttention': False})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Partner[companion].Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSeaChiefTalk015_050', 'getAttention': False})
    } {

        call GeneralSequence.Look_at_Partner()

    }

}

void talk025() {
    ZoraSeaChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'aimToPlayer': False, 'selfTalkAnimName': 'think', 'message': 'scenario/GeneralTalkZoraSea:ZoraSeaChiefTalk025_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk017() {
    ZoraSeaChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'selfTalkAnimName': 'think', 'message': 'scenario/GeneralTalkZoraSea:ZoraSeaChiefTalk017_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Special_Coast010_010() {
    ZoraSeaChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'facial': 'sad', 'message': 'quest/QuestAreaB:Special_Coast020_050', 'selfTalkAnimName': 'sad_st,sad_lp', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSeaChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSeaChief.Talk({'message': 'quest/QuestAreaB:Special_Coast020_060', 'getAttention': False})
    } {
        ZoraSeaChief.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void Performance() {
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Audio.SetPlayerVolume({'label': 'PLAYER_SE_BASE_AMBIENCE', 'volume': 0.5, 'duration': 1.0})

    fork {
        RecitalPlatformBroken00[ev01].Destroy()
    } {
        RecitalPlatformBroken01[ev01].Destroy()
    } {
        GameControl.ForbidLaunchApplet()
    }

    EvJabujabuDebrisSyncLong.Destroy()
    EvJabujabuDebrisSync.Destroy()
    EvRecitalPlatform.Destroy()
    EventFlags.SetFlag({'value': True, 'symbol': 'EvB_CompleteHarmony'})

    fork {
        Zelda.WarpToActorLinkedPointWithCompassPoint({'direction': 2, 'index': 4, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'offsetY': 0.0})
        Player.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.WarpToActorLinkedPointWithCompassPoint({'direction': 0, 'index': 5, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'offsetY': 0.0})
        ZoraRiverChief.AimDegreeAngle({'duration': 0.0, 'angle': 30.0, 'withoutTurn': False, 'immediateTurn': False})
    } {
        ZoraSeaChief.WarpToActorLinkedPointWithCompassPoint({'direction': 0, 'index': 6, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'offsetY': 0.0})
        ZoraSeaChief.AimDegreeAngle({'duration': 0.0, 'angle': -20.0, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner[companion].MoveToBesideTargetActor({'offsetX': -1.0, 'offsetZ': 1.0, 'offsetY': 1.0, 'actor': ActorIdentifier(name="Player"), 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimCompassPoint({'duration': 0.0, 'direction': 2, 'withoutTurn': False, 'immediateTurn': False})
    }

    Camera.LerpDofSettings({'kind': 7, 'TiltShiftCenterX': 0.0, 'BlurRatio': 1.0, 'FocusRange': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftRange': 0.20000000298023224, 'TiltShiftGamma': 2.0, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofBlurRatio': 1.0, 'duration': 0.0, 'TiltShiftDofBackBlurFadeWidth': 0.05000000074505806, 'FocalDistance': 39.0, 'TiltShiftCenterY': 0.7300000190734863, 'BlurSizeScale': 0.800000011920929, 'TiltShiftDofFocalDistance': 39.0, 'TiltShiftDofBackRange': 10.0, 'TiltShiftDofBackCurve': 1.75, 'TiltShiftBlurSizeScale': 0.800000011920929, 'noWait': False})
    FlowControl.InvokeTimeline({'filename': 'CompleteHarmony', 'rate': 1.0})
}

void AfterSetting() {
    GameControl.UnforbidLaunchApplet()

    fork {
        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
        Camera.LookAt3ActorsCenterAsTalker({'weight2': 1.0, 'weight1': 1.0, 'offsetY': 2.0, 'offsetZ': 3.5, 'duration': 0.0, 'chaseRatio': 1.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="ZoraRiverChief"), 'actor3': ActorIdentifier(name="ZoraSeaChief"), 'weight3': 1.0, 'distanceOffset': 0.0, 'offsetX': 0.0})
    } {
        Player.WarpToActorLinkedPointWithCompassPoint({'index': 7, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'direction': 2, 'offsetY': 0.0})
        Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetZ': 0.0, 'actor': ActorIdentifier(name="Player"), 'offsetX': -1.2000000476837158, 'offsetY': 0.800000011920929, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].DisableAutoMovement()
        Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    } {

        fork {
            ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            ZoraSeaChief.SetInterestIkEnabled({'enable': False})
        } {
            ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            ZoraRiverChief.SetInterestIkEnabled({'enable': False})
            ZoraRiverChief.SetFacialExpression({'expression': 'sleep'})
        }

    }

    Audio.SetPlayerVolume({'label': 'PLAYER_SE_BASE_AMBIENCE', 'duration': 1.0, 'volume': 1.0})
    Fade.StartParam({'mode': 0, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0, 'time': 1.0})
}

void talk050() {
    ZoraSeaChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraSea:ZoraSeaChiefTalk050_010', 'facial': 'smile', 'selfTalkAnimName': 'happy', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk018() {
    ZoraSeaChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraSea:ZoraSeaChiefTalk018_010', 'facial': 'surprise', 'selfTalkAnimName': 'surprised_st', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSeaChief.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSeaChiefTalk018_020', 'getAttention': False})
}
