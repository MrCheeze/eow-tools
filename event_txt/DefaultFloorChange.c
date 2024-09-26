-------- EventFlow: DefaultFloorChange --------

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestWarp']
queries: []
params: None

void Default() {
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    GameControl.RequestWarp({'offsetX': 0.0, 'locator': 'locator', 'offsetZ': 0.0})
}
