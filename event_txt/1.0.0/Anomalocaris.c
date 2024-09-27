-------- EventFlow: Anomalocaris --------

Actor: Player
entrypoint: None()
actions: ['ChaseDownWaterSurface', 'WarpToActorLinkedPointWithCompassPoint', 'PlayAnimation', 'SetGravityEnable', 'SetVisibility', 'WarpToActorLinkedPoint', 'AimCompassPoint']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['MoveToBesideTargetActor']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['WarpToActorLinkedPointWithCompassPoint', 'PlayAnimation', 'SetVisibility']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['StopZoneBgm', 'PlayOneshotSystemSE', 'StopAllBGM', 'WaitNextBeatSamplePositionAndStopAndPlayBossSeaBgm', 'WaitNextBeatSamplePositionAndStopAndPlayBossSeaBridgeBgm', 'PlayBGM', 'StopZoneBaseAmbience']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['PlayLocationOriginCameraAnimation', 'BeginInnerScroll']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['InvokeTimeline', 'PreloadTimeline', 'SetCanSkip']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['ForbidSave', 'RequestAutoSave', 'RequestWarp', 'RequestLevelJump', 'UnforbidLaunchApplet', 'ForbidLaunchApplet', 'SetAllItemsVisibility']
queries: []
params: None

Actor: Anomalocaris
entrypoint: None()
actions: ['CameraLockoff', 'PlayAnimationNoWait', 'StartPhaseChange', 'EndPhaseChange', 'SetVisibility', 'PlayMaterialAnimation', 'PlayMaterialAnimationJelly', 'ErasePond', 'PlayMaterialAnimationNoWait', 'PlayMaterialAnimationKnife', 'ItemDropToActor', 'Destroy', 'ResetActiveAndPesteActors', 'PlayTailorOtherChannelNoWait', 'CameraLockon']
queries: ['UnderWater', 'LeftRight']
params: None

Actor: BubbleCrack[BubbleCrack00]
entrypoint: None()
actions: ['BubbleOff']
queries: []
params: None

Actor: BubbleCrack[BubbleCrack01]
entrypoint: None()
actions: ['BubbleOff']
queries: []
params: None

Actor: BubbleCrack[BubbleCrack02]
entrypoint: None()
actions: ['BubbleOff']
queries: []
params: None

Actor: BubbleCrack[BubbleCrack03]
entrypoint: None()
actions: ['BubbleOff']
queries: []
params: None

Actor: ItemHeartContainer
entrypoint: None()
actions: ['SetVisibility', 'SetGravityAcceleration']
queries: []
params: None

Actor: Environment
entrypoint: None()
actions: ['StashSaveIntensity']
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

Actor: PartnerPhoton[d]
entrypoint: None()
actions: ['WarpToActorLinkedPoint', 'PlayAnimation', 'PlayAnimationNoWait', 'Activate', 'SetCullMode', 'SetVisibility']
queries: []
params: None

Actor: PartnerPhoton[e]
entrypoint: None()
actions: ['WarpToActorLinkedPoint', 'PlayAnimation', 'PlayAnimationNoWait', 'Activate', 'SetCullMode', 'SetVisibility']
queries: []
params: None

Actor: PartnerPhoton[f]
entrypoint: None()
actions: ['WarpToActorLinkedPoint', 'PlayAnimation', 'PlayAnimationNoWait', 'Activate', 'SetCullMode', 'SetVisibility']
queries: []
params: None

Actor: TagEvTailorPlayer
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: ['SetRestartPositionToLinkedPoint']
queries: []
params: None

Actor: Movie
entrypoint: None()
actions: ['Play', 'Prepare', 'Close']
queries: []
params: None

Actor: PartnerPhoton[a]
entrypoint: None()
actions: ['WarpToActorLinkedPoint', 'PlayAnimation', 'PlayAnimationNoWait', 'Activate', 'SetCullMode', 'SetVisibility']
queries: []
params: None

Actor: PartnerPhoton[b]
entrypoint: None()
actions: ['WarpToActorLinkedPoint', 'PlayAnimation', 'PlayAnimationNoWait', 'Activate', 'SetCullMode', 'SetVisibility']
queries: []
params: None

Actor: PartnerPhoton[c]
entrypoint: None()
actions: ['WarpToActorLinkedPoint', 'PlayAnimation', 'PlayAnimationNoWait', 'Activate', 'SetCullMode', 'SetVisibility']
queries: []
params: None

