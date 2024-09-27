-------- EventFlow: L_Dungeon003 --------

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['UnforbidSave', 'EnableAutoSave', 'ForbidWarp']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartParam']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['StopZoneBgm', 'StopRegionBgm', 'PlayZoneBGM', 'PlayOneshotSystemSE', 'Prepare', 'PlayBGMEx', 'StopAllBGM', 'DisablePlaySeFromTailor', 'EnablePlaySeFromTailor', 'PlayZoneBaseAmbience']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['MoveToTargetActor', 'SetInterestIkEnabled', 'AimActor']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['MoveToTargetActor', 'SetShadowDecalEnable', 'AimActor', 'AimCompassPoint', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'EnableAutoMovement', 'PlayAnimation', 'LookAtTalker', 'MoveToBesideTargetActor', 'AimPlayer', 'AimCompassPoint', 'SetInterestIkEnabled', 'GenericTalkSequenceWithDialog', 'WarpToActorWithCompassPoint', 'AimActor', 'MoveToTargetActor', 'PlayAnimationNoWait']
queries: []
params: None

Actor: EvLink
entrypoint: None()
actions: ['MoveToCompassPoint', 'Deactivate', 'LookAtTalker', 'Activate', 'SetComponentActive', 'PlayAnimationNoWait', 'PlayAnimation', 'ChangeSteeringAnimation', 'WarpToActor']
queries: []
params: None

