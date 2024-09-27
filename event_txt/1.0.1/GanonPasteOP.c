-------- EventFlow: GanonPasteOP --------

Actor: Player
entrypoint: None()
actions: ['SetVisibility', 'AimCompassPoint', 'SetOutfit', 'SetRightHandItem', 'SetLeftHandItem', 'StopBurning', 'SetSwordLv', 'SetBombLv', 'SetBowLv', 'ResetActiveAndPesteActors', 'ResetCarriedActor', 'UpdateStrongRespawnPoint', 'OverwriteRecoveryPos']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Hud
entrypoint: None()
actions: ['PlayInAnim']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['StopTailorOtherChannel', 'SetVisibility', 'PlayTailorOtherChannelNoWait', 'DisableAutoMovement', 'WarpToActor']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayBGM', 'StopAllBGM', 'StopZoneBgm', 'PlayOneshotSystemSE', 'StopRegionBgm']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Reset', 'LookAt2ActorsCenterAsTalker', 'PlayLocationOriginCameraAnimation', 'LerpDofSettings']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['InvokeTimeline', 'PreloadTimeline', 'Yield_', 'SetCanSkip']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['ChangePlayingActor', 'RequestLevelJump', 'LoadAsset', 'ForbidSave', 'UnforbidSave', 'ResetSensorEventResetContainsActors', 'SetDarknutVisibility']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: BossBarrier
entrypoint: None()
actions: ['LookAtGimmick', 'EmitHoldEffect']
queries: []
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: GanonPasteOP
entrypoint: None()
actions: ['LookAtTalker', 'CameraLockon', 'PlayAnimation', 'SetCullMode', 'Talk', 'CameraLockoff', 'SetTalkerName', 'PlayTailorOtherChannelNoWait', 'SetVisibilityTrident', 'AimCompassPoint', 'WarpToActorLinkedPointWithCompassPoint', 'SetVisibility', 'ResetTridentForEvent', 'PlayAnimationNoWait']
queries: ['IsDownPose']
params: None

Actor: Link
entrypoint: None()
actions: ['SetCullMode', 'SetShadowDecalEnable', 'AimActor', 'WarpToActorLinkedPoint', 'PlayAnimation', 'WarpToActorLinkedPointWithCompassPoint', 'SetLinkHood', 'SetVisibility', 'SetLeftHandItem', 'SetRightHandItem']
queries: []
params: None

Actor: ZeldaImprison
entrypoint: None()
actions: ['PlayAnimation', 'WarpToActorLinkedPoint', 'SetFacialExpression']
queries: []
params: None

Actor: ItemLinkHood
entrypoint: None()
actions: ['WarpToActor', 'SetGravityEnable', 'SetCollisionEnabled', 'PlayAnimation', 'SetVisibility', 'Activate']
queries: []
params: None

Actor: Arrow01
entrypoint: None()
actions: ['WarpToActorLinkedPointWithCompassPoint']
queries: []
params: None

Actor: EvOPDeleteWall
entrypoint: None()
actions: ['Activate', 'Deactivate']
queries: []
params: None

Actor: EvCrackPasteMuFailed
entrypoint: None()
actions: ['SetAutoCalcBoundingVolumeEnabled']
queries: []
params: None

Actor: AreaStartTag
entrypoint: None()
actions: []
queries: []
params: None

