-------- EventFlow: GerudoPalace --------

Actor: GerudoChiefsDaughter
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'MoveToCompassPoint', 'AimActor', 'Deactivate', 'AimPlayer', 'MoveToBesideTargetActor', 'SetInterestIkEnabled', 'PlayAnimation', 'AimCompassPoint', 'ResetAim']
queries: []
params: None

Actor: GerudoAide000
entrypoint: None()
actions: ['Talk', 'PlayAnimation', 'PlayAnimationNoWait', 'Deactivate', 'AimActor', 'AimCompassPoint', 'SetFacialExpression', 'LookAtTalker', 'ResetFacialExpression', 'SetInterestIkEnabled', 'AimToInitialAngle']
queries: []
params: None

Actor: GerudoChief
entrypoint: None()
actions: ['Talk', 'Deactivate', 'PlayAnimationNoWait', 'PlayAnimation', 'MoveToCompassPoint', 'SetInterestIkEnabled', 'SetFacialExpression', 'LookAtTalker', 'AimActor', 'AimCompassPoint', 'PlayAnimationEx', 'AimToInitialAngle']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
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

Actor: Zelda
entrypoint: None()
actions: ['AimActor', 'MoveToTargetLinkedPoint', 'MoveToBesideTargetActor', 'AimCompassPoint', 'ResetAim']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['AimActor', 'ResetAim']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'SetInterestIkEnabled', 'AimCompassPoint', 'MoveToBesideTargetActor', 'WarpToActorLinkedPointWithCompassPoint']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: []
queries: []
params: None

Actor: GerudoSoldier012
entrypoint: None()
actions: ['Talk', 'Activate', 'Deactivate', 'PlayAnimation', 'PlayAnimationNoWait', 'AimActor', 'MoveToTargetLinkedPoint', 'ResetAim']
queries: []
params: None

Actor: GerudoSoldier020
entrypoint: None()
actions: ['Deactivate', 'AimActor', 'Activate', 'PlayAnimationNoWait', 'MoveToTargetLinkedPoint', 'ResetAim']
queries: []
params: None

Actor: GerudoSoldier021
entrypoint: None()
actions: ['Talk', 'PlayAnimation', 'Deactivate', 'PlayAnimationNoWait', 'Activate', 'SetInterestIkEnabled', 'AimActor', 'MoveToTargetLinkedPoint', 'ResetAim']
queries: []
params: None

Actor: GerudoSoldier022
entrypoint: None()
actions: ['Talk', 'PlayAnimation', 'Deactivate', 'Activate', 'PlayAnimationNoWait', 'AimActor', 'MoveToTargetLinkedPoint', 'ResetAim']
queries: []
params: None

Actor: GerudoSoldier023
entrypoint: None()
actions: ['Deactivate', 'Activate', 'PlayAnimationNoWait', 'AimActor', 'MoveToTargetLinkedPoint', 'ResetAim']
queries: []
params: None

Actor: GerudoSoldier014
entrypoint: None()
actions: ['Talk', 'LookAtTalker', 'Activate', 'MoveToBesideTargetActor', 'PlayAnimation', 'PlayAnimationNoWait', 'MoveToCompassPoint', 'SetInterestIkEnabled', 'Deactivate']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['Yield_']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: GerudoSoldier028
entrypoint: None()
actions: ['Talk', 'PlayAnimation', 'Deactivate', 'Activate', 'PlayAnimationNoWait', 'AimActor', 'MoveToTargetLinkedPoint', 'ResetAim']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE', 'StopRegionBgm', 'Prepare', 'PlayBGMEx', 'StopBGM', 'PlayBGM', 'PlayZoneBGM']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'AimActor', 'AimPlayer', 'LookAtTalker', 'MoveToBesideTargetActor', 'SetInterestIkEnabled', 'AimCompassPoint', 'WarpToActor', 'PlayAnimationNoWait', 'DisableAutoMovement', 'WarpToActorLinkedPointWithCompassPoint']
queries: []
params: None

