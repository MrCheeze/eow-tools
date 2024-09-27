-------- EventFlow: DeguZol --------

Actor: Player
entrypoint: None()
actions: ['SetRestartPositionToActor', 'UpdateStrongRespawnPoint', 'ForceTurn']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayZoneBGM', 'PlayBGM', 'PlayJingle']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestAutoSave', 'ForbidSave', 'UnforbidSave']
queries: []
params: None

Actor: DeguZol04
entrypoint: None()
actions: []
queries: []
params: None

Actor: DeguZol01
entrypoint: None()
actions: ['CameraLockon', 'PlayAnimation', 'LookAtGimmick']
queries: []
params: None

Actor: DeguZol
entrypoint: None()
actions: ['LookAtGimmick', 'RoomDoorOpen']
queries: []
params: None

Actor: Door[ExitDoor]
entrypoint: None()
actions: ['LookAtGimmick']
queries: []
params: None

void Appear() {
    Player.ForceTurn({'direction': 2})
    Player.SetRestartPositionToActor({'distance': -7.5, 'direction': 2, 'stance': 'Ground'})
    GameControl.RequestAutoSave({'immediate': True, 'name': 'DeguZol', 'needsStartupEvent': False, 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})

    call BossCommon.PreMiniBoss()


    call BossCommon.MiniBossDoorClose({'enemy': ActorIdentifier(name="DeguZol")})

    if !EventFlags.CheckFlag({'symbol': 'EvG_DeguZolAppear'}) {
        EventFlags.SetFlag({'value': True, 'symbol': 'EvG_DeguZolAppear'})
    }
    DeguZol.LookAtGimmick({'duration': 1.0, 'chaseRatio': 0.05000000074505806, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})

    fork {
        DeguZol01.PlayAnimation({'name': 'ev_appear', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        DeguZol01.LookAtGimmick({'duration': 1.0, 'chaseRatio': 0.05000000074505806, 'keep': True, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    Audio.PlayBGM({'label': 'BGM_BATTLE_MIDDLE_BOSS1', 'volume': 1.0, 'ignoreSkip': True})
    DeguZol01.CameraLockon({'maxSpeed': 100.0})
    GameControl.ForbidSave()
    Player.UpdateStrongRespawnPoint()
}

void Dead() {

    call BossCommon.HitStopCustom({'enemy': ActorIdentifier(name="DeguZol04")})


    call BossCommon.MiniBossExtinction({'enemy': ActorIdentifier(name="DeguZol04")})

    Door[ExitDoor].LookAtGimmick({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    DeguZol.RoomDoorOpen()
    Timer.Wait({'time': 0.5})
    Audio.PlayJingle({'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
    if !EventFlags.CheckFlag({'symbol': 'EvG_DeguZolDead'}) {
        EventFlags.SetFlag({'value': True, 'symbol': 'EvG_DeguZolDead'})
    }
    Audio.PlayZoneBGM({'stopbgm': True})
    GameControl.UnforbidSave()
    GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
}
