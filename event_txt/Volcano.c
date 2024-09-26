-------- EventFlow: Volcano --------

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['CheckProgress', 'GetStatus']
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult4']
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckMessgaeFlag']
params: None

Actor: FlowControl
entrypoint: None()
actions: ['InvokeTimeline', 'PreloadTimeline']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['PlayAnimation', 'MoveToBesideTargetActor', 'SetInterestIkEnabled', 'AimActor', 'ResetAim', 'AimToLocation', 'MoveToDefaultPosition', 'DisableAutoMovement']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump', 'ForbidLaunchApplet', 'UnforbidLaunchApplet']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: GoronChief
entrypoint: None()
actions: ['Talk', 'PlayAnimation', 'PlayAnimationNoWait', 'AimPlayer', 'DislocateComponentToActorLinkedPoint', 'ResetFacialExpression', 'SetFacialExpression', 'SetInterestIkEnabled', 'LookAtTalker', 'AimActor', 'MoveToLocation', 'RelocateComponent', 'AimDegreeAngle', 'AimToLocation', 'ResetAim', 'MoveToCompassPoint', 'SetDefaultFacialExpression', 'SetInstanceVariableString', 'PlayMaterialAnimation', 'Deactivate', 'ChangeSteeringAnimation', 'MoveToBesideTargetActor', 'SkipAutoTurn']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor', 'PlayAnimation', 'SetShadowDecalEnable', 'MoveToTargetLinkedPoint', 'WarpToActorLinkedPoint', 'SetInterestIkEnabled', 'ResetFacialExpression', 'PlayAnimationNoWait', 'AimCompassPoint', 'SetVisibility', 'LookAtTalker', 'PlayTailorOtherChannelNoWait', 'AimToLocation', 'MoveToBesideTargetActor', 'KeepDistanceFromActor']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'Reset', 'LerpDofSettings', 'MoveToWithTimeout']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['MoveToCompassPoint']
queries: []
params: None

Actor: Goron004
entrypoint: None()
actions: ['Deactivate', 'DislocateComponentToActorLinkedPoint']
queries: []
params: None

Actor: Goron007
entrypoint: None()
actions: ['Deactivate', 'DislocateComponentToActorLinkedPoint']
queries: []
params: None

Actor: Goron003
entrypoint: None()
actions: ['Deactivate', 'DislocateComponentToActorLinkedPoint', 'Talk']
queries: []
params: None

Actor: Goron002
entrypoint: None()
actions: ['Deactivate', 'DislocateComponentToActorLinkedPoint', 'SetComponentActive']
queries: []
params: None

Actor: Goron009
entrypoint: None()
actions: ['Deactivate', 'DislocateComponentToActorLinkedPoint']
queries: []
params: None

Actor: Goron000
entrypoint: None()
actions: ['Deactivate', 'DislocateComponentToActorLinkedPoint']
queries: []
params: None

Actor: GoronC000
entrypoint: None()
actions: ['Deactivate', 'DislocateComponentToActorLinkedPoint']
queries: []
params: None

Actor: GoronC001
entrypoint: None()
actions: ['Deactivate', 'DislocateComponentToActorLinkedPoint']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: ['LookAtGimmicksLinkedPoint']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayBGM', 'StopRegionBgm', 'PlayZoneBGM', 'StopBGM', 'Prepare', 'StopAllBGM']
queries: []
params: None

Actor: Goron008
entrypoint: None()
actions: ['Talk', 'MoveToCompassPoint', 'Deactivate', 'AimActor', 'LookAtTalker', 'PlayAnimationNoWait', 'SetInterestIkEnabled', 'ResetFacialExpression', 'SetFacialExpression', 'PlayAnimation', 'AimCompassPoint']
queries: []
params: None

Actor: LocationInfoUI
entrypoint: None()
actions: ['PreloadArchive', 'Show', 'Hide']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'AimActor', 'LookAtTalker', 'PlayAnimationNoWait', 'PlayAnimation', 'Activate', 'AimPlayer', 'WarpToActor', 'AimCompassPoint', 'MoveToBesideTargetActor', 'EnableAutoMovement', 'DisableAutoMovement', 'SetVisibility', 'WarpToActorWithCompassPoint', 'SetInterestIkEnabled', 'SetCullMode']
queries: []
params: None

Actor: TransitCounters
entrypoint: None()
actions: ['SetValue']
queries: []
params: None

Actor: Movie
entrypoint: None()
actions: ['Play', 'Close', 'Prepare']
queries: []
params: None

Actor: evAirWallcommon
entrypoint: None()
actions: ['Destroy']
queries: []
params: None

Actor: AreaStartTag
entrypoint: None()
actions: []
queries: []
params: None

void BlockedCrater() {
    Area.LookAtGimmicksLinkedPoint({'pointIndex': 0, 'distanceOffset': 5.0, 'chaseRatio': 0.05000000074505806, 'duration': 0.05000000074505806, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 2.0})
    Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaC:BlockedCrater_010', 'cameraLookAt': False, 'selfTalkAnim': True, 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaC:BlockedCrater_020', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaC:BlockedCrater_030', 'getAttention': False})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    QuestSystem.SetProgress({'symbol': 'Volcano:3637142808', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventVariables.SetVariable({'symbol': 'Volcano:3637142808'})
}

