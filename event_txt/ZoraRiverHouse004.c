-------- EventFlow: ZoraRiverHouse004 --------

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: ZoraRiverChief
entrypoint: None()
actions: ['Talk', 'Deactivate', 'AimActor', 'PlayAnimationNoWait', 'PlayAnimationEx', 'MoveToBesideTargetActor', 'SetFacialExpression', 'ResetAim', 'AimCompassPoint', 'LookAtTalker', 'MoveToTargetLinkedPoint']
queries: []
params: None

Actor: ZoraRiver002
entrypoint: None()
actions: ['Talk', 'Deactivate', 'AimActor', 'PlayAnimationNoWait', 'PlayAnimation', 'MoveToTargetLinkedPoint', 'AimPlayer', 'AimCompassPoint', 'PlayAnimationEx', 'MoveToCompassPoint', 'SetFacialExpression']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'PlayAnimationNoWait', 'MoveToCompassPoint', 'SetInterestIkEnabled', 'ResetAim', 'MoveToBesideTargetActor', 'AimCompassPoint']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor']
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

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor', 'Talk', 'PlayAnimationNoWait', 'MoveToBesideTargetActor', 'AimCompassPoint']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: []
queries: []
params: None

Actor: ZoraRiver008
entrypoint: None()
actions: []
queries: []
params: None

