-------- EventFlow: GatePartnerPhoton --------

Actor: Partner
entrypoint: None()
actions: ['DisableAutoMovement', 'KeepPartnerTalk']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckMessgaeFlag', 'CheckFlag']
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump', 'UnforbidWarp', 'ResetSensorEventResetContainsActors', 'ForbidLaunchApplet', 'UnforbidLaunchApplet']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['PlayAnimation', 'AimCompassPoint', 'SetVisibility', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel', 'LookAtTalker', 'SetGravityEnable', 'WarpToActorWithCompassPoint', 'ResetAim', 'SetInterestIkEnabled', 'MoveToBesideTargetActor']
queries: []
params: None

Actor: GatePartnerPhoton
entrypoint: None()
actions: []
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['ResetVelocity']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['CheckProgress']
params: None

Actor: Dungeon
entrypoint: None()
actions: ['SetCurrentDungeonCleared', 'SetDungeonCleared']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['PlayActorOriginCameraAnimation']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE', 'PlayBGM', 'StopAllBGM', 'DisablePlaySeFromTailor', 'EnablePlaySeFromTailor']
queries: []
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: Mu
entrypoint: None()
actions: ['PlayAnimation', 'Destroy', 'WarpToActorWithCompassPoint', 'PlayAnimationNoWait', 'Activate', 'PlayMaterialAnimationNoWait']
queries: []
params: None

Actor: EvLink
entrypoint: None()
actions: ['PlayAnimation', 'Activate', 'WarpToActorWithCompassPoint', 'SetCullMode', 'SetComponentActive', 'WarpToActor', 'ShowClub', 'HideEquipments']
queries: []
params: None

Actor: ItemHeartContainer
entrypoint: None()
actions: ['SetVisibility']
queries: []
params: None

Actor: FormerDungeonMarker
entrypoint: None()
actions: ['SetCollisionEnabled', 'SetInstanceVariableBool']
queries: []
params: None

Actor: EvDestroyedLDCastleAltar
entrypoint: None()
actions: ['PlayMaterialAnimationNoWait', 'PlayTailorOtherChannelNoWait', 'SetShapeVisibility']
queries: []
params: None

Actor: Vibration
entrypoint: None()
actions: ['PlayVibration']
queries: []
params: None

Actor: EvBackWallGanon
entrypoint: None()
actions: ['SetComponentActive']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'MoveToBesideTargetActor', 'PlayAnimation', 'AimCompassPoint', 'SetVisibility', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel', 'PlayAnimationNoWait', 'WarpToActorWithCompassPoint', 'MoveToCompassPoint']
queries: []
params: None