void IntoDungeonAreaD() {

    call EvResetCommon.AllResetNowait()


    fork {
        EvLink.SetComponentActive({'name': 'PropplayerSword', 'active': False})
        EvLink.SetComponentActive({'name': 'PropplayerShield', 'active': False})
        EvLink.Activate()
        EvLink.Activate()
        EvLink.ChangeSteeringAnimation({'idle': 'wait_barehands', 'walk': 'move_barehands', 'run': 'move_fast_barehands', 'layer': 0})
        EvLink.PlayAnimation({'name': 'wait_barehands', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Fade.StartParam({'time': 0.5, 'mode': 0, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0})
    } {
        Player.MoveToTargetActor({'speed': 0, 'distance': 1.5, 'actor': ActorIdentifier(name="Player"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Audio.StopRegionBgm({'fadeSec': 0.0})
    }


    fork {
        EvLink.LookAtTalker({'keep': True, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Timer.Wait({'time': 0.5})
        EvLink.MoveToCompassPoint({'direction': 2, 'distance': 3.5, 'speed': 1, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Timer.Wait({'time': 0.10000000149011612})

        fork {
            EvLink.PlayAnimationNoWait({'name': 'ev_ladder_levelin_u', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'SE_EV_PD114_FOOT', 'volume': 1.0, 'pitch': 1.0})
        } {
            Audio.DisablePlaySeFromTailor()
        }

        Timer.Wait({'time': 0.5})
        EvLink.Deactivate()
    } {

        fork {
            Partner[companion].MoveToBesideTargetActor({'offsetY': 1.0, 'offsetX': -1.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetZ': -3.5, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        } {
            Audio.PlayOneshotSystemSE({'label': 'SE_PARTNER_MOVE', 'volume': 1.0, 'pitch': 1.0})
        }

    }

    Timer.Wait({'time': 1.0})
    Audio.EnablePlaySeFromTailor()

    fork {
        Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Partner[companion].MoveToBesideTargetActor({'offsetY': 1.0, 'offsetZ': -1.0, 'offsetX': -1.0, 'actor': ActorIdentifier(name="Zelda"), 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].LookAtTalker({'distanceOffset': 2.0, 'offsetZ': 2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'keep': False})
    }

    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.20000000298023224})

    call GeneralSequence.Look_at_Partner()

    Partner[companion].SetInterestIkEnabled({'enable': False})
    Partner[companion].PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.5})
    Partner[companion].SetInterestIkEnabled({'enable': True})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaD:IntoDungeon_AreaD_010', 'getAttention': False})
    } {
        Partner[companion].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Player.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Player.SetInterestIkEnabled({'enable': False})
    } {
        Audio.PlayZoneBGM({'stopbgm': False})
    }

}

void AfterReleasTriTalk() {
    Audio.StopZoneBgm()
    Audio.PlayZoneBaseAmbience()

    call GeneralSequence.LookReturnPartner()

    Audio.Prepare({'label': 'BGM_EV_PARTNER_APPEAR', 'kind': 0, 'volume': 1.0})
    Timer.Wait({'time': 1.0})

    call GeneralSequence.PartnerLvelUp({'Key': 'L003'})


    call GeneralSequence.LD_WorldGlobePieceGet({'Idx': 85, 'Dungeon': 'L003'})

    Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetY': 0.0, 'actor': ActorIdentifier(name="Player"), 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Player.AimActor({'offsetY': -0.6000000238418579, 'duration': 0.4000000059604645, 'withoutTurn': False, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Audio.PlayBGMEx({'label': 'BGM_EV_PARTNER_APPEAR', 'volume': 1.0, 'sec': 0.4000000059604645, 'ignoreSkip': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:AfterReleasPartnerTalk030_010', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:AfterReleasPartnerTalk030_020', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:AfterReleasPartnerTalk030_030', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.5})
    Partner[companion].PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:LetsGoBack_010', 'getAttention': False})
    EventFlags.SetFlag({'symbol': 'EvAreaA013', 'value': True})
    Partner[companion].EnableAutoMovement()
    Player.SetShadowDecalEnable({'enable': True})
    Audio.StopAllBGM({'duration': 2.0})

    fork {
        GameControl.UnforbidSave()
    } {
        GameControl.EnableAutoSave()
    }

    GameControl.ForbidWarp()
    QuestSystem.SetProgress({'symbol': 'Desert:915839205', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void witnesslink() {

    call EvResetCommon.AllReset()


    fork {
        EvLink.SetComponentActive({'name': 'PropplayerSword', 'active': False})
        EvLink.SetComponentActive({'name': 'PropplayerShield', 'active': False})
        EvLink.Activate()
        EvLink.ChangeSteeringAnimation({'idle': 'wait_barehands', 'walk': 'move_b', 'run': 'move_fast_barehands', 'layer': 0})
        EvLink.WarpToActor({'distance': -3.0, 'actor': ActorIdentifier(name="EvLink"), 'offsetY': 0.0, 'offsetX': 0.0})
        Fade.StartParam({'time': 0.5, 'mode': 0, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0})
    } {
        Zelda.MoveToTargetActor({'speed': 0, 'distance': 1.5, 'actor': ActorIdentifier(name="Zelda"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Partner[companion].WarpToActorWithCompassPoint({'offsetY': 1.5, 'direction': 0, 'offsetX': 1.5, 'distance': 0.0, 'actor': ActorIdentifier(name="Zelda")})
    }

    Partner[companion].MoveToTargetActor({'offsetY': 1.5, 'distance': 2.0, 'speed': 0, 'offsetX': 1.5, 'actor': ActorIdentifier(name="Zelda"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].AimActor({'withoutTurn': False, 'offsetY': 0.0, 'actor': ActorIdentifier(name="EvLink"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'keepPersonalSpace': False, 'aimToPlayer': False, 'aimFromPlayer': False, 'message': 'scenario/StoryAreaD:SightingLink_010', 'selfTalkAnim': True, 'selfTalkAnimName': 'talk02', 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Timer.Wait({'time': 0.5})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        EvLink.MoveToCompassPoint({'speed': 1, 'direction': 3, 'distance': 8.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        EvLink.LookAtTalker({'keep': False, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Zelda.AimActor({'withoutTurn': False, 'offsetY': 0.0, 'actor': ActorIdentifier(name="EvLink"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'withoutTurn': False, 'offsetY': 0.0, 'actor': ActorIdentifier(name="EvLink"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    EvLink.Deactivate()
    Timer.Wait({'time': 1.0})
    Partner[companion].LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 0.5})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'offsetY': -0.6000000238418579, 'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].SetInterestIkEnabled({'enable': True})
        Partner[companion].AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'keepPersonalSpace': False, 'message': 'scenario/StoryAreaD:SightingLink_020', 'aimToPlayer': False, 'aimFromPlayer': False, 'cameraLookAt': False, 'selfTalkAnimName': 'talk02', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }

    EventFlags.SetFlag({'value': True, 'symbol': 'witnesslink'})
}
