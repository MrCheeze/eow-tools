-------- EventFlow: Field --------

Actor: Partner
entrypoint: None()
actions: ['MoveToTargetLinkedPoint']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['WarpToActor', 'AimPlayer', 'Talk', 'PlayAnimation', 'AimActor', 'GenericTalkSequenceWithDialog', 'MoveToBesideTargetActor', 'PlayAnimationNoWait', 'AimCompassPoint', 'SetInterestIkEnabled', 'PlayAnimationEx', 'MoveToCompassPoint', 'ResetAim']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['MoveToTargetLinkedPoint', 'AimActorLinkedPoint', 'MoveToCompassPoint', 'LookAtTalker', 'WarpToActorLinkedPoint', 'AimActor', 'WarpToActorWithCompassPoint', 'PlayAnimation', 'SkipAutoTurn']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump', 'LoadArea']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Reset', 'LookAt2ActorsCenterAsTalker', 'PlayActorOriginCameraAnimation', 'LerpDofSettings', 'RelativeMoveToWithTimeout', 'MoveToWithTimeout']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartParam', 'StartPreset']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['DisableRegionBgmAutoPlay', 'StopZoneBgm', 'PlayZoneBGM', 'EnableRegionBgmAutoPlay', 'StopRegionBgm', 'CancelNextTimeRegionBgmPlay']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'MoveToTargetLinkedPoint', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: ['Destroy']
queries: []
params: None

Actor: HylianFC000
entrypoint: None()
actions: ['AimActor', 'PlayAnimation', 'SkipAutoTurn', 'WarpToActor', 'SetFacialExpression', 'GenericTalkSequenceWithDialog']
queries: []
params: None

Actor: HylianM016
entrypoint: None()
actions: ['AimActor', 'SkipAutoTurn', 'WarpToActor', 'PlayAnimation', 'SetFacialExpression', 'GenericTalkSequenceWithDialog']
queries: []
params: None

Actor: HylianF005
entrypoint: None()
actions: ['AimActor', 'SetFacialExpression', 'PlayAnimation', 'SkipAutoTurn', 'WarpToActor', 'GenericTalkSequenceWithDialog']
queries: []
params: None

Actor: HylianF003
entrypoint: None()
actions: ['AimActor', 'SetFacialExpression', 'PlayAnimation', 'SkipAutoTurn', 'WarpToActor', 'SetInstanceVariableBool', 'GenericTalkSequenceWithDialog']
queries: []
params: None

Actor: HylianF001
entrypoint: None()
actions: ['SetFacialExpression', 'PlayAnimation', 'SkipAutoTurn', 'AimActor', 'WarpToActor', 'GenericTalkSequenceWithDialog', 'SetInstanceVariableBool']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress', 'Open']
queries: []
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: HylianFC003
entrypoint: None()
actions: ['AimActor', 'PlayAnimation', 'SetFacialExpression', 'SkipAutoTurn', 'WarpToActor', 'GenericTalkSequenceWithDialog']
queries: []
params: None

Actor: HyruleSoldier004
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'WarpToActorWithCompassPoint', 'Activate', 'MoveToCompassPoint', 'PlayAnimation', 'Reset', 'AimPlayer', 'SetInterestIkEnabled']
queries: []
params: None

Actor: HyruleSoldier001
entrypoint: None()
actions: ['WarpToActorLinkedPoint', 'AimActor', 'SetFacialExpression', 'PlayAnimation', 'MoveToCompassPoint', 'AimPlayer', 'AimCompassPoint', 'SetInterestIkEnabled', 'SkipAutoTurn']
queries: []
params: None

Actor: MinisterRightCarry
entrypoint: None()
actions: ['SetFacialExpression', 'Talk', 'Destroy', 'MoveToCompassPoint', 'Deactivate']
queries: []
params: None

Actor: HyruleSoldier003
entrypoint: None()
actions: ['WarpToActorWithCompassPoint', 'Activate', 'MoveToCompassPoint', 'Reset', 'AimPlayer', 'SetInterestIkEnabled']
queries: []
params: None

