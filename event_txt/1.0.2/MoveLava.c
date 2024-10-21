-------- EventFlow: MoveLava --------

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump', 'UnforbidSave']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['RemoveItem', 'PlayAnimation', 'SetGravityEnable']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['ResetActiveAndPesteActors']
queries: []
params: None

void MoveLavaGameOver() {
    Zelda.SetGravityEnable({'enable': False})
    GameControl.UnforbidSave()

    fork {
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
    } {
        Zelda.PlayAnimation({'name': 'fall_sinking', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Zelda.RemoveItem({'itemKey': 'KeyBoss', 'count': 1, 'index': -1})
    Player.ResetActiveAndPesteActors({'cemeteryRevive': True, 'child': True, 'defeatedThrough': False, 'aliveCemeteryRevive': False})
    EventFlags.SetFlag({'symbol': 'L004R013TreasureBoxOpen', 'value': False})
    EventFlags.SetFlag({'symbol': 'L004R013MovelavaStart', 'value': False})
    GameControl.RequestLevelJump({'locator': 'L004_R013Retry', 'level': 'L_Dungeon004', 'offsetX': 0.0, 'offsetZ': 0.0})
}
