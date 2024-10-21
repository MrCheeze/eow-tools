-------- EventFlow: FieldDesert --------

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult4']
params: None

Actor: GerudoChiefsDaughter
entrypoint: None()
actions: ['Talk', 'MoveToCompassPoint', 'Deactivate', 'Activate', 'GenericTalkSequenceWithDialog', 'Destroy', 'PlayAnimationNoWait', 'PlayAnimation', 'LookAtTalker', 'PlayAnimationEx', 'MoveToBesideTargetActor', 'AimActor', 'AimPlayer', 'SetTalkerName', 'WarpToActorLinkedPoint', 'SetInterestIkEnabled', 'SetFacialExpression', 'GenericTalkSequence', 'ResetFacialExpression', 'MoveToTargetLinkedPoint', 'AimCompassPoint', 'SetInstanceVariableString', 'ResetAim']
queries: []
params: None

Actor: GerudoChief
entrypoint: None()
actions: ['Talk', 'Activate', 'Destroy', 'PlayAnimationNoWait', 'ResetFacialExpression', 'AimPlayer', 'AimActor', 'SetFacialExpression', 'SetInterestIkEnabled', 'ResetAim', 'MoveToBesideTargetActor', 'PlayAnimation', 'LookAtTalker', 'Deactivate']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump', 'ResetSensorEventResetContainsActors', 'ForbidLaunchApplet', 'UnforbidLaunchApplet']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset', 'StartParam']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress', 'AddProgress']
queries: ['CheckProgress']
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor', 'WarpToActorLinkedPoint', 'AimToLocation', 'SetInterestIkEnabled', 'PlayAnimationNoWait', 'AimCompassPoint', 'SetVisibility', 'PlayAnimation', 'PlayTailorOtherChannelNoWait', 'Deactivate', 'Activate']
queries: []
params: None

Actor: GerudoAide000
entrypoint: None()
actions: ['Talk', 'Activate', 'Destroy', 'PlayAnimationNoWait', 'SetFacialExpression', 'AimActor', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['Talk', 'MoveToTargetActor', 'PlayAnimationNoWait', 'ResetSteeringAnimation', 'SetInterestIkEnabled', 'AimActor', 'WarpToActor', 'ResetAim', 'WarpToDefaultPosition', 'EnableAutoMovement', 'SetAutoAimEnable', 'MoveToLocation', 'Deactivate', 'Activate']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'AimActor', 'WarpToActor', 'SetVisibility', 'MoveToTargetLinkedPoint', 'MoveToBesideTargetActor', 'AimPlayer', 'PlayAnimation', 'AimActorLinkedPoint', 'PlayAnimationNoWait', 'SetInterestIkEnabled', 'AimToLocation', 'AimCompassPoint', 'MoveToCompassPoint', 'GenericTalkSequence', 'WarpToActorWithCompassPoint', 'ResetAim']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'PlayActorOriginCameraAnimation', 'LookAt3ActorsCenterAsTalker', 'Reset', 'MoveToWithTimeout']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['WarpToActor', 'MoveToCompassPoint', 'AimActor', 'SetVisibility', 'AimActorLinkedPoint', 'SetInterestIkEnabled', 'SetFacialExpression', 'MorphEnd', 'AddItemAndGenericItemGetSequence', 'LookAtTalker', 'AimToLocation', 'ResetAim', 'MoveToLocation']
queries: ['CheckMorph']
params: None

Actor: Audio
entrypoint: None()
actions: ['StopZoneBgm', 'StopRegionBgm', 'PlayZoneBGM', 'StopAllBGM', 'PlayBGM', 'PlayOneshotSystemSE', 'MuteOffBGM', 'MuteOnBGM']
queries: []
params: None

Actor: GerudoAide000[fake]
entrypoint: None()
actions: ['MoveToBesideTargetActor', 'ResetAim', 'AimCompassPoint', 'MoveToCompassPoint', 'PlayAnimation', 'AimPlayer', 'AimActor', 'Talk', 'PlayAnimationNoWait', 'SetInterestIkEnabled', 'StopTailorOtherChannel', 'Deactivate', 'PlayTailorOtherChannelNoWait', 'Activate', 'WarpToActorLinkedPoint', 'PlayMaterialAnimationNoWait', 'PlayAnimationEx', 'SetTalkerName']
queries: []
params: None

Actor: GerudoAide000[true]
entrypoint: None()
actions: ['WarpToActor', 'ResetAim', 'AimActor', 'SetInterestIkEnabled', 'PlayAnimation', 'Talk', 'AimCompassPoint', 'SetTalkerName', 'ResetFacialExpression', 'SetFacialExpression', 'Activate', 'LookAtTalker', 'MoveToTargetLinkedPoint', 'PlayAnimationNoWait', 'Deactivate']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: ['LookAtGimmicksLinkedPoint']
queries: []
params: None

Actor: GerudoSoldier012
entrypoint: None()
actions: ['Destroy', 'PlayAnimationNoWait', 'Talk', 'Activate']
queries: []
params: None

Actor: GerudoSoldier013
entrypoint: None()
actions: ['AimActor', 'ResetFacialExpression', 'SetFacialExpression', 'AimToInitialAngle', 'Activate', 'Talk']
queries: []
params: None

Actor: GerudoSoldier014
entrypoint: None()
actions: ['PlayAnimationNoWait', 'ResetFacialExpression', 'SetFacialExpression', 'ResetAim', 'PlayAnimation', 'AimActor', 'AimPlayer', 'SetInterestIkEnabled', 'AimToInitialAngle', 'Activate', 'Talk']
queries: []
params: None

Actor: GerudoSoldier017
entrypoint: None()
actions: ['Talk', 'Destroy', 'PlayAnimationNoWait', 'SetInterestIkEnabled', 'AimActor', 'AimDegreeAngle', 'Activate', 'ResetFacialExpression', 'SetFacialExpression', 'ResetAim', 'PlayAnimation', 'WarpToActorLinkedPoint', 'AimPlayer', 'Deactivate']
queries: []
params: None

Actor: GerudoSoldier018
entrypoint: None()
actions: ['Talk', 'Destroy', 'AimActor', 'SetInterestIkEnabled', 'PlayAnimationNoWait', 'AimDegreeAngle', 'Activate', 'ResetFacialExpression', 'SetFacialExpression', 'ResetAim', 'WarpToActorLinkedPoint', 'PlayAnimation', 'AimPlayer', 'Deactivate']
queries: []
params: None

Actor: GerudoSoldier019
entrypoint: None()
actions: ['Talk', 'SetInterestIkEnabled', 'AimActor', 'AimDegreeAngle', 'PlayAnimationNoWait', 'ResetFacialExpression', 'SetFacialExpression', 'ResetAim', 'PlayAnimation', 'AimPlayer', 'WarpToActorLinkedPoint', 'Deactivate']
queries: []
params: None

Actor: TecuumFly
entrypoint: None()
actions: ['PlayAnimationNoWait', 'Activate', 'StopFindTarget']
queries: []
params: None

Actor: LocationInfoUI
entrypoint: None()
actions: ['PreloadArchive', 'Show', 'Hide']
queries: []
params: None

Actor: TecuumFly[TecuumFly1]
entrypoint: None()
actions: ['Activate', 'PlayAnimationNoWait', 'StopFindTarget']
queries: []
params: None

Actor: TecuumFly[TecuumFly2]
entrypoint: None()
actions: ['Activate', 'PlayAnimationNoWait', 'StopFindTarget']
queries: []
params: None

Actor: GerudoSoldier004
entrypoint: None()
actions: ['Talk', 'GenericTalkSequenceWithDialog', 'AimActor', 'PlayAnimationNoWait', 'SetInterestIkEnabled']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['Yield_']
queries: []
params: None

Actor: GerudoSoldier023
entrypoint: None()
actions: ['Talk', 'Deactivate', 'AimActor', 'PlayAnimationNoWait', 'Activate', 'WarpToActor', 'MoveToBesideTargetActor', 'SetInterestIkEnabled']
queries: []
params: None

Actor: GerudoSoldier006
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog']
queries: []
params: None

Actor: GerudoSoldier007
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'AimActor']
queries: []
params: None

Actor: GerudoSoldier008
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait']
queries: []
params: None

Actor: Environment
entrypoint: None()
actions: ['ChangeWeather']
queries: []
params: None

Actor: GerudoSoldier024
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'AimPlayer']
queries: []
params: None

Actor: GerudoSoldier026
entrypoint: None()
actions: ['Talk', 'Destroy', 'PlayAnimationNoWait', 'Deactivate', 'PlayAnimation', 'AimPlayer', 'SetInterestIkEnabled', 'SetFacialExpression', 'AimActor', 'Activate', 'ResetAim', 'ResetFacialExpression', 'AimDegreeAngle', 'WarpToActorLinkedPoint']
queries: []
params: None

Actor: GerudoSoldier027
entrypoint: None()
actions: ['Talk', 'Destroy', 'PlayAnimationNoWait', 'Deactivate', 'PlayAnimation', 'AimPlayer', 'SetFacialExpression', 'SetInterestIkEnabled', 'AimActor', 'Activate', 'ResetAim', 'ResetFacialExpression', 'AimDegreeAngle', 'WarpToActorLinkedPoint']
queries: []
params: None

Actor: GerudoSoldier010
entrypoint: None()
actions: ['Deactivate']
queries: []
params: None

Actor: Movie
entrypoint: None()
actions: ['Play', 'Close', 'Prepare']
queries: []
params: None

Actor: TagEventSwitch
entrypoint: None()
actions: []
queries: []
params: None

Actor: AreaStartTag
entrypoint: None()
actions: []
queries: []
params: None

