-------- EventFlow: FieldBoundary002 --------

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor', 'Talk', 'PlayAnimation', 'PlayAnimationNoWait', 'DisableAutoMovement', 'EnableAutoMovement']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

Actor: MinisterRight
entrypoint: None()
actions: []
queries: []
params: None

void BoundaryMinisterRightTalk() {

    call EvResetCommon.AllReset()

    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="MinisterRight"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Partner[companion].DisableAutoMovement()

    fork {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.5})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'appeal02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].Talk({'message': 'scenario/StoryAreaB:BoundaryMinisterRightTalk_010', 'getAttention': False})
    }


    fork {
        Timer.Wait({'time': 0.20000000298023224})

        call GeneralSequence.Look_at_Partner()

    } {
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaB:BoundaryMinisterRightTalk_020', 'getAttention': False})
    }

    Partner[companion].EnableAutoMovement()
    EventFlags.SetFlag({'value': True, 'symbol': 'BoundaryMinisterRightTalk'})
}