void HelpMeAgainGoro() {
    GoronChief.SetDefaultFacialExpression({'expression': 'normal'})
    GoronChief.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    call EvResetCommon.AllReset()

    GoronChief.SetFacialExpression({'expression': 'frown'})

    call AreaStartCommon.FieldWalkIn()

    Zelda.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GoronChief.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Event290:
    GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_010', 'getAttention': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_010_02', 'getAttention': False})
    Timer.Wait({'time': 1.0})
    GoronChief.PlayAnimationNoWait({'name': 'think03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_010_03', 'getAttention': False})
    Partner[companion].DisableAutoMovement()

    fork {
        Zelda.MoveToTargetLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="GoronChief"), 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].MoveToBesideTargetActor({'actor': ActorIdentifier(name="GoronChief"), 'speed': 0, 'offsetX': 1.5, 'offsetY': 1.0, 'offsetZ': 3.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    }


    fork {
        Zelda.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.25})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.20000000298023224})
    GoronChief.LookAtTalker({'offsetX': 1.0, 'offsetZ': 0.30000001192092896, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetY': 0.0, 'keep': False})
    Timer.Wait({'time': 0.5})
    GoronChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.SetInterestIkEnabled({'enable': True})
    GoronChief.SetFacialExpression({'expression': 'sleep'})

    fork {
        GoronChief.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        GoronChief.SetFacialExpression({'expression': 'normal'})
    }

    Timer.Wait({'time': 0.5})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_020', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'ev_think', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_030', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        GoronChief.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GoronChief.ResetFacialExpression()

    fork {
        GoronChief.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GoronChief.PlayAnimation({'name': 'talk_stoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GoronChief.SetInterestIkEnabled({'enable': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_040', 'getAttention': False})
    GoronChief.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GoronChief.SetFacialExpression({'expression': 'smile'})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_Q1_010', 'getAttention': False})
    Event24:
    switch Dialog.GetLastResult4({'resultOnSkip': 2}) {
      case 0:
        GoronChief.SetFacialExpression({'expression': 'smile'})
        GoronChief.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GoronChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_Q1_A1_010', 'getAttention': False})
        GoronChief.SetFacialExpression({'expression': 'sad'})
        GoronChief.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_Q1_A1_010_02', 'getAttention': False})
        Event396:
        GoronChief.ResetFacialExpression()
        GoronChief.PlayAnimation({'name': 'talk_stoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_Q1_020', 'getAttention': False})
        goto Event24
      case 1:
        GoronChief.SetFacialExpression({'expression': 'smile'})
        GoronChief.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GoronChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_Q1_A2_010', 'getAttention': False})
        GoronChief.SetFacialExpression({'expression': 'sleep'})
        GoronChief.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.SetFacialExpression({'expression': 'sad'})
        GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_Q1_A2_010_02', 'getAttention': False})
        goto Event396
      case 2:
        GoronChief.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.PlayAnimationNoWait({'name': 'talk_stoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.SetFacialExpression({'expression': 'sad'})
        GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_Q1_A3_010', 'getAttention': False})
        GoronChief.PlayAnimationNoWait({'name': 'wait_stoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_050', 'getAttention': False})
        GoronChief.SetInterestIkEnabled({'enable': True})

        fork {
            GoronChief.SetFacialExpression({'expression': 'sleep'})

            fork {
                GoronChief.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.20000000298023224})
                GoronChief.SetFacialExpression({'expression': 'normal'})
            }

        } {
            Timer.Wait({'time': 0.30000001192092896})

            call GeneralSequence.Look_at_Partner_neck()

        }

        Partner[companion].Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_060', 'getAttention': False})
        GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GoronChief.SetInterestIkEnabled({'enable': False})
        GoronChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_070', 'getAttention': True})
        } {
            Timer.Wait({'time': 0.30000001192092896})
            Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        GoronChief.SetInterestIkEnabled({'enable': False})
        GoronChief.SetFacialExpression({'expression': 'frown'})
        GoronChief.PlayAnimation({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 2.0})
        GoronChief.ResetFacialExpression()
        GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_070_02', 'getAttention': False})
        GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner.ResetAim()
        Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_080', 'getAttention': False})

        fork {
            GoronChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_090', 'getAttention': False})
        } {
            Timer.Wait({'time': 0.5})
            Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Timer.Wait({'time': 0.5})
        GoronChief.SetFacialExpression({'expression': 'sleep'})
        GoronChief.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_100', 'getAttention': False})
        Timer.Wait({'time': 1.0})
        GoronChief.ResetFacialExpression()
        GoronChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.20000000298023224})
        GoronChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GoronChief.SetFacialExpression({'expression': 'sleep'})
        GoronChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.ResetFacialExpression()
        GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_120', 'getAttention': False})
        Timer.Wait({'time': 1.5})
        GoronChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_130', 'getAttention': False})

        fork {
            GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_130_02', 'getAttention': False})
        } {
            Timer.Wait({'time': 0.5})
            GoronChief.SetInterestIkEnabled({'enable': True})
            GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            GoronChief.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        GoronChief.ResetAim()
        GoronChief.SetInterestIkEnabled({'enable': False})
        GoronChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Event66:
        GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_Q2', 'getAttention': False})
        switch Dialog.GetLastResult4({'resultOnSkip': 2}) {
          case 0:
            GoronChief.PlayAnimation({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_Q2_A1_010', 'getAttention': False})
            goto Event66
          case 1:
            GoronChief.PlayAnimation({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_Q2_A2_010', 'getAttention': False})
            goto Event66
          case 2:
            GoronChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_200', 'getAttention': False})
            GoronChief.LookAtTalker({'offsetX': 1.0, 'offsetZ': 0.30000001192092896, 'keep': True, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetY': 0.0})
            Timer.Wait({'time': 0.5})
            GoronChief.MoveToCompassPoint({'direction': 3, 'distance': 1.5, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
            Timer.Wait({'time': 0.30000001192092896})
            GoronChief.SetDefaultFacialExpression({'expression': 'frown'})
            GoronChief.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 0.5})
            GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_210', 'getAttention': False})
            GoronChief.PlayAnimationNoWait({'name': 'think03', 'layer': 0, 'blendFrame': -1, 'restart': False})
            GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_220', 'getAttention': False})
            Timer.Wait({'time': 1.0})
            Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Partner[companion].Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_230', 'getAttention': False})

            fork {
                Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Camera.LookAt2ActorsCenterAsTalker({'actor2': ActorIdentifier(name="Player"), 'actor1': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
            }

            Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})

            fork {
                Partner[companion].Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_240', 'getAttention': False})
            } {
                Timer.Wait({'time': 0.20000000298023224})

                call GeneralSequence.Look_at_Partner()

            }

            GoronChief.SetInstanceVariableString({'name': 'idleAnim', 'value': 'think01'})
            GoronChief.SkipAutoTurn()
            EventVariables.SetVariable({'symbol': 'Volcano:4182818630'})
            EventVariables.SetVariable({'symbol': 'VolcanoPointA:3399862492'})
            EventVariables.SetVariable({'symbol': 'VolcanoPointB:4216181313'})
            QuestSystem.SetProgress({'symbol': 'Volcano:4182818630', 'isShowTelopInEvent': False, 'isFrontFade': False})
        }
    }
}

void RecognizedGoronChief() {

    call EvResetCommon.AllResetNowait()

    Audio.StopAllBGM({'duration': 0.0})

    call MapWarpInVolcano()

    Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Zelda.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        GoronChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="GoronChief"), 'actor2': ActorIdentifier(name="Zelda"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        GoronChief.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.SetFacialExpression({'expression': 'smile'})
    }

    GoronChief.Talk({'message': 'scenario/StoryAreaC:RecognizedGoronChief_010', 'getAttention': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:RecognizedGoronChief_020', 'getAttention': False})
    GoronChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:RecognizedGoronChief_030', 'getAttention': False})
    GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    QuestSystem.SetProgress({'symbol': 'Volcano:103143046', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventVariables.SetVariable({'symbol': 'Volcano:103143046'})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    GameControl.RequestLevelJump({'level': 'Field', 'locator': 'RecognizedGoronChief_3', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void RecognizedGoronChief_3() {

    call EvResetCommon.AllResetNowait()

    Audio.StopRegionBgm({'fadeSec': 2.0})
    Audio.Prepare({'label': 'BGM_EV_VOLCANO_FINALE', 'kind': 0, 'volume': 1.0})
    Partner[companion].Activate()
    Zelda.SetShadowDecalEnable({'enable': False})

    fork {
        GoronC001.DislocateComponentToActorLinkedPoint({'pointIndex': 2, 'name': 'skeletalModelComp', 'targetActor': ActorIdentifier(name="AreaStartTag")})
    } {
        GoronC000.DislocateComponentToActorLinkedPoint({'name': 'skeletalModelComp', 'pointIndex': 2, 'targetActor': ActorIdentifier(name="AreaStartTag")})
    } {
        Goron007.DislocateComponentToActorLinkedPoint({'name': 'skeletalModelComp', 'pointIndex': 2, 'targetActor': ActorIdentifier(name="AreaStartTag")})
    } {
        Goron004.DislocateComponentToActorLinkedPoint({'name': 'skeletalModelComp', 'pointIndex': 2, 'targetActor': ActorIdentifier(name="AreaStartTag")})
    } {
        Goron009.DislocateComponentToActorLinkedPoint({'name': 'skeletalModelComp', 'pointIndex': 2, 'targetActor': ActorIdentifier(name="AreaStartTag")})
    } {
        Goron002.DislocateComponentToActorLinkedPoint({'name': 'skeletalModelComp', 'pointIndex': 2, 'targetActor': ActorIdentifier(name="AreaStartTag")})
        Goron002.SetComponentActive({'name': 'aimControlComp', 'active': False})
    } {
        Goron000.DislocateComponentToActorLinkedPoint({'name': 'skeletalModelComp', 'pointIndex': 2, 'targetActor': ActorIdentifier(name="AreaStartTag")})
    } {
        Goron003.DislocateComponentToActorLinkedPoint({'name': 'skeletalModelComp', 'pointIndex': 2, 'targetActor': ActorIdentifier(name="AreaStartTag")})
    } {
        Partner[companion].WarpToActor({'actor': ActorIdentifier(name="Zelda"), 'distance': 0.0, 'offsetY': 0.0, 'offsetX': 0.0})
        Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        GoronChief.DislocateComponentToActorLinkedPoint({'name': 'skeletalModelComp', 'pointIndex': 2, 'targetActor': ActorIdentifier(name="AreaStartTag")})
    }


    fork {
        FlowControl.PreloadTimeline({'filename': 'RecognizedGoronChief'})
    } {
        GameControl.ForbidLaunchApplet()
    }

    Audio.PlayBGM({'ignoreSkip': False, 'label': 'BGM_EV_VOLCANO_FINALE', 'volume': 1.0})
    Camera.LerpDofSettings({'kind': 7, 'TiltShiftCenterY': 0.75, 'TiltShiftRange': 0.20000000298023224, 'TiltShiftGamma': 2.0, 'TiltShiftBlurSizeScale': 1.0, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofBackRange': 5.0, 'TiltShiftDofBackCurve': 0.5, 'TiltShiftDofBackBlurFadeWidth': 0.05000000074505806, 'TiltShiftDofBlurRatio': 1.0, 'FocalDistance': 35.0, 'FocusRange': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'BlurSizeScale': 1.0, 'BlurRatio': 1.0, 'TiltShiftCenterX': 0.0, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftDofFocalDistance': 35.0, 'duration': 0.0, 'noWait': False})
    FlowControl.InvokeTimeline({'filename': 'RecognizedGoronChief', 'rate': 1.0})
    Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})

    fork {
        Goron004.Deactivate()
        Goron009.Deactivate()
    } {
        Goron007.Deactivate()
        Goron000.Deactivate()
    } {
        Goron003.Deactivate()
        GoronC000.Deactivate()
    } {
        Goron002.SetComponentActive({'name': 'aimControlComp', 'active': True})
        Goron002.Deactivate()
        GoronC001.Deactivate()
    } {
        GameControl.UnforbidLaunchApplet()
    }

    GoronChief.RelocateComponent({'name': 'skeletalModelComp'})
    Partner[companion].Activate()
    Partner[companion].SetCullMode({'cullMode': 0, 'enabled': True})
    Zelda.WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetY': 0.0})
    GoronChief.PlayAnimationNoWait({'name': 'wait_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.MoveToBesideTargetActor({'speed': 1, 'offsetX': 1.5, 'actor': ActorIdentifier(name="GoronChief"), 'offsetZ': -1.5, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].EnableAutoMovement()
    Partner[companion].MoveToBesideTargetActor({'offsetY': 1.0, 'offsetX': -1.0, 'speed': 1, 'offsetZ': 1.0, 'actor': ActorIdentifier(name="Zelda"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="GoronChief"), 'actor2': ActorIdentifier(name="Zelda"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    GoronChief.RelocateComponent({'name': 'skeletalModelComp'})
    GoronChief.ResetFacialExpression()

    fork {
        GoronChief.PlayAnimationNoWait({'name': 'happy_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GoronChief.SetFacialExpression({'expression': 'smile'})
    }

    GoronChief.ChangeSteeringAnimation({'walk': 'move_nostoneslab', 'idle': 'wait_nostoneslab', 'run': 'move_fast', 'layer': 0})
    Zelda.ResetFacialExpression()
    Zelda.SetShadowDecalEnable({'enable': True})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:RecognizedGoronChief_040', 'getAttention': False})

    fork {
        GoronChief.PlayAnimationNoWait({'name': 'wait_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.ResetFacialExpression()
    }

    Timer.Wait({'time': 0.5})

    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:RecognizedGoronChief_050', 'getAttention': False})
        GoronChief.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})
        Audio.PlayZoneBGM({'stopbgm': True})
    }

    GoronChief.Talk({'message': 'scenario/StoryAreaC:RecognizedGoronChief_060', 'getAttention': False})

    fork {
        GoronChief.PlayAnimationNoWait({'name': 'no_nostoneslab,wait_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:RecognizedGoronChief_070', 'getAttention': False})
    } {
        GoronChief.SetFacialExpression({'expression': 'angry'})
    }


    fork {
        GoronChief.PlayAnimationNoWait({'name': 'yes_nostoneslab,wait_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:RecognizedGoronChief_080', 'getAttention': False})
    } {
        GoronChief.SetFacialExpression({'expression': 'smile'})
    }

    GoronChief.PlayAnimationNoWait({'name': 'talk_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:RecognizedGoronChief_090', 'getAttention': False})
    GoronChief.PlayAnimation({'name': 'yes_nostoneslab,wait_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron003.Talk({'message': 'scenario/StoryAreaC:RecognizedGoronChief_100', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.699999988079071})
        GoronChief.ResetFacialExpression()
        GoronChief.SetInterestIkEnabled({'enable': True})
        Partner.SetInterestIkEnabled({'enable': True})
        Zelda.SetInterestIkEnabled({'enable': True})

        fork {
            GoronChief.AimToLocation({'withoutTurn': True, 'location': 'Field_Volcano_005', 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})

            fork {
                Partner.AimToLocation({'withoutTurn': True, 'location': 'Field_Volcano_005', 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Zelda.AimToLocation({'withoutTurn': True, 'location': 'Field_Volcano_005', 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }

        }

    }


    fork {
        GoronChief.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GoronChief.SetFacialExpression({'expression': 'smile'})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            Partner.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Zelda.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    GoronChief.SetInterestIkEnabled({'enable': False})
    GoronChief.PlayAnimationNoWait({'name': 'talk_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:RecognizedGoronChief_110', 'getAttention': False})
    GoronChief.PlayAnimationNoWait({'name': 'wait_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.AimToLocation({'location': 'Field_Volcano_005', 'withoutTurn': False, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.4000000059604645})

    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:RecognizedGoronChief_120', 'getAttention': False})
    } {
        GoronChief.PlayAnimationNoWait({'name': 'yes_nostoneslab,wait_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GoronChief.MoveToLocation({'speed': 1, 'location': 'Field_Volcano_005', 'distance': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    GoronChief.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.4000000059604645})
    GoronChief.PlayAnimationNoWait({'name': 'yes_nostoneslab,wait_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:RecognizedGoronChief_130', 'getAttention': False})
    } {
        GoronChief.SetFacialExpression({'expression': 'smile'})
    }

    Timer.Wait({'time': 0.4000000059604645})
    GoronChief.AimDegreeAngle({'angle': 180.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        GoronChief.PlayMaterialAnimation({'name': 'fade_out', 'layer': 0})
    } {
        GoronChief.MoveToCompassPoint({'direction': 2, 'speed': 1, 'distance': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    GoronChief.Deactivate()
    Timer.Wait({'time': 1.0})
    Zelda.SetInterestIkEnabled({'enable': False})

    fork {
        Partner[companion].GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'message': 'scenario/StoryAreaC:RecognizedGoronChief_140', 'playerTalkAnim': False, 'cameraLookAt': True, 'aimFromPlayer': False, 'aimToPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Timer.Wait({'time': 0.5})
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Partner"), 'offsetY': -0.6000000238418579, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].SetInterestIkEnabled({'enable': False})
    Partner[companion].PlayAnimation({'name': 'yes02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Audio.StopBGM({'duration': 2.0, 'label': 'BGM_EV_VOLCANO_FINALE'})
    switch QuestSystem.GetStatus({'questKey': 'Firework_Valcano010'}) {
      case [0, 1]:
        Event191:
        switch QuestSystem.CheckProgress({'symbol': 'Snowmountain:776505974'}) {
          case 4294967295:
            switch QuestSystem.CheckProgress({'symbol': 'Jungle:425818924'}) {
              case 4294967295:

                fork {
                    Partner[companion].PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                } {
                    Partner[companion].Talk({'message': 'scenario/StoryAreaC:RecognizedGoronChief_150', 'getAttention': False})
                }

                Event112:
                EventVariables.SetVariable({'symbol': 'Volcano:1474105390'})
                EventFlags.SetFlag({'value': True, 'symbol': 'volcano_WedgeActive'})
                switch QuestSystem.CheckProgress({'symbol': 'Snowmountain:776505974'}) {
                  case 4294967295:
                    switch QuestSystem.CheckProgress({'symbol': 'Jungle:425818924'}) {
                      case 4294967295:

                        fork {
                            Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
                        } {
                            Partner[companion].Talk({'message': 'scenario/StoryAreaC:RecognizedGoronChief_160', 'getAttention': False})
                        }

                        QuestSystem.SetProgress({'symbol': 'Volcano:1474105390', 'isShowTelopInEvent': False, 'isFrontFade': False})
                        QuestSystem.SetProgress({'symbol': 'LinkQuest:2946521465', 'isShowTelopInEvent': False, 'isFrontFade': False})
                      case 0:

                        fork {
                            Partner[companion].Talk({'message': 'scenario/StoryAreaC:RecognizedGoronChief_180', 'getAttention': False})
                        } {
                            Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
                        }

                        QuestSystem.SetProgress({'symbol': 'Volcano:1474105390', 'isShowTelopInEvent': False, 'isFrontFade': False})
                        QuestSystem.SetProgress({'symbol': 'LinkQuest:1187802142', 'isShowTelopInEvent': False, 'isFrontFade': False})
                    }
                  case 0:
                    switch QuestSystem.CheckProgress({'symbol': 'Jungle:425818924'}) {
                      case 4294967295:

                        fork {
                            Partner[companion].Talk({'message': 'scenario/StoryAreaC:RecognizedGoronChief_170', 'getAttention': False})
                        } {
                            Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
                        }

                        QuestSystem.SetProgress({'symbol': 'Volcano:1474105390', 'isShowTelopInEvent': False, 'isFrontFade': False})
                        QuestSystem.SetProgress({'symbol': 'LinkQuest:2994718262', 'isShowTelopInEvent': False, 'isFrontFade': False})
                      case 0:

                        call CopiedZelda()

                    }
                }
              case [0, 1]:
                Event365:

                fork {
                    Partner[companion].Talk({'message': 'scenario/StoryAreaC:RecognizedGoronChief_155', 'getAttention': False})
                } {
                    Partner[companion].PlayAnimationNoWait({'name': 'yes02,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                }

                goto Event112
            }
          case [0, 1]:
            goto Event365
        }
      case 2:
        TransitCounters.SetValue({'key': 'VolcanoSubQuests', 'value': 2})
        goto Event191
    }
}

void VolcanoOverview() {

    call EvResetCommon.AllReset()

    Event207:

    fork {
        Timer.Wait({'time': 0.5})
    } {
        LocationInfoUI.PreloadArchive()
    } {
        Partner.MoveToBesideTargetActor({'speed': 1, 'offsetY': 4.0, 'offsetZ': -2.0, 'actor': ActorIdentifier(name="Player"), 'offsetX': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    }

    Partner.PlayAnimation({'name': 'lookaround02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Camera.MoveToWithTimeout({'maxSpeed': 3.0, 'timeout': 3.0, 'targetPositionY': 21.0, 'targetPositionX': 86.0, 'targetPositionZ': 157.0, 'chaseRatio': 0.07999999821186066})
    } {
        Movie.Prepare({'filename': 'rd040_VolcanoOverview'})
    } {
        GameControl.ForbidLaunchApplet()
    }


    fork {
        Movie.Play({'autoClose': False})
    } {
        Timer.Wait({'time': 1.0})
        LocationInfoUI.Show({'message': 'glossary/Location:Field_011', 'eventMessage': 'ui/LocationInfo:LocationInfo_Field_Volcano'})
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
    Partner.MoveToBesideTargetActor({'speed': 1, 'offsetY': 1.0, 'offsetX': -1.0, 'actor': ActorIdentifier(name="Player"), 'offsetZ': -1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})

    fork {
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'chaseRatio': 0.10000000149011612, 'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }


    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaC:Volcano_Overview_010', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    if EventFlags.CheckMessgaeFlag({'message': 'scenario/StoryAreaC:PeopleWorriedVolcanoes_Q1_A1_030'}) {

        fork {
            Partner[companion].Talk({'message': 'scenario/StoryAreaC:Volcano_Overview_020', 'getAttention': False})
        } {
            Partner[companion].PlayAnimationNoWait({'name': 'ev_think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }
    EventVariables.SetVariable({'symbol': 'Volcano:462064560'})
    QuestSystem.SetProgress({'symbol': 'Volcano:462064560', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void CopiedZelda() {

    call GeneralSequence.CopiedZelda({'region': 0})

}

void HelpMeAgainGoro_Field_Right() {
    GoronChief.SetDefaultFacialExpression({'expression': 'normal'})
    GoronChief.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    call EvResetCommon.AllReset()

    GoronChief.SetFacialExpression({'expression': 'frown'})

    fork {
        Zelda.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GoronChief.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    }

    goto Event290
}

void VolcanoOverviewSensor() {

    call EvResetCommon.AllReset()

    EventFlags.SetFlag({'symbol': 'EvC_Overview', 'value': True})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Player.MoveToCompassPoint({'direction': 2, 'speed': 1, 'distance': 6.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Timer.Wait({'time': 1.0})
    goto Event207
}

void GoronNewLeader() {

    call EvResetCommon.AllReset()

    Goron008.SetInterestIkEnabled({'enable': False})
    Goron008.SetFacialExpression({'expression': 'sad'})
    Goron008.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron008.Talk({'message': 'scenario/StoryAreaC:GoronNewLeader_010', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'actor': ActorIdentifier(name="Goron008"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner.AimActor({'actor': ActorIdentifier(name="Goron008"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    EventFlags.SetFlag({'symbol': 'EvC_GoronNewLeader', 'value': True})
    evAirWallcommon.Destroy()
    Goron008.LookAtTalker({'offsetZ': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'keep': False})
    if EventFlags.CheckMessgaeFlag({'message': 'scenario/StoryAreaC:PeopleWorriedVolcanoes_Q1_A1_030'}) {
        Partner[companion].Talk({'message': 'scenario/StoryAreaC:GoronNewLeader_020', 'getAttention': False})
    }
    Goron008.ResetFacialExpression()
    Goron008.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron008.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Goron008.Talk({'message': 'scenario/StoryAreaC:GoronNewLeader_030', 'getAttention': False})
    } {
        Goron008.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron008.SetFacialExpression({'expression': 'normal'})
    }

    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Goron008.PlayAnimation({'name': 'no01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron008.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        Goron008.Talk({'message': 'scenario/StoryAreaC:GoronNewLeader_040', 'getAttention': False})
    } {
        Goron008.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Goron008.Talk({'message': 'scenario/StoryAreaC:GoronNewLeader_040_02', 'getAttention': False})
    } {
        Goron008.PlayAnimation({'name': 'no01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron008.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Goron008.Talk({'message': 'scenario/StoryAreaC:GoronNewLeader_040_03', 'getAttention': False})
    } {
        Goron008.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Goron008.Talk({'message': 'scenario/StoryAreaC:GoronNewLeader_040_04', 'getAttention': False})
    } {
        Goron008.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.20000000298023224})
    Partner.SetInterestIkEnabled({'enable': True})
    Partner.AimActor({'withoutTurn': True, 'offsetY': -0.6000000238418579, 'offsetZ': 1.0, 'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'immediateTurn': False})

    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaC:GoronNewLeader_050', 'getAttention': False})
        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Partner"), 'offsetY': 0.0, 'offsetZ': 0.0, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.20000000298023224})
    Partner.SetInterestIkEnabled({'enable': False})
    Zelda.SetInterestIkEnabled({'enable': False})

    fork {
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron008"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron008"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Zelda.PlayAnimationNoWait({'name': 'talk_hand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Zelda.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        Goron008.Talk({'message': 'scenario/StoryAreaC:GoronNewLeader_060', 'getAttention': False})
    } {
        Goron008.SetFacialExpression({'expression': 'surprise'})
        Goron008.PlayAnimation({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Goron008.Talk({'message': 'scenario/StoryAreaC:GoronNewLeader_060_02', 'getAttention': False})
    } {
        Goron008.PlayAnimationNoWait({'name': 'ask', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.20000000298023224})
    Goron008.ResetFacialExpression()
    QuestSystem.SetProgress({'symbol': 'Volcano:1185195103', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventVariables.SetVariable({'symbol': 'Volcano:1185195103'})
    Goron008.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron008.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Goron008.MoveToCompassPoint({'direction': 2, 'distance': 3.0, 'speed': 1, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Goron008.Deactivate()
    Timer.Wait({'time': 0.5})
}

void MapWarpInVolcano() {
    Zelda.LookAtTalker({'offsetZ': -2.0, 'duration': 0.0, 'chaseRatio': 1.0, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'keep': False})

    fork {
        Zelda.AimCompassPoint({'direction': 0, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner[companion].WarpToActorWithCompassPoint({'offsetY': 1.75, 'direction': 0, 'actor': ActorIdentifier(name="Zelda"), 'distance': 0.0, 'offsetX': 0.0})
    }


    fork {
        Zelda.PlayAnimationNoWait({'name': 'ev_WarpStart_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayAnimationNoWait({'name': 'ev_WarpStart_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Zelda.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    }


    fork {
        Zelda.PlayTailorOtherChannelNoWait({'channel': 'WarpEnd_00', 'restart': False, 'index': -1, 'stopOnSkipped': True})

        fork {
            Timer.Wait({'time': 0.800000011920929})
            GoronChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.800000011920929})
            GoronChief.PlayAnimationNoWait({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Timer.Wait({'time': 1.2999999523162842})

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

    } {

        call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

    }

}

void HelpMeAgainGoro_Field_Left() {
    GoronChief.SetDefaultFacialExpression({'expression': 'normal'})
    GoronChief.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    call EvResetCommon.AllReset()

    GoronChief.SetFacialExpression({'expression': 'frown'})

    fork {
        Zelda.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GoronChief.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    }

    GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_010', 'getAttention': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_010_02', 'getAttention': False})
    Timer.Wait({'time': 1.0})
    GoronChief.PlayAnimationNoWait({'name': 'think03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_010_03', 'getAttention': False})
    Partner[companion].DisableAutoMovement()

    fork {
        Zelda.MoveToTargetLinkedPoint({'speed': 0, 'actor': ActorIdentifier(name="GoronChief"), 'index': 1, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetY': 1.0, 'offsetX': -1.25, 'actor': ActorIdentifier(name="GoronChief"), 'offsetZ': 3.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    }


    fork {
        Zelda.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.25})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.20000000298023224})
    GoronChief.LookAtTalker({'offsetX': -1.2000000476837158, 'offsetZ': 0.15000000596046448, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetY': 0.0, 'keep': False})
    Timer.Wait({'time': 0.5})
    GoronChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.SetInterestIkEnabled({'enable': True})
    GoronChief.SetFacialExpression({'expression': 'sleep'})

    fork {
        GoronChief.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        GoronChief.SetFacialExpression({'expression': 'normal'})
    }

    Timer.Wait({'time': 0.5})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_020', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'ev_think', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_030', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        GoronChief.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GoronChief.ResetFacialExpression()

    fork {
        GoronChief.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GoronChief.PlayAnimation({'name': 'talk_stoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GoronChief.SetInterestIkEnabled({'enable': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_040', 'getAttention': False})
    GoronChief.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GoronChief.SetFacialExpression({'expression': 'smile'})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_Q1_010', 'getAttention': False})
    Event666:
    switch Dialog.GetLastResult4({'resultOnSkip': 2}) {
      case 0:
        GoronChief.SetFacialExpression({'expression': 'smile'})
        GoronChief.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GoronChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_Q1_A1_010', 'getAttention': False})
        GoronChief.SetFacialExpression({'expression': 'sad'})
        GoronChief.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_Q1_A1_010_02', 'getAttention': False})
        Event733:
        GoronChief.ResetFacialExpression()
        GoronChief.PlayAnimation({'name': 'talk_stoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_Q1_020', 'getAttention': False})
        goto Event666
      case 1:
        GoronChief.SetFacialExpression({'expression': 'smile'})
        GoronChief.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GoronChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_Q1_A2_010', 'getAttention': False})
        GoronChief.SetFacialExpression({'expression': 'sleep'})
        GoronChief.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.SetFacialExpression({'expression': 'sad'})
        GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_Q1_A2_010_02', 'getAttention': False})
        goto Event733
      case 2:
        GoronChief.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.PlayAnimationNoWait({'name': 'talk_stoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.SetFacialExpression({'expression': 'sad'})
        GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_Q1_A3_010', 'getAttention': False})
        GoronChief.PlayAnimationNoWait({'name': 'wait_stoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_050', 'getAttention': False})
        GoronChief.SetInterestIkEnabled({'enable': True})

        fork {
            GoronChief.SetFacialExpression({'expression': 'sleep'})

            fork {
                GoronChief.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.20000000298023224})
                GoronChief.SetFacialExpression({'expression': 'normal'})
            }

        } {
            Timer.Wait({'time': 0.30000001192092896})

            call GeneralSequence.Look_at_Partner_neck()

        }

        Partner[companion].Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_060', 'getAttention': False})
        GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GoronChief.SetInterestIkEnabled({'enable': False})
        GoronChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_070', 'getAttention': True})
        } {
            Timer.Wait({'time': 0.30000001192092896})
            Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        GoronChief.SetInterestIkEnabled({'enable': False})
        GoronChief.SetFacialExpression({'expression': 'frown'})
        GoronChief.PlayAnimation({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 2.0})
        GoronChief.ResetFacialExpression()
        GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_070_02', 'getAttention': False})
        GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner.ResetAim()
        Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_080', 'getAttention': False})

        fork {
            GoronChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_090', 'getAttention': False})
        } {
            Timer.Wait({'time': 0.5})
            Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Timer.Wait({'time': 0.5})
        GoronChief.SetFacialExpression({'expression': 'sleep'})
        GoronChief.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_100', 'getAttention': False})
        Timer.Wait({'time': 1.0})
        GoronChief.ResetFacialExpression()
        GoronChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.20000000298023224})
        GoronChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GoronChief.SetFacialExpression({'expression': 'sleep'})
        GoronChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.ResetFacialExpression()
        GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_120', 'getAttention': False})
        Timer.Wait({'time': 1.5})
        GoronChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_130', 'getAttention': False})

        fork {
            GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_130_02', 'getAttention': False})
        } {
            Timer.Wait({'time': 0.5})
            GoronChief.SetInterestIkEnabled({'enable': True})
            GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            GoronChief.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        GoronChief.ResetAim()
        GoronChief.SetInterestIkEnabled({'enable': False})
        GoronChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Event674:
        GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_Q2', 'getAttention': False})
        switch Dialog.GetLastResult4({'resultOnSkip': 2}) {
          case 0:
            GoronChief.PlayAnimation({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_Q2_A1_010', 'getAttention': False})
            goto Event674
          case 1:
            GoronChief.PlayAnimation({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_Q2_A2_010', 'getAttention': False})
            goto Event674
          case 2:
            GoronChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_200', 'getAttention': False})
            GoronChief.LookAtTalker({'offsetX': -1.2000000476837158, 'offsetZ': 0.15000000596046448, 'keep': True, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetY': 0.0})
            Timer.Wait({'time': 0.5})
            GoronChief.MoveToCompassPoint({'direction': 3, 'speed': 0, 'distance': 1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
            Timer.Wait({'time': 0.30000001192092896})
            GoronChief.SetDefaultFacialExpression({'expression': 'frown'})
            GoronChief.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 0.5})
            GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_210', 'getAttention': False})
            GoronChief.PlayAnimationNoWait({'name': 'think03', 'layer': 0, 'blendFrame': -1, 'restart': False})
            GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_220', 'getAttention': False})
            Timer.Wait({'time': 1.0})
            Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Partner[companion].Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_230', 'getAttention': False})

            fork {
                Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Camera.LookAt2ActorsCenterAsTalker({'actor2': ActorIdentifier(name="Player"), 'actor1': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
            }

            Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})

            fork {
                Partner[companion].Talk({'message': 'scenario/StoryAreaC:HelpMeAgainGoro_240', 'getAttention': False})
            } {
                Timer.Wait({'time': 0.20000000298023224})

                call GeneralSequence.Look_at_Partner()

            }

            GoronChief.SetInstanceVariableString({'name': 'idleAnim', 'value': 'think01'})
            GoronChief.SkipAutoTurn()
            EventVariables.SetVariable({'symbol': 'Volcano:4182818630'})
            EventVariables.SetVariable({'symbol': 'VolcanoPointA:3399862492'})
            EventVariables.SetVariable({'symbol': 'VolcanoPointB:4216181313'})
            QuestSystem.SetProgress({'symbol': 'Volcano:4182818630', 'isShowTelopInEvent': False, 'isFrontFade': False})
        }
    }
}

void GoronNewLeader_Left() {

    call EvResetCommon.AllReset()

    Goron008.SetInterestIkEnabled({'enable': False})
    Goron008.SetFacialExpression({'expression': 'sad'})
    Goron008.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron008.Talk({'message': 'scenario/StoryAreaC:GoronNewLeader_010', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner.DisableAutoMovement()
        Zelda.AimActor({'actor': ActorIdentifier(name="Goron008"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Zelda.KeepDistanceFromActor({'actor': ActorIdentifier(name="Goron008"), 'distance': 2.0, 'timeout': 0.75})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner.MoveToDefaultPosition({'speed': 0, 'position': 1, 'tolerance': 0.0, 'avoidWall': False, 'avoidPlayer': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Partner.AimActor({'actor': ActorIdentifier(name="Goron008"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    EventFlags.SetFlag({'symbol': 'EvC_GoronNewLeader', 'value': True})
    evAirWallcommon.Destroy()
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Goron008"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    if EventFlags.CheckMessgaeFlag({'message': 'scenario/StoryAreaC:PeopleWorriedVolcanoes_Q1_A1_030'}) {
        Partner[companion].Talk({'message': 'scenario/StoryAreaC:GoronNewLeader_020', 'getAttention': False})
    }
    Goron008.ResetFacialExpression()
    Goron008.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron008.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Goron008.Talk({'message': 'scenario/StoryAreaC:GoronNewLeader_030', 'getAttention': False})
    } {
        Goron008.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron008.SetFacialExpression({'expression': 'normal'})
    }

    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Goron008.PlayAnimation({'name': 'no01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron008.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        Goron008.Talk({'message': 'scenario/StoryAreaC:GoronNewLeader_040', 'getAttention': False})
    } {
        Goron008.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Goron008.Talk({'message': 'scenario/StoryAreaC:GoronNewLeader_040_02', 'getAttention': False})
    } {
        Goron008.PlayAnimation({'name': 'no01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron008.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Goron008.Talk({'message': 'scenario/StoryAreaC:GoronNewLeader_040_03', 'getAttention': False})
    } {
        Goron008.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Goron008.Talk({'message': 'scenario/StoryAreaC:GoronNewLeader_040_04', 'getAttention': False})
    } {
        Goron008.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.20000000298023224})
    Partner.SetInterestIkEnabled({'enable': True})
    Partner.AimActor({'offsetY': 0.0, 'offsetZ': 0.0, 'actor': ActorIdentifier(name="Zelda"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'immediateTurn': False})

    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaC:GoronNewLeader_050', 'getAttention': False})
        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Partner"), 'offsetY': 0.0, 'offsetZ': 0.0, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.20000000298023224})
    Partner.SetInterestIkEnabled({'enable': False})
    Zelda.SetInterestIkEnabled({'enable': False})

    fork {
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron008"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner.AimActor({'actor': ActorIdentifier(name="Goron008"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Zelda.PlayAnimationNoWait({'name': 'talk_hand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Zelda.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        Goron008.Talk({'message': 'scenario/StoryAreaC:GoronNewLeader_060', 'getAttention': False})
    } {
        Goron008.SetFacialExpression({'expression': 'surprise'})
        Goron008.PlayAnimation({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Goron008.Talk({'message': 'scenario/StoryAreaC:GoronNewLeader_060_02', 'getAttention': False})
    } {
        Goron008.PlayAnimationNoWait({'name': 'ask', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.20000000298023224})
    Goron008.ResetFacialExpression()
    QuestSystem.SetProgress({'symbol': 'Volcano:1185195103', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventVariables.SetVariable({'symbol': 'Volcano:1185195103'})
    Goron008.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron008.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        Zelda.MoveToBesideTargetActor({'speed': 1, 'offsetX': -2.0, 'offsetZ': -1.0, 'actor': ActorIdentifier(name="Goron008"), 'customSpeed': 0.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0})
        Zelda.AimActor({'actor': ActorIdentifier(name="Goron008"), 'offsetX': 0.0, 'offsetZ': 0.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetY': 0.0, 'immediateTurn': False})
    } {
        Partner.MoveToBesideTargetActor({'speed': 1, 'offsetY': 1.0, 'offsetZ': -2.0, 'actor': ActorIdentifier(name="Goron008"), 'offsetX': -1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner.AimActor({'offsetX': 0.0, 'offsetZ': 0.0, 'actor': ActorIdentifier(name="Goron008"), 'offsetY': 0.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'immediateTurn': False})
    }

    Goron008.MoveToCompassPoint({'direction': 2, 'distance': 3.0, 'speed': 1, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Goron008.Deactivate()
    Timer.Wait({'time': 0.5})
}

void GoronNewLeader_Right() {

    call EvResetCommon.AllReset()

    Goron008.SetInterestIkEnabled({'enable': False})
    Goron008.SetFacialExpression({'expression': 'sad'})
    Goron008.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron008.Talk({'message': 'scenario/StoryAreaC:GoronNewLeader_010', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner.DisableAutoMovement()
        Zelda.AimActor({'actor': ActorIdentifier(name="Goron008"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Zelda.KeepDistanceFromActor({'actor': ActorIdentifier(name="Goron008"), 'distance': 2.0, 'timeout': 0.75})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner.MoveToDefaultPosition({'speed': 0, 'position': 1, 'tolerance': 0.0, 'avoidWall': False, 'avoidPlayer': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Partner.AimActor({'actor': ActorIdentifier(name="Goron008"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    EventFlags.SetFlag({'symbol': 'EvC_GoronNewLeader', 'value': True})
    evAirWallcommon.Destroy()
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Goron008"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    if EventFlags.CheckMessgaeFlag({'message': 'scenario/StoryAreaC:PeopleWorriedVolcanoes_Q1_A1_030'}) {
        Partner[companion].Talk({'message': 'scenario/StoryAreaC:GoronNewLeader_020', 'getAttention': False})
    }
    Goron008.ResetFacialExpression()
    Goron008.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron008.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Goron008.Talk({'message': 'scenario/StoryAreaC:GoronNewLeader_030', 'getAttention': False})
    } {
        Goron008.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron008.SetFacialExpression({'expression': 'normal'})
    }

    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Goron008.PlayAnimation({'name': 'no01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron008.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        Goron008.Talk({'message': 'scenario/StoryAreaC:GoronNewLeader_040', 'getAttention': False})
    } {
        Goron008.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Goron008.Talk({'message': 'scenario/StoryAreaC:GoronNewLeader_040_02', 'getAttention': False})
    } {
        Goron008.PlayAnimation({'name': 'no01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron008.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Goron008.Talk({'message': 'scenario/StoryAreaC:GoronNewLeader_040_03', 'getAttention': False})
    } {
        Goron008.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Goron008.Talk({'message': 'scenario/StoryAreaC:GoronNewLeader_040_04', 'getAttention': False})
    } {
        Goron008.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.20000000298023224})
    Partner.SetInterestIkEnabled({'enable': True})
    Partner.AimActor({'offsetY': 0.0, 'offsetZ': 0.0, 'actor': ActorIdentifier(name="Zelda"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'immediateTurn': False})

    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaC:GoronNewLeader_050', 'getAttention': False})
        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Partner"), 'offsetY': 0.0, 'offsetZ': 0.0, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.20000000298023224})
    Partner.SetInterestIkEnabled({'enable': False})
    Zelda.SetInterestIkEnabled({'enable': False})

    fork {
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron008"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner.AimActor({'actor': ActorIdentifier(name="Goron008"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Zelda.PlayAnimationNoWait({'name': 'talk_hand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Zelda.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        Goron008.Talk({'message': 'scenario/StoryAreaC:GoronNewLeader_060', 'getAttention': False})
    } {
        Goron008.SetFacialExpression({'expression': 'surprise'})
        Goron008.PlayAnimation({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Goron008.Talk({'message': 'scenario/StoryAreaC:GoronNewLeader_060_02', 'getAttention': False})
    } {
        Goron008.PlayAnimationNoWait({'name': 'ask', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.20000000298023224})
    Goron008.ResetFacialExpression()
    QuestSystem.SetProgress({'symbol': 'Volcano:1185195103', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventVariables.SetVariable({'symbol': 'Volcano:1185195103'})
    Goron008.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron008.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        Zelda.MoveToBesideTargetActor({'speed': 1, 'offsetX': 2.0, 'offsetZ': -1.0, 'actor': ActorIdentifier(name="Goron008"), 'customSpeed': 0.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0})
        Zelda.AimActor({'actor': ActorIdentifier(name="Goron008"), 'offsetX': 0.0, 'offsetZ': 0.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetY': 0.0, 'immediateTurn': False})
    } {
        Partner.MoveToBesideTargetActor({'speed': 1, 'offsetY': 1.0, 'actor': ActorIdentifier(name="Goron008"), 'offsetZ': -2.0, 'offsetX': 1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner.AimActor({'actor': ActorIdentifier(name="Goron008"), 'offsetX': 0.0, 'offsetZ': 0.0, 'offsetY': 0.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'immediateTurn': False})
    }

    Goron008.MoveToCompassPoint({'direction': 2, 'distance': 3.0, 'speed': 1, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Goron008.Deactivate()
    Timer.Wait({'time': 0.5})
}
