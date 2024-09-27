-------- EventFlow: HyruleWaterway --------

Actor: Zelda
entrypoint: None()
actions: ['PlayAnimation', 'AimCompassPoint', 'DisableIgnoreLiquidVelocityByEvent', 'SetFacialExpression', 'LookAtTalker', 'AimActor']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag', 'SetLevelFlag']
queries: ['CheckFlag']
params: None

Actor: CrackHuge
entrypoint: None()
actions: ['Activate', 'PlayMaterialAnimationNoWait', 'PlayAnimationNoWait']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['PlayAnimationNoWait']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['MoveToTargetLinkedPoint', 'AimActor', 'SetInterestIkEnabled', 'PlayAnimation', 'ResetAim', 'PlayAnimationEx', 'LookAtTalker', 'MoveToTargetActor']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: ['SetRestartPositionToLinkedPoint']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['StopAllBGM', 'PlayBGM', 'PlayOneshotSystemSE', 'StopZoneBaseAmbience']
queries: []
params: None

Actor: BoundarySign
entrypoint: None()
actions: ['StopTailorOtherChannel']
queries: []
params: None

Actor: CrackMoveHyruleWaterway
entrypoint: None()
actions: []
queries: []
params: None

Actor: Area[WaterwaysCrack_event]
entrypoint: None()
actions: ['LookAtGimmicksLinkedPoint', 'Destroy']
queries: []
params: None

Actor: Area[WaterwaysCrack_event_2]
entrypoint: None()
actions: ['Destroy', 'LookAtGimmicksLinkedPoint']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: []
queries: ['CheckProgress']
params: None

Actor: AirWallWaterway
entrypoint: None()
actions: ['Activate']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['PlayAnimation', 'Talk', 'AimActor', 'DisableAutoMovement', 'GenericTalkSequenceWithDialog', 'LookAtTalker', 'MoveToTargetActor', 'AimPlayer']
queries: []
params: None

