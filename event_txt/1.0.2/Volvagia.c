-------- EventFlow: Volvagia --------

Actor: GameControl
entrypoint: None()
actions: ['ForbidSave', 'RequestAutoSave', 'RequestLevelJump', 'ForbidLaunchApplet', 'UnforbidLaunchApplet']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['StopZoneBgm', 'PlayBGM', 'EnablePlaySeFromTailor', 'DisablePlaySeFromTailor', 'StopAllSE', 'WaitSamplePositionAndStopAndPlayBossVolcanoBgm', 'WaitSamplePositionAndStopAndPlayBossVolcanoBridgeBgm', 'PlayOneshotSystemSE', 'StopAllBGM', 'Prepare', 'StopZoneBaseAmbience']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: Camera
entrypoint: None()
actions: ['Reset', 'LerpDofSettings', 'PlayActorOriginCameraAnimation']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['WarpToActorLinkedPointWithCompassPoint', 'SetVisibility', 'AimCompassPoint', 'PlayAnimation', 'SetInterestIkEnabled', 'SetGravityEnable', 'WarpToActor', 'LookAtGimmick', 'CameraLockoff']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['InvokeTimeline', 'PreloadTimeline', 'SetCanSkip']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimCompassPoint']
queries: []
params: None

Actor: Volvagia
entrypoint: None()
actions: ['PlayAnimation', 'CameraLockoff', 'SetVisibility', 'PlayAnimationNoWait', 'PlayTailorOtherChannelNoWait', 'PlayMaterialAnimationNoWait', 'StopTailorOtherChannel', 'CameraLockon', 'Destroy', 'ResetActiveAndPesteActors', 'SetCullMode', 'LookAtTalker']
queries: []
params: None

