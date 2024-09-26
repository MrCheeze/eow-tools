-------- EventFlow: ZoraSeaVillage --------

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: ZoraSeaChief
entrypoint: None()
actions: ['Talk', 'Destroy', 'PlayAnimationNoWait', 'MoveToTargetActor', 'MoveToTargetLinkedPoint', 'AimActor', 'LookAtTalker', 'SetFacialExpression', 'AimCompassPoint']
queries: []
params: None

Actor: ZoraSea002
entrypoint: None()
actions: ['Talk', 'Destroy', 'PlayAnimationNoWait', 'SetFacialExpression', 'AimPlayer', 'MoveToTargetLinkedPoint', 'AimActor', 'AimCompassPoint', 'ResetAim', 'SetInterestIkEnabled', 'MoveToCompassPoint', 'PlayAnimationEx', 'MoveToBesideTargetActor']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: []
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['MoveToCompassPoint', 'AimActor', 'SetInterestIkEnabled', 'PlayAnimationNoWait', 'ResetAim', 'AimCompassPoint']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['Open', 'SetProgress']
queries: []
params: None

Actor: ZoraSea004
entrypoint: None()
actions: ['AimActor', 'PlayAnimationNoWait', 'SetInterestIkEnabled', 'SkipAutoTurn', 'AimCompassPoint']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'AimActor', 'MoveToBesideTargetActor', 'PlayAnimationNoWait', 'PlayAnimationEx']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: []
queries: []
params: None

