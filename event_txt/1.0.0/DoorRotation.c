-------- EventFlow: DoorRotation --------

Actor: DoorRotation
entrypoint: None()
actions: ['TurnRight', 'TurnLeft', 'PlayTailorOtherChannelNoWait']
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
actions: ['AbsorbAllPastedActors']
queries: []
params: None

void OnTurnRight() {
    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    DoorRotation.PlayTailorOtherChannelNoWait({'channel': 'Rotate', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    DoorRotation.TurnRight({'angle': 90.0, 'timespan': 1.0})
    if !EventFlags.CheckFlag({'symbol': 'flag'}) {
        Timer.Wait({'time': 1.2000000476837158})
        Audio.PlayJingle({'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
        EventFlags.SetFlag({'symbol': 'flag', 'value': True})
    }
}

void OnTurnLeft() {
    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    DoorRotation.PlayTailorOtherChannelNoWait({'channel': 'Rotate', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    DoorRotation.TurnLeft({'angle': 90.0, 'timespan': 1.0})
    if !EventFlags.CheckFlag({'symbol': 'flag'}) {
        Timer.Wait({'time': 1.2000000476837158})
        Audio.PlayJingle({'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
        EventFlags.SetFlag({'symbol': 'flag', 'value': True})
    }
}
