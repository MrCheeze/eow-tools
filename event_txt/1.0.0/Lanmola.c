-------- EventFlow: Lanmola --------

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Hud
entrypoint: None()
actions: ['MiniMapOnOff']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayZoneBGM', 'StopAllBGM', 'PlayBGM', 'PlayOneshotSystemSE']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['EndInnerScroll', 'Quake', 'Reset']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['SetCanSkip']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['ResetFloorAbyss', 'RequestAutoSave', 'UnforbidSave', 'ForbidSave']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['CheckProgress']
params: None

Actor: Lanmola
entrypoint: None()
actions: ['StartBattle', 'Destroy', 'CameraLockoff', 'SetActorSwitch', 'ForceBreakRock']
queries: []
params: None

Actor: SandCover
entrypoint: None()
actions: ['StartSink', 'SetPassThrough', 'StartFloat']
queries: []
params: None

void LanmolaStart() {
    GameControl.RequestAutoSave({'immediate': True, 'name': 'Lanmola', 'needsStartupEvent': False, 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
    Hud.MiniMapOnOff({'isOn': False})

    fork {

        call BossCommon.PreMiniBoss()

    } {
        GameControl.ResetFloorAbyss()
    } {
        FlowControl.SetCanSkip({'enable': True})
    }


    fork {
        Audio.StopAllBGM({'duration': 1.0})
    } {
        SandCover.StartSink()
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_SAND_RUNOUT2_LDUNG', 'volume': 1.0, 'pitch': 1.0})
    } {
        Camera.Quake({'initPower': 1, 'targetPower': 2, 'duration': 1.0})
    }

    Timer.Wait({'time': 1.0})
    SandCover.SetPassThrough({'isPassThrough': True})
    Audio.PlayBGM({'label': 'BGM_BATTLE_MIDDLE_BOSS1', 'volume': 1.0, 'ignoreSkip': True})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Camera.Quake({'targetPower': 0, 'initPower': 0, 'duration': 0.0})
    Lanmola.StartBattle()
    GameControl.ForbidSave()
}

void LanmolaEnd() {

    call BossCommon.HitStopBigBoss({'enemy': ActorIdentifier(name="Lanmola")})


    fork {

        call BossCommon.LanmolaExtinction({'enemy': ActorIdentifier(name="Lanmola")})

    } {
        Lanmola.ForceBreakRock()
    }

    SandCover.StartFloat()
    SandCover.SetPassThrough({'isPassThrough': False})
    Lanmola.SetActorSwitch({'value': True, 'switchIndex': 2})
    Lanmola.Destroy()
    Camera.EndInnerScroll()
    Lanmola.CameraLockoff()
    Audio.PlayZoneBGM({'stopbgm': True})
    Hud.MiniMapOnOff({'isOn': True})
    GameControl.UnforbidSave()
    GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
    if !QuestSystem.CheckProgress({'symbol': 'Lanmola_Desert010:2015589749'}) {
        QuestSystem.SetProgress({'symbol': 'Lanmola_Desert010:1393436342', 'isShowTelopInEvent': False, 'isFrontFade': False})
    }
}
