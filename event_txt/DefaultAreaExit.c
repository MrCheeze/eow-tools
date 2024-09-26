-------- EventFlow: DefaultAreaExit --------

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump']
queries: []
params: None

void Default() {

    fork {
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
    }

    GameControl.RequestLevelJump({'offsetX': 0.0, 'level': 'level', 'locator': 'locator', 'offsetZ': 0.0})
}
