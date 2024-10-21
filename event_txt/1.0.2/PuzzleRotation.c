-------- EventFlow: PuzzleRotation --------

Actor: Hud
entrypoint: None()
actions: ['PlayOutAnim', 'PlayInAnim']
queries: []
params: None

Actor: PuzzleRotation
entrypoint: None()
actions: ['AwaitSolvedEnd']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayJingle']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

void Clear_Outside() {
    Hud.PlayOutAnim()
    PuzzleRotation.AwaitSolvedEnd()
    Hud.PlayInAnim()
}

void Clear_Inside() {
    Hud.PlayOutAnim()
    PuzzleRotation.AwaitSolvedEnd()
    Timer.Wait({'time': 1.2000000476837158})
    Audio.PlayJingle({'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
    Hud.PlayInAnim()
}
