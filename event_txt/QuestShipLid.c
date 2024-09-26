-------- EventFlow: QuestShipLid --------

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayJingleTimeWait']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['PlayAnimationNoWait']
queries: []
params: None

Actor: Sync
entrypoint: None()
actions: ['SyncReset']
queries: []
params: None

Actor: QuestShipLid
entrypoint: None()
actions: ['Destroy', 'LookAtTalkersLinkedPoint']
queries: []
params: None

void Open() {
    Sync.SyncReset()
    QuestShipLid.Destroy()
    Player.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.800000011920929})
    QuestShipLid.LookAtTalkersLinkedPoint({'pointIndex': 0, 'offsetY': 2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 1.2000000476837158})
    Audio.PlayJingleTimeWait({'label': 'BGM_NAZOTOKI_SEIKAI', 'duration': 1.6799999475479126, 'volume': 1.0, 'ignoreSkip': True})
    EventFlags.SetFlag({'symbol': 'ShipLidBreak', 'value': True})
}
