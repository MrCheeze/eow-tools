-------- EventFlow: NorthForestPedestal --------

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['MoveToWithTimeout', 'Reset']
queries: []
params: None

Actor: NorthForestPedestal
entrypoint: None()
actions: ['SetActorSwitch', 'PlayOnMaterialAnim']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: GameControl
entrypoint: None()
actions: ['LoadArea']
queries: []
params: None

Actor: Sync
entrypoint: None()
actions: ['SyncReset']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['LookAtGimmick']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['PlayTriangleAnimation', 'BeCapturedTriangleToPastedActor']
queries: []
params: None

Actor: NorthForestRelic
entrypoint: None()
actions: []
queries: ['CheckPasted']
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayJingle']
queries: []
params: None

void RideRelic() {
    Sync.SyncReset()
    Player.LookAtGimmick({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    if !NorthForestRelic.CheckPasted() {
        Event24:
        NorthForestPedestal.PlayOnMaterialAnim()
        Timer.Wait({'time': 1.7000000476837158})
        GameControl.LoadArea({'syncLoad': True, 'location': 'StoneMonument', 'extentsX': 20.0, 'extentsZ': 20.0, 'extentsY': 10.0})

        fork {
            Timer.Wait({'time': 0.30000001192092896})
            Camera.MoveToWithTimeout({'targetPositionY': 10.5, 'chaseRatio': 1.0, 'targetPositionX': 198.75, 'targetPositionZ': 75.0, 'maxSpeed': 0.0, 'timeout': 0.0})
            Timer.Wait({'time': 0.20000000298023224})
        } {
            Fade.StartPreset({'preset': 'FadeOutFastB'})
        }

        Fade.StartPreset({'preset': 'FadeInFast'})
        NorthForestPedestal.SetActorSwitch({'value': True, 'switchIndex': 0})
        if !EventFlags.CheckFlag({'symbol': 'NorthForest_PedestalOn_A'}) {
            Event1:
            Timer.Wait({'time': 2.0})

            fork {
                Timer.Wait({'time': 0.30000001192092896})
                Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})
                Timer.Wait({'time': 0.20000000298023224})
            } {
                Fade.StartPreset({'preset': 'FadeOutFastB'})
            }

            if !EventFlags.CheckFlag({'symbol': 'NorthForest_PedestalOn_A'}) {
                Event14:
                Fade.StartPreset({'preset': 'FadeInFast'})
            } else
            if !EventFlags.CheckFlag({'symbol': 'NorthForest_PedestalOn_B'}) {
                goto Event14
            } else
            if !EventFlags.CheckFlag({'symbol': 'NorthForest_PedestalOn_C'}) {
                goto Event14
            } else
            if !EventFlags.CheckFlag({'symbol': 'NorthForest_PedestalOn_D'}) {
                goto Event14
            } else
            if !EventFlags.CheckFlag({'symbol': 'NorthForest_PedestalOn_E'}) {
                goto Event14
            } else
            if EventFlags.CheckFlag({'symbol': 'NorthForest_PedestalOn_F'}) {
                EventFlags.SetFlag({'symbol': 'NorthForest_PedestalOn_All', 'value': True})
            }
            goto Event14
        } else
        if !EventFlags.CheckFlag({'symbol': 'NorthForest_PedestalOn_B'}) {
            goto Event1
        } else
        if !EventFlags.CheckFlag({'symbol': 'NorthForest_PedestalOn_C'}) {
            goto Event1
        } else
        if !EventFlags.CheckFlag({'symbol': 'NorthForest_PedestalOn_D'}) {
            goto Event1
        } else
        if !EventFlags.CheckFlag({'symbol': 'NorthForest_PedestalOn_E'}) {
            goto Event1
        } else
        if !EventFlags.CheckFlag({'symbol': 'NorthForest_PedestalOn_F'}) {
            goto Event1
        } else {
            Timer.Wait({'time': 0.5})
            Audio.PlayJingle({'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
            goto Event1
        }
    } else {
        Partner[companion].PlayTriangleAnimation({'animName': 'Triangle_inside', 'blendTime': 0.20000000298023224, 'actor': ActorIdentifier(name="NorthForestRelic"), 'restart': False, 'delay': 0.0})
        Partner[companion].BeCapturedTriangleToPastedActor({'actor': ActorIdentifier(name="NorthForestRelic")})
        Timer.Wait({'time': 0.800000011920929})
        goto Event24
    }
}
