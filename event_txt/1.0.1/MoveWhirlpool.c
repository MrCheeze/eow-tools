-------- EventFlow: MoveWhirlpool --------

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump', 'UnforbidSave']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['StopAllBGM']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['Heal']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

void MoveWhirlpoolGameOver() {
    Audio.StopAllBGM({'duration': 4.0})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    GameControl.UnforbidSave()
    Timer.Wait({'time': 1.0})
    Zelda.Heal({'amount': 999})
    GameControl.RequestLevelJump({'locator': '002Retry', 'level': 'L_Dungeon002', 'offsetX': 0.0, 'offsetZ': 0.0})
}
