-------- EventFlow: Freblaze --------

Actor: Camera
entrypoint: None()
actions: ['Reset', 'PlayActorOriginCameraAnimation']
queries: []
params: None

Actor: Freblaze
entrypoint: None()
actions: ['CameraLockon', 'CameraLockoff', 'RoomDoorClose', 'SetVisibility', 'SetCullMode', 'SetCollisionEnabled', 'PlayAnimationEx', 'PlayTailorOtherChannelNoWait', 'PlayAnimationNoWait', 'AimCompassPoint', 'LookAtTalker', 'PlayAnimation', 'ChangeMaskPreparation', 'ChangeMask', 'WaitDownEnd', 'WaitWinceEnd', 'ItemDropToActor', 'PlayMaterialAnimationNoWait', 'Destroy', 'ResetActiveAndPesteActors', 'Deactivate', 'DeactiveteLinkedActor']
queries: ['IsMaskActive']
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['StopAllBGM', 'PlayBGM', 'PlayZoneBGM', 'StopZoneBgm', 'PlaySnowBossAppearBGM', 'SetJumpSnowBossAppearFinish', 'WaitSamplePositionAndStopAndPlayBossSnowBridgeBgm', 'PlayOneshotSystemSE', 'StopZoneBaseAmbience']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['SetVisibility', 'AbsorbAllPastedActors', 'WarpToActorLinkedPointWithCompassPoint', 'MoveToCompassPoint', 'MoveToTargetActor', 'PlayAnimation']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: SandCover
entrypoint: None()
actions: ['StartSink', 'StartFloat']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['PreloadTimeline', 'InvokeTimeline', 'SetCanSkip']
queries: []
params: None

Actor: FreblazeMask
entrypoint: None()
actions: ['SetVisibility']
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

Actor: Zelda
entrypoint: None()
actions: ['SetRestartPositionToActor']
queries: []
params: None

Actor: ItemHeartContainer
entrypoint: None()
actions: ['SetVisibility']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestAutoSave', 'ForbidSave', 'RequestLevelJump', 'RequestWarp', 'UnforbidLaunchApplet', 'ForbidLaunchApplet', 'SetAllItemsVisibility']
queries: []
params: None

Actor: Door
entrypoint: None()
actions: ['SetVisibility']
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

Actor: BattleChallenge
entrypoint: None()
actions: ['SetNextLevelAndLocation', 'ShowTimer']
queries: ['GetConditionNumber']
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: Movie
entrypoint: None()
actions: ['Play', 'Close', 'Prepare']
queries: []
params: None

Actor: MinigameTimer
entrypoint: None()
actions: ['Stop']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['SetVisibility', 'Talk', 'WarpToActorLinkedPointWithCompassPoint']
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

