-------- EventFlow: TowerRotationGerdo --------

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayJingle']
queries: []
params: None

Actor: TowerRotationGerdo
entrypoint: None()
actions: ['LookAtGimmick']
queries: []
params: None

void SuccessEvent() {
    Timer.Wait({'time': 0.4000000059604645})
    TowerRotationGerdo.LookAtGimmick({'duration': 0.699999988079071, 'chaseRatio': 0.05000000074505806, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 1.2000000476837158})
    Audio.PlayJingle({'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
}
