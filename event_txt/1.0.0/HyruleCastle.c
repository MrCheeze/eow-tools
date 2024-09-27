-------- EventFlow: HyruleCastle --------

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag', 'SetLevelFlag']
queries: ['CheckFlag']
params: None

Actor: Partner
entrypoint: None()
actions: ['WarpToDefaultPosition', 'AimCompassPoint', 'AimPlayer', 'PlayAnimation', 'ResetAim', 'MoveToBesideTargetActor', 'SetInterestIkEnabled', 'AimActor']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump', 'ForbidWarp', 'UnforbidWarp', 'UnforbidLaunchApplet', 'ForbidLaunchApplet']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['SetFacialExpression', 'DislocateComponentToActorLinkedPoint', 'RelocateComponent', 'WarpToActorLinkedPoint', 'PlayAnimationEx', 'AimCompassPoint', 'AimActor', 'PlayAnimation', 'WarpToActorLinkedPointWithCompassPoint', 'LookAtTalker', 'MoveToBesideTargetActor', 'MoveToTargetLinkedPoint', 'SetEquipmentVisibility', 'SetZeldaHood', 'PlayAnimationNoWait', 'Heal', 'ResetFacialExpression', 'SetVisibility', 'PlayTailorOtherChannelNoWait', 'SetOutfit', 'SetInterestIkEnabled']
queries: ['IsZeldaHoodOff', 'CheckOutfit']
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'LookAt3ActorsCenterAsTalker', 'Reset']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['MoveToTargetActor', 'DisableAutoMovement', 'TalkKeep', 'AimPlayer', 'Talk', 'PlayAnimation', 'AimActor', 'PlayAnimationNoWait', 'WarpToActorLinkedPoint', 'MoveToBesideTargetActor', 'WarpToActorWithCompassPoint', 'AimCompassPoint', 'GenericTalkSequenceWithDialog', 'SetInterestIkEnabled', 'WarpToActor', 'ResetAim', 'SetVisibility']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayBGM', 'PlayOneshotSystemSE', 'StopAllBGM', 'DisablePlaySeFromTailor', 'StopRegionBgm', 'Prepare', 'StopBGM', 'EnablePlaySeFromTailor', 'SetTimeToRegionBgmPlay', 'PlayZoneBGM', 'StopZoneBgm', 'StopZoneBaseAmbience', 'PlayBGMEx']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['MoveToTargetActor', 'SetShadowDecalEnable', 'SetInterestIkEnabled', 'PlayAnimation', 'SetFacialExpression', 'AimCompassPoint', 'AimActor', 'ResetAim', 'WarpToActorLinkedPoint', 'MoveToBesideTargetActor', 'MoveToCompassPoint', 'WarpToActor', 'MoveToTargetLinkedPoint', 'LookAtTalker']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: []
queries: []
params: None

Actor: MinisterRight
entrypoint: None()
actions: ['PlayAnimation', 'DislocateComponentToActorLinkedPoint', 'RelocateComponent', 'SetCullMode', 'WarpToActorLinkedPointWithCompassPoint', 'Talk', 'AimActor', 'PlayAnimationEx', 'ResetAim', 'SetTalkerName', 'MoveToCompassPoint', 'SetFacialExpression', 'AimPlayer', 'MoveToBesideTargetActor', 'MoveToTargetLinkedPoint', 'PlayAnimationNoWait', 'SetInterestIkEnabled', 'ChangeSteeringAnimation', 'Deactivate', 'AimCompassPoint', 'ResetFacialExpression', 'AimDegreeAngle', 'AimToInitialAngle']
queries: []
params: None

Actor: MinisterLeft
entrypoint: None()
actions: ['PlayAnimation', 'DislocateComponentToActorLinkedPoint', 'RelocateComponent', 'SetCullMode', 'WarpToActorLinkedPointWithCompassPoint', 'AimActor', 'PlayAnimationEx', 'ResetAim', 'Talk', 'PlayAnimationNoWait', 'SetFacialExpression', 'AimPlayer', 'GenericTalkSequenceWithDialog', 'SetInterestIkEnabled', 'ResetFacialExpression', 'AimToInitialAngle']
queries: []
params: None

Actor: HyruleSoldier[sol1]
entrypoint: None()
actions: ['MoveToBesideTargetActor', 'MoveToCompassPoint', 'AimCompassPoint', 'AimPlayer', 'Activate', 'Talk', 'SetFacialExpression', 'PlayAnimation', 'SetGravityEnable', 'SetCollisionEnabled', 'PlayAnimationNoWait', 'Deactivate', 'WarpToActorWithCompassPoint', 'AimActor', 'WarpToActorLinkedPointWithCompassPoint', 'MoveToTargetLinkedPoint']
queries: []
params: None

Actor: HyruleSoldier[sol2]
entrypoint: None()
actions: ['MoveToBesideTargetActor', 'MoveToCompassPoint', 'AimCompassPoint', 'AimPlayer', 'Activate', 'SetFacialExpression', 'PlayAnimation', 'SetGravityEnable', 'SetCollisionEnabled', 'PlayAnimationNoWait', 'WarpToActorWithCompassPoint', 'AimActor']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: HyruleKing
entrypoint: None()
actions: ['Talk', 'PlayAnimation', 'PlayAnimationNoWait', 'SetFacialExpression', 'GenericTalkSequence', 'DislocateComponentToActorLinkedPoint', 'RelocateComponent', 'SetCullMode', 'WarpToActorLinkedPointWithCompassPoint', 'AimActor', 'AimCompassPoint', 'SetTalkerName', 'SetInterestIkEnabled', 'AimPlayer', 'GenericTalkSequenceWithDialog', 'MoveToCompassPoint', 'ChangeSteeringAnimation', 'ResetSteeringAnimation', 'MoveToTargetLinkedPoint', 'ResetFacialExpression', 'LookAtTalker', 'Deactivate', 'SetInstanceVariableBool', 'Activate', 'MoveToLinkedPoint', 'ResetAim', 'AimDegreeAngle']
queries: []
params: None

Actor: HyruleSoldier[sol3]
entrypoint: None()
actions: ['Talk', 'PlayAnimation', 'Activate', 'Deactivate', 'MoveToBesideTargetActor', 'AimActor', 'PlayAnimationNoWait', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Impa
entrypoint: None()
actions: ['Talk', 'Deactivate', 'PlayAnimation', 'PlayAnimationNoWait', 'MoveToTargetLinkedPoint', 'Activate', 'SetInterestIkEnabled', 'AimActor', 'PlayAnimationEx', 'ResetAim', 'AimPlayer', 'SetInstanceVariableBool', 'ResetFacialExpression', 'SetFacialExpression', 'MoveToLinkedPoint', 'MoveToBesideTargetActor', 'MoveToCompassPoint', 'AimToInitialAngle']
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

Actor: FlowControl
entrypoint: None()
actions: ['InvokeTimeline', 'PreloadTimeline', 'Yield_']
queries: []
params: None

Actor: EvThroneRoomWall
entrypoint: None()
actions: ['Activate']
queries: []
params: None

Actor: Luberi
entrypoint: None()
actions: ['Talk', 'AimActor', 'PlayAnimationNoWait', 'PlayAnimation', 'AimPlayer', 'SetInterestIkEnabled', 'SetFacialExpression', 'ResetFacialExpression', 'ResetAim', 'AimToInitialAngle']
queries: []
params: None

Actor: HyruleSoldier[sol4]
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'Activate', 'Deactivate', 'PlayAnimation', 'MoveToBesideTargetActor', 'AimActor', 'SetInterestIkEnabled']
queries: []
params: None

Actor: EvTecuum[HyruleKing]
entrypoint: None()
actions: ['SetVisibility', 'Activate', 'DislocateComponentToActorLinkedPoint']
queries: []
params: None

Actor: EvTecuum[MinisterRight]
entrypoint: None()
actions: ['SetVisibility', 'Activate', 'DislocateComponentToActorLinkedPoint']
queries: []
params: None

Actor: EvTecuum[MinisterLeft]
entrypoint: None()
actions: ['SetVisibility', 'Activate', 'DislocateComponentToActorLinkedPoint']
queries: []
params: None