void Appear() {
    Timer.Wait({'time': 0.5})
    Player.UpdateStrongRespawnPoint()

    call LinkMeetZelda()

    Player.OverwriteRecoveryPos({'x': 162.60000610351562, 'z': 15.800000190734863, 'y': 13.5})
    GanonPasteOP.SetVisibilityTrident({'visibility': 0})

    fork {
        GanonPasteOP.LookAtTalker({'chaseRatio': 1.0, 'duration': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {
        Link.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        GanonPasteOP.PlayAnimation({'name': 'ev_appear', 'blendFrame': 1, 'layer': 0, 'restart': False})
    } {
        GanonPasteOP.PlayTailorOtherChannelNoWait({'channel': 'Aura_Anger', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Timer.Wait({'time': 2.0})
        GanonPasteOP.SetVisibilityTrident({'visibility': 1})
    }


    fork {
        BossBarrier.LookAtGimmick({'duration': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {
        GanonPasteOP.PlayAnimation({'name': 'ev_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    BossBarrier.EmitHoldEffect()
    Timer.Wait({'time': 1.5})

    fork {
        Timer.Wait({'time': 0.10000000149011612})
        Player.SetVisibility({'visible': True})
        Player.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        GanonPasteOP.SetCullMode({'cullMode': 1, 'enabled': True})
    }

    GameControl.ForbidSave()
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Audio.PlayBGM({'label': 'BGM_BATTLE_GANON_OP', 'volume': 1.0, 'ignoreSkip': True})
    GanonPasteOP.CameraLockon({'maxSpeed': 100.0})
}

void Angry() {

    fork {

        fork {
            GanonPasteOP.LookAtTalker({'duration': 0.5, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 10.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        } {
            if !GanonPasteOP.IsDownPose() {
                GanonPasteOP.PlayAnimation({'name': 'ev_angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } else {
                GanonPasteOP.PlayAnimation({'name': 'ev_angry_Down', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }
        }

        GanonPasteOP.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.5})
        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
        Hud.PlayInAnim()
        GanonPasteOP.CameraLockon({'maxSpeed': 100.0})
    } {

        call EvResetCommon.AngryReset()

    }

}

void PasteMuFailed() {
    Player.StopBurning()
    Player.ResetActiveAndPesteActors({'child': False, 'cemeteryRevive': False, 'defeatedThrough': False, 'aliveCemeteryRevive': False})
    Audio.StopAllBGM({'duration': 0.0})
    FlowControl.PreloadTimeline({'filename': 'PasteMuFailed'})
    GameControl.LoadAsset({'path': 'map/OP_Dungeon_005.bfres'})
    Player.SetRightHandItem({'item': 0})
    Player.SetLeftHandItem({'item': 1})
    GanonPasteOP.WarpToActorLinkedPointWithCompassPoint({'index': 0, 'direction': 0, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetY': 0.0})
    Link.WarpToActorLinkedPointWithCompassPoint({'index': 0, 'direction': 0, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetY': 0.0})
    Arrow01.WarpToActorLinkedPointWithCompassPoint({'index': 0, 'direction': 0, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetY': 0.0})
    ZeldaImprison.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="AreaStartTag"), 'index': 1, 'offsetY': 0.0})
    Partner[companion].DisableAutoMovement()
    Partner[companion].WarpToActor({'distance': 2.5, 'actor': ActorIdentifier(name="Link"), 'offsetY': 0.0, 'offsetX': 0.0})

    call _ToSprite()

    EvCrackPasteMuFailed.SetAutoCalcBoundingVolumeEnabled({'enabled': True})
    GanonPasteOP.ResetTridentForEvent()

    call Dissolve.Dissolve({'actor': ActorIdentifier(name="GanonPasteOP")})

    FlowControl.InvokeTimeline({'filename': 'PasteMuFailed', 'rate': 1.0})
    Link.SetCullMode({'enabled': True, 'cullMode': 1})
    Link.SetShadowDecalEnable({'enable': True})
    GameControl.ChangePlayingActor({'actor': 0})
    Player.SetOutfit({'kind': 'Princess'})
    Player.SetSwordLv({'lv': 0})
    Player.SetBowLv({'lv': 0})
    Player.SetBombLv({'lv': 0})
    EventFlags.SetFlag({'symbol': 'EvPrologue002', 'value': True})
    EventVariables.SetVariable({'symbol': 'OP_Dungeon:2526625780'})
    GameControl.RequestLevelJump({'level': 'OP_Dungeon', 'locator': 'Ev_OP_Dungeon_004_ZeldaRelease', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void LinkMeetZelda() {
    Audio.StopRegionBgm({'fadeSec': 2.299999952316284})

    fork {
        Player.StopBurning()
    } {
        Player.ResetCarriedActor()
    } {
        GameControl.ResetSensorEventResetContainsActors({'cemeteryRevive': False, 'eventReset': True})
    } {
        GameControl.SetDarknutVisibility({'visible': False})
    }

    Player.ResetActiveAndPesteActors({'child': False, 'cemeteryRevive': False, 'defeatedThrough': False, 'aliveCemeteryRevive': False})
    FlowControl.SetCanSkip({'enable': True})
    EvOPDeleteWall.Activate()

    fork {

        fork {
            Camera.PlayLocationOriginCameraAnimation({'path': 'map/OP_Dungeon_004.bfres', 'location': 'PasteMuFailed_cam', 'name': 'LinkFindGanon01_cam', 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
        } {
            Link.SetVisibility({'visible': False})
        } {
            GanonPasteOP.PlayAnimation({'name': 'ev_OP_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            Link.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="GanonPasteOP"), 'offsetY': 0.0})
        } {
            Link.SetRightHandItem({'item': 1})
        } {
            Link.SetLeftHandItem({'item': 1})
        }

        Link.AimActor({'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="GanonPasteOP"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZeldaImprison.SetFacialExpression({'expression': 'anxiety_cm'})
        Timer.Wait({'time': 3.0})
    } {
        Timer.Wait({'time': 2.5})
        Audio.PlayBGM({'label': 'BGM_OP_GANON_APPEAR', 'ignoreSkip': False, 'volume': 1.0})
    }


    fork {
        GanonPasteOP.AimCompassPoint({'duration': 0.0, 'direction': 2, 'withoutTurn': False, 'immediateTurn': False})
        GanonPasteOP.PlayAnimation({'name': 'ev_OP_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Camera.PlayLocationOriginCameraAnimation({'path': 'map/OP_Dungeon_004.bfres', 'location': 'PasteMuFailed_cam', 'name': 'LinkFindGanon02_cam', 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    }

    Link.SetVisibility({'visible': True})

    fork {
        ZeldaImprison.PlayAnimation({'name': 'ev_crystal_find', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        ZeldaImprison.SetFacialExpression({'expression': 'anxiety_om'})
    }

    Timer.Wait({'time': 1.0})
    GanonPasteOP.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 1.5})
    GanonPasteOP.SetTalkerName({'message': 'glossary/Character:Unknown', 'keep': False})
    GanonPasteOP.PlayAnimationNoWait({'name': 'ev_OP_wait_talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GanonPasteOP.Talk({'message': 'scenario/StoryAreaA:LinkMeetZeld_010', 'getAttention': False})
    GanonPasteOP.PlayAnimation({'name': 'ev_OP_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'chaseRatio': 0.05000000074505806, 'distanceOffset': 4.0, 'duration': 1.0, 'weight2': 2.0, 'actor1': ActorIdentifier(name="GanonPasteOP"), 'actor2': ActorIdentifier(name="Link"), 'weight1': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Camera.LerpDofSettings({'duration': 1.0, 'kind': 4, 'TiltShiftCenterY': 0.5, 'FocalDistance': 0.0, 'FocusRange': 4.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'BlurSizeScale': 0.3499999940395355, 'BlurRatio': 1.0, 'TiltShiftCenterX': 0.5, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftRange': 0.550000011920929, 'TiltShiftGamma': 1.5, 'TiltShiftBlurSizeScale': 0.800000011920929, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofFocalDistance': 0.0, 'TiltShiftDofBackRange': 10.0, 'TiltShiftDofBackCurve': 0.5, 'TiltShiftDofBackBlurFadeWidth': 0.05000000074505806, 'TiltShiftDofBlurRatio': 1.0, 'noWait': True})
    }

    GanonPasteOP.PlayAnimation({'name': 'ev_OP_turn', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GanonPasteOP.AimCompassPoint({'direction': 0, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    GanonPasteOP.PlayAnimationNoWait({'name': 'ev_OP_wait_talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GanonPasteOP.Talk({'message': 'scenario/StoryAreaA:LinkMeetZeld_020', 'getAttention': False})
    GanonPasteOP.Talk({'message': 'scenario/StoryAreaA:LinkMeetZeld_030', 'getAttention': False})
    GanonPasteOP.PlayAnimation({'name': 'ev_OP_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Audio.StopAllBGM({'duration': 2.0})
    EventFlags.SetFlag({'symbol': 'EvPrologue001', 'value': True})
    Audio.StopZoneBgm()

    fork {
        GanonPasteOP.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {
        Link.AimActor({'actor': ActorIdentifier(name="GanonPasteOP"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GanonPasteOP.PlayAnimation({'name': 'ev_OP_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GanonPasteOP.PlayAnimationNoWait({'name': 'ev_OP_wait_talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GanonPasteOP.Talk({'message': 'scenario/StoryAreaA:PasteMuBattle_010', 'getAttention': False})
    GanonPasteOP.PlayAnimation({'name': 'ev_OP_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.10000000149011612})
    ItemLinkHood.SetVisibility({'visible': False})
    ItemLinkHood.Activate()
    ItemLinkHood.WarpToActor({'offsetY': 0.0, 'actor': ActorIdentifier(name="Link"), 'distance': 0.0, 'offsetX': 0.0})
    ItemLinkHood.SetGravityEnable({'enable': False})
    ItemLinkHood.SetCollisionEnabled({'enable': False})

    fork {

        fork {
            Link.PlayAnimation({'name': 'ev_hood_release', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ItemLinkHood.PlayAnimation({'name': 'ev_hood_release', 'layer': 0, 'blendFrame': -1, 'restart': False})
            ItemLinkHood.PlayAnimation({'name': 'ev_hood_release_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 1.5})
            Link.SetLinkHood({'isOn': False})
            ItemLinkHood.SetVisibility({'visible': True})
        } {
            Audio.PlayOneshotSystemSE({'label': 'SE_EV_OP_LINK_HOOD_THROW', 'volume': 1.0, 'pitch': 1.0})
        } {
            Camera.PlayLocationOriginCameraAnimation({'path': 'map/OP_Dungeon_004.bfres', 'location': 'PasteMuFailed_cam', 'name': 'LinkFindGanon03_cam', 'nearClipDistanceCtrl': True, 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
        }

    } {
        GanonPasteOP.SetVisibility({'visible': False})
    }

    GanonPasteOP.SetVisibility({'visible': True})
    EvOPDeleteWall.Deactivate()
    EventFlags.SetFlag({'symbol': 'EvPrologue014', 'value': True})
    EventVariables.SetVariable({'symbol': 'OP_Dungeon:531802941'})
}

void Dead() {

    fork {
        GanonPasteOP.CameraLockoff()
        EventFlags.SetFlag({'value': True, 'symbol': 'EvP_GanonPasteOPDead'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        if !GanonPasteOP.IsDownPose() {
            GanonPasteOP.PlayAnimation({'name': 'ev_dead_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } else {
            GanonPasteOP.PlayAnimation({'name': 'ev_dead_down_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }
    } {
        Timer.Wait({'time': 1.2999999523162842})
        Fade.StartPreset({'preset': 'FadeOutFastB'})
    } {

        call BossCommon.HitStop({'enemy': ActorIdentifier(name="GanonPasteOP")})

    }

    GameControl.UnforbidSave()

    call PasteMuFailed()

}

void _ToSprite() {
    FlowControl.Yield_()
    Partner[companion].StopTailorOtherChannel({'channel': 'GlowKeep', 'index': 0})
    Partner[companion].StopTailorOtherChannel({'channel': 'Triangle_GlowKeep', 'index': 1})
    Partner[companion].StopTailorOtherChannel({'channel': 'Triangle_GlowKeep', 'index': 2})
    Partner[companion].StopTailorOtherChannel({'channel': 'Triangle_GlowKeep', 'index': 3})
    Partner[companion].SetVisibility({'visible': False})
    Partner[companion].PlayTailorOtherChannelNoWait({'channel': 'Ev_SphereLight', 'restart': False, 'index': -1, 'stopOnSkipped': True})
}

void Roar() {

    fork {

        fork {
            GanonPasteOP.LookAtTalker({'duration': 0.5, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 10.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        } {
            GanonPasteOP.PlayAnimation({'name': 'roar', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        GanonPasteOP.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.5})
        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
        GanonPasteOP.CameraLockon({'maxSpeed': 100.0})
    } {

        call EvResetCommon.AngryReset()

    }

}
