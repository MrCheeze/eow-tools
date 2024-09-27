-------- EventFlow: FieldBoundary --------

Actor: Area
entrypoint: None()
actions: ['Destroy']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: []
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimation', 'PlayAnimationNoWait', 'AimCompassPoint', 'AimActor', 'MoveToBesideTargetActor', 'AimPlayer', 'MoveToTargetActor', 'WarpToDefaultPosition', 'MoveToDefaultPosition']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['SetShadowMapSettings', 'Reset', 'LookAt2ActorsCenterAsTalker', 'LerpDofSettings', 'PlayActorOriginCameraAnimation']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Hud
entrypoint: None()
actions: ['PlayOutAnim', 'PlayInAnim']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor', 'PlayAnimation', 'AimCompassPoint', 'SetInterestIkEnabled', 'WarpToActor', 'MoveToBesideTargetActor', 'SetGravityEnable', 'PlayAnimationNoWait']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['SetActivateAllActor']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['CheckProgress']
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: MinisterLeft
entrypoint: None()
actions: ['LookAtTalker']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['PlayAnimationNoWait', 'AimActor', 'AimCompassPoint']
queries: []
params: None

Actor: HylianF009
entrypoint: None()
actions: ['LookAtTalker', 'SkipAutoTurn']
queries: []
params: None

