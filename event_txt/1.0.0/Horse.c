-------- EventFlow: Horse --------

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: TutorialUI
entrypoint: None()
actions: ['ShowModal']
queries: []
params: None

void Tutorial() {
    Timer.Wait({'time': 0.4000000059604645})
    TutorialUI.ShowModal({'key': 'HorseModal'})
    EventFlags.SetFlag({'value': True, 'symbol': 'EventHorseTuto'})
}
