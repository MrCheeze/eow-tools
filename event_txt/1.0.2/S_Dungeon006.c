-------- EventFlow: S_Dungeon006 --------

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['WarpToDefaultPosition', 'AimActor', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult4']
params: None

Actor: Area
entrypoint: None()
actions: ['LookAtTalkersLinkedPoint']
queries: []
params: None

Actor: ZoraRiverChief
entrypoint: None()
actions: ['MoveToTargetLinkedPoint', 'Talk', 'PlayAnimationNoWait', 'PlayAnimation', 'AimActor', 'AimPlayer', 'SetFacialExpression', 'ResetFacialExpression', 'AimDegreeAngle', 'SetInterestIkEnabled', 'AimActorLinkedPoint', 'AimToInitialAngle', 'AimCompassPoint', 'ResetAim']
queries: []
params: None

Actor: ZoraSeaChief
entrypoint: None()
actions: ['MoveToTargetLinkedPoint', 'Talk', 'PlayAnimationNoWait', 'PlayAnimation', 'AimActor', 'AimPlayer', 'SetFacialExpression', 'ResetFacialExpression', 'SetInterestIkEnabled', 'AimActorLinkedPoint', 'AimToInitialAngle']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'LookAt3ActorsCenterAsTalker', 'Shake', 'Quake']
queries: []
params: None

Actor: ZoraSea002
entrypoint: None()
actions: ['Talk', 'MoveToBesideTargetActor', 'MoveToCompassPoint', 'Activate', 'SetFacialExpression', 'SetInterestIkEnabled', 'AimActor', 'AimPlayer']
queries: []
params: None

Actor: ZoraRiver002
entrypoint: None()
actions: ['MoveToTargetLinkedPoint', 'Talk', 'PlayAnimationNoWait', 'AimActor', 'SetFacialExpression', 'ResetFacialExpression', 'SetInterestIkEnabled', 'AimPlayer', 'PlayAnimation', 'ChangeSteeringAnimation']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['MoveToCompassPoint', 'ResetAim']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: ZoraRiver009
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'SkipAutoTurn', 'AimPlayer', 'SetFacialExpression', 'SetInterestIkEnabled', 'AimToInitialAngle', 'Activate', 'WarpToActorLinkedPoint', 'MoveToTargetLinkedPoint']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['PlayAnimationNoWait', 'AimCompassPoint', 'AimActor', 'SetInterestIkEnabled', 'WarpToActorLinkedPoint', 'LookAtTalker', 'AimActorLinkedPoint']
queries: []
params: None

Actor: ZoraRiver010
entrypoint: None()
actions: ['Talk', 'SkipAutoTurn', 'AimPlayer', 'PlayAnimationNoWait', 'SetInterestIkEnabled', 'AimToInitialAngle', 'PlayAnimationEx', 'Activate', 'WarpToActorLinkedPoint', 'MoveToTargetLinkedPoint']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'MoveToBesideTargetActor', 'PlayAnimation', 'AimActor', 'DisableAutoMovement', 'AimCompassPoint', 'PlayAnimationNoWait', 'AimPlayer', 'MoveToCompassPoint', 'ResetAim', 'AimActorLinkedPoint']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE', 'StopSE', 'Prepare', 'PlayBGM', 'StopAllBGM', 'SetPlayerVolume']
queries: []
params: None

