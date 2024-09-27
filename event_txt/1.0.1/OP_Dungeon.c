-------- EventFlow: OP_Dungeon --------

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump', 'ChangePlayingActor', 'ForbidSave', 'UnforbidSave', 'ForbidLaunchApplet', 'RequestAutoSave', 'UnforbidLaunchApplet']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag', 'SetLevelFlag']
queries: ['CheckFlag']
params: None

Actor: Link
entrypoint: None()
actions: ['SetCullMode', 'Heal', 'SetShadowDecalEnable', 'SetSwordLv', 'SetBombLv', 'SetBowLv']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['PlayActorOriginCameraAnimation', 'SetTonemapExposure', 'LerpSsaoSettings', 'Reset', 'SetShadowMapSettings']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['MoveToTargetActor', 'PlayAnimation', 'SetFacialExpression', 'MoveToBesideTargetActor', 'AimActor', 'AimCompassPoint', 'ResetAim', 'SetInterestIkEnabled', 'MoveToCompassPoint', 'AimDegreeAngle']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayZoneBGM', 'PlayOneshotSystemSE', 'PlayBGM', 'StopZoneBgm', 'StopAllBGM', 'DisablePlaySeFromTailor', 'Prepare', 'PlayBGMEx']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Partner[Ev_Partner]
entrypoint: None()
actions: ['SetCullMode', 'Activate', 'StopTailorOtherChannel', 'SetVisibility', 'PlayTailorOtherChannelNoWait', 'MoveToTargetActor', 'BeginPathFollow', 'PlayAnimationEx', 'MoveToBesideTargetActor', 'PlayAnimation', 'WarpToActorLinkedPoint', 'LookAtTalker', 'MoveToCompassPoint', 'MoveToTargetLinkedPoint']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['InvokeTimeline', 'Yield_']
queries: []
params: None

Actor: EvilSeal
entrypoint: None()
actions: ['PlayAnimation', 'SetVisibility', 'PlayTailorOtherChannelNoWait', 'ResetShakeCounter', 'IncrementShakeCounter', 'StopTailorOtherChannel', 'Destroy']
queries: ['CheckShakeCounter']
params: None

Actor: Zelda
entrypoint: None()
actions: ['SetCullMode', 'SetShadowDecalEnable', 'SetFacialExpression', 'Heal', 'GenericItemGetSequence', 'AimActor', 'SetInterestIkEnabled', 'MoveToCompassPoint', 'SetZeldaFacialAnxiety']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: []
queries: []
params: None

Actor: KeyInputUI
entrypoint: None()
actions: ['WaitForInput', 'Show', 'Hide', 'PreloadArchive']
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

Actor: DarknutPrologue[DarknutA]
entrypoint: None()
actions: ['Activate']
queries: []
params: None

Actor: DarknutPrologue[DarknutB]
entrypoint: None()
actions: ['Activate']
queries: []
params: None

Actor: DarknutPrologue[DarknutC]
entrypoint: None()
actions: ['Activate']
queries: []
params: None

Actor: ItemLinkHood
entrypoint: None()
actions: ['Destroy']
queries: []
params: None

Actor: Area[ThroughHood]
entrypoint: None()
actions: ['Destroy']
queries: []
params: None

Actor: Area[FlyToHood]
entrypoint: None()
actions: ['Destroy']
queries: []
params: None

Actor: Area[CrackLoom_retry]
entrypoint: None()
actions: ['Destroy']
queries: []
params: None

Actor: Movie
entrypoint: None()
actions: ['Play', 'Prepare', 'Close']
queries: []
params: None

Actor: EvCrackPasteMuFailed
entrypoint: None()
actions: ['Destroy', 'SetAutoCalcBoundingVolumeEnabled', 'PlayAnimation', 'PlayMaterialAnimationNoWait']
queries: []
params: None

Actor: Vibration
entrypoint: None()
actions: ['PlayVibration']
queries: []
params: None

Actor: TitleLogo
entrypoint: None()
actions: ['PreloadArchive', 'Show', 'Hide']
queries: []
params: None

Actor: AreaStartTag
entrypoint: None()
actions: []
queries: []
params: None

Actor: CrackMove
entrypoint: None()
actions: []
queries: []
params: None

