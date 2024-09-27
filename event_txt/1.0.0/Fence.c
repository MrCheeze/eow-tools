-------- EventFlow: Fence --------

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

Actor: Fence
entrypoint: None()
actions: ['PlayAnimation', 'LookAtGimmick']
queries: []
params: None

void OpenEvent() {
    Timer.Wait({'time': 0.4000000059604645})
    Fence.LookAtGimmick({'distanceOffset': 8.0, 'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Fence.PlayAnimation({'name': 'on', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.2000000476837158})
    Audio.PlayJingleTimeWait({'duration': 1.6799999475479126, 'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
}

void FenceLD005_Open() {
    Timer.Wait({'time': 0.4000000059604645})
    Fence.LookAtGimmick({'distanceOffset': 8.0, 'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Fence.PlayAnimation({'name': 'on', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.2000000476837158})
    Audio.PlayJingleTimeWait({'duration': 1.6799999475479126, 'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
}

void OpenEvent_NoJingle() {
    Timer.Wait({'time': 0.4000000059604645})
    Fence.LookAtGimmick({'distanceOffset': 8.0, 'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Fence.PlayAnimation({'name': 'on', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
}