Actor: AreaStartTag
entrypoint: None()
actions: []
queries: []
params: None

Actor: HyruleSoldier028
entrypoint: None()
actions: ['Talk', 'TalkKeep', 'SetFacialExpression', 'PlayAnimation', 'AimActor', 'PlayAnimationNoWait', 'SkipAutoTurn', 'MoveToBesideTargetActor', 'WarpToActorLinkedPoint', 'MoveToCompassPoint', 'AimPlayer', 'AimCompassPoint', 'SetInterestIkEnabled']
queries: []
params: None

void ZeldaReturn() {
    Audio.DisableRegionBgmAutoPlay()
    Zelda.WarpToActorWithCompassPoint({'direction': 2, 'distance': -4.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 0.0, 'offsetX': 0.0})

    fork {
        HyruleSoldier003.Activate()
        HyruleSoldier003.WarpToActorWithCompassPoint({'distance': -1.0, 'offsetX': -1.0, 'actor': ActorIdentifier(name="Zelda"), 'direction': 2, 'offsetY': 0.0})
        HyruleSoldier003.SetInterestIkEnabled({'enable': False})
    } {
        HyruleSoldier004.Activate()
        HyruleSoldier004.WarpToActorWithCompassPoint({'distance': -1.0, 'offsetX': 1.0, 'actor': ActorIdentifier(name="Zelda"), 'direction': 2, 'offsetY': 0.0})
        HyruleSoldier004.SetInterestIkEnabled({'enable': False})
    }

    Zelda.LookAtTalker({'keep': True, 'duration': 0.0, 'chaseRatio': 1.0, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Audio.StopZoneBgm()
    Timer.Wait({'time': 0.10000000149011612})

    fork {
        Zelda.MoveToCompassPoint({'direction': 2, 'speed': 0, 'distance': 10.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        HyruleSoldier003.MoveToCompassPoint({'direction': 2, 'speed': 0, 'distance': 10.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        HyruleSoldier004.MoveToCompassPoint({'direction': 2, 'speed': 0, 'distance': 10.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {

        fork {
            Timer.Wait({'time': 0.0})
            HyruleSoldier001.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            HyruleSoldier001.SetFacialExpression({'expression': 'surprise'})
            HyruleSoldier001.PlayAnimation({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 0.5})
            HyruleSoldier001.MoveToCompassPoint({'direction': 2, 'speed': 1, 'distance': 17.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
            Timer.Wait({'time': 1.5})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            HyruleSoldier028.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            HyruleSoldier028.SetFacialExpression({'expression': 'surprise'})
            HyruleSoldier028.PlayAnimation({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 0.30000001192092896})
            HyruleSoldier028.MoveToCompassPoint({'direction': 2, 'speed': 1, 'distance': 17.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
            Timer.Wait({'time': 1.5})
        }

    } {
        Fade.StartParam({'time': 2.0, 'colorG': 0.0, 'colorB': 0.0, 'colorR': 0.0, 'mode': 0})
        Timer.Wait({'time': 1.5})
        Fade.StartParam({'mode': 1, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0, 'time': 1.5})
    }

    HyruleSoldier003.Reset()
    HyruleSoldier004.Reset()
    Zelda.WarpToActorLinkedPoint({'index': 5, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetY': 0.0})

    fork {
        HylianF001.WarpToActor({'offsetX': -1.2000000476837158, 'distance': 2.9000000953674316, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 0.0})
    } {
        HylianF003.WarpToActor({'distance': 2.0, 'offsetX': -2.4000000953674316, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 0.0})
    } {
        HylianM016.WarpToActor({'distance': 2.799999952316284, 'offsetX': 1.2000000476837158, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 0.0})
    } {
        HylianF005.WarpToActor({'distance': 1.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': -3.200000047683716, 'offsetY': 0.0})
    } {
        HylianFC000.WarpToActor({'distance': 2.0, 'offsetX': 2.200000047683716, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 0.0})
    } {
        HylianFC003.WarpToActor({'distance': 1.0, 'offsetX': 3.200000047683716, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 0.0})
    }


    fork {
        HylianF001.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        HylianF001.SetFacialExpression({'expression': 'smile'})
        HylianF001.PlayAnimation({'name': 'wait01_B', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianF003.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        HylianF003.SetFacialExpression({'expression': 'sad'})
        HylianF003.PlayAnimation({'name': 'wait03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM016.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        HylianM016.SetFacialExpression({'expression': 'normal'})
        HylianM016.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianF005.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        HylianF005.SetFacialExpression({'expression': 'sad'})
        HylianF005.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianFC000.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        HylianFC000.SetFacialExpression({'expression': 'normal'})
        HylianFC000.PlayAnimation({'name': 'wait06', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianFC003.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        HylianFC003.SetFacialExpression({'expression': 'sad'})
        HylianFC003.PlayAnimation({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier001.WarpToActorLinkedPoint({'index': 3, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetY': 0.0})
        HyruleSoldier001.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        HyruleSoldier001.SetFacialExpression({'expression': 'normal'})
        HyruleSoldier001.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier028.WarpToActorLinkedPoint({'index': 4, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetY': 0.0})
        HyruleSoldier028.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        HyruleSoldier028.SetFacialExpression({'expression': 'normal'})
        HyruleSoldier028.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Audio.EnableRegionBgmAutoPlay()
    GameControl.LoadArea({'syncLoad': True, 'extentsY': 20.0, 'location': 'RevivingWorld2', 'extentsX': 50.0, 'extentsZ': 50.0})
    Camera.LerpDofSettings({'kind': 7, 'TiltShiftCenterY': 0.75, 'TiltShiftCenterX': 0.0, 'BlurRatio': 1.0, 'BlurSizeScale': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftRange': 0.20000000298023224, 'TiltShiftGamma': 2.0, 'TiltShiftBlurSizeScale': 1.0, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofBlurRatio': 1.0, 'duration': 0.0, 'TiltShiftDofBackBlurFadeWidth': 0.05000000074505806, 'TiltShiftDofFocalDistance': 36.0, 'TiltShiftDofBackRange': 40.0, 'TiltShiftDofBackCurve': 0.5, 'FocalDistance': 24.5, 'FocusRange': 1.0, 'noWait': False})
    Camera.PlayActorOriginCameraAnimation({'name': 'StageCam00_cam', 'path': 'map/Field_HyruleCastle_001.bfres', 'chaseRatio': 1.0, 'offsetY': -0.20000000298023224, 'farClipDistanceCtrl': True, 'target': ActorIdentifier(name="Zelda"), 'offsetX': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    Timer.Wait({'time': 0.5})
    Audio.PlayZoneBGM({'stopbgm': True})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    Timer.Wait({'time': 0.5})

    fork {
        HylianF001.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:ZeldaReturn_030', 'selfTalkAnimName': 'happy02_B', 'facial': 'smile', 'cameraLookAt': False, 'aimFromPlayer': False, 'playerTalkAnim': False, 'aimToPlayer': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'actor': ActorIdentifier(name="HylianF001"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HylianF001.PlayAnimation({'name': 'wait01_B', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.PlayAnimation({'name': 'wait_barehands', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianF005.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:ZeldaReturn_040', 'selfTalkAnimName': 'talk02', 'facial': 'sad', 'cameraLookAt': False, 'aimFromPlayer': False, 'playerTalkAnim': False, 'aimToPlayer': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'actor': ActorIdentifier(name="HylianF005"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HylianF005.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.PlayAnimation({'name': 'wait_barehands', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianF003.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:ZeldaReturn_050', 'facial': 'sad', 'cameraLookAt': False, 'aimFromPlayer': False, 'playerTalkAnim': False, 'keepPersonalSpace': False, 'aimToPlayer': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'actor': ActorIdentifier(name="HylianF003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HylianF003.PlayAnimation({'name': 'wait03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.PlayAnimation({'name': 'wait_barehands', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianM016.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:ZeldaReturn_051', 'cameraLookAt': False, 'aimFromPlayer': False, 'keepPersonalSpace': False, 'playerTalkAnim': False, 'aimToPlayer': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'actor': ActorIdentifier(name="HylianM016"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HylianM016.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.PlayAnimation({'name': 'wait_barehands', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianFC000.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:ZeldaReturn_052', 'selfTalkAnimName': 'happy01', 'facial': 'smile', 'cameraLookAt': False, 'aimFromPlayer': False, 'keepPersonalSpace': False, 'playerTalkAnim': False, 'aimToPlayer': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'actor': ActorIdentifier(name="HylianFC000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HylianFC000.PlayAnimation({'name': 'wait06', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.PlayAnimation({'name': 'wait_barehands', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianFC003.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:ZeldaReturn_053', 'cameraLookAt': False, 'aimFromPlayer': False, 'keepPersonalSpace': False, 'playerTalkAnim': False, 'aimToPlayer': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'actor': ActorIdentifier(name="HylianFC003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HylianFC003.PlayAnimation({'name': 'wait03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.PlayAnimation({'name': 'wait_barehands', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier028.MoveToBesideTargetActor({'speed': 0, 'offsetX': 2.5, 'customSpeed': 0.0, 'offsetZ': 2.200000047683716, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0})
    HyruleSoldier028.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Zelda.AimActor({'duration': 0.699999988079071, 'actor': ActorIdentifier(name="HyruleSoldier028"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        HyruleSoldier028.Talk({'message': 'scenario/StoryAreaA:ZeldaReturn_060', 'getAttention': False})
    } {
        HyruleSoldier028.SetFacialExpression({'expression': 'smile'})
    } {
        HyruleSoldier028.PlayAnimationNoWait({'name': 'salute,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HyruleSoldier028.TalkKeep({'message': 'scenario/StoryAreaA:ZeldaReturn_070', 'getAttention': False})
    HyruleSoldier028.Talk({'message': 'scenario/StoryAreaA:ZeldaReturn_080', 'getAttention': False})
    HyruleSoldier028.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.PlayAnimation({'name': 'wait_barehands', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianF001.SkipAutoTurn()
        HylianF001.SetInstanceVariableBool({'name': 'ZeldaReturn', 'value': True})
    } {
        HylianF003.SkipAutoTurn()
        HylianF003.SetInstanceVariableBool({'name': 'ZeldaReturn', 'value': True})
    } {
        HylianM016.SkipAutoTurn()
    } {
        HylianF005.SkipAutoTurn()
    } {
        HylianFC000.SkipAutoTurn()
    } {
        HylianFC003.SkipAutoTurn()
    } {
        HyruleSoldier028.SkipAutoTurn()
    } {
        HyruleSoldier001.SkipAutoTurn()
    }

    Timer.Wait({'time': 1.0})
    Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})
    EventFlags.SetFlag({'symbol': 'EvPrologue006', 'value': True})
    EventVariables.SetVariable({'symbol': 'HyruleCastle_LuberiHouse:3922121741'})
}

void NotLeaveCastleTown() {

    fork {
        HyruleSoldier001.AimPlayer({'duration': 0.20000000298023224, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleSoldier028.AimPlayer({'duration': 0.20000000298023224, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {

        call EvResetCommon.AllReset()

    }


    fork {
        HyruleSoldier028.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier028.TalkKeep({'message': 'scenario/StoryAreaA:NotLeaveCastleTown_010', 'getAttention': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HyruleSoldier028"), 'actor2': ActorIdentifier(name="HyruleSoldier001"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Zelda.AimActor({'actor': ActorIdentifier(name="HyruleSoldier028"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HyruleSoldier028.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier028.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier028.Talk({'message': 'scenario/StoryAreaA:NotLeaveCastleTown_020', 'getAttention': False})

    fork {
        Zelda.MoveToTargetLinkedPoint({'index': 0, 'speed': 1, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    }


    fork {
        Zelda.SkipAutoTurn()
    } {
        HyruleSoldier028.SetInterestIkEnabled({'enable': False})
        HyruleSoldier028.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        HyruleSoldier028.SkipAutoTurn()
    } {
        HyruleSoldier001.SetInterestIkEnabled({'enable': False})
        HyruleSoldier001.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        HyruleSoldier001.SkipAutoTurn()
    }

}

void NotFoundHyruleKing() {

    call EvResetCommon.AllResetNowait()

    Partner[companion].WarpToActor({'offsetY': 1.0, 'offsetX': -2.0, 'distance': 2.0, 'actor': ActorIdentifier(name="Player")})

    fork {
        Player.AimActor({'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimPlayer({'duration': 0.10000000149011612, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetY': 1.0, 'actor': ActorIdentifier(name="Player"), 'offsetZ': 1.0, 'offsetX': -1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': -5.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Partner[companion].Talk({'message': 'scenario/StoryAreaHyruleCastle:NotFoundHyruleKing_010', 'getAttention': False})
    } {
        Partner[companion].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].Talk({'message': 'scenario/StoryAreaHyruleCastle:NotFoundHyruleKing_020', 'getAttention': False})
    }

    Timer.Wait({'time': 1.5})
    Partner[companion].PlayAnimationEx({'name': 'notice02,wait', 'time': 0.5, 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Partner[companion].Talk({'message': 'scenario/StoryAreaHyruleCastle:NotFoundHyruleKing_020_02', 'getAttention': False})
    QuestSystem.SetProgress({'symbol': 'Desert:3205882340', 'isShowTelopInEvent': False, 'isFrontFade': False})
    QuestSystem.SetProgress({'symbol': 'Area3Quest:3236604128', 'isShowTelopInEvent': False, 'isFrontFade': False})
    QuestSystem.Open({'questKey': 'Midpoint', 'isShowTelopInEvent': False, 'isFrontFade': False})
    QuestSystem.SetProgress({'symbol': 'Midpoint:1333872236', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void noentry() {

    fork {
        HyruleSoldier003.AimPlayer({'duration': 0.20000000298023224, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleSoldier004.AimPlayer({'duration': 0.20000000298023224, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {

        call EvResetCommon.AllReset()

    }


    fork {
        HyruleSoldier004.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:SoldierDTalk02_010', 'cameraLookAt': True, 'aimFromPlayer': False, 'aimToPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Zelda.AimActor({'actor': ActorIdentifier(name="HyruleSoldier004"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HyruleSoldier004.Talk({'message': 'scenario/HylianGeneralTalk:SoldierDTalk02_020', 'getAttention': False})
    HyruleSoldier004.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})

    fork {
        Zelda.MoveToTargetLinkedPoint({'speed': 0, 'index': 0, 'actor': ActorIdentifier(name="Area"), 'withoutTurn': False, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Zelda.AimActorLinkedPoint({'withoutTurn': False, 'pointIndex': 0, 'actor': ActorIdentifier(name="Area"), 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void MinistersSuspected_start() {
    Fade.StartParam({'mode': 1, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0, 'time': 1.0})
    GameControl.RequestLevelJump({'locator': 'MinistersSuspected', 'level': 'EV_WorldRepairCastle', 'offsetX': 0.0, 'offsetZ': 0.0})
    Audio.StopRegionBgm({'fadeSec': 2.0})
    Audio.CancelNextTimeRegionBgmPlay()
}

void MinisterRightRescue() {

    call EvResetCommon.AllReset()


    fork {
        MinisterRightCarry.Talk({'message': 'scenario/StoryAreaHyruleCastle:MinisterRightRescue_010', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.699999988079071})

        fork {
            Player.AimActor({'actor': ActorIdentifier(name="MinisterRightCarry"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].AimActor({'actor': ActorIdentifier(name="MinisterRightCarry"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    Camera.MoveToWithTimeout({'targetPositionX': 331.875, 'maxSpeed': 999.0, 'timeout': 1.5, 'chaseRatio': 0.10000000149011612, 'targetPositionZ': 240.5, 'targetPositionY': 5.5})
    Timer.Wait({'time': 0.5})
    MinisterRightCarry.SetFacialExpression({'expression': 'angry'})
    MinisterRightCarry.Talk({'message': 'scenario/StoryAreaHyruleCastle:MinisterRightRescue_020', 'getAttention': False})

    fork {
        MinisterRightCarry.MoveToCompassPoint({'speed': 1, 'customSpeed': 10.0, 'direction': 3, 'offsetX': 0.0, 'distance': 14.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0, 'offsetY': 0.0})
        MinisterRightCarry.MoveToCompassPoint({'speed': 1, 'customSpeed': 10.0, 'direction': 0, 'distance': 4.0, 'offsetX': 3.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0, 'offsetY': 0.0})
    } {
        Camera.RelativeMoveToWithTimeout({'timeout': 1.5, 'chaseRatio': 0.009999999776482582, 'offsetZ': -2.0, 'offsetX': -16.0, 'offsetY': 0.0, 'maxSpeed': 999.0})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            Player.MoveToTargetLinkedPoint({'index': 3, 'speed': 1, 'actor': ActorIdentifier(name="Area"), 'offsetX': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetY': 0.0, 'offsetZ': 0.0})
            Player.AimActor({'actor': ActorIdentifier(name="MinisterRightCarry"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner.MoveToTargetLinkedPoint({'index': 3, 'speed': 1, 'offsetY': 1.0, 'actor': ActorIdentifier(name="Area"), 'offsetZ': 0.0, 'offsetX': -1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="MinisterRightCarry"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    MinisterRightCarry.Destroy()
    Area.Destroy()
    Timer.Wait({'time': 1.0})
}

void SearchBoundaryEntrance() {

    call EvResetCommon.AllReset()

    Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetX': 1.0, 'offsetZ': 1.0, 'offsetY': 1.0, 'actor': ActorIdentifier(name="Zelda"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Event326:
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].ResetAim()

    fork {
        Partner[companion].GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/StoryAreaHyruleCastle:SearchBoundaryEntrance_010', 'aimToPlayer': False, 'aimFromPlayer': False, 'cameraLookAt': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner[companion].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})
        Player.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'withoutTurn': False, 'offsetY': -0.6000000238418579, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].MoveToCompassPoint({'direction': 2, 'speed': 0, 'distance': 3.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Event360:
    Timer.Wait({'time': 0.20000000298023224})
    Partner[companion].PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.5})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.6000000238418579})
    Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaHyruleCastle:SearchBoundaryEntrance_020', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].SetInterestIkEnabled({'enable': True})
    Timer.Wait({'time': 0.30000001192092896})
    Partner[companion].PlayAnimationNoWait({'name': 'move_down', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.20000000298023224})
    Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetZ': 0.0, 'offsetX': 0.0, 'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetY': -4.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].AimActor({'withoutTurn': True, 'offsetY': 3.0, 'offsetZ': 1.0, 'actor': ActorIdentifier(name="Partner"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.5})
    Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetZ': 0.0, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetY': 4.0, 'offsetX': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetY': -0.6000000238418579, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].ResetAim()
    } {
        Partner[companion].Talk({'message': 'scenario/StoryAreaHyruleCastle:SearchBoundaryEntrance_030', 'getAttention': False})
    } {
        Partner[companion].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner[companion].Talk({'message': 'scenario/StoryAreaHyruleCastle:SearchBoundaryEntrance_040', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaHyruleCastle:SearchBoundaryEntrance_050', 'getAttention': False})
    QuestSystem.SetProgress({'symbol': 'Midpoint:855587140', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void MinisterRightRescue_2() {

    call EvResetCommon.AllReset()


    fork {
        MinisterRightCarry.Talk({'message': 'scenario/StoryAreaHyruleCastle:MinisterRightRescue_010', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.699999988079071})

        fork {
            Player.AimActor({'actor': ActorIdentifier(name="MinisterRightCarry"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].AimActor({'actor': ActorIdentifier(name="MinisterRightCarry"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    Camera.MoveToWithTimeout({'maxSpeed': 999.0, 'timeout': 1.5, 'chaseRatio': 0.10000000149011612, 'targetPositionZ': 240.5, 'targetPositionY': 5.5, 'targetPositionX': 330.0})
    Timer.Wait({'time': 0.5})
    MinisterRightCarry.SetFacialExpression({'expression': 'angry'})
    MinisterRightCarry.Talk({'message': 'scenario/StoryAreaHyruleCastle:MinisterRightRescue_020', 'getAttention': False})
    MinisterRightCarry.MoveToCompassPoint({'speed': 1, 'customSpeed': 10.0, 'direction': 3, 'offsetX': 0.0, 'distance': 14.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0, 'offsetY': 0.0})
    MinisterRightCarry.Deactivate()
    Area.Destroy()
    Timer.Wait({'time': 1.0})
}

void SearchBoundaryEntrance_2() {

    call EvResetCommon.AllReset()

    Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetZ': 1.0, 'offsetY': 1.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': -1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    goto Event326
}

void SearchBoundaryEntrance_R_NoMove() {

    call EvResetCommon.AllReset()

    Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetX': 1.0, 'offsetZ': 1.0, 'offsetY': 1.0, 'actor': ActorIdentifier(name="Zelda"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Event416:
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].ResetAim()

    fork {
        Partner[companion].GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/StoryAreaHyruleCastle:SearchBoundaryEntrance_010', 'aimToPlayer': False, 'aimFromPlayer': False, 'cameraLookAt': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner[companion].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})
        Player.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'withoutTurn': False, 'offsetY': -0.6000000238418579, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    goto Event360
}

void SearchBoundaryEntrance_L_NoMove() {

    call EvResetCommon.AllReset()

    Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetZ': 1.0, 'offsetY': 1.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': -1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    goto Event416
}

void SearchBoundaryEntrance_Camera1() {

    call EvResetCommon.AllReset()

    Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetX': 1.0, 'offsetZ': 1.0, 'offsetY': 1.0, 'actor': ActorIdentifier(name="Zelda"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].ResetAim()
    Event430:

    fork {
        Partner[companion].GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/StoryAreaHyruleCastle:SearchBoundaryEntrance_010', 'aimToPlayer': False, 'aimFromPlayer': False, 'cameraLookAt': False, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner[companion].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})
        Player.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'withoutTurn': False, 'offsetY': -0.6000000238418579, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.RelativeMoveToWithTimeout({'chaseRatio': 0.05000000074505806, 'offsetY': -6.0, 'offsetZ': -4.0, 'offsetX': 0.0, 'maxSpeed': 999.0, 'timeout': 1.0})
    }

    goto Event360
}

void SearchBoundaryEntrance_NoMove() {

    call EvResetCommon.AllReset()

    Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetY': 1.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': 0.699999988079071, 'offsetZ': 0.699999988079071, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].ResetAim()

    fork {
        Partner[companion].GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/StoryAreaHyruleCastle:SearchBoundaryEntrance_010', 'aimToPlayer': False, 'aimFromPlayer': False, 'cameraLookAt': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner[companion].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})
        Player.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'withoutTurn': False, 'offsetY': -0.6000000238418579, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    goto Event360
}

void SearchBoundaryEntrance_Camera2() {

    call EvResetCommon.AllReset()

    Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetY': 1.0, 'offsetZ': 0.699999988079071, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': -0.699999988079071, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].ResetAim()
    goto Event430
}
