-------- EventFlow: EvTestitart --------

Actor: EvTestitart
entrypoint: None()
actions: ['PlayAnimationNoWait', 'PlayAnimation', 'KeepAnimationAfterEvent']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

void TestFlow() {
    EvTestitart.PlayAnimationNoWait({'name': 'open_b,wait_open_b', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 4.0})
    EvTestitart.PlayAnimation({'name': 'close_b,wait_b', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 3.0})
    EvTestitart.KeepAnimationAfterEvent()
}