void InZoraRiverChiefsRoom() {

    call EvResetCommon.AllReset()

    Player.MoveToCompassPoint({'speed': 0, 'direction': 2, 'distance': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Player.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.SetInterestIkEnabled({'enable': True})

    fork {
        ZoraRiver002.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiverChief.LookAtTalker({'distanceOffset': 0.0, 'offsetZ': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'keep': False})
    }


    fork {
        ZoraRiver002.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver002.Talk({'message': 'scenario/StoryAreaB:InZoraRiverChiefsRoom_010', 'getAttention': True})
    }


    fork {
        ZoraRiver002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'no,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:InZoraRiverChiefsRoom_020', 'getAttention': True})
    }


    fork {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }


    fork {
        ZoraRiverChief.SetFacialExpression({'expression': 'trollface'})
    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'trollface_st,trollface_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:InZoraRiverChiefsRoom_030', 'getAttention': True})
    }


    fork {
        ZoraRiver002.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver002.Talk({'message': 'scenario/StoryAreaB:InZoraRiverChiefsRoom_040', 'getAttention': True})
    }


    fork {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        ZoraRiver002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:InZoraRiverChiefsRoom_050', 'getAttention': True})
    }


    fork {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }


    fork {
        ZoraRiverChief.SetFacialExpression({'expression': 'sleep'})
    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:InZoraRiverChiefsRoom_060', 'getAttention': False})
    }


    fork {
        ZoraRiverChief.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraRiverChief.PlayAnimationEx({'name': 'wait', 'time': 0.4000000059604645, 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiver002.PlayAnimationNoWait({'name': 'sad02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver002.Talk({'message': 'scenario/StoryAreaB:InZoraRiverChiefsRoom_070', 'getAttention': True})
    }


    fork {
        ZoraRiver002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.SetFacialExpression({'expression': 'angry'})
    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:InZoraRiverChiefsRoom_080', 'getAttention': True})
    }


    fork {
        ZoraRiverChief.SetFacialExpression({'expression': 'rage'})
    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'strong_anger', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:InZoraRiverChiefsRoom_100', 'getAttention': True})
    }


    fork {
        ZoraRiverChief.SetFacialExpression({'expression': 'angry'})
    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver002.PlayAnimation({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver002.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    ZoraRiverChief.MoveToBesideTargetActor({'speed': 0, 'actor': ActorIdentifier(name="Player"), 'offsetZ': -1.75, 'offsetX': 0.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:InZoraRiverChiefsRoom_110', 'getAttention': True})
    }

    ZoraRiverChief.ResetAim()
    ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.ResetAim()

    fork {
        Player.MoveToBesideTargetActor({'speed': 0, 'offsetZ': 1.0, 'offsetY': 0.0, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'offsetX': 1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Zelda.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

        fork {
            Timer.Wait({'time': 0.20000000298023224})
            ZoraRiverChief.MoveToTargetLinkedPoint({'index': 0, 'speed': 0, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        } {
            Zelda.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            ZoraRiver002.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    } {
        Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetX': -1.7999999523162842, 'offsetY': 2.5, 'actor': ActorIdentifier(name="ZoraRiver008"), 'offsetZ': 4.199999809265137, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetZ': 2.0, 'offsetY': 2.5999999046325684, 'actor': ActorIdentifier(name="ZoraRiver008"), 'offsetX': -0.4000000059604645, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetZ': 0.6000000238418579, 'offsetX': -1.0, 'actor': ActorIdentifier(name="ZoraRiver008"), 'offsetY': 1.600000023841858, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    ZoraRiverChief.Deactivate()
    ZoraRiver002.PlayAnimationNoWait({'name': 'move01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver002.MoveToCompassPoint({'speed': 0, 'direction': 1, 'distance': 1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    ZoraRiver002.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Partner[companion].AimCompassPoint({'direction': 3, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiver002.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver002.Talk({'message': 'scenario/StoryAreaB:InZoraRiverChiefsRoom_120', 'getAttention': True})
    }


    fork {
        ZoraRiver002.SetFacialExpression({'expression': 'sad'})
        ZoraRiver002.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver002.Talk({'message': 'scenario/StoryAreaB:InZoraRiverChiefsRoom_140', 'getAttention': True})
    }


    fork {
        ZoraRiver002.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver002.Talk({'message': 'scenario/StoryAreaB:InZoraRiverChiefsRoom_150', 'getAttention': True})
    }


    fork {
        ZoraRiver002.SetFacialExpression({'expression': 'sleep'})
    } {
        ZoraRiver002.PlayAnimationEx({'name': 'no01', 'time': 1.5, 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    ZoraRiver002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraRiver002.SetFacialExpression({'expression': 'normal'})
        ZoraRiver002.AimCompassPoint({'direction': 0, 'withoutTurn': False, 'duration': 0.4000000059604645, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Player.AimCompassPoint({'direction': 0, 'withoutTurn': True, 'duration': 0.4000000059604645, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:InZoraRiverChiefsRoom_160', 'getAttention': False})
    }


    fork {
        ZoraRiver002.PlayAnimationEx({'name': 'yes01,wait01', 'time': 0.4000000059604645, 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimCompassPoint({'direction': 3, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        ZoraRiver002.Talk({'message': 'scenario/StoryAreaB:InZoraRiverChiefsRoom_170', 'getAttention': True})
    }

    ZoraRiver002.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        ZoraRiver002.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver002.Talk({'message': 'scenario/StoryAreaB:InZoraRiverChiefsRoom_180', 'getAttention': True})
    }

    ZoraRiver002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver002.PlayAnimationNoWait({'name': 'move01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiver002.MoveToTargetLinkedPoint({'index': 0, 'speed': 0, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    ZoraRiver002.Deactivate()
    EventFlags.SetFlag({'symbol': 'EvB_InZoraRiverChiefsRoomClear', 'value': True})
    Timer.Wait({'time': 0.5})
    Partner[companion].MoveToBesideTargetActor({'offsetY': 1.0, 'offsetZ': 0.0, 'speed': 0, 'actor': ActorIdentifier(name="Player"), 'offsetX': -1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})

    call GeneralSequence.Look_at_Partner()

    Partner[companion].AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    if !EventFlags.CheckFlag({'symbol': 'EvB_InZoraSeaChiefsRoomClear'}) {

        fork {
            Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner[companion].Talk({'message': 'scenario/StoryAreaB:InZoraChiefsRoomBefore_010', 'getAttention': False})
        }

        QuestSystem.SetProgress({'symbol': 'Coast_River:862666161', 'isShowTelopInEvent': False, 'isFrontFade': False})
    } else {

        fork {
            Partner[companion].PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner[companion].Talk({'message': 'scenario/StoryAreaB:InZoraChiefsRoomAfter_010', 'getAttention': False})
        }

        EventFlags.SetFlag({'symbol': 'EvB_DiscordConcertStart', 'value': True})
        QuestSystem.Open({'questKey': 'ZoraChiefsConflict', 'isShowTelopInEvent': False, 'isFrontFade': False})
        QuestSystem.SetProgress({'symbol': 'Coast_River:874443942', 'isShowTelopInEvent': False, 'isFrontFade': False})
    }
}
