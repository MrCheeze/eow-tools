-------- EventFlow: L_Dungeon002 --------

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag', 'SetLevelFlag']
queries: ['CheckFlag', 'CheckMessgaeFlag']
params: None

Actor: Fade
entrypoint: None()
actions: ['StartParam']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestAutoSave', 'ForbidSave', 'UnforbidSave', 'EnableAutoSave', 'ForbidWarp']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['PlayLocationOriginCameraAnimation', 'Reset', 'LookAt2ActorsCenterAsTalker', 'MoveToWithTimeout']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE', 'StopAllBGM', 'StopZoneBgm', 'Prepare', 'PlayBGMEx', 'StopSE', 'PlayZoneBaseAmbience']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: []
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['MoveToTargetLinkedPoint']
queries: []
params: None

Actor: AreaStartTag
entrypoint: None()
actions: ['SetRestartPositionToLinkedPoint', 'LookAtTalkersLinkedPoint']
queries: []
params: None

Actor: ItemHeartContainer
entrypoint: None()
actions: ['WarpToNearLinkedRailPoint']
queries: []
params: None

Actor: EvAnomalocaris
entrypoint: None()
actions: ['Activate', 'SetCullMode', 'PlayAnimation', 'Deactivate']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'MoveToTargetActor', 'SetGravityEnable', 'PlayAnimation', 'LookAtTalker', 'AimCompassPoint', 'PlayAnimationNoWait', 'SetInterestIkEnabled', 'WarpToActorLinkedPoint', 'MoveToTargetLinkedPoint']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: ['Destroy', 'SetRestartPositionToLinkedPoint']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['MoveToBesideTargetActor', 'DisableAutoMovement', 'Talk', 'AimPlayer', 'PlayAnimation', 'AimActor', 'MoveToCompassPoint', 'EnableAutoMovement', 'PlayAnimationNoWait', 'AimCompassPoint']
queries: []
params: None

void ViewBoundaryWorld_AreaB() {
    Fade.StartParam({'mode': 0, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0, 'time': 1.0})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvB_ViewBoundaryWorld_AreaB'})
}

void AreaBDungeonEscapeStart() {

    call EvResetCommon.AllReset()

    EvAnomalocaris.SetCullMode({'cullMode': 0, 'enabled': True})
    EvAnomalocaris.Activate()

    fork {
        Audio.PlayOneshotSystemSE({'label': 'SE_ENEMY_ANOMALO_EV_UZU_APPEAR_00', 'volume': 1.0, 'pitch': 1.0})
    } {

        call UzuyobiAction()

    } {
        Player.AimCompassPoint({'direction': 3, 'withoutTurn': False, 'duration': 0.4000000059604645, 'immediateTurn': False})
        Timer.Wait({'time': 0.4000000059604645})
        Camera.MoveToWithTimeout({'targetPositionY': -13.5, 'targetPositionZ': 13.0, 'maxSpeed': 100.0, 'timeout': 10.0, 'targetPositionX': 786.0, 'chaseRatio': 0.07999999821186066})
    }

}

