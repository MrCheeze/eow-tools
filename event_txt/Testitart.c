-------- EventFlow: Testitart --------

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
actions: ['PlayBGM', 'PlayZoneBGM', 'PlayJingle', 'PlayOneshotSystemSE']
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
actions: ['WarpToActorWithCompassPoint', 'AbsorbAllPastedActors', 'ResetCarriedActor', 'UpdateStrongRespawnPoint', 'ForceTurn']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['SetRestartPositionToActor']
queries: []
params: None

Actor: Testitart
entrypoint: None()
actions: ['DeadAction', 'AppearHead', 'LookAtTalker', 'CameraLockon', 'EscapeHeadAll', 'CameraLockoff', 'DestroyTreasureBox', 'RoomDoorOpen', 'PlayTailorOtherChannelNoWait', 'PlayAnimation', 'LookAtGimmick', 'DisableCollision', 'SetGravityEnable']
queries: []
params: None

Actor: TraceTestitart[tes0]
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait', 'SetVisibility', 'Destroy']
queries: []
params: None

Actor: TraceTestitart[tes1]
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait', 'SetVisibility', 'Destroy']
queries: []
params: None

Actor: TraceTestitart[tes2]
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait', 'SetVisibility', 'Destroy']
queries: []
params: None

Actor: TraceTestitart[tes3]
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait', 'SetVisibility', 'Destroy']
queries: []
params: None

Actor: TraceTestitart[tes4]
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait', 'SetVisibility', 'Destroy']
queries: []
params: None

Actor: TraceTestitart[tes5]
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait', 'SetVisibility', 'Destroy']
queries: []
params: None

Actor: TraceTestitart[tes6]
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait', 'SetVisibility', 'Destroy']
queries: []
params: None

Actor: TraceTestitart[tes7]
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait', 'SetVisibility', 'Destroy']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

void AppearSecond() {
    Player.ForceTurn({'direction': 2})
    Zelda.SetRestartPositionToActor({'distance': -7.0, 'direction': 2, 'stance': 'Ground'})
    GameControl.RequestAutoSave({'name': 'Testitart', 'immediate': True, 'needsStartupEvent': False, 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})

    call BossCommon.PreMiniBoss()


    call BossCommon.MiniBossDoorClose({'enemy': ActorIdentifier(name="Testitart")})

    Testitart.LookAtTalker({'duration': 1.0, 'chaseRatio': 0.05000000074505806, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 0.5})
    Testitart.AppearHead({'index': 0})
    Timer.Wait({'time': 0.5})
    Testitart.AppearHead({'index': 1})
    Timer.Wait({'time': 0.5})
    Testitart.AppearHead({'index': 2})
    Timer.Wait({'time': 0.5})
    Testitart.AppearHead({'index': 3})
    Timer.Wait({'time': 1.0})

    fork {
        Camera.Reset({'chaseRatio': 0.07500000298023224, 'resetPlayerCamera': False})
        Testitart.CameraLockon({'maxSpeed': 100.0})
    } {
        Audio.PlayBGM({'label': 'BGM_BATTLE_MIDDLE_BOSS1', 'volume': 1.0, 'ignoreSkip': True})
    }

    GameControl.ForbidSave()
    Player.UpdateStrongRespawnPoint()
}