void ViewBoundaryWorld() {

    call EvResetCommon.AllReset()

    Hud.PlayOutAnim()
    Camera.SetShadowMapSettings({'ShadowMapSettings': 'FieldBoundary1'})
    GameControl.SetActivateAllActor({'is_active': True})

    fork {
        Camera.LerpDofSettings({'kind': 7, 'FocalDistance': 32.0, 'FocusRange': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'BlurSizeScale': 1.0, 'BlurRatio': 1.0, 'TiltShiftCenterX': 0.5, 'TiltShiftCenterY': 0.7200000286102295, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftRange': 0.20000000298023224, 'TiltShiftGamma': 2.0, 'TiltShiftBlurSizeScale': 1.0, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofFocalDistance': 30.0, 'TiltShiftDofBackBlurFadeWidth': 0.05000000074505806, 'TiltShiftDofBlurRatio': 1.0, 'duration': 0.0, 'TiltShiftDofBackRange': 150.0, 'TiltShiftDofBackCurve': 0.800000011920929, 'noWait': False})
    } {
        Camera.PlayActorOriginCameraAnimation({'name': 'ViewBoundaryWorld01_cam', 'farClipDistanceCtrl': True, 'path': 'map/FieldBoundary001_001.bfres', 'target': ActorIdentifier(name="Player"), 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Zelda.AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
        Timer.Wait({'time': 0.10000000149011612})
        Partner[companion].MoveToDefaultPosition({'position': 2, 'speed': 0, 'tolerance': 0.0, 'avoidWall': False, 'avoidPlayer': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }


    fork {
        Camera.SetShadowMapSettings({'ShadowMapSettings': 'FieldBoundary2'})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'chaseRatio': 1.0, 'duration': 0.0, 'offsetY': 0.5, 'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'distanceOffset': 0.0, 'weight1': 1.0, 'weight2': 1.0, 'offsetX': 0.0, 'offsetZ': 0.0})
    }

    Timer.Wait({'time': 0.5})
    Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetX': -1.0, 'offsetZ': -1.0, 'actor': ActorIdentifier(name="Player"), 'offsetY': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.3999999761581421, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})

    fork {
        Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:ViewBoundaryWorld_010', 'aimToPlayer': False, 'playerTalkAnim': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'selfTalkAnimName': 'talk02', 'aimFromPlayer': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Timer.Wait({'time': 0.5})

        call GeneralSequence.Look_at_Partner()

    }


    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:ViewBoundaryWorld_020', 'getAttention': False})
    } {
        Partner[companion].PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Partner[companion].PlayAnimationNoWait({'name': 'sad_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:ViewBoundaryWorld_030', 'getAttention': False})
    Timer.Wait({'time': 0.4000000059604645})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.6000000238418579})
    Partner[companion].PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:ViewBoundaryWorld_040', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.3999999761581421, 'withoutTurn': False, 'immediateTurn': False})
    Partner[companion].MoveToTargetActor({'speed': 1, 'offsetX': 0.0, 'offsetY': 0.0, 'actor': ActorIdentifier(name="Partner"), 'distance': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Timer.Wait({'time': 0.5})

    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:ViewBoundaryWorld_060', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.5})
        Zelda.AimCompassPoint({'direction': 2, 'withoutTurn': True, 'duration': 0.3999999761581421, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.3999999761581421, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})

    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:ViewBoundaryWorld_070', 'aimToPlayer': False, 'playerTalkAnim': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'aimFromPlayer': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})

        fork {
            Player.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 0.125})
            Player.AimActor({'offsetY': -0.6000000238418579, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    Timer.Wait({'time': 1.0})

    fork {
        Hud.PlayInAnim()
    } {
        Player.AimCompassPoint({'direction': 2, 'duration': 1.0, 'withoutTurn': False, 'immediateTurn': False})
    }

    EventFlags.SetFlag({'symbol': 'EvAreaA005', 'value': True})
    GameControl.SetActivateAllActor({'is_active': False})
    QuestSystem.SetProgress({'symbol': 'HyruleCastle_LuberiHouse:2384585407', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventVariables.SetVariable({'symbol': 'HyruleCastle_LuberiHouse:2384585407'})
}

void FindMinisterLeft() {
    Zelda.SetGravityEnable({'enable': False})
    Zelda.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.30000001192092896})
    MinisterLeft.LookAtTalker({'distanceOffset': -4.0, 'chaseRatio': 0.10000002384185791, 'duration': 0.3999999761581421, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 0.5})
    Zelda.WarpToActor({'distance': 5.0, 'offsetY': -1.5, 'actor': ActorIdentifier(name="MinisterLeft"), 'offsetX': 1.5})
    Partner[companion].WarpToDefaultPosition({'position': 2, 'avoidWall': False, 'avoidPlayer': False})
    Zelda.SetGravityEnable({'enable': True})

    call EvResetCommon.AllReset()


    fork {
        Zelda.MoveToBesideTargetActor({'speed': 1, 'offsetZ': 2.299999952316284, 'offsetY': -1.5, 'actor': ActorIdentifier(name="MinisterLeft"), 'offsetX': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    } {
        Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetY': 0.0, 'offsetZ': 1.5, 'offsetX': -1.0, 'actor': ActorIdentifier(name="MinisterLeft"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    }


    fork {
        Zelda.AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.5})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="MinisterLeft"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Partner[companion].PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:BoundaryMinisterLeftTalk_010', 'keepPersonalSpace': False, 'playerTalkAnim': False, 'aimToPlayer': False, 'selfTalkAnimName': 'talk02', 'aimFromPlayer': False, 'cameraLookAt': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].PlayAnimationNoWait({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:BoundaryMinisterLeftTalk_020', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.5})

        call GeneralSequence.Look_at_Partner()

    }

    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Area.Destroy()
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    EventVariables.SetVariable({'symbol': 'HyruleCastle_LuberiHouse:178609646'})
}

void AboutBoundaryPeople() {

    call EvResetCommon.AllReset()

    Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetZ': 1.0, 'offsetY': -1.0, 'withoutTurn': True, 'actor': ActorIdentifier(name="HylianF009"), 'offsetX': -1.25, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="HylianF009"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HylianF009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 1.0})
        Zelda.AimActor({'actor': ActorIdentifier(name="HylianF009"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HylianF009.LookAtTalker({'distanceOffset': -4.0, 'offsetY': -1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetZ': 0.0, 'keep': False})
    }

    Timer.Wait({'time': 0.6000000238418579})
    Partner[companion].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'message': 'scenario/StoryAreaA:BoundaryHylianF009Talk_010', 'aimFromPlayer': False, 'selfTalkAnimName': 'talk02', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HylianF009"), 'actor2': ActorIdentifier(name="Zelda"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:BoundaryHylianF009Talk_020', 'aimToPlayer': False, 'playerTalkAnim': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'selfTalkAnimName': 'talk02', 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Zelda.AimActor({'actor': ActorIdentifier(name="Partner"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    EventVariables.SetVariable({'symbol': 'HyruleCastle_LuberiHouse:1084296349'})
    HylianF009.SkipAutoTurn()
}

void BoundaryWarpIn() {
    switch QuestSystem.CheckProgress({'symbol': 'HyruleCastle_LuberiHouse:404754367'}) {
      case 4294967295:

        call S_DungeonWorldGlobe.BoundaryWorldWarpIn()

      case [0, 1]:

        call AreaStartCommon.MapWarpIn()

    }
}

void FindMinisterLeftWalk() {

    fork {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.30000001192092896})
    MinisterLeft.LookAtTalker({'distanceOffset': -4.0, 'chaseRatio': 0.10000002384185791, 'duration': 0.3999999761581421, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 0.5})

    call EvResetCommon.AllReset()


    fork {
        Zelda.MoveToBesideTargetActor({'speed': 1, 'offsetZ': 2.299999952316284, 'offsetY': -1.5, 'actor': ActorIdentifier(name="MinisterLeft"), 'offsetX': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    } {
        Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetY': 0.0, 'offsetZ': 1.5, 'offsetX': -1.0, 'actor': ActorIdentifier(name="MinisterLeft"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    }


    fork {
        Zelda.AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.5})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="MinisterLeft"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Partner[companion].PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:BoundaryMinisterLeftTalk_010', 'keepPersonalSpace': False, 'playerTalkAnim': False, 'aimToPlayer': False, 'selfTalkAnimName': 'talk02', 'aimFromPlayer': False, 'cameraLookAt': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].PlayAnimationNoWait({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:BoundaryMinisterLeftTalk_020', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.5})

        call GeneralSequence.Look_at_Partner()

    }

    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Area.Destroy()
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    EventVariables.SetVariable({'symbol': 'HyruleCastle_LuberiHouse:178609646'})
}
