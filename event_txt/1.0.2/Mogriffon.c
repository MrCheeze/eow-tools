-------- EventFlow: Mogriffon --------

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['SetVisibility', 'WarpToActorLinkedPointWithCompassPoint', 'SetRestartPositionToActor', 'MoveToCompassPoint', 'PlayAnimation']
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
actions: ['PlayBGM', 'StopZoneBgm', 'PlayOneshotSystemSE', 'StopAllBGM', 'WaitNextBeatSamplePositionAndStopAndPlayBossDesertBgm', 'WaitNextBeatSamplePositionAndStopAndPlayBossDesertBridgeBgm', 'StopSE', 'StopZoneBaseAmbience', 'SetPlayerVolume', 'DisablePlaySeFromTailor', 'EnablePlaySeFromTailor', 'SetDisableSeLabel', 'ResetDisableSeLabel']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Reset', 'Quake']
queries: []
params: None

Actor: Mogriffon
entrypoint: None()
actions: ['CameraLockon', 'SetCullMode', 'PlayAnimation', 'LookAtGimmick', 'CameraLockoff', 'PlayAnimationNoWait', 'Deactivate', 'Destroy', 'PlayTailorOtherChannelNoWait', 'PlayMaterialAnimationNoWait', 'ItemDropToActor', 'RoomDoorClose', 'SetVisibility', 'DestroyActiveAndPesteActors', 'AimCompassPoint', 'SetCollisionEnabled']
queries: []
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: ['CheckVariable']
params: None

Actor: SandCover
entrypoint: None()
actions: ['StartSink', 'StartFloat']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestAutoSave', 'ForbidSave', 'ResetFloorAbyss', 'RequestLevelJump', 'ForbidLaunchApplet', 'UnforbidLaunchApplet', 'SetAllItemsVisibility']
queries: []
params: None

Actor: ItemHeartContainer
entrypoint: None()
actions: ['SetVisibility']
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

Actor: BattleChallenge
entrypoint: None()
actions: ['SetNextLevelAndLocation', 'ShowTimer']
queries: ['GetConditionNumber']
params: None

Actor: PartnerPhoton[c]
entrypoint: None()
actions: ['WarpToActorLinkedPoint']
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
actions: ['Play', 'Prepare', 'Close']
queries: []
params: None

Actor: MinigameTimer
entrypoint: None()
actions: ['Stop']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['SetVisibility', 'WarpToActorLinkedPointWithCompassPoint']
queries: []
params: None

void Appear() {
    Player.SetRestartPositionToActor({'direction': 2, 'distance': -5.0, 'stance': 'Ground'})
    GameControl.RequestAutoSave({'name': 'Mogriffon', 'immediate': True, 'needsStartupEvent': False, 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
    if !EventFlags.CheckFlag({'symbol': 'EvD_BossAppear'}) {
        EventFlags.SetFlag({'value': True, 'symbol': 'EvD_BossAppear'})
    }

    call AppearCommon()


    fork {
        Player.SetVisibility({'visible': True})
    } {
        Partner[companion].SetVisibility({'visible': True})
    } {
        Mogriffon.SetCullMode({'cullMode': 1, 'enabled': True})
    } {
        Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})
    }

    Audio.PlayBGM({'ignoreSkip': True, 'label': 'BGM_BATTLE_BOSS_DESERT', 'volume': 1.0})
    Mogriffon.CameraLockon({'maxSpeed': 100.0})
    if EventVariables.CheckVariable({'symbol': 'Desert:1706005665'}) in [4294967295, 0] {
        EventVariables.SetVariable({'symbol': 'Desert:1706005665'})
        GameControl.ForbidSave()
    }
}

