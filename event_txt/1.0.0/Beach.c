-------- EventFlow: Beach --------

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckMessgaeFlag']
params: None

Actor: Zol
entrypoint: None()
actions: ['Pop', 'PlayAnimation', 'AimPlayer', 'FindPlayer', 'PlayTailorOtherChannelNoWait', 'Activate']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'Reset']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor', 'PlayAnimation', 'ResetFacialExpression', 'ResetAim']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: TutorialUI
entrypoint: None()
actions: ['ShowModal']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayZoneBGM', 'StopZoneBgm']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['MoveToTargetActor', 'AimCompassPoint', 'PlayAnimation']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump', 'ResetSensorEventResetContainsActors']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'AimPlayer', 'MoveToBesideTargetActor', 'AimActor', 'PlayAnimation', 'AimCompassPoint', 'Talk']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: []
queries: []
params: None

void PartnersDestination() {

    call EvResetCommon.AllReset()

    GameControl.ResetSensorEventResetContainsActors({'eventReset': False, 'cemeteryRevive': False})
    Camera.LookAt2ActorsCenterAsTalker({'weight1': 1.0, 'distanceOffset': 2.0, 'weight2': 3.0, 'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Zol"), 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Zol.Activate()
    Zol.Pop()
    Zol.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetY': 1.0, 'offsetZ': 1.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Zol"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Zelda.AimActor({'actor': ActorIdentifier(name="Zol"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Zelda.ResetAim()
    }

    Timer.Wait({'time': 0.20000000298023224})
    Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:PartnersDestination_010', 'aimToPlayer': False, 'aimFromPlayer': False, 'playerTalkAnim': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'selfTalkAnimName': 'talk02', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zol.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Zol.PlayAnimation({'name': 'find', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Zol.PlayTailorOtherChannelNoWait({'channel': 'ac_Found', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    }

    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Zol.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Zol.FindPlayer()
    } {
        Zelda.PlayAnimation({'name': 'ev_surprise_st,ev_surprise_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 1.0})
    Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:PartnersDestination_020', 'aimToPlayer': False, 'aimFromPlayer': False, 'playerTalkAnim': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'selfTalkAnimName': 'talk02', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:PartnersDestination_030', 'aimToPlayer': False, 'playerTalkAnim': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'selfTalkAnimName': 'ev_think', 'aimFromPlayer': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Timer.Wait({'time': 0.5})
        Zelda.ResetFacialExpression()

        call GeneralSequence.Look_at_Partner_neck()

    }

    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.AimActor({'actor': ActorIdentifier(name="Zol"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Zelda.ResetAim()
    Timer.Wait({'time': 0.30000001192092896})
    Zelda.PlayAnimation({'name': 'ev_BossApear_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.5})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvAreaA019'})
}

void PartnerTalk() {
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/StoryAreaA:PartnerTalk_020'}) {
        Audio.StopZoneBgm()
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Partner", sub_name="companion"), 'actor2': ActorIdentifier(name="Player"), 'distanceOffset': 1.0, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

        fork {
            Player.MoveToTargetActor({'speed': 0, 'actor': ActorIdentifier(name="Player"), 'distance': 1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        } {
            Fade.StartPreset({'preset': 'FadeInNormal'})
        }

        Partner[companion].MoveToBesideTargetActor({'offsetY': 1.0, 'speed': 0, 'offsetZ': 3.0, 'offsetX': -1.0, 'actor': ActorIdentifier(name="Zelda"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.5, 'withoutTurn': False, 'immediateTurn': False})

        fork {
            Partner[companion].PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 2.0})
        } {
            Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Camera.Reset({'resetPlayerCamera': False, 'chaseRatio': 0.10000002384185791})
            EventFlags.SetFlag({'value': True, 'symbol': 'BeachCam'})
            Audio.PlayZoneBGM({'stopbgm': True})
        }

        Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:PartnerTalk_020', 'aimToPlayer': False, 'playerTalkAnim': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].MoveToBesideTargetActor({'offsetY': 1.0, 'speed': 0, 'offsetX': -1.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetZ': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

        fork {
            Partner[companion].Talk({'message': 'scenario/StoryAreaA:PartnerTalk_030', 'getAttention': False})
        } {
            Partner[companion].PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        TutorialUI.ShowModal({'key': 'EvAreaA001Modal'})
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.5})
        Player.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } else {

        call AreaStartCommon.WalkIn()

    }
}

void FieldWallLadderDownOut() {
    EventFlags.SetFlag({'symbol': 'EvEnemyCopySuccess', 'value': True})
    Player.MoveToTargetActor({'speed': 0, 'timeOut': 1.0, 'tolerance': 0.10000000149011612, 'actor': ActorIdentifier(name="Area"), 'distance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Player.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {

        call AreaExitCommon._OutCommon({'fadePreset': 'FadeOutNormalB'})

    } {
        Player.PlayAnimation({'name': 'ev_ladder_levelin_d', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GameControl.RequestLevelJump({'level': 'level', 'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}
