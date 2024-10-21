-------- EventFlow: StatueDekuMove --------

Actor: StatueDekuMove
entrypoint: None()
actions: ['PlayAnimation', 'LookAtGimmick', 'SetCollisionEnabled']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
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

Actor: Player
entrypoint: None()
actions: ['AimActor', 'MoveToCompassPoint']
queries: []
params: None

void StatueDekuMove() {

    call EvResetCommon.AllReset()

    Timer.Wait({'time': 0.800000011920929})
    StatueDekuMove.LookAtGimmick({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 0.5})
    if !EventFlags.CheckFlag({'symbol': 'BehindJungleStatue'}) {

        fork {
            StatueDekuMove.PlayAnimation({'name': 'open', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            StatueDekuMove.SetCollisionEnabled({'enable': False})
        }

    } else {

        fork {
            Timer.Wait({'time': 0.20000000298023224})
            StatueDekuMove.PlayAnimation({'name': 'open', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Player.MoveToCompassPoint({'direction': 2, 'timeOut': 2.0, 'speed': 1, 'distance': 2.9000000953674316, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        } {
            Timer.Wait({'time': 0.4000000059604645})
            StatueDekuMove.SetCollisionEnabled({'enable': False})
        }

    }
    Player.AimActor({'actor': ActorIdentifier(name="StatueDekuMove"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})
    Audio.PlayJingle({'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
    StatueDekuMove.SetCollisionEnabled({'enable': True})
    EventFlags.SetFlag({'symbol': 'Jungle_Field001', 'value': True})
}