void Appear() {
    Zelda.SetRestartPositionToActor({'distance': -6.0, 'direction': 2, 'stance': 'Ground'})
    GameControl.RequestAutoSave({'name': 'Freblaze', 'immediate': True, 'needsStartupEvent': False, 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})

    call AppearCommon1()


    fork {
        Freblaze.AimCompassPoint({'duration': 0.0, 'direction': 0, 'withoutTurn': False, 'immediateTurn': False})
        Freblaze.PlayAnimation({'name': 'ev_appear', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Freblaze.PlayAnimation({'name': 'ev_appear_talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaG:EvG_BossAppear_010', 'getAttention': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaG:EvG_BossAppear_020', 'getAttention': False})
    } {
        Camera.PlayActorOriginCameraAnimation({'path': 'actor/Freblaze.bfres', 'name': 'Freblaze_appear01_cam', 'farClipDistanceCtrl': True, 'lookAtDistanceCtrl': False, 'target': ActorIdentifier(name="Freblaze"), 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'nearClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Timer.Wait({'time': 2.0})
        Audio.PlaySnowBossAppearBGM({'label': 'BGM_EV_SNOW_BOSSAPPEAR', 'volume': 1.0, 'ignoreSkip': False})
    }

    Audio.SetJumpSnowBossAppearFinish()

    call AppearCommon2()


    fork {
        EventFlags.SetFlag({'value': True, 'symbol': 'EvG_FreblazeAppear'})
    } {
        QuestSystem.SetProgress({'symbol': 'Snowmountain:1574840747', 'isShowTelopInEvent': False, 'isFrontFade': False})
    }

    GameControl.ForbidSave()
}

void StartPhase2() {

    fork {
        Audio.StopAllBGM({'duration': 0.9020000100135803})
        Audio.PlayBGM({'label': 'BGM_BATTLE_BOSS_SNOW_BRIDGE', 'volume': 1.0, 'ignoreSkip': True})

        fork {
            Freblaze.LookAtTalker({'distanceOffset': 10.0, 'duration': 1.0, 'chaseRatio': 0.30000001192092896, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        } {
            Freblaze.AimCompassPoint({'direction': 0, 'withoutTurn': False, 'duration': 1.0, 'immediateTurn': False})
        } {
            Freblaze.PlayAnimation({'blendFrame': 15, 'name': 'down_st', 'layer': 0, 'restart': False})
            Freblaze.PlayAnimation({'blendFrame': 15, 'name': 'down_lp', 'layer': 0, 'restart': False})
            Timer.Wait({'time': 1.0})
            Freblaze.PlayAnimation({'blendFrame': 15, 'name': 'down_ed', 'layer': 0, 'restart': False})
        } {
            if Freblaze.IsMaskActive() {
                Timer.Wait({'time': 0.699999988079071})

                fork {
                    FreblazeMask.SetVisibility({'visible': False})
                } {
                    Freblaze.PlayTailorOtherChannelNoWait({'channel': 'Break_mask_ice', 'restart': False, 'index': -1, 'stopOnSkipped': True})
                }

            }
        }

        Freblaze.PlayAnimationEx({'time': 1.0, 'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            Freblaze.PlayAnimationEx({'time': 4.0, 'name': 'ev_anger01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 2.0})
            Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
            SandCover.StartSink()
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Freblaze.ChangeMaskPreparation({'maskType': True})
            FreblazeMask.SetVisibility({'visible': True})
            Timer.Wait({'time': 1.5})
            Freblaze.ChangeMask({'maskType': True})
        }

        Audio.WaitSamplePositionAndStopAndPlayBossSnowBridgeBgm({'stoplabel': 'BGM_BATTLE_BOSS_SNOW_BRIDGE', 'label': 'BGM_BATTLE_BOSS_SNOW1'})
        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    } {

        call EvResetCommon.AngryReset()

    }

}

void Dead() {

    call BossCommon.HitStop({'enemy': ActorIdentifier(name="Freblaze")})


    fork {
        Freblaze.SetCollisionEnabled({'enable': False})
        Freblaze.PlayAnimationNoWait({'name': 'dead', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Freblaze.AimCompassPoint({'direction': 0, 'withoutTurn': False, 'duration': 1.0, 'immediateTurn': False})
    } {
        if Freblaze.IsMaskActive() {

            fork {
                FreblazeMask.SetVisibility({'visible': False})
            } {
                Freblaze.PlayTailorOtherChannelNoWait({'channel': 'Break_mask_both', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            }

        }
    }

    Freblaze.PlayTailorOtherChannelNoWait({'channel': 'PartnerPhoton_Release', 'restart': False, 'index': -1, 'stopOnSkipped': True})

    fork {
        Timer.Wait({'time': 1.6670000553131104})

        call Dissolve.Dissolve({'actor': ActorIdentifier(name="Freblaze")})

        Freblaze.PlayMaterialAnimationNoWait({'name': 'Freblaze_dissolve', 'layer': 0})
    } {
        Timer.Wait({'time': 3.3329999446868896})
    }

    Timer.Wait({'time': 1.1670000553131104})

    fork {

        call BossCommon.BossExtinction({'enemy': ActorIdentifier(name="Freblaze")})

    } {
        Timer.Wait({'time': 1.6670000553131104})
        Freblaze.ItemDropToActor({'displacementY': 0.75, 'displacementX': 0.0, 'displacementZ': 0.0, 'linkedItemScatter': False})
    }

    Freblaze.CameraLockoff()
    Freblaze.Deactivate()
    Audio.PlayZoneBGM({'stopbgm': True})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvG_FreblazeDead'})
    EventVariables.SetVariable({'symbol': 'SnowyMountains:2340887167'})

    call EvD_TouchWorldGlobe()

}

void StartPhase3() {

    fork {
        Audio.StopAllBGM({'duration': 0.9020000100135803})
        Audio.PlayBGM({'label': 'BGM_BATTLE_BOSS_SNOW_BRIDGE', 'volume': 1.0, 'ignoreSkip': True})

        fork {
            Freblaze.LookAtTalker({'distanceOffset': 10.0, 'duration': 1.0, 'chaseRatio': 0.30000001192092896, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        } {
            Freblaze.AimCompassPoint({'direction': 0, 'withoutTurn': False, 'duration': 1.0, 'immediateTurn': False})
        } {
            Freblaze.PlayAnimation({'blendFrame': 15, 'name': 'down_st', 'layer': 0, 'restart': False})
            Freblaze.PlayAnimation({'blendFrame': 15, 'name': 'down_lp', 'layer': 0, 'restart': False})
            Timer.Wait({'time': 1.0})
            Freblaze.PlayAnimation({'blendFrame': 15, 'name': 'down_ed', 'layer': 0, 'restart': False})
        } {
            if Freblaze.IsMaskActive() {
                Timer.Wait({'time': 0.699999988079071})

                fork {
                    FreblazeMask.SetVisibility({'visible': False})
                } {
                    Freblaze.PlayTailorOtherChannelNoWait({'channel': 'Break_mask_fire', 'restart': False, 'index': -1, 'stopOnSkipped': True})
                }

            }
        }

        Freblaze.PlayAnimationEx({'time': 1.0, 'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            Freblaze.PlayAnimationEx({'time': 4.0, 'name': 'ev_anger02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 2.0})
            Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
            SandCover.StartFloat()
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Freblaze.ChangeMaskPreparation({'maskType': False})
            FreblazeMask.SetVisibility({'visible': True})
            Timer.Wait({'time': 1.5})
            Freblaze.ChangeMask({'maskType': False})
        }

        Audio.WaitSamplePositionAndStopAndPlayBossSnowBridgeBgm({'stoplabel': 'BGM_BATTLE_BOSS_SNOW_BRIDGE', 'label': 'BGM_BATTLE_BOSS_SNOW2'})
        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    } {

        call EvResetCommon.AngryReset()

    }

}

void EvD_TouchWorldGlobe() {
    Audio.StopZoneBgm()

    call EvResetCommon.AllResetBossDead({'disappearHorse': True})

    GameControl.SetAllItemsVisibility({'visible': False})
    EventFlags.SetFlag({'symbol': 'L006R045Pot2', 'value': False})
    GameControl.ForbidLaunchApplet()

    fork {
        Player.WarpToActorLinkedPointWithCompassPoint({'index': 1, 'direction': 2, 'actor': ActorIdentifier(name="Freblaze"), 'offsetY': 0.0})
    } {
        Partner[companion].WarpToActorLinkedPointWithCompassPoint({'index': 1, 'direction': 2, 'actor': ActorIdentifier(name="Freblaze"), 'offsetY': 0.0})
    } {
        ItemHeartContainer.SetVisibility({'visible': False})
    } {
        PartnerPhoton[a].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Freblaze"), 'offsetY': 0.0})
    } {
        PartnerPhoton[b].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Freblaze"), 'offsetY': 0.0})
    } {
        PartnerPhoton[c].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Freblaze"), 'offsetY': 0.0})
    } {
        PartnerPhoton[d].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Freblaze"), 'offsetY': 0.0})
    } {
        PartnerPhoton[e].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Freblaze"), 'offsetY': 0.0})
    } {
        PartnerPhoton[f].WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Freblaze"), 'offsetY': 0.0})
    }


    fork {

        call GeneralSequence.TriRelease()

    } {
        Timer.Wait({'time': 29.299999237060547})
        Fade.StartPreset({'preset': 'FadeOutNormalW'})
        Audio.StopZoneBaseAmbience()
    } {

        fork {
            Freblaze.DeactiveteLinkedActor({'index': 5})
        } {
            Freblaze.DeactiveteLinkedActor({'index': 6})
        } {
            Freblaze.DeactiveteLinkedActor({'index': 7})
        } {
            Freblaze.DeactiveteLinkedActor({'index': 8})
        }

        SandCover.StartSink()
    }


    fork {
        Movie.Prepare({'filename': 'rd039_EvG_WorldGlobeActivate'})
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

    fork {
        Movie.Close()
    } {
        GameControl.UnforbidLaunchApplet()
    } {
        Freblaze.ResetActiveAndPesteActors({'child': True, 'cemeteryRevive': False, 'defeatedThrough': False, 'aliveCemeteryRevive': False})
    }

    EventFlags.SetFlag({'symbol': 'EvG_WorldGlobeActivate', 'value': True})
    GameControl.RequestLevelJump({'level': 'L_Dungeon006', 'locator': 'AfterReleasTriTalk', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void Down() {

    fork {
        Freblaze.WaitDownEnd()
        Freblaze.PlayAnimation({'blendFrame': 12, 'name': 'wait', 'layer': 0, 'restart': False})
    } {
        Freblaze.LookAtTalker({'distanceOffset': 10.0, 'duration': 1.0, 'chaseRatio': 0.30000001192092896, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    }

    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
}

void Wince() {

    fork {
        Freblaze.WaitWinceEnd()
        Freblaze.PlayAnimation({'blendFrame': 12, 'name': 'wait', 'layer': 0, 'restart': False})
    } {
        Freblaze.LookAtTalker({'distanceOffset': 10.0, 'duration': 1.0, 'chaseRatio': 0.30000001192092896, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    }

    Timer.Wait({'time': 1.0})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
}

void BC_Appear() {
    BattleChallenge.ShowTimer()

    call AppearCommon1()


    fork {

        call AppearCommon2()

    } {
        Timer.Wait({'time': 0.4666669964790344})
        Audio.PlaySnowBossAppearBGM({'label': 'BGM_EV_SNOW_BOSSAPPEAR_BC', 'volume': 1.0, 'ignoreSkip': False})
    }

}

void BC_Dead() {

    call BossCommon.HitStop({'enemy': ActorIdentifier(name="Freblaze")})


    fork {
        Freblaze.SetCollisionEnabled({'enable': False})
        Freblaze.PlayAnimationNoWait({'name': 'dead', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Freblaze.AimCompassPoint({'direction': 0, 'withoutTurn': False, 'duration': 1.0, 'immediateTurn': False})
    } {
        if Freblaze.IsMaskActive() {

            fork {
                FreblazeMask.SetVisibility({'visible': False})
            } {
                Freblaze.PlayTailorOtherChannelNoWait({'channel': 'Break_mask_both', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            }

        }
    }


    fork {
        Timer.Wait({'time': 1.6670000553131104})

        call Dissolve.Dissolve({'actor': ActorIdentifier(name="Freblaze")})

        Freblaze.PlayMaterialAnimationNoWait({'name': 'Freblaze_dissolve', 'layer': 0})
    } {
        Timer.Wait({'time': 3.3329999446868896})
    }

    Timer.Wait({'time': 1.1670000553131104})

    fork {

        call BossCommon.BossExtinction({'enemy': ActorIdentifier(name="Freblaze")})

    } {
        Timer.Wait({'time': 1.6670000553131104})
    } {
        SandCover.StartSink()
    }

    Freblaze.CameraLockoff()
    Freblaze.Destroy()
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    MinigameTimer.Stop()
    if BattleChallenge.GetConditionNumber() == 3 {
        BattleChallenge.SetNextLevelAndLocation({'NextLevelName': 'BC_BossGanonPaste', 'NextLocatorName': 'BC_BossGanonPaste_Start'})
    }
}

void AppearCommon1() {

    call EvResetCommon.AllReset_02()

    Audio.StopAllBGM({'duration': 2.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    FlowControl.SetCanSkip({'enable': True})
    Player.MoveToCompassPoint({'direction': 2, 'speed': 0, 'timeOut': 7.0, 'distance': 2.0, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Freblaze.RoomDoorClose()
    Player.PlayAnimation({'name': 'ev_lookback', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})

    fork {
        Timer.Wait({'time': 0.5})
    } {
        FlowControl.PreloadTimeline({'filename': 'Freblaze'})
    }


    fork {
        Player.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    } {
        Freblaze.SetVisibility({'visible': True})
    } {
        Door.SetVisibility({'visible': False})
    }

}

void AppearCommon2() {
    FlowControl.InvokeTimeline({'filename': 'Freblaze', 'rate': 1.0})
    Freblaze.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Player.SetVisibility({'visible': True})
    } {
        Partner[companion].SetVisibility({'visible': True})
    } {
        Freblaze.SetCullMode({'cullMode': 1, 'enabled': True})
    } {
        Freblaze.PlayAnimation({'blendFrame': 15, 'name': 'wait', 'layer': 0, 'restart': False})
    }

    Audio.PlayBGM({'volume': 1.0, 'label': 'BGM_BATTLE_BOSS_SNOW', 'ignoreSkip': True})
    Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})
    Door.SetVisibility({'visible': True})
    Freblaze.CameraLockon({'maxSpeed': 100.0})
}

void WalkIn_Freblaze() {

    fork {

        call FloorChangeCommon._WarpCommon({'fadePreset': 'FadeOutNormalB'})

    } {
        Player.MoveToTargetActor({'speed': 0, 'timeOut': 1.0, 'tolerance': 0.10000000149011612, 'actor': ActorIdentifier(name="Player"), 'distance': 1.5, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        EventFlags.SetFlag({'symbol': 'L006R045Pot2', 'value': True})
    }

    GameControl.RequestWarp({'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}