void DesertOverview() {

    call EvResetCommon.AllReset()

    EventFlags.SetFlag({'symbol': 'EvD_Overview', 'value': True})

    fork {
        Timer.Wait({'time': 0.5})
    } {
        LocationInfoUI.PreloadArchive()
    }


    fork {
        Camera.MoveToWithTimeout({'targetPositionY': 0.0, 'timeout': 3.0, 'targetPositionX': 108.0, 'targetPositionZ': 406.0, 'maxSpeed': 2.0, 'chaseRatio': 0.07999999821186066})
    } {
        Movie.Prepare({'filename': 'rd019_DesertOverview'})
    } {
        GameControl.ForbidLaunchApplet()
    }


    fork {
        Movie.Play({'autoClose': False})
    } {
        Partner[companion].AimToLocation({'location': 'ViewFieldDesert03_cam', 'duration': 0.6000000238418579, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Player.AimToLocation({'location': 'ViewFieldDesert03_cam', 'duration': 0.6000000238418579, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.0})
        LocationInfoUI.Show({'message': 'glossary/Location:Field_004', 'eventMessage': 'ui/LocationInfo:LocationInfo_Field_Desert'})
        Timer.Wait({'time': 5.0})
        LocationInfoUI.Hide()
    }


    fork {
        Movie.Close()
    } {
        Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})
    } {
        GameControl.UnforbidLaunchApplet()
    }

    Timer.Wait({'time': 1.0})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'chaseRatio': 0.10000000149011612, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.30000001192092896})

    call GeneralSequence.Look_at_Partner()

    Timer.Wait({'time': 0.30000001192092896})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaD:DesertOverview_010', 'keepPersonalSpace': False, 'aimToPlayer': False, 'aimFromPlayer': False, 'playerTalkAnim': False, 'cameraLookAt': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    QuestSystem.SetProgress({'symbol': 'Desert:2205786242', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void FindDaughter() {

    call EvResetCommon.AllReset()


    fork {
        GameControl.ResetSensorEventResetContainsActors({'eventReset': False, 'cemeteryRevive': False})
    } {
        GerudoChiefsDaughter.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    }


    fork {
        TecuumFly.PlayAnimationNoWait({'name': 'appear', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        TecuumFly.StopFindTarget()
        TecuumFly.Activate()
    }

    Timer.Wait({'time': 1.5})
    Partner.Talk({'message': 'scenario/StoryAreaD:FindDaughter_010', 'getAttention': False})
    Timer.Wait({'time': 0.5})
    GerudoChiefsDaughter.SetInstanceVariableString({'name': 'idleAnime', 'value': 'ev_down_lp'})
    QuestSystem.SetProgress({'symbol': 'Desert:2501589789', 'isShowTelopInEvent': False, 'isFrontFade': False})
    QuestSystem.SetProgress({'symbol': 'QuestIcon_Desert:3582759495', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'FindDaughter'})
}

void MeetDaughter() {

    call EvResetCommon.AllReset()

    GerudoChiefsDaughter.SetTalkerName({'message': 'glossary/Character:Unknown', 'keep': False})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    GameControl.ResetSensorEventResetContainsActors({'eventReset': False, 'cemeteryRevive': False})
    GerudoChiefsDaughter.SetInterestIkEnabled({'enable': False})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'ev_down_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.WarpToActor({'offsetX': -3.0, 'distance': -2.0, 'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'offsetY': 0.0})
    Partner[companion].WarpToActor({'offsetY': 1.5, 'offsetX': -3.5, 'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'distance': -3.0})

    fork {
        Zelda.AimActor({'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    FlowControl.Yield_()
    Camera.LookAt2ActorsCenterAsTalker({'chaseRatio': 1.0, 'duration': 0.10000000149011612, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="GerudoChiefsDaughter"), 'distanceOffset': -2.5, 'weight1': 1.0, 'weight2': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'ev_down_ed', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MeetDaughter_010', 'getAttention': False})
    } {
        GerudoChiefsDaughter.SetFacialExpression({'expression': 'surprise'})
    }

    GerudoChiefsDaughter.SetFacialExpression({'expression': 'normal'})
    Timer.Wait({'time': 1.5})
    GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})
    GerudoChiefsDaughter.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MeetDaughter_020', 'getAttention': False})
    GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    call GeneralSequence.ZeldaTalkMotion()

    GerudoChiefsDaughter.SetFacialExpression({'expression': 'smile'})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MeetDaughter_030', 'getAttention': False})
    GerudoChiefsDaughter.PlayAnimation({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MeetDaughter_035', 'getAttention': False})
    GerudoChiefsDaughter.SetTalkerName({'message': 'glossary/Character:GerudoChiefsDaughter', 'keep': False})

    fork {
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MeetDaughter_035_02', 'getAttention': False})
    } {
        GerudoChiefsDaughter.SetTalkerName({'message': 'glossary/Character:GerudoChiefsDaughter', 'keep': False})
    }

    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MeetDaughter_035_03', 'getAttention': False})
    GerudoChiefsDaughter.SetFacialExpression({'expression': 'normal'})
    GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    call GeneralSequence.ZeldaTalkMotion()

    GerudoChiefsDaughter.SetTalkerName({'message': 'glossary/Character:GerudoChiefsDaughter', 'keep': False})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MeetDaughter_040', 'getAttention': False})
    GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    call GeneralSequence.ZeldaTalkMotion()

    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MeetDaughter_050', 'getAttention': False})
    GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.5})
    GerudoChiefsDaughter.SetFacialExpression({'expression': 'surprise'})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MeetDaughter_060', 'getAttention': False})
    GerudoChiefsDaughter.SetFacialExpression({'expression': 'normal'})
    GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.SetFacialExpression({'expression': 'sad'})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MeetDaughter_070', 'getAttention': False})
    GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MeetDaughter_080', 'getAttention': False})
    GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MeetDaughter_090', 'getAttention': False})
    GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Timer.Wait({'time': 1.0})
        Zelda.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].Talk({'message': 'scenario/StoryAreaD:MeetDaughter_100', 'getAttention': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.SetFacialExpression({'expression': 'normal'})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MeetDaughter_110', 'getAttention': False})
    GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    call GeneralSequence.ZeldaTalkMotion()

    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MeetDaughter_120', 'getAttention': False})
    GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.SetFacialExpression({'expression': 'sad'})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MeetDaughter_Q1', 'getAttention': False})
    GerudoChiefsDaughter.SetFacialExpression({'expression': 'normal'})
    GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Event214:
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MeetDaughter_Q5', 'getAttention': False})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 2}) {
      case 0:
        GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MeetDaughter_Q1_A1_010', 'getAttention': False})
        GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        goto Event214
      case 1:
        GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MeetDaughter_Q1_A2_010', 'getAttention': False})
        GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        goto Event214
      case 2:
        GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MeetDaughter_130', 'getAttention': False})
        GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        call GeneralSequence.ZeldaTalkMotion()

        GerudoChiefsDaughter.PlayAnimationEx({'name': 'think', 'time': 0.0, 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MeetDaughter_140', 'getAttention': False})
        GerudoChiefsDaughter.PlayAnimation({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:MeetDaughter_150', 'getAttention': False})

        fork {
            GerudoChiefsDaughter.SetFacialExpression({'expression': 'smile'})
        } {
            GerudoChiefsDaughter.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Timer.Wait({'time': 0.20000000298023224})
        GerudoChiefsDaughter.SetFacialExpression({'expression': 'normal'})
        GerudoChiefsDaughter.MoveToCompassPoint({'speed': 1, 'direction': 1, 'distance': 8.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        GerudoChiefsDaughter.Deactivate()
        QuestSystem.SetProgress({'symbol': 'Desert:3008826567', 'isShowTelopInEvent': False, 'isFrontFade': False})
    }
}

void FakeGerudoAide() {

    call EvResetCommon.AllReset()


    fork {
        GerudoChief.SetInterestIkEnabled({'enable': False})
        GerudoChief.Activate()
        GerudoChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GerudoChief.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoChiefsDaughter.SetInterestIkEnabled({'enable': False})
        GerudoChiefsDaughter.Activate()
        GerudoChiefsDaughter.AimActor({'actor': ActorIdentifier(name="GerudoAide000", sub_name="fake"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GerudoChiefsDaughter.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoSoldier013.Activate()
    } {
        GerudoSoldier014.Activate()
        GerudoSoldier014.PlayAnimation({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoSoldier017.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="AreaStartTag"), 'index': 4, 'offsetY': 0.0})
        GerudoSoldier017.PlayAnimation({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoSoldier017.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GerudoSoldier017.SetInterestIkEnabled({'enable': False})
    } {
        GerudoSoldier018.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="AreaStartTag"), 'index': 5, 'offsetY': 0.0})
        GerudoSoldier018.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier019.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="AreaStartTag"), 'index': 6, 'offsetY': 0.0})
        GerudoSoldier019.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        GerudoSoldier026.Activate()
        GerudoSoldier026.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="AreaStartTag"), 'index': 7, 'offsetY': 0.0})
        GerudoSoldier026.AimDegreeAngle({'angle': 20.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        GerudoSoldier026.SetInterestIkEnabled({'enable': True})
        GerudoSoldier026.PlayAnimation({'name': 'hurt02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoSoldier026.ResetAim()
    } {
        GerudoSoldier027.Activate()
        GerudoSoldier027.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="AreaStartTag"), 'index': 8, 'offsetY': 0.0})
        GerudoSoldier027.AimDegreeAngle({'angle': -70.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        GerudoSoldier027.SetInterestIkEnabled({'enable': True})
        GerudoSoldier027.PlayAnimation({'name': 'hurt02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoSoldier027.ResetAim()
    }


    fork {
        GerudoAide000[true].SetInterestIkEnabled({'enable': False})
        GerudoAide000[true].Activate()
        GerudoAide000[true].PlayAnimation({'name': 'ev_down_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoAide000[true].SetFacialExpression({'expression': 'sleep'})
        GerudoAide000[true].SetTalkerName({'message': 'glossary/Character:Unknown', 'keep': False})
    } {
        GerudoAide000[fake].SetInterestIkEnabled({'enable': False})
        GerudoAide000[fake].Activate()
        GerudoAide000[fake].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoAide000[fake].AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GerudoAide000[fake].WarpToActorLinkedPoint({'index': 2, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetY': 0.0})
    }


    fork {
        Timer.Wait({'time': 1.2999999523162842})

        fork {
            Timer.Wait({'time': 0.30000001192092896})
            GerudoChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            GerudoChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Timer.Wait({'time': 0.800000011920929})
            GerudoChief.SetFacialExpression({'expression': 'surprise'})
            GerudoChief.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            GerudoChiefsDaughter.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Timer.Wait({'time': 1.0})
            GerudoChiefsDaughter.SetFacialExpression({'expression': 'surprise'})
            GerudoChiefsDaughter.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GerudoAide000[fake].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            GerudoAide000[fake].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            GerudoAide000[fake].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            GerudoSoldier027.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 1.5})
            GerudoSoldier017.SetInterestIkEnabled({'enable': True})
            GerudoSoldier017.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            GerudoSoldier017.PlayAnimation({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 1.600000023841858})
            GerudoSoldier018.SetInterestIkEnabled({'enable': True})
            GerudoSoldier018.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            GerudoSoldier018.PlayAnimation({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 1.649999976158142})
            GerudoSoldier014.SetInterestIkEnabled({'enable': True})
            GerudoSoldier014.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            GerudoSoldier014.PlayAnimation({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 1.649999976158142})
            GerudoSoldier019.SetInterestIkEnabled({'enable': True})
            GerudoSoldier019.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            GerudoSoldier019.PlayAnimation({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } {

        call GeneralSequence.EvMapWarpIn()

    }

    Partner[companion].MoveToBesideTargetActor({'customSpeed': 10.0, 'withoutTurn': True, 'offsetY': 1.2000000476837158, 'offsetX': -0.5, 'offsetZ': -0.5, 'actor': ActorIdentifier(name="Zelda"), 'speed': 1, 'tolerance': 0.0, 'timeOut': 7.0, 'method': 0})
    Partner.SetInterestIkEnabled({'enable': True})
    Player.SetInterestIkEnabled({'enable': True})
    Timer.Wait({'time': 0.10000000149011612})
    Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 2.0, 'offsetX': 0.0, 'actor1': ActorIdentifier(name="GerudoChief"), 'actor2': ActorIdentifier(name="GerudoChiefsDaughter"), 'offsetZ': 1.0, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetY': 0.0})

    fork {
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_005', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Player.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': -4.0, 'actor1': ActorIdentifier(name="GerudoSoldier014"), 'actor2': ActorIdentifier(name="GerudoSoldier013"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        GerudoSoldier013.Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_010', 'getAttention': False})
    } {
        GerudoSoldier014.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.699999988079071})
        GerudoSoldier014.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GerudoSoldier013"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        GerudoSoldier014.ResetAim()
        GerudoSoldier014.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoSoldier014.Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_020', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        GerudoSoldier013.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier026"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        GerudoSoldier026.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier013"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoSoldier014.PlayAnimation({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier014.SetInterestIkEnabled({'enable': False})
    Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 2.0, 'offsetX': 0.0, 'actor1': ActorIdentifier(name="GerudoChief"), 'actor2': ActorIdentifier(name="GerudoChiefsDaughter"), 'offsetZ': 1.0, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetY': 0.0})

    fork {
        GerudoChief.Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_030', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Player.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_040', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Player.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        GerudoChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoChief.SetInterestIkEnabled({'enable': True})
    } {
        GerudoChiefsDaughter.ResetFacialExpression()
        GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoSoldier017.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoChief.ResetFacialExpression()
    } {
        GerudoSoldier018.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': -1.0, 'actor2': ActorIdentifier(name="GerudoSoldier018"), 'actor1': ActorIdentifier(name="Zelda"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        GerudoSoldier019.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GerudoSoldier017.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoSoldier017.Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_050', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Player.AimActor({'actor': ActorIdentifier(name="GerudoSoldier017"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner.AimActor({'actor': ActorIdentifier(name="GerudoSoldier017"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoSoldier017.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier018.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier018.Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_060', 'getAttention': False})
    Audio.StopRegionBgm({'fadeSec': 2.0})
    GerudoSoldier018.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 7.0, 'weight2': 5.0, 'offsetZ': -1.5, 'actor1': ActorIdentifier(name="GerudoChief"), 'actor2': ActorIdentifier(name="GerudoAide000", sub_name="fake"), 'offsetY': -1.0, 'weight1': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0})
        GerudoAide000[fake].MoveToCompassPoint({'direction': 0, 'speed': 0, 'withoutTurn': False, 'distance': 1.5, 'customSpeed': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {

        fork {
            Timer.Wait({'time': 0.699999988079071})
            GerudoSoldier019.AimActor({'actor': ActorIdentifier(name="GerudoAide000", sub_name="fake"), 'duration': 0.30000001192092896, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.5})
            GerudoSoldier027.AimActor({'duration': 0.30000001192092896, 'actor': ActorIdentifier(name="GerudoAide000", sub_name="fake"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.6000000238418579})
            GerudoSoldier013.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoAide000", sub_name="fake"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        fork {
            Timer.Wait({'time': 0.20000000298023224})
            GerudoSoldier019.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            GerudoSoldier019.Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_070', 'getAttention': False})
            GerudoSoldier019.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 0.699999988079071})

            fork {
                GerudoChief.AimActor({'actor': ActorIdentifier(name="GerudoAide000", sub_name="fake"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.07999999821186066})
                GerudoChiefsDaughter.AimActor({'actor': ActorIdentifier(name="GerudoAide000", sub_name="fake"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.15000000596046448})
                Player.AimActor({'actor': ActorIdentifier(name="GerudoAide000", sub_name="fake"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.4000000059604645})
                GerudoSoldier017.AimActor({'actor': ActorIdentifier(name="GerudoAide000", sub_name="fake"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.30000001192092896})
                GerudoSoldier014.SetInterestIkEnabled({'enable': True})
                GerudoSoldier014.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                GerudoSoldier014.AimActor({'actor': ActorIdentifier(name="GerudoAide000", sub_name="fake"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.15000000596046448})
                Partner.AimActor({'actor': ActorIdentifier(name="GerudoAide000", sub_name="fake"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.25})
                GerudoSoldier018.AimActor({'actor': ActorIdentifier(name="GerudoAide000", sub_name="fake"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.4000000059604645})
                GerudoSoldier026.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoAide000", sub_name="fake"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }

        }

    }

    GerudoAide000[fake].AimActor({'actor': ActorIdentifier(name="GerudoSoldier019"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoAide000[fake].ResetAim()
    GerudoAide000[fake].PlayAnimationEx({'name': 'sad', 'time': 0.699999988079071, 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoAide000[fake].Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_080', 'getAttention': True})
    Timer.Wait({'time': 1.0})
    GerudoAide000[true].LookAtTalker({'keep': True, 'distanceOffset': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    GerudoAide000[fake].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoAide000[true].Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_090', 'getAttention': False})
    Timer.Wait({'time': 1.0})
    GerudoAide000[true].ResetFacialExpression()
    GerudoAide000[true].PlayAnimation({'name': 'ev_down_ed,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    GerudoAide000[true].SetInterestIkEnabled({'enable': True})
    GerudoAide000[true].ResetAim()
    GerudoAide000[true].AimCompassPoint({'direction': 1, 'withoutTurn': True, 'duration': 0.6000000238418579, 'immediateTurn': False})
    Timer.Wait({'time': 0.4000000059604645})
    GerudoAide000[true].AimCompassPoint({'direction': 3, 'withoutTurn': True, 'duration': 0.6000000238418579, 'immediateTurn': False})
    Timer.Wait({'time': 0.4000000059604645})
    GerudoAide000[true].ResetAim()
    GerudoAide000[true].SetTalkerName({'message': 'glossary/Character:GerudoAide000', 'keep': False})
    GerudoAide000[true].SetFacialExpression({'expression': 'angry'})
    GerudoAide000[true].PlayAnimation({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.800000011920929})
    GerudoAide000[true].Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_100', 'getAttention': False})
    Audio.PlayBGM({'ignoreSkip': False, 'label': 'BGM_EV_COMMON2', 'volume': 1.0})

    fork {
        Timer.Wait({'time': 1.2000000476837158})
        GerudoChief.AimActor({'actor': ActorIdentifier(name="GerudoAide000", sub_name="true"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.4000000059604645})
        GerudoChief.ResetAim()
        GerudoChief.PlayAnimationNoWait({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoAide000[true].ResetFacialExpression()
        GerudoAide000[true].MoveToTargetLinkedPoint({'speed': 0, 'index': 3, 'actor': ActorIdentifier(name="AreaStartTag"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 1.100000023841858})
        GerudoAide000[true].AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoAide000[true].AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoAide000[true].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoAide000[true].SetInterestIkEnabled({'enable': True})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 7.0, 'actor1': ActorIdentifier(name="GerudoAide000", sub_name="fake"), 'actor2': ActorIdentifier(name="GerudoAide000", sub_name="true"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        GerudoChief.Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_110', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.699999988079071})

        fork {
            GerudoChiefsDaughter.AimActor({'actor': ActorIdentifier(name="GerudoAide000", sub_name="true"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            GerudoSoldier013.AimActor({'actor': ActorIdentifier(name="GerudoAide000", sub_name="true"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            GerudoSoldier017.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GerudoAide000", sub_name="true"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            GerudoSoldier026.AimActor({'actor': ActorIdentifier(name="GerudoAide000", sub_name="true"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            GerudoSoldier018.AimActor({'actor': ActorIdentifier(name="GerudoAide000", sub_name="true"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            GerudoSoldier014.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GerudoAide000", sub_name="true"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            GerudoAide000[fake].AimActor({'actor': ActorIdentifier(name="GerudoAide000", sub_name="true"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            GerudoSoldier027.AimActor({'actor': ActorIdentifier(name="GerudoAide000", sub_name="true"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner.AimActor({'actor': ActorIdentifier(name="GerudoAide000", sub_name="true"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            GerudoSoldier019.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GerudoAide000", sub_name="true"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Player.AimActor({'actor': ActorIdentifier(name="GerudoAide000", sub_name="true"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'SE_EV_PD110_MVNT1', 'volume': 1.0, 'pitch': 1.0})
        }

    }

    GerudoChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.SetInterestIkEnabled({'enable': True})
    Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 7.0, 'actor1': ActorIdentifier(name="GerudoAide000", sub_name="fake"), 'actor2': ActorIdentifier(name="GerudoAide000", sub_name="true"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    GerudoChiefsDaughter.SetInterestIkEnabled({'enable': False})
    GerudoChiefsDaughter.ResetAim()

    fork {
        GerudoChiefsDaughter.AimActor({'withoutTurn': False, 'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="GerudoAide000", sub_name="fake"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_PD110_MVNT1_2', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 1.0})
    GerudoChiefsDaughter.ResetAim()
    GerudoChiefsDaughter.AimActor({'withoutTurn': False, 'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="GerudoAide000", sub_name="true"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoChiefsDaughter.ResetAim()
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.699999988079071})

    fork {
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_120', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.5})
        GerudoAide000[fake].PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.SetInterestIkEnabled({'enable': True})
    Camera.LookAt2ActorsCenterAsTalker({'offsetZ': 1.0, 'actor1': ActorIdentifier(name="GerudoAide000", sub_name="true"), 'actor2': ActorIdentifier(name="GerudoChief"), 'distanceOffset': 1.0, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0})
    GerudoAide000[true].AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    GerudoAide000[true].ResetAim()
    GerudoAide000[true].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoAide000[true].Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_130', 'getAttention': True})
    } {
        Timer.Wait({'time': 0.699999988079071})
        GerudoAide000[fake].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoAide000[true].AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GerudoAide000[true].ResetAim()
    }

    GerudoAide000[true].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_140', 'getAttention': False})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoAide000[true].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoAide000[true].Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_150', 'getAttention': True})
    GerudoAide000[true].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    GerudoAide000[true].PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    GerudoAide000[true].Talk({'getAttention': True, 'message': 'scenario/StoryAreaD:FakeGerudoAide_150_02'})
    Timer.Wait({'time': 0.6000000238418579})

    fork {
        GerudoChief.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoChief.Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_160', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.699999988079071})
        GerudoAide000[true].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoAide000[true].AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoChief.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    }

    Timer.Wait({'time': 1.2999999523162842})
    GerudoChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoChief.AimActor({'actor': ActorIdentifier(name="GerudoAide000", sub_name="fake"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'weight2': 5.0, 'distanceOffset': 6.0, 'offsetX': 0.0, 'actor1': ActorIdentifier(name="GerudoChief"), 'actor2': ActorIdentifier(name="GerudoAide000", sub_name="fake"), 'offsetZ': -2.799999952316284, 'weight1': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetY': 0.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_PD110_MVNT2', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 0.6000000238418579})

    fork {
        GerudoChiefsDaughter.AimActor({'actor': ActorIdentifier(name="GerudoAide000", sub_name="fake"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GerudoChiefsDaughter.ResetAim()
    } {
        Player.AimActor({'actor': ActorIdentifier(name="GerudoAide000", sub_name="fake"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier017.AimActor({'actor': ActorIdentifier(name="GerudoAide000", sub_name="fake"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GerudoSoldier017.ResetAim()
    } {
        GerudoSoldier018.AimActor({'actor': ActorIdentifier(name="GerudoAide000", sub_name="fake"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GerudoSoldier018.ResetAim()
    } {
        GerudoAide000[fake].AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GerudoAide000[fake].ResetAim()
    } {
        GerudoSoldier019.AimActor({'actor': ActorIdentifier(name="GerudoAide000", sub_name="fake"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GerudoSoldier019.ResetAim()
    } {
        GerudoSoldier014.AimActor({'actor': ActorIdentifier(name="GerudoAide000", sub_name="fake"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GerudoSoldier014.ResetAim()
    } {
        Partner.AimActor({'actor': ActorIdentifier(name="GerudoAide000", sub_name="fake"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier026.AimActor({'actor': ActorIdentifier(name="GerudoAide000", sub_name="fake"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier027.AimActor({'actor': ActorIdentifier(name="GerudoAide000", sub_name="fake"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.699999988079071})
    GerudoAide000[fake].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoAide000[fake].Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_170', 'getAttention': True})

    fork {
        GerudoAide000[fake].Talk({'getAttention': True, 'message': 'scenario/StoryAreaD:FakeGerudoAide_170_02'})
    } {
        GerudoAide000[true].AimActor({'actor': ActorIdentifier(name="GerudoAide000", sub_name="fake"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.699999988079071})
        GerudoAide000[true].PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GerudoAide000[fake].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoAide000[fake].SetTalkerName({'message': 'glossary/Character:GerudoAide000', 'keep': False})
    GerudoChief.ResetAim()
    GerudoChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoChief.Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_180', 'getAttention': True})
    } {
        Timer.Wait({'time': 0.699999988079071})
        GerudoAide000[fake].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.5})
        GerudoAide000[true].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GerudoChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoAide000[fake].PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoAide000[fake].Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_190', 'getAttention': True})
    } {
        Timer.Wait({'time': 0.5})
        GerudoAide000[fake].PlayMaterialAnimationNoWait({'name': 'imposter', 'layer': 0})
        GerudoAide000[fake].PlayTailorOtherChannelNoWait({'channel': 'Aura_Normal', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    }

    GerudoAide000[fake].MoveToBesideTargetActor({'withoutTurn': True, 'speed': 0, 'customSpeed': 1.0, 'actor': ActorIdentifier(name="GerudoAide000", sub_name="fake"), 'offsetZ': 0.30000001192092896, 'offsetX': 0.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'method': 0})
    GerudoChief.SetFacialExpression({'expression': 'angry'})
    GerudoChief.PlayAnimationNoWait({'name': 'angry_st,angry_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChief.Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_200', 'getAttention': False})

    fork {
        Timer.Wait({'time': 0.25})
        GerudoChief.MoveToBesideTargetActor({'speed': 1, 'customSpeed': 14.0, 'actor': ActorIdentifier(name="GerudoAide000", sub_name="fake"), 'offsetZ': -1.100000023841858, 'offsetX': 0.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0})
        GerudoChief.PlayAnimation({'name': 'ev_attack,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        GerudoAide000[fake].AimCompassPoint({'direction': 0, 'withoutTurn': False, 'duration': 0.25, 'immediateTurn': False})
        GerudoAide000[fake].MoveToCompassPoint({'speed': 1, 'withoutTurn': False, 'customSpeed': 0.0, 'direction': 0, 'distance': 1.7999999523162842, 'tolerance': 0.0, 'timeOut': 7.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})

        fork {

            fork {

                call Dissolve.Dissolve({'actor': ActorIdentifier(name="GerudoAide000", sub_name="fake")})

                GerudoAide000[fake].StopTailorOtherChannel({'channel': 'Aura_Normal', 'index': -1})
                GerudoAide000[fake].PlayTailorOtherChannelNoWait({'channel': 'Vanish', 'restart': False, 'index': -1, 'stopOnSkipped': True})
                Audio.StopAllBGM({'duration': 2.700000047683716})
            } {
                GerudoAide000[fake].PlayAnimation({'name': 'ev_dead', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

            Timer.Wait({'time': 2.700000047683716})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_GERUDO_CHIEF_008_3', 'volume': 1.0, 'pitch': 1.0})
        }

    }


    fork {
        GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoChiefsDaughter.SetFacialExpression({'expression': 'surprise'})
    } {
        GerudoSoldier017.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoSoldier017.SetFacialExpression({'expression': 'surprise'})
    } {
        GerudoSoldier018.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoSoldier018.SetFacialExpression({'expression': 'surprise'})
    } {
        GerudoSoldier019.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoSoldier019.SetFacialExpression({'expression': 'surprise'})
    } {
        GerudoSoldier014.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoSoldier014.SetFacialExpression({'expression': 'surprise'})
    } {
        GerudoSoldier013.SetFacialExpression({'expression': 'surprise'})
    } {
        GerudoSoldier026.SetFacialExpression({'expression': 'surprise'})
    } {
        GerudoSoldier027.SetFacialExpression({'expression': 'surprise'})
    } {
        Partner.ResetAim()
        Partner.PlayAnimationNoWait({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 1.7999999523162842})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_210', 'getAttention': False})
    GerudoSoldier017.Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_220', 'getAttention': False})
    Partner.SetAutoAimEnable({'enable': True})
    GerudoChief.ResetFacialExpression()
    GerudoChief.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChief.Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_230', 'getAttention': False})

    fork {
        GerudoChiefsDaughter.ResetFacialExpression()
    } {
        GerudoSoldier017.ResetFacialExpression()
    } {
        GerudoSoldier018.ResetFacialExpression()
    } {
        GerudoSoldier019.ResetFacialExpression()
    } {
        GerudoSoldier014.ResetFacialExpression()
    } {
        GerudoSoldier013.ResetFacialExpression()
    } {
        GerudoSoldier026.ResetFacialExpression()
    } {
        GerudoSoldier027.ResetFacialExpression()
    }


    fork {
        Timer.Wait({'time': 0.30000001192092896})
        GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoSoldier017.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoSoldier017.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        GerudoSoldier018.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoSoldier018.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        GerudoSoldier019.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoSoldier019.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        GerudoSoldier014.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoSoldier014.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GerudoChief.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoChief.ResetAim()
    GerudoChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChief.Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_240', 'getAttention': True})
    GerudoChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoSoldier017.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier018.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoAide000[true].AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoChiefsDaughter.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoChiefsDaughter.ResetAim()
    GerudoSoldier017.SetInterestIkEnabled({'enable': True})

    fork {
        GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_250', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        GerudoSoldier017.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        GerudoSoldier018.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        GerudoSoldier019.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChief.AimActor({'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoChief.ResetAim()

    fork {
        GerudoChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoChief.Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_260', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        GerudoSoldier017.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        GerudoSoldier018.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        GerudoSoldier019.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.6000000238418579})
        GerudoChief.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_270', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        GerudoSoldier017.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        GerudoSoldier018.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        GerudoSoldier019.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoChief.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoChief.ResetAim()
    GerudoChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoChief.Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_280', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        GerudoSoldier017.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        GerudoSoldier018.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        GerudoSoldier019.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoChief.PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChief.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoChief.ResetAim()
    GerudoChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChief.Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_281', 'getAttention': False})
    GerudoChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Audio.PlayZoneBGM({'stopbgm': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_290', 'getAttention': False})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_291', 'getAttention': False})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChief.Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_300', 'getAttention': False})
    GerudoChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChief.AimActor({'actor': ActorIdentifier(name="GerudoSoldier018"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoChief.ResetAim()
    GerudoChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChief.Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_300_02', 'getAttention': False})
    GerudoChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoSoldier017.PlayAnimationNoWait({'name': 'salute,wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoSoldier018.PlayAnimationNoWait({'name': 'salute,wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        GerudoSoldier018.Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_310', 'getAttention': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_GERUDO_001_2_007_7', 'volume': 1.0, 'pitch': 1.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_GERUDO_001_1_007_8', 'volume': 1.0, 'pitch': 1.0})
    }

    Fade.StartPreset({'preset': 'FadeOutNormalB'})

    fork {
        GerudoSoldier018.Deactivate()
        GerudoSoldier017.Deactivate()
    } {
        GerudoChief.MoveToBesideTargetActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'offsetX': -2.200000047683716, 'speed': 0, 'offsetY': 0.0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0})
        GerudoChief.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GerudoChief.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoChiefsDaughter.MoveToBesideTargetActor({'offsetX': 2.0, 'actor': ActorIdentifier(name="Player"), 'offsetZ': 1.0, 'speed': 0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        GerudoChiefsDaughter.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].MoveToBesideTargetActor({'customSpeed': 10.0, 'speed': 0, 'withoutTurn': True, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 1.2000000476837158, 'offsetX': 0.4000000059604645, 'offsetZ': -0.4000000059604645, 'tolerance': 0.0, 'timeOut': 7.0, 'method': 0})
        Partner.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoAide000[true].AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoAide000[true].WarpToActor({'distance': -2.0, 'actor': ActorIdentifier(name="Player"), 'offsetX': -2.0, 'offsetY': 0.0})
    }

    Player.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Player.LookAtTalker({'distanceOffset': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    GerudoChiefsDaughter.ResetAim()
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_320', 'getAttention': False})
    GerudoChief.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoChief.ResetAim()
    GerudoChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoChief.Talk({'message': 'scenario/StoryAreaD:FakeGerudoAide_330', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Player.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        GerudoAide000[true].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Partner.WarpToDefaultPosition({'position': 1, 'avoidWall': False, 'avoidPlayer': False})
    Partner.EnableAutoMovement()

    fork {
        GerudoChief.Deactivate()
        GerudoChiefsDaughter.Deactivate()
        GerudoAide000[true].Deactivate()
    } {
        GerudoSoldier017.Deactivate()
        GerudoAide000[fake].Deactivate()
        GerudoSoldier014.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        GerudoSoldier018.Deactivate()
        GerudoSoldier019.Deactivate()
        GerudoSoldier013.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        GerudoSoldier010.Deactivate()
        GerudoSoldier026.Deactivate()
        GerudoSoldier027.Deactivate()
    }

    QuestSystem.SetProgress({'symbol': 'Desert:2854397981', 'isShowTelopInEvent': False, 'isFrontFade': False})
    Camera.Reset({'resetPlayerCamera': True, 'chaseRatio': 0.10000000149011612})
    Timer.Wait({'time': 3.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
}

void DaughtersDelight() {

    call EvResetCommon.AllResetNowait()

    Audio.StopRegionBgm({'fadeSec': 0.0})
    GerudoChiefsDaughter.Activate()
    GerudoChiefsDaughter.GenericTalkSequence({'playerTalkAnim': False, 'keepPersonalSpace': False, 'selfTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    Zelda.Deactivate()
    Partner.Deactivate()

    fork {
        Fade.StartPreset({'preset': 'FadeInNormal'})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'duration': 0.10000000149011612, 'offsetZ': -1.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="GerudoChiefsDaughter"), 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0})

        fork {
            Zelda.AimCompassPoint({'direction': 0, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
        } {
            Partner[companion].WarpToActorWithCompassPoint({'offsetY': 1.75, 'direction': 0, 'actor': ActorIdentifier(name="Zelda"), 'distance': 0.0, 'offsetX': 0.0})
        }


        fork {
            Zelda.Activate()
            Zelda.PlayAnimationNoWait({'name': 'ev_WarpStart_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner.Activate()
            Partner[companion].PlayAnimationNoWait({'name': 'ev_WarpStart_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            Zelda.SetVisibility({'visible': False})
        } {
            Partner[companion].SetVisibility({'visible': False})
        }


        fork {
            Zelda.PlayTailorOtherChannelNoWait({'channel': 'WarpEnd_00', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            Timer.Wait({'time': 2.5})

            fork {
                Zelda.SetVisibility({'visible': True})
            } {
                Partner[companion].SetVisibility({'visible': True})
            } {
                GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

            Timer.Wait({'time': 0.5})

            fork {
                Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

        } {

            call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

        }

    }

    Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetY': 1.0, 'customSpeed': 10.0, 'offsetZ': 0.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})
    EventVariables.SetVariable({'symbol': 'Desert:1043822324'})
    GerudoChiefsDaughter.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/StoryAreaD:DaughtersDelight_010', 'aimToPlayer': False, 'aimFromPlayer': False, 'cameraLookAt': False, 'selfTalkAnim': False, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Timer.Wait({'time': 0.5})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:DaughtersDelight_010_02', 'getAttention': False})
    } {
        GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.20000000298023224})
    GerudoChiefsDaughter.SetInterestIkEnabled({'enable': False})
    GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:DaughtersDelight_010_03', 'getAttention': False})
    } {
        GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.20000000298023224})
    }

    GerudoChiefsDaughter.SetInterestIkEnabled({'enable': True})
    Timer.Wait({'time': 0.699999988079071})

    fork {
        GerudoChiefsDaughter.SetInterestIkEnabled({'enable': False})
        GerudoChiefsDaughter.MoveToCompassPoint({'distance': 7.0, 'timeOut': 2.5, 'direction': 3, 'speed': 0, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Timer.Wait({'time': 2.0})
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
    } {
        Timer.Wait({'time': 0.5})
        Player.MoveToCompassPoint({'distance': 7.0, 'speed': 0, 'timeOut': 2.5, 'direction': 3, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Timer.Wait({'time': 0.5})
        Partner[companion].MoveToBesideTargetActor({'speed': 0, 'timeOut': 2.5, 'offsetX': -10.0, 'offsetY': 4.5, 'customSpeed': 2.0, 'actor': ActorIdentifier(name="Player"), 'offsetZ': 0.0, 'tolerance': 0.0, 'withoutTurn': False, 'method': 0})
    }

    EventFlags.SetFlag({'value': True, 'symbol': 'EvD_WorldGlobeActivate'})
    GameControl.RequestLevelJump({'locator': 'DesertEnding', 'level': 'Field', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void DesertEnding() {

    call EvResetCommon.AllResetNowait()

    GerudoAide000.Activate()
    GerudoSoldier012.Activate()
    GerudoSoldier026.Activate()
    GerudoSoldier027.Activate()
    GerudoSoldier017.Activate()
    GerudoSoldier018.Activate()
    GerudoChief.Activate()
    GerudoChiefsDaughter.Activate()
    Camera.LookAt2ActorsCenterAsTalker({'duration': 0.10000000149011612, 'actor1': ActorIdentifier(name="GerudoSoldier012"), 'actor2': ActorIdentifier(name="GerudoSoldier026"), 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 1.0})
    GerudoSoldier012.PlayAnimationNoWait({'name': 'laugh', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier026.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    GerudoSoldier012.Talk({'message': 'scenario/StoryAreaD:DesertEnding_010', 'getAttention': False})
    GerudoSoldier012.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier026.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier026.Talk({'message': 'scenario/StoryAreaD:DesertEnding_020', 'getAttention': False})
    GerudoSoldier026.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="GerudoSoldier027"), 'actor2': ActorIdentifier(name="GerudoSoldier017"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    GerudoSoldier027.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier027.Talk({'message': 'scenario/StoryAreaD:DesertEnding_030', 'getAttention': False})
    GerudoSoldier027.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier017.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier017.Talk({'message': 'scenario/StoryAreaD:DesertEnding_040', 'getAttention': False})
    GerudoSoldier018.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Camera.LookAt2ActorsCenterAsTalker({'duration': 1.0, 'actor1': ActorIdentifier(name="GerudoSoldier018"), 'actor2': ActorIdentifier(name="GerudoAide000"), 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    GerudoSoldier018.Talk({'message': 'scenario/StoryAreaD:DesertEnding_050', 'getAttention': False})
    GerudoAide000.SetInterestIkEnabled({'enable': True})
    GerudoAide000.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier018"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoAide000.SetFacialExpression({'expression': 'smile'})
    GerudoAide000.PlayAnimationNoWait({'name': 'laugh', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoAide000.Talk({'message': 'scenario/StoryAreaD:DesertEnding_060', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        GerudoSoldier018.SetInterestIkEnabled({'enable': True})
        GerudoSoldier018.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoAide000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoAide000.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChief.SetFacialExpression({'expression': 'smile'})
    GerudoChief.PlayAnimationNoWait({'name': 'laugh', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.SetInterestIkEnabled({'enable': True})
    Partner[companion].SetInterestIkEnabled({'enable': True})
    Camera.LookAt2ActorsCenterAsTalker({'duration': 1.0, 'actor1': ActorIdentifier(name="GerudoChiefsDaughter"), 'actor2': ActorIdentifier(name="GerudoChief"), 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    GerudoChief.Talk({'message': 'scenario/StoryAreaD:DesertEnding_070', 'getAttention': False})
    GerudoChief.ResetFacialExpression()
    GerudoChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.SetFacialExpression({'expression': 'smile'})
    GerudoChiefsDaughter.AimCompassPoint({'withoutTurn': True, 'direction': 1, 'duration': 0.4000000059604645, 'immediateTurn': False})
    Timer.Wait({'time': 0.10000000149011612})
    GerudoChiefsDaughter.AimCompassPoint({'withoutTurn': True, 'direction': 3, 'duration': 0.4000000059604645, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    GerudoChiefsDaughter.AimCompassPoint({'withoutTurn': True, 'direction': 0, 'duration': 0.4000000059604645, 'immediateTurn': False})
    GerudoChiefsDaughter.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:DesertEnding_080', 'getAttention': False})
    GerudoChiefsDaughter.ResetFacialExpression()
    GerudoChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        GerudoChief.Talk({'message': 'scenario/StoryAreaD:DesertEnding_090', 'getAttention': True})
    } {
        GerudoChiefsDaughter.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:DesertEnding_100', 'getAttention': True})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChief.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoChief.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoChief.Talk({'message': 'scenario/StoryAreaD:DesertEnding_130', 'getAttention': True})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        GerudoChiefsDaughter.AimActor({'actor': ActorIdentifier(name="GerudoChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.PlayAnimation({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:DesertEnding_140', 'getAttention': True})
    GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChief.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChief.Talk({'message': 'scenario/StoryAreaD:DesertEnding_145', 'getAttention': True})
    GerudoChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.SetFacialExpression({'expression': 'smile'})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:DesertEnding_150', 'getAttention': True})
    GerudoChiefsDaughter.ResetFacialExpression()
    GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'getAttention': True, 'message': 'scenario/StoryAreaD:DesertEnding_150_02'})
    GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'getAttention': True, 'message': 'scenario/StoryAreaD:DesertEnding_150_03'})
    GerudoChiefsDaughter.ResetFacialExpression()
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChief.SetInterestIkEnabled({'enable': False})
    GerudoChiefsDaughter.SetInterestIkEnabled({'enable': False})
    GerudoChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoChiefsDaughter.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChief.Talk({'message': 'scenario/StoryAreaD:DesertEnding_220', 'getAttention': True})
    GerudoChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvD_TalkSerum'})
    GerudoAide000.Destroy()
    GerudoChief.Destroy()
    GerudoChiefsDaughter.Destroy()
    GerudoSoldier012.Destroy()
    GerudoSoldier026.Destroy()
    GerudoSoldier027.Destroy()
    GerudoSoldier017.Destroy()
    GerudoSoldier018.Destroy()
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    switch QuestSystem.CheckProgress({'symbol': 'Coast_River:4211698231'}) {
      case 4294967295:
        QuestSystem.SetProgress({'symbol': 'Desert:3205882340', 'isShowTelopInEvent': False, 'isFrontFade': False})
        Player.SetInterestIkEnabled({'enable': False})
        Timer.Wait({'time': 1.0})
        Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 0.0, 'offsetZ': 1.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0})
        Partner[companion].GenericTalkSequence({'playerTalkAnim': False, 'aimFromPlayer': True, 'selfTalkAnim': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'aimToPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        Partner[companion].WarpToActor({'offsetY': 0.5, 'distance': 1.5, 'offsetX': 0.0, 'actor': ActorIdentifier(name="Player")})
        Fade.StartPreset({'preset': 'FadeInNormal'})

        fork {
            Partner[companion].Talk({'message': 'scenario/StoryAreaD:ReturnOfMinisterRight_CoastRiverBefore_010', 'getAttention': False})
        } {
            Partner[companion].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        QuestSystem.SetProgress({'symbol': 'Area3Quest:707934835', 'isShowTelopInEvent': False, 'isFrontFade': False})
      case 0:
        GameControl.RequestLevelJump({'level': 'Field', 'locator': 'EV_Desert_ToMidpoint', 'offsetX': 0.0, 'offsetZ': 0.0})
    }
}

void DesertProblem_C() {
    if !Player.CheckMorph({'morphKind': 0}) {
        Player.MorphEnd()
    }
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    QuestSystem.SetProgress({'symbol': 'Desert_Crack_C:4215343484', 'isShowTelopInEvent': False, 'isFrontFade': False})
    GerudoChiefsDaughter.Activate()
    GerudoChiefsDaughter.WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Area"), 'offsetY': 0.0})

    call EvResetCommon.AllReset()

    Zelda.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="Area"), 'offsetY': 0.0})
    Player.SetInterestIkEnabled({'enable': True})
    Player.AimActor({'actor': ActorIdentifier(name="GerudoSoldier018"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner.AimActor({'actor': ActorIdentifier(name="GerudoSoldier018"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner.WarpToActor({'offsetY': 1.0, 'offsetX': -1.0, 'actor': ActorIdentifier(name="Zelda"), 'distance': 0.5})
    FlowControl.Yield_()
    Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 0.0, 'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="GerudoSoldier019"), 'offsetX': -0.5, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetY': 0.0, 'offsetZ': 0.0})
    GerudoChiefsDaughter.SetInterestIkEnabled({'enable': False})
    Partner[companion].SetInterestIkEnabled({'enable': True})
    GerudoSoldier017.AimDegreeAngle({'duration': 0.0, 'angle': 27.8799991607666, 'withoutTurn': False, 'immediateTurn': False})
    GerudoSoldier018.AimDegreeAngle({'duration': 0.0, 'angle': -45.0, 'withoutTurn': False, 'immediateTurn': False})
    GerudoSoldier019.AimDegreeAngle({'duration': 0.0, 'angle': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    GerudoSoldier017.SetInterestIkEnabled({'enable': False})
    GerudoSoldier018.SetInterestIkEnabled({'enable': False})
    GerudoSoldier019.SetInterestIkEnabled({'enable': False})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier017"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoSoldier017.Talk({'message': 'scenario/StoryAreaD:DesertProblem_C_010', 'getAttention': False})
    Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier018"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoSoldier018.Talk({'message': 'scenario/StoryAreaD:DesertProblem_C_020', 'getAttention': False})
    GerudoChiefsDaughter.MoveToTargetLinkedPoint({'index': 2, 'speed': 1, 'offsetZ': -3.5, 'actor': ActorIdentifier(name="Area"), 'offsetX': -2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetY': 0.0})
    GerudoChiefsDaughter.AimActor({'actor': ActorIdentifier(name="GerudoSoldier019"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoChiefsDaughter.SetFacialExpression({'expression': 'surprise'})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:DesertProblem_C_040', 'getAttention': False})
    GerudoChiefsDaughter.MoveToTargetLinkedPoint({'speed': 1, 'index': 3, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    GerudoChiefsDaughter.AimActor({'actor': ActorIdentifier(name="GerudoSoldier018"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        GerudoSoldier017.SetInterestIkEnabled({'enable': True})
        GerudoSoldier017.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier018.SetInterestIkEnabled({'enable': True})
        GerudoSoldier018.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier019.SetInterestIkEnabled({'enable': True})
        GerudoSoldier019.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoChiefsDaughter.SetFacialExpression({'expression': 'normal'})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoSoldier019.Talk({'message': 'scenario/StoryAreaD:DesertProblem_C_050', 'getAttention': False})
    } {

        fork {
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier017"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier017"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            GerudoChiefsDaughter.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier017"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    GerudoSoldier017.Talk({'message': 'scenario/StoryAreaD:DesertProblem_C_060', 'getAttention': False})

    fork {
        GerudoSoldier018.Talk({'message': 'scenario/StoryAreaD:DesertProblem_C_070', 'getAttention': False})
    } {

        fork {
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier018"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier018"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            GerudoChiefsDaughter.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier018"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:DesertProblem_C_080', 'getAttention': True})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:DesertProblem_C_090', 'getAttention': True})
    Timer.Wait({'time': 1.5})
    GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Player.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'offsetX': 0.6000000238418579, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:DesertProblem_C_100', 'getAttention': True})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.AddItemAndGenericItemGetSequence({'itemKey': 'SmoothieIngredient07', 'count': 2, 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="GerudoSoldier019"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Player.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'getAttention': True, 'message': 'scenario/StoryAreaD:DesertProblem_C_105'})
    EventFlags.SetFlag({'symbol': 'EvD_DesertCrack_C', 'value': True})
}

void DesertCrack() {

    call EvResetCommon.AllReset()


    fork {
        Partner.MoveToTargetActor({'speed': 0, 'offsetY': 1.0, 'offsetX': 1.0, 'actor': ActorIdentifier(name="Player"), 'distance': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    } {
        Timer.Wait({'time': 1.5})

        call GeneralSequence.Look_at_Partner()

    }

    Timer.Wait({'time': 0.5})

    fork {
        Partner[companion].PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_PARTNER_LOOKAROUND', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 2.0})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Partner[companion].Talk({'message': 'scenario/StoryAreaD:DesertCrack_010', 'getAttention': False})
    Timer.Wait({'time': 0.699999988079071})

    fork {
        Partner[companion].PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_PARTNER_LOOKAROUND', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 2.700000047683716})
    Partner[companion].AimActorLinkedPoint({'pointIndex': 1, 'actor': ActorIdentifier(name="Area"), 'duration': 0.699999988079071, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        Partner[companion].MoveToTargetLinkedPoint({'index': 0, 'speed': 1, 'actor': ActorIdentifier(name="Area"), 'offsetY': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetZ': 0.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_PARTNER_MOVE', 'volume': 1.0, 'pitch': 1.0})
    }

    Partner.SetInterestIkEnabled({'enable': False})

    fork {
        Partner.PlayAnimationNoWait({'name': 'move_down', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].MoveToTargetLinkedPoint({'speed': 1, 'index': 1, 'withoutTurn': True, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 2.0, 'offsetZ': 1.0, 'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetY': 0.0, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0})
    }

    Timer.Wait({'time': 2.0})
    Partner.ResetSteeringAnimation()
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetY': 3.0, 'offsetZ': 0.0, 'actor': ActorIdentifier(name="Partner"), 'offsetX': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Timer.Wait({'time': 0.800000011920929})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].PlayAnimationNoWait({'name': 'appeal02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaD:DesertCrack_020', 'getAttention': False})
    Timer.Wait({'time': 1.5})
    Partner[companion].PlayAnimationNoWait({'blendFrame': -1, 'name': 'ev_think', 'layer': 0, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaD:DesertCrack_030', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaD:DesertCrack_040', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Partner[companion].SetInterestIkEnabled({'enable': True})
    Partner[companion].MoveToCompassPoint({'direction': 5, 'speed': 0, 'distance': 1.0, 'withoutTurn': True, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Partner[companion].AimCompassPoint({'duration': 1.5, 'direction': 1, 'withoutTurn': False, 'immediateTurn': False})
    Partner[companion].AimCompassPoint({'duration': 1.5, 'withoutTurn': False, 'direction': 2, 'immediateTurn': False})
    Partner[companion].AimActorLinkedPoint({'withoutTurn': False, 'actor': ActorIdentifier(name="Area"), 'pointIndex': 3, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})
    Area.LookAtGimmicksLinkedPoint({'pointIndex': 3, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 0.5})
    Player.AimActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'pointIndex': 3, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaD:DesertCrack_050', 'getAttention': False})
    QuestSystem.SetProgress({'symbol': 'Desert:945356639', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void GreetingSoldier() {

    call EvResetCommon.AllReset()


    fork {
        Timer.Wait({'time': 0.5})
        Fade.StartPreset({'preset': 'FadeInNormal'})
    } {
        Player.MoveToCompassPoint({'offsetY': 0.6000000238418579, 'direction': 0, 'speed': 0, 'distance': 3.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0})
    }


    fork {
        GerudoSoldier004.GenericTalkSequenceWithDialog({'selfTalkAnimName': '', 'playerTalkAnim': False, 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': False, 'message': 'scenario/StoryAreaD:GreetingSoldier_010', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        GerudoSoldier004.SetInterestIkEnabled({'enable': True})
        GerudoSoldier004.AimActor({'actor': ActorIdentifier(name="Zelda"), 'offsetY': -0.20000000298023224, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoSoldier004.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'actor': ActorIdentifier(name="GerudoSoldier004"), 'offsetY': 0.6000000238418579, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Partner[companion].SetInterestIkEnabled({'enable': True})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoSoldier004"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        GerudoSoldier004.Talk({'message': 'scenario/StoryAreaD:GreetingSoldier_012', 'getAttention': False})
    } {
        GerudoSoldier004.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    QuestSystem.SetProgress({'symbol': 'Desert:2289111619', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void _DesertProblem_All() {
    GerudoSoldier023.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoSoldier023.PlayAnimationNoWait({'name': 'salute,wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoChiefsDaughter.AimActor({'actor': ActorIdentifier(name="GerudoSoldier023"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="GerudoSoldier023"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoSoldier023"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoSoldier023.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier023.Talk({'message': 'scenario/StoryAreaD:DesertProblem_All_030', 'getAttention': False})
    GerudoSoldier023.Talk({'message': 'scenario/StoryAreaD:DesertProblem_All_040', 'getAttention': False})
    GerudoSoldier023.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.20000000298023224})

    fork {
        GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoChiefsDaughter.SetFacialExpression({'expression': 'sad'})
    }

    GerudoSoldier023.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier023.Talk({'message': 'scenario/StoryAreaD:DesertProblem_All_060', 'getAttention': False})
    GerudoChiefsDaughter.SetFacialExpression({'expression': 'sleep'})
    GerudoSoldier023.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:DesertProblem_All_070', 'getAttention': False})
    } {
        GerudoChiefsDaughter.PlayAnimation({'name': 'no', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoChiefsDaughter.PlayAnimationEx({'name': 'wait', 'time': 1.0, 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoChiefsDaughter.SetFacialExpression({'expression': 'sleep'})
    }

    Timer.Wait({'time': 0.20000000298023224})
    GerudoChiefsDaughter.SetFacialExpression({'expression': 'normal'})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoChiefsDaughter.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:DesertProblem_All_080', 'getAttention': False})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    GerudoSoldier023.Deactivate()
    GerudoChiefsDaughter.Deactivate()
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Timer.Wait({'time': 1.0})
    Audio.MuteOffBGM({'duration': 2.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
}

void SandRemoverCave() {

    call EvResetCommon.AllReset()


    fork {
        GerudoSoldier024.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaD:SandRemoverCave_010', 'playerTalkAnim': False, 'selfTalkAnim': False, 'aimToPlayer': False, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        GerudoSoldier024.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.20000000298023224})
    GerudoSoldier024.Talk({'message': 'scenario/StoryAreaD:SandRemoverCave_020', 'getAttention': False})
    Timer.Wait({'time': 0.20000000298023224})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaD:SandRemoverCave_030', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})

        call GeneralSequence.Look_at_Partner()

    }

    Timer.Wait({'time': 0.5})

    fork {
        Zelda.SetInterestIkEnabled({'enable': False})
        Zelda.AimToLocation({'duration': 0.4000000059604645, 'location': 'Desert004_001', 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimToLocation({'duration': 0.4000000059604645, 'location': 'Desert004_001', 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.20000000298023224})
    Timer.Wait({'time': 0.20000000298023224})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
}

void GerudosTalk() {

    call EvResetCommon.AllReset()

    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="GerudoSoldier006"), 'actor2': ActorIdentifier(name="GerudoSoldier007"), 'actor3': ActorIdentifier(name="GerudoSoldier008"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    GerudoSoldier006.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'message': 'scenario/StoryAreaD:GerudosTalk_010', 'playerTalkAnim': False, 'aimToPlayer': False, 'selfTalkAnimName': 'sad01', 'cameraLookAt': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GerudoSoldier007.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier006"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoSoldier007.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier007.Talk({'message': 'scenario/StoryAreaD:GerudosTalk_020', 'getAttention': True})
    GerudoSoldier007.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier008.PlayAnimationNoWait({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier008.Talk({'message': 'scenario/StoryAreaD:GerudosTalk_030', 'getAttention': True})
    GerudoSoldier008.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    QuestSystem.SetProgress({'symbol': 'QuestIcon_Desert:3582759495', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void MuCrackAppear() {
    Audio.StopZoneBgm()
    Environment.ChangeWeather({'blendtime': 0.0, 'name': 'Sunny', 'timespan': 5.0})
    Camera.PlayActorOriginCameraAnimation({'path': 'map/Ev_WorldRepairDesert.bfres', 'name': 'Ev_WorldRepairDesert01_cam', 'farClipDistanceCtrl': True, 'lookAtDistanceCtrl': True, 'target': ActorIdentifier(name="Player"), 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'nearClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    Player.SetVisibility({'visible': False})
    Partner[companion].SetVisibility({'visible': False})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    Camera.PlayActorOriginCameraAnimation({'path': 'map/Ev_WorldRepairDesert.bfres', 'farClipDistanceCtrl': True, 'lookAtDistanceCtrl': True, 'target': ActorIdentifier(name="Player"), 'name': 'Ev_WorldRepairDesert02_cam', 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'nearClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    GameControl.RequestLevelJump({'level': 'Field', 'locator': 'EV_Field_MuCrackAppear3', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void RevivingWorld() {
    Audio.StopZoneBgm()
    Environment.ChangeWeather({'blendtime': 0.0, 'name': 'Sunny', 'timespan': 5.0})
    Camera.PlayActorOriginCameraAnimation({'path': 'map/Ev_WorldRepairDesert.bfres', 'name': 'Ev_WorldRepairDesert01_cam', 'farClipDistanceCtrl': True, 'lookAtDistanceCtrl': True, 'target': ActorIdentifier(name="Player"), 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'nearClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    Player.SetVisibility({'visible': False})
    Partner[companion].SetVisibility({'visible': False})
    Fade.StartParam({'mode': 0, 'colorR': 1.0, 'colorG': 1.0, 'colorB': 1.0, 'time': 1.0})
    Camera.PlayActorOriginCameraAnimation({'path': 'map/Ev_WorldRepairDesert.bfres', 'farClipDistanceCtrl': True, 'lookAtDistanceCtrl': True, 'target': ActorIdentifier(name="Player"), 'name': 'Ev_WorldRepairDesert02_cam', 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'nearClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    Fade.StartPreset({'preset': 'FadeOutNormalW'})
    GameControl.RequestLevelJump({'level': 'Field', 'locator': 'EV_Field_RevivingWorld3', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void DesertProblem_A_2() {
    if !Player.CheckMorph({'morphKind': 0}) {
        Player.MorphEnd()
    }
    Fade.StartPreset({'preset': 'FadeOutNormalB'})

    call EvResetCommon.AllReset()

    Zelda.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="TagEventSwitch"), 'offsetY': 0.0})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="GerudoSoldier027"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 0.5})

    fork {
        GerudoSoldier026.PlayAnimation({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoSoldier026.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier027.PlayAnimation({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoSoldier027.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Player.SetInterestIkEnabled({'enable': True})
    Partner[companion].SetInterestIkEnabled({'enable': True})
    Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GerudoSoldier026"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner.WarpToActor({'offsetY': 1.0, 'distance': -2.0, 'offsetX': -1.0, 'actor': ActorIdentifier(name="Player")})
    Partner.AimActor({'offsetY': 1.0, 'offsetX': -1.0, 'actor': ActorIdentifier(name="GerudoSoldier026"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetZ': 0.0, 'immediateTurn': False})
    Fade.StartPreset({'preset': 'FadeInNormal'})

    fork {
        GerudoSoldier027.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GerudoSoldier027.PlayAnimationNoWait({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoSoldier027.Talk({'message': 'scenario/StoryAreaD:DesertProblem_A2_020', 'getAttention': False})
        GerudoSoldier027.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner.ResetAim()
        Partner[companion].PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 2.0})
        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Partner[companion].MoveToCompassPoint({'direction': 1, 'speed': 1, 'distance': 7.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    GerudoSoldier026.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoSoldier026.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier026.Talk({'message': 'scenario/StoryAreaD:DesertProblem_A2_030', 'getAttention': False})
    Timer.Wait({'time': 0.20000000298023224})
    GerudoSoldier026.SetInterestIkEnabled({'enable': False})
    GerudoSoldier026.PlayAnimation({'name': 'search', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    GerudoSoldier026.Talk({'message': 'scenario/StoryAreaD:DesertProblem_A2_040', 'getAttention': True})
    GerudoSoldier027.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoSoldier027.Talk({'message': 'scenario/StoryAreaD:DesertProblem_A2_050', 'getAttention': True})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        GerudoSoldier026.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.20000000298023224})
    GerudoSoldier027.PlayAnimationNoWait({'name': 'happy01,wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier026.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoSoldier027.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoSoldier027.PlayAnimation({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier027.Talk({'message': 'scenario/StoryAreaD:DesertProblem_A2_060', 'getAttention': True})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    GerudoSoldier026.Deactivate()
    GerudoSoldier027.Deactivate()
    Timer.Wait({'time': 0.5})
    Partner[companion].AimPlayer({'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    Partner[companion].MoveToBesideTargetActor({'offsetY': 1.0, 'speed': 1, 'offsetX': 1.0, 'actor': ActorIdentifier(name="Player"), 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})

    fork {
        Zelda.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetY': -0.6000000238418579, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    EventFlags.SetFlag({'value': True, 'symbol': 'EvD_DesertCrack_A2'})
    QuestSystem.SetProgress({'symbol': 'Desert_Crack_A:1015199178', 'isShowTelopInEvent': False, 'isFrontFade': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaD:DesertProblem_A2_070', 'getAttention': False})
    QuestSystem.AddProgress({'questKey': 'Desert', 'value': 1, 'isShowTelopInEvent': False, 'isFrontFade': False, 'isForceShowTelop': False})
    if !QuestSystem.CheckProgress({'symbol': 'Desert_Crack_A:1015199178'})
    && !QuestSystem.CheckProgress({'symbol': 'Desert_Crack_B:2065878810'})
    && !QuestSystem.CheckProgress({'symbol': 'Desert_Crack_C:1178789546'}) {
        GerudoChiefsDaughter.Activate()
        GerudoChiefsDaughter.SetInterestIkEnabled({'enable': False})
        GerudoChiefsDaughter.MoveToBesideTargetActor({'speed': 1, 'offsetZ': -2.0, 'actor': ActorIdentifier(name="Player"), 'offsetX': 0.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})

        fork {
            GerudoChiefsDaughter.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:DesertProblem_All_010', 'getAttention': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Player.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.15000000596046448})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        GerudoSoldier023.Activate()
        GerudoSoldier023.WarpToActor({'offsetY': 1.0, 'offsetX': 0.0, 'distance': -15.0, 'actor': ActorIdentifier(name="GerudoChiefsDaughter")})
        GerudoChiefsDaughter.SetInterestIkEnabled({'enable': False})

        call GeneralSequence.ZeldaTalkMotion()

        GerudoChiefsDaughter.SetFacialExpression({'expression': 'sad'})
        GerudoChiefsDaughter.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:DesertProblem_All_020', 'getAttention': False})
        Audio.MuteOnBGM({'duration': 2.0})
        GerudoChiefsDaughter.SetFacialExpression({'expression': 'normal'})
        GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoSoldier023.Activate()
        GerudoSoldier023.SetInterestIkEnabled({'enable': True})
        GerudoSoldier023.AimActor({'offsetZ': 0.0, 'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'immediateTurn': False})
        GerudoSoldier023.MoveToBesideTargetActor({'speed': 1, 'offsetZ': 0.0, 'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'offsetX': 2.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        GerudoSoldier023.SetInterestIkEnabled({'enable': False})

        call _DesertProblem_All()

        QuestSystem.SetProgress({'symbol': 'Desert:1907799803', 'isShowTelopInEvent': False, 'isFrontFade': False})
        EventFlags.SetFlag({'value': True, 'symbol': 'EvD_ZeldasMerits'})
    }
}

void DesertProblem_A() {

    call EvResetCommon.AllReset()

    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="GerudoSoldier026"), 'actor2': ActorIdentifier(name="GerudoSoldier027"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.SetInterestIkEnabled({'enable': True})
    Partner[companion].SetInterestIkEnabled({'enable': True})

    fork {
        GerudoSoldier026.Talk({'message': 'scenario/StoryAreaD:DesertProblem_A_005', 'getAttention': True})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GerudoSoldier026"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner.AimActor({'actor': ActorIdentifier(name="GerudoSoldier026"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }


    fork {
        GerudoSoldier026.Talk({'message': 'scenario/StoryAreaD:DesertProblem_A_010', 'getAttention': True})
    } {
        GerudoSoldier026.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        GerudoSoldier027.Talk({'message': 'scenario/StoryAreaD:DesertProblem_A_020', 'getAttention': True})
    } {
        GerudoSoldier027.SetFacialExpression({'expression': 'sleep'})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier027"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GerudoSoldier027"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    Player.SetFacialExpression({'expression': 'normal'})

    fork {
        GerudoSoldier026.SetInterestIkEnabled({'enable': True})
        GerudoSoldier026.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier027.SetInterestIkEnabled({'enable': True})
        GerudoSoldier027.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        GerudoSoldier027.Talk({'message': 'scenario/StoryAreaD:DesertProblem_A_040', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            Player.AimActor({'actor': ActorIdentifier(name="GerudoSoldier026"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner.AimActor({'actor': ActorIdentifier(name="GerudoSoldier026"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    Timer.Wait({'time': 0.5})

    fork {
        Timer.Wait({'time': 1.649999976158142})

        fork {
            Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="TecuumFly", sub_name="TecuumFly1"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].PlayAnimation({'name': 'appeal02,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner[companion].AimActor({'actor': ActorIdentifier(name="TecuumFly", sub_name="TecuumFly1"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.30000001192092896})
            Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': -2.5, 'duration': 0.4000000059604645, 'actor1': ActorIdentifier(name="TecuumFly", sub_name="TecuumFly1"), 'actor2': ActorIdentifier(name="TecuumFly", sub_name="TecuumFly2"), 'chaseRatio': 0.10000000149011612, 'weight1': 1.0, 'weight2': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        }

    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_ENEMY_TECUUM_FLY_BIND', 'volume': 1.0, 'pitch': 1.0})
    }


    fork {
        TecuumFly[TecuumFly1].PlayAnimationNoWait({'name': 'appear', 'layer': 0, 'blendFrame': -1, 'restart': False})
        TecuumFly[TecuumFly1].StopFindTarget()
        TecuumFly[TecuumFly1].Activate()
    } {
        TecuumFly[TecuumFly2].PlayAnimationNoWait({'name': 'appear', 'layer': 0, 'blendFrame': -1, 'restart': False})
        TecuumFly[TecuumFly2].StopFindTarget()
        TecuumFly[TecuumFly2].Activate()
        Audio.PlayOneshotSystemSE({'label': 'SE_ENEMY_TECUUM_FLY_APPEAR', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 4.0})

    fork {
        GerudoSoldier026.SetInterestIkEnabled({'enable': False})
        GerudoSoldier026.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="TecuumFly", sub_name="TecuumFly1"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier027.AimActor({'actor': ActorIdentifier(name="TecuumFly", sub_name="TecuumFly1"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="GerudoSoldier026"), 'actor2': ActorIdentifier(name="GerudoSoldier027"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    GerudoSoldier027.Talk({'message': 'scenario/StoryAreaD:DesertProblem_A_050', 'getAttention': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvD_DesertCrack_A'})
    QuestSystem.SetProgress({'symbol': 'Desert_Crack_A:2737680573', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void GreetingSoldier_1() {

    call EvResetCommon.AllReset()


    fork {
        GerudoSoldier004.GenericTalkSequenceWithDialog({'selfTalkAnimName': '', 'playerTalkAnim': False, 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': False, 'message': 'scenario/StoryAreaD:GreetingSoldier_010', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        GerudoSoldier004.SetInterestIkEnabled({'enable': True})
        GerudoSoldier004.AimActor({'offsetY': -0.20000000298023224, 'actor': ActorIdentifier(name="Zelda"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoSoldier004.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'actor': ActorIdentifier(name="GerudoSoldier004"), 'offsetY': 0.6000000238418579, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Partner[companion].SetInterestIkEnabled({'enable': True})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoSoldier004"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Player.SetInterestIkEnabled({'enable': False})
        Player.ResetAim()
    } {
        Partner[companion].SetInterestIkEnabled({'enable': False})
        Partner[companion].ResetAim()
    }


    fork {
        Player.MoveToLocation({'offsetY': 0.6000000238418579, 'location': 'F_GerudoPalace01', 'distance': 3.0, 'speed': 1, 'offsetX': -1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    } {
        Partner.MoveToLocation({'location': 'F_GerudoPalace01', 'speed': 1, 'offsetY': 1.0, 'distance': 4.0, 'offsetX': -2.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    }


    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'actor': ActorIdentifier(name="GerudoSoldier004"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Partner[companion].SetInterestIkEnabled({'enable': True})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoSoldier004"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        GerudoSoldier004.Talk({'message': 'scenario/StoryAreaD:GreetingSoldier_012', 'getAttention': False})
    } {
        GerudoSoldier004.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    QuestSystem.SetProgress({'symbol': 'Desert:2289111619', 'isShowTelopInEvent': False, 'isFrontFade': False})
}