void Angry() {

    fork {

        fork {
            Mogriffon.LookAtGimmick({'distanceOffset': 8.0, 'duration': 1.0, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
            Mogriffon.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
            Timer.Wait({'time': 1.0})
            Audio.PlayOneshotSystemSE({'label': 'SE_ENEMY_MOGRI_ANGER_RUMBLE', 'volume': 1.0, 'pitch': 1.0})
            Camera.Quake({'duration': 1.0, 'initPower': 1, 'targetPower': 2})
            Timer.Wait({'time': 1.0})

            fork {
                SandCover.StartSink()
            } {
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_SAND_RUNOUT2_LDUNG', 'volume': 1.0, 'pitch': 1.0})
            }

            Audio.StopSE({'label': 'SE_ENEMY_MOGRI_ANGER_RUMBLE', 'duration': 2.0})
            Timer.Wait({'time': 3.0})
            Audio.StopSE({'label': 'SE_OBJ_SAND_RUNOUT2_LDUNG', 'duration': 1.0})
            Camera.Quake({'duration': 1.0, 'targetPower': 0, 'initPower': 0})
            Timer.Wait({'time': 0.20000000298023224})
            Mogriffon.SetCollisionEnabled({'enable': False})

            fork {
                Mogriffon.PlayAnimation({'name': 'ev_anger', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Mogriffon.LookAtGimmick({'duration': 1.0, 'chaseRatio': 0.30000001192092896, 'distanceOffset': 4.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
            }

        } {
            Timer.Wait({'time': 0.4099999964237213})
            Audio.WaitNextBeatSamplePositionAndStopAndPlayBossDesertBgm({'label': 'BGM_BATTLE_BOSS_DESERT_BRIDGE', 'stoplabel': 'BGM_BATTLE_BOSS_DESERT'})
        } {
            Timer.Wait({'time': 9.399999618530273})
            Audio.WaitNextBeatSamplePositionAndStopAndPlayBossDesertBridgeBgm({'stoplabel': 'BGM_BATTLE_BOSS_DESERT_BRIDGE', 'label': 'BGM_BATTLE_BOSS_DESERT2'})
        }

        Mogriffon.SetCollisionEnabled({'enable': True})
        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    } {

        call EvResetCommon.AngryReset()

    }

}

void Dead() {

    call BossCommon.HitStop({'enemy': ActorIdentifier(name="Mogriffon")})

    Mogriffon.PlayAnimation({'name': 'ev_dead_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Event37:
    Mogriffon.PlayAnimationNoWait({'name': 'ev_dead_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Mogriffon.PlayTailorOtherChannelNoWait({'channel': 'PartnerPhoton_Release', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    Audio.SetDisableSeLabel({'label': 'SE_OBJ_QUICKSAND_OUT'})

    fork {
        Timer.Wait({'time': 1.6670000553131104})

        call Dissolve.Dissolve({'actor': ActorIdentifier(name="Mogriffon")})

        Mogriffon.PlayMaterialAnimationNoWait({'name': 'Mogriffon_dissolve', 'layer': 0})
    } {
        Timer.Wait({'time': 3.3329999446868896})
    }

    Timer.Wait({'time': 1.1670000553131104})

    fork {

        call BossCommon.BossExtinction({'enemy': ActorIdentifier(name="Mogriffon")})

    } {
        Timer.Wait({'time': 1.6670000553131104})
        Mogriffon.ItemDropToActor({'displacementY': 2.0, 'displacementX': 0.0, 'displacementZ': 0.0, 'linkedItemScatter': False})
    } {
        GameControl.ResetFloorAbyss()
    }

    Audio.SetPlayerVolume({'volume': 0.0, 'duration': 0.10000000149011612, 'label': 'PLAYER_SE_ENVIROMENT'})
    Mogriffon.CameraLockoff()
    Mogriffon.Deactivate()
    EventFlags.SetFlag({'value': True, 'symbol': 'EvD_BossDead'})
    EventVariables.SetVariable({'symbol': 'Desert:58883905'})

    call EvD_TouchWorldGlobe()

}

void Dead_flying() {

    call BossCommon.HitStop({'enemy': ActorIdentifier(name="Mogriffon")})

    Mogriffon.PlayAnimation({'name': 'ev_dead_flying_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Mogriffon.LookAtGimmick({'distanceOffset': -8.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    goto Event37
}

void Dead_hip() {

    call BossCommon.HitStop({'enemy': ActorIdentifier(name="Mogriffon")})

    Mogriffon.PlayAnimation({'name': 'ev_dead_hip_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    goto Event37
}

void EvD_TouchWorldGlobe() {
    Audio.DisablePlaySeFromTailor()
    Audio.StopZoneBgm()

    call EvResetCommon.AllResetBossDead({'disappearHorse': True})

    GameControl.SetAllItemsVisibility({'visible': False})
    Mogriffon.DestroyActiveAndPesteActors({'child': True})
    SandCover.StartFloat()
    GameControl.ForbidLaunchApplet()

    fork {
        PartnerPhoton[a].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Mogriffon"), 'offsetY': 0.0})
    } {
        PartnerPhoton[b].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Mogriffon"), 'offsetY': 0.0})
    } {
        PartnerPhoton[c].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Mogriffon"), 'offsetY': 0.0})
    } {
        PartnerPhoton[d].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Mogriffon"), 'offsetY': 0.0})
    } {
        PartnerPhoton[e].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Mogriffon"), 'offsetY': 0.0})
    } {
        PartnerPhoton[f].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Mogriffon"), 'offsetY': 0.0})
    }


    fork {
        Player.WarpToActorLinkedPointWithCompassPoint({'index': 1, 'direction': 2, 'actor': ActorIdentifier(name="Mogriffon"), 'offsetY': 0.0})
    } {
        Partner[companion].WarpToActorLinkedPointWithCompassPoint({'index': 1, 'direction': 2, 'actor': ActorIdentifier(name="Mogriffon"), 'offsetY': 0.0})
    } {
        ItemHeartContainer.SetVisibility({'visible': False})
    }

    Audio.EnablePlaySeFromTailor()

    fork {

        call GeneralSequence.TriRelease()

    } {
        Timer.Wait({'time': 29.299999237060547})
        EventVariables.SetVariable({'symbol': 'Desert:1842242732'})
        EventFlags.SetFlag({'value': True, 'symbol': 'EvD_TouchWorldGlobe'})
        Fade.StartPreset({'preset': 'FadeOutNormalW'})
        Audio.StopZoneBaseAmbience()
    }


    fork {
        Movie.Prepare({'filename': 'rd025_EvD_WorldGlobeActivate'})
    } {
        Audio.StopZoneBgm()
    }


    fork {
        Movie.Play({'autoClose': False})
    } {
        Timer.Wait({'time': 1.0166699886322021})
        Audio.PlayBGM({'ignoreSkip': True, 'label': 'BGM_EV_REVIVING_AREA', 'volume': 1.0})
    } {
        Timer.Wait({'time': 1.8300000429153442})
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_WORLD_REPAIR_OTHER', 'volume': 1.0, 'pitch': 1.0})
    }

    Fade.StartPreset({'preset': 'CutOutW'})
    Audio.ResetDisableSeLabel()

    fork {
        Movie.Close()
    } {
        GameControl.UnforbidLaunchApplet()
    }

    GameControl.RequestLevelJump({'locator': 'AfterReleasTriTalk', 'level': 'L_Dungeon003', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void BC_Appear() {
    BattleChallenge.ShowTimer()

    call AppearCommon()


    fork {
        Player.SetVisibility({'visible': True})
    } {
        Partner[companion].SetVisibility({'visible': True})
    } {
        Mogriffon.SetCullMode({'cullMode': 1, 'enabled': True})
    } {
        Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})
    }

    Timer.Wait({'time': 1.0})
    Audio.PlayBGM({'ignoreSkip': True, 'label': 'BGM_BATTLE_BOSS_DESERT', 'volume': 1.0})
    Mogriffon.CameraLockon({'maxSpeed': 100.0})
}

void BC_Dead() {

    call BossCommon.HitStop({'enemy': ActorIdentifier(name="Mogriffon")})

    Mogriffon.PlayAnimation({'name': 'ev_dead_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Event67:
    Mogriffon.PlayAnimationNoWait({'name': 'ev_dead_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 1.6670000553131104})

        call Dissolve.Dissolve({'actor': ActorIdentifier(name="Mogriffon")})

        Mogriffon.PlayMaterialAnimationNoWait({'name': 'Mogriffon_dissolve', 'layer': 0})
    } {
        Timer.Wait({'time': 3.3329999446868896})
    }

    Timer.Wait({'time': 1.1670000553131104})

    fork {

        call BossCommon.BossExtinction({'enemy': ActorIdentifier(name="Mogriffon")})

    } {
        GameControl.ResetFloorAbyss()
    }

    Mogriffon.CameraLockoff()
    Mogriffon.Destroy()
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    MinigameTimer.Stop()
    switch BattleChallenge.GetConditionNumber() {
      case 2:
        BattleChallenge.SetNextLevelAndLocation({'NextLevelName': 'BC_BossVolvagia', 'NextLocatorName': 'BC_BossVolvagia_Start'})
      case 3:
        BattleChallenge.SetNextLevelAndLocation({'NextLevelName': 'BC_BossVolvagia', 'NextLocatorName': 'BC_BossVolvagia_Start_AllBoss'})
    }
}

void BC_Dead_flying() {

    call BossCommon.HitStop({'enemy': ActorIdentifier(name="Mogriffon")})

    Mogriffon.PlayAnimation({'name': 'ev_dead_flying_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Mogriffon.LookAtGimmick({'distanceOffset': -8.0, 'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    goto Event67
}

void BC_Dead_hip() {

    call BossCommon.HitStop({'enemy': ActorIdentifier(name="Mogriffon")})

    Mogriffon.PlayAnimation({'name': 'ev_dead_hip_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    goto Event67
}

void AppearCommon() {
    Audio.StopAllBGM({'duration': 2.0})

    call EvResetCommon.AllReset_02()


    fork {
        Fade.StartPreset({'preset': 'FadeInSlow'})
    } {
        Player.MoveToCompassPoint({'direction': 2, 'speed': 0, 'timeOut': 7.0, 'distance': 2.0, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    FlowControl.SetCanSkip({'enable': True})
    if !EventFlags.CheckFlag({'symbol': 'EvD_BossAppear'}) {
        EventFlags.SetFlag({'value': True, 'symbol': 'EvD_BossAppear'})
    }
    Mogriffon.RoomDoorClose()
    Player.PlayAnimation({'name': 'ev_lookback', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.550000011920929})

    fork {
        Timer.Wait({'time': 0.5})
    } {
        FlowControl.PreloadTimeline({'filename': 'Mogriffon'})
    }


    fork {
        Player.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    } {
        Mogriffon.SetVisibility({'visible': True})
    }

    FlowControl.InvokeTimeline({'filename': 'Mogriffon', 'rate': 1.0})
}
