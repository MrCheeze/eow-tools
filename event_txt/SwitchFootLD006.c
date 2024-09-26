-------- EventFlow: SwitchFootLD006 --------

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAtLocationAsGimmick']
queries: []
params: None

Actor: SnowBallInduce
entrypoint: None()
actions: ['PlayEventMode']
queries: ['EventModeResult']
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['SetMaxDistance', 'DefaultMaxDistance']
queries: []
params: None

void PushEvent() {
    Timer.Wait({'time': 0.10000000149011612})
    Audio.SetMaxDistance({'distance': 30.0})

    fork {
        Camera.LookAtLocationAsGimmick({'duration': 2.0, 'location': 'SnowBallInduce_016', 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'posOffsetX': 0.0, 'posOffsetY': 0.0, 'posOffsetZ': 0.0})
    } {
        SnowBallInduce.PlayEventMode()
    }

    Audio.DefaultMaxDistance()
    if SnowBallInduce.EventModeResult() == 3 {
        EventFlags.SetFlag({'symbol': 'L006R016GimicActivate', 'value': True})

        call Fence.OpenEvent()

    }
}
