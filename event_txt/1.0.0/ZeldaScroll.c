-------- EventFlow: ZeldaScroll --------

Actor: Player
entrypoint: None()
actions: ['MoveToCompassPoint', 'MoveLadder']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: []
queries: ['SwitchCompassPoint']
params: None

Actor: Sync
entrypoint: None()
actions: ['SyncReset']
queries: []
params: None

void ZeldaScroll() {
    Sync.SyncReset()
    switch FlowControl.SwitchCompassPoint({'compassPoint': 'direction'}) {
      case [0, 2, 6]:
        Timer.Wait({'time': 0.20000000298023224})
        Event0:
        Player.MoveToCompassPoint({'direction': 'direction', 'distance': 'walkDistance', 'speed': 1, 'customSpeed': 3.5999999046325684, 'timeOut': 0.800000011920929, 'tolerance': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
      case [1, 3]:
        Timer.Wait({'time': 0.4000000059604645})
        goto Event0
      case 4:
        Timer.Wait({'time': 0.20000000298023224})
        Player.MoveLadder({'distance': 'walkDistance', 'timeOut': 0.800000011920929, 'mode': 2})
      case 5:
        Timer.Wait({'time': 0.20000000298023224})
        Player.MoveLadder({'distance': 'walkDistance', 'timeOut': 0.800000011920929, 'mode': 1})
    }
}