void ClosedEntrance_JabuJabuHall() {

    call EvResetCommon.AllReset()

    Player.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiverChief.SetFacialExpression({'expression': 'normal'})

    fork {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="ZoraRiverChief"), 'actor2': ActorIdentifier(name="ZoraSeaChief"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        ZoraRiverChief.SetFacialExpression({'expression': 'surprise'})
        Timer.Wait({'time': 1.5})
        ZoraRiverChief.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'ev_risehand,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:ClosedEntrance_JabuJabuHall_010', 'getAttention': False})
    }

    ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Camera.Shake({'duration': 3.0, 'power': 2})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        ZoraRiverChief.SetFacialExpression({'expression': 'surprise'})
        Timer.Wait({'time': 0.30000001192092896})

        fork {
            ZoraRiverChief.AimActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'pointIndex': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            ZoraRiverChief.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_ZORA_RIVER_CHIEF_006_2', 'volume': 1.0, 'pitch': 1.0})
        }

    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraSeaChief.SetFacialExpression({'expression': 'surprise'})
        Timer.Wait({'time': 0.4000000059604645})

        fork {
            ZoraSeaChief.AimActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'pointIndex': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            ZoraSeaChief.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_ZORA_SEA_CHIEF_006_3', 'volume': 1.0, 'pitch': 1.0})
        }

    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_JAB_BAD_ROAR', 'volume': 1.0, 'pitch': 1.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_JAB_BAD_RAMPAGE_RUMBLE', 'volume': 1.0, 'pitch': 1.0})
        Timer.Wait({'time': 2.0})
        Audio.StopSE({'label': 'SE_EV_JAB_BAD_RAMPAGE_RUMBLE', 'duration': 1.0})
    }


    call pd075_Setting()


    fork {

        call pd075_LookZoraRiverChief()

    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:ClosedEntrance_JabuJabuHall_020', 'getAttention': False})
    }

    ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiverChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraSeaChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        ZoraRiverChief.SetFacialExpression({'expression': 'normal'})
        ZoraRiverChief.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:ClosedEntrance_JabuJabuHall_025', 'getAttention': False})
    }

    ZoraRiverChief.ResetFacialExpression()
    ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {

        call pd075_LookZoraSeaChief()

    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.ResetFacialExpression()
        ZoraSeaChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ClosedEntrance_JabuJabuHall_026', 'getAttention': False})
    }

    ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActorLinkedPoint({'pointIndex': 0, 'withoutTurn': False, 'actor': ActorIdentifier(name="Area"), 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].AimActorLinkedPoint({'pointIndex': 0, 'actor': ActorIdentifier(name="Area"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        ZoraRiverChief.AimActorLinkedPoint({'pointIndex': 0, 'withoutTurn': True, 'actor': ActorIdentifier(name="Area"), 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.AimActorLinkedPoint({'pointIndex': 0, 'withoutTurn': True, 'actor': ActorIdentifier(name="Area"), 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Area.LookAtTalkersLinkedPoint({'pointIndex': 2, 'chaseRatio': 0.05999999865889549, 'offsetY': 4.0, 'offsetZ': 4.0, 'duration': 0.4000000059604645, 'distanceOffset': 0.0, 'offsetX': 0.0})
    }


    fork {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ClosedEntrance_JabuJabuHall_030', 'getAttention': False})
    }

    ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="ZoraRiverChief"), 'actor2': ActorIdentifier(name="ZoraSeaChief"), 'actor3': ActorIdentifier(name="Zelda"), 'weight3': 1.0, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    ZoraRiverChief.AimActorLinkedPoint({'pointIndex': 0, 'withoutTurn': False, 'actor': ActorIdentifier(name="Area"), 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {

        call pd075_LookZoraRiverChief()

    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:ClosedEntrance_JabuJabuHall_040', 'getAttention': False})
    }

    ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {

        call pd075_LookZoraSeaChief()

    } {
        Timer.Wait({'time': 1.0})
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ClosedEntrance_JabuJabuHall_50', 'getAttention': False})
    }

    ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {

        call pd075_LookZoraRiverChief()

    } {
        ZoraRiverChief.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        ZoraRiverChief.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        ZoraSeaChief.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    EventFlags.SetFlag({'value': True, 'symbol': 'EvB_ClosedEntrance_JabuJabuHall'})
    QuestSystem.SetProgress({'symbol': 'Coast_River:2364775705', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void EvB_ReturnFromBoundaryWorld() {

    call EvResetCommon.AllReset()

    Camera.LookAt3ActorsCenterAsTalker({'weight2': 2.0, 'weight3': 2.0, 'offsetZ': 1.0, 'distanceOffset': 2.0, 'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="ZoraSeaChief"), 'actor3': ActorIdentifier(name="ZoraRiverChief"), 'offsetX': 0.5, 'weight1': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetY': 0.0})

    fork {
        ZoraRiverChief.SetInterestIkEnabled({'enable': True})
    } {
        ZoraRiver002.SetInterestIkEnabled({'enable': False})
    } {
        ZoraSeaChief.SetInterestIkEnabled({'enable': False})
    }

    Audio.Prepare({'label': 'BGM_EV_COMMON5', 'kind': 0, 'volume': 1.0})

    fork {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.AimDegreeAngle({'angle': 30.0, 'duration': 0.10000000149011612, 'withoutTurn': False, 'immediateTurn': False})
        ZoraRiverChief.SetFacialExpression({'expression': 'smile'})
        ZoraRiverChief.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.10000000149011612, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiver002.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.10000000149011612, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraRiver002.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.10000000149011612, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraSeaChief.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner[companion].DisableAutoMovement()
    Player.SetInterestIkEnabled({'enable': True})
    Timer.Wait({'time': 2.0})

    fork {

        call GeneralSequence.EvMapWarpIn()

        Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetY': 1.0, 'customSpeed': 10.0, 'offsetZ': 0.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': -1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0})

        fork {
            Player.AimCompassPoint({'direction': 2, 'withoutTurn': False, 'duration': 0.4000000059604645, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Partner[companion].AimCompassPoint({'direction': 2, 'withoutTurn': False, 'duration': 0.4000000059604645, 'immediateTurn': False})
            Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } {
        Timer.Wait({'time': 2.0})

        fork {
            Timer.Wait({'time': 0.20000000298023224})
            ZoraRiverChief.ResetFacialExpression()
            ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.3499999940395355})
            ZoraRiver002.ResetFacialExpression()
            ZoraRiver002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            ZoraRiver002.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Timer.Wait({'time': 0.5})
            ZoraRiver002.SetFacialExpression({'expression': 'smile'})
            ZoraRiver002.PlayAnimationNoWait({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } {
        Timer.Wait({'time': 0.5})
        ZoraSeaChief.SetFacialExpression({'expression': 'sleep'})
        ZoraSeaChief.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaChief.SetFacialExpression({'expression': 'normal'})
        ZoraSeaChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.5})
        Camera.LookAt3ActorsCenterAsTalker({'weight2': 2.0, 'weight3': 2.0, 'offsetZ': 1.0, 'distanceOffset': 2.0, 'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="ZoraSeaChief"), 'actor3': ActorIdentifier(name="ZoraRiverChief"), 'offsetX': 0.5, 'weight1': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetY': 0.0})
    }

    Timer.Wait({'time': 0.20000000298023224})

    fork {
        ZoraRiver002.Talk({'message': 'scenario/StoryAreaB:ReconciliationConcert_010', 'getAttention': False})
    } {

        call _pd087_ZoraRiv002()

    }

    ZoraRiverChief.SetFacialExpression({'expression': 'smile'})
    ZoraRiverChief.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:ReconciliationConcert_020', 'getAttention': False})
    } {

        call _pd087_ZoraRivChief()

    }

    Timer.Wait({'time': 0.5})
    ZoraSeaChief.SetFacialExpression({'expression': 'sleep'})
    ZoraSeaChief.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ReconciliationConcert_030', 'getAttention': False})
    } {

        call _pd087_ZoraSeaChief()

    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraRiverChief.ResetFacialExpression()
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.SetInterestIkEnabled({'enable': True})
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        ZoraRiver002.ResetFacialExpression()
        ZoraRiver002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver002.SetInterestIkEnabled({'enable': True})
        ZoraRiver002.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaB:ReconciliationConcert_035', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})

        call GeneralSequence.Look_at_Partner()

    } {
        Timer.Wait({'time': 0.6000000238418579})
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="Partner"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        Player.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }


    fork {
        Player.SetInterestIkEnabled({'enable': False})

        call GeneralSequence.ZeldaTalkMotion()

    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraRiverChief.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        ZoraRiver002.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaChief.ResetFacialExpression()
        ZoraSeaChief.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Player.SetInterestIkEnabled({'enable': True})
    Timer.Wait({'time': 0.699999988079071})

    fork {
        ZoraSeaChief.SetFacialExpression({'expression': 'smile'})
    } {
        ZoraRiverChief.SetFacialExpression({'expression': 'smile'})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        ZoraRiver002.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ReconciliationConcert_040', 'getAttention': False})
    } {

        call _pd087_ZoraSeaChief()

    }

    ZoraSeaChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Audio.PlayBGM({'label': 'BGM_EV_COMMON5', 'volume': 1.0, 'ignoreSkip': True})
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ReconciliationConcert_040_02', 'getAttention': False})
        ZoraSeaChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.SetPlayerVolume({'label': 'PLAYER_SE_BASE_AMBIENCE', 'volume': 0.5, 'duration': 0.5})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        ZoraRiverChief.ResetAim()
        ZoraRiverChief.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.699999988079071})

    fork {
        ZoraSeaChief.SetFacialExpression({'expression': 'sleep'})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'sad_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ReconciliationConcert_050', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.5})
        ZoraRiverChief.ResetFacialExpression()
        ZoraRiverChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.800000011920929})
        ZoraRiver002.ResetFacialExpression()
        ZoraRiver002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver002.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    ZoraSeaChief.ResetFacialExpression()
    ZoraSeaChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ReconciliationConcert_050_02', 'getAttention': False})
    ZoraSeaChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraRiverChief.SetInterestIkEnabled({'enable': False})
    ZoraRiverChief.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:ReconciliationConcert_060', 'getAttention': False})
    } {

        call _pd087_ZoraSeaChief()

    } {
        Timer.Wait({'time': 0.5})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.699999988079071})
        ZoraRiver002.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    ZoraRiverChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:ReconciliationConcert_060_02', 'getAttention': False})
    ZoraRiverChief.SetInterestIkEnabled({'enable': True})
    ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver002.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    ZoraRiver002.SetFacialExpression({'expression': 'smile'})
    ZoraRiver002.SetInterestIkEnabled({'enable': False})
    ZoraRiver002.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiver002.Talk({'message': 'scenario/StoryAreaB:ReconciliationConcert_061', 'getAttention': False})
    } {

        call _pd087_ZoraRiv002()

    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.20000000298023224})
        ZoraSeaChief.SetFacialExpression({'expression': 'surprise'})

        fork {
            ZoraSeaChief.PlayAnimation({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_ZORA_SEA_CHIEF_006_4', 'volume': 1.0, 'pitch': 1.0})
        }

    } {
        Timer.Wait({'time': 0.6499999761581421})
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.20000000298023224})
        ZoraRiverChief.SetFacialExpression({'expression': 'surprise'})

        fork {
            ZoraRiverChief.PlayAnimation({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_ZORA_RIVER_CHIEF_006_3', 'volume': 1.0, 'pitch': 1.0})
        }

    }

    Timer.Wait({'time': 0.5})

    fork {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ReconciliationConcert_062', 'getAttention': False})
    } {
        ZoraRiver002.ResetFacialExpression()
        ZoraRiver002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'angry'})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'angry_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {

        call _pd087_ZoraSeaChief()

    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraRiver002.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'offsetX': 0.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    ZoraRiverChief.PlayAnimationNoWait({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {

        fork {
            ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:ReconciliationConcert_070', 'getAttention': False})
        } {

            call _pd087_ZoraRivChief()

        }

    } {
        Timer.Wait({'time': 0.6000000238418579})
        ZoraRiver002.SetFacialExpression({'expression': 'surpeise'})
        ZoraRiver002.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver002.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.20000000298023224})
    ZoraRiver002.SetFacialExpression({'expression': 'smile'})
    Audio.PlayOneshotSystemSE({'label': 'SEQ_VO_ZORA_M013_1_002_6', 'volume': 1.0, 'pitch': 1.0})
    ZoraRiver002.PlayAnimation({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 2.0})
    ZoraSeaChief.SetFacialExpression({'expression': 'sleep'})
    ZoraSeaChief.PlayAnimation({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSeaChief.ResetFacialExpression()
    Timer.Wait({'time': 0.20000000298023224})
    ZoraSeaChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ReconciliationConcert_075', 'getAttention': False})
    } {

        call _pd087_ZoraSeaChief()

    } {
        Timer.Wait({'time': 0.6000000238418579})
        ZoraRiverChief.ResetFacialExpression()
        ZoraRiverChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        ZoraRiver002.ResetFacialExpression()
        ZoraRiver002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver002.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    ZoraSeaChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    ZoraSeaChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraSeaChief.SetFacialExpression({'expression': 'smile'})
    ZoraSeaChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ReconciliationConcert_080', 'getAttention': False})
    } {

        call _pd087_ZoraSeaChief()

    }

    ZoraSeaChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.20000000298023224})
    ZoraRiverChief.SetFacialExpression({'expression': 'smile'})

    fork {
        ZoraRiverChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.20000000298023224})
        ZoraRiverChief.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {

        call _pd087_ZoraRivChief()

    } {
        Timer.Wait({'time': 0.5})
        ZoraRiver002.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.20000000298023224})
        ZoraRiver002.SetFacialExpression({'expression': 'smile'})
        ZoraRiver002.PlayAnimation({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner[companion].PlayAnimation({'name': 'ev_think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Camera.Quake({'initPower': 0, 'targetPower': 2, 'duration': 1.0})
        Timer.Wait({'time': 1.0})
        Camera.Quake({'initPower': 2, 'targetPower': 0, 'duration': 1.0})
    } {
        Timer.Wait({'time': 1.0})
        Player.AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.0})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraSeaChief.SetFacialExpression({'expression': 'surprise'})
        ZoraSeaChief.PlayAnimation({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        ZoraRiverChief.SetFacialExpression({'expression': 'surprise'})
        ZoraRiverChief.PlayAnimation({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.75})
        ZoraRiver002.SetFacialExpression({'expression': 'surprise'})
        ZoraRiver002.PlayAnimation({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_JAB_RETURN_RUMBLE', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 1.0})
    ZoraSea002.Activate()
    ZoraSea002.SetInterestIkEnabled({'enable': False})

    fork {
        ZoraSea002.Talk({'message': 'scenario/StoryAreaB:ReconciliationConcert_090', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        ZoraSea002.MoveToBesideTargetActor({'speed': 1, 'offsetX': 1.5, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'offsetZ': 2.25, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        ZoraSea002.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraSea002.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})

        fork {
            Timer.Wait({'time': 0.10000000149011612})
            ZoraRiverChief.ResetFacialExpression()
            ZoraRiverChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            ZoraSeaChief.ResetFacialExpression()
            ZoraSeaChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.30000001192092896})
            ZoraRiver002.ResetFacialExpression()
            ZoraRiver002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            ZoraRiver002.AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        ZoraSea002.Activate()
        Timer.Wait({'time': 1.0})
    }

    Timer.Wait({'time': 0.5})

    fork {

        fork {
            Timer.Wait({'time': 0.10000000149011612})
            ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        fork {
            Timer.Wait({'time': 0.20000000298023224})
            ZoraSeaChief.SetFacialExpression({'expression': 'sleep'})
            Audio.PlayOneshotSystemSE({'label': 'VO_ZORA_SEA_CHIEF_001_4', 'volume': 1.0, 'pitch': 1.0})
            ZoraSeaChief.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            ZoraSeaChief.ResetFacialExpression()
        } {
            Timer.Wait({'time': 0.5})
            ZoraRiverChief.SetFacialExpression({'expression': 'smile'})
            Audio.PlayOneshotSystemSE({'label': 'VO_ZORA_RIVER_CHIEF_007_6', 'volume': 1.0, 'pitch': 1.0})
            ZoraRiverChief.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraRiver002.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'offsetX': -0.75, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraRiver002.SetFacialExpression({'expression': 'smile'})
        ZoraRiver002.PlayAnimation({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.0})

        fork {
            Player.SetInterestIkEnabled({'enable': False})
            Player.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        }

    }

    ZoraRiver002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        ZoraSeaChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.2999999523162842})
        ZoraRiverChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraRiver002.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        ZoraSea002.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.20000000298023224})
    ZoraSeaChief.SetFacialExpression({'expression': 'smile'})
    ZoraSeaChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ReconciliationConcert_100', 'getAttention': False})
    } {
        Partner.SetInterestIkEnabled({'enable': True})
        Player.SetInterestIkEnabled({'enable': True})

        call _pd087_ZoraSeaChief()

    }

    ZoraRiverChief.SetFacialExpression({'expression': 'smile'})
    ZoraRiverChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:ReconciliationConcert_110', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        ZoraSeaChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {

        call _pd087_ZoraRivChief()

    }

    ZoraRiverChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiver002.SetFacialExpression({'expression': 'smile'})
        ZoraRiver002.ChangeSteeringAnimation({'walk': 'move01', 'run': 'move01', 'idle': '', 'layer': 0})
        ZoraRiver002.MoveToTargetLinkedPoint({'tolerance': 0.0, 'customSpeed': 1.0, 'speed': 1, 'index': 1, 'timeOut': 2.0, 'actor': ActorIdentifier(name="ZoraRiver002"), 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        ZoraSea002.SetFacialExpression({'expression': 'smile'})
        ZoraSea002.MoveToCompassPoint({'tolerance': 0.0, 'customSpeed': 1.0, 'speed': 1, 'direction': 0, 'distance': 5.0, 'timeOut': 2.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'smile'})
        ZoraSeaChief.MoveToTargetLinkedPoint({'speed': 0, 'tolerance': 0.0, 'customSpeed': 1.0, 'actor': ActorIdentifier(name="ZoraRiver002"), 'timeOut': 2.0, 'index': 0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        ZoraRiverChief.SetFacialExpression({'expression': 'smile'})
        ZoraRiverChief.MoveToTargetLinkedPoint({'speed': 0, 'tolerance': 0.0, 'customSpeed': 1.0, 'timeOut': 2.0, 'actor': ActorIdentifier(name="ZoraRiver002"), 'index': 0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Zelda.ResetAim()
        Zelda.MoveToCompassPoint({'speed': 0, 'tolerance': 0.0, 'customSpeed': 1.0, 'direction': 0, 'distance': 5.0, 'timeOut': 2.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Timer.Wait({'time': 1.0})
        Audio.StopAllBGM({'duration': 2.0})
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
    } {
        Partner[companion].ResetAim()
        Partner[companion].MoveToCompassPoint({'speed': 0, 'tolerance': 0.0, 'customSpeed': 1.0, 'direction': 0, 'distance': 5.0, 'timeOut': 2.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Timer.Wait({'time': 0.5})
        Audio.SetPlayerVolume({'label': 'PLAYER_SE_BASE_AMBIENCE', 'duration': 0.5, 'volume': 1.0})
    }

    GameControl.RequestLevelJump({'level': 'Field', 'locator': 'EvB_ReconciliationConcert', 'offsetX': 0.0, 'offsetZ': 0.0})
    QuestSystem.SetProgress({'symbol': 'Coast_River:4018665463', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvB_WedgeActive_AreaB'})
}

void BlockedEntrance() {

    call EvResetCommon.AllReset()


    call Setting()


    call LookAroundInFrontDoor()


    call EnterTheDoorAndComeOut()


    call ZorasTalk()


    call ZeldaAndZoraTalk1()


    call ZeldaAndZoraTalk2()

    ZoraRiver009.SkipAutoTurn()
    ZoraRiver010.SkipAutoTurn()
    EventFlags.SetFlag({'value': True, 'symbol': 'EvB_BlockedEntrance'})
    QuestSystem.SetProgress({'symbol': 'Coast_River:3080686713', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvB_InZoraRiverChiefsRoom'})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvB_InZoraSeaChiefsRoom'})
}

void _pd087_ZoraRiv002() {

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void _pd087_ZoraRivChief() {

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void _pd087_ZoraSeaChief() {

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void LookAroundInFrontDoor() {
    Partner[companion].AimActor({'actor': ActorIdentifier(name="Area"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetY': -1.2000000476837158, 'actor': ActorIdentifier(name="Area"), 'offsetZ': 0.5, 'offsetX': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_PARTNER_MOVE', 'volume': 1.0, 'pitch': 1.0})
    }


    call GeneralSequence.Look_at_Partner()


    fork {
        Partner[companion].PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 3.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_PARTNER_LOOKAROUND', 'volume': 1.0, 'pitch': 1.0})
    }


    fork {
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.0})
    }


    fork {
        Partner[companion].PlayAnimation({'name': 'appeal02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_PARTNER_APPEAL', 'volume': 1.0, 'pitch': 1.0})
    }

}

void Setting() {
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    Player.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'index': 3, 'offsetY': 0.0})
    Player.AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    Partner.WarpToDefaultPosition({'position': 1, 'avoidWall': False, 'avoidPlayer': False})

    fork {
        ZoraRiver009.SetInterestIkEnabled({'enable': False})
    } {
        ZoraRiver010.SetInterestIkEnabled({'enable': False})
    }

    Player.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].DisableAutoMovement()
    Player.LookAtTalker({'keep': True, 'offsetY': 0.0, 'duration': 0.0, 'offsetZ': -1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0})
    Timer.Wait({'time': 1.5})
    Fade.StartPreset({'preset': 'FadeInSlow'})
}

void EnterTheDoorAndComeOut() {
    Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetZ': -5.0, 'actor': ActorIdentifier(name="Area"), 'offsetY': -1.2000000476837158, 'offsetX': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Timer.Wait({'time': 2.5})
    Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetY': 1.0, 'offsetX': 0.0, 'actor': ActorIdentifier(name="Player"), 'offsetZ': -1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaB:BlockedEntrance_010', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'appeal02,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaB:BlockedEntrance_020', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.5})
}

void ZorasTalk() {

    fork {
        ZoraRiver009.Activate()
        ZoraRiver009.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'index': 5, 'offsetY': 0.0})
    } {
        ZoraRiver010.Activate()
        ZoraRiver010.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'index': 6, 'offsetY': 0.0})
    }


    fork {
        ZoraRiver009.SetFacialExpression({'expression': 'sad'})
        ZoraRiver009.PlayAnimationNoWait({'name': 'sad02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver009.Talk({'message': 'scenario/StoryAreaB:BlockedEntrance_030', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.5})

        call LookZoraRiver009first()

    }


    fork {
        ZoraRiver009.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver009.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        Timer.Wait({'time': 1.0})
        Camera.LookAt3ActorsCenterAsTalker({'chaseRatio': 0.05000000074505806, 'offsetZ': -1.5, 'actor1': ActorIdentifier(name="ZoraRiver009"), 'actor2': ActorIdentifier(name="ZoraRiver010"), 'actor3': ActorIdentifier(name="Player"), 'offsetX': -2.0, 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'distanceOffset': 0.0, 'offsetY': 0.0})
    } {
        ZoraRiver009.MoveToTargetLinkedPoint({'speed': 0, 'actor': ActorIdentifier(name="Area"), 'index': 9, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        ZoraRiver010.MoveToTargetLinkedPoint({'speed': 0, 'actor': ActorIdentifier(name="Area"), 'index': 10, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }


    fork {
        ZoraRiver009.AimPlayer({'duration': 0.5, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraRiver009.SetFacialExpression({'expression': 'normal'})
        ZoraRiver009.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver009.Talk({'getAttention': False, 'message': 'scenario/StoryAreaB:BlockedEntrance_030_02'})
    } {
        Timer.Wait({'time': 1.0})
        ZoraRiver010.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    ZoraRiver009.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void ZeldaAndZoraTalk1() {
    Fade.StartPreset({'preset': 'FadeOutSlowB'})

    fork {
        ZoraRiver009.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'index': 7, 'offsetY': 0.0})
    } {
        ZoraRiver010.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'index': 8, 'offsetY': 0.0})
    } {
        Player.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'index': 4, 'offsetY': 0.0})
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraRiver009"), 'duration': 0.0, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner.WarpToDefaultPosition({'position': 1, 'avoidWall': False, 'avoidPlayer': False})
    }

    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="ZoraRiver009"), 'actor2': ActorIdentifier(name="ZoraRiver010"), 'actor3': ActorIdentifier(name="Player"), 'chaseRatio': 1.0, 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 0.5})
    Fade.StartPreset({'preset': 'FadeInSlow'})

    fork {

        call LookZoraRiver010()

    } {
        ZoraRiver010.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver010.Talk({'message': 'scenario/StoryAreaB:BlockedEntrance_040', 'getAttention': False})
        ZoraRiver010.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {

        call LookZoraRiver009()

    } {
        ZoraRiver009.SetFacialExpression({'expression': 'sad'})
        ZoraRiver009.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver009.Talk({'message': 'scenario/StoryAreaB:BlockedEntrance_050', 'getAttention': False})
        ZoraRiver009.SetFacialExpression({'expression': 'normal'})
        ZoraRiver009.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    call GeneralSequence.ZeldaTalkMotion()


    fork {

        call LookZoraRiver010()

    } {
        ZoraRiver010.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver010.Talk({'message': 'scenario/StoryAreaB:BlockedEntrance_060', 'getAttention': False})
        ZoraRiver010.PlayAnimationEx({'name': 'wait01', 'time': 0.5, 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void ZeldaAndZoraTalk2() {

    fork {

        call LookZoraRiver009()

    } {
        ZoraRiver009.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver009.Talk({'message': 'scenario/StoryAreaB:BlockedEntrance_Q1_010', 'getAttention': False})
        ZoraRiver009.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        Event556:

        call TalkAboutRiver()

        Event601:

        call AskQuestions()

        switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
          case 0:
            goto Event556
          case 1:
            Event555:

            call TalkAboutSea()

            goto Event601
          case 2:
            Event554:

            call TalkEnd()

        }
      case 1:
        goto Event555
      case 2:
        goto Event554
    }
}

void TalkAboutRiver() {

    fork {

        call LookZoraRiver009()

    } {
        ZoraRiver009.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver009.Talk({'message': 'scenario/StoryAreaB:BlockedEntrance_Q1_A1_010', 'getAttention': False})
        ZoraRiver009.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void TalkAboutSea() {

    fork {

        call LookZoraRiver010()

    } {
        ZoraRiver010.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver010.Talk({'message': 'scenario/StoryAreaB:BlockedEntrance_Q1_A2_010', 'getAttention': False})
        ZoraRiver010.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void TalkEnd() {

    fork {

        call LookZoraRiver009()

    } {
        ZoraRiver009.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver009.Talk({'message': 'scenario/StoryAreaB:BlockedEntrance_Q1_A3_010', 'getAttention': False})
        ZoraRiver009.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        ZoraRiver009.AimToInitialAngle({'duration': 0.5, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        ZoraRiver010.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    Camera.LookAt2ActorsCenterAsTalker({'actor2': ActorIdentifier(name="Player"), 'actor1': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {

        call GeneralSequence.Look_at_Partner()

    }

    Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaB:BlockedEntrance_070', 'getAttention': False})
}

void AskQuestions() {

    fork {

        call LookZoraRiver009()

    } {
        ZoraRiver009.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver009.Talk({'message': 'scenario/StoryAreaB:BlockedEntrance_Q1_020', 'getAttention': False})
        ZoraRiver009.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void LookZoraRiver009() {

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'actor': ActorIdentifier(name="ZoraRiver009"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiver009"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void LookZoraRiver010() {

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiver010"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiver010"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void LookZoraRiver009first() {

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraRiver009"), 'duration': 1.2000000476837158, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetX': -1.0, 'offsetZ': 0.0, 'actor': ActorIdentifier(name="Player"), 'offsetY': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiver009"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void pd075_Setting() {
    Fade.StartPreset({'preset': 'FadeOutSlowB'})

    fork {
        Player.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'index': 1, 'offsetY': 0.0})

        fork {
            Player.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Player.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="ZoraRiverChief"), 'actor2': ActorIdentifier(name="ZoraSeaChief"), 'actor3': ActorIdentifier(name="Zelda"), 'weight3': 1.0, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        } {
            Partner[companion].MoveToBesideTargetActor({'actor': ActorIdentifier(name="Player"), 'offsetX': 1.0, 'offsetY': 1.0, 'offsetZ': 1.0, 'speed': 1, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        }

    } {

        fork {
            ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    Fade.StartPreset({'preset': 'FadeInSlow'})
}

void pd075_LookZoraRiverChief() {

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void pd075_LookZoraSeaChief() {

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}