void Drown() {
    Zelda.DisableIgnoreLiquidVelocityByEvent()

    call EvResetCommon.AllReset()


    fork {
        Zelda.SetFacialExpression({'expression': 'damage'})
        Zelda.LookAtTalker({'keep': True, 'distanceOffset': 6.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Audio.PlayOneshotSystemSE({'label': 'VO_ZELDA_EV_110', 'volume': 1.0, 'pitch': 1.0})
        Zelda.PlayAnimation({'name': 'ev_fall_water_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Zelda.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 4.0})
        Audio.StopAllBGM({'duration': 3.0})
        Audio.StopZoneBaseAmbience()
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
    }

    Timer.Wait({'time': 5.0})
    GameControl.RequestLevelJump({'level': 'S_Dungeon001', 'locator': 'S001_R001_FlowOut', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void ExitIsBlocked() {

    call EvResetCommon.AllReset()

    Area.SetRestartPositionToLinkedPoint({'direction': 0, 'pointIndex': 0, 'stance': 'Ground'})

    fork {
        Player.LookAtTalker({'distanceOffset': 8.0, 'duration': 1.0, 'keep': True, 'chaseRatio': 0.009999999776482582, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Player.MoveToTargetLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="Area"), 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 1.0})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'withoutTurn': True, 'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="CrackMoveHyruleWaterway"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_SAKEME_SIGN', 'volume': 1.0, 'pitch': 1.0})
        Timer.Wait({'time': 1.5})
    }

    Partner[companion].DisableAutoMovement()

    fork {
        BoundarySign.StopTailorOtherChannel({'channel': 'Sign', 'index': -1})
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_SAKEME_START', 'volume': 1.0, 'pitch': 1.0})
        CrackHuge.Activate()
        CrackHuge.PlayMaterialAnimationNoWait({'name': 'appear', 'layer': 0})
        EventFlags.SetFlag({'symbol': 'EvPrologue011', 'value': True})
    } {
        Timer.Wait({'time': 0.699999988079071})
        Player.AimActor({'withoutTurn': False, 'duration': 0.20000000298023224, 'actor': ActorIdentifier(name="CrackMoveHyruleWaterway"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.20000000298023224})
        Player.MoveToTargetActor({'customSpeed': 10.0, 'speed': 1, 'withoutTurn': True, 'actor': ActorIdentifier(name="Player"), 'distance': -1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Player.SetInterestIkEnabled({'enable': True})
    } {
        Timer.Wait({'time': 1.100000023841858})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="CrackMoveHyruleWaterway"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.5})
    }

    Player.ResetAim()
    Partner[companion].MoveToTargetActor({'withoutTurn': True, 'speed': 1, 'offsetX': 0.0, 'offsetY': 0.0, 'actor': ActorIdentifier(name="Partner"), 'distance': -1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0})

    fork {
        Partner[companion].PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Player.PlayAnimationEx({'name': 'search', 'time': 1.899999976158142, 'layer': 0, 'blendFrame': -1, 'restart': False})
        Player.PlayAnimation({'name': 'ev_BossApear_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Partner[companion].LookAtTalker({'offsetX': 0.5, 'offsetZ': 0.5, 'offsetY': 0.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'keep': False})
    }

    Timer.Wait({'time': 2.0})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:ExitIsBlocked_010', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Partner[companion].AimPlayer({'duration': 0.800000011920929, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})

    fork {
        Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:ExitIsBlocked_020', 'playerTalkAnim': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'aimToPlayer': False, 'aimFromPlayer': False, 'selfTalkAnimName': 'talk02', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Timer.Wait({'time': 0.5})

        call GeneralSequence.Look_at_Partner()

        Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner.PlayAnimationNoWait({'name': 'no,talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:ExitIsBlocked_030', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:ExitIsBlocked_040', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void WaterwaysCrack() {

    call EvResetCommon.AllReset()

    if QuestSystem.CheckProgress({'symbol': 'Midpoint:2478168384'}) == 4294967295 {
        if !EventFlags.CheckFlag({'symbol': 'WaterwaysCrack'}) {
            Area[WaterwaysCrack_event_2].Destroy()
            Area[WaterwaysCrack_event].LookAtGimmicksLinkedPoint({'pointIndex': 0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
            EventFlags.SetFlag({'value': True, 'symbol': 'WaterwaysCrack'})
            CrackHuge.PlayMaterialAnimationNoWait({'name': 'MoveCrack_st', 'layer': 0})
            CrackHuge.PlayAnimationNoWait({'name': 'move_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 0.5})
            Audio.PlayBGM({'label': 'BGM_OP_DUGEON_ESCAPE', 'volume': 1.0, 'ignoreSkip': True})
            Timer.Wait({'time': 0.4000000059604645})
            Timer.Wait({'time': 0.4000000059604645})
            Partner[companion].DisableAutoMovement()
            EventFlags.SetLevelFlag({'value': True, 'index': 1})

            fork {
                Partner[companion].AimActor({'actor': ActorIdentifier(name="CrackMoveHyruleWaterway"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Zelda.AimActor({'actor': ActorIdentifier(name="CrackMoveHyruleWaterway"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                Zelda.PlayAnimation({'name': 'ev_surprise_st,ev_surprise_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

            Area[WaterwaysCrack_event].Destroy()
            AirWallWaterway.Activate()
        } else {
            Area[WaterwaysCrack_event_2].Destroy()

            fork {
                CrackHuge.PlayMaterialAnimationNoWait({'name': 'MoveCrack_st', 'layer': 0})
                CrackHuge.PlayAnimationNoWait({'name': 'move_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
                Audio.PlayBGM({'label': 'BGM_OP_DUGEON_ESCAPE', 'volume': 1.0, 'ignoreSkip': True})
                Timer.Wait({'time': 0.4000000059604645})
            } {
                EventFlags.SetLevelFlag({'value': True, 'index': 1})
            }

            Area[WaterwaysCrack_event].Destroy()
            AirWallWaterway.Activate()
        }
    }
}

void WaterwaysCrack_2() {

    call EvResetCommon.AllReset()

    if QuestSystem.CheckProgress({'symbol': 'Midpoint:2478168384'}) == 4294967295 {
        if !EventFlags.CheckFlag({'symbol': 'WaterwaysCrack'}) {
            Area[WaterwaysCrack_event].Destroy()
            Area[WaterwaysCrack_event_2].LookAtGimmicksLinkedPoint({'pointIndex': 0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
            EventFlags.SetFlag({'value': True, 'symbol': 'WaterwaysCrack'})
            CrackHuge.PlayMaterialAnimationNoWait({'name': 'MoveCrack_st', 'layer': 0})
            CrackHuge.PlayAnimationNoWait({'name': 'move_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 0.5})
            Audio.PlayBGM({'label': 'BGM_OP_DUGEON_ESCAPE', 'volume': 1.0, 'ignoreSkip': True})
            Timer.Wait({'time': 0.4000000059604645})
            Timer.Wait({'time': 0.4000000059604645})
            Partner[companion].DisableAutoMovement()
            EventFlags.SetLevelFlag({'value': True, 'index': 1})

            fork {
                Partner[companion].AimActor({'actor': ActorIdentifier(name="CrackMoveHyruleWaterway"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Zelda.AimActor({'actor': ActorIdentifier(name="CrackMoveHyruleWaterway"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                Zelda.PlayAnimation({'name': 'ev_surprise_st,ev_surprise_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

            Area[WaterwaysCrack_event_2].Destroy()
            AirWallWaterway.Activate()
        } else {
            Area[WaterwaysCrack_event].Destroy()

            fork {
                CrackHuge.PlayMaterialAnimationNoWait({'name': 'MoveCrack_st', 'layer': 0})
                CrackHuge.PlayAnimationNoWait({'name': 'move_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
                Audio.PlayBGM({'label': 'BGM_OP_DUGEON_ESCAPE', 'volume': 1.0, 'ignoreSkip': True})
                Timer.Wait({'time': 0.4000000059604645})
            } {
                EventFlags.SetLevelFlag({'value': True, 'index': 1})
            }

            Area[WaterwaysCrack_event_2].Destroy()
            AirWallWaterway.Activate()
        }
    }
}
