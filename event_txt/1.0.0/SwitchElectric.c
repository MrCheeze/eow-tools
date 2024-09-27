-------- EventFlow: SwitchElectric --------

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

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: SwitchElectric[1]
entrypoint: None()
actions: ['LookAtGimmick']
queries: []
params: None

void SuccessEvent() {
    Timer.Wait({'time': 0.10000000149011612})
    SwitchElectric[1].LookAtGimmick({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 1.0})
    Door.GenericGimmickSequence({'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0})
    Door.DoorOpen()
    Timer.Wait({'time': 1.2000000476837158})
    Audio.PlayJingleTimeWait({'duration': 1.6799999475479126, 'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
}