void MeetGerudoChief() {

    call EvResetCommon.AllReset()

    Event166:
    GerudoChiefsDaughter.SetInterestIkEnabled({'enable': False})

    call EvResetCommon.AllReset()

    FlowControl.Yield_()
    GerudoAide000.SetInterestIkEnabled({'enable': True})
    GerudoChief.SetInterestIkEnabled({'enable': True})
    Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 7.0, 'weight2': 3.0, 'actor1': ActorIdentifier(name="GerudoChief"), 'actor2': ActorIdentifier(name="GerudoChiefsDaughter"), 'weight1': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        GerudoAide000.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoAide000.Talk({'message': 'scenario/StoryAreaD:MeetGerudoChief_010', 'getAttention': False})
        GerudoAide000.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Player.AimActor({'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Player.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.20000000298023224})
    GerudoChiefsDaughter.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoChiefsDaughter.SetInterestIkEnabled({'enable': False})

    fork {
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MeetGerudoChief_020', 'getAttention': False})
    } {
        GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GerudoChiefsDaughter.SetInterestIkEnabled({'enable': True})

    fork {
        GerudoChiefsDaughter.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MeetGerudoChief_030', 'getAttention': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        GerudoAide000.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})

        fork {
            GerudoChief.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            GerudoChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }

    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.SetInterestIkEnabled({'enable': True})
    Player.SetInterestIkEnabled({'enable': True})
    Partner[companion].SetInterestIkEnabled({'enable': True})
    GerudoChief.SetInterestIkEnabled({'enable': True})

    fork {
        Zelda.MoveToBesideTargetActor({'speed': 0, 'offsetX': 1.0, 'actor': ActorIdentifier(name="GerudoChief"), 'offsetZ': 4.5, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Zelda.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetX': 0.0, 'actor': ActorIdentifier(name="GerudoChief"), 'offsetZ': 5.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoChiefsDaughter.MoveToBesideTargetActor({'speed': 0, 'offsetX': -1.0, 'actor': ActorIdentifier(name="GerudoChief"), 'offsetZ': 4.5, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        GerudoChiefsDaughter.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Event291:
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MeetGerudoChief_031', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        GerudoAide000.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        GerudoChief.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoAide000.SetFacialExpression({'expression': 'angry'})
    GerudoAide000.PlayAnimationNoWait({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoAide000.Talk({'message': 'scenario/StoryAreaD:MeetGerudoChief_040', 'getAttention': True})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoAide000.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.AimActor({'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MeetGerudoChief_050', 'getAttention': True})
    } {
        GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 2.5})
        GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        GerudoAide000.Talk({'message': 'scenario/StoryAreaD:MeetGerudoChief_060', 'getAttention': True})
    } {
        GerudoAide000.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GerudoAide000.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChief.AimActor({'actor': ActorIdentifier(name="GerudoAide000"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoChief.Talk({'message': 'scenario/StoryAreaD:MeetGerudoChief_070', 'getAttention': True})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoAide000.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoAide000.SetFacialExpression({'expression': 'normal'})
    GerudoAide000.PlayAnimationNoWait({'name': 'salute,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoAide000.Talk({'message': 'scenario/StoryAreaD:MeetGerudoChief_080', 'getAttention': False})
    GerudoAide000.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChief.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChief.Talk({'message': 'scenario/StoryAreaD:MeetGerudoChief_100', 'getAttention': True})
    GerudoChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MeetGerudoChief_110', 'getAttention': True})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChief.SetFacialExpression({'expression': 'angry'})
    GerudoChief.PlayAnimationNoWait({'name': 'angry_st', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoChief.Talk({'message': 'scenario/StoryAreaD:MeetGerudoChief_120', 'getAttention': True})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoChief.SetFacialExpression({'expression': 'normal'})
    GerudoChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.SetInterestIkEnabled({'enable': False})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MeetGerudoChief_130', 'getAttention': False})
    GerudoChief.SetInterestIkEnabled({'enable': True})
    GerudoAide000.SetFacialExpression({'expression': 'angry'})
    GerudoAide000.PlayAnimation({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoAide000.Talk({'message': 'scenario/StoryAreaD:MeetGerudoChief_140', 'getAttention': True})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoAide000.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    GerudoChiefsDaughter.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MeetGerudoChief_150', 'getAttention': True})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        GerudoAide000.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        GerudoChief.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.SetInterestIkEnabled({'enable': True})
    GerudoAide000.PlayAnimationNoWait({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoAide000.Talk({'message': 'scenario/StoryAreaD:MeetGerudoChief_160', 'getAttention': True})
    GerudoAide000.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoAide000.ResetFacialExpression()
    GerudoChiefsDaughter.AimActor({'actor': ActorIdentifier(name="GerudoAide000"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MeetGerudoChief_170', 'getAttention': True})
    GerudoChiefsDaughter.Talk({'getAttention': True, 'message': 'scenario/StoryAreaD:MeetGerudoChief_171'})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})

    fork {
        GerudoChiefsDaughter.SetInterestIkEnabled({'enable': False})
        GerudoChiefsDaughter.MoveToCompassPoint({'direction': 0, 'speed': 1, 'distance': 7.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        GerudoChiefsDaughter.Deactivate()
    } {
        Timer.Wait({'time': 0.5})
        Player.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoAide000.SetInterestIkEnabled({'enable': False})
    GerudoChief.SetInterestIkEnabled({'enable': False})
    Timer.Wait({'time': 1.0})
    Partner[companion].LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'offsetY': -0.6000000238418579, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaD:MeetGerudoChief_180', 'getAttention': False})
    }

    QuestSystem.SetProgress({'symbol': 'Desert:853184227', 'isShowTelopInEvent': False, 'isFrontFade': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        GerudoAide000.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        GerudoAide000.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoChief.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        GerudoChief.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void DaughtersSpeech() {

    call EvResetCommon.AllReset()

    Player.SetInterestIkEnabled({'enable': True})
    GerudoChief.SetInterestIkEnabled({'enable': True})
    Partner[companion].SetInterestIkEnabled({'enable': True})
    Partner[companion].DisableAutoMovement()
    GerudoAide000.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Player.MoveToBesideTargetActor({'offsetZ': 1.0, 'offsetX': -1.0, 'speed': 1, 'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Player.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner[companion].MoveToBesideTargetActor({'offsetZ': 1.0, 'offsetY': 1.0, 'offsetX': -2.0, 'speed': 1, 'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'weight2': 3.0, 'distanceOffset': 4.0, 'actor1': ActorIdentifier(name="GerudoChief"), 'actor2': ActorIdentifier(name="GerudoChiefsDaughter"), 'weight1': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    Timer.Wait({'time': 0.699999988079071})

    fork {
        GerudoAide000.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoAide000.Talk({'message': 'scenario/StoryAreaD:DaughtersSpeech_010', 'getAttention': False})
        GerudoAide000.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoChiefsDaughter.SetInterestIkEnabled({'enable': True})
        Timer.Wait({'time': 0.699999988079071})
        GerudoChiefsDaughter.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.0})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.0})
        Partner.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'no,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:DaughtersSpeech_020', 'getAttention': True})
    } {
        Timer.Wait({'time': 0.5})
        Partner.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoAide000.PlayAnimation({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoAide000.Talk({'message': 'scenario/StoryAreaD:DaughtersSpeech_030', 'getAttention': True})
    } {
        Timer.Wait({'time': 2.0})
        GerudoChiefsDaughter.SetInterestIkEnabled({'enable': False})
        GerudoChiefsDaughter.PlayAnimation({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})
        Partner.AimActor({'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoChiefsDaughter.SetInterestIkEnabled({'enable': True})
    GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:DaughtersSpeech_040', 'getAttention': True})
    } {
        Timer.Wait({'time': 0.5})
        Partner.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        GerudoAide000.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoChiefsDaughter.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoChiefsDaughter.ResetAim()
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:DaughtersSpeech_050', 'getAttention': True})
        GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoChiefsDaughter.Talk({'getAttention': True, 'message': 'scenario/StoryAreaD:DaughtersSpeech_050_02'})
        GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.699999988079071})
        GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'no,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoChiefsDaughter.Talk({'getAttention': True, 'message': 'scenario/StoryAreaD:DaughtersSpeech_050_03'})
        GerudoChiefsDaughter.Talk({'getAttention': True, 'message': 'scenario/StoryAreaD:DaughtersSpeech_050_04'})
    } {
        Timer.Wait({'time': 0.699999988079071})
        Partner.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChief.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoChief.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoChief.Talk({'message': 'scenario/StoryAreaD:DaughtersSpeech_060', 'getAttention': True})
    } {
        Timer.Wait({'time': 0.699999988079071})
        Partner.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoAide000.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.5})
    GerudoChiefsDaughter.SetInterestIkEnabled({'enable': False})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:DaughtersSpeech_070', 'getAttention': True})
    Timer.Wait({'time': 1.5})
    GerudoChief.PlayAnimationEx({'name': 'happy', 'time': 2.0, 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.SetInterestIkEnabled({'enable': True})
    GerudoChief.Talk({'message': 'scenario/StoryAreaD:DaughtersSpeech_080', 'getAttention': True})
    GerudoChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoAide000.PlayAnimationNoWait({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoAide000.Talk({'message': 'scenario/StoryAreaD:DaughtersSpeech_090', 'getAttention': False})

    fork {
        GerudoAide000.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoAide000.Talk({'getAttention': True, 'message': 'scenario/StoryAreaD:DaughtersSpeech_090_02'})
    } {
        Timer.Wait({'time': 0.44999998807907104})
        GerudoChiefsDaughter.AimActor({'actor': ActorIdentifier(name="GerudoAide000"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        GerudoChief.AimActor({'actor': ActorIdentifier(name="GerudoAide000"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Partner.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoAide000.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.AimActor({'actor': ActorIdentifier(name="GerudoAide000"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:DaughtersSpeech_100', 'getAttention': True})
    GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoAide000.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoAide000.PlayAnimationNoWait({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoAide000.Talk({'message': 'scenario/StoryAreaD:DaughtersSpeech_110', 'getAttention': True})
    Audio.Prepare({'label': 'BGM_EV_COMMON5', 'kind': 0, 'volume': 1.0})
    Timer.Wait({'time': 1.2000000476837158})

    fork {
        Timer.Wait({'time': 0.5})
        GerudoChiefsDaughter.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})
        GerudoAide000.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Dialog.Show({'message': 'scenario/StoryAreaD:DaughtersSpeech_120'})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_GERUDO_001_1_008_8', 'volume': 1.0, 'pitch': 1.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_GERUDO_001_1_001_1', 'volume': 1.0, 'pitch': 1.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_GERUDO_001_2_001_4', 'volume': 1.0, 'pitch': 1.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_GERUDO_003_2_001_2', 'volume': 1.0, 'pitch': 1.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_GERUDO_002_1_001_1', 'volume': 1.0, 'pitch': 1.0})
    } {
        Audio.StopRegionBgm({'fadeSec': 1.0})
    }


    fork {
        GerudoSoldier012.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoSoldier020.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoSoldier021.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoSoldier022.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoSoldier023.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoSoldier028.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Zelda.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        GerudoChiefsDaughter.AimCompassPoint({'direction': 0, 'duration': 0.20000000298023224, 'withoutTurn': False, 'immediateTurn': False})
    } {
        GerudoSoldier021.Activate()
        GerudoSoldier022.Activate()
        GerudoSoldier023.Activate()
        GerudoSoldier028.Activate()
        GerudoSoldier020.Activate()
        GerudoSoldier012.Activate()
    } {
        GerudoAide000.AimCompassPoint({'direction': 0, 'withoutTurn': False, 'duration': 0.4000000059604645, 'immediateTurn': False})
    } {
        GerudoChief.SetInterestIkEnabled({'enable': False})
        GerudoChief.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:DaughtersSpeech_130', 'getAttention': False})

    fork {
        GerudoSoldier020.AimActor({'duration': 0.10000000149011612, 'withoutTurn': False, 'actor': ActorIdentifier(name="GerudoChief"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier022.AimActor({'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="GerudoChief"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier012.AimActor({'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="GerudoChief"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier021.AimActor({'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="GerudoChief"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier023.AimActor({'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="GerudoChief"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier028.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.10000000149011612, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoSoldier012.AimActor({'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="GerudoChief"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoSoldier020.AimActor({'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="GerudoChief"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Camera.LookAt2ActorsCenterAsTalker({'offsetZ': -2.5, 'actor1': ActorIdentifier(name="GerudoSoldier021"), 'actor2': ActorIdentifier(name="GerudoSoldier023"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0})
    Audio.PlayBGMEx({'label': 'BGM_EV_COMMON5', 'volume': 1.0, 'sec': 0.5, 'ignoreSkip': False})
    Timer.Wait({'time': 1.25})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoAide000.Talk({'message': 'scenario/StoryAreaD:DaughtersSpeech_140', 'getAttention': False})
    GerudoSoldier012.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier012.Talk({'message': 'scenario/StoryAreaD:DaughtersSpeech_150', 'getAttention': False})
    GerudoSoldier012.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier021.PlayAnimation({'name': 'salute,wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier021.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoAide000.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier021.SetInterestIkEnabled({'enable': False})
    GerudoSoldier021.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier021.Talk({'message': 'scenario/StoryAreaD:DaughtersSpeech_170', 'getAttention': False})
    GerudoSoldier021.SetInterestIkEnabled({'enable': True})
    GerudoSoldier021.PlayAnimation({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier022.PlayAnimation({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier022.Talk({'message': 'scenario/StoryAreaD:DaughtersSpeech_180', 'getAttention': False})
    GerudoSoldier022.PlayAnimation({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier028.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier028.Talk({'message': 'scenario/StoryAreaD:DaughtersSpeech_190', 'getAttention': False})
    Audio.StopBGM({'label': 'BGM_EV_COMMON5', 'duration': 2.299999952316284})
    Audio.Prepare({'kind': 0, 'label': 'BGM_EV_COMMON2', 'volume': 1.0})
    GerudoSoldier028.PlayAnimation({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Camera.LookAt2ActorsCenterAsTalker({'weight2': 3.0, 'distanceOffset': 4.0, 'actor1': ActorIdentifier(name="GerudoChief"), 'actor2': ActorIdentifier(name="GerudoChiefsDaughter"), 'weight1': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 1.0})
    GerudoChief.SetInterestIkEnabled({'enable': False})
    GerudoChief.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})

    fork {
        GerudoChief.Talk({'message': 'scenario/StoryAreaD:DaughtersSpeech_200', 'getAttention': False})
        GerudoChief.SetInterestIkEnabled({'enable': True})
        GerudoChief.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GerudoChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoChief.Talk({'getAttention': False, 'message': 'scenario/StoryAreaD:DaughtersSpeech_200_02'})
    } {
        Timer.Wait({'time': 1.0})

        fork {
            Zelda.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            GerudoChiefsDaughter.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            GerudoAide000.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    GerudoChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChief.SetInterestIkEnabled({'enable': True})
    Timer.Wait({'time': 0.10000000149011612})
    GerudoAide000.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoAide000.Talk({'message': 'scenario/StoryAreaD:DaughtersSpeech_210', 'getAttention': True})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoAide000.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoAide000.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.25})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        GerudoChiefsDaughter.AimActor({'withoutTurn': False, 'duration': 0.20000000298023224, 'actor': ActorIdentifier(name="GerudoAide000"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.699999988079071})
        GerudoChief.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoAide000.PlayAnimation({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoAide000.Talk({'getAttention': True, 'message': 'scenario/StoryAreaD:DaughtersSpeech_211'})
    }

    GerudoChief.PlayAnimationNoWait({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChief.Talk({'message': 'scenario/StoryAreaD:DaughtersSpeech_212', 'getAttention': False})
    GerudoSoldier014.Activate()
    GerudoSoldier014.SetInterestIkEnabled({'enable': False})

    fork {
        GerudoSoldier014.LookAtTalker({'keep': True, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 2.0})
        GerudoChiefsDaughter.AimActor({'duration': 0.20000000298023224, 'actor': ActorIdentifier(name="GerudoSoldier014"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GerudoChiefsDaughter.MoveToCompassPoint({'direction': 1, 'distance': 1.5, 'speed': 1, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        GerudoChiefsDaughter.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 2.0})
        Zelda.AimActor({'duration': 0.20000000298023224, 'actor': ActorIdentifier(name="GerudoSoldier014"), 'offsetX': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Zelda.MoveToTargetLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Area"), 'speed': 1, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Zelda.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier014.MoveToBesideTargetActor({'speed': 1, 'offsetZ': 3.0, 'actor': ActorIdentifier(name="GerudoChief"), 'offsetX': 0.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    } {
        GerudoChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoChief.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        GerudoAide000.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoAide000.AimActor({'actor': ActorIdentifier(name="GerudoSoldier014"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Audio.PlayBGM({'label': 'BGM_EV_COMMON2', 'ignoreSkip': False, 'volume': 1.0})
    }

    Camera.LookAt3ActorsCenterAsTalker({'distanceOffset': 3.0, 'actor1': ActorIdentifier(name="GerudoChief"), 'actor2': ActorIdentifier(name="Player"), 'actor3': ActorIdentifier(name="GerudoChiefsDaughter"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    GerudoSoldier014.PlayAnimation({'name': 'salute,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier014.Talk({'message': 'scenario/StoryAreaD:DaughtersSpeech_230', 'getAttention': True})
    GerudoSoldier014.PlayAnimation({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChief.Talk({'message': 'scenario/StoryAreaD:DaughtersSpeech_240', 'getAttention': False})
    GerudoChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier014.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier014.Talk({'message': 'scenario/StoryAreaD:DaughtersSpeech_250', 'getAttention': True})
    GerudoSoldier014.PlayAnimation({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChief.PlayAnimationNoWait({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoChief.Talk({'message': 'scenario/StoryAreaD:DaughtersSpeech_260', 'getAttention': False})
    } {
        GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        GerudoChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GerudoSoldier014.PlayAnimationNoWait({'name': 'salute,wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoSoldier012.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier021.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier023.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier020.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier022.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier028.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoSoldier014.Talk({'message': 'scenario/StoryAreaD:DaughtersSpeech_270', 'getAttention': False})
    GerudoChiefsDaughter.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Zelda.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        GerudoChief.MoveToCompassPoint({'direction': 0, 'speed': 1, 'distance': 15.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        GerudoSoldier014.MoveToCompassPoint({'direction': 0, 'speed': 1, 'distance': 16.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        GerudoSoldier014.Deactivate()
    }

    GerudoChief.LookAtTalker({'distanceOffset': 3.0, 'keep': False, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    GerudoChief.SetInterestIkEnabled({'enable': True})
    GerudoChief.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier012"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.10000000149011612})
    GerudoChief.AimActor({'actor': ActorIdentifier(name="GerudoSoldier028"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.10000000149011612})
    GerudoChief.AimCompassPoint({'withoutTurn': False, 'direction': 0, 'duration': 0.4000000059604645, 'immediateTurn': False})

    fork {
        GerudoSoldier012.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier021.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier023.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier020.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier022.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier028.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoChief.PlayAnimation({'name': 'order_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChief.Talk({'message': 'scenario/StoryAreaD:DaughtersSpeech_276', 'getAttention': True})
    GerudoChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChief.SetInterestIkEnabled({'enable': False})

    fork {
        GerudoSoldier012.Talk({'message': 'scenario/StoryAreaD:DaughtersSpeech_279', 'getAttention': False})
    } {
        GerudoSoldier012.PlayAnimationNoWait({'name': 'salute,wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoSoldier021.PlayAnimationNoWait({'name': 'salute,wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoSoldier023.PlayAnimationNoWait({'name': 'salute,wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoSoldier020.PlayAnimationNoWait({'name': 'salute,wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoSoldier022.PlayAnimationNoWait({'name': 'salute,wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoSoldier028.PlayAnimationNoWait({'name': 'salute,wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_GERUDO_001_1_001_3', 'volume': 1.0, 'pitch': 1.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_GERUDO_001_1_008_6', 'volume': 1.0, 'pitch': 1.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_GERUDO_001_2_007_7', 'volume': 1.0, 'pitch': 1.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_GERUDO_002_1_008_1', 'volume': 1.0, 'pitch': 1.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_GERUDO_003_2_007_5', 'volume': 1.0, 'pitch': 1.0})
    }

    GerudoAide000.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoAide000.LookAtTalker({'keep': False, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    GerudoAide000.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Player.AimActor({'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="GerudoChief"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier020.AimActor({'duration': 0.10000000149011612, 'withoutTurn': False, 'actor': ActorIdentifier(name="GerudoChief"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier021.AimActor({'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="GerudoChief"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier012.AimActor({'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="GerudoChief"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier023.AimActor({'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="GerudoChief"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier022.AimActor({'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="GerudoChief"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier028.AimActor({'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="GerudoChief"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoChiefsDaughter.AimActor({'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="GerudoChief"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoAide000.Talk({'message': 'scenario/StoryAreaD:DaughtersSpeech_280', 'getAttention': False})
    Audio.StopBGM({'label': 'BGM_EV_COMMON2', 'duration': 4.0})
    GerudoChief.LookAtTalker({'keep': True, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    GerudoChief.MoveToCompassPoint({'direction': 0, 'speed': 1, 'distance': 4.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    GerudoChief.Deactivate()

    fork {
        Timer.Wait({'time': 0.33000001311302185})
        GerudoSoldier021.ResetAim()
        GerudoSoldier021.MoveToTargetLinkedPoint({'withoutTurn': False, 'index': 0, 'speed': 1, 'offsetX': 0.800000011920929, 'timeOut': 3.5, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'customSpeed': 0.0, 'method': 0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 0.3400000035762787})
        GerudoSoldier023.ResetAim()
        GerudoSoldier023.MoveToTargetLinkedPoint({'withoutTurn': False, 'index': 0, 'speed': 1, 'offsetX': -0.800000011920929, 'timeOut': 3.5, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'customSpeed': 0.0, 'method': 0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 0.3700000047683716})
        GerudoSoldier012.ResetAim()
        GerudoSoldier012.MoveToTargetLinkedPoint({'withoutTurn': False, 'index': 0, 'speed': 1, 'offsetX': 0.0, 'timeOut': 3.5, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'customSpeed': 0.0, 'method': 0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 0.3700000047683716})
        GerudoSoldier028.ResetAim()
        GerudoSoldier028.MoveToTargetLinkedPoint({'withoutTurn': False, 'index': 0, 'speed': 1, 'tolerance': 0.0, 'timeOut': 3.5, 'actor': ActorIdentifier(name="Area"), 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 0.4699999988079071})
        GerudoSoldier020.ResetAim()
        GerudoSoldier020.MoveToTargetLinkedPoint({'withoutTurn': False, 'index': 0, 'speed': 1, 'timeOut': 3.5, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 0.4699999988079071})
        GerudoSoldier022.ResetAim()
        GerudoSoldier022.MoveToTargetLinkedPoint({'withoutTurn': False, 'index': 0, 'speed': 1, 'timeOut': 3.5, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 0.41999998688697815})
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
    }


    fork {
        GerudoAide000.Deactivate()
    } {
        GerudoChiefsDaughter.Deactivate()
    } {
        GerudoSoldier012.Deactivate()
    } {
        GerudoSoldier020.Deactivate()
    } {
        GerudoSoldier021.Deactivate()
    } {
        GerudoSoldier022.Deactivate()
    } {
        GerudoSoldier023.Deactivate()
    } {
        GerudoSoldier028.Deactivate()
    }

    Partner[companion].WarpToActor({'offsetX': 1.5, 'offsetY': 1.0, 'actor': ActorIdentifier(name="Player"), 'distance': 0.0})

    fork {

        call GeneralSequence.Look_at_Partner()

    } {
        Partner[companion].AimPlayer({'duration': 0.10000000149011612, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].LookAtTalker({'duration': 0.10000000149011612, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaD:DaughtersSpeech_290', 'getAttention': False})
    QuestSystem.SetProgress({'symbol': 'Desert:3217026082', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvD_GerudosDiscussion'})
    Audio.PlayZoneBGM({'stopbgm': False})
}

void MeetGerudoChief1() {
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Player.WarpToActorLinkedPointWithCompassPoint({'index': 0, 'direction': 2, 'actor': ActorIdentifier(name="Area"), 'offsetY': 0.0})
    Partner[companion].WarpToActorLinkedPointWithCompassPoint({'index': 1, 'offsetY': 1.5, 'actor': ActorIdentifier(name="Area"), 'direction': 2})

    call EvResetCommon.AllReset()

    Player.AimActor({'offsetX': -2.5, 'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'withoutTurn': False, 'boneName': '', 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].AimActor({'offsetX': -2.5, 'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'withoutTurn': False, 'boneName': '', 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 7.0, 'weight2': 3.0, 'actor1': ActorIdentifier(name="GerudoChief"), 'actor2': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.10000000149011612, 'weight1': 1.0, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    goto Event166
}

void MeetGerudoChief_Left() {

    call EvResetCommon.AllReset()

    GerudoChiefsDaughter.SetInterestIkEnabled({'enable': False})

    call EvResetCommon.AllReset()

    FlowControl.Yield_()
    GerudoAide000.SetInterestIkEnabled({'enable': True})
    GerudoChief.SetInterestIkEnabled({'enable': True})
    Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 7.0, 'weight2': 3.0, 'actor1': ActorIdentifier(name="GerudoChief"), 'actor2': ActorIdentifier(name="GerudoChiefsDaughter"), 'weight1': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        GerudoAide000.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoAide000.Talk({'message': 'scenario/StoryAreaD:MeetGerudoChief_010', 'getAttention': False})
        GerudoAide000.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Player.AimActor({'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Player.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.20000000298023224})
    GerudoChiefsDaughter.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoChiefsDaughter.SetInterestIkEnabled({'enable': False})

    fork {
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MeetGerudoChief_020', 'getAttention': False})
    } {
        GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GerudoChiefsDaughter.SetInterestIkEnabled({'enable': True})

    fork {
        GerudoChiefsDaughter.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MeetGerudoChief_030', 'getAttention': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        GerudoAide000.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})

        fork {
            GerudoChief.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            GerudoChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }

    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.SetInterestIkEnabled({'enable': True})
    Player.SetInterestIkEnabled({'enable': True})
    Partner[companion].SetInterestIkEnabled({'enable': True})
    GerudoChief.SetInterestIkEnabled({'enable': True})

    fork {
        GerudoChiefsDaughter.MoveToBesideTargetActor({'speed': 0, 'offsetX': -1.0, 'actor': ActorIdentifier(name="GerudoChief"), 'offsetZ': 4.5, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        GerudoChiefsDaughter.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            Zelda.ResetAim()
            Zelda.MoveToTargetLinkedPoint({'index': 0, 'offsetX': 0.0, 'speed': 0, 'offsetZ': 0.699999988079071, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetY': 0.0})
            Zelda.MoveToBesideTargetActor({'offsetX': 1.0, 'offsetZ': 4.5, 'speed': 0, 'actor': ActorIdentifier(name="GerudoChief"), 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
            Zelda.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Partner.ResetAim()
            Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetX': 0.0, 'offsetZ': 5.0, 'actor': ActorIdentifier(name="GerudoChief"), 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    goto Event291
}
