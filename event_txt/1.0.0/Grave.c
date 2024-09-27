-------- EventFlow: Grave --------

Actor: Sync
entrypoint: None()
actions: ['SyncReset']
queries: []
params: None

Actor: Grave
entrypoint: None()
actions: ['MoveToTargetActor', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

void GravesyncPullOut() {
    Sync.SyncReset()
    Grave.PlayTailorOtherChannelNoWait({'channel': 'Move', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    Grave.MoveToTargetActor({'withoutTurn': True, 'distance': -1.5, 'timeOut': 7.0, 'speed': 1, 'customSpeed': 4.0, 'actor': ActorIdentifier(name="Grave"), 'tolerance': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Grave.StopTailorOtherChannel({'channel': 'Move', 'index': -1})
    Timer.Wait({'time': 0.699999988079071})
}
