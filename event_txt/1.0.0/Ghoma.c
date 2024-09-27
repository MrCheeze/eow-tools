-------- EventFlow: Ghoma --------

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['WarpToActorLinkedPointWithCompassPoint', 'SetVisibility', 'MoveToCompassPoint', 'SetRestartPositionToActor', 'PlayAnimation']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['InvokeTimeline', 'PreloadTimeline', 'SetCanSkip']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: Audio
entrypoint: None()
actions: ['StopZoneBgm', 'StopAllBGM', 'PlayBGM', 'WaitNextBeatSamplePositionAndStopAndPlayBossDesertBgm', 'WaitNextBeatSamplePositionAndStopAndPlayBossDesertBridgeBgm', 'PlayOneshotSystemSE', 'StopZoneBaseAmbience']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Reset', 'LerpDofSettings']
queries: []
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestAutoSave', 'ForbidSave', 'RequestLevelJump', 'ForbidLaunchApplet', 'UnforbidLaunchApplet', 'SetAllItemsVisibility']
queries: []
params: None

Actor: ItemHeartContainer
entrypoint: None()
actions: ['SetVisibility']
queries: []
params: None

Actor: Ghoma
entrypoint: None()
actions: ['PlayAnimation', 'CameraLockoff', 'PlayAnimationNoWait', 'LookAtGimmick', 'Deactivate', 'LookAtTalker', 'AwaitDown', 'PlayTailorOtherChannelNoWait', 'PlayMaterialAnimationNoWait', 'ItemDropToActor', 'Destroy', 'CameraLockon', 'RoomDoorClose', 'SetVisibility', 'SetCullMode', 'PlayMaterialAnimation', 'ResetActiveAndPesteActors', 'SetCollisionEnabled', 'SetGravityEnable']
queries: []
params: None

Actor: PartnerPhoton[d]
entrypoint: None()
actions: ['WarpToActorLinkedPoint']
queries: []
params: None

Actor: PartnerPhoton[b]
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

Actor: BattleChallenge
entrypoint: None()
actions: ['SetNextLevelAndLocation', 'ShowTimer']
queries: ['GetConditionNumber']
params: None

Actor: Movie
entrypoint: None()
actions: ['Play', 'Close', 'Prepare']
queries: []
params: None

Actor: PartnerPhoton[a]
entrypoint: None()
actions: ['WarpToActorLinkedPoint']
queries: []
params: None

Actor: PartnerPhoton[c]
entrypoint: None()
actions: ['WarpToActorLinkedPoint']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['WarpToActorLinkedPointWithCompassPoint', 'SetVisibility']
queries: []
params: None

