-------- EventFlow: Elevator --------

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Elevator
entrypoint: None()
actions: ['AppearFence', 'StartUplift']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['MoveToBesideTargetActor', 'AimCompassPoint', 'LookAtGimmick']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Reset']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['SetThroughObstaclesOnMove', 'SetResetOverlappedActorsOnMoveDone']
queries: []
params: None

void AppearFence() {

    fork {
        Player.LookAtGimmick({'distanceOffset': 2.0, 'offsetZ': -2.0, 'keep': True, 'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0})
    } {

        call EvResetCommon.AllReset()

        GameControl.SetThroughObstaclesOnMove({'enable': False})
        GameControl.SetResetOverlappedActorsOnMoveDone({'enable': False})
    }

    Player.MoveToBesideTargetActor({'speed': 0, 'offsetZ': -0.5, 'actor': ActorIdentifier(name="Elevator"), 'timeOut': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Timer.Wait({'time': 0.5})
    Player.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    Elevator.AppearFence()
    Camera.Reset({'chaseRatio': 0.5, 'resetPlayerCamera': False})
    Timer.Wait({'time': 1.5})
    Elevator.StartUplift()
}