Actor: LavaHole[LavaHole01]
entrypoint: None()
actions: ['SetVisibility', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: ItemHeartContainer
entrypoint: None()
actions: ['SetVisibility']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: BattleChallenge
entrypoint: None()
actions: ['SetNextLevelAndLocation', 'ShowTimer']
queries: ['GetConditionNumber']
params: None

Actor: Area
entrypoint: None()
actions: ['SetRestartPositionToLinkedPoint']
queries: []
params: None

Actor: PartnerPhoton[d]
entrypoint: None()
actions: ['WarpToActorLinkedPoint']
queries: []
params: None

Actor: PartnerPhoton[e]
entrypoint: None()
actions: ['WarpToActorLinkedPoint']
queries: []
params: None

Actor: PartnerPhoton[f]
entrypoint: None()
actions: ['WarpToActorLinkedPoint']
queries: []
params: None

Actor: Movie
entrypoint: None()
actions: ['Play', 'Close', 'Prepare']
queries: []
params: None

Actor: MapWindUpward[MapWindUpward_Volvagia01]
entrypoint: None()
actions: ['StopTailorOtherChannel', 'PlayTailorOtherChannelNoWait', 'Activate']
queries: []
params: None

Actor: MapWindUpward[MapWindUpward_Volvagia02]
entrypoint: None()
actions: ['StopTailorOtherChannel', 'PlayTailorOtherChannelNoWait', 'Activate']
queries: []
params: None

Actor: MapWindUpward[MapWindUpward_Volvagia03]
entrypoint: None()
actions: ['StopTailorOtherChannel', 'PlayTailorOtherChannelNoWait', 'Activate']
queries: []
params: None

Actor: MapWindUpward[MapWindUpward_Volvagia04]
entrypoint: None()
actions: ['StopTailorOtherChannel', 'PlayTailorOtherChannelNoWait', 'Activate']
queries: []
params: None

Actor: MinigameTimer
entrypoint: None()
actions: ['Stop']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['WarpToActorLinkedPointWithCompassPoint', 'SetVisibility', 'AimCompassPoint', 'PlayAnimation', 'PlayAnimationEx']
queries: []
params: None

Actor: PartnerPhoton[a]
entrypoint: None()
actions: ['WarpToActorLinkedPoint']
queries: []
params: None

Actor: PartnerPhoton[b]
entrypoint: None()
actions: ['WarpToActorLinkedPoint']
queries: []
params: None

Actor: PartnerPhoton[c]
entrypoint: None()
actions: ['WarpToActorLinkedPoint']
queries: []
params: None

void PhaseChange() {
    Audio.WaitSamplePositionAndStopAndPlayBossVolcanoBgm({'stoplabel': 'BGM_BATTLE_BOSS_VOLCANO', 'label': 'BGM_BATTLE_BOSS_VOLCANO_BRIDGE'})
    Volvagia.LookAtTalker({'duration': 0.5, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 10.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})

    fork {
        Volvagia.PlayAnimation({'name': 'ev_anger', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Volvagia.SetVisibility({'visible': True})
    }

    Audio.WaitSamplePositionAndStopAndPlayBossVolcanoBridgeBgm({'stoplabel': 'BGM_BATTLE_BOSS_VOLCANO_BRIDGE', 'label': 'BGM_BATTLE_BOSS_VOLCANO2'})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
}

void Dead() {

    call BossCommon.HitStopBigBoss({'enemy': ActorIdentifier(name="Volvagia")})


    fork {
        MapWindUpward[MapWindUpward_Volvagia01].StopTailorOtherChannel({'channel': 'wind', 'index': -1})
    } {
        MapWindUpward[MapWindUpward_Volvagia02].StopTailorOtherChannel({'channel': 'wind', 'index': -1})
    } {
        MapWindUpward[MapWindUpward_Volvagia03].StopTailorOtherChannel({'channel': 'wind', 'index': -1})
    } {
        MapWindUpward[MapWindUpward_Volvagia04].StopTailorOtherChannel({'channel': 'wind', 'index': -1})
    }

    Volvagia.PlayAnimationNoWait({'name': 'ev_dead', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Volvagia.PlayTailorOtherChannelNoWait({'channel': 'PartnerPhoton_Release', 'restart': False, 'index': -1, 'stopOnSkipped': True})

    fork {
        Timer.Wait({'time': 1.6670000553131104})

        call Dissolve.Dissolve({'actor': ActorIdentifier(name="Volvagia")})

        Volvagia.PlayMaterialAnimationNoWait({'name': 'Volvagia_dissolve', 'layer': 0})
        Volvagia.StopTailorOtherChannel({'channel': 'Manefire', 'index': -1})
    } {
        Timer.Wait({'time': 3.3329999446868896})
    }

    Timer.Wait({'time': 0.5})

    fork {

        call BossCommon.VolvagiaExtinction({'enemy': ActorIdentifier(name="Volvagia")})

    }

    Volvagia.CameraLockoff()
    EventFlags.SetFlag({'value': True, 'symbol': 'volcano_AreaBBoss'})

    call TouchWorldGrove_AreaC()

}

void Appear() {
    Audio.StopAllBGM({'duration': 2.0})
    Audio.Prepare({'label': 'BGM_EV_VOLCANO_BOSSAPPEAR', 'kind': 0, 'volume': 1.0})

    call EvResetCommon.AllReset_02()


    fork {
        MapWindUpward[MapWindUpward_Volvagia01].StopTailorOtherChannel({'channel': 'wind', 'index': -1})
    } {
        MapWindUpward[MapWindUpward_Volvagia02].StopTailorOtherChannel({'channel': 'wind', 'index': -1})
    } {
        MapWindUpward[MapWindUpward_Volvagia03].StopTailorOtherChannel({'channel': 'wind', 'index': -1})
    } {
        MapWindUpward[MapWindUpward_Volvagia04].StopTailorOtherChannel({'channel': 'wind', 'index': -1})
    }


    fork {
        Player.CameraLockoff()
        Player.LookAtGimmick({'offsetY': 2.0, 'offsetZ': -6.0, 'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'keep': False})
        Timer.Wait({'time': 0.10000000149011612})
        Fade.StartPreset({'preset': 'FadeInSlow'})
    } {
        Player.SetGravityEnable({'enable': False})
        Player.WarpToActor({'offsetY': 9.0, 'actor': ActorIdentifier(name="Player"), 'distance': 0.0, 'offsetX': 0.0})
        Timer.Wait({'time': 0.5})
        Player.SetGravityEnable({'enable': True})
    }


    call AppearCommon()

    GameControl.ForbidSave()
}

void TouchWorldGrove_AreaC() {
    Audio.StopZoneBgm()
    Volvagia.ResetActiveAndPesteActors({'child': True, 'cemeteryRevive': False, 'defeatedThrough': False, 'aliveCemeteryRevive': False})
    GameControl.ForbidLaunchApplet()

    fork {
        Partner[companion].WarpToActorLinkedPointWithCompassPoint({'direction': 2, 'index': 0, 'actor': ActorIdentifier(name="Volvagia"), 'offsetY': 0.0})
    } {
        ItemHeartContainer.SetVisibility({'visible': False})
    } {
        PartnerPhoton[a].WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="Volvagia"), 'offsetY': 0.0})
    } {
        PartnerPhoton[b].WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="Volvagia"), 'offsetY': 0.0})
    } {
        PartnerPhoton[c].WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="Volvagia"), 'offsetY': 0.0})
    } {
        PartnerPhoton[d].WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="Volvagia"), 'offsetY': 0.0})
    } {
        PartnerPhoton[e].WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="Volvagia"), 'offsetY': 0.0})
    } {
        PartnerPhoton[f].WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="Volvagia"), 'offsetY': 0.0})
    }


    fork {

        call GeneralSequence.TriRelease()

    } {
        Timer.Wait({'time': 29.299999237060547})
        EventFlags.SetFlag({'value': True, 'symbol': 'volcano_TouchWedge'})
        Fade.StartPreset({'preset': 'FadeOutNormalW'})
    } {
        Player.SetGravityEnable({'enable': False})
        Player.WarpToActorLinkedPointWithCompassPoint({'direction': 2, 'index': 0, 'offsetY': -0.75, 'actor': ActorIdentifier(name="Volvagia")})
    } {

        call EvResetCommon.AllReset()

    }


    fork {
        Movie.Prepare({'filename': 'rd045_EvC_WorldGlobeActivate'})
    } {
        Audio.StopZoneBgm()
    } {
        Audio.StopZoneBaseAmbience()
    }


    fork {
        Movie.Play({'autoClose': False})
    } {
        Timer.Wait({'time': 1.0166699886322021})
        Audio.PlayBGM({'ignoreSkip': True, 'label': 'BGM_EV_REVIVING_AREA', 'volume': 1.0})
    } {
        Timer.Wait({'time': 0.8299999833106995})
        Timer.Wait({'time': 1.0})
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_WORLD_REPAIR_OTHER', 'volume': 1.0, 'pitch': 1.0})
    }

    Fade.StartPreset({'preset': 'CutOutW'})

    fork {
        Movie.Close()
    } {
        GameControl.UnforbidLaunchApplet()
    }

    GameControl.RequestLevelJump({'locator': 'Ev_AfterReleasTriTalk', 'level': 'FieldBoundary004_002', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void BC_Appear() {
    switch BattleChallenge.GetConditionNumber() {
      case 2:
        Event62:
        Audio.StopAllBGM({'duration': 2.0})
        Audio.Prepare({'label': 'BGM_EV_VOLCANO_BOSSAPPEAR', 'kind': 0, 'volume': 1.0})

        call EvResetCommon.AllReset_02()

        Timer.Wait({'time': 0.20000000298023224})
        Fade.StartPreset({'preset': 'FadeInNormal'})
        Timer.Wait({'time': 0.20000000298023224})

        call AppearCommon()


        fork {
            MapWindUpward[MapWindUpward_Volvagia01].Activate()
        } {
            MapWindUpward[MapWindUpward_Volvagia02].Activate()
        } {
            MapWindUpward[MapWindUpward_Volvagia03].Activate()
        } {
            MapWindUpward[MapWindUpward_Volvagia04].Activate()
        }

      case 3:
        BattleChallenge.ShowTimer()
        Player.SetGravityEnable({'enable': False})
        Player.WarpToActor({'actor': ActorIdentifier(name="Player"), 'offsetY': 9.0, 'distance': 0.0, 'offsetX': 0.0})
        Player.SetGravityEnable({'enable': True})
        goto Event62
    }
}

void BC_Dead() {

    call BossCommon.HitStopBigBoss({'enemy': ActorIdentifier(name="Volvagia")})


    fork {
        MapWindUpward[MapWindUpward_Volvagia01].StopTailorOtherChannel({'channel': 'wind', 'index': -1})
    } {
        MapWindUpward[MapWindUpward_Volvagia02].StopTailorOtherChannel({'channel': 'wind', 'index': -1})
    } {
        MapWindUpward[MapWindUpward_Volvagia03].StopTailorOtherChannel({'channel': 'wind', 'index': -1})
    } {
        MapWindUpward[MapWindUpward_Volvagia04].StopTailorOtherChannel({'channel': 'wind', 'index': -1})
    }

    Volvagia.PlayAnimationNoWait({'name': 'ev_dead', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 1.6670000553131104})

        call Dissolve.Dissolve({'actor': ActorIdentifier(name="Volvagia")})

        Volvagia.PlayMaterialAnimationNoWait({'name': 'Volvagia_dissolve', 'layer': 0})
        Volvagia.StopTailorOtherChannel({'channel': 'Manefire', 'index': -1})
    } {
        Timer.Wait({'time': 3.3329999446868896})
    }

    Timer.Wait({'time': 1.1670000553131104})

    call BossCommon.VolvagiaExtinction({'enemy': ActorIdentifier(name="Volvagia")})

    Volvagia.CameraLockoff()
    Volvagia.Destroy()
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    MinigameTimer.Stop()
    if BattleChallenge.GetConditionNumber() in [2, 3] {
        BattleChallenge.SetNextLevelAndLocation({'NextLocatorName': 'BC_BossGhoma_Start', 'NextLevelName': 'BC_BossGhoma'})
    }
}

void AppearCommon() {
    Volvagia.SetCullMode({'cullMode': 0, 'enabled': True})
    FlowControl.SetCanSkip({'enable': True})

    fork {
        Timer.Wait({'time': 0.5})
    } {
        FlowControl.PreloadTimeline({'filename': 'Volvagia'})
    }


    fork {
        Player.SetVisibility({'visible': True})
    } {
        Partner[companion].SetVisibility({'visible': True})
    } {
        Volvagia.SetVisibility({'visible': False})
    } {
        LavaHole[LavaHole01].SetVisibility({'visible': True})
    }


    fork {
        Player.AimCompassPoint({'direction': 2, 'withoutTurn': True, 'duration': 0.4000000059604645, 'immediateTurn': False})
        Timer.Wait({'time': 0.5})
        Player.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].AimCompassPoint({'duration': 0.4000000059604645, 'direction': 2, 'withoutTurn': False, 'immediateTurn': False})
        Timer.Wait({'time': 0.5})
        Partner[companion].PlayAnimationEx({'time': 0.0, 'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Camera.PlayActorOriginCameraAnimation({'chaseRatio': 1.0, 'path': 'actor/Volvagia.bfres', 'name': 'Volvagia_appear00_cam', 'target': ActorIdentifier(name="Player"), 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Volvagia.PlayAnimation({'name': 'ev_appear_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 2.0})
        LavaHole[LavaHole01].PlayTailorOtherChannelNoWait({'channel': 'SignLavaBubble', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    }


    fork {
        Player.SetInterestIkEnabled({'enable': False})
        Player.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Player.PlayAnimation({'name': 'search', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})
        Partner[companion].PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Camera.PlayActorOriginCameraAnimation({'chaseRatio': 1.0, 'path': 'actor/Volvagia.bfres', 'name': 'Volvagia_appear00_cam', 'target': ActorIdentifier(name="Player"), 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    }

    Camera.LerpDofSettings({'kind': 7, 'TiltShiftCenterX': 0.0, 'BlurRatio': 1.0, 'BlurSizeScale': 1.0, 'FocusRange': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftGamma': 2.0, 'TiltShiftBlurSizeScale': 1.0, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofBlurRatio': 1.0, 'duration': 0.0, 'TiltShiftDofBackBlurFadeWidth': 0.05000000074505806, 'TiltShiftCenterY': 0.699999988079071, 'FocalDistance': 45.0, 'TiltShiftRange': 0.18000000715255737, 'TiltShiftDofBackCurve': 0.5, 'TiltShiftDofFocalDistance': 31.0, 'TiltShiftDofBackRange': 31.0, 'noWait': False})
    Audio.DisablePlaySeFromTailor()
    FlowControl.InvokeTimeline({'filename': 'Volvagia', 'rate': 1.0})

    fork {
        Timer.Wait({'time': 0.10000000149011612})
        Player.SetVisibility({'visible': True})
        Zelda.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Event126:
        Volvagia.CameraLockon({'maxSpeed': 7.0})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Partner[companion].SetVisibility({'visible': True})
        Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        goto Event126
    }

    Volvagia.SetCullMode({'cullMode': 0, 'enabled': False})
    Audio.EnablePlaySeFromTailor()
    Audio.PlayBGM({'ignoreSkip': True, 'label': 'BGM_BATTLE_BOSS_VOLCANO', 'volume': 1.0})

    fork {
        MapWindUpward[MapWindUpward_Volvagia01].PlayTailorOtherChannelNoWait({'channel': 'wind', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        MapWindUpward[MapWindUpward_Volvagia02].PlayTailorOtherChannelNoWait({'channel': 'wind', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        MapWindUpward[MapWindUpward_Volvagia03].PlayTailorOtherChannelNoWait({'channel': 'wind', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        MapWindUpward[MapWindUpward_Volvagia04].PlayTailorOtherChannelNoWait({'channel': 'wind', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    }

}

void Volvagia_WellDown() {
    Area.SetRestartPositionToLinkedPoint({'direction': 2, 'pointIndex': 0, 'stance': 'Ground'})
    GameControl.RequestAutoSave({'immediate': True, 'name': 'Volvagia', 'needsStartupEvent': False, 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})

    fork {

        call FloorChangeCommon._WarpCommon({'fadePreset': 'FadeOutNormalB'})

    } {
        Audio.StopAllSE({'duration': 1.0})
    }


    call EvResetCommon.AllReset_02()

    if !EventFlags.CheckFlag({'symbol': 'volcano_AreaBBoss'}) {
        GameControl.RequestLevelJump({'locator': 'VolvagiaStart', 'level': 'FieldBoundary004_002', 'offsetX': 0.0, 'offsetZ': 0.0})
    } else {
        GameControl.RequestLevelJump({'level': 'FieldBoundary004_002', 'locator': 'DeadBossStart', 'offsetX': 0.0, 'offsetZ': 0.0})
    }
}
