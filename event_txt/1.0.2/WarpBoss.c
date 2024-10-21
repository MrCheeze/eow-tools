-------- EventFlow: WarpBoss --------

Actor: WarpBoss
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestWarp']
queries: []
params: None

void warp() {
    WarpBoss.PlayTailorOtherChannelNoWait({'channel': 'Go', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    Timer.Wait({'time': 0.6000000238418579})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    GameControl.RequestWarp({'locator': 'location', 'offsetX': 0.0, 'offsetZ': 0.0})
}
