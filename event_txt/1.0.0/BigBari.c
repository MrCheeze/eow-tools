-------- EventFlow: BigBari --------

Actor: GameControl
entrypoint: None()
actions: ['RequestAutoSave', 'ForbidSave', 'UnforbidSave']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayBGM', 'PlayZoneBGM', 'PlayJingle']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Reset']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['UpdateStrongRespawnPoint', 'ForceTurn']
queries: []
params: None

Actor: BigBari
entrypoint: None()
actions: ['PlayAnimation', 'PlayAngryMaterialAnim', 'LookAtGimmick', 'CameraLockon', 'RoomDoorOpen']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['GetStatus']
params: None

Actor: Zelda
entrypoint: None()
actions: ['SetRestartPositionToActor']
queries: []
params: None

Actor: WarpBoss
entrypoint: None()
actions: ['LookAtGimmick']
queries: []
params: None

void Angry() {

    fork {
        BigBari.LookAtGimmick({'distanceOffset': 10.0, 'duration': 1.0, 'chaseRatio': 0.30000001192092896, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})

        fork {
            BigBari.PlayAngryMaterialAnim()
        } {
            BigBari.PlayAnimation({'name': 'ev_anger', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    } {

        call EvResetCommon.AngryReset()

    }

}

void Dead() {

    call BossCommon.HitStop({'enemy': ActorIdentifier(name="BigBari")})


    call BossCommon.MiniBossExtinction({'enemy': ActorIdentifier(name="BigBari")})

    Timer.Wait({'time': 0.5})
    WarpBoss.LookAtGimmick({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvB_BigBariDead'})
    Timer.Wait({'time': 0.5})
    Audio.PlayJingle({'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
    BigBari.RoomDoorOpen()
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Audio.PlayZoneBGM({'stopbgm': True})
    GameControl.UnforbidSave()
    GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
    if QuestSystem.GetStatus({'questKey': 'BigBari_Coast010'}) {
        QuestSystem.SetProgress({'symbol': 'BigBari_Coast010:507103064', 'isShowTelopInEvent': False, 'isFrontFade': False})
    }
}

void Appear() {
    Player.ForceTurn({'direction': 3})
    Zelda.SetRestartPositionToActor({'distance': -6.0, 'direction': 3, 'stance': 'Ground'})
    GameControl.RequestAutoSave({'name': 'BigBari', 'immediate': True, 'needsStartupEvent': False, 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})

    call BossCommon.PreMiniBoss()


    call BossCommon.MiniBossDoorClose({'enemy': ActorIdentifier(name="BigBari")})

    BigBari.LookAtGimmick({'distanceOffset': 5.0, 'duration': 1.0, 'chaseRatio': 0.05000000074505806, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})

    fork {
        BigBari.PlayAngryMaterialAnim()
    } {
        BigBari.PlayAnimation({'name': 'ev_anger', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Audio.PlayBGM({'volume': 1.0, 'label': 'BGM_BATTLE_MIDDLE_BOSS1', 'ignoreSkip': True})
    BigBari.CameraLockon({'maxSpeed': 100.0})
    GameControl.ForbidSave()
    EventFlags.SetFlag({'value': True, 'symbol': 'EvB_BigBariAppear'})
    Player.UpdateStrongRespawnPoint()
}
