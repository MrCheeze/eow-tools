-------- EventFlow: ImpactSwitch --------

Actor: ImpactSwitch
entrypoint: None()
actions: ['LookAtGimmick']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

void LockOn() {
    Timer.Wait({'time': 0.10000000149011612})
    ImpactSwitch.LookAtGimmick({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'keep': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 2.0})
}