void L_Dungeon001() {
    Partner.KeepPartnerTalk({'keep': True})
    Partner.DisableAutoMovement()

    call GeneralSequence.Look_at_Partner()

    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_010'}) {

        call _1st()

    } else {
        Partner[companion].GenericTalkSequenceWithDialog({'selfTalkAnimName': 'think', 'playerTalkAnim': False, 'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_035', 'aimFromPlayer': False, 'aimToPlayer': True, 'lookAtOffsetZ': 1.0, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        FormerDungeonMarker.SetInstanceVariableBool({'value': True, 'name': 'isWarpStart'})
        FormerDungeonMarker.SetCollisionEnabled({'enable': False})
        Dungeon.SetCurrentDungeonCleared()

        call _jump_DungeonMarker()

        if !EventFlags.CheckFlag({'symbol': 'EvAreaA014'}) {
            EventVariables.SetVariable({'symbol': 'HyruleCastle_LuberiHouse:2882514372'})
            GameControl.UnforbidWarp()
            GameControl.RequestLevelJump({'level': 'Field', 'locator': 'EV_MinisterTalk', 'offsetX': 0.0, 'offsetZ': 0.0})
        } else {
            GameControl.RequestLevelJump({'level': 'Field', 'locator': 'L_Dungeon001_after', 'offsetX': 0.0, 'offsetZ': 0.0})
        }
    }
}

void FieldBoundary001() {
    Partner.KeepPartnerTalk({'keep': True})
    Partner.DisableAutoMovement()

    call GeneralSequence.Look_at_Partner()

    Partner[companion].GenericTalkSequenceWithDialog({'selfTalkAnimName': 'think', 'playerTalkAnim': False, 'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_035', 'aimFromPlayer': False, 'aimToPlayer': True, 'lookAtOffsetZ': 1.0, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        FormerDungeonMarker.SetInstanceVariableBool({'value': True, 'name': 'isWarpStart'})
        FormerDungeonMarker.SetCollisionEnabled({'enable': False})

        call _jump_DungeonMarker()

        GameControl.RequestLevelJump({'locator': 'F_SouthernVillage001_003', 'level': 'Field', 'offsetX': 0.0, 'offsetZ': 0.0})
    }
}

void Forest() {
    Partner.KeepPartnerTalk({'keep': True})
    Partner.DisableAutoMovement()

    call GeneralSequence.Look_at_Partner()

    Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_030', 'selfTalkAnimName': 'think', 'playerTalkAnim': False, 'aimFromPlayer': False, 'aimToPlayer': True, 'lookAtOffsetZ': 1.0, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        FormerDungeonMarker.SetInstanceVariableBool({'value': True, 'name': 'isWarpStart'})
        FormerDungeonMarker.SetCollisionEnabled({'enable': False})

        call _jump_DungeonMarker()

        GameControl.RequestLevelJump({'level': 'FieldBoundary001', 'locator': 'FB001_Start', 'offsetX': 0.0, 'offsetZ': 0.0})
    }
}

void _jump() {

    call EvResetCommon.AllReset()

    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_040', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.ResetAim()
    Zelda.SetGravityEnable({'enable': False})

    fork {
        Zelda.LookAtTalker({'offsetY': 0.0, 'offsetZ': -2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'keep': False})
    } {
        Partner[companion].MoveToBesideTargetActor({'speed': 0, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 1.75, 'offsetX': 0.0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    }

    Timer.Wait({'time': 0.5})

    fork {
        Zelda.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }


    fork {
        Zelda.PlayAnimation({'name': 'ev_WarpStart_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Zelda.PlayAnimation({'name': 'ev_WarpStart_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayAnimation({'name': 'ev_WarpStart_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].PlayAnimation({'name': 'ev_WarpStart_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.0})
        Partner[companion].PlayTailorOtherChannelNoWait({'channel': 'WarpStart_00', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Timer.Wait({'time': 0.699999988079071})
        Audio.PlayOneshotSystemSE({'label': 'SE_SYS_WARP_START_00', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 0.3330000042915344})
    Zelda.PlayTailorOtherChannelNoWait({'channel': 'WarpStart_00', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    Timer.Wait({'time': 0.8330000042915344})

    fork {
        Timer.Wait({'time': 0.6669999957084656})
        Zelda.StopTailorOtherChannel({'channel': 'WarpStart_00', 'index': -1})
        Partner[companion].StopTailorOtherChannel({'channel': 'WarpStart_00', 'index': -1})
        Zelda.SetVisibility({'visible': False})
        Partner[companion].SetVisibility({'visible': False})
    } {
        Zelda.PlayTailorOtherChannelNoWait({'channel': 'WarpStart_01', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Timer.Wait({'time': 3.8329999446868896})
    } {
        Timer.Wait({'time': 2.0})
        Audio.PlayOneshotSystemSE({'label': 'SE_SYS_WARP_START_01', 'volume': 1.0, 'pitch': 1.0})
    }

    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Zelda.SetVisibility({'visible': True})
    Partner[companion].SetVisibility({'visible': True})
}

void _1st() {
    Partner.DisableAutoMovement()

    call GeneralSequence.Look_at_Partner()

    Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_010', 'playerTalkAnim': False, 'aimFromPlayer': False, 'aimToPlayer': True, 'lookAtOffsetZ': 1.0, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_035', 'getAttention': False})
}

void L_Dungeon002() {
    Partner.KeepPartnerTalk({'keep': True})
    Partner.DisableAutoMovement()

    call GeneralSequence.Look_at_Partner()

    Partner[companion].GenericTalkSequenceWithDialog({'selfTalkAnimName': 'think', 'playerTalkAnim': False, 'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_035', 'aimFromPlayer': False, 'aimToPlayer': True, 'lookAtOffsetZ': 1.0, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        FormerDungeonMarker.SetInstanceVariableBool({'value': True, 'name': 'isWarpStart'})
        FormerDungeonMarker.SetCollisionEnabled({'enable': False})
        Dungeon.SetCurrentDungeonCleared()

        call _jump_DungeonMarker()

        if !EventFlags.CheckFlag({'symbol': 'EvB_ReconciliationConcert'}) {
            GameControl.UnforbidWarp()
            GameControl.RequestLevelJump({'level': 'S_Dungeon006', 'locator': 'Ev_WorldRepairRiver_2', 'offsetX': 0.0, 'offsetZ': 0.0})
        } else {
            GameControl.RequestLevelJump({'level': 'S_Dungeon006', 'locator': 'GatePartnerPhotonOut', 'offsetX': 0.0, 'offsetZ': 0.0})
        }
    }
}

void L_Dungeon003_001() {
    Partner.KeepPartnerTalk({'keep': True})
    Partner.DisableAutoMovement()

    call GeneralSequence.Look_at_Partner()

    Partner[companion].GenericTalkSequenceWithDialog({'selfTalkAnimName': 'think', 'playerTalkAnim': False, 'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_035', 'aimFromPlayer': False, 'aimToPlayer': True, 'lookAtOffsetZ': 1.0, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        FormerDungeonMarker.SetInstanceVariableBool({'value': True, 'name': 'isWarpStart'})
        FormerDungeonMarker.SetCollisionEnabled({'enable': False})

        call _jump_DungeonMarker()

        GameControl.RequestLevelJump({'level': 'Desert_LDungeonEntrance', 'locator': 'LDungeonEntrance_002_2', 'offsetX': 0.0, 'offsetZ': 0.0})
    }
}

void L_Dungeon003() {
    Partner.KeepPartnerTalk({'keep': True})
    Partner.DisableAutoMovement()

    call GeneralSequence.Look_at_Partner()

    Partner[companion].GenericTalkSequenceWithDialog({'selfTalkAnimName': 'think', 'playerTalkAnim': False, 'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_035', 'aimFromPlayer': False, 'aimToPlayer': True, 'lookAtOffsetZ': 1.0, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        FormerDungeonMarker.SetInstanceVariableBool({'value': True, 'name': 'isWarpStart'})
        FormerDungeonMarker.SetCollisionEnabled({'enable': False})
        Dungeon.SetCurrentDungeonCleared()

        call _jump_DungeonMarker()

        if !EventFlags.CheckFlag({'symbol': 'EvD_WorldGlobeActivate'}) {
            EventVariables.SetVariable({'symbol': 'Desert:745066307'})
            GameControl.UnforbidWarp()
            GameControl.RequestLevelJump({'locator': 'DaughtersDelight', 'level': 'Field', 'offsetX': 0.0, 'offsetZ': 0.0})
        } else {
            GameControl.RequestLevelJump({'level': 'Desert_LDungeonEntrance', 'locator': 'LDungeonEntrance_002_2', 'offsetX': 0.0, 'offsetZ': 0.0})
        }
    }
}

void FieldBoundary004() {
    Player.ResetVelocity()
    Partner.KeepPartnerTalk({'keep': True})
    Partner.DisableAutoMovement()

    call GeneralSequence.Look_at_Partner()

    Partner[companion].GenericTalkSequenceWithDialog({'selfTalkAnimName': 'think', 'playerTalkAnim': False, 'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_035', 'aimFromPlayer': False, 'aimToPlayer': True, 'lookAtOffsetZ': 1.0, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        FormerDungeonMarker.SetInstanceVariableBool({'value': True, 'name': 'isWarpStart'})
        FormerDungeonMarker.SetCollisionEnabled({'enable': False})
        Dungeon.SetDungeonCleared({'dungeon': 'L_Dungeon004'})

        call _jump_DungeonMarker()

        if !EventFlags.CheckFlag({'symbol': 'volcano_WedgeActive'}) {
            GameControl.UnforbidWarp()
            GameControl.RequestLevelJump({'level': 'S_Dungeon018', 'locator': 'RecognizedGoronChief', 'offsetX': 0.0, 'offsetZ': 0.0})
        } else {
            GameControl.RequestLevelJump({'locator': 'S018_R002_GatePartnerOut', 'level': 'S_Dungeon018', 'offsetX': 0.0, 'offsetZ': 0.0})
        }
    }
}

void L_DungeonCastle() {
    Partner.KeepPartnerTalk({'keep': True})
    Partner.DisableAutoMovement()

    call GeneralSequence.Look_at_Partner()

    Partner[companion].GenericTalkSequenceWithDialog({'selfTalkAnimName': 'think', 'playerTalkAnim': False, 'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_035', 'aimFromPlayer': False, 'aimToPlayer': True, 'lookAtOffsetZ': 1.0, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        FormerDungeonMarker.SetInstanceVariableBool({'value': True, 'name': 'isWarpStart'})
        FormerDungeonMarker.SetCollisionEnabled({'enable': False})
        if !EventFlags.CheckFlag({'symbol': 'EvE_WorldGlobeActivate'}) {
            Dungeon.SetCurrentDungeonCleared()
            GameControl.UnforbidWarp()

            call WorldGlobeActivate_HyruleCastle()

        } else {

            call _jump_DungeonMarker()

            GameControl.RequestLevelJump({'level': 'S_Dungeon042', 'locator': 'S042_R001_GatePartnerPhoton', 'offsetX': 0.0, 'offsetZ': 0.0})
        }
    }
}

void L_Dungeon005() {
    Partner.KeepPartnerTalk({'keep': True})
    Partner.DisableAutoMovement()

    call GeneralSequence.Look_at_Partner()

    Partner[companion].GenericTalkSequenceWithDialog({'selfTalkAnimName': 'think', 'playerTalkAnim': False, 'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_035', 'aimFromPlayer': False, 'aimToPlayer': True, 'lookAtOffsetZ': 1.0, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        FormerDungeonMarker.SetInstanceVariableBool({'value': True, 'name': 'isWarpStart'})
        FormerDungeonMarker.SetCollisionEnabled({'enable': False})
        Dungeon.SetCurrentDungeonCleared()

        call _jump_DungeonMarker()

        if !EventFlags.CheckFlag({'symbol': 'EvF_DekuNextTrend'}) {
            EventVariables.SetVariable({'symbol': 'Jungle:131701000'})
            GameControl.UnforbidWarp()
            GameControl.RequestLevelJump({'level': 'S_Dungeon034', 'locator': 'EV_DekuNextTrend', 'offsetX': 0.0, 'offsetZ': 0.0})
        } else {
            GameControl.RequestLevelJump({'level': 'S_Dungeon034', 'locator': 'S034_R001_GatePartnerOut', 'offsetX': 0.0, 'offsetZ': 0.0})
        }
    }
}

void L_Dungeon006() {
    Partner.KeepPartnerTalk({'keep': True})
    Partner.DisableAutoMovement()

    call GeneralSequence.Look_at_Partner()

    Partner[companion].GenericTalkSequenceWithDialog({'selfTalkAnimName': 'think', 'playerTalkAnim': False, 'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_035', 'aimFromPlayer': False, 'aimToPlayer': True, 'lookAtOffsetZ': 1.0, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        FormerDungeonMarker.SetInstanceVariableBool({'value': True, 'name': 'isWarpStart'})
        FormerDungeonMarker.SetCollisionEnabled({'enable': False})
        Dungeon.SetCurrentDungeonCleared()

        call _jump_DungeonMarker()

        switch QuestSystem.CheckProgress({'symbol': 'Snowmountain:776505974'}) {
          case 4294967295:
            EventVariables.SetVariable({'symbol': 'SnowyMountains:472473448'})
            GameControl.UnforbidWarp()
            GameControl.RequestLevelJump({'level': 'Field', 'locator': 'MeetAgainConde', 'offsetX': 0.0, 'offsetZ': 0.0})
            QuestSystem.SetProgress({'symbol': 'Snowmountain:4080146613', 'isShowTelopInEvent': False, 'isFrontFade': False})
            EventFlags.SetFlag({'value': True, 'symbol': 'EvG_WorldGlobeActivate'})
          case [0, 1]:
            GameControl.RequestLevelJump({'level': 'Field', 'locator': 'Field_SnowyMountain_GatePartnerPhoton', 'offsetX': 0.0, 'offsetZ': 0.0})
        }
    }
}

void Desert_LDungeonEntrance() {
    Partner.KeepPartnerTalk({'keep': True})
    Partner.DisableAutoMovement()

    call GeneralSequence.Look_at_Partner()

    Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_030', 'selfTalkAnimName': 'think', 'playerTalkAnim': False, 'aimFromPlayer': False, 'aimToPlayer': True, 'lookAtOffsetZ': 1.0, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        FormerDungeonMarker.SetInstanceVariableBool({'value': True, 'name': 'isWarpStart'})
        FormerDungeonMarker.SetCollisionEnabled({'enable': False})

        call _jump_DungeonMarker()

        GameControl.RequestLevelJump({'level': 'L_Dungeon003', 'locator': 'L003_R001_Warp', 'offsetX': 0.0, 'offsetZ': 0.0})
    }
}

void S_Dungeon042() {
    Partner.KeepPartnerTalk({'keep': True})
    Partner.DisableAutoMovement()

    call GeneralSequence.Look_at_Partner()

    Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_030', 'selfTalkAnimName': 'think', 'playerTalkAnim': False, 'aimFromPlayer': False, 'aimToPlayer': True, 'lookAtOffsetZ': 1.0, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        FormerDungeonMarker.SetInstanceVariableBool({'value': True, 'name': 'isWarpStart'})
        FormerDungeonMarker.SetCollisionEnabled({'enable': False})

        call _jump_DungeonMarker()

        GameControl.RequestLevelJump({'level': 'BS_Dungeon005', 'locator': 'BS005_R001_GatePartnerPhoton', 'offsetX': 0.0, 'offsetZ': 0.0})
    }
}

void BS_Dungeon005() {
    Partner.KeepPartnerTalk({'keep': True})
    Partner.DisableAutoMovement()

    call GeneralSequence.Look_at_Partner()

    Partner[companion].GenericTalkSequenceWithDialog({'selfTalkAnimName': 'think', 'playerTalkAnim': False, 'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_035', 'aimFromPlayer': False, 'aimToPlayer': True, 'lookAtOffsetZ': 1.0, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        FormerDungeonMarker.SetInstanceVariableBool({'value': True, 'name': 'isWarpStart'})
        FormerDungeonMarker.SetCollisionEnabled({'enable': False})

        call _jump_DungeonMarker()

        GameControl.RequestLevelJump({'level': 'S_Dungeon042', 'locator': 'S042_R001_GatePartnerPhoton', 'offsetX': 0.0, 'offsetZ': 0.0})
    }
}

void Field_HebraMountains() {
    Partner.KeepPartnerTalk({'keep': True})
    Partner.DisableAutoMovement()

    call GeneralSequence.Look_at_Partner()

    Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_030', 'selfTalkAnimName': 'think', 'playerTalkAnim': False, 'aimFromPlayer': False, 'aimToPlayer': True, 'lookAtOffsetZ': 1.0, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        FormerDungeonMarker.SetInstanceVariableBool({'value': True, 'name': 'isWarpStart'})
        FormerDungeonMarker.SetCollisionEnabled({'enable': False})

        call _jump_DungeonMarker()

        GameControl.RequestLevelJump({'level': 'FieldBoundary006_001', 'locator': 'FB006_001_GatePartnerPhoton', 'offsetX': 0.0, 'offsetZ': 0.0})
    }
}

void FieldBoundary006() {
    Partner.KeepPartnerTalk({'keep': True})
    Partner.DisableAutoMovement()

    call GeneralSequence.Look_at_Partner()

    Partner[companion].GenericTalkSequenceWithDialog({'selfTalkAnimName': 'think', 'playerTalkAnim': False, 'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_035', 'aimFromPlayer': False, 'aimToPlayer': True, 'lookAtOffsetZ': 1.0, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        FormerDungeonMarker.SetInstanceVariableBool({'value': True, 'name': 'isWarpStart'})
        FormerDungeonMarker.SetCollisionEnabled({'enable': False})

        call _jump_DungeonMarker()

        GameControl.RequestLevelJump({'level': 'Field', 'locator': 'Field_SnowyMountain_GatePartnerPhoton', 'offsetX': 0.0, 'offsetZ': 0.0})
    }
}

void S_Dungeon006() {
    Partner.KeepPartnerTalk({'keep': True})
    Partner.DisableAutoMovement()

    call GeneralSequence.Look_at_Partner()

    Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_030', 'selfTalkAnimName': 'think', 'playerTalkAnim': False, 'aimFromPlayer': False, 'aimToPlayer': True, 'lookAtOffsetZ': 1.0, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        FormerDungeonMarker.SetInstanceVariableBool({'value': True, 'name': 'isWarpStart'})
        FormerDungeonMarker.SetCollisionEnabled({'enable': False})

        call _jump_DungeonMarker()

        GameControl.RequestLevelJump({'level': 'FieldBoundary002', 'locator': 'GatePartnerPhotonIn', 'offsetX': 0.0, 'offsetZ': 0.0})
    }
}

void FieldBoundary002() {
    Partner.KeepPartnerTalk({'keep': True})
    Partner.DisableAutoMovement()

    call GeneralSequence.Look_at_Partner()

    Partner[companion].GenericTalkSequenceWithDialog({'selfTalkAnimName': 'think', 'playerTalkAnim': False, 'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_035', 'aimFromPlayer': False, 'aimToPlayer': True, 'lookAtOffsetZ': 1.0, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        FormerDungeonMarker.SetInstanceVariableBool({'value': True, 'name': 'isWarpStart'})
        FormerDungeonMarker.SetCollisionEnabled({'enable': False})

        call _jump_DungeonMarker()

        GameControl.RequestLevelJump({'level': 'S_Dungeon006', 'locator': 'GatePartnerPhotonOut', 'offsetX': 0.0, 'offsetZ': 0.0})
    }
}

void S_Dungeon034() {
    Partner.KeepPartnerTalk({'keep': True})
    Partner.DisableAutoMovement()

    call GeneralSequence.Look_at_Partner()

    Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_030', 'selfTalkAnimName': 'think', 'playerTalkAnim': False, 'aimFromPlayer': False, 'aimToPlayer': True, 'lookAtOffsetZ': 1.0, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        FormerDungeonMarker.SetInstanceVariableBool({'value': True, 'name': 'isWarpStart'})
        FormerDungeonMarker.SetCollisionEnabled({'enable': False})

        call _jump_DungeonMarker()

        GameControl.RequestLevelJump({'level': 'FieldBoundary005', 'locator': 'FB005_002_GatePartnerIn', 'offsetX': 0.0, 'offsetZ': 0.0})
    }
}

void FieldBoundary005() {
    Partner.KeepPartnerTalk({'keep': True})
    Partner.DisableAutoMovement()

    call GeneralSequence.Look_at_Partner()

    Partner[companion].GenericTalkSequenceWithDialog({'selfTalkAnimName': 'think', 'playerTalkAnim': False, 'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_035', 'aimFromPlayer': False, 'aimToPlayer': True, 'lookAtOffsetZ': 1.0, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        FormerDungeonMarker.SetInstanceVariableBool({'value': True, 'name': 'isWarpStart'})
        FormerDungeonMarker.SetCollisionEnabled({'enable': False})

        call _jump_DungeonMarker()

        GameControl.RequestLevelJump({'level': 'S_Dungeon034', 'locator': 'S034_R001_GatePartnerOut', 'offsetX': 0.0, 'offsetZ': 0.0})
    }
}

void S_Dungeon018() {
    Partner.KeepPartnerTalk({'keep': True})
    Partner.DisableAutoMovement()

    call GeneralSequence.Look_at_Partner()

    Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_030', 'selfTalkAnimName': 'think', 'playerTalkAnim': False, 'aimFromPlayer': False, 'aimToPlayer': True, 'lookAtOffsetZ': 1.0, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        FormerDungeonMarker.SetInstanceVariableBool({'value': True, 'name': 'isWarpStart'})
        FormerDungeonMarker.SetCollisionEnabled({'enable': False})

        call _jump_DungeonMarker()

        GameControl.RequestLevelJump({'level': 'FieldBoundary004', 'locator': 'FB004_001_GatePartnerIn', 'offsetX': 0.0, 'offsetZ': 0.0})
    }
}

void FieldBoundary004_001() {
    Partner.KeepPartnerTalk({'keep': True})
    Partner.DisableAutoMovement()

    call GeneralSequence.Look_at_Partner()

    Partner[companion].GenericTalkSequenceWithDialog({'selfTalkAnimName': 'think', 'playerTalkAnim': False, 'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_035', 'aimFromPlayer': False, 'aimToPlayer': True, 'lookAtOffsetZ': 1.0, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        FormerDungeonMarker.SetInstanceVariableBool({'value': True, 'name': 'isWarpStart'})
        FormerDungeonMarker.SetCollisionEnabled({'enable': False})

        call _jump_DungeonMarker()

        GameControl.RequestLevelJump({'locator': 'S018_R002_GatePartnerOut', 'level': 'S_Dungeon018', 'offsetX': 0.0, 'offsetZ': 0.0})
    }
}

void WorldGlobeActivate_HyruleCastle() {

    call EvResetCommon.AllReset()

    GameControl.ResetSensorEventResetContainsActors({'cemeteryRevive': False, 'eventReset': True})
    GameControl.ForbidLaunchApplet()
    Audio.StopAllBGM({'duration': 2.0})
    EvLink.Activate()
    EvLink.SetCullMode({'cullMode': 0, 'enabled': True})

    fork {
        Zelda.SetInterestIkEnabled({'enable': False})
    } {
        EvLink.SetComponentActive({'active': False, 'name': 'PropplayerShield'})
    } {
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Audio.DisablePlaySeFromTailor()
    Timer.Wait({'time': 0.20000000298023224})

    fork {

        fork {
            Camera.PlayActorOriginCameraAnimation({'path': 'actor/EvLastBossMu_1st_form.bfres', 'offsetZ': 0.0, 'chaseRatio': 1.0, 'ignoreRotation': False, 'target': ActorIdentifier(name="GatePartnerPhoton"), 'name': 'AttackOfMistyVilain01_cam', 'offsetX': 0.0, 'offsetY': 0.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'SE_EV_RD030_NULL_APPEAR_00', 'volume': 1.0, 'pitch': 1.0})
        }


        fork {
            Timer.Wait({'time': 1.149999976158142})
            EvDestroyedLDCastleAltar.PlayMaterialAnimationNoWait({'name': 'EvDestroyedLDCastleAltar_crack00', 'layer': 0})
            EvDestroyedLDCastleAltar.PlayTailorOtherChannelNoWait({'channel': 'Crack00', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        } {
            Timer.Wait({'time': 2.0999999046325684})
            EvDestroyedLDCastleAltar.PlayMaterialAnimationNoWait({'name': 'EvDestroyedLDCastleAltar_crack01', 'layer': 0})
            EvDestroyedLDCastleAltar.PlayTailorOtherChannelNoWait({'channel': 'Crack01', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        } {
            Timer.Wait({'time': 5.683000087738037})
            Vibration.PlayVibration({'label': '10_B11_Boom4', 'pan': 0.5, 'ratio': 1.0})
            EvDestroyedLDCastleAltar.SetShapeVisibility({'visible': False, 'shapeName': 'altar__MI_L_DungeonCastle_parts_021_ev'})
            EvDestroyedLDCastleAltar.SetShapeVisibility({'visible': False, 'shapeName': 'altar__MI_L_DungeonCastle_parts_022'})
            EvDestroyedLDCastleAltar.SetShapeVisibility({'visible': False, 'shapeName': 'altar__MI_L_DungeonCastle_parts_023_ev1'})
            EvDestroyedLDCastleAltar.SetShapeVisibility({'visible': True, 'shapeName': 'destroyedaltar__MI_L_DungeonCastle_parts_015'})
            EvDestroyedLDCastleAltar.SetShapeVisibility({'visible': True, 'shapeName': 'destroyedaltar__MI_L_DungeonCastle_parts_021'})
            EvDestroyedLDCastleAltar.SetShapeVisibility({'visible': True, 'shapeName': 'destroyedaltar__MI_L_DungeonCastle_parts_022'})
            EvDestroyedLDCastleAltar.SetShapeVisibility({'visible': True, 'shapeName': 'destroyedaltar__MI_L_DungeonCastle_parts_023'})
            EvDestroyedLDCastleAltar.PlayTailorOtherChannelNoWait({'channel': 'ac_Break', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            Audio.PlayBGM({'label': 'BGM_EV_ATTACKOFMU', 'ignoreSkip': False, 'volume': 1.0})
            Timer.Wait({'time': 1.0})
            Vibration.PlayVibration({'label': '9_B10_Boom3', 'pan': 0.5, 'ratio': 1.0})
        } {
            Camera.PlayActorOriginCameraAnimation({'path': 'actor/EvLastBossMu_1st_form.bfres', 'offsetZ': 0.0, 'chaseRatio': 1.0, 'name': 'AttackOfMistyVilain02_cam', 'ignoreRotation': False, 'target': ActorIdentifier(name="GatePartnerPhoton"), 'offsetX': 0.0, 'offsetY': 0.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
        } {
            Timer.Wait({'time': 0.9166666865348816})
            Audio.PlayOneshotSystemSE({'label': 'SE_EV_RD030_NULL_APPEAR_01', 'volume': 1.0, 'pitch': 1.0})
        } {
            Timer.Wait({'time': 5.699999809265137})
            Audio.PlayOneshotSystemSE({'label': 'SE_EV_RD030_NULL_APPEAR_02', 'volume': 1.0, 'pitch': 1.0})
        }

    } {

        fork {
            Zelda.WarpToActorWithCompassPoint({'offsetY': 0.0, 'direction': 2, 'distance': 0.0, 'actor': ActorIdentifier(name="GatePartnerPhoton"), 'offsetX': 0.0})
        } {
            Partner[companion].WarpToActorWithCompassPoint({'offsetY': 1.75, 'direction': 2, 'offsetX': -1.0, 'distance': 0.0, 'actor': ActorIdentifier(name="GatePartnerPhoton")})
        }


        fork {
            Partner[companion].MoveToBesideTargetActor({'speed': 0, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 1.75, 'offsetX': 0.0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        } {

            call EvResetCommon.AllReset()

        }

        Timer.Wait({'time': 0.20000000298023224})

        fork {
            Zelda.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        } {
            Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        }

        Timer.Wait({'time': 0.5})

        fork {
            Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner[companion].PlayAnimation({'name': 'ev_WarpStart_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Partner[companion].PlayAnimation({'name': 'ev_WarpStart_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 1.0})
            Partner[companion].PlayTailorOtherChannelNoWait({'channel': 'WarpStart_00', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            Timer.Wait({'time': 0.3330000042915344})
            Zelda.PlayTailorOtherChannelNoWait({'channel': 'WarpStart_00', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        }

        Timer.Wait({'time': 2.0})

        fork {
            Zelda.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        } {
            Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        }

        Timer.Wait({'time': 2.0})
        Timer.Wait({'time': 3.5})
        EvLink.WarpToActorWithCompassPoint({'direction': 2, 'distance': 2.0, 'actor': ActorIdentifier(name="GatePartnerPhoton"), 'offsetY': 0.0, 'offsetX': 0.0})
        EvLink.SetCullMode({'enabled': True, 'cullMode': 0})
        EvLink.ShowClub()
    } {
        Timer.Wait({'time': 3.5})
        Timer.Wait({'time': 5.5})
        Mu.WarpToActorWithCompassPoint({'offsetY': 0.0, 'direction': 2, 'actor': ActorIdentifier(name="GatePartnerPhoton"), 'distance': 0.0, 'offsetX': 0.0})
        Mu.PlayAnimationNoWait({'name': 'ev_AttackOfMistyVilain_c2', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Mu.PlayMaterialAnimationNoWait({'name': 'hide_leg', 'layer': 0})
        Mu.Activate()
    }


    fork {
        Camera.PlayActorOriginCameraAnimation({'path': 'actor/EvLastBossMu_1st_form.bfres', 'offsetZ': 0.0, 'name': 'AttackOfMistyVilain03_cam', 'ignoreRotation': False, 'target': ActorIdentifier(name="GatePartnerPhoton"), 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        EvLink.PlayAnimation({'name': 'ev_AttackOfMistyVilain_c3', 'blendFrame': 0, 'layer': 0, 'restart': False})
    } {
        Mu.WarpToActorWithCompassPoint({'offsetY': 0.0, 'direction': 2, 'actor': ActorIdentifier(name="GatePartnerPhoton"), 'distance': 15.0, 'offsetX': 0.0})
    } {
        EvBackWallGanon.SetComponentActive({'name': 'skeletalModelComp', 'active': True})
    }


    fork {
        Camera.PlayActorOriginCameraAnimation({'path': 'actor/EvLastBossMu_1st_form.bfres', 'offsetZ': 0.0, 'name': 'AttackOfMistyVilain04_cam', 'ignoreRotation': False, 'target': ActorIdentifier(name="GatePartnerPhoton"), 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        EvLink.WarpToActor({'actor': ActorIdentifier(name="EvLink"), 'distance': -2.0, 'offsetY': 0.0, 'offsetX': 0.0})

        fork {
            EvLink.PlayAnimation({'name': 'ev_AttackOfMistyVilain_c4', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 1.100000023841858})
            EvLink.HideEquipments()
        }

    } {
        Mu.PlayAnimation({'name': 'ev_AttackOfMistyVilain_c4', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Mu.WarpToActorWithCompassPoint({'offsetY': 0.0, 'direction': 2, 'actor': ActorIdentifier(name="GatePartnerPhoton"), 'distance': 0.0, 'offsetX': 0.0})
    }


    fork {
        Camera.PlayActorOriginCameraAnimation({'path': 'actor/EvLastBossMu_1st_form.bfres', 'offsetZ': 0.0, 'name': 'AttackOfMistyVilain05_cam', 'ignoreRotation': False, 'target': ActorIdentifier(name="GatePartnerPhoton"), 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Timer.Wait({'time': 1.0})
        Zelda.PlayAnimation({'name': 'ev_AttackOfMistyVilain_c5', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EvLink.WarpToActor({'distance': 0.0, 'actor': ActorIdentifier(name="EvLink"), 'offsetY': 0.0, 'offsetX': 0.0})
        EvLink.PlayAnimation({'name': 'ev_AttackOfMistyVilain_c5', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Mu.PlayAnimation({'name': 'ev_AttackOfMistyVilain_c5', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.0})
        Partner[companion].PlayAnimation({'name': 'ev_AttackOfMistyVilain_c5', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 2.9000000953674316})
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_RD030_NULL_APPEAR_03', 'volume': 1.0, 'pitch': 1.0})
    }

    Mu.Destroy()

    fork {
        Camera.PlayActorOriginCameraAnimation({'path': 'actor/EvLastBossMu_1st_form.bfres', 'offsetZ': 0.0, 'name': 'AttackOfMistyVilain06_cam', 'ignoreRotation': False, 'target': ActorIdentifier(name="GatePartnerPhoton"), 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Zelda.PlayAnimation({'name': 'ev_AttackOfMistyVilain_c6', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayAnimation({'name': 'ev_AttackOfMistyVilain_c6', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Camera.PlayActorOriginCameraAnimation({'path': 'actor/EvLastBossMu_1st_form.bfres', 'offsetZ': 0.0, 'name': 'AttackOfMistyVilain07_cam', 'ignoreRotation': False, 'target': ActorIdentifier(name="GatePartnerPhoton"), 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Zelda.PlayAnimation({'name': 'ev_AttackOfMistyVilain_c7', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EvLink.PlayAnimation({'name': 'ev_AttackOfMistyVilain_c7', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayAnimation({'name': 'ev_AttackOfMistyVilain_c7', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.0})
    }

    Zelda.SetGravityEnable({'enable': False})

    fork {
        Camera.PlayActorOriginCameraAnimation({'path': 'actor/EvLastBossMu_1st_form.bfres', 'offsetZ': 0.0, 'name': 'AttackOfMistyVilain08_cam', 'ignoreRotation': False, 'target': ActorIdentifier(name="GatePartnerPhoton"), 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        EvLink.PlayAnimation({'name': 'ev_AttackOfMistyVilain_c8', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_SYS_WARP_START_00', 'volume': 1.0, 'pitch': 1.0})
        Timer.Wait({'time': 0.3330000042915344})
        Zelda.PlayTailorOtherChannelNoWait({'channel': 'WarpStart_00', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Timer.Wait({'time': 0.8330000042915344})

        fork {
            Timer.Wait({'time': 0.6669999957084656})
            Zelda.StopTailorOtherChannel({'channel': 'WarpStart_00', 'index': -1})
            Partner[companion].StopTailorOtherChannel({'channel': 'WarpStart_00', 'index': -1})
            Zelda.SetVisibility({'visible': False})
            Partner[companion].SetVisibility({'visible': False})
        } {
            Zelda.PlayTailorOtherChannelNoWait({'channel': 'ev_AttackOfMistyVilain_WarpStart_01', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            Timer.Wait({'time': 3.8329999446868896})
        } {
            Audio.PlayOneshotSystemSE({'label': 'SE_SYS_WARP_START_01', 'volume': 1.0, 'pitch': 1.0})
        }

        Timer.Wait({'time': 2.0})
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
        Zelda.SetVisibility({'visible': True})
        Partner[companion].SetVisibility({'visible': True})
        EvLink.SetCullMode({'enabled': True, 'cullMode': 1})
    } {
        Zelda.PlayAnimation({'name': 'ev_AttackOfMistyVilain_c8', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayAnimation({'name': 'ev_AttackOfMistyVilain_c8', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Audio.EnablePlaySeFromTailor()
    EventFlags.SetFlag({'value': True, 'symbol': 'EvE_WorldGlobeActivate'})
    QuestSystem.SetProgress({'symbol': 'Midpoint:2082813777', 'isShowTelopInEvent': False, 'isFrontFade': False})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    GameControl.UnforbidLaunchApplet()
    GameControl.RequestLevelJump({'level': 'HyruleCastle', 'locator': 'HyruleCastle_002', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void _jump_DungeonMarker() {

    call EvResetCommon.AllReset()

    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_040', 'getAttention': False})
    Audio.StopAllBGM({'duration': 2.5})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.ResetAim()

    fork {
        Partner[companion].MoveToCompassPoint({'direction': 5, 'speed': 1, 'distance': 0.6000000238418579, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Zelda.MoveToBesideTargetActor({'speed': 0, 'actor': ActorIdentifier(name="FormerDungeonMarker"), 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})

        fork {
            Zelda.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
            Zelda.LookAtTalker({'offsetY': 0.0, 'offsetZ': -2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'keep': False})
        } {
            Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetY': 1.75, 'withoutTurn': True, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': 0.0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0})
        }

    }


    fork {
        Zelda.PlayAnimation({'name': 'ev_WarpStart_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Zelda.PlayAnimation({'name': 'ev_WarpStart_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayAnimation({'name': 'ev_WarpStart_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].PlayAnimation({'name': 'ev_WarpStart_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.0})
        Partner[companion].PlayTailorOtherChannelNoWait({'channel': 'WarpStart_00', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Timer.Wait({'time': 0.699999988079071})
        Audio.PlayOneshotSystemSE({'label': 'SE_SYS_WARP_START_00', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 0.3330000042915344})
    Zelda.PlayTailorOtherChannelNoWait({'channel': 'WarpStart_00', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    Timer.Wait({'time': 0.8330000042915344})

    fork {
        Timer.Wait({'time': 0.6669999957084656})
        Zelda.StopTailorOtherChannel({'channel': 'WarpStart_00', 'index': -1})
        Partner[companion].StopTailorOtherChannel({'channel': 'WarpStart_00', 'index': -1})
        Zelda.SetVisibility({'visible': False})
        Partner[companion].SetVisibility({'visible': False})
    } {
        Zelda.PlayTailorOtherChannelNoWait({'channel': 'WarpStart_01', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Timer.Wait({'time': 3.8329999446868896})
    } {
        Timer.Wait({'time': 2.0})
        Audio.PlayOneshotSystemSE({'label': 'SE_SYS_WARP_START_01', 'volume': 1.0, 'pitch': 1.0})
    }

    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Zelda.SetVisibility({'visible': True})
    Partner[companion].SetVisibility({'visible': True})
}

void L_DungeonCastle_HeartContainerExist() {
    Partner.KeepPartnerTalk({'keep': True})
    Partner.DisableAutoMovement()

    call GeneralSequence.Look_at_Partner()

    Partner[companion].GenericTalkSequenceWithDialog({'selfTalkAnimName': 'think', 'playerTalkAnim': False, 'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_035', 'aimFromPlayer': False, 'aimToPlayer': True, 'lookAtOffsetZ': 1.0, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        FormerDungeonMarker.SetInstanceVariableBool({'value': True, 'name': 'isWarpStart'})
        FormerDungeonMarker.SetCollisionEnabled({'enable': False})
        if !EventFlags.CheckFlag({'symbol': 'EvE_WorldGlobeActivate'}) {
            Dungeon.SetCurrentDungeonCleared()
            GameControl.UnforbidWarp()
            ItemHeartContainer.SetVisibility({'visible': False})

            call WorldGlobeActivate_HyruleCastle()

        } else {

            call _jump_DungeonMarker()

            GameControl.RequestLevelJump({'level': 'S_Dungeon042', 'locator': 'S042_R001_GatePartnerPhoton', 'offsetX': 0.0, 'offsetZ': 0.0})
        }
    }
}