void ZeldaRelease() {
    Audio.StopZoneBgm()
    KeyInputUI.PreloadArchive()
    Zelda.Heal({'amount': 12})
    Zelda.SetShadowDecalEnable({'enable': False})
    Player.PlayAnimation({'layer': 0, 'name': 'ev_crystal_search', 'restart': False, 'blendFrame': -1})
    Timer.Wait({'time': 2.0})

    fork {
        Fade.StartPreset({'preset': 'FadeInNormal'})
    } {
        Camera.LerpSsaoSettings({'kind': 2, 'noWait': True, 'targetValue': 1.0, 'duration': 0.20000000298023224})
    } {
        Camera.PlayActorOriginCameraAnimation({'name': 'ZeldaRelease01_cam', 'path': '/actor/EvilSeal.bfres', 'target': ActorIdentifier(name="EvilSeal"), 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        EvilSeal.PlayTailorOtherChannelNoWait({'restart': False, 'channel': 'Crack1_Jump', 'index': -1, 'stopOnSkipped': True})
    }

    KeyInputUI.Show()

    call _pressAnyKey({'count': 2})


    fork {
        EvilSeal.PlayAnimation({'name': 'ev_shake', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        EvilSeal.StopTailorOtherChannel({'channel': 'Crack1_Jump', 'index': -1})
        EvilSeal.StopTailorOtherChannel({'channel': 'Crack1', 'index': -1})
        EvilSeal.PlayTailorOtherChannelNoWait({'restart': False, 'channel': 'Crack2', 'index': -1, 'stopOnSkipped': True})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Camera.PlayActorOriginCameraAnimation({'path': '/actor/EvilSeal.bfres', 'name': 'ZeldaRelease03_cam', 'target': ActorIdentifier(name="EvilSeal"), 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Player.PlayAnimation({'name': 'ev_crystal_onehand_knock_shake', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Zelda.SetFacialExpression({'expression': 'angry'})
    Player.PlayAnimation({'name': 'ev_crystal_onehand_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    call _pressAnyKey({'count': 2})


    fork {
        EvilSeal.PlayAnimation({'name': 'ev_shake', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        EvilSeal.StopTailorOtherChannel({'channel': 'Crack2', 'index': -1})
        EvilSeal.PlayTailorOtherChannelNoWait({'restart': False, 'channel': 'Crack3', 'index': -1, 'stopOnSkipped': True})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Camera.PlayActorOriginCameraAnimation({'path': '/actor/EvilSeal.bfres', 'name': 'ZeldaRelease04_cam', 'target': ActorIdentifier(name="EvilSeal"), 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Player.PlayAnimation({'name': 'ev_crystal_onehand_knock_shake', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Player.PlayAnimation({'name': 'ev_crystal_onehand_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    call _pressAnyKey1({'count': 3})

    KeyInputUI.Hide()

    fork {
        Timer.Wait({'time': 0.10000000149011612})
        EvilSeal.PlayTailorOtherChannelNoWait({'channel': 'Shine', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_OPD_BARRIER_BREAK', 'volume': 1.0, 'pitch': 1.0})
    } {
        Player.PlayAnimation({'name': 'ev_crystal_bothhands_knock_shake', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Timer.Wait({'time': 0.4169999957084656})
    } {
        Camera.SetTonemapExposure({'noWait': True, 'targetValue': 3.0, 'duration': 0.4169999957084656})
    } {
        Player.PlayAnimation({'name': 'ev_crystal_bothhands_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GameControl.ForbidLaunchApplet()
    }


    fork {
        Zelda.SetShadowDecalEnable({'enable': True})
        Player.PlayAnimation({'layer': 0, 'name': 'ev_crystal_land', 'blendFrame': -1, 'restart': False})
    } {
        EvilSeal.SetVisibility({'visible': False})
    } {
        EvilSeal.StopTailorOtherChannel({'channel': 'Crack3', 'index': -1})
        EvilSeal.PlayTailorOtherChannelNoWait({'channel': 'disappear', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Camera.PlayActorOriginCameraAnimation({'path': '/actor/EvilSeal.bfres', 'name': 'ZeldaRelease05_cam', 'target': ActorIdentifier(name="EvilSeal"), 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Camera.SetTonemapExposure({'noWait': True, 'targetValue': 1.0, 'duration': 0.28299999237060547})
    } {
        Player.SetFacialExpression({'expression': 'slightly_om'})
        Timer.Wait({'time': 1.7999999523162842})
        Player.SetFacialExpression({'expression': 'normal'})
    }

    EvilSeal.Destroy()
    Zelda.SetCullMode({'enabled': True, 'cullMode': 1})
    EventFlags.SetFlag({'symbol': 'EvPrologue003', 'value': True})
    EventVariables.SetVariable({'symbol': 'OP_Dungeon:1101033480'})
    GameControl.UnforbidLaunchApplet()
    GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
}

void OP_DungeonWalkIn() {
    if !EventFlags.CheckFlag({'symbol': 'EvPrologue015'}) {

        fork {

            fork {
                Fade.StartPreset({'preset': 'FadeInNormal'})
            } {
                Audio.PlayZoneBGM({'stopbgm': True})
            }

        } {
            Player.MoveToTargetActor({'speed': 0, 'distance': 1.5, 'actor': ActorIdentifier(name="Link"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        }

        EventFlags.SetFlag({'symbol': 'EvPrologue020', 'value': True})
        Timer.Wait({'time': 0.5})
        Player.PlayAnimation({'name': 'ev_lookback', 'layer': 0, 'blendFrame': -1, 'restart': False})
        QuestSystem.SetProgress({'symbol': 'OP_Dungeon:1279525274', 'isShowTelopInEvent': False, 'isFrontFade': False})

        call LinkTuto()

        GameControl.RequestAutoSave({'immediate': True, 'name': 'OP_Dungeon', 'postResetOverwriteCounter': True, 'needsStartupEvent': False, 'preResetOverwriteCounter': False})
    } else {

        fork {

            fork {
                Fade.StartPreset({'preset': 'FadeInNormal'})
            } {
                Audio.PlayZoneBGM({'stopbgm': True})
            }

        } {
            Player.MoveToTargetActor({'speed': 0, 'distance': 1.5, 'actor': ActorIdentifier(name="Link"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        }

    }
}

void LinkTuto() {
    EventFlags.SetFlag({'symbol': 'EvPrologue015', 'value': True})
}

void LinkAdventure() {
    GameControl.ForbidLaunchApplet()

    fork {
        DarknutPrologue[DarknutA].Activate()
    } {
        DarknutPrologue[DarknutB].Activate()
    } {
        DarknutPrologue[DarknutC].Activate()
    }

    GameControl.ChangePlayingActor({'actor': 1})
    Link.Heal({'amount': 20})
    Link.SetSwordLv({'lv': 2})
    Link.SetBowLv({'lv': 2})
    Link.SetBombLv({'lv': 2})

    fork {
        Link.SetCullMode({'cullMode': 0, 'enabled': False})
    } {
        Link.SetShadowDecalEnable({'enable': False})
    }

    Camera.SetShadowMapSettings({'ShadowMapSettings': 'Demo_M'})

    fork {
        FlowControl.InvokeTimeline({'filename': 'LnkAdventure', 'rate': 1.0})
    } {
        Audio.StopZoneBgm()
    }

    Link.SetCullMode({'cullMode': 1, 'enabled': True})
    EventFlags.SetFlag({'symbol': 'Map_NotOpen', 'value': True})
    GameControl.UnforbidLaunchApplet()
    GameControl.RequestLevelJump({'level': 'OP_Dungeon', 'locator': 'OPD_R001_Start', 'offsetX': 0.0, 'offsetZ': 0.0})
    EventVariables.SetVariable({'symbol': 'OP_Dungeon:1281385200'})
    EventVariables.SetVariable({'symbol': 'OP_Dungeon:1279525274'})
}

void CrackLoom() {
    Player.ResetAim()
    Partner[Ev_Partner].SetCullMode({'cullMode': 0, 'enabled': False})

    fork {
        Partner[Ev_Partner].Activate()
    } {
        EvCrackPasteMuFailed.SetAutoCalcBoundingVolumeEnabled({'enabled': True})
    }


    call _ToSprite()


    fork {
        Partner[Ev_Partner].MoveToTargetActor({'speed': 0, 'actor': ActorIdentifier(name="Player"), 'distance': 0.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_PICK_UP_HOOD1_MOVE', 'volume': 1.0, 'pitch': 1.0})
    }


    fork {
        Partner[Ev_Partner].PlayAnimation({'name': 'ev_Hood_appeal', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[Ev_Partner].MoveToCompassPoint({'timeOut': 5.0, 'speed': 0, 'direction': 0, 'customSpeed': -2.0, 'distance': 2.0, 'tolerance': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Timer.Wait({'time': 2.0})
    } {
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimDegreeAngle({'duration': 0.20000000298023224, 'withoutTurn': True, 'angle': -15.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimCompassPoint({'duration': 0.20000000298023224, 'withoutTurn': True, 'direction': 0, 'immediateTurn': False})
        Timer.Wait({'time': 0.20000000298023224})
        Player.SetInterestIkEnabled({'enable': False})
        Player.PlayAnimation({'name': 'ev_Hood_appeal', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Zelda.SetZeldaFacialAnxiety()
        Player.PlayAnimation({'name': 'wait_barehands', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.5})
        Zelda.SetFacialExpression({'expression': 'anxiety_om'})
        Player.PlayAnimation({'name': 'ev_surprise_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.5})
        Player.MoveToCompassPoint({'speed': 0, 'direction': 0, 'withoutTurn': True, 'customSpeed': -2.0, 'distance': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Vibration.PlayVibration({'label': '35_L03_GrumbleLoop2', 'pan': 0.5, 'ratio': 1.0})
        Timer.Wait({'time': 3.0})
    } {
        Timer.Wait({'time': 2.5999999046325684})
        EvCrackPasteMuFailed.PlayMaterialAnimationNoWait({'name': 'ev_CrackLoom_move_st', 'layer': 0})
        EvCrackPasteMuFailed.PlayAnimation({'name': 'ev_CrackLoom_move_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 2.5999999046325684})
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_PICK_UP_HOOD2_SAKEME', 'volume': 1.0, 'pitch': 1.0})
    }

    Partner[Ev_Partner].MoveToTargetLinkedPoint({'index': 0, 'timeOut': 5.0, 'actor': ActorIdentifier(name="Partner", sub_name="Ev_Partner"), 'speed': 1, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Partner[Ev_Partner].BeginPathFollow({'pathIndex': 0})
    Partner[Ev_Partner].SetCullMode({'enabled': True, 'cullMode': 1})
    Partner[Ev_Partner].PlayAnimationEx({'time': 0.0, 'name': 'ev_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[Ev_Partner].StopTailorOtherChannel({'channel': 'Ev_SphereLight', 'index': -1})
    Partner[Ev_Partner].PlayTailorOtherChannelNoWait({'channel': 'SphereLight', 'stopOnSkipped': False, 'restart': False, 'index': -1})
    Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})
    EventFlags.SetFlag({'symbol': 'EvPrologue013', 'value': True})
    EventVariables.SetVariable({'symbol': 'OP_Dungeon:3246976351'})
    EventFlags.SetFlag({'symbol': 'OP_Dungeon_Escaping', 'value': True})
    EventFlags.SetFlag({'value': True, 'symbol': 'OPDungeon_retry'})
    Timer.Wait({'time': 0.4000000059604645})
    Area[CrackLoom_retry].Destroy()
    Audio.PlayBGM({'label': 'BGM_OP_DUGEON_ESCAPE', 'volume': 1.0, 'ignoreSkip': True})
    GameControl.ForbidSave()
    EventFlags.SetLevelFlag({'value': True, 'index': 2})
    EvCrackPasteMuFailed.Destroy()
}

void _pressAnyKey() {
    EvilSeal.ResetShakeCounter()
    Event3:
    KeyInputUI.WaitForInput()
    EvilSeal.IncrementShakeCounter()
    if !EvilSeal.CheckShakeCounter({'threshold': 'count'}) {

        fork {
            EvilSeal.PlayAnimation({'name': 'ev_shake', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Player.PlayAnimation({'name': 'ev_crystal_onehand_knock_shake', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Player.PlayAnimation({'name': 'ev_crystal_onehand_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.05000000074505806})
        goto Event3
    }
}

void _ToSprite() {
    FlowControl.Yield_()
    Partner[Ev_Partner].Activate()
    Partner[Ev_Partner].StopTailorOtherChannel({'channel': 'GlowKeep', 'index': 0})
    Partner[Ev_Partner].StopTailorOtherChannel({'channel': 'Triangle_GlowKeep', 'index': 1})
    Partner[Ev_Partner].StopTailorOtherChannel({'channel': 'Triangle_GlowKeep', 'index': 2})
    Partner[Ev_Partner].StopTailorOtherChannel({'channel': 'Triangle_GlowKeep', 'index': 3})
    Partner[Ev_Partner].SetVisibility({'visible': False})
    Partner[Ev_Partner].PlayTailorOtherChannelNoWait({'channel': 'Ev_SphereLight', 'restart': False, 'index': -1, 'stopOnSkipped': True})
}

void _pressAnyKey1() {
    EvilSeal.ResetShakeCounter()
    Event22:
    KeyInputUI.WaitForInput()
    EvilSeal.IncrementShakeCounter()
    if !EvilSeal.CheckShakeCounter({'threshold': 'count'}) {

        fork {
            EvilSeal.PlayAnimation({'name': 'ev_shake', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Player.PlayAnimation({'name': 'ev_crystal_bothhands_knock_shake', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Player.PlayAnimation({'name': 'ev_crystal_bothhands_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.05000000074505806})
        goto Event22
    }
}

void FlyToHood() {
    Area[FlyToHood].Destroy()

    call _ToSprite()


    fork {
        Partner[Ev_Partner].LookAtTalker({'keep': True, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Partner[Ev_Partner].MoveToBesideTargetActor({'speed': 0, 'offsetY': -0.30000001192092896, 'customSpeed': 2.5, 'actor': ActorIdentifier(name="ItemLinkHood"), 'offsetX': 0.0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0})
    } {
        Timer.Wait({'time': 3.200000047683716})
        Player.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="Ev_Partner"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_FLY_TO_HOOD', 'volume': 1.0, 'pitch': 1.0})
    }

    Partner[Ev_Partner].StopTailorOtherChannel({'channel': 'GlowKeep', 'index': 0})
    Partner[Ev_Partner].StopTailorOtherChannel({'channel': 'Ev_SphereLight', 'index': 0})
    Timer.Wait({'time': 2.5})
}

void PickUpHood() {
    if !EventFlags.CheckFlag({'symbol': 'EvPrologue013'}) {
        Zelda.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Partner", sub_name="Ev_Partner"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

        fork {
            ItemLinkHood.Destroy()
            Partner[Ev_Partner].PlayTailorOtherChannelNoWait({'channel': 'Ev_SphereLight', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        } {
            Zelda.GenericItemGetSequence({'itemKey': 'ItemLinkHood', 'messageEntry': '', 'count': 1, 'keepRaise': False, 'index': -1})
            Player.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Partner[Ev_Partner].MoveToBesideTargetActor({'speed': 0, 'customSpeed': 3.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 2.5, 'offsetX': 0.0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0})
        Player.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Player.AimCompassPoint({'withoutTurn': False, 'direction': 0, 'duration': 0.4000000059604645, 'immediateTurn': False})
        Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})

        call CrackLoom()

    }
}

void ThroughHood() {
    if !EventFlags.CheckFlag({'symbol': 'EvPrologue013'}) {
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ItemLinkHood"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Player.MoveToBesideTargetActor({'speed': 0, 'withoutTurn': False, 'timeOut': 3.0, 'tolerance': 0.0, 'offsetX': 0.0, 'offsetZ': 1.0, 'offsetY': 0.0, 'customSpeed': 3.0, 'actor': ActorIdentifier(name="ItemLinkHood"), 'method': 0})

        call PickUpHood()

        Area[ThroughHood].Destroy()
    }
}

void CrackLoom_retry() {

    call _ToSprite()

    Partner[Ev_Partner].BeginPathFollow({'pathIndex': 0})
    Partner[Ev_Partner].PlayAnimationEx({'time': 0.0, 'name': 'ev_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[Ev_Partner].SetCullMode({'enabled': True, 'cullMode': 1})
    Partner[Ev_Partner].StopTailorOtherChannel({'channel': 'Ev_SphereLight', 'index': -1})
    Audio.PlayBGM({'label': 'BGM_OP_DUGEON_ESCAPE', 'volume': 1.0, 'ignoreSkip': True})
    Partner[Ev_Partner].PlayTailorOtherChannelNoWait({'channel': 'SphereLight', 'stopOnSkipped': False, 'restart': False, 'index': -1})
    Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})
    Vibration.PlayVibration({'label': '35_L03_GrumbleLoop2', 'pan': 0.5, 'ratio': 1.0})

    fork {
        Timer.Wait({'time': 0.6499999761581421})
        EventFlags.SetLevelFlag({'value': True, 'index': 2})
        EvCrackPasteMuFailed.Destroy()
    } {
        Timer.Wait({'time': 0.25})
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="CrackMove"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Zelda.SetZeldaFacialAnxiety()
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.MoveToCompassPoint({'tolerance': 1.0, 'timeOut': 2.0, 'direction': 0, 'speed': 1, 'distance': 5.0, 'withoutTurn': False, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        EvCrackPasteMuFailed.PlayMaterialAnimationNoWait({'name': 'ev_CrackLoom_move_st', 'layer': 0})
        EvCrackPasteMuFailed.PlayAnimation({'name': 'ev_CrackLoom_move_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    EventFlags.SetFlag({'symbol': 'EvPrologue013', 'value': True})
    EventFlags.SetFlag({'symbol': 'OP_Dungeon_Escaping', 'value': True})
    Area[CrackLoom_retry].Destroy()
    Zelda.SetInterestIkEnabled({'enable': False})
}

void CrackLoom_retry2() {
    Audio.StopAllBGM({'duration': 3.0})
    ItemLinkHood.Destroy()

    call _ToSprite()

    Partner[Ev_Partner].WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetY': 0.0})
    Timer.Wait({'time': 2.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
}

void WalkOut_WhiteOP_Dungeon() {

    fork {
        Audio.StopAllBGM({'duration': 3.0})
    } {
        Vibration.PlayVibration({'label': '35_L03_GrumbleLoop2', 'pan': 0.5, 'ratio': 1.0})
    }


    fork {

        call AreaExitCommon._OutCommon({'fadePreset': 'FadeOutNormalB'})

    } {
        Player.MoveToTargetActor({'timeOut': 1.0, 'tolerance': 0.10000000149011612, 'speed': 1, 'actor': ActorIdentifier(name="Area"), 'distance': -5.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    GameControl.UnforbidSave()

    fork {
        Movie.Prepare({'filename': 'rd004_Opening'})
    } {
        Audio.DisablePlaySeFromTailor()
    } {
        Audio.Prepare({'label': 'BGM_EV_TITLE_LOGO', 'kind': 0, 'volume': 1.0})
    } {
        TitleLogo.PreloadArchive()
    } {
        GameControl.ForbidLaunchApplet()
    }


    fork {
        Movie.Play({'autoClose': False})
    } {
        Audio.PlayBGMEx({'label': 'BGM_EV_TITLE_LOGO', 'sec': 16.700000762939453, 'volume': 1.0, 'ignoreSkip': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_TITLE_ALL_4CH', 'volume': 1.0, 'pitch': 1.0})
    } {
        Timer.Wait({'time': 42.79999923706055})
        TitleLogo.Show()
    } {
        Timer.Wait({'time': 51.119998931884766})
        TitleLogo.Hide()
    }

    Fade.StartPreset({'preset': 'CutOutB'})

    fork {
        Movie.Close()
    } {
        GameControl.UnforbidLaunchApplet()
    }

    QuestSystem.SetProgress({'symbol': 'OP_Dungeon:3246976351', 'isShowTelopInEvent': False, 'isFrontFade': False})
    QuestSystem.SetProgress({'symbol': 'OP_Dungeon:3547397471', 'isShowTelopInEvent': False, 'isFrontFade': False})
    Zelda.Heal({'amount': 12})
    GameControl.RequestLevelJump({'level': 'Field', 'locator': 'Ev_Field_HyrulePlains_OP', 'offsetX': 0.0, 'offsetZ': 0.0})
}
