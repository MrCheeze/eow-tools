-------- EventFlow: CrackMoveHyruleWaterway --------

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

Actor: Zelda
entrypoint: None()
actions: ['PlayAnimation', 'AimCompassPoint', 'Heal']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetLevelFlag']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimPlayer', 'PlayAnimationNoWait']
queries: []
params: None

void CrackMoveHyruleWaterwayGameOver() {

    call EvResetCommon.AllReset()


    fork {
        Zelda.PlayAnimation({'name': 'dead_crack', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Zelda.AimCompassPoint({'direction': 0, 'duration': 0.10000000149011612, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].PlayAnimationNoWait({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Zelda.Heal({'amount': 12})
    EventFlags.SetLevelFlag({'value': False, 'index': 1})
    GameControl.RequestLevelJump({'locator': 'HyruleWaterwayRetry', 'level': 'HyruleWaterway', 'offsetX': 0.0, 'offsetZ': 0.0})
}