void Appear() {
    Player.SetRestartPositionToActor({'distance': -9.0, 'direction': 2, 'stance': 'Ground'})
    GameControl.RequestAutoSave({'immediate': True, 'name': 'Ghoma', 'needsStartupEvent': False, 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
    if !EventFlags.CheckFlag({'symbol': 'EvF_BossAppear'}) {
        EventFlags.SetFlag({'value': True, 'symbol': 'EvF_BossAppear'})
    }

    call AppearCommon()

    GameControl.ForbidSave()
}

void Angry() {

    fork {
        Audio.WaitNextBeatSamplePositionAndStopAndPlayBossDesertBgm({'label': 'BGM_BATTLE_BOSS_JUNGLE_BRIDGE', 'stoplabel': 'BGM_BATTLE_BOSS_JUNGLE'})
        Ghoma.LookAtGimmick({'duration': 1.0, 'distanceOffset': 4.0, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})

        fork {
            Ghoma.PlayAnimation({'name': 'ev_anger', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 1.0})
        }

        Audio.WaitNextBeatSamplePositionAndStopAndPlayBossDesertBridgeBgm({'stoplabel': 'BGM_BATTLE_BOSS_JUNGLE_BRIDGE', 'label': 'BGM_BATTLE_BOSS_JUNGLE2'})
        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    } {

        call EvResetCommon.AngryReset()

    }

}

void Dead() {

    call BossCommon.HitStop({'enemy': ActorIdentifier(name="Ghoma")})

    Ghoma.PlayAnimationNoWait({'name': 'ev_dead', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Ghoma.PlayTailorOtherChannelNoWait({'channel': 'PartnerPhoton_Release', 'restart': False, 'index': -1, 'stopOnSkipped': True})

    fork {
        Timer.Wait({'time': 1.6670000553131104})

        call Dissolve.Dissolve({'actor': ActorIdentifier(name="Ghoma")})

        Ghoma.PlayMaterialAnimationNoWait({'name': 'Ghoma_dissolve', 'layer': 0})
    } {
        Timer.Wait({'time': 3.3329999446868896})
    }

    Timer.Wait({'time': 1.1670000553131104})

    fork {

        call BossCommon.BossExtinction({'enemy': ActorIdentifier(name="Ghoma")})

    } {
        Timer.Wait({'time': 1.6670000553131104})
        Ghoma.ItemDropToActor({'displacementY': 0.0, 'displacementX': 0.0, 'displacementZ': 0.0, 'linkedItemScatter': False})
    } {
        Ghoma.SetGravityEnable({'enable': False})
        Ghoma.SetCollisionEnabled({'enable': False})
    }

    Ghoma.CameraLockoff()
    Ghoma.Deactivate()
    Ghoma.CameraLockoff()
    Ghoma.Deactivate()
    EventFlags.SetFlag({'value': True, 'symbol': 'EvF_BossDead'})
    EventVariables.SetVariable({'symbol': 'Desert:58883905'})
    EventFlags.SetFlag({'value': True, 'symbol': 'L005BossDead'})
    QuestSystem.SetProgress({'symbol': 'Jungle:1057567431', 'isShowTelopInEvent': False, 'isFrontFade': False})

    call EvF_TouchWorldGlobe()

}

void EvF_TouchWorldGlobe() {
    Audio.StopZoneBgm()

    call EvResetCommon.AllResetBossDead({'disappearHorse': True})

    GameControl.SetAllItemsVisibility({'visible': False})
    Ghoma.ResetActiveAndPesteActors({'child': False, 'cemeteryRevive': False, 'defeatedThrough': False, 'aliveCemeteryRevive': False})
    GameControl.ForbidLaunchApplet()

    fork {
        PartnerPhoton[a].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Ghoma"), 'offsetY': 0.0})
    } {
        PartnerPhoton[b].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Ghoma"), 'offsetY': 0.0})
    } {
        PartnerPhoton[c].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Ghoma"), 'offsetY': 0.0})
    } {
        PartnerPhoton[d].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Ghoma"), 'offsetY': 0.0})
    } {
        PartnerPhoton[e].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Ghoma"), 'offsetY': 0.0})
    } {
        PartnerPhoton[f].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Ghoma"), 'offsetY': 0.0})
    }


    fork {
        Player.WarpToActorLinkedPointWithCompassPoint({'index': 1, 'direction': 2, 'actor': ActorIdentifier(name="Ghoma"), 'offsetY': 0.0})
    } {
        Partner[companion].WarpToActorLinkedPointWithCompassPoint({'index': 1, 'direction': 2, 'actor': ActorIdentifier(name="Ghoma"), 'offsetY': 0.0})
    } {
        ItemHeartContainer.SetVisibility({'visible': False})
    }


    fork {

        call GeneralSequence.TriRelease()

    } {
        Timer.Wait({'time': 29.299999237060547})
        EventVariables.SetVariable({'symbol': 'Jungle:2625441197'})
        Fade.StartPreset({'preset': 'FadeOutNormalW'})
        Audio.StopZoneBaseAmbience()
    }


    fork {
        Movie.Prepare({'filename': 'rd035_WorldGroveActive_AreaF'})
    } {
        Audio.StopZoneBgm()
    }


    fork {
        Movie.Play({'autoClose': False})
    } {
        Timer.Wait({'time': 1.0166699886322021})
        Audio.PlayBGM({'ignoreSkip': True, 'label': 'BGM_EV_REVIVING_AREA', 'volume': 1.0})
    } {
        Timer.Wait({'time': 1.8299999237060547})
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_WORLD_REPAIR_OTHER', 'volume': 1.0, 'pitch': 1.0})
    }

    Fade.StartPreset({'preset': 'CutOutW'})

    fork {
        Movie.Close()
    } {
        GameControl.UnforbidLaunchApplet()
    }

    EventFlags.SetFlag({'value': True, 'symbol': 'EvD_TouchWorldGlobe'})
    GameControl.RequestLevelJump({'locator': 'Ev_AfterRelieasPartnerTalk', 'level': 'L_Dungeon005', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void Down() {

    fork {
        Ghoma.LookAtTalker({'duration': 1.0, 'distanceOffset': 12.0, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {
        Ghoma.AwaitDown()
    }

    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
}

void BC_Appear() {
    BattleChallenge.ShowTimer()

    call AppearCommon()

}

void BC_Dead() {

    call BossCommon.HitStop({'enemy': ActorIdentifier(name="Ghoma")})

    Ghoma.PlayAnimationNoWait({'name': 'ev_dead', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 1.6670000553131104})

        call Dissolve.Dissolve({'actor': ActorIdentifier(name="Ghoma")})

        Ghoma.PlayMaterialAnimationNoWait({'name': 'Ghoma_dissolve', 'layer': 0})
    } {
        Timer.Wait({'time': 3.3329999446868896})
    }

    Timer.Wait({'time': 1.1670000553131104})

    fork {

        call BossCommon.BossExtinction({'enemy': ActorIdentifier(name="Ghoma")})

    } {
        Ghoma.SetGravityEnable({'enable': False})
        Ghoma.SetCollisionEnabled({'enable': False})
    }

    Ghoma.CameraLockoff()
    Ghoma.Destroy()
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    if BattleChallenge.GetConditionNumber() in [2, 3] {
        BattleChallenge.SetNextLevelAndLocation({'NextLevelName': 'BC_BossFreblaze', 'NextLocatorName': 'BC_BossFreblaze_Start'})
    }
}

void AppearCommon() {
    Audio.StopAllBGM({'duration': 2.0})

    call EvResetCommon.AllReset_02()


    fork {
        Fade.StartPreset({'preset': 'FadeInSlow'})
    } {
        Player.MoveToCompassPoint({'direction': 2, 'speed': 0, 'timeOut': 7.0, 'distance': 1.2000000476837158, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    FlowControl.SetCanSkip({'enable': True})
    Ghoma.RoomDoorClose()
    Player.PlayAnimation({'name': 'ev_lookback', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    FlowControl.PreloadTimeline({'filename': 'Ghoma'})

    fork {
        Player.SetVisibility({'visible': True})
    } {
        Partner[companion].SetVisibility({'visible': True})
    } {
        Ghoma.SetVisibility({'visible': True})
    }

    Camera.LerpDofSettings({'kind': 7, 'TiltShiftCenterX': 0.0, 'BlurRatio': 1.0, 'BlurSizeScale': 1.0, 'FocusRange': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftGamma': 2.0, 'TiltShiftBlurSizeScale': 1.0, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofBlurRatio': 1.0, 'duration': 0.0, 'TiltShiftDofBackBlurFadeWidth': 0.05000000074505806, 'FocalDistance': 45.0, 'TiltShiftRange': 0.18000000715255737, 'TiltShiftDofBackCurve': 0.5, 'TiltShiftDofFocalDistance': 48.0, 'TiltShiftDofBackRange': 48.0, 'TiltShiftCenterY': 0.7799999713897705, 'noWait': False})

    fork {
        FlowControl.InvokeTimeline({'filename': 'Ghoma', 'rate': 1.0})
    } {
        Timer.Wait({'time': 5.166999816894531})
        Ghoma.PlayMaterialAnimation({'name': 'attack_slpan_st', 'layer': 0})
        Timer.Wait({'time': 0.949999988079071})
        Ghoma.PlayMaterialAnimation({'name': 'attack_slpan_ed', 'layer': 0})
    }


    fork {
        Player.SetVisibility({'visible': True})
    } {
        Partner[companion].SetVisibility({'visible': True})
    } {
        Ghoma.SetCullMode({'cullMode': 1, 'enabled': True})
    }

    Audio.PlayBGM({'ignoreSkip': True, 'label': 'BGM_BATTLE_BOSS_JUNGLE', 'volume': 1.0})
    Ghoma.CameraLockon({'maxSpeed': 100.0})
}