void R004FirstCam() {

    call EvResetCommon.AllReset()

    Camera.PlayLocationOriginCameraAnimation({'location': '004_CameraWall', 'path': 'map/L_Dungeon002_004.bfres', 'name': 'GeyserIntro01_cam', 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    Timer.Wait({'time': 0.6000000238418579})
    Camera.Reset({'chaseRatio': 0.03999999910593033, 'resetPlayerCamera': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'L002R004FirstCam'})
    Timer.Wait({'time': 0.20000000298023224})
}

void IntoDungeonAreaB() {

    fork {

        call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

    } {
        Player.MoveToTargetActor({'speed': 0, 'actor': ActorIdentifier(name="Player"), 'distance': 1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    Partner[companion].DisableAutoMovement()
    Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetY': 1.0, 'offsetX': 2.0, 'actor': ActorIdentifier(name="Player"), 'offsetZ': -1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})

    fork {
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }


    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaB:IntoDungeon_AreaB_010', 'getAttention': False})
    } {
        Partner[companion].PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaB:IntoDungeon_AreaB_020', 'getAttention': False})
    } {
        Partner[companion].PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void R001R002_WaterFallIn() {
    if !EventFlags.CheckFlag({'symbol': 'L_Dungeon002_vortex'}) {
        GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
        AreaStartTag.SetRestartPositionToLinkedPoint({'stance': 'Underwater', 'direction': 3, 'pointIndex': 0})
        Event79:
        if !EventFlags.CheckMessgaeFlag({'message': 'scenario/StoryAreaB:AreaBDungeonFellToLowerFloor_010'}) {

            call WaterFall()

        } else {

            call WaterFall2nd()

        }
    } else
    goto Event79
}

void R002R008UzClear_TopLadderUpIn() {
    if !EventFlags.CheckFlag({'symbol': 'EvB_AreaBBossDead'}) {
        if !EventFlags.CheckFlag({'symbol': 'L_Dungeon002_vortex'}) {
            Event71:

            fork {

                call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

            } {
                Player.PlayAnimation({'name': 'ev_ladder_levelout_u', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

            if !EventFlags.CheckFlag({'symbol': 'EvB_AreaBBossDead'}) {
                GameControl.UnforbidSave()
            }
        } else
        if !EventFlags.CheckFlag({'symbol': 'L002R003RetryPointReset'}) {
            EventFlags.SetFlag({'value': True, 'symbol': 'L002R003RetryPointReset'})
            EventFlags.SetLevelFlag({'index': 1, 'value': False})
            GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
            AreaStartTag.SetRestartPositionToLinkedPoint({'pointIndex': 0, 'stance': 'Ground', 'direction': 2})
            goto Event71
        } else {
            goto Event71
        }
    } else {
        goto Event71
    }
}

void AfterReleasTriTalkAreaB() {

    call EvResetCommon.AllReset()

    Player.PlayAnimationNoWait({'name': 'wait', 'blendFrame': 0, 'layer': 0, 'restart': False})
    Audio.StopZoneBgm()
    Audio.StopSE({'label': 'SE_OBJ_BUBBLE_CRACK', 'duration': 0.0})
    Audio.PlayZoneBaseAmbience()
    Player.LookAtTalker({'offsetY': 1.5, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetZ': 0.0, 'keep': False})
    ItemHeartContainer.WarpToNearLinkedRailPoint({'index': 0, 'offsetY': 0.0})

    call GeneralSequence.LookReturnPartner()

    Timer.Wait({'time': 1.0})
    Audio.Prepare({'label': 'BGM_EV_PARTNER_APPEAR', 'kind': 0, 'volume': 1.0})
    EventFlags.SetFlag({'symbol': 'EventAreaBClear', 'value': True})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvB_TouchWedge_AreaB'})

    call GeneralSequence.PartnerLvelUp({'Key': 'L002'})


    call GeneralSequence.LD_WorldGlobePieceGet({'Idx': 80, 'Dungeon': 'L002'})

    Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetY': 0.0, 'actor': ActorIdentifier(name="Player"), 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    call GeneralSequence.Look_at_Partner()

    Partner[companion].PlayAnimationNoWait({'name': 'yes,talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Audio.PlayBGMEx({'label': 'BGM_EV_PARTNER_APPEAR', 'volume': 1.0, 'sec': 0.4000000059604645, 'ignoreSkip': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:AfterReleasPartnerTalk020_010', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:AfterReleasPartnerTalk020_020', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Partner[companion].PlayAnimationNoWait({'name': 'no,talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:AfterReleasPartnerTalk020_030', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:AfterReleasPartnerTalk020_040', 'getAttention': False})
    Timer.Wait({'time': 1.5})
    Partner[companion].PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:LetsGoBack_010', 'getAttention': False})
    Audio.StopAllBGM({'duration': 2.0})
    Partner[companion].EnableAutoMovement()

    fork {
        GameControl.UnforbidSave()
    } {
        GameControl.EnableAutoSave()
    }

    GameControl.ForbidWarp()
    QuestSystem.SetProgress({'symbol': 'Coast_River:4287266681', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void UzuyobiAction() {

    fork {
        EvAnomalocaris.PlayAnimation({'name': 'ev_appear02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 14.25})
        EventFlags.SetLevelFlag({'value': True, 'index': 1})
    } {
        Audio.StopAllBGM({'duration': 3.0})
        Audio.Prepare({'label': 'BGM_SEA_WHIIRLPOOL_ESCAPE', 'kind': 0, 'volume': 1.0})
        Timer.Wait({'time': 10.0})
        Audio.PlayBGMEx({'ignoreSkip': True, 'label': 'BGM_SEA_WHIIRLPOOL_ESCAPE', 'volume': 1.0, 'sec': 6.5})
    } {
        Timer.Wait({'time': 17.75})
        EvAnomalocaris.Deactivate()
        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
        Area.SetRestartPositionToLinkedPoint({'stance': 'Underwater', 'direction': 1, 'pointIndex': 0})
        Area.Destroy()
    }

    GameControl.RequestAutoSave({'immediate': True, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
    GameControl.ForbidSave()
}

void WaterFall() {

    fork {

        call EvResetCommon.AllReset()

        Player.SetGravityEnable({'enable': False})
        Partner[companion].MoveToBesideTargetActor({'speed': 1, 'customSpeed': 10.0, 'offsetY': 6.0, 'offsetZ': 1.0, 'actor': ActorIdentifier(name="Player"), 'offsetX': -4.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0})
        Player.WarpToActorLinkedPoint({'index': 2, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetY': 0.0})
        Player.AimCompassPoint({'duration': 0.0, 'direction': 3, 'withoutTurn': False, 'immediateTurn': False})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        AreaStartTag.LookAtTalkersLinkedPoint({'pointIndex': 1, 'offsetY': -2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetZ': 0.0})
        Player.PlayAnimationNoWait({'name': 'fall_abyss_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.10000000149011612})

        fork {

            call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

            Timer.Wait({'time': 1.0})

            fork {
                Timer.Wait({'time': 1.600000023841858})
                Partner[companion].PlayAnimationNoWait({'name': 'wait', 'blendFrame': -1, 'layer': 0, 'restart': False})
            } {
                Partner[companion].PlayAnimationNoWait({'name': 'move_down', 'layer': 0, 'blendFrame': -1, 'restart': False})
                Partner.MoveToTargetLinkedPoint({'offsetX': 0.0, 'offsetY': 0.0, 'index': 3, 'timeOut': 7.0, 'actor': ActorIdentifier(name="AreaStartTag"), 'speed': 1, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetZ': 0.0})
            }

        } {
            Timer.Wait({'time': 1.2000000476837158})
            Player.PlayAnimationNoWait({'name': 'swim_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Player.LookAtTalker({'keep': True, 'distanceOffset': -3.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
            Player.MoveToTargetLinkedPoint({'speed': 0, 'offsetX': 0.0, 'index': 0, 'offsetY': 0.0, 'actor': ActorIdentifier(name="AreaStartTag"), 'timeOut': 0.5, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetZ': 0.0})
        } {
            Timer.Wait({'time': 0.5})
            Player.SetGravityEnable({'enable': True})
        }

    } {
        Timer.Wait({'time': 1.7000000476837158})
        Audio.PlayOneshotSystemSE({'label': 'VO_ZELDA_FALL', 'volume': 1.0, 'pitch': 1.0})
    }


    fork {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Player.LookAtTalker({'keep': True, 'distanceOffset': -3.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaB:AreaBDungeonFellToLowerFloor_010', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.800000011920929})

    fork {
        Partner[companion].AimCompassPoint({'direction': 5, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Partner[companion].MoveToCompassPoint({'direction': 5, 'distance': 6.0, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Timer.Wait({'time': 0.5})
        AreaStartTag.LookAtTalkersLinkedPoint({'pointIndex': 1, 'duration': 0.4000000059604645, 'chaseRatio': 0.07599999755620956, 'offsetY': -3.5, 'offsetZ': 10.0, 'distanceOffset': 0.0, 'offsetX': 0.0})
    } {
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'withoutTurn': True, 'offsetX': 0.0, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetY': -3.0, 'duration': 0.4000000059604645, 'boneName': '', 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})
    Partner[companion].PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaB:AreaBDungeonFellToLowerFloor_020', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.20000000298023224, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Timer.Wait({'time': 0.75})
        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    } {
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'offsetX': 0.0, 'offsetY': -3.0, 'duration': 2.5, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'withoutTurn': False, 'boneName': '', 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].PlayAnimationNoWait({'name': 'move_down', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].MoveToBesideTargetActor({'withoutTurn': True, 'speed': 0, 'offsetZ': 0.75, 'actor': ActorIdentifier(name="Player"), 'offsetY': 1.2999999523162842, 'offsetX': 1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0})
        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'blendFrame': -1, 'layer': 0, 'restart': False})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.20000000298023224, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.4000000059604645})

    fork {
        Partner[companion].PlayAnimation({'blendFrame': -1, 'name': 'appeal02', 'layer': 0, 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'volume': 0.0, 'label': 'SE_PARTNER_APPEAL', 'pitch': 1.0})
    }

    Timer.Wait({'time': 0.4000000059604645})
    Player.AimCompassPoint({'direction': 3, 'duration': 1.0, 'withoutTurn': False, 'immediateTurn': False})
}

void WaterFall2nd() {

    call EvResetCommon.AllReset()

    Player.SetGravityEnable({'enable': False})
    Player.WarpToActorLinkedPoint({'index': 2, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetY': 0.0})
    Player.AimCompassPoint({'duration': 0.0, 'direction': 3, 'withoutTurn': False, 'immediateTurn': False})
    AreaStartTag.LookAtTalkersLinkedPoint({'pointIndex': 1, 'offsetY': -2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetZ': 0.0})
    Player.PlayAnimationNoWait({'name': 'fall_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.10000000149011612})

    fork {

        call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

        Timer.Wait({'time': 1.0})
    } {
        Timer.Wait({'time': 1.2000000476837158})
        Player.LookAtTalker({'keep': True, 'distanceOffset': -3.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Player.PlayAnimationNoWait({'name': 'swim_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})
        Player.SetGravityEnable({'enable': True})
    }

}

void R002R001UzClear_TopWaitIn() {
    if !EventFlags.CheckFlag({'symbol': 'EvB_AreaBBossDead'}) {
        if !EventFlags.CheckFlag({'symbol': 'L_Dungeon002_vortex'}) {
            Event63:

            fork {

                call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

            } {
                Player.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

            if !EventFlags.CheckFlag({'symbol': 'EvB_AreaBBossDead'}) {
                GameControl.UnforbidSave()
            }
        } else
        if !EventFlags.CheckFlag({'symbol': 'L002R003RetryPointReset'}) {
            EventFlags.SetFlag({'value': True, 'symbol': 'L002R003RetryPointReset'})
            EventFlags.SetLevelFlag({'index': 1, 'value': False})
            GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
            AreaStartTag.SetRestartPositionToLinkedPoint({'pointIndex': 0, 'stance': 'Ground', 'direction': 0})
            goto Event63
        } else {
            goto Event63
        }
    } else {
        goto Event63
    }
}
