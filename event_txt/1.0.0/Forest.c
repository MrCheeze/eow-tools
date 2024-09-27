-------- EventFlow: Forest --------

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['Deactivate']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: ['LookAtGimmicksLinkedPoint']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActorLinkedPoint', 'MoveToTargetLinkedPoint', 'AimCompassPoint', 'SetVisibility', 'PlayAnimation', 'AimActor', 'Deactivate', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['PlayActorOriginCameraAnimation', 'LerpDofSettings', 'Reset', 'LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: BoundaryGate
entrypoint: None()
actions: ['Appear', 'Activate']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['WarpToActor', 'AimActor']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: HylianF009
entrypoint: None()
actions: ['Activate', 'PlayAnimationEx', 'SetFacialExpression', 'LookAtTalker', 'MoveToCompassPoint', 'AimCompassPoint', 'WarpToActor', 'SetGravityEnable', 'SetCollisionEnabled', 'SetVisibility']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump']
queries: []
params: None

Actor: HylianM003
entrypoint: None()
actions: ['Activate', 'PlayAnimation', 'SetFacialExpression', 'MoveToCompassPoint', 'AimActor', 'AimCompassPoint', 'WarpToActor']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['Yield_']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['StopAllBGM', 'StopZoneBgm', 'StopZoneBaseAmbience', 'PlayOneshotSystemSE', 'MuteOffBGM', 'MuteOnBGM']
queries: []
params: None

Actor: BoundaryGateSign
entrypoint: None()
actions: ['Destroy', 'StopTailorOtherChannel']
queries: []
params: None

Actor: MinisterLeft
entrypoint: None()
actions: ['Talk', 'AimPlayer', 'LookAtTalker']
queries: []
params: None

Actor: Environment
entrypoint: None()
actions: ['LockCurrentRegion']
queries: []
params: None

Actor: EvCrackMeetKingHyruleSouthernVillage003
entrypoint: None()
actions: ['PlayAnimation', 'SetAutoCalcBoundingVolumeEnabled', 'Activate', 'PlayMaterialAnimationNoWait']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'DisableAutoMovement', 'Talk', 'MoveToTargetLinkedPoint', 'AimPlayer', 'AimActorLinkedPoint', 'AimDegreeAngle', 'TalkKeep', 'PlayAnimation', 'AimCompassPoint', 'MoveToBesideTargetActor', 'PlayAnimationNoWait', 'LookAtTalker', 'MoveToTargetActor', 'WarpToDefaultPosition', 'AimActor', 'MoveToCompassPoint']
queries: []
params: None