Actor: PartnerPhotonLiberation[a]
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait', 'PlayAnimation', 'StopTailorOtherChannel']
queries: []
params: None

Actor: PartnerPhotonLiberation[b]
entrypoint: None()
actions: ['PlayAnimation']
queries: []
params: None

void Appear() {
    Environment.StashSaveIntensity({'attenuation': 0.10000000149011612, 'duration': 0.009999999776482582})

    fork {
        Player.SetGravityEnable({'enable': True})
        Player.WarpToActorLinkedPoint({'index': 2, 'actor': ActorIdentifier(name="Anomalocaris"), 'offsetY': 0.0})
    } {
        Partner.MoveToBesideTargetActor({'speed': 1, 'offsetX': 0.0, 'offsetZ': 0.0, 'offsetY': -4.5, 'customSpeed': 30.0, 'actor': ActorIdentifier(name="Player"), 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0})
    }


    call Appear_Common()


    fork {
        Player.AimCompassPoint({'direction': 3, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
        Player.SetVisibility({'visible': True})
    } {
        Partner[companion].SetVisibility({'visible': True})
    }

    Audio.PlayBGM({'label': 'BGM_BATTLE_BOSS_SEARIVER', 'volume': 1.0, 'ignoreSkip': True})
    Anomalocaris.CameraLockon({'maxSpeed': 100.0})
    Camera.BeginInnerScroll({'centerZ': -0.75, 'halfSizeZ': 0.0, 'distanceToLookAt': 69.0, 'centerX': 546.0, 'halfSizeX': 19.5, 'halfSizeY': 10.0, 'centerY': -13.25})
    EventFlags.SetFlag({'symbol': 'L003R023CeilingRock', 'value': True})
    GameControl.ForbidSave()
}

void Dead() {

    call BossCommon.HitStop({'enemy': ActorIdentifier(name="Anomalocaris")})

    Player.ChaseDownWaterSurface()
    if !Anomalocaris.UnderWater() {
        Anomalocaris.PlayAnimationNoWait({'name': 'dead_ground', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } else {
        Anomalocaris.PlayAnimationNoWait({'name': 'dead', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }
    Anomalocaris.PlayTailorOtherChannelNoWait({'channel': 'PartnerPhoton_Release', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    Anomalocaris.ErasePond()
    EventFlags.SetFlag({'symbol': 'L003R023BubbleCrack2', 'value': True})
    TagEvTailorPlayer.PlayTailorOtherChannelNoWait({'channel': 'Anomalocaris_water', 'restart': False, 'index': -1, 'stopOnSkipped': True})

    fork {
        Timer.Wait({'time': 1.6670000553131104})

        call Dissolve.Dissolve({'actor': ActorIdentifier(name="Anomalocaris")})


        fork {
            Anomalocaris.PlayMaterialAnimationNoWait({'name': 'Anomalocaris_dissolve', 'layer': 0})
        } {
            Anomalocaris.PlayMaterialAnimationKnife({'name': 'Anomalocaris_dissolve'})
        }

    } {
        Timer.Wait({'time': 3.3329999446868896})
    }

    Timer.Wait({'time': 1.1670000553131104})

    fork {

        call BossCommon.BossExtinction({'enemy': ActorIdentifier(name="Anomalocaris")})

    } {
        Timer.Wait({'time': 1.6670000553131104})
        ItemHeartContainer.SetGravityAcceleration({'gravityAcc': 0.0})
        Anomalocaris.ItemDropToActor({'displacementY': 0.0, 'displacementX': 0.0, 'displacementZ': 0.0, 'linkedItemScatter': False})
    }

    Anomalocaris.CameraLockoff()
    EventFlags.SetFlag({'value': True, 'symbol': 'EvB_AreaBBossDead'})
    EventFlags.SetFlag({'symbol': 'L_Dungeon002_vortex', 'value': True})
    EventFlags.SetFlag({'symbol': 'L_Dungeon002_MoveWhirlpoolEnd', 'value': True})
    EventFlags.SetFlag({'value': False, 'symbol': 'L003R023CeilingRock'})

    call EvB_TouchWorldGlobe()

}

void PhaseChange() {

    fork {
        Audio.WaitNextBeatSamplePositionAndStopAndPlayBossSeaBgm({'label': 'BGM_BATTLE_BOSS_SEARIVER_BRIDGE', 'stoplabel': 'BGM_BATTLE_BOSS_SEARIVER'})
        Player.ChaseDownWaterSurface()
        EventFlags.SetFlag({'symbol': 'L003R023BubbleCrack1', 'value': True})
        BubbleCrack[BubbleCrack00].BubbleOff()
        BubbleCrack[BubbleCrack02].BubbleOff()

        fork {
            Anomalocaris.StartPhaseChange()
            if !Anomalocaris.LeftRight() {
                Anomalocaris.PlayAnimationNoWait({'name': 'ev_angry_reverse', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } else {
                Anomalocaris.PlayAnimationNoWait({'name': 'ev_angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }
        } {
            Audio.PlayOneshotSystemSE({'label': 'SE_ENEMY_UZUYOBI_EV_DRAWDOWN', 'volume': 1.0, 'pitch': 1.0})
        }

        Anomalocaris.EndPhaseChange()
        Audio.WaitNextBeatSamplePositionAndStopAndPlayBossSeaBridgeBgm({'label': 'BGM_BATTLE_BOSS_SEARIVER2', 'stoplabel': 'BGM_BATTLE_BOSS_SEARIVER_BRIDGE'})
    } {

        call EvResetCommon.AngryReset()

    }

}

void EvB_TouchWorldGlobe() {
    Audio.StopZoneBgm()

    call EvResetCommon.AllResetBossDead({'disappearHorse': True})

    GameControl.SetAllItemsVisibility({'visible': False})
    Anomalocaris.ResetActiveAndPesteActors({'child': True, 'cemeteryRevive': False, 'defeatedThrough': False, 'aliveCemeteryRevive': False})
    GameControl.ForbidLaunchApplet()

    fork {
        PartnerPhoton[a].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Anomalocaris"), 'offsetY': 0.0})
    } {
        PartnerPhoton[b].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Anomalocaris"), 'offsetY': 0.0})
    } {
        PartnerPhoton[c].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Anomalocaris"), 'offsetY': 0.0})
    } {
        PartnerPhoton[d].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Anomalocaris"), 'offsetY': 0.0})
    } {
        PartnerPhoton[e].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Anomalocaris"), 'offsetY': 0.0})
    } {
        PartnerPhoton[f].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Anomalocaris"), 'offsetY': 0.0})
    }


    fork {
        Player.WarpToActorLinkedPointWithCompassPoint({'index': 1, 'actor': ActorIdentifier(name="Anomalocaris"), 'direction': 1, 'offsetY': 0.0})
    } {
        Partner[companion].WarpToActorLinkedPointWithCompassPoint({'index': 1, 'actor': ActorIdentifier(name="Anomalocaris"), 'direction': 1, 'offsetY': 0.0})
    } {
        ItemHeartContainer.SetVisibility({'visible': False})
    }


    fork {
        Timer.Wait({'time': 29.299999237060547})
        Fade.StartPreset({'preset': 'FadeOutNormalW'})
        Audio.StopZoneBaseAmbience()
    } {
        Camera.PlayLocationOriginCameraAnimation({'path': 'actor/PartnerPhotonLiberation.bfres', 'name': 'EvB_TriRelease_cam', 'location': 'EvB_TriRelease_cam', 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})

        fork {
            PartnerPhotonLiberation[a].PlayTailorOtherChannelNoWait({'channel': 'Down', 'index': -1, 'restart': False, 'stopOnSkipped': True})
        } {
            PartnerPhoton[a].Activate()
            PartnerPhoton[a].SetVisibility({'visible': False})
            PartnerPhoton[a].SetCullMode({'cullMode': 0, 'enabled': True})
            PartnerPhoton[a].PlayAnimationNoWait({'name': 'ev_A_TriRelease_fall_1', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 3.1670000553131104})
            PartnerPhoton[a].SetVisibility({'visible': True})
        } {
            PartnerPhoton[b].Activate()
            PartnerPhoton[b].SetVisibility({'visible': False})
            PartnerPhoton[b].SetCullMode({'cullMode': 0, 'enabled': True})
            PartnerPhoton[b].PlayAnimationNoWait({'name': 'ev_A_TriRelease_fall_2', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 5.833000183105469})
            PartnerPhoton[b].SetVisibility({'visible': True})
        } {
            PartnerPhoton[c].Activate()
            PartnerPhoton[c].SetVisibility({'visible': False})
            PartnerPhoton[c].SetCullMode({'cullMode': 0, 'enabled': True})
            PartnerPhoton[c].PlayAnimationNoWait({'name': 'ev_A_TriRelease_fall_3', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 2.6670000553131104})
            PartnerPhoton[c].SetVisibility({'visible': True})
        } {
            PartnerPhoton[d].Activate()
            PartnerPhoton[d].SetVisibility({'visible': False})
            PartnerPhoton[d].SetCullMode({'cullMode': 0, 'enabled': True})
            PartnerPhoton[d].PlayAnimationNoWait({'name': 'ev_A_TriRelease_fall_4', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 3.8329999446868896})
            PartnerPhoton[d].SetVisibility({'visible': True})
        } {
            PartnerPhoton[e].Activate()
            PartnerPhoton[e].SetVisibility({'visible': False})
            PartnerPhoton[e].SetCullMode({'cullMode': 0, 'enabled': True})
            PartnerPhoton[e].PlayAnimationNoWait({'name': 'ev_A_TriRelease_fall_5', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 4.833000183105469})
            PartnerPhoton[e].SetVisibility({'visible': True})
        } {
            PartnerPhoton[f].Activate()
            PartnerPhoton[f].SetVisibility({'visible': False})
            PartnerPhoton[f].SetCullMode({'cullMode': 0, 'enabled': True})
            PartnerPhoton[f].PlayAnimationNoWait({'name': 'ev_A_TriRelease_fall_6', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 4.5})
            PartnerPhoton[f].SetVisibility({'visible': True})
        } {
            Player.PlayAnimation({'name': 'ev_B_TriRelease_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner[companion].SetVisibility({'visible': False})
            Partner[companion].PlayAnimation({'name': 'ev_B_TriRelease_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } {
        Timer.Wait({'time': 8.0})
        PartnerPhotonLiberation[a].StopTailorOtherChannel({'channel': 'Down', 'index': -1})
        PartnerPhotonLiberation[a].PlayTailorOtherChannelNoWait({'index': -1, 'channel': 'move_up', 'restart': False, 'stopOnSkipped': True})

        fork {
            PartnerPhotonLiberation[a].PlayAnimation({'name': 'move_up_00', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            PartnerPhotonLiberation[b].PlayAnimation({'name': 'move_up_00', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            PartnerPhoton[a].PlayAnimation({'name': 'ev_A_TriRelease_wait_1', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            PartnerPhoton[b].PlayAnimation({'name': 'ev_A_TriRelease_wait_2', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            PartnerPhoton[c].PlayAnimation({'name': 'ev_A_TriRelease_wait_3', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            PartnerPhoton[d].PlayAnimation({'name': 'ev_A_TriRelease_wait_4', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            PartnerPhoton[e].PlayAnimation({'name': 'ev_A_TriRelease_wait_5', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            PartnerPhoton[f].PlayAnimation({'name': 'ev_A_TriRelease_wait_6', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Player.PlayAnimation({'name': 'ev_B_TriRelease', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner[companion].SetVisibility({'visible': True})
            Partner[companion].PlayAnimation({'name': 'ev_B_TriRelease', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }


    fork {
        Movie.Prepare({'filename': 'rd017_EvB_WorldGlobeActivate'})
    } {
        Audio.StopZoneBgm()
    }


    fork {
        Movie.Play({'autoClose': False})
    } {
        Timer.Wait({'time': 1.0166699886322021})
        Audio.PlayBGM({'ignoreSkip': True, 'label': 'BGM_EV_REVIVING_AREA', 'volume': 1.0})
    } {
        Timer.Wait({'time': 1.9500000476837158})
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_WORLD_REPAIR_SEA', 'volume': 1.0, 'pitch': 1.0})
    }

    Fade.StartPreset({'preset': 'CutOutW'})

    fork {
        Movie.Close()
    } {
        GameControl.UnforbidLaunchApplet()
    }

    EventFlags.SetFlag({'value': True, 'symbol': 'EvB_TouchWedge_AreaB'})
    GameControl.RequestLevelJump({'level': 'L_Dungeon002', 'locator': 'Ev_AfterReleasTriTalk', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void BC_Appear() {
    BattleChallenge.ShowTimer()
    Environment.StashSaveIntensity({'attenuation': 0.10000000149011612, 'duration': 0.009999999776482582})
    Player.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="Anomalocaris"), 'offsetY': 0.0})

    call Appear_Common()


    fork {
        Player.AimCompassPoint({'direction': 3, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
        Player.SetVisibility({'visible': True})
    } {
        Partner[companion].SetVisibility({'visible': True})
    }

    Audio.PlayBGM({'label': 'BGM_BATTLE_BOSS_SEARIVER', 'volume': 1.0, 'ignoreSkip': True})
    Anomalocaris.CameraLockon({'maxSpeed': 100.0})
    EventFlags.SetFlag({'symbol': 'L003R023CellingRock_BC', 'value': True})
    Camera.BeginInnerScroll({'centerZ': -0.75, 'halfSizeZ': 0.0, 'distanceToLookAt': 69.0, 'halfSizeX': 19.5, 'halfSizeY': 10.0, 'centerX': 9.5, 'centerY': 10.0})
}

void Appear_Common() {

    call EvResetCommon.AllReset_02()

    Audio.StopAllBGM({'duration': 2.0})
    Player.SetVisibility({'visible': False})
    Partner[companion].SetVisibility({'visible': False})
    FlowControl.PreloadTimeline({'filename': 'Anomalocaris'})
    Audio.PlayOneshotSystemSE({'label': 'SE_ENEMY_UZUYOBI_EV_ZELDA_SWIM', 'volume': 1.0, 'pitch': 1.0})
    Timer.Wait({'time': 6.0})
    Audio.PlayOneshotSystemSE({'label': 'SE_ENEMY_UZUYOBI_EV_APPEAR', 'volume': 1.0, 'pitch': 1.0})

    fork {
        Anomalocaris.SetVisibility({'visible': True})
    } {
        FlowControl.InvokeTimeline({'filename': 'Anomalocaris', 'rate': 1.0})
    } {
        Anomalocaris.PlayMaterialAnimation({'name': 'appear_main_00', 'layer': 0})
    } {
        Anomalocaris.PlayMaterialAnimationJelly({'name': 'appear_jelly_00'})
    } {
        Fade.StartPreset({'preset': 'FadeInNormal'})
        FlowControl.SetCanSkip({'enable': True})
    }

}

void BC_Dead() {

    call BossCommon.HitStop({'enemy': ActorIdentifier(name="Anomalocaris")})

    Player.ChaseDownWaterSurface()
    if !Anomalocaris.UnderWater() {
        Anomalocaris.PlayAnimationNoWait({'name': 'dead_ground', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } else {
        Anomalocaris.PlayAnimationNoWait({'name': 'dead', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }
    Anomalocaris.ErasePond()
    BubbleCrack[BubbleCrack01].BubbleOff()
    BubbleCrack[BubbleCrack03].BubbleOff()
    TagEvTailorPlayer.PlayTailorOtherChannelNoWait({'channel': 'Anomalocaris_water', 'restart': False, 'index': -1, 'stopOnSkipped': True})

    fork {
        Timer.Wait({'time': 1.6670000553131104})

        call Dissolve.Dissolve({'actor': ActorIdentifier(name="Anomalocaris")})


        fork {
            Anomalocaris.PlayMaterialAnimationNoWait({'name': 'Anomalocaris_dissolve', 'layer': 0})
        } {
            Anomalocaris.PlayMaterialAnimationKnife({'name': 'Anomalocaris_dissolve'})
        }

    } {
        Timer.Wait({'time': 3.3329999446868896})
    }

    Timer.Wait({'time': 1.1670000553131104})

    call BossCommon.BossExtinction({'enemy': ActorIdentifier(name="Anomalocaris")})

    Anomalocaris.CameraLockoff()
    Anomalocaris.Destroy()
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    if BattleChallenge.GetConditionNumber() in [1, 2, 3] {
        BattleChallenge.SetNextLevelAndLocation({'NextLevelName': 'BC_BossMogriffon', 'NextLocatorName': 'BC_BossMogriffon_Start'})
    }
}

void Anomalocaris_WellDown() {
    Area.SetRestartPositionToLinkedPoint({'direction': 2, 'pointIndex': 0, 'stance': 'Ground'})
    GameControl.RequestAutoSave({'immediate': True, 'name': 'Anomalocaris', 'needsStartupEvent': False, 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})

    call FloorChangeCommon._WarpCommon({'fadePreset': 'FadeOutNormalB'})

    GameControl.RequestWarp({'locator': '023_BossBattle', 'offsetX': 0.0, 'offsetZ': 0.0})
}
