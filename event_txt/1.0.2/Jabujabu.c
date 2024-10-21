-------- EventFlow: Jabujabu --------

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

Actor: Jabujabu
entrypoint: None()
actions: ['LookAtTalker', 'PlayAnimation']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

void talk() {
    Jabujabu.LookAtTalker({'distanceOffset': 6.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 1.0})
}

void talk020() {
    Zelda.AimActor({'actor': ActorIdentifier(name="Jabujabu"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Jabujabu.LookAtTalker({'distanceOffset': 6.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Jabujabu.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Dialog.Show({'message': 'scenario/StoryAreaB:JabuJabuTalk010_010'})
}