void AppearThird() {
    Zelda.SetRestartPositionToActor({'distance': -7.0, 'direction': 2, 'stance': 'Ground'})
    GameControl.RequestAutoSave({'name': 'Testitart01', 'immediate': True, 'needsStartupEvent': False, 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
    Fade.StartPreset({'preset': 'FadeInSlow'})

    call BossCommon.PreMiniBoss()


    call BossCommon.MiniBossDoorClose({'enemy': ActorIdentifier(name="Testitart")})

    Testitart.LookAtTalker({'duration': 1.0, 'chaseRatio': 0.05000000074505806, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 0.5})
    Testitart.AppearHead({'index': 0})
    Timer.Wait({'time': 0.5})
    Testitart.AppearHead({'index': 1})
    Timer.Wait({'time': 0.5})
    Testitart.AppearHead({'index': 2})
    Timer.Wait({'time': 0.5})
    Testitart.AppearHead({'index': 3})
    Timer.Wait({'time': 1.0})

    fork {
        Camera.Reset({'chaseRatio': 0.07500000298023224, 'resetPlayerCamera': False})
        Testitart.CameraLockon({'maxSpeed': 100.0})
    } {
        Audio.PlayBGM({'label': 'BGM_BATTLE_MIDDLE_BOSS1', 'volume': 1.0, 'ignoreSkip': True})
    }

    GameControl.ForbidSave()
}

void DeadSecond() {

    call BossCommon.HitStop({'enemy': ActorIdentifier(name="Testitart")})

    Testitart.EscapeHeadAll()
    Timer.Wait({'time': 1.0})
    Testitart.DestroyTreasureBox()
    Testitart.SetGravityEnable({'enable': False})
    Testitart.DisableCollision()
    Testitart.PlayAnimation({'name': 'dive_b', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.30000001192092896})
        Testitart.PlayTailorOtherChannelNoWait({'channel': 'RunAway', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Timer.Wait({'time': 0.5})

        call TraceTestitartVanish_01()

    }

    Testitart.CameraLockoff()
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Timer.Wait({'time': 0.20000000298023224})

    call EvResetCommon.AllReset_03()


    call TraceTestitartVanish_00()

    EventFlags.SetFlag({'value': True, 'symbol': 'L005R017MBoss02Dead'})
    Testitart.RoomDoorOpen()
    QuestSystem.SetProgress({'isShowTelopInEvent': False, 'symbol': 'Jungle:4124111273', 'isFrontFade': False})
    GameControl.UnforbidSave()
    GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
    Timer.Wait({'time': 1.0})
    Audio.PlayZoneBGM({'stopbgm': True})
}

void DeadThird() {

    call BossCommon.HitStop({'enemy': ActorIdentifier(name="Testitart")})

    Timer.Wait({'time': 1.5})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Timer.Wait({'time': 1.0})

    fork {
        Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
        Player.ResetCarriedActor()
    } {
        Player.WarpToActorWithCompassPoint({'distance': 5.0, 'actor': ActorIdentifier(name="Testitart"), 'direction': 2, 'offsetY': 0.0, 'offsetX': 0.0})
    } {
        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    }

    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})

    fork {

        call TraceTestitartVanish_02()

    } {
        Timer.Wait({'time': 1.0})

        call EvResetCommon.AllReset_03()

        Timer.Wait({'time': 0.5})
        Testitart.LookAtGimmick({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        Testitart.DeadAction()
    }

    Timer.Wait({'time': 2.0})
    Audio.PlayJingle({'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Timer.Wait({'time': 0.5})

    fork {
        Testitart.CameraLockoff()
    } {
        Testitart.RoomDoorOpen()
    }

    Timer.Wait({'time': 1.0})
    Audio.PlayZoneBGM({'stopbgm': True})
    EventFlags.SetFlag({'value': True, 'symbol': 'L005R020MBoss03Dead'})
    QuestSystem.SetProgress({'isShowTelopInEvent': False, 'symbol': 'Jungle:232149398', 'isFrontFade': False})
    GameControl.UnforbidSave()
    GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
}

void TraceTestitartVanish_02() {

    fork {
        Audio.PlayOneshotSystemSE({'label': 'SE_ENEMY_TESTITART_GRASS_WITHERS2', 'volume': 1.0, 'pitch': 1.0})
    } {
        TraceTestitart[tes0].PlayTailorOtherChannelNoWait({'channel': 'DryFalling', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        TraceTestitart[tes1].PlayTailorOtherChannelNoWait({'channel': 'DryFalling', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        TraceTestitart[tes2].PlayTailorOtherChannelNoWait({'channel': 'DryFalling', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        TraceTestitart[tes3].PlayTailorOtherChannelNoWait({'channel': 'DryFalling', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        TraceTestitart[tes4].PlayTailorOtherChannelNoWait({'channel': 'DryFalling', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        TraceTestitart[tes5].PlayTailorOtherChannelNoWait({'channel': 'DryFalling', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        TraceTestitart[tes6].PlayTailorOtherChannelNoWait({'channel': 'DryFalling', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        TraceTestitart[tes7].PlayTailorOtherChannelNoWait({'channel': 'DryFalling', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        TraceTestitart[tes0].SetVisibility({'visible': False})
        TraceTestitart[tes1].SetVisibility({'visible': False})
        TraceTestitart[tes2].SetVisibility({'visible': False})
        TraceTestitart[tes3].SetVisibility({'visible': False})
        TraceTestitart[tes4].SetVisibility({'visible': False})
        TraceTestitart[tes5].SetVisibility({'visible': False})
        TraceTestitart[tes6].SetVisibility({'visible': False})
        TraceTestitart[tes7].SetVisibility({'visible': False})
    }

}

void TraceTestitartVanish_00() {
    TraceTestitart[tes0].Destroy()
    TraceTestitart[tes1].Destroy()
    TraceTestitart[tes2].Destroy()
    TraceTestitart[tes3].Destroy()
    TraceTestitart[tes4].Destroy()
    TraceTestitart[tes5].Destroy()
    TraceTestitart[tes6].Destroy()
    TraceTestitart[tes7].Destroy()
}

void TraceTestitartVanish_01() {
    Timer.Wait({'time': 0.0})

    fork {
        Timer.Wait({'time': 2.0})
        TraceTestitart[tes0].PlayTailorOtherChannelNoWait({'channel': 'DryFalling', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        TraceTestitart[tes0].SetVisibility({'visible': False})
    } {
        Timer.Wait({'time': 2.25})
        TraceTestitart[tes1].PlayTailorOtherChannelNoWait({'channel': 'DryFalling', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        TraceTestitart[tes1].SetVisibility({'visible': False})
    } {
        Timer.Wait({'time': 2.5})
        TraceTestitart[tes2].PlayTailorOtherChannelNoWait({'channel': 'DryFalling', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        TraceTestitart[tes2].SetVisibility({'visible': False})
    } {
        Timer.Wait({'time': 2.75})
        TraceTestitart[tes3].PlayTailorOtherChannelNoWait({'channel': 'DryFalling', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        TraceTestitart[tes3].SetVisibility({'visible': False})
    } {
        Timer.Wait({'time': 3.0})
        TraceTestitart[tes4].PlayTailorOtherChannelNoWait({'channel': 'DryFalling', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        TraceTestitart[tes4].SetVisibility({'visible': False})
    } {
        Timer.Wait({'time': 3.25})
        TraceTestitart[tes5].PlayTailorOtherChannelNoWait({'channel': 'DryFalling', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        TraceTestitart[tes5].SetVisibility({'visible': False})
    } {
        Timer.Wait({'time': 3.5})
        TraceTestitart[tes6].PlayTailorOtherChannelNoWait({'channel': 'DryFalling', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        TraceTestitart[tes6].SetVisibility({'visible': False})
    } {
        Timer.Wait({'time': 3.75})
        TraceTestitart[tes7].PlayTailorOtherChannelNoWait({'channel': 'DryFalling', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        TraceTestitart[tes7].SetVisibility({'visible': False})
    } {
        Timer.Wait({'time': 2.0})
        Audio.PlayOneshotSystemSE({'label': 'SE_ENEMY_TESTITART_GRASS_WITHERS', 'volume': 1.0, 'pitch': 1.0})
    }

}
