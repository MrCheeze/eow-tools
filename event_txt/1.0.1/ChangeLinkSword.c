-------- EventFlow: ChangeLinkSword --------

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: Camera
entrypoint: None()
actions: ['LerpDofSettings']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['ResetSensorEventResetContainsActors']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['PlayAnimationEx', 'MorphTo', 'SetLeftHandItem', 'PlayAnimation', 'AimCompassPoint', 'SetRightHandItem', 'PlayTailorOtherChannelNoWait', 'AimToInitialAngle', 'SetShadowDecalEnable', 'LookAtTalker']
queries: []
params: None

Actor: MorphZelda
entrypoint: None()
actions: []
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'PlayAnimation', 'Deactivate', 'DisableAutoMovement', 'Activate']
queries: []
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['PreloadTimeline', 'InvokeTimeline', 'Yield_']
queries: []
params: None

Actor: TutorialUI
entrypoint: None()
actions: ['ShowModal', 'HideInsert']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['SwitchToSwordsManTrack', 'SwitchToMainTrack', 'PlaySwordManModeJingle', 'PlaySwordsManBGM', 'StopRegionBgm', 'PlayBGM', 'WaitSamplePositionAndStopAndPlaySwordsManBgm', 'PlayZoneBGM']
queries: []
params: None

void ChangeLinkSword() {
    FlowControl.Yield_()
    Audio.StopRegionBgm({'fadeSec': 2.0})
    EventFlags.SetFlag({'symbol': 'TutorialInsert_ChangeLinkSword_Clear', 'value': True})
    FlowControl.Yield_()
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Player.SetShadowDecalEnable({'enable': False})

    call EvResetCommon.AllReset()

    GameControl.ResetSensorEventResetContainsActors({'cemeteryRevive': False, 'eventReset': True})
    TutorialUI.HideInsert()
    FlowControl.PreloadTimeline({'filename': 'ChangeLinkSword'})
    Partner[companion].Deactivate()
    Camera.LerpDofSettings({'kind': 7, 'TiltShiftCenterX': 0.0, 'BlurRatio': 1.0, 'BlurSizeScale': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftGamma': 2.0, 'TiltShiftBlurSizeScale': 1.0, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofBlurRatio': 1.0, 'duration': 0.0, 'TiltShiftDofBackCurve': 0.5, 'TiltShiftRange': 0.20000000298023224, 'FocusRange': 1.0, 'TiltShiftCenterY': 0.7400000095367432, 'TiltShiftDofBackRange': 6.0, 'TiltShiftDofBackBlurFadeWidth': 0.05999999865889549, 'FocalDistance': 25.0, 'TiltShiftDofFocalDistance': 25.0, 'noWait': False})

    fork {

        call Dissolve.Dissolve({'actor': ActorIdentifier(name="Player")})

    } {

        call Dissolve.Dissolve({'actor': ActorIdentifier(name="MorphZelda")})

    }

    FlowControl.InvokeTimeline({'filename': 'ChangeLinkSword', 'rate': 1.0})

    call Dissolve.Undissolve({'actor': ActorIdentifier(name="Player")})

    Timer.Wait({'time': 0.5})
    Audio.PlayBGM({'label': 'BGM_FIELD_SWORD_INTRO', 'volume': 1.0, 'ignoreSkip': True})
    Audio.PlayZoneBGM({'stopbgm': False})

    fork {
        Player.LookAtTalker({'chaseRatio': 1.0, 'duration': 0.0, 'distanceOffset': 8.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {
        Partner[companion].Activate()
    } {
        Player.SetShadowDecalEnable({'enable': True})
    }

    Timer.Wait({'time': 1.0})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:FirstUsePasteLink_010', 'getAttention': False})
    } {
        Partner[companion].PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    TutorialUI.ShowModal({'key': 'ChangeLinkSwordModal'})
    EventFlags.SetFlag({'symbol': 'Ev_ChangeLink', 'value': True})
    EventVariables.SetVariable({'symbol': 'HyruleCastle_LuberiHouse:2094612789'})
    Audio.WaitSamplePositionAndStopAndPlaySwordsManBgm({'stoplabel': 'BGM_FIELD_SWORD_INTRO', 'label': 'BGM_FIELD_SWORD'})
}

void ChangeLinkSwordSimple() {
    Partner[companion].DisableAutoMovement()

    fork {
        Timer.Wait({'time': 0.05000000074505806})
        Player.SetLeftHandItem({'item': 1})
        Player.SetRightHandItem({'item': 0})
    } {
        Player.PlayTailorOtherChannelNoWait({'channel': 'ChangeShort', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Player.PlayAnimation({'name': 'change_sword_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Player.AimCompassPoint({'direction': 0, 'duration': 0.5, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Audio.SwitchToSwordsManTrack()
    } {
        Audio.PlaySwordManModeJingle({'label': 'BGM_JINGLE_SWORD', 'volume': 1.0, 'ignoreSkip': True})
    }

    Player.MorphTo({'kind': 1})
    Player.PlayAnimationEx({'name': 'change_sword_lp', 'time': 0.6499999761581421, 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.PlayAnimationEx({'name': 'change_sword_ed', 'time': 0.03999999910593033, 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.AimToInitialAngle({'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    Audio.PlaySwordsManBGM({'label': 'BGM_FIELD_SWORD'})
    if !EventFlags.CheckFlag({'symbol': 'EvPastePowerMax'}) {
        EventFlags.SetFlag({'symbol': 'EvPastePowerMax', 'value': True})
    }
}

void ChangeLinkSwordEnd() {
    Partner[companion].DisableAutoMovement()
    Event33:
    Timer.Wait({'time': 0.0})
    Player.PlayAnimation({'name': 'change_cancel_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Audio.SwitchToMainTrack()
    Player.MorphTo({'kind': 0})
    Player.PlayAnimation({'name': 'change_cancel_ed', 'layer': 0, 'blendFrame': -1, 'restart': False})
    if !EventFlags.CheckFlag({'symbol': 'FastChangeLink'}) {
        Timer.Wait({'time': 1.0})
        TutorialUI.ShowModal({'key': 'AfterBreakBarricadeModal'})
        EventFlags.SetFlag({'symbol': 'FastChangeLink', 'value': True})
    } else {
        Timer.Wait({'time': 0.0})
    }
}

void ChangeLinkSwordEndImpl() {
    goto Event33
}