Actor: TagEvTailorPlayer
entrypoint: None()
actions: ['Activate', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: HyruleSoldier015
entrypoint: None()
actions: ['Talk', 'Activate', 'PlayAnimationNoWait', 'Deactivate', 'MoveToCompassPoint', 'AimCompassPoint', 'SetInterestIkEnabled', 'MoveToBesideTargetActor', 'AimActor', 'PlayAnimation']
queries: []
params: None

Actor: AreaStartTag
entrypoint: None()
actions: []
queries: []
params: None

Actor: HyruleSoldier023
entrypoint: None()
actions: ['SetInterestIkEnabled']
queries: []
params: None

Actor: HyruleSoldier024
entrypoint: None()
actions: ['SetInterestIkEnabled']
queries: []
params: None

Actor: EvCrackMeetKingHyruleCastle
entrypoint: None()
actions: ['Activate', 'SetAutoCalcBoundingVolumeEnabled']
queries: []
params: None

Actor: Movie
entrypoint: None()
actions: ['Play', 'Prepare', 'Close']
queries: []
params: None

Actor: TutorialUI
entrypoint: None()
actions: ['ShowModal']
queries: []
params: None

Actor: MinisterLeft[Kingreport_end(1)]
entrypoint: Kingreport_end(1)
actions: []
queries: []
params: None

Actor: MinisterRight[Kingreport_end(5)]
entrypoint: Kingreport_end(5)
actions: []
queries: []
params: None

void GoThroneRoom() {

    call EvResetCommon.AllResetNowait()

    Audio.StopRegionBgm({'fadeSec': 0.0})
    Audio.Prepare({'label': 'BGM_EV_COMMON5', 'kind': 0, 'volume': 1.0})
    Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 0.0, 'offsetZ': -2.0, 'offsetY': -1.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetX': 0.10000000149011612, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612})
    Zelda.SetEquipmentVisibility({'visibility': False})
    Partner[companion].WarpToActorLinkedPoint({'index': 3, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetY': 1.0})
    Partner[companion].AimPlayer({'duration': 0.009999999776482582, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    EventVariables.SetVariable({'symbol': 'Midpoint:1241305819'})
    Impa.Activate()
    Impa.SetInterestIkEnabled({'enable': False})
    Player.PlayAnimation({'name': 'sleep_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.SetZeldaHood({'isOn': False})
    Zelda.Heal({'amount': 999})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    Timer.Wait({'time': 1.5})

    fork {
        Impa.MoveToTargetLinkedPoint({'index': 2, 'speed': 0, 'actor': ActorIdentifier(name="AreaStartTag"), 'customSpeed': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Impa.SetInterestIkEnabled({'enable': True})
        Impa.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 2.0})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Impa"), 'duration': 0.800000011920929, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': -2.0, 'duration': 0.10000000149011612, 'offsetY': -1.0, 'offsetZ': -2.0, 'actor1': ActorIdentifier(name="Impa"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetX': -0.17000000178813934, 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612})
    Impa.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Impa.ResetAim()
    Impa.PlayAnimationEx({'name': 'happy', 'time': 2.0, 'layer': 0, 'blendFrame': -1, 'restart': False})
    Impa.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Impa.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    Impa.SetInterestIkEnabled({'enable': False})
    Impa.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Audio.PlayBGMEx({'label': 'BGM_EV_COMMON5', 'volume': 1.0, 'sec': 1.0, 'ignoreSkip': False})
    Impa.Talk({'message': 'scenario/StoryAreaHyruleCastle:GoThroneRoom_010', 'getAttention': False})
    Impa.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Impa.Talk({'message': 'scenario/StoryAreaHyruleCastle:GoThroneRoom_015', 'getAttention': False})
    Impa.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaHyruleCastle:GoThroneRoom_020', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Impa.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Impa.Talk({'message': 'scenario/StoryAreaHyruleCastle:GoThroneRoom_030', 'getAttention': False})
    Impa.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaHyruleCastle:GoThroneRoom_040', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'yes02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaHyruleCastle:GoThroneRoom_040_02', 'getAttention': False})
    Timer.Wait({'time': 1.0})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.SetFacialExpression({'expression': 'normal'})
    Timer.Wait({'time': 0.5})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Partner[companion].PlayAnimation({'name': 'appeal02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_SYS_MESSAGE_TORI2', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 0.5})
    Impa.SetInterestIkEnabled({'enable': True})
    Impa.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Impa.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Impa.SetInterestIkEnabled({'enable': False})
    Impa.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Impa.Talk({'message': 'scenario/StoryAreaHyruleCastle:GoThroneRoom_060', 'getAttention': False})
    Impa.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Zelda.PlayAnimation({'name': 'ev_getoff_bed', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Zelda.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Player.AimActor({'actor': ActorIdentifier(name="Impa"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 4.199999809265137})
    } {
        Timer.Wait({'time': 3.0})
        Partner[companion].MoveToBesideTargetActor({'withoutTurn': True, 'speed': 0, 'customSpeed': -2.0, 'actor': ActorIdentifier(name="Partner"), 'offsetZ': 0.5, 'offsetX': -0.5, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'method': 0})
    } {
        Timer.Wait({'time': 3.5})
        Impa.MoveToTargetLinkedPoint({'speed': 0, 'actor': ActorIdentifier(name="AreaStartTag"), 'index': 4, 'customSpeed': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Impa.SetInterestIkEnabled({'enable': True})
        Impa.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': -2.0, 'duration': 0.10000000149011612, 'offsetY': -1.0, 'offsetZ': -2.0, 'offsetX': -0.17000000178813934, 'actor1': ActorIdentifier(name="Impa"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612})
    Impa.SetInterestIkEnabled({'enable': False})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="Impa"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Impa.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Impa.Talk({'message': 'scenario/StoryAreaHyruleCastle:GoThroneRoom_070', 'getAttention': False})

    fork {
        Impa.Talk({'message': 'scenario/StoryAreaHyruleCastle:GoThroneRoom_070_02', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.800000011920929})
        Impa.SetInterestIkEnabled({'enable': True})
        Impa.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Partner"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 1.0})
        Impa.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Impa.SetInterestIkEnabled({'enable': False})
    } {
        Timer.Wait({'time': 1.2000000476837158})
        Partner[companion].PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Impa.Talk({'message': 'scenario/StoryAreaHyruleCastle:GoThroneRoom_070_03', 'getAttention': False})
    Impa.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Impa.PlayAnimationNoWait({'name': 'sad_st,sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Impa.Talk({'message': 'scenario/StoryAreaHyruleCastle:GoThroneRoom_075', 'getAttention': False})
    Impa.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Impa.Talk({'message': 'scenario/StoryAreaHyruleCastle:GoThroneRoom_080', 'getAttention': False})
    Impa.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Impa.Talk({'message': 'scenario/StoryAreaHyruleCastle:GoThroneRoom_081', 'getAttention': False})
    Impa.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    QuestSystem.SetProgress({'symbol': 'Midpoint:1911838744', 'isShowTelopInEvent': False, 'isFrontFade': False})
    Audio.StopAllBGM({'duration': 3.0})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Zelda.SetEquipmentVisibility({'visibility': True})
    Zelda.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Impa.Deactivate()
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Partner[companion].WarpToActorWithCompassPoint({'direction': 0, 'offsetY': 1.0, 'offsetX': -1.5, 'actor': ActorIdentifier(name="Zelda"), 'distance': 0.0})
    Player.AimCompassPoint({'direction': 0, 'duration': 0.10000000149011612, 'withoutTurn': False, 'immediateTurn': False})
    EventVariables.SetVariable({'symbol': 'Midpoint:3868392447'})
    Timer.Wait({'time': 2.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    GameControl.ForbidWarp()
    Audio.PlayZoneBGM({'stopbgm': False})
}

void ThroneRoomTalk() {
    HyruleKing.SetInterestIkEnabled({'enable': False})
    Player.SetInterestIkEnabled({'enable': True})
    Partner[companion].SetInterestIkEnabled({'enable': True})

    call EvResetCommon.AllReset()


    fork {
        MinisterRight.SetInterestIkEnabled({'enable': True})
        MinisterRight.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MinisterLeft.SetInterestIkEnabled({'enable': True})
        MinisterLeft.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Impa.SetInterestIkEnabled({'enable': True})
        Impa.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Luberi.SetInterestIkEnabled({'enable': True})
        Luberi.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.MoveToBesideTargetActor({'speed': 1, 'offsetZ': 6.0, 'actor': ActorIdentifier(name="HyruleKing"), 'offsetX': 0.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    } {
        Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetZ': 6.0, 'offsetX': -1.5, 'actor': ActorIdentifier(name="HyruleKing"), 'customSpeed': 5.5, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0})
    }

    Player.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Player.ResetAim()
    Player.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 6.0, 'weight2': 1.0, 'weight1': 2.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Audio.StopRegionBgm({'fadeSec': 2.299999952316284})
    } {
        Audio.Prepare({'label': 'BGM_EV_CASTLE_FINALE_A', 'kind': 0, 'volume': 1.0})
    }


    fork {
        Timer.Wait({'time': 1.5})
    } {
        if !Zelda.IsZeldaHoodOff() {

            call GeneralSequence.Zelda_hood_off()

        }
    }


    fork {
        HyruleKing.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleKing.SetFacialExpression({'expression': 'smile'})
        HyruleKing.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_010', 'getAttention': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HyruleKing.ResetFacialExpression()
    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        MinisterRight.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        MinisterLeft.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Impa.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Luberi.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HyruleKing.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    HyruleKing.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Audio.PlayBGM({'label': 'BGM_EV_CASTLE_FINALE_A', 'volume': 1.0, 'ignoreSkip': True})
    HyruleKing.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_030', 'getAttention': False})
    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].ResetAim()
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.550000011920929})
        MinisterRight.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.699999988079071})
        MinisterLeft.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Impa.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6499999761581421})
        Luberi.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'offsetY': -0.6000000238418579, 'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        HyruleKing.SetInterestIkEnabled({'enable': True})
        HyruleKing.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_040', 'getAttention': False})
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    MinisterLeft.ResetAim()
    MinisterLeft.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        MinisterLeft.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_050', 'getAttention': True})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Timer.Wait({'time': 0.550000011920929})
        MinisterRight.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.699999988079071})
        MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterLeft.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Impa.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Impa.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.699999988079071})
        Luberi.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Luberi.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleKing.AimCompassPoint({'direction': 0, 'withoutTurn': True, 'duration': 0.4000000059604645, 'immediateTurn': False})
        HyruleKing.ResetAim()
        HyruleKing.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleKing.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_060', 'getAttention': True})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Zelda.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {

        fork {
            Timer.Wait({'time': 0.4000000059604645})
            MinisterRight.AimDegreeAngle({'angle': 30.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.550000011920929})
            MinisterRight.AimActor({'actor': ActorIdentifier(name="Luberi"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    } {
        Timer.Wait({'time': 0.699999988079071})
        MinisterLeft.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Luberi"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Impa.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Luberi"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Luberi.SetInterestIkEnabled({'enable': False})
        Luberi.PlayAnimationNoWait({'name': 'sad_st,sad_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Luberi.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_070', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Luberi"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.6499999761581421})
        HyruleKing.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Luberi"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Zelda.AimActor({'actor': ActorIdentifier(name="Luberi"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 1.5})
    HyruleSoldier015.Activate()
    HyruleSoldier015.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_110', 'getAttention': False})
    HyruleSoldier015.SetInterestIkEnabled({'enable': False})

    fork {
        MinisterRight.AimActor({'actor': ActorIdentifier(name="HyruleSoldier015"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        MinisterLeft.AimActor({'actor': ActorIdentifier(name="HyruleSoldier015"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Impa.AimActor({'actor': ActorIdentifier(name="HyruleSoldier015"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Luberi.PlayAnimation({'name': 'sad_ed,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Luberi.AimActor({'actor': ActorIdentifier(name="HyruleSoldier015"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="HyruleSoldier015"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.4000000059604645})
        Player.MoveToCompassPoint({'speed': 0, 'direction': 2, 'distance': 1.5, 'withoutTurn': True, 'customSpeed': 3.0, 'tolerance': 0.0, 'timeOut': 7.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="HyruleSoldier015"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.5})
        HyruleSoldier015.MoveToBesideTargetActor({'speed': 1, 'offsetZ': 7.0, 'actor': ActorIdentifier(name="HyruleKing"), 'offsetX': 0.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    } {
        HyruleKing.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    MinisterRight.SetInterestIkEnabled({'enable': True})
    MinisterLeft.SetInterestIkEnabled({'enable': True})
    HyruleSoldier015.SetInterestIkEnabled({'enable': False})

    fork {
        MinisterRight.ResetAim()
    } {
        MinisterLeft.ResetAim()
    } {
        Impa.ResetAim()
    } {
        Luberi.ResetAim()
    } {
        Player.ResetAim()
    } {
        Partner[companion].ResetAim()
    } {
        HyruleKing.ResetAim()
    }

    HyruleSoldier015.PlayAnimation({'name': 'salute', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier015.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier015.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_120', 'getAttention': False})
    HyruleSoldier015.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.30000001192092896})
        MinisterRight.SetFacialExpression({'expression': 'surprise'})
        MinisterRight.PlayAnimation({'name': 'surprised_st,surprised', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Impa.SetFacialExpression({'expression': 'surprise'})
        Impa.PlayAnimation({'name': 'surprised_st,surprised', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Luberi.SetFacialExpression({'expression': 'surprise'})
        Luberi.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.25})
        Luberi.SetInterestIkEnabled({'enable': True})
        Partner[companion].PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        MinisterLeft.SetFacialExpression({'expression': 'surprise'})
        MinisterLeft.PlayAnimation({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.25})
        Player.PlayAnimation({'name': 'ev_BossApear_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        HyruleKing.SetFacialExpression({'expression': 'angry'})
    }

    HyruleKing.PlayAnimationNoWait({'name': 'order_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_130', 'getAttention': False})

    fork {
        Timer.Wait({'time': 0.30000001192092896})
        MinisterRight.ResetFacialExpression()
        MinisterRight.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Impa.ResetFacialExpression()
        Impa.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Luberi.ResetFacialExpression()
        Luberi.PlayAnimation({'name': 'surprised_ed,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.25})
        Zelda.ResetFacialExpression()
        Zelda.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.25})
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        MinisterLeft.ResetFacialExpression()
        MinisterLeft.PlayAnimation({'name': 'surprised_ed01,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HyruleSoldier015.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier015.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_140', 'getAttention': True})
    HyruleSoldier015.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.5})
        MinisterRight.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        MinisterRight.ResetAim()
    } {
        Timer.Wait({'time': 0.5})
        MinisterLeft.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        MinisterLeft.ResetAim()
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Impa.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Impa.ResetAim()
    } {
        Timer.Wait({'time': 0.6499999761581421})
        Luberi.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Luberi.ResetAim()
    } {
        Timer.Wait({'time': 0.5})
        Player.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Player.ResetAim()
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].ResetAim()
    } {
        HyruleKing.ResetAim()
        HyruleKing.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleKing.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_160', 'getAttention': False})
    }


    fork {
        MinisterLeft.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier015.SetInterestIkEnabled({'enable': True})
        MinisterLeft.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_161', 'getAttention': False})
        MinisterLeft.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.0})
        HyruleKing.ResetFacialExpression()
        HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleKing.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HyruleKing.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HyruleKing.ResetAim()
    HyruleKing.PlayAnimationNoWait({'name': 'talk_onehand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_170', 'getAttention': True})
    HyruleKing.SetInterestIkEnabled({'enable': False})
    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        MinisterRight.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_180', 'getAttention': False})
    } {
        Player.SetInterestIkEnabled({'enable': True})
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        HyruleKing.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        HyruleKing.PlayAnimationNoWait({'name': 'talk_onehand', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleKing.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_190', 'getAttention': True})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        HyruleSoldier015.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HyruleKing.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    HyruleKing.ResetAim()
    HyruleKing.SetFacialExpression({'expression': 'think'})
    HyruleKing.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    HyruleKing.SetInterestIkEnabled({'enable': True})
    HyruleKing.ResetAim()
    Timer.Wait({'time': 0.699999988079071})
    Luberi.ResetAim()
    Luberi.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.6000000238418579})
    Luberi.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_200', 'getAttention': False})

    fork {
        Luberi.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Luberi.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_210', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        MinisterRight.AimDegreeAngle({'angle': 30.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.550000011920929})
        MinisterRight.AimActor({'actor': ActorIdentifier(name="Luberi"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        MinisterLeft.SetInterestIkEnabled({'enable': False})
        MinisterLeft.AimActor({'actor': ActorIdentifier(name="Luberi"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Zelda.AimActor({'actor': ActorIdentifier(name="Luberi"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner.AimActor({'actor': ActorIdentifier(name="Luberi"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        HyruleSoldier015.AimActor({'actor': ActorIdentifier(name="Luberi"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Luberi.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        MinisterRight.PlayAnimationNoWait({'name': 'surprised_st,surprised', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.AimActor({'actor': ActorIdentifier(name="Luberi"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterRight.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_240', 'getAttention': False})
    MinisterLeft.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        MinisterLeft.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_250', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        HyruleSoldier015.AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterLeft.PlayAnimationNoWait({'name': 'surprised_ed01,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.SetInterestIkEnabled({'enable': True})
    HyruleKing.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Player.SetInterestIkEnabled({'enable': False})
    HyruleKing.ResetFacialExpression()
    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.5})
    HyruleKing.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HyruleKing.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_280', 'getAttention': True})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        MinisterRight.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        MinisterLeft.SetInterestIkEnabled({'enable': True})
        MinisterLeft.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        HyruleSoldier015.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterRight.SetInterestIkEnabled({'enable': False})
    MinisterRight.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.SetInterestIkEnabled({'enable': True})
    MinisterRight.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_310', 'getAttention': False})
    MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})

    fork {
        Timer.Wait({'time': 0.699999988079071})
        MinisterRight.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.699999988079071})
        MinisterLeft.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.800000011920929})
        Impa.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.8500000238418579})
        Luberi.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].ResetAim()
        Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_320', 'getAttention': False})
    } {
        HyruleKing.SetInterestIkEnabled({'enable': True})
        HyruleKing.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Player.SetInterestIkEnabled({'enable': False})
        Player.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MinisterRight.SetInterestIkEnabled({'enable': True})
    } {
        HyruleSoldier015.SetInterestIkEnabled({'enable': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier015.SetInterestIkEnabled({'enable': True})

    fork {
        MinisterRight.SetFacialExpression({'expression': 'surprise'})
        MinisterRight.PlayAnimation({'name': 'surprised_st,surprised', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Impa.SetFacialExpression({'expression': 'surprise'})
        Impa.PlayAnimation({'name': 'surprised_st,surprised', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Luberi.SetFacialExpression({'expression': 'surprise'})
        Luberi.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterLeft.SetFacialExpression({'expression': 'surprise'})
        MinisterLeft.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterLeft.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_330', 'getAttention': False})
    } {
        HyruleKing.ResetAim()
    }


    fork {
        MinisterRight.ResetFacialExpression()
        MinisterRight.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Impa.ResetFacialExpression()
        HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Impa.ResetFacialExpression()
        Impa.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Luberi.ResetFacialExpression()
        Luberi.PlayAnimation({'name': 'surprised_ed,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterLeft.ResetFacialExpression()
        MinisterLeft.PlayAnimation({'name': 'surprised_ed01,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleKing.ResetFacialExpression()
        HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 1.0})
    HyruleKing.ResetAim()
    HyruleKing.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    HyruleSoldier015.SetInterestIkEnabled({'enable': True})
    HyruleKing.SetInterestIkEnabled({'enable': False})

    fork {
        HyruleKing.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_335', 'getAttention': True})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Luberi.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Luberi.ResetAim()
        Luberi.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Luberi.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_340', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.699999988079071})
        HyruleKing.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleKing.SetInterestIkEnabled({'enable': True})
        HyruleKing.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Luberi"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Player.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Luberi"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {

        fork {
            Timer.Wait({'time': 0.5})
            MinisterRight.AimDegreeAngle({'angle': 30.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.6499999761581421})
            MinisterRight.AimActor({'actor': ActorIdentifier(name="Luberi"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    } {
        Timer.Wait({'time': 0.699999988079071})
        MinisterLeft.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Luberi"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Impa.AimActor({'actor': ActorIdentifier(name="Luberi"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner.AimActor({'actor': ActorIdentifier(name="Luberi"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        HyruleSoldier015.AimActor({'actor': ActorIdentifier(name="Luberi"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Luberi.PlayAnimation({'name': 'surprised_ed,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        MinisterLeft.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_354', 'getAttention': True})
    } {
        Timer.Wait({'time': 0.5})
        HyruleKing.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner.AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        HyruleSoldier015.AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Luberi.AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterLeft.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.SetInterestIkEnabled({'enable': True})

    fork {
        Luberi.ResetAim()
        Luberi.PlayAnimationNoWait({'name': 'no,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Luberi.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_358', 'getAttention': True})
    } {
        Timer.Wait({'time': 0.5})
        HyruleKing.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Luberi"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Partner.AimActor({'actor': ActorIdentifier(name="Luberi"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        HyruleSoldier015.AimActor({'actor': ActorIdentifier(name="Luberi"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Zelda.AimActor({'actor': ActorIdentifier(name="Luberi"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Luberi.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.SetInterestIkEnabled({'enable': False})
    HyruleKing.SetFacialExpression({'expression': 'think'})
    Timer.Wait({'time': 1.5})
    HyruleKing.ResetFacialExpression()
    HyruleKing.MoveToCompassPoint({'speed': 0, 'direction': 0, 'distance': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    HyruleKing.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 1.5})
        MinisterRight.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.399999976158142})
        MinisterLeft.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.2999999523162842})
        Impa.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.7000000476837158})
        Luberi.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Zelda.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        HyruleSoldier015.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleKing.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_380', 'getAttention': False})
    }

    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.SetInterestIkEnabled({'enable': False})
    HyruleKing.SetFacialExpression({'expression': 'sad'})
    HyruleKing.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.Talk({'getAttention': False, 'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_380_02'})
    HyruleKing.ResetFacialExpression()
    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.AimCompassPoint({'withoutTurn': True, 'direction': 0, 'duration': 0.4000000059604645, 'immediateTurn': False})
    HyruleKing.SetInterestIkEnabled({'enable': False})
    HyruleKing.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.Talk({'getAttention': False, 'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_380_03'})
    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})

    fork {
        Timer.Wait({'time': 0.6000000238418579})
        MinisterRight.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        MinisterLeft.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Impa.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Luberi.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Zelda.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleKing.PlayAnimationNoWait({'name': 'order_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleKing.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_450', 'getAttention': False})
    } {
        HyruleKing.SetInterestIkEnabled({'enable': False})
        HyruleKing.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.SetInterestIkEnabled({'enable': False})
    }

    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HyruleKing.PlayAnimationNoWait({'name': 'order_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_460', 'getAttention': True})
    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.AimCompassPoint({'withoutTurn': False, 'direction': 0, 'duration': 0.4000000059604645, 'immediateTurn': False})
    HyruleKing.SetInterestIkEnabled({'enable': False})
    MinisterRight.SetTalkerName({'message': 'glossary/Character:Ministers', 'keep': False})

    fork {
        MinisterRight.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_465', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'salute,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterLeft.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_UGI_007_7', 'volume': 1.0, 'pitch': 1.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_SADARI_007_5', 'volume': 1.0, 'pitch': 1.0})
    }

    MinisterRight.SetTalkerName({'message': 'glossary/Character:MinisterRight', 'keep': False})
    HyruleKing.SetInterestIkEnabled({'enable': False})
    HyruleKing.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Impa"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HyruleKing.PlayAnimation({'name': 'talk_nohand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_480', 'getAttention': True})
    HyruleKing.SetInterestIkEnabled({'enable': False})
    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Impa.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_490', 'getAttention': False})
    } {
        Impa.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.0})
        Impa.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Impa.SetInterestIkEnabled({'enable': False})
    Impa.MoveToBesideTargetActor({'offsetZ': 0.0, 'speed': 0, 'actor': ActorIdentifier(name="Player"), 'customSpeed': 1.5, 'offsetX': 2.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0})

    fork {
        HyruleKing.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MinisterRight.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MinisterLeft.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Luberi.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Impa.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="Impa"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Impa.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Impa.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_500', 'getAttention': True})
    Impa.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Impa.MoveToTargetLinkedPoint({'speed': 0, 'index': 0, 'offsetX': -1.5, 'actor': ActorIdentifier(name="Area"), 'customSpeed': 1.7999999523162842, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Player.MoveToTargetLinkedPoint({'speed': 0, 'index': 0, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 2.5})
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
    } {
        HyruleSoldier015.MoveToCompassPoint({'direction': 3, 'speed': 1, 'distance': 1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        HyruleSoldier015.AimCompassPoint({'direction': 1, 'duration': 0.10000000149011612, 'withoutTurn': False, 'immediateTurn': False})
        HyruleSoldier015.PlayAnimation({'name': 'salute,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.StopBGM({'label': 'BGM_EV_CASTLE_FINALE_A', 'duration': 3.5})
    } {
        Timer.Wait({'time': 2.5})
        Audio.DisablePlaySeFromTailor()
    }

    MinisterRight.SetInterestIkEnabled({'enable': True})
    MinisterRight.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    MinisterLeft.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Luberi.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HyruleSoldier015.Deactivate()
    Impa.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    QuestSystem.SetProgress({'symbol': 'Midpoint:1048050120', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventVariables.SetVariable({'symbol': 'Midpoint:1048050120'})
    Zelda.SetOutfit({'kind': 'Adventure2'})
    Impa.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_510', 'getAttention': False})

    fork {
        Impa.MoveToCompassPoint({'speed': 0, 'direction': 2, 'distance': 7.0, 'customSpeed': 2.5, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Player.MoveToCompassPoint({'speed': 0, 'direction': 2, 'distance': 7.0, 'customSpeed': 2.5, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Fade.StartPreset({'preset': 'FadeInNormal'})
    } {
        Audio.EnablePlaySeFromTailor()
    }

    Audio.Prepare({'label': 'BGM_EV_CASTLE_FINALE_B', 'kind': 0, 'volume': 1.0})
    MinisterRight.SetFacialExpression({'expression': 'smile'})
    MinisterLeft.SetFacialExpression({'expression': 'smile'})

    fork {
        Player.LookAtTalker({'keep': False, 'distanceOffset': -7.0, 'offsetY': 0.5, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetZ': 0.0})
        Player.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        if !EventFlags.CheckFlag({'symbol': 'TutorialModal_ItemOrnamentGet'}) {
            Player.PlayAnimation({'name': 'ev_clothes_change_after,$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 1.0})
            TutorialUI.ShowModal({'key': 'OrnamentModal'})
            EventFlags.SetFlag({'value': True, 'symbol': 'TutorialModal_ItemOrnamentGet'})
            Event1802:
            Timer.Wait({'time': 1.5})

            fork {
                Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 6.0, 'weight2': 1.0, 'weight1': 2.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
            } {
                Player.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
            }

        } else {
            Player.PlayAnimation({'name': 'ev_clothes_change_after,$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            goto Event1802
        }
    } {
        Impa.MoveToTargetLinkedPoint({'speed': 0, 'index': 1, 'customSpeed': 2.5, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Impa.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Impa.SetInterestIkEnabled({'enable': True})
    } {
        Timer.Wait({'time': 1.0})
        Audio.PlayBGM({'label': 'BGM_EV_CASTLE_FINALE_B', 'volume': 1.0, 'ignoreSkip': True})
    }

    HyruleKing.ResetAim()
    HyruleKing.SetFacialExpression({'expression': 'smile'})
    Partner.SetInterestIkEnabled({'enable': True})

    fork {
        HyruleKing.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleKing.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_535', 'getAttention': True})
    } {
        Timer.Wait({'time': 0.699999988079071})
        Partner.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HyruleKing.SetFacialExpression({'expression': 'normal'})
    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    MinisterRight.ResetFacialExpression()
    MinisterLeft.ResetFacialExpression()

    fork {
        MinisterRight.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        MinisterLeft.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Impa.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Luberi.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Player.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleKing.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleKing.Talk({'message': 'scenario/StoryAreaHyruleCastle:ThroneRoomTalk_550', 'getAttention': False})
        HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        MinisterRight.ResetAim()
        MinisterRight.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterLeft.ResetAim()
        Timer.Wait({'time': 0.10000000149011612})
        MinisterLeft.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Luberi.ResetAim()
        Timer.Wait({'time': 0.20000000298023224})
        Luberi.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Luberi.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].ResetAim()
        Timer.Wait({'time': 0.10000000149011612})
        Partner[companion].PlayAnimation({'name': 'yes02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Impa.ResetAim()
        Timer.Wait({'time': 0.20000000298023224})
        Impa.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 2.0})
        Impa.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.10000000149011612})
    HyruleKing.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Audio.StopBGM({'label': 'BGM_EV_CASTLE_FINALE_B', 'duration': 2.799999952316284})
    QuestSystem.SetProgress({'symbol': 'Midpoint:2478168384', 'isShowTelopInEvent': False, 'isFrontFade': False})
    Audio.PlayZoneBGM({'stopbgm': False})
    Audio.SetTimeToRegionBgmPlay({'waitSec': 0.5})
    EventFlags.SetFlag({'symbol': 'SkillUnLock01', 'value': True})
    EventFlags.SetFlag({'value': True, 'symbol': 'HyruleClear'})
    QuestSystem.SetProgress({'symbol': 'LinkQuest:323122344', 'isShowTelopInEvent': False, 'isFrontFade': False})
    QuestSystem.SetProgress({'symbol': 'Link_Rescue:1391291837', 'isShowTelopInEvent': False, 'isFrontFade': False})
    GameControl.UnforbidWarp()
    Timer.Wait({'time': 1.0})

    fork {
        Timer.Wait({'time': 0.2750000059604645})
        MinisterRight.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        MinisterLeft.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.25})
        Impa.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Luberi.AimToInitialAngle({'withoutTurn': False, 'duration': 0.4000000059604645, 'immediateTurn': False})
    }

}

void HyruleKingReturn() {

    call EvResetCommon.AllResetNowait()

    HyruleKing.SetInterestIkEnabled({'enable': False})
    HyruleKing.WarpToActorLinkedPointWithCompassPoint({'index': 0, 'direction': 0, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetY': 0.0})
    HyruleKing.SetFacialExpression({'expression': 'down'})
    HyruleKing.PlayAnimationNoWait({'name': 'down_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Camera.LookAt2ActorsCenterAsTalker({'offsetZ': 3.0, 'distanceOffset': -2.0, 'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0})
    Player.WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetY': 0.0})
    Partner[companion].DisableAutoMovement()
    Partner[companion].WarpToActor({'offsetY': 1.75, 'actor': ActorIdentifier(name="Zelda"), 'distance': 0.0, 'offsetX': 0.0})

    fork {
        Zelda.AimCompassPoint({'direction': 0, 'duration': 0.10000000149011612, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.10000000149011612, 'withoutTurn': False, 'immediateTurn': False})
    }


    fork {
        Zelda.PlayAnimation({'name': 'ev_WarpStart_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Zelda.PlayAnimation({'name': 'ev_WarpStart_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayAnimation({'name': 'ev_WarpStart_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].PlayAnimation({'name': 'ev_WarpStart_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Zelda.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    }

    Fade.StartPreset({'preset': 'FadeInNormal'})
    Timer.Wait({'time': 0.5})
    Zelda.PlayTailorOtherChannelNoWait({'channel': 'WarpEnd_00', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    Timer.Wait({'time': 2.5})

    fork {
        Zelda.SetVisibility({'visible': True})
    } {
        Partner[companion].SetVisibility({'visible': True})
    }

    Timer.Wait({'time': 0.5})

    fork {
        Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetX': 1.5, 'offsetY': 1.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})

    fork {
        Timer.Wait({'time': 0.30000001192092896})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetY': -0.5, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Partner[companion].SetInterestIkEnabled({'enable': True})
        Partner[companion].AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].ResetAim()
        Partner[companion].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/StoryAreaHyruleCastle:HyruleKingReturn_002', 'cameraLookAt': False, 'keepPersonalSpace': False, 'aimToPlayer': False, 'aimFromPlayer': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaHyruleCastle:HyruleKingReturn_004', 'getAttention': False})
    Timer.Wait({'time': 1.0})

    fork {
        Timer.Wait({'time': 1.0})
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.0})
        Player.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleKing.Talk({'message': 'scenario/StoryAreaHyruleCastle:HyruleKingReturn_008', 'getAttention': False})
    }

    Timer.Wait({'time': 0.5})
    HyruleKing.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})

    fork {
        Player.ResetAim()
        Player.MoveToBesideTargetActor({'offsetY': 0.0, 'speed': 1, 'actor': ActorIdentifier(name="HyruleKing"), 'offsetZ': 2.5, 'offsetX': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Player.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Player.ResetAim()
    } {
        Partner[companion].ResetAim()
        Timer.Wait({'time': 0.5})
        Partner.MoveToBesideTargetActor({'speed': 1, 'offsetZ': 2.5, 'offsetX': 1.0, 'actor': ActorIdentifier(name="HyruleKing"), 'offsetY': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].ResetAim()
    }

    HyruleKing.PlayAnimation({'name': 'wake', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.399999976158142})
    HyruleKing.ResetFacialExpression()
    HyruleKing.PlayAnimation({'name': 'wake_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    HyruleKing.ResetAim()
    HyruleKing.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.6000000238418579})
    HyruleKing.SetFacialExpression({'expression': 'surprise'})
    HyruleKing.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.Talk({'message': 'scenario/StoryAreaHyruleCastle:HyruleKingReturn_010', 'getAttention': False})
    HyruleKing.ResetFacialExpression()
    HyruleKing.SetInterestIkEnabled({'enable': True})
    HyruleKing.PlayAnimationNoWait({'name': 'no', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 1.0})
        HyruleKing.Talk({'message': 'scenario/StoryAreaHyruleCastle:HyruleKingReturn_011', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.5})
        HyruleKing.AimDegreeAngle({'duration': 1.0, 'withoutTurn': True, 'angle': -30.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.6000000238418579})
        HyruleKing.AimDegreeAngle({'duration': 1.0, 'withoutTurn': True, 'angle': 30.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.6000000238418579})
        HyruleKing.ResetAim()
    }

    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    call GeneralSequence.ZeldaTalkMotion_2.0s()

    Timer.Wait({'time': 0.699999988079071})
    HyruleKing.PlayAnimationNoWait({'name': 'yes,think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.Talk({'message': 'scenario/StoryAreaHyruleCastle:HyruleKingReturn_020', 'getAttention': False})
    Timer.Wait({'time': 0.699999988079071})
    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        HyruleKing.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleKing.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleKing.SetFacialExpression({'expression': 'smile'})
        HyruleKing.Talk({'message': 'scenario/StoryAreaHyruleCastle:HyruleKingReturn_030', 'getAttention': False})
    }

    HyruleKing.SetFacialExpression({'expression': 'normal'})
    HyruleKing.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.Talk({'message': 'scenario/StoryAreaHyruleCastle:HyruleKingReturn_040', 'getAttention': False})
    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Zelda.PlayAnimation({'name': '$talk_hand', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 4.0})
        Zelda.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.5})
        HyruleKing.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.699999988079071})
    HyruleKing.SetFacialExpression({'expression': 'sad'})
    HyruleKing.PlayAnimationNoWait({'name': 'no,talk_onehand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.Talk({'message': 'scenario/StoryAreaHyruleCastle:HyruleKingReturn_050', 'getAttention': False})
    HyruleKing.ResetFacialExpression()
    HyruleKing.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    HyruleKing.SetFacialExpression({'expression': 'smile'})
    Timer.Wait({'time': 1.0})
    HyruleKing.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.Talk({'message': 'scenario/StoryAreaHyruleCastle:HyruleKingReturn_060', 'getAttention': False})
    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    HyruleSoldier[sol3].Activate()
    HyruleSoldier[sol4].Activate()

    fork {
        HyruleSoldier[sol3].Talk({'message': 'scenario/StoryAreaHyruleCastle:HyruleKingReturn_070', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.699999988079071})
        HyruleKing.ResetFacialExpression()
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Player.AimCompassPoint({'direction': 0, 'duration': 0.5, 'withoutTurn': False, 'immediateTurn': False})
        Player.ResetAim()
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="HyruleSoldier", sub_name="sol4"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        HyruleSoldier[sol3].MoveToBesideTargetActor({'speed': 1, 'offsetX': -1.0, 'actor': ActorIdentifier(name="Player"), 'offsetZ': 2.5, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    } {
        HyruleSoldier[sol4].MoveToBesideTargetActor({'speed': 1, 'offsetX': 1.0, 'actor': ActorIdentifier(name="Player"), 'offsetZ': 2.5, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'weight2': 1.0, 'distanceOffset': 1.5, 'offsetX': 0.5, 'weight1': 2.0, 'actor1': ActorIdentifier(name="HyruleKing"), 'actor2': ActorIdentifier(name="HyruleSoldier", sub_name="sol3"), 'offsetZ': -1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetY': 0.0})
    }

    HyruleSoldier[sol3].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier[sol3].Talk({'message': 'scenario/StoryAreaHyruleCastle:HyruleKingReturn_075', 'getAttention': False})
    HyruleSoldier[sol3].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})

    fork {
        HyruleSoldier[sol4].Talk({'message': 'scenario/StoryAreaHyruleCastle:HyruleKingReturn_080', 'getAttention': False})
    } {
        HyruleSoldier[sol4].PlayAnimationNoWait({'name': 'wait_spear', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier[sol3].PlayAnimationNoWait({'name': 'wait_spear', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier[sol3].SetInterestIkEnabled({'enable': True})
        HyruleSoldier[sol3].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleSoldier[sol4].SetInterestIkEnabled({'enable': True})
        HyruleSoldier[sol4].AimActor({'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HyruleKing.SetInterestIkEnabled({'enable': True})
    HyruleKing.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier", sub_name="sol3"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    HyruleKing.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier", sub_name="sol4"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    HyruleKing.SetInterestIkEnabled({'enable': False})
    HyruleKing.PlayAnimationNoWait({'name': 'talk_onehand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.Talk({'message': 'scenario/StoryAreaHyruleCastle:HyruleKingReturn_090', 'getAttention': False})
    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    call GeneralSequence.Zelda_hood_off()

    Timer.Wait({'time': 0.699999988079071})

    fork {
        HyruleSoldier[sol3].Talk({'message': 'scenario/StoryAreaHyruleCastle:HyruleKingReturn_100', 'getAttention': False})
    } {
        HyruleSoldier[sol3].PlayAnimation({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier[sol4].PlayAnimation({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HyruleSoldier[sol4].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier[sol4].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HyruleSoldier[sol4].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier[sol4].Talk({'message': 'scenario/StoryAreaHyruleCastle:HyruleKingReturn_110', 'getAttention': False})
    HyruleSoldier[sol4].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier[sol3].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier[sol3].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        HyruleKing.SetFacialExpression({'expression': 'angry'})
        HyruleKing.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.699999988079071})
        HyruleKing.Talk({'message': 'scenario/StoryAreaHyruleCastle:HyruleKingReturn_120', 'getAttention': False})
    } {
        Timer.Wait({'time': 1.0})
        Player.AimActor({'duration': 0.800000011920929, 'actor': ActorIdentifier(name="HyruleKing"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.2000000476837158})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.ResetFacialExpression()
    HyruleKing.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HyruleKing.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.PlayAnimationNoWait({'name': 'talk_nohand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.Talk({'message': 'scenario/StoryAreaHyruleCastle:HyruleKingReturn_130', 'getAttention': False})
    HyruleKing.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HyruleKing.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleKing.SetFacialExpression({'expression': 'smile'})
        HyruleKing.Talk({'message': 'scenario/StoryAreaHyruleCastle:HyruleKingReturn_140', 'getAttention': False})
    }

    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    QuestSystem.SetProgress({'symbol': 'Midpoint:2412815200', 'isShowTelopInEvent': False, 'isFrontFade': False})
    Audio.StopRegionBgm({'fadeSec': 2.5})

    fork {
        Timer.Wait({'time': 2.5})
    } {
        Fade.StartPreset({'preset': 'FadeOutSlowB'})

        fork {
            HyruleSoldier[sol3].Deactivate()
        } {
            HyruleSoldier[sol4].Deactivate()
        }

    }

    GameControl.RequestLevelJump({'level': 'HyruleCastle', 'locator': 'GoThroneRoom', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void IntoDungeonCastle() {

    call EvResetCommon.AllReset()


    fork {

        call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

    } {
        Player.MoveToTargetActor({'speed': 0, 'distance': 1.5, 'actor': ActorIdentifier(name="Player"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    Partner[companion].DisableAutoMovement()
    Partner[companion].MoveToTargetActor({'speed': 1, 'offsetX': 0.0, 'distance': 3.0, 'actor': ActorIdentifier(name="Partner"), 'offsetY': -0.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Player.SetInterestIkEnabled({'enable': True})
    Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Partner[companion].PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Partner"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.2999999523162842})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})

    fork {
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    Timer.Wait({'time': 0.5})
    Partner[companion].PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].TalkKeep({'message': 'scenario/StoryAreaHyruleCastle:IntoDungeon_Castle_010', 'getAttention': False})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaHyruleCastle:IntoDungeon_Castle_020', 'getAttention': False})
    } {
        Partner[companion].PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Player.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
}

void MeetKingHyrule() {

    call EvResetCommon.AllReset()


    fork {
        Player.SetShadowDecalEnable({'enable': False})
    } {

        fork {
            MinisterRight.SetInterestIkEnabled({'enable': False})
            MinisterLeft.SetInterestIkEnabled({'enable': False})
            HyruleKing.SetInterestIkEnabled({'enable': False})
            HyruleKing.ChangeSteeringAnimation({'walk': 'ev_worry_move', 'run': 'ev_worry_move', 'idle': 'wait', 'layer': 0})
            HyruleKing.MoveToCompassPoint({'direction': 3, 'distance': 2.0, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
            HyruleKing.MoveToCompassPoint({'direction': 1, 'distance': 4.0, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
            HyruleKing.MoveToCompassPoint({'direction': 3, 'distance': 2.0, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
            Audio.PlayOneshotSystemSE({'label': 'VO_KNG_005_1', 'volume': 1.0, 'pitch': 1.0})
        } {
            Camera.LookAt3ActorsCenterAsTalker({'weight2': 5.0, 'weight3': 5.0, 'offsetY': 0.949999988079071, 'actor1': ActorIdentifier(name="HyruleKing"), 'actor2': ActorIdentifier(name="MinisterRight"), 'actor3': ActorIdentifier(name="MinisterLeft"), 'weight1': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetZ': 0.0})
        } {
            HyruleKing.SetFacialExpression({'expression': 'sad'})
        }

    }

    Zelda.MoveToTargetLinkedPoint({'index': 0, 'speed': 1, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        HyruleKing.ResetSteeringAnimation()
        HyruleKing.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

        fork {
            HyruleKing.SetFacialExpression({'expression': 'surprise'})
        } {
            HyruleKing.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_UGI_006_4', 'volume': 1.0, 'pitch': 1.0})
        }

        Timer.Wait({'time': 1.0})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        MinisterRight.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

        fork {
            MinisterRight.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MinisterRight.SetFacialExpression({'expression': 'surprise'})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_KNG_006_1', 'volume': 1.0, 'pitch': 1.0})
        }

        Timer.Wait({'time': 1.0})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        MinisterLeft.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

        fork {
            MinisterLeft.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MinisterLeft.SetFacialExpression({'expression': 'surprise'})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_SADARI_006_4', 'volume': 1.0, 'pitch': 1.0})
        }

        Timer.Wait({'time': 1.0})
    }


    fork {
        Camera.LookAt2ActorsCenterAsTalker({'weight1': 1.0, 'weight2': 3.0, 'distanceOffset': 3.0, 'offsetY': 0.949999988079071, 'actor1': ActorIdentifier(name="HyruleKing"), 'actor2': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetZ': 0.0})
    } {
        Zelda.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    HyruleKing.MoveToCompassPoint({'speed': 0, 'direction': 0, 'distance': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    HyruleKing.SetFacialExpression({'expression': 'normal'})
    HyruleKing.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    MinisterRight.MoveToBesideTargetActor({'timeOut': 6.0, 'speed': 1, 'offsetZ': 0.0, 'offsetX': -1.5, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 0.0, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    MinisterRight.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        MinisterRight.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterRight.SetFacialExpression({'expression': 'smile'})
    MinisterRight.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterRight.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_010', 'getAttention': False})
    MinisterRight.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MinisterLeft.SetFacialExpression({'expression': 'smile'})
        MinisterLeft.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'message': 'scenario/StoryAreaA:MeetKingHyrule_030', 'selfTalkAnimName': '', 'selfTalkAnim': False, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        MinisterLeft.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        MinisterLeft.SetFacialExpression({'expression': 'sad'})
        MinisterLeft.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_040', 'getAttention': False})
    } {
        HyruleKing.SetFacialExpression({'expression': 'sleep'})
        MinisterRight.SetFacialExpression({'expression': 'sad'})
    } {
        MinisterLeft.PlayAnimation({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_050', 'getAttention': False})
    } {
        MinisterRight.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        HyruleKing.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.20000000298023224})
        HyruleKing.PlayAnimation({'name': 'talk_nohand', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleKing.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_060', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            MinisterRight.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            MinisterLeft.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    Timer.Wait({'time': 0.20000000298023224})
    Zelda.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HyruleKing.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_070', 'getAttention': False})
    } {
        HyruleKing.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        MinisterRight.SetFacialExpression({'expression': 'smile'})

        fork {
            MinisterRight.PlayAnimation({'name': 'salute', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_UGI_007_5', 'volume': 1.0, 'pitch': 1.0})
        }

        MinisterRight.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterLeft.SetFacialExpression({'expression': 'smile'})

        fork {
            MinisterLeft.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_SADARI_007_5', 'volume': 1.0, 'pitch': 1.0})
        }

        MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        HyruleKing.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_080', 'getAttention': False})
    } {
        HyruleKing.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        Zelda.LookAtTalker({'keep': True, 'offsetY': 0.949999988079071, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetZ': 0.0})
        Zelda.MoveToBesideTargetActor({'speed': 1, 'actor': ActorIdentifier(name="HyruleKing"), 'offsetZ': 2.0, 'offsetX': 0.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Zelda.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Zelda.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.25})
        MinisterRight.MoveToTargetLinkedPoint({'speed': 1, 'index': 10, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        MinisterRight.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MinisterLeft.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        HyruleKing.SetFacialExpression({'expression': 'smile'})
    } {
        HyruleKing.GenericTalkSequenceWithDialog({'aimFromPlayer': False, 'playerTalkAnim': False, 'aimToPlayer': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'message': 'scenario/StoryAreaA:MeetKingHyrule_090', 'selfTalkAnimName': 'talk', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }

    Timer.Wait({'time': 1.0})
    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Camera.LookAt2ActorsCenterAsTalker({'weight2': 1.0, 'weight1': 1.0, 'distanceOffset': 4.0, 'offsetY': 0.949999988079071, 'actor1': ActorIdentifier(name="MinisterLeft"), 'actor2': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetZ': 0.0})

    fork {
        HyruleKing.PlayAnimationNoWait({'name': 'talk_onehand', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleKing.SetFacialExpression({'expression': 'normal'})
        HyruleKing.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_100', 'getAttention': False})
    } {
        MinisterLeft.SetFacialExpression({'expression': 'normal'})
        MinisterRight.SetFacialExpression({'expression': 'normal'})
    }

    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.PlayAnimation({'name': 'talk_hand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.5})
    Zelda.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HyruleKing.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_101', 'getAttention': False})
    } {
        HyruleKing.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleKing.SetFacialExpression({'expression': 'surprise'})
    }


    fork {

        fork {
            HyruleKing.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_102', 'getAttention': False})
        } {
            HyruleKing.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleKing.SetFacialExpression({'expression': 'sleep'})
        }


        fork {
            HyruleKing.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_103', 'getAttention': False})
        } {
            HyruleKing.SetFacialExpression({'expression': 'normal'})
        } {
            HyruleKing.PlayAnimationNoWait({'name': 'talk_nohand', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } {

        fork {
            MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MinisterRight.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }

    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.10000000149011612})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MinisterLeft.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterLeft.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_104', 'getAttention': False})
    } {
        HyruleKing.SetInterestIkEnabled({'enable': True})
        Timer.Wait({'time': 0.10000000149011612})
        HyruleKing.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterLeft.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HyruleKing.ResetAim()
    MinisterLeft.SetInterestIkEnabled({'enable': True})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleKing.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleKing.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_105', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        MinisterLeft.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Timer.Wait({'time': 0.4000000059604645})
        Zelda.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.20000000298023224})
        MinisterRight.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_106', 'getAttention': False})
    } {
        Audio.StopRegionBgm({'fadeSec': 3.0})
        Audio.Prepare({'kind': 0, 'label': 'BGM_EV_COMMON2', 'volume': 1.0})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        HyruleKing.AimCompassPoint({'direction': 0, 'withoutTurn': False, 'duration': 0.4000000059604645, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.44999998807907104})
        HyruleKing.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        MinisterLeft.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.AimCompassPoint({'direction': 0, 'withoutTurn': True, 'duration': 0.4000000059604645, 'immediateTurn': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleKing.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleKing.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_107', 'getAttention': False})
    }

    Audio.PlayBGM({'label': 'BGM_EV_COMMON2', 'volume': 1.0, 'ignoreSkip': True})
    HyruleKing.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_108', 'getAttention': False})
    HyruleKing.PlayAnimationNoWait({'name': 'talk_onehand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_109', 'getAttention': False})
    HyruleKing.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_110', 'getAttention': False})
    HyruleKing.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_111', 'getAttention': False})
    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.10000000149011612})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MinisterLeft.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterLeft.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_112', 'getAttention': False})
        MinisterLeft.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        HyruleKing.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.10000000149011612})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_113', 'getAttention': False})
        MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        HyruleKing.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleKing.SetInterestIkEnabled({'enable': False})
        HyruleKing.AimCompassPoint({'direction': 0, 'withoutTurn': True, 'duration': 0.4000000059604645, 'immediateTurn': False})
        HyruleKing.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleKing.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_114', 'getAttention': False})
        HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HyruleSoldier[sol1].Activate()
    HyruleSoldier[sol1].WarpToActorWithCompassPoint({'direction': 2, 'offsetY': 0.0, 'offsetX': 0.0, 'actor': ActorIdentifier(name="HyruleKing"), 'distance': 11.0})
    HyruleSoldier[sol1].Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_SolReport_010', 'getAttention': False})
    Audio.StopBGM({'label': 'BGM_EV_COMMON2', 'duration': 2.700000047683716})

    fork {
        MinisterRight.AimActor({'actor': ActorIdentifier(name="HyruleSoldier", sub_name="sol1"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MinisterLeft.AimActor({'actor': ActorIdentifier(name="HyruleSoldier", sub_name="sol1"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Zelda.AimActor({'actor': ActorIdentifier(name="HyruleSoldier", sub_name="sol1"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleKing.AimActor({'actor': ActorIdentifier(name="HyruleSoldier", sub_name="sol1"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        HyruleSoldier[sol1].MoveToTargetLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="Area"), 'speed': 1, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        HyruleSoldier[sol1].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        MinisterRight.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})
        Zelda.MoveToTargetLinkedPoint({'index': 13, 'speed': 0, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Zelda.AimActor({'actor': ActorIdentifier(name="HyruleSoldier", sub_name="sol1"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.25})
        HyruleKing.MoveToTargetLinkedPoint({'speed': 0, 'index': 14, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    MinisterRight.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterRight.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_SolReport_020', 'getAttention': False})
    MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier[sol1].PlayAnimation({'name': 'salute', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier[sol1].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier[sol1].Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_SolReport_030', 'getAttention': False})

    fork {
        MinisterLeft.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    MinisterLeft.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_SolReport_040', 'getAttention': False})
    MinisterLeft.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.MoveToTargetLinkedPoint({'index': 12, 'speed': 0, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    HyruleKing.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_SolReport_050', 'getAttention': False})
    HyruleKing.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HyruleSoldier[sol1].PlayAnimation({'name': 'salute,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier[sol1].Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_SolReport_060', 'getAttention': False})
    }

    Audio.StopAllBGM({'duration': 1.0})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    EventFlags.SetFlag({'value': True, 'symbol': 'MeetKingHyrule'})

    call Kingreport()

}

void Kingreport_end() {
    EventFlags.SetLevelFlag({'index': 190, 'value': True})
    Player.SetShadowDecalEnable({'enable': False})
    FlowControl.PreloadTimeline({'filename': 'MeetKingHyrule'})
    Timer.Wait({'time': 2.5})
    HyruleSoldier[sol1].Activate()
    Zelda.WarpToActorLinkedPointWithCompassPoint({'direction': 0, 'index': 13, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetY': 0.0})
    HyruleKing.WarpToActorLinkedPointWithCompassPoint({'direction': 0, 'actor': ActorIdentifier(name="AreaStartTag"), 'index': 12, 'offsetY': 0.0})
    HyruleSoldier[sol1].WarpToActorLinkedPointWithCompassPoint({'index': 0, 'direction': 2, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetY': 0.0})

    fork {
        MinisterRight.AimActor({'duration': 0.009999999776482582, 'actor': ActorIdentifier(name="HyruleSoldier", sub_name="sol1"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MinisterLeft.AimActor({'duration': 0.009999999776482582, 'actor': ActorIdentifier(name="HyruleSoldier", sub_name="sol1"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Zelda.AimActor({'duration': 0.009999999776482582, 'actor': ActorIdentifier(name="HyruleSoldier", sub_name="sol1"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleKing.AimActor({'duration': 0.009999999776482582, 'actor': ActorIdentifier(name="HyruleSoldier", sub_name="sol1"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleKing.SetInterestIkEnabled({'enable': False})
    }


    fork {
        EvTecuum[HyruleKing].Activate()
        EvTecuum[HyruleKing].SetVisibility({'visible': False})
    } {
        EvTecuum[MinisterRight].Activate()
        EvTecuum[MinisterRight].SetVisibility({'visible': False})
    } {
        EvTecuum[MinisterLeft].Activate()
        EvTecuum[MinisterLeft].SetVisibility({'visible': False})
    } {
        FlowControl.Yield_()
        Camera.LookAt2ActorsCenterAsTalker({'weight1': 1.0, 'duration': 0.0, 'chaseRatio': 1.0, 'distanceOffset': 2.0, 'weight2': 3.0, 'offsetY': 0.949999988079071, 'actor1': ActorIdentifier(name="HyruleKing"), 'actor2': ActorIdentifier(name="HyruleSoldier", sub_name="sol1"), 'offsetX': 0.0, 'offsetZ': 0.0})
    }

    FlowControl.Yield_()
    Fade.StartPreset({'preset': 'FadeInNormal'})
    HyruleSoldier[sol1].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier[sol1].Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_SolReport_070', 'getAttention': False})
    HyruleSoldier[sol1].Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_SolReport_080', 'getAttention': False})
    HyruleSoldier[sol1].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.SetFacialExpression({'expression': 'angry'})
    HyruleKing.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_SolReport_090', 'getAttention': False})
    HyruleKing.SetFacialExpression({'expression': 'normal'})
    HyruleKing.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_SolReport_100', 'getAttention': False})
    HyruleKing.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HyruleSoldier[sol1].Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_SolReport_110', 'getAttention': False})
    } {
        HyruleSoldier[sol1].PlayAnimation({'name': 'salute,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HyruleSoldier[sol1].MoveToCompassPoint({'speed': 1, 'direction': 0, 'distance': 8.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    HyruleSoldier[sol1].Deactivate()
    Timer.Wait({'time': 0.699999988079071})

    fork {
        HyruleKing.SetFacialExpression({'expression': 'angry'})
        HyruleKing.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_150', 'getAttention': False})
    } {
        HyruleKing.SetInterestIkEnabled({'enable': True})
        HyruleKing.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.20000000298023224})
        HyruleKing.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.20000000298023224})
        HyruleKing.AimCompassPoint({'direction': 0, 'withoutTurn': True, 'duration': 0.4000000059604645, 'immediateTurn': False})
        HyruleKing.SetInterestIkEnabled({'enable': False})
    }

    MinisterRight.SetTalkerName({'message': 'glossary/Character:Ministers', 'keep': False})

    fork {
        MinisterRight.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_160', 'getAttention': False})
        MinisterRight.SetTalkerName({'message': 'glossary/Character:MinisterRight', 'keep': False})
    } {
        MinisterRight.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        MinisterRight.PlayAnimation({'name': 'salute', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.PlayAnimationEx({'name': 'wait', 'time': 0.0, 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.ResetAim()
    } {
        MinisterLeft.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        MinisterLeft.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterLeft.PlayAnimationEx({'name': 'wait', 'time': 0.0, 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterLeft.ResetAim()
    } {
        Timer.Wait({'time': 0.5})
        Zelda.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Audio.PlayOneshotSystemSE({'label': 'VO_UGI_007_7', 'volume': 1.0, 'pitch': 1.0})
    } {
        Timer.Wait({'time': 0.5})
        Audio.PlayOneshotSystemSE({'label': 'VO_SADARI_007_5', 'volume': 1.0, 'pitch': 1.0})
    }

    HyruleKing.AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Zelda.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="MinisterLeft"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HyruleKing.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_170', 'getAttention': False})
    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        MinisterLeft.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})
        MinisterLeft.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_171', 'getAttention': False})
    }


    fork {
        Timer.Wait({'time': 0.5})
        Zelda.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="MinisterRight"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleKing.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HyruleKing.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_172', 'getAttention': False})

    fork {
        MinisterRight.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_173', 'getAttention': False})
    } {
        MinisterRight.PlayAnimation({'name': 'salute,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HyruleKing.AimCompassPoint({'direction': 0, 'duration': 0.20000000298023224, 'withoutTurn': False, 'immediateTurn': False})
    HyruleKing.PlayAnimationNoWait({'name': 'order_st', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HyruleKing.SetInterestIkEnabled({'enable': False})
    } {
        Player.SetInterestIkEnabled({'enable': False})
    }


    fork {
        HyruleKing.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_174', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.5})
        Zelda.AimCompassPoint({'direction': 1, 'duration': 0.5, 'withoutTurn': False, 'immediateTurn': False})
    }

    Audio.StopAllBGM({'duration': 1.5})
    Audio.PlayOneshotSystemSE({'label': 'SE_EV_SAKEME_SIGN', 'volume': 1.0, 'pitch': 1.0})
    TagEvTailorPlayer.Activate()
    TagEvTailorPlayer.PlayTailorOtherChannelNoWait({'channel': 'Ev_MeetKingHyrule_CrackSign_00', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        MinisterRight.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterLeft.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        HyruleKing.SetCullMode({'cullMode': 0, 'enabled': False})
    } {
        MinisterRight.SetCullMode({'cullMode': 0, 'enabled': False})
    } {
        MinisterLeft.SetCullMode({'cullMode': 0, 'enabled': False})
    } {
        EvThroneRoomWall.Activate()
    } {
        EvCrackMeetKingHyruleCastle.Activate()
        EvCrackMeetKingHyruleCastle.SetAutoCalcBoundingVolumeEnabled({'enabled': True})
    }

    GameControl.ForbidLaunchApplet()

    fork {
        FlowControl.InvokeTimeline({'filename': 'MeetKingHyrule', 'rate': 1.0})
    } {
        Zelda.DislocateComponentToActorLinkedPoint({'name': 'ZeldaSkeletalModelComp', 'pointIndex': 5, 'targetActor': ActorIdentifier(name="AreaStartTag")})
    } {
        HyruleKing.DislocateComponentToActorLinkedPoint({'name': 'skeletalModelComp', 'pointIndex': 5, 'targetActor': ActorIdentifier(name="AreaStartTag")})
    } {
        MinisterRight.DislocateComponentToActorLinkedPoint({'name': 'skeletalModelComp', 'pointIndex': 5, 'targetActor': ActorIdentifier(name="AreaStartTag")})
    } {
        MinisterLeft.DislocateComponentToActorLinkedPoint({'name': 'skeletalModelComp', 'pointIndex': 5, 'targetActor': ActorIdentifier(name="AreaStartTag")})
    } {
        Audio.PlayBGM({'label': 'BGM_EV_HYRULE_CASTLE_UNREST', 'volume': 1.0, 'ignoreSkip': True})
    } {
        EvTecuum[HyruleKing].DislocateComponentToActorLinkedPoint({'name': 'skeletalModelComp', 'pointIndex': 5, 'targetActor': ActorIdentifier(name="AreaStartTag")})
    } {
        EvTecuum[MinisterLeft].DislocateComponentToActorLinkedPoint({'name': 'skeletalModelComp', 'pointIndex': 5, 'targetActor': ActorIdentifier(name="AreaStartTag")})
    } {
        EvTecuum[MinisterRight].DislocateComponentToActorLinkedPoint({'name': 'skeletalModelComp', 'pointIndex': 5, 'targetActor': ActorIdentifier(name="AreaStartTag")})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_CASTLE_SAKEME_APPEAR1', 'volume': 1.0, 'pitch': 1.0})
    }

    EvCrackMeetKingHyruleCastle.SetAutoCalcBoundingVolumeEnabled({'enabled': False})
    GameControl.UnforbidLaunchApplet()

    fork {
        Zelda.PlayAnimationEx({'name': 'ev_wait', 'time': 0.0, 'layer': 0, 'blendFrame': -1, 'restart': False})
        Zelda.RelocateComponent({'name': 'ZeldaSkeletalModelComp'})
        Zelda.WarpToActorLinkedPoint({'index': 9, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetY': 0.0})
        Zelda.AimCompassPoint({'direction': 2, 'duration': 0.009999999776482582, 'withoutTurn': False, 'immediateTurn': False})
    } {

        fork {
            HyruleKing.RelocateComponent({'name': 'skeletalModelComp'})
            HyruleKing.PlayAnimation({'name': 'ev_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MinisterRight.RelocateComponent({'name': 'skeletalModelComp'})
            MinisterRight.PlayAnimation({'name': 'ev_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MinisterLeft.RelocateComponent({'name': 'skeletalModelComp'})
            MinisterLeft.PlayAnimation({'name': 'ev_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HyruleKing.WarpToActorLinkedPointWithCompassPoint({'index': 6, 'direction': 0, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetY': 0.0})
        } {
            MinisterRight.WarpToActorLinkedPointWithCompassPoint({'direction': 0, 'index': 8, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetY': 0.0})
        } {
            MinisterLeft.WarpToActorLinkedPointWithCompassPoint({'direction': 0, 'index': 7, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetY': 0.0})
        } {
            Camera.LookAt2ActorsCenterAsTalker({'weight2': 1.0, 'duration': 0.0, 'chaseRatio': 1.0, 'distanceOffset': 3.0, 'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="HyruleKing"), 'offsetY': 0.949999988079071, 'weight1': 1.0, 'offsetX': 0.0, 'offsetZ': 0.0})
        }

    }


    fork {
        HyruleKing.SetCullMode({'enabled': True, 'cullMode': 1})
    } {
        MinisterRight.SetCullMode({'enabled': True, 'cullMode': 1})
    } {
        MinisterLeft.SetCullMode({'enabled': True, 'cullMode': 1})
    }

    HyruleKing.SetTalkerName({'message': 'glossary/Character:HyruleKing_false', 'keep': False})
    HyruleKing.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_200', 'getAttention': False})
    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HyruleSoldier[sol1].Activate()
        HyruleSoldier[sol1].WarpToActorWithCompassPoint({'offsetY': 0.0, 'offsetX': 1.5, 'direction': 2, 'actor': ActorIdentifier(name="Zelda"), 'distance': -5.0})
        HyruleSoldier[sol1].MoveToBesideTargetActor({'timeOut': 6.0, 'speed': 1, 'customSpeed': 0.0, 'offsetZ': 0.0, 'offsetX': -1.5, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 0.0, 'tolerance': 0.0, 'withoutTurn': False, 'method': 0})
        HyruleSoldier[sol1].SetGravityEnable({'enable': False})
        HyruleSoldier[sol1].SetCollisionEnabled({'enable': False})
    } {
        HyruleSoldier[sol2].Activate()
        HyruleSoldier[sol2].WarpToActorWithCompassPoint({'offsetX': -1.5, 'direction': 2, 'actor': ActorIdentifier(name="Zelda"), 'distance': -5.0, 'offsetY': 0.0})
        HyruleSoldier[sol2].MoveToBesideTargetActor({'timeOut': 6.0, 'speed': 1, 'customSpeed': 0.0, 'offsetZ': 0.0, 'offsetX': 1.5, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 0.0, 'tolerance': 0.0, 'withoutTurn': False, 'method': 0})
        HyruleSoldier[sol2].SetGravityEnable({'enable': False})
        HyruleSoldier[sol2].SetCollisionEnabled({'enable': False})
    }


    fork {
        HyruleSoldier[sol1].SetFacialExpression({'expression': 'surprise'})
        HyruleSoldier[sol1].PlayAnimation({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        HyruleSoldier[sol2].SetFacialExpression({'expression': 'surprise'})
        HyruleSoldier[sol2].PlayAnimation({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 1.0})

    fork {
        HyruleKing.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_210', 'getAttention': False})
    } {
        HyruleKing.GenericTalkSequence({'aimToPlayer': False, 'aimFromPlayer': False, 'playerTalkAnim': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'selfTalkAnimName': 'talk', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    } {
        HyruleKing.SetFacialExpression({'expression': 'angry'})
    }


    fork {
        HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Zelda.PlayAnimation({'name': 'ev_surprise_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        HyruleSoldier[sol1].AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        HyruleSoldier[sol1].PlayAnimation({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier[sol2].AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        HyruleSoldier[sol2].PlayAnimation({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HyruleSoldier[sol1].Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_220', 'getAttention': False})

    fork {
        HyruleKing.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_230', 'getAttention': False})
    } {
        HyruleKing.PlayAnimation({'name': 'talk_onehand', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleKing.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HyruleKing.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HyruleSoldier[sol1].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier[sol1].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.4000000059604645})
        HyruleSoldier[sol1].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        HyruleSoldier[sol2].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.20000000298023224})
        HyruleSoldier[sol2].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.4000000059604645})
        HyruleSoldier[sol2].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }


    fork {
        HyruleKing.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_240', 'getAttention': False})
    } {
        HyruleKing.PlayAnimation({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier[sol1].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        HyruleSoldier[sol2].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.25})

    fork {
        MinisterRight.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterLeft.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        HyruleKing.Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_250', 'getAttention': False})
    } {
        HyruleKing.PlayAnimation({'name': 'order_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleKing.SetFacialExpression({'expression': 'angry'})
    }


    fork {
        HyruleSoldier[sol1].Talk({'message': 'scenario/StoryAreaA:MeetKingHyrule_260', 'getAttention': False})
    } {
        HyruleSoldier[sol1].SetFacialExpression({'expression': 'surprise'})
        HyruleSoldier[sol1].PlayAnimation({'name': 'salute', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier[sol1].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier[sol2].SetFacialExpression({'expression': 'surprise'})
        HyruleSoldier[sol2].PlayAnimation({'name': 'salute', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier[sol2].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleKing.GenericTalkSequence({'aimToPlayer': False, 'aimFromPlayer': False, 'playerTalkAnim': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'selfTalkAnimName': 'wait', 'facial': 'angry', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    }


    fork {
        HyruleSoldier[sol1].SetFacialExpression({'expression': 'normal'})
        HyruleSoldier[sol1].MoveToBesideTargetActor({'timeOut': 6.0, 'speed': 1, 'customSpeed': 0.0, 'offsetZ': -1.5, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': -0.5, 'offsetY': 0.0, 'tolerance': 0.0, 'withoutTurn': False, 'method': 0})
        HyruleSoldier[sol1].AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        HyruleSoldier[sol2].SetFacialExpression({'expression': 'normal'})
        HyruleSoldier[sol2].MoveToBesideTargetActor({'timeOut': 6.0, 'speed': 1, 'customSpeed': 0.0, 'offsetZ': -1.5, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': 0.5, 'offsetY': 0.0, 'tolerance': 0.0, 'withoutTurn': False, 'method': 0})
        HyruleSoldier[sol2].AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Zelda.PlayAnimationEx({'time': 0.0, 'layer': 0, 'name': 'search', 'blendFrame': -1, 'restart': False})
    }


    fork {
        Zelda.SetFacialExpression({'expression': 'depress'})
        Timer.Wait({'time': 0.30000001192092896})

        fork {
            Zelda.PlayAnimationEx({'time': 0.0, 'name': 'ev_MeetKingHyrule_move', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Zelda.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_ZELDA_EV_106_3', 'volume': 1.0, 'pitch': 1.0})
        }

    } {
        Timer.Wait({'time': 3.0})
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
        EventFlags.SetFlag({'symbol': 'EvPrologue008', 'value': True})
        GameControl.RequestLevelJump({'level': 'HyruleCastlePrison', 'locator': 'Ev_HyruleCastlePrison_001_Imprisonment', 'offsetX': 0.0, 'offsetZ': 0.0})
    } {

        fork {
            HyruleSoldier[sol1].MoveToCompassPoint({'direction': 0, 'timeOut': 7.0, 'speed': 0, 'distance': 6.0, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        } {
            HyruleSoldier[sol2].MoveToCompassPoint({'direction': 0, 'distance': 6.0, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        }

    }

    Player.SetShadowDecalEnable({'enable': True})
    EventVariables.SetVariable({'symbol': 'HyruleCastle_LuberiHouse:478259525'})
}

void MeetMinisterRightInTheCastle() {
    GameControl.UnforbidWarp()

    call EvResetCommon.AllReset()


    fork {
        HyruleSoldier023.SetInterestIkEnabled({'enable': False})
    } {
        HyruleSoldier024.SetInterestIkEnabled({'enable': False})
    }


    fork {
        Player.MoveToCompassPoint({'direction': 0, 'speed': 0, 'distance': 3.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Timer.Wait({'time': 0.5})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.699999988079071})
        MinisterRight.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        MinisterRight.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        MinisterRight.Talk({'message': 'scenario/StoryAreaH:MeetMinisterRightInTheCastle_010', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Player.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterRight.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        MinisterRight.MoveToBesideTargetActor({'speed': 1, 'offsetZ': 0.0, 'actor': ActorIdentifier(name="Player"), 'offsetX': -2.5, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        MinisterRight.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].DisableAutoMovement()
        Partner[companion].MoveToBesideTargetActor({'speed': 0, 'withoutTurn': True, 'offsetZ': -1.0, 'offsetY': 1.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': -0.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0})
        Partner[companion].AimActor({'offsetX': -1.0, 'offsetZ': -1.0, 'offsetY': 1.0, 'actor': ActorIdentifier(name="MinisterRight"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'immediateTurn': False})
    }

    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="MinisterRight"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 0.5})
    MinisterRight.SetFacialExpression({'expression': 'smile'})
    MinisterRight.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterRight.Talk({'message': 'scenario/StoryAreaH:MeetMinisterRightInTheCastle_020', 'getAttention': False})
    MinisterRight.ResetFacialExpression()
    MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.2000000476837158})
    MinisterRight.SetFacialExpression({'expression': 'surprise'})
    MinisterRight.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterRight.Talk({'message': 'scenario/StoryAreaH:MeetMinisterRightInTheCastle_030', 'getAttention': False})

    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaH:MeetMinisterRightInTheCastle_035', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.5})
        MinisterRight.ResetFacialExpression()
        MinisterRight.AimActor({'offsetY': -1.0, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        MinisterRight.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'offsetY': -1.0, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterRight.ResetAim()

    fork {
        MinisterRight.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.Talk({'message': 'scenario/StoryAreaH:MeetMinisterRightInTheCastle_040', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterRight.PlayAnimationNoWait({'name': 'salute,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterRight.Talk({'message': 'scenario/StoryAreaH:MeetMinisterRightInTheCastle_050', 'getAttention': False})
    Timer.Wait({'time': 0.20000000298023224})
    MinisterRight.ChangeSteeringAnimation({'run': 'ev_move_fast_powerful', 'idle': 'wait', 'walk': 'move', 'layer': 0})
    MinisterRight.SetFacialExpression({'expression': 'angry'})
    MinisterRight.SetInterestIkEnabled({'enable': False})
    MinisterRight.AimCompassPoint({'direction': 3, 'duration': 0.05000000074505806, 'withoutTurn': False, 'immediateTurn': False})
    MinisterRight.PlayAnimationNoWait({'name': 'salute', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.100000023841858})

    fork {
        MinisterRight.MoveToCompassPoint({'direction': 3, 'speed': 1, 'distance': 10.0, 'customSpeed': 10.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Timer.Wait({'time': 3.0})
        MinisterRight.Deactivate()
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_UGI_009_1', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 1.0})

    fork {
        Partner[companion].ResetAim()
        Partner[companion].PlayAnimationNoWait({'name': 'surprised_st,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaH:MeetMinisterRightInTheCastle_060', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'offsetY': -1.0, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Player.ResetAim()
    Player.SetInterestIkEnabled({'enable': False})
    Timer.Wait({'time': 1.0})
    QuestSystem.SetProgress({'symbol': 'LastDungeon:3474672201', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void notleave() {

    call EvResetCommon.AllReset()


    fork {
        Partner[companion].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'selfTalkAnimName': '', 'message': 'scenario/StoryAreaHyruleCastle:WhenSelectWarp_010', 'aimFromPlayer': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Timer.Wait({'time': 0.699999988079071})

        call GeneralSequence.Look_at_Partner()

    }

    Player.ResetAim()
    Player.MoveToCompassPoint({'direction': 2, 'speed': 1, 'distance': 4.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
}

void InTheCastleBedroom() {

    call EvResetCommon.AllResetNowait()

    Zelda.Heal({'amount': 999})
    Audio.StopAllBGM({'duration': 0.0})
    GameControl.ForbidWarp()
    HyruleKing.Activate()
    Impa.Activate()
    Zelda.SetEquipmentVisibility({'visibility': False})
    Player.WarpToActor({'offsetY': 1.0, 'actor': ActorIdentifier(name="Player"), 'distance': 0.0, 'offsetX': 0.0})
    Player.PlayAnimation({'name': 'sleep_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    if Zelda.CheckOutfit({'outfit': 'Adventure1'}) {
        Zelda.SetZeldaHood({'isOn': False})
    }
    Partner[companion].DisableAutoMovement()
    Partner[companion].WarpToActor({'offsetY': 0.5, 'offsetX': 1.5, 'actor': ActorIdentifier(name="Player"), 'distance': 0.20000000298023224})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Camera.LookAt3ActorsCenterAsTalker({'offsetX': 0.0, 'offsetY': 0.75, 'duration': 0.0, 'chaseRatio': 1.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="HyruleKing"), 'actor3': ActorIdentifier(name="Impa"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'distanceOffset': 0.0, 'offsetZ': 0.0})
    HyruleKing.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Impa"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Impa.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="HyruleKing"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        HyruleKing.PlayAnimationNoWait({'name': 'talk_nohand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Impa.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.5})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    Timer.Wait({'time': 2.0})
    Player.SetFacialExpression({'expression': 'sad'})
    Timer.Wait({'time': 0.10000000149011612})
    Player.SetFacialExpression({'expression': 'sleep'})
    Timer.Wait({'time': 0.3499999940395355})
    Player.SetFacialExpression({'expression': 'sad'})
    Timer.Wait({'time': 1.0})
    Player.SetFacialExpression({'expression': 'sleep'})
    Timer.Wait({'time': 0.10000000149011612})
    Player.SetFacialExpression({'expression': 'serious_few'})
    Timer.Wait({'time': 0.30000001192092896})

    fork {
        Partner[companion].PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.0})
        HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleKing.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        HyruleKing.PlayAnimation({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.30000001192092896})
        HyruleKing.MoveToLinkedPoint({'index': 0, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        HyruleKing.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.0})
        Impa.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Impa.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Impa.PlayAnimation({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.4000000059604645})
        Impa.MoveToLinkedPoint({'index': 0, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Impa.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_SYS_MESSAGE_TORI2', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 0.5})
    HyruleKing.ResetAim()
    HyruleKing.SetFacialExpression({'expression': 'smile'})
    HyruleKing.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.Talk({'message': 'scenario/StoryAreaH:InTheCastleBedroom_010', 'getAttention': False})
    HyruleKing.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Zelda.PlayAnimation({'name': 'ev_getoff_bed', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleKing.ResetFacialExpression()
        HyruleKing.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Zelda.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Zelda.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HyruleKing.SetFacialExpression({'expression': 'smile'})
    HyruleKing.ResetAim()

    fork {
        HyruleKing.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 2.5})
    }

    HyruleKing.ResetFacialExpression()
    HyruleKing.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.Talk({'message': 'scenario/StoryAreaH:InTheCastleBedroom_020', 'getAttention': False})
    HyruleKing.PlayAnimation({'name': 'wait,think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.5})
    HyruleKing.PlayAnimationNoWait({'name': 'wait,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.Talk({'message': 'scenario/StoryAreaH:InTheCastleBedroom_030', 'getAttention': False})
    Audio.Prepare({'label': 'BGM_EV_CASTLE_FINALE_A', 'kind': 0, 'volume': 1.0})
    Timer.Wait({'time': 1.0})

    fork {

        call GeneralSequence.ZeldaTalkMotion_2.0s()

        Zelda.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.0})
        Fade.StartPreset({'preset': 'FadeOutSlowB'})
        Timer.Wait({'time': 2.0})
        Fade.StartPreset({'preset': 'FadeInSlow'})
    } {
        Timer.Wait({'time': 0.800000011920929})
        HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        HyruleKing.Talk({'message': 'scenario/StoryAreaH:InTheCastleBedroom_040', 'getAttention': False})
    } {
        HyruleKing.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.PlayBGMEx({'label': 'BGM_EV_CASTLE_FINALE_A', 'volume': 1.0, 'sec': 0.734000027179718, 'ignoreSkip': False})
    }

    Timer.Wait({'time': 0.5})
    HyruleKing.AimActor({'actor': ActorIdentifier(name="Impa"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        HyruleKing.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleKing.Talk({'message': 'scenario/StoryAreaH:InTheCastleBedroom_050', 'getAttention': False})
    } {

        call _pd224HyruleKing()

    } {
        Timer.Wait({'time': 0.4000000059604645})
        Impa.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Impa.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'actor': ActorIdentifier(name="Impa"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Impa"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 1.0})
    Impa.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Impa.Talk({'message': 'scenario/StoryAreaH:InTheCastleBedroom_060', 'getAttention': False})
    Impa.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HyruleKing.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleKing.Talk({'message': 'scenario/StoryAreaH:InTheCastleBedroom_070', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Impa.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {

        call _pd224HyruleKing()

    }

    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaH:InTheCastleBedroom_080', 'getAttention': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaH:InTheCastleBedroom_090', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        call GeneralSequence.Look_at_Partner()

    } {
        Timer.Wait({'time': 0.4000000059604645})
        HyruleKing.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetY': -1.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Impa.AimActor({'offsetY': -1.0, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaH:InTheCastleBedroom_100', 'getAttention': False})

    fork {
        Timer.Wait({'time': 1.0})
        Zelda.SetFacialExpression({'expression': 'sad'})
        Zelda.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 1.5})
    } {
        Timer.Wait({'time': 1.0})
        Impa.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 1.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 1.0})
    } {
        Timer.Wait({'time': 1.2000000476837158})
        HyruleKing.AimActor({'duration': 1.0, 'actor': ActorIdentifier(name="Zelda"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 1.0})
    }

    Impa.SetFacialExpression({'expression': 'sad'})
    Impa.PlayAnimationNoWait({'name': 'sad_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Impa.Talk({'message': 'scenario/StoryAreaH:InTheCastleBedroom_105', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="Impa"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})
    Partner[companion].PlayAnimationNoWait({'name': 'ev_think', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaH:InTheCastleBedroom_110', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        call GeneralSequence.Look_at_Partner()

    } {
        Timer.Wait({'time': 0.4000000059604645})
        Impa.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Impa.AimActor({'duration': 1.0, 'actor': ActorIdentifier(name="Partner"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        HyruleKing.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleKing.AimActor({'duration': 1.0, 'actor': ActorIdentifier(name="Partner"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Partner[companion].PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaH:InTheCastleBedroom_120', 'getAttention': False})
    Timer.Wait({'time': 1.0})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaH:InTheCastleBedroom_130', 'getAttention': False})
    } {
        Timer.Wait({'time': 1.0})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    HyruleKing.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HyruleKing.ResetAim()
    Timer.Wait({'time': 0.5})

    fork {
        HyruleKing.PlayAnimationNoWait({'name': 'talk_nohand', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleKing.Talk({'message': 'scenario/StoryAreaH:InTheCastleBedroom_140', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.ResetFacialExpression()
        Player.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'offsetX': 0.5, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Impa.ResetFacialExpression()
        Impa.AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'offsetX': 1.5, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    HyruleKing.PlayAnimation({'name': 'no', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HyruleKing.Talk({'message': 'scenario/StoryAreaH:InTheCastleBedroom_150', 'getAttention': False})
    } {
        Timer.Wait({'time': 1.0})
        Impa.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})

    fork {
        Timer.Wait({'time': 0.5})
        Zelda.SetFacialExpression({'expression': 'normal'})

        call GeneralSequence.Look_at_Partner_neck()

    } {
        Partner.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner.ResetAim()
        Timer.Wait({'time': 0.699999988079071})
        Partner.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 1.0})
    Audio.StopAllBGM({'duration': 3.0})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    Zelda.SetEquipmentVisibility({'visibility': True})
    Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleKing.Deactivate()
    Impa.Deactivate()
    HyruleKing.SetInstanceVariableBool({'name': 'InTheCastleBedroom', 'value': True})
    Impa.SetInstanceVariableBool({'name': 'InTheCastleBedroom', 'value': True})

    fork {
        Player.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="AreaStartTag"), 'index': 0, 'offsetY': 0.0})
        Player.AimCompassPoint({'direction': 0, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
        Timer.Wait({'time': 0.20000000298023224})
        Partner.WarpToDefaultPosition({'avoidPlayer': True, 'position': 1, 'avoidWall': False})
        Partner.AimCompassPoint({'direction': 0, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 2.0})
    } {
        Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})
    }

    Fade.StartPreset({'preset': 'FadeInSlow'})
    Audio.SetTimeToRegionBgmPlay({'waitSec': 2.0})
    Audio.PlayZoneBGM({'stopbgm': False})
    switch QuestSystem.CheckProgress({'symbol': 'Snowmountain:776505974'}) {
      case 4294967295:
        QuestSystem.SetProgress({'symbol': 'Snowmountain:776505974', 'isShowTelopInEvent': False, 'isFrontFade': False})
        QuestSystem.SetProgress({'symbol': 'LastDungeon:868176213', 'isShowTelopInEvent': False, 'isFrontFade': False})
      case 0:
        switch QuestSystem.CheckProgress({'symbol': 'Volcano:1474105390'}) {
          case 4294967295:
            QuestSystem.SetProgress({'symbol': 'Volcano:1474105390', 'isShowTelopInEvent': False, 'isFrontFade': False})
            QuestSystem.SetProgress({'symbol': 'LastDungeon:868176213', 'isShowTelopInEvent': False, 'isFrontFade': False})
          case 0:
            if QuestSystem.CheckProgress({'symbol': 'Jungle:425818924'}) in [4294967295, 0] {
                QuestSystem.SetProgress({'symbol': 'Jungle:425818924', 'isShowTelopInEvent': False, 'isFrontFade': False})
                QuestSystem.SetProgress({'symbol': 'LastDungeon:868176213', 'isShowTelopInEvent': False, 'isFrontFade': False})
            }
        }
    }
}

void _pd224HyruleKing() {

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'offsetX': 1.5, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void Kingreport() {

    fork {
        Movie.Prepare({'filename': 'rd005_MeetKingHyrule'})
    } {
        Audio.StopAllBGM({'duration': 0.0})
    } {
        Audio.StopZoneBgm()
    } {
        Audio.StopZoneBaseAmbience()
    } {
        GameControl.ForbidLaunchApplet()
    }


    fork {
        Movie.Play({'autoClose': False})
    } {
        Audio.PlayBGM({'label': 'BGM_EV_COMMON3', 'volume': 1.0, 'ignoreSkip': True})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_FIELD_SAKEME_APPEAR1', 'volume': 1.0, 'pitch': 1.0})
    } {
        Timer.Wait({'time': 7.5})
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_FIELD_SAKEME_APPEAR2', 'volume': 1.0, 'pitch': 1.0})
    }

    Fade.StartPreset({'preset': 'CutOutB'})

    fork {
        Movie.Close()
    } {
        GameControl.UnforbidLaunchApplet()
    }

    EventFlags.SetFlag({'symbol': 'EvPrologue008', 'value': True})
    GameControl.RequestLevelJump({'locator': 'Kingreport_end', 'level': 'HyruleCastle', 'offsetX': 0.0, 'offsetZ': 0.0})
}