void PartnersPurpose() {

    call EvResetCommon.AllReset()

    Partner[companion].DisableAutoMovement()
    Zelda.AimActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'pointIndex': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].MoveToTargetLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="Area"), 'speed': 1, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Partner[companion].LookAtTalker({'keep': True, 'distanceOffset': 3.0, 'offsetZ': 1.5, 'offsetX': -1.0, 'duration': 0.3999999761581421, 'chaseRatio': 0.10000002384185791, 'offsetY': 0.0})
    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Partner[companion].AimActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'pointIndex': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'pointIndex': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:PartnersPurpose_010', 'aimToPlayer': False, 'aimFromPlayer': False, 'playerTalkAnim': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'selfTalkAnimName': 'think', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:PartnersPurpose_011', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'message': 'scenario/StoryAreaA:PartnersPurpose_020', 'selfTalkAnimName': '', 'aimFromPlayer': True, 'aimToPlayer': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:PartnersPurpose_030', 'getAttention': False})
    Partner[companion].AimActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'pointIndex': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:PartnersPurpose_040', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:PartnersPurpose_041', 'getAttention': False})
    Timer.Wait({'time': 0.5})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:PartnersPurpose_042', 'playerTalkAnim': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'aimToPlayer': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Timer.Wait({'time': 1.0})
    Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:PartnersPurpose_043', 'aimToPlayer': False, 'aimFromPlayer': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner[companion].MoveToTargetLinkedPoint({'speed': 0, 'index': 1, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        Partner[companion].PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_PARTNER_LOOKAROUND', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 2.0})
    Partner[companion].AimDegreeAngle({'angle': 135.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:PartnersPurpose_050', 'aimToPlayer': False, 'playerTalkAnim': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvAreaA025'})
    QuestSystem.SetProgress({'symbol': 'HyruleCastle_LuberiHouse:2529992941', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventVariables.SetVariable({'symbol': 'HyruleCastle_LuberiHouse:2529992941'})
}

void EntranceToBoundaryWorld() {

    call EvResetCommon.AllReset()


    fork {
        Partner[companion].MoveToTargetLinkedPoint({'index': 0, 'speed': 1, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Partner[companion].AimDegreeAngle({'angle': 160.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Zelda.MoveToTargetLinkedPoint({'index': 1, 'speed': 0, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Zelda.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Camera.LerpDofSettings({'kind': 7, 'TiltShiftCenterX': 0.0, 'BlurRatio': 1.0, 'BlurSizeScale': 1.0, 'FocusRange': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftGamma': 2.0, 'TiltShiftBlurSizeScale': 1.0, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofBlurRatio': 1.0, 'duration': 0.0, 'TiltShiftDofBackBlurFadeWidth': 0.05000000074505806, 'TiltShiftRange': 0.18000000715255737, 'TiltShiftDofBackCurve': 0.5, 'FocalDistance': 48.0, 'TiltShiftDofFocalDistance': 48.0, 'TiltShiftDofBackRange': 48.0, 'TiltShiftCenterY': 0.6499999761581421, 'noWait': False})
        Camera.PlayActorOriginCameraAnimation({'farClipDistanceCtrl': True, 'name': 'EntranceToBoundaryWorld01_cam', 'path': 'map/Field_Forest_002.bfres', 'chaseRatio': 1.0, 'target': ActorIdentifier(name="BoundaryGateSign"), 'offsetZ': 3.0, 'offsetX': 0.0, 'offsetY': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    }

    Partner[companion].DisableAutoMovement()
    Area.LookAtGimmicksLinkedPoint({'pointIndex': 0, 'chaseRatio': 1.0, 'duration': 0.4000000059604645, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        Partner[companion].TalkKeep({'message': 'scenario/StoryAreaA:EntranceToBoundaryWorld_002', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.5})
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:EntranceToBoundaryWorld_005', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].TalkKeep({'message': 'scenario/StoryAreaA:EntranceToBoundaryWorld_007', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:EntranceToBoundaryWorld_008', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})

    fork {
        Partner[companion].MoveToCompassPoint({'timeOut': 7.0, 'speed': 0, 'tolerance': 0.0, 'customSpeed': 0.0, 'direction': 2, 'distance': 1.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Timer.Wait({'time': 0.5})
        Zelda.AimCompassPoint({'direction': 2, 'withoutTurn': False, 'duration': 0.4000000059604645, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].TalkKeep({'message': 'scenario/StoryAreaA:EntranceToBoundaryWorld_014', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:EntranceToBoundaryWorld_015', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})

    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:EntranceToBoundaryWorld_016', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.5})
        Zelda.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 1.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Partner[companion].AimDegreeAngle({'angle': 160.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        Partner[companion].PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 3.5})
    } {
        Timer.Wait({'time': 1.0})
        Zelda.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.5})
        Audio.MuteOnBGM({'duration': 2.5})
    }

    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].AimDegreeAngle({'angle': 165.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetY': 1.5, 'actor': ActorIdentifier(name="BoundaryGateSign"), 'withoutTurn': False, 'offsetZ': -1.0, 'offsetX': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0})
    Timer.Wait({'time': 0.5})
    Partner[companion].AimCompassPoint({'withoutTurn': True, 'direction': 2, 'duration': 0.4000000059604645, 'immediateTurn': False})
    Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:EntranceToBoundaryWorld_010', 'aimToPlayer': False, 'aimFromPlayer': False, 'playerTalkAnim': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Partner[companion].PlayAnimation({'name': 'create_a_rift', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EventFlags.SetFlag({'value': True, 'symbol': 'EvAreaA004'})
        BoundaryGate.Activate()
        BoundaryGate.Appear()
        BoundaryGateSign.StopTailorOtherChannel({'channel': 'BoundaryGateSign', 'index': -1})
        Timer.Wait({'time': 4.0})
    }

    BoundaryGateSign.Destroy()
    Zelda.PlayAnimation({'name': 'ev_surprise_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetY': 1.0, 'withoutTurn': True, 'offsetZ': -1.0, 'offsetX': -1.5, 'actor': ActorIdentifier(name="Zelda"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})

    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:EntranceToBoundaryWorld_011', 'getAttention': False})
    } {
        Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Zelda.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Audio.MuteOffBGM({'duration': 2.0})
    }

    Partner[companion].Talk({'message': 'scenario/StoryAreaA:EntranceToBoundaryWorld_020', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Zelda.AimCompassPoint({'direction': 2, 'duration': 1.0, 'withoutTurn': False, 'immediateTurn': False})
    QuestSystem.SetProgress({'symbol': 'HyruleCastle_LuberiHouse:361887586', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventVariables.SetVariable({'symbol': 'HyruleCastle_LuberiHouse:361887586'})
}

void notleave_2() {
    Event215:

    fork {
        MinisterLeft.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MinisterLeft.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    }

    Timer.Wait({'time': 0.5})
    MinisterLeft.Talk({'message': 'scenario/StoryAreaA:DontLeaveForest_010', 'getAttention': False})
    Fade.StartPreset({'preset': 'FadeOutFastB'})

    call EvResetCommon.AllReset()

    Player.WarpToActor({'actor': ActorIdentifier(name="MinisterLeft"), 'distance': 2.0, 'offsetY': 0.0, 'offsetX': 0.0})
    Partner[companion].WarpToDefaultPosition({'position': 1, 'avoidWall': False, 'avoidPlayer': False})

    fork {
        Player.AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.10000000149011612, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="MinisterLeft"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})
    Timer.Wait({'time': 0.20000000298023224})
    Fade.StartPreset({'preset': 'FadeInFast'})
}

void notleave_3() {
    goto Event215
}

void Kingreport_SouthernVillage() {

    fork {
        Audio.StopAllBGM({'duration': 0.0})
    } {
        Audio.StopZoneBgm()
    } {
        Audio.StopZoneBaseAmbience()
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_FIELD_SAKEME_APPEAR1', 'volume': 1.0, 'pitch': 1.0})
    } {
        Environment.LockCurrentRegion({'enableBlend': True, 'regionName': 'Field_SouthernVillage'})
    }


    fork {
        Zelda.SetVisibility({'visible': False})
        Zelda.Deactivate()
        Partner.Deactivate()
    } {
        HylianM003.Activate()
        HylianM003.WarpToActor({'offsetY': 1.0, 'distance': -4.0, 'offsetX': -3.0, 'actor': ActorIdentifier(name="EvCrackMeetKingHyruleSouthernVillage003")})
        HylianM003.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        HylianF009.Activate()
        HylianF009.WarpToActor({'offsetY': 1.0, 'offsetX': -2.0, 'distance': -5.5, 'actor': ActorIdentifier(name="EvCrackMeetKingHyruleSouthernVillage003")})
        HylianF009.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    HylianF009.LookAtTalker({'keep': True, 'distanceOffset': 5.0, 'duration': 0.0010000000474974513, 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    FlowControl.Yield_()
    Audio.StopZoneBaseAmbience()

    fork {
        Fade.StartPreset({'preset': 'FadeInNormal'})
    } {
        HylianM003.MoveToCompassPoint({'direction': 0, 'speed': 0, 'timeOut': 7.0, 'customSpeed': 2.25, 'distance': 6.5, 'tolerance': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        HylianF009.MoveToCompassPoint({'direction': 0, 'speed': 0, 'timeOut': 7.0, 'customSpeed': 2.0, 'distance': 4.599999904632568, 'tolerance': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Timer.Wait({'time': 2.299999952316284})

        fork {
            EvCrackMeetKingHyruleSouthernVillage003.Activate()
            EvCrackMeetKingHyruleSouthernVillage003.SetAutoCalcBoundingVolumeEnabled({'enabled': True})
            HylianF009.SetGravityEnable({'enable': False})
            HylianF009.SetCollisionEnabled({'enable': False})
            EvCrackMeetKingHyruleSouthernVillage003.PlayMaterialAnimationNoWait({'name': 'ev_KingReport_NpcSwallowed', 'layer': 0})
            EvCrackMeetKingHyruleSouthernVillage003.PlayAnimation({'name': 'ev_KingReport_NpcSwallowed', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 0.6000000238418579})
            HylianM003.AimActor({'actor': ActorIdentifier(name="HylianF009"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            HylianM003.SetFacialExpression({'expression': 'surprise'})
            HylianM003.PlayAnimation({'name': 'ev_down_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 0.10000000149011612})
            HylianF009.SetFacialExpression({'expression': 'freeze'})
            HylianF009.PlayAnimationEx({'name': 'ev_Crack_Sinking', 'time': 1.9160000085830688, 'layer': 0, 'blendFrame': -1, 'restart': False})
            HylianF009.SetVisibility({'visible': False})
        } {
            Timer.Wait({'time': 4.0})
            Fade.StartPreset({'preset': 'FadeOutNormalB'})
            GameControl.RequestLevelJump({'level': 'Field', 'locator': 'Kingreport_HyrulePlains', 'offsetX': 0.0, 'offsetZ': 0.0})
        }

    }

    EventFlags.SetFlag({'symbol': 'EvPrologue008', 'value': True})
}

void EnterForestTalk() {

    call EvResetCommon.AllReset()

    Partner[companion].DisableAutoMovement()
    Partner[companion].AimDegreeAngle({'angle': 45.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        Partner[companion].MoveToTargetActor({'speed': 0, 'offsetY': 1.0, 'distance': 3.0, 'actor': ActorIdentifier(name="Partner"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0})

        fork {
            Audio.PlayOneshotSystemSE({'label': 'SE_PARTNER_LOOKAROUND2', 'volume': 1.0, 'pitch': 1.0})
        } {
            Partner[companion].PlayAnimation({'name': 'lookaround02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].MoveToTargetActor({'speed': 0, 'distance': 0.0, 'offsetY': -1.0, 'actor': ActorIdentifier(name="Partner"), 'withoutTurn': True, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0})
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            Partner[companion].PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Partner[companion].Talk({'message': 'scenario/StoryAreaA:EnterForestTalk_010', 'getAttention': False})
        } {
            Partner[companion].LookAtTalker({'offsetX': -1.0, 'offsetZ': 0.0, 'offsetY': 0.5, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'keep': False})
        }

    } {
        Timer.Wait({'time': 1.0})

        call GeneralSequence.Look_at_Partner()

    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void notleave_1() {
    goto Event215
}

void PartnersPurposeNorth() {

    call EvResetCommon.AllReset()

    Partner[companion].DisableAutoMovement()
    Zelda.AimActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'pointIndex': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].MoveToTargetLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="Area"), 'speed': 1, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 3.0, 'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Partner"), 'offsetY': -1.0, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Partner[companion].AimActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'pointIndex': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'pointIndex': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:PartnersPurpose_010', 'aimToPlayer': False, 'aimFromPlayer': False, 'playerTalkAnim': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'selfTalkAnimName': 'think', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:PartnersPurpose_011', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'message': 'scenario/StoryAreaA:PartnersPurpose_020', 'selfTalkAnimName': '', 'aimFromPlayer': True, 'aimToPlayer': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:PartnersPurpose_030', 'getAttention': False})
    Partner[companion].AimActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'pointIndex': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:PartnersPurpose_040', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:PartnersPurpose_041', 'getAttention': False})
    Timer.Wait({'time': 0.5})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:PartnersPurpose_042', 'playerTalkAnim': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'aimToPlayer': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Timer.Wait({'time': 1.0})
    Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:PartnersPurpose_043', 'aimToPlayer': False, 'aimFromPlayer': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Partner[companion].MoveToTargetLinkedPoint({'speed': 0, 'index': 1, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Partner[companion].LookAtTalker({'keep': True, 'distanceOffset': 3.0, 'offsetZ': 1.5, 'duration': 1.0, 'offsetX': -1.0, 'chaseRatio': 0.05000000074505806, 'offsetY': 0.0})
    }


    fork {
        Partner[companion].PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_PARTNER_LOOKAROUND', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 2.0})
    Partner[companion].AimDegreeAngle({'angle': 135.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:PartnersPurpose_050', 'aimToPlayer': False, 'playerTalkAnim': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvAreaA025'})
    QuestSystem.SetProgress({'symbol': 'HyruleCastle_LuberiHouse:2529992941', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventVariables.SetVariable({'symbol': 'HyruleCastle_LuberiHouse:2529992941'})
}
