-------- EventFlow: PortraitBolt_fake --------

Actor: Player
entrypoint: None()
actions: ['MorphEnd', 'AbsorbAllPastedActors']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Sync
entrypoint: None()
actions: ['SyncReset']
queries: []
params: None

Actor: PortraitBolt_fake
entrypoint: None()
actions: ['Destroy', 'SetVisibility', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

void PortraitBolt_fake() {
    Sync.SyncReset()
    Player.MorphEnd()
    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})

    fork {
        PortraitBolt_fake.SetVisibility({'visible': False})
    } {
        PortraitBolt_fake.PlayTailorOtherChannelNoWait({'channel': 'PullOut', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    }

    Timer.Wait({'time': 0.5})
    PortraitBolt_fake.Destroy()
}
