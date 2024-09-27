-------- EventFlow: GameOver --------

Actor: Audio
entrypoint: None()
actions: ['StopAllBGM', 'OnGameOver', 'DisableUiPauseBgmDucking', 'EnableUiPauseBgmDucking']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: GameOverUI
entrypoint: None()
actions: ['Show']
queries: ['GetResult']
params: None

Actor: GameControl
entrypoint: None()
actions: ['Quit', 'Retry']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['PlayAnimation', 'ResetVelocity', 'SetGravityEnable']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: BattleChallenge
entrypoint: None()
actions: ['FinishBattleChallengeScene', 'GameOverChallenge']
queries: ['IsBattleChallenging']
params: None

void GameOver() {
    Audio.StopAllBGM({'duration': 0.12999999523162842})

    fork {
        Player.PlayAnimation({'name': '$dead', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.5})
        Player.SetGravityEnable({'enable': False})
        Player.ResetVelocity()
    } {
        Fade.StartPreset({'preset': 'FadeInFast'})
    }

    Timer.Wait({'time': 1.5})
    Audio.DisableUiPauseBgmDucking()
    Audio.OnGameOver()
    if BattleChallenge.IsBattleChallenging() {
        BattleChallenge.GameOverChallenge()
        Audio.StopAllBGM({'duration': 1.0})
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
        Audio.EnableUiPauseBgmDucking()
        BattleChallenge.FinishBattleChallengeScene({'level': 'BattleChallengeRoom', 'locator': 'BattleChallengeRoom_ReturnFailure', 'offsetX': 0.0, 'offsetZ': 0.0})
    } else
    if EventFlags.CheckFlag({'symbol': 'OP_Dungeon_Escaping'}) {
        EventFlags.SetFlag({'symbol': 'OP_Dungeon_Escaping', 'value': False})
    }
    GameOverUI.Show()
    if !GameOverUI.GetResult() {
        Fade.StartPreset({'preset': 'CutOutB'})
        Audio.StopAllBGM({'duration': 1.0})
        Audio.EnableUiPauseBgmDucking()
        Timer.Wait({'time': 1.100000023841858})
        GameControl.Retry()
    } else {
        Audio.StopAllBGM({'duration': 1.0})
        Audio.EnableUiPauseBgmDucking()
        Timer.Wait({'time': 1.100000023841858})
        GameControl.Quit()
    }
}
