-------- EventFlow: S_Dungeon012 --------

Actor: Player
entrypoint: None()
actions: []
queries: ['HasItem']
params: None

Actor: Hud
entrypoint: None()
actions: ['RequestPieceOfPowersSensor']
queries: []
params: None

void R001WalkIn() {

    call AreaStartCommon.WalkIn()

    if !Player.HasItem({'itemKey': 'WorldGlobePiece', 'index': 9, 'count': 1}) {
        Hud.RequestPieceOfPowersSensor()
    }
}
