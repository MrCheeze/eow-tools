-------- EventFlow: CrackMove --------

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['StopSE', 'StopAllBGM']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['PlayAnimationDetail', 'AimCompassPoint', 'Heal']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartParam']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag', 'SetLevelFlag']
queries: []
params: None

void CrackMoveGameOver() {

    fork {
        Zelda.PlayAnimationDetail({'name': 'dead_crack', 'priority': 1, 'layer': 0})
    } {
        Zelda.AimCompassPoint({'direction': 0, 'duration': 0.10000000149011612, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Audio.StopSE({'label': 'SE_AMB_OP_DUNGEON_COLLAPSE', 'duration': 2.0})
        Audio.StopSE({'label': 'SE_AMB_OP_DUNGEON2', 'duration': 2.0})
    }

    Timer.Wait({'time': 2.0})
    Audio.StopAllBGM({'duration': 4.0})
    Fade.StartParam({'mode': 1, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0, 'time': 1.0})
    Zelda.Heal({'amount': 12})
    EventFlags.SetFlag({'symbol': 'EvPrologue013', 'value': False})
    EventFlags.SetLevelFlag({'index': 2, 'value': False})
    EventFlags.SetFlag({'symbol': 'OP_Dungeon_Escaping', 'value': False})
    GameControl.RequestLevelJump({'level': 'OP_Dungeon', 'locator': 'OPDungeon005Retry', 'offsetX': 0.0, 'offsetZ': 0.0})
}
