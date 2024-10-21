-------- EventFlow: EnergyStone --------

Actor: Player
entrypoint: None()
actions: ['AddPasteEnergy', 'AimActor', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: EnergyStone
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait']
queries: []
params: None

void check() {
    Player.AimActor({'actor': ActorIdentifier(name="EnergyStone"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    EnergyStone.PlayTailorOtherChannelNoWait({'channel': 'Ene_Recovery', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    Timer.Wait({'time': 0.25})

    fork {
        Player.AddPasteEnergy({'amount': 40})
    } {
        Player.PlayTailorOtherChannelNoWait({'channel': 'Ene_Recovery', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    }

    Timer.Wait({'time': 0.10000000149011612})
}