void InZoraSeaChiefsRoom() {

    call EvResetCommon.AllReset()

    Player.AimCompassPoint({'direction': 2, 'duration': 0.20000000298023224, 'withoutTurn': False, 'immediateTurn': False})
    Player.MoveToCompassPoint({'direction': 2, 'distance': 0.9375, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Player.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Player.SetInterestIkEnabled({'enable': True})
    } {
        ZoraSea002.SetInterestIkEnabled({'enable': True})
    } {
        ZoraSea004.SetInterestIkEnabled({'enable': False})
    }


    fork {
        ZoraSea004.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSea002.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.LookAtTalker({'distanceOffset': 0.0, 'offsetZ': 2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'keep': False})
    }


    fork {
        ZoraSea002.SetFacialExpression({'expression': 'sad'})
    } {
        ZoraSea002.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea002.Talk({'message': 'scenario/StoryAreaB:InZoraSeaChiefsRoom_010', 'getAttention': True})
    }


    fork {
        ZoraSea002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'sad'})
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:InZoraSeaChiefsRoom_020', 'getAttention': True})
    }


    fork {
        ZoraSeaChief.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:InZoraSeaChiefsRoom_030', 'getAttention': True})
    }


    fork {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea002.SetFacialExpression({'expression': 'happy'})
    } {
        ZoraSea002.PlayAnimationNoWait({'name': 'yes01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea002.Talk({'message': 'scenario/StoryAreaB:InZoraSeaChiefsRoom_040', 'getAttention': True})
    }


    fork {
        ZoraSea002.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraSea002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'happy', 'blendFrame': -1, 'layer': 0, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:InZoraSeaChiefsRoom_050', 'getAttention': True})
    }

    ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.20000000298023224})
    ZoraSeaChief.AimCompassPoint({'direction': 0, 'withoutTurn': False, 'duration': 0.4000000059604645, 'immediateTurn': False})

    fork {
        ZoraSeaChief.SetFacialExpression({'expression': 'trollface'})
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'think', 'blendFrame': -1, 'layer': 0, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:InZoraSeaChiefsRoom_060', 'getAttention': True})
    }


    fork {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraSeaChief.SetFacialExpression({'expression': 'normal'})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.20000000298023224})
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSea002.SetFacialExpression({'expression': 'sad'})
    } {
        ZoraSea002.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea002.Talk({'message': 'scenario/StoryAreaB:InZoraSeaChiefsRoom_070', 'getAttention': True})
    }

    ZoraSea002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSeaChief.SetFacialExpression({'expression': 'angry'})
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'angry_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:InZoraSeaChiefsRoom_080', 'getAttention': True})
    }


    fork {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.20000000298023224})
        ZoraSeaChief.AimCompassPoint({'direction': 0, 'withoutTurn': False, 'duration': 0.4000000059604645, 'immediateTurn': False})
    } {
        ZoraSea004.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        ZoraSeaChief.SetFacialExpression({'expression': 'trollface'})
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'appalling_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:InZoraSeaChiefsRoom_090', 'getAttention': True})
    }

    ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.20000000298023224})
    ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        ZoraSeaChief.SetFacialExpression({'expression': 'angry'})
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:InZoraSeaChiefsRoom_100', 'getAttention': True})
    }


    fork {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.20000000298023224})
    } {
        ZoraSea002.PlayAnimationEx({'time': 1.5, 'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSea002.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSea004.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    ZoraSeaChief.MoveToTargetActor({'distance': 2.0, 'actor': ActorIdentifier(name="Zelda"), 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})

    fork {
        ZoraSeaChief.SetFacialExpression({'expression': 'angry'})
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:InZoraSeaChiefsRoom_110', 'getAttention': True})
    }

    ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.ResetAim()

    fork {
        Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetY': 0.800000011920929, 'offsetZ': 1.7999999523162842, 'actor': ActorIdentifier(name="ZoraSea004"), 'offsetX': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.MoveToCompassPoint({'direction': 3, 'distance': 1.5, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Player.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        ZoraSeaChief.MoveToTargetLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="Area"), 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        ZoraSea002.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSea004.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    ZoraSeaChief.Destroy()
    Timer.Wait({'time': 0.4000000059604645})
    ZoraSea002.MoveToBesideTargetActor({'actor': ActorIdentifier(name="Player"), 'speed': 0, 'offsetX': 3.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    ZoraSea002.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        ZoraSea004.AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSea002.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraSea002.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea002.Talk({'message': 'scenario/StoryAreaB:InZoraSeaChiefsRoom_120', 'getAttention': True})
    }


    fork {
        ZoraSea002.SetFacialExpression({'expression': 'sad'})
    } {
        ZoraSea002.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea002.Talk({'message': 'scenario/StoryAreaB:InZoraSeaChiefsRoom_140', 'getAttention': True})
    }


    fork {
        ZoraSea002.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraSea002.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea002.Talk({'message': 'scenario/StoryAreaB:InZoraSeaChiefsRoom_150', 'getAttention': True})
    }

    ZoraSea002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.6000000238418579})
        Player.AimCompassPoint({'direction': 0, 'withoutTurn': True, 'duration': 0.4000000059604645, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Area"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraSea002.AimCompassPoint({'direction': 0, 'withoutTurn': False, 'duration': 0.4000000059604645, 'immediateTurn': False})
        ZoraSea002.SetFacialExpression({'expression': 'surprise'})
        Timer.Wait({'time': 0.6000000238418579})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        ZoraSea004.AimActor({'actor': ActorIdentifier(name="Area"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.Talk({'getAttention': True, 'message': 'scenario/StoryAreaB:InZoraSeaChiefsRoom_160'})
    }


    fork {
        Player.AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSea002.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraSea002.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea002.Talk({'message': 'scenario/StoryAreaB:InZoraSeaChiefsRoom_170', 'getAttention': False})
    }

    ZoraSea002.ResetAim()

    fork {
        ZoraSea002.MoveToCompassPoint({'direction': 3, 'distance': 1.2000000476837158, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        ZoraSea004.AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    ZoraSea002.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        ZoraSea002.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea002.Talk({'message': 'scenario/StoryAreaB:InZoraSeaChiefsRoom_180', 'getAttention': True})
    }

    ZoraSea002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSea002.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        ZoraSea002.MoveToTargetLinkedPoint({'index': 0, 'speed': 1, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        ZoraSea002.Destroy()
    } {
        ZoraSea004.AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.6000000238418579, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 1.5})
    ZoraSea004.AimCompassPoint({'direction': 0, 'duration': 0.6000000238418579, 'withoutTurn': False, 'immediateTurn': False})
    ZoraSea004.SkipAutoTurn()
    EventFlags.SetFlag({'symbol': 'EvB_InZoraSeaChiefsRoomClear', 'value': True})
    Timer.Wait({'time': 0.4000000059604645})
    Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetY': 1.0, 'offsetX': 2.0, 'offsetZ': 0.0, 'actor': ActorIdentifier(name="Player"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})

    fork {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetY': -0.5, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    if !EventFlags.CheckFlag({'symbol': 'EvB_InZoraRiverChiefsRoomClear'}) {

        fork {
            Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner[companion].Talk({'message': 'scenario/StoryAreaB:InZoraChiefsRoomBefore_010', 'getAttention': False})
        }

        QuestSystem.SetProgress({'symbol': 'Coast_River:1174189887', 'isShowTelopInEvent': False, 'isFrontFade': False})
    } else {

        fork {
            Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner[companion].Talk({'message': 'scenario/StoryAreaB:InZoraChiefsRoomAfter_010', 'getAttention': False})
        }

        Partner[companion].PlayAnimationEx({'time': 2.0, 'name': 'appeal02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EventFlags.SetFlag({'symbol': 'EvB_DiscordConcertStart', 'value': True})
        QuestSystem.Open({'questKey': 'ZoraChiefsConflict', 'isShowTelopInEvent': False, 'isFrontFade': False})
        QuestSystem.SetProgress({'symbol': 'Coast_River:874443942', 'isShowTelopInEvent': False, 'isFrontFade': False})
    }
}
