-------- EventFlow: SwitchFootTogether --------

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayJingleTimeWait']
queries: []
params: None

Actor: Door
entrypoint: None()
actions: ['DoorOpen', 'GenericGimmickSequence']
queries: []
params: None

void SuccessEvent() {
    Timer.Wait({'time': 0.699999988079071})
    Door.GenericGimmickSequence({'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0})
    Door.DoorOpen()
    Timer.Wait({'time': 1.2000000476837158})
    Audio.PlayJingleTimeWait({'duration': 1.6799999475479126, 'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
}
