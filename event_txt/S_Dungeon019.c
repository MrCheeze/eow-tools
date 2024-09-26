-------- EventFlow: S_Dungeon019 --------

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['GetStatus']
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag', 'CheckMessgaeFlag']
params: None

Actor: Partner
entrypoint: None()
actions: ['MoveToCompassPoint', 'AimActor', 'PlayAnimationNoWait', 'DisableAutoMovement']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: GoronChief
entrypoint: None()
actions: ['Talk', 'GenericTalkSequenceWithDialog', 'PlayAnimationEx', 'PlayAnimationNoWait', 'Activate', 'MoveToTargetLinkedPoint', 'Deactivate', 'LookAtTalker', 'AimActor', 'AimCompassPoint', 'AimActorLinkedPoint', 'ChangeSteeringAnimation', 'PlayAnimation', 'AimDegreeAngle', 'ResetSteeringAnimation', 'MoveToCompassPoint', 'SetComponentActive', 'SetFacialExpression', 'ResetFacialExpression', 'WarpToActorLinkedPoint', 'MoveToBesideTargetActor', 'SetInterestIkEnabled', 'AimPlayer', 'WarpToActor', 'MoveToTargetActor', 'SkipAutoTurn', 'SetInstanceVariableString']
queries: []
params: None

Actor: Goron005
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'PlayAnimationEx', 'PlayAnimation', 'SetFacialExpression', 'AimCompassPoint', 'AimActor', 'AimPlayer', 'SetInterestIkEnabled', 'GenericTalkSequence', 'Deactivate', 'ResetFacialExpression']
queries: []
params: None

Actor: Goron004
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'SetFacialExpression', 'PlayAnimation', 'AimActor', 'AimCompassPoint', 'PlayAnimationEx', 'SetInterestIkEnabled', 'Deactivate', 'ResetFacialExpression']
queries: []
params: None

Actor: Goron009
entrypoint: None()
actions: ['Talk', 'PlayAnimationEx', 'PlayAnimationNoWait', 'SetFacialExpression', 'PlayAnimation', 'ResetFacialExpression', 'AimActor', 'AimCompassPoint', 'LookAtTalker', 'SetInterestIkEnabled', 'GenericTalkSequenceWithDialog', 'GenericTalkSequence', 'Deactivate']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor', 'AimDegreeAngle', 'WarpToActor', 'AimCompassPoint', 'MoveToBesideTargetActor', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt3ActorsCenterAsTalker', 'LookAt2ActorsCenterAsTalker', 'Reset']
queries: []
params: None

Actor: CharmRockRoast
entrypoint: None()
actions: ['Destroy', 'WarpToActorLinkedPoint']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: ['LookAtGimmicksLinkedPoint']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'AimActor', 'WarpToActor', 'AimCompassPoint', 'PlayAnimationNoWait']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['PlayAnimationNoWait', 'AimActor', 'LookAtTalker', 'SetInterestIkEnabled', 'WarpToActorLinkedPoint', 'AimCompassPoint', 'AimDegreeAngle', 'AbsorbAllPastedActors']
queries: []
params: None

Actor: CharmBase
entrypoint: None()
actions: []
queries: ['IsConsumedFirst']
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE']
queries: []
params: None

void VolcanoPointATrouble() {

    call EvResetCommon.AllReset()

    GoronChief.SetInterestIkEnabled({'enable': False})
    Player.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.MoveToBesideTargetActor({'speed': 1, 'offsetX': 0.0, 'actor': ActorIdentifier(name="Goron009"), 'offsetZ': 3.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Player.AimActor({'actor': ActorIdentifier(name="Goron009"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Goron009.LookAtTalker({'offsetZ': 0.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'keep': False})

    fork {
        Timer.Wait({'time': 0.5})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron005"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Goron005.PlayAnimationNoWait({'name': 'talk_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron005.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATrouble_010', 'getAttention': False})
    }

    Goron005.PlayAnimationNoWait({'name': 'wait_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.5})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron004"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Goron004.PlayAnimationNoWait({'name': 'talk_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron004.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATrouble_020', 'getAttention': False})
    }

    Goron004.PlayAnimationNoWait({'name': 'wait_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Activate()
    GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.LookAtTalker({'offsetZ': -1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'keep': False})
    } {
        GoronChief.MoveToBesideTargetActor({'speed': 1, 'offsetZ': 1.0, 'offsetX': -3.0, 'actor': ActorIdentifier(name="Player"), 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    }

    GoronChief.PlayAnimationEx({'time': 0.0, 'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    switch QuestSystem.GetStatus({'questKey': 'VolcanoPointB'}) {
      case [0, 1]:

        fork {
            Timer.Wait({'time': 0.5})
            Player.SetInterestIkEnabled({'enable': True})
            Player.AimDegreeAngle({'withoutTurn': True, 'angle': 225.0, 'duration': 0.4000000059604645, 'immediateTurn': False})
        } {
            GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATrouble_030', 'getAttention': False})
        }

        Event147:
        Timer.Wait({'time': 1.0})
        GoronChief.PlayAnimationEx({'time': 0.0, 'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.AimActor({'actor': ActorIdentifier(name="Goron009"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GoronChief.PlayAnimationEx({'time': 0.0, 'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATrouble_040', 'getAttention': False})
        } {
            Player.AimActor({'actor': ActorIdentifier(name="Goron009"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Player.SetInterestIkEnabled({'enable': False})
        }

        GoronChief.PlayAnimationEx({'time': 0.0, 'name': 'surprised_ed,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.AimActor({'actor': ActorIdentifier(name="Goron009"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Zelda.AimActor({'actor': ActorIdentifier(name="Goron009"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Goron009.PlayAnimationEx({'time': 0.0, 'name': 'talk_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron009.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATrouble_050', 'getAttention': False})
        Goron009.PlayAnimationEx({'time': 0.0, 'name': 'wait_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.PlayAnimationEx({'time': 0.0, 'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATrouble_060', 'getAttention': False})
        GoronChief.PlayAnimationEx({'time': 0.0, 'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron009.PlayAnimationEx({'time': 0.0, 'name': 'talk_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron009.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATrouble_070', 'getAttention': False})
        Goron009.PlayAnimationEx({'time': 0.0, 'name': 'wait_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.PlayAnimationEx({'time': 0.0, 'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATrouble_080', 'getAttention': False})
        GoronChief.PlayAnimationEx({'time': 0.0, 'name': 'surprised_ed,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.PlayAnimationEx({'time': 0.0, 'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATrouble_090', 'getAttention': False})
        GoronChief.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        GoronChief.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        GoronChief.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATrouble_100', 'getAttention': False})
        } {
            Timer.Wait({'time': 0.5})
            Zelda.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Partner.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Partner.DisableAutoMovement()
        }

        GoronChief.PlayAnimationNoWait({'name': 'yes,wait', 'blendFrame': -1, 'layer': 0, 'restart': False})
        GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATrouble_110', 'getAttention': False})
        GoronChief.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATrouble_120', 'getAttention': False})
        GoronChief.AimDegreeAngle({'angle': 205.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        GoronChief.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATrouble_130', 'getAttention': False})

        fork {
            GoronChief.MoveToTargetLinkedPoint({'speed': 1, 'index': 0, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
            GoronChief.MoveToTargetLinkedPoint({'speed': 1, 'index': 1, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
            GoronChief.SetInterestIkEnabled({'enable': True})
            GoronChief.Deactivate()
        } {
            Timer.Wait({'time': 1.0})
            Partner.MoveToCompassPoint({'direction': 3, 'speed': 0, 'distance': 3.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
            Partner.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

            fork {
                Partner.PlayAnimationNoWait({'name': 'appeal02,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Audio.PlayOneshotSystemSE({'label': 'SE_SYS_MESSAGE_TORI1', 'volume': 1.0, 'pitch': 1.0})
            }

        }

        Camera.LookAt3ActorsCenterAsTalker({'distanceOffset': 2.0, 'actor1': ActorIdentifier(name="Goron005"), 'actor2': ActorIdentifier(name="Goron004"), 'actor3': ActorIdentifier(name="Zelda"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Timer.Wait({'time': 1.5})
        QuestSystem.SetProgress({'symbol': 'VolcanoPointA:2357603538', 'isShowTelopInEvent': False, 'isFrontFade': False})
        EventVariables.SetVariable({'symbol': 'VolcanoPointA:3278417433'})
      case 2:

        fork {
            GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATrouble_030_After', 'getAttention': False})
        } {
            Timer.Wait({'time': 0.5})
            Player.SetInterestIkEnabled({'enable': False})
            Player.AimActor({'offsetZ': 1.0, 'offsetX': -3.0, 'actor': ActorIdentifier(name="GoronChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetY': 0.0, 'immediateTurn': False})
        }

        goto Event147
    }
}

void CarryRockPaste() {
    Fade.StartPreset({'preset': 'FadeOutNormalB'})

    call EvResetCommon.AllReset_PasteOff()

    Zelda.WarpToActor({'offsetX': 0.0, 'distance': 4.0, 'actor': ActorIdentifier(name="Goron009"), 'offsetY': 0.0})
    Partner[companion].WarpToActor({'distance': 4.0, 'offsetY': 1.0, 'offsetX': 1.0, 'actor': ActorIdentifier(name="Goron009")})
    Zelda.AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    Goron009.GenericTalkSequence({'aimToPlayer': False, 'playerTalkAnim': False, 'cameraLookAt': True, 'aimFromPlayer': True, 'selfTalkAnim': False, 'selfTalkAnimName': '', 'absorbAllPastedActors': False, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    Camera.LookAt2ActorsCenterAsTalker({'duration': 0.0, 'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Goron009"), 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Player.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    Goron009.PlayAnimationNoWait({'name': 'talk_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    if !CharmBase.IsConsumedFirst() {
        if !EventFlags.CheckMessgaeFlag({'message': 'scenario/StoryAreaC:CarryRockPaste_010'}) {
            Goron009.Talk({'message': 'scenario/StoryAreaC:CarryRockPaste_010', 'getAttention': False})
            Goron005.PlayAnimationNoWait({'name': 'wait_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 1.5})
            Goron009.PlayAnimationNoWait({'name': 'talk_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Goron009.Talk({'message': 'scenario/StoryAreaC:CarryRockPaste_020', 'getAttention': False})
            Timer.Wait({'time': 1.0})
            Goron009.Talk({'message': 'scenario/StoryAreaC:CarryRockPaste_030', 'getAttention': False})
            Goron009.PlayAnimationNoWait({'name': 'wait_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Fade.StartPreset({'preset': 'FadeOutNormalB'})
            Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
            Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
            Timer.Wait({'time': 1.0})
            Fade.StartPreset({'preset': 'FadeInNormal'})
        } else {
            Goron009.Talk({'message': 'scenario/StoryAreaC:CarryRockPaste_Again_010', 'getAttention': False})
            Goron005.PlayAnimationNoWait({'name': 'wait_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Fade.StartPreset({'preset': 'FadeOutNormalB'})
            Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
            Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
            Timer.Wait({'time': 1.0})
            Fade.StartPreset({'preset': 'FadeInNormal'})
        }
    } else {
        Goron009.Talk({'message': 'scenario/StoryAreaC:CarryRockPaste_010', 'getAttention': False})
        Goron009.PlayAnimationNoWait({'name': 'wait_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.5})
        Goron009.PlayAnimationNoWait({'name': 'talk_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron009.Talk({'message': 'scenario/StoryAreaC:CarryRockPaste_020', 'getAttention': False})
        Timer.Wait({'time': 1.0})
        Goron009.Talk({'message': 'scenario/StoryAreaC:CarryRockEaten_010', 'getAttention': False})
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
        Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
        Timer.Wait({'time': 1.0})
        Fade.StartPreset({'preset': 'FadeInNormal'})
    }
}

void HelpCarryRock() {

    call EvResetCommon.AllReset()

    Player.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'message': 'scenario/StoryAreaC:HelpCarryRock_010', 'aimToPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'selfTalkAnim': False, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Area.LookAtGimmicksLinkedPoint({'pointIndex': 0, 'distanceOffset': -5.0, 'offsetX': -1.0, 'offsetZ': 2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetY': 0.0})
    } {
        GoronChief.AimActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'pointIndex': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpCarryRock_020', 'getAttention': False})
    } {
        GoronChief.SetFacialExpression({'expression': 'smile'})
    } {
        GoronChief.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="GoronChief"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 2.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        GoronChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        GoronChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpCarryRock_040', 'getAttention': False})
    } {
        GoronChief.ResetFacialExpression()
    }

    GoronChief.AimActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'pointIndex': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GoronChief.PlayAnimationNoWait({'name': 'think03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:HelpCarryRock_050', 'getAttention': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Partner", sub_name="companion"), 'actor2': ActorIdentifier(name="Zelda"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaC:HelpCarryRock_070', 'getAttention': False})
    } {
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Zelda.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaC:HelpCarryRock_080', 'getAttention': False})
    } {
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    QuestSystem.SetProgress({'symbol': 'VolcanoPointA:1729718027', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventVariables.SetVariable({'symbol': 'VolcanoPointA:1716781276'})
}

void CarryRockFirst() {
    Fade.StartPreset({'preset': 'FadeOutNormalB'})

    call EvResetCommon.AllReset()

    Zelda.WarpToActor({'offsetX': 0.0, 'distance': 4.0, 'actor': ActorIdentifier(name="Goron009"), 'offsetY': 0.0})
    Partner[companion].WarpToActor({'distance': 4.0, 'offsetY': 1.0, 'offsetX': 1.0, 'actor': ActorIdentifier(name="Goron009")})
    Zelda.AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    Goron005.GenericTalkSequence({'aimToPlayer': False, 'playerTalkAnim': False, 'aimFromPlayer': True, 'selfTalkAnim': False, 'selfTalkAnimName': '', 'cameraLookAt': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Goron009"), 'duration': 0.0, 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Player.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    Goron005.PlayAnimationNoWait({'name': 'talk_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron005.Talk({'message': 'scenario/StoryAreaC:CarryRockFirst_010', 'getAttention': False})
    Goron005.AimActor({'actor': ActorIdentifier(name="CharmRockRoast"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Goron005.PlayAnimationNoWait({'name': 'wait_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.5})
    if !CharmBase.IsConsumedFirst() {

        fork {
            Goron005.Talk({'message': 'scenario/StoryAreaC:CarryRockFirst_020', 'getAttention': False})
        } {
            Goron005.SetFacialExpression({'expression': 'surprise'})
            Goron005.PlayAnimation({'name': 'curl_up_ed,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Goron005.PlayAnimationNoWait({'name': 'surprised_st02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            Goron005.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron005.SetFacialExpression({'expression': 'smile'})
        } {
            Goron005.Talk({'message': 'scenario/StoryAreaC:CarryRockFirst_030', 'getAttention': False})
        }

        Fade.StartPreset({'preset': 'FadeOutSlowB'})
        CharmRockRoast.Destroy()
        Timer.Wait({'time': 0.5})
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_GORON_EAT_ROCK1', 'volume': 1.0, 'pitch': 1.0})
        Goron005.AimPlayer({'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Goron005.SetFacialExpression({'expression': 'smile'})
        Goron005.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Goron009"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Timer.Wait({'time': 2.0})

        fork {
            Fade.StartPreset({'preset': 'FadeInSlow'})
        } {
            Goron005.PlayAnimationNoWait({'name': 'satisfied01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Goron005.Talk({'message': 'scenario/StoryAreaC:CarryRockFirst_040', 'getAttention': False})
        Goron005.PlayAnimationEx({'time': 0.0, 'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Event46:
        Goron005.Talk({'message': 'scenario/StoryAreaC:CarryRockFirst_050', 'getAttention': False})
        QuestSystem.SetProgress({'symbol': 'VolcanoPointA:1716781276', 'isShowTelopInEvent': False, 'isFrontFade': False})
        EventFlags.SetFlag({'value': True, 'symbol': 'volcano_carryrock'})
        Goron005.PlayAnimation({'name': 'curl_up_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EventVariables.SetVariable({'symbol': 'VolcanoPointA:1729718027'})
    } else {
        Goron005.PlayAnimationNoWait({'name': 'talk_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron005.Talk({'message': 'scenario/StoryAreaC:CarryRockFirst_020', 'getAttention': False})
        Goron005.PlayAnimationNoWait({'name': 'wait_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.0})
        Goron005.PlayAnimationNoWait({'name': 'talk_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron005.Talk({'message': 'scenario/StoryAreaC:CarryRockFirstEaten_010', 'getAttention': False})
        Goron005.Talk({'message': 'scenario/StoryAreaC:CarryRockFirstEaten_020', 'getAttention': False})
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
        CharmRockRoast.Destroy()
        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
        Timer.Wait({'time': 1.0})
        Fade.StartPreset({'preset': 'FadeInNormal'})
    }
}

void VolcanoPointATroubleClear() {
    Fade.StartPreset({'preset': 'FadeOutNormalB'})

    call EvResetCommon.AllReset()

    if !CharmBase.IsConsumedFirst() {
        GoronChief.SetInterestIkEnabled({'enable': False})
        Goron009.SetInterestIkEnabled({'enable': False})
        Goron004.SetInterestIkEnabled({'enable': False})
        Goron005.SetInterestIkEnabled({'enable': False})

        fork {
            CharmRockRoast.WarpToActorLinkedPoint({'index': 6, 'actor': ActorIdentifier(name="Goron009"), 'offsetY': 0.0})
            GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            GoronChief.ResetFacialExpression()
            GoronChief.WarpToActorLinkedPoint({'index': 4, 'actor': ActorIdentifier(name="Goron009"), 'offsetY': 0.0})
            GoronChief.AimCompassPoint({'direction': 1, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
            GoronChief.SetComponentActive({'active': True, 'name': 'CharmRockRoast'})
            GoronChief.ChangeSteeringAnimation({'idle': 'wait_carry', 'walk': 'move_carry', 'run': 'move_carry', 'layer': 0})
            Zelda.WarpToActor({'offsetX': 0.0, 'distance': 3.5, 'actor': ActorIdentifier(name="Goron009"), 'offsetY': 0.0})
            Zelda.AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
            Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Goron005"), 'actor2': ActorIdentifier(name="Goron004"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
            Player.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 1.0})
        }


        fork {
            Fade.StartPreset({'preset': 'FadeInNormal'})
            Timer.Wait({'time': 1.0})
            GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATroubleClear_010', 'getAttention': False})
        } {
            GoronChief.MoveToCompassPoint({'speed': 0, 'direction': 0, 'distance': 5.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        }

        Zelda.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GoronChief.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        GoronChief.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATroubleClear_020', 'getAttention': False})
        GoronChief.SetFacialExpression({'expression': 'surprise'})
        GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATroubleClear_030', 'getAttention': False})

        fork {
            Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Goron005"), 'actor2': ActorIdentifier(name="Goron004"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
            Goron004.PlayAnimationEx({'time': 0.0, 'name': 'talk_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Goron004.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATroubleClear_040', 'getAttention': False})
        } {
            GoronChief.ResetFacialExpression()
            GoronChief.MoveToTargetActor({'speed': 0, 'distance': 2.0, 'actor': ActorIdentifier(name="GoronChief"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        }

        Goron009.PlayAnimationNoWait({'name': 'wait_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Player.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Timer.Wait({'time': 1.100000023841858})

        fork {
            Goron004.PlayAnimationEx({'time': 0.0, 'name': 'wait_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Goron004.SetFacialExpression({'expression': 'surprise'})
            Goron004.AimActor({'actor': ActorIdentifier(name="CharmRockRoast"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Goron004.PlayAnimation({'name': 'curl_up_ed,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Goron004.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron009.PlayAnimationEx({'time': 0.0, 'name': 'wait_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Goron009.SetFacialExpression({'expression': 'surprise'})
            Goron009.AimActor({'actor': ActorIdentifier(name="CharmRockRoast"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Goron009.PlayAnimation({'name': 'curl_up_ed,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Goron009.PlayAnimationEx({'time': 1.0, 'name': 'surprised_st02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Goron009.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATroubleClear_050', 'getAttention': False})
        Fade.StartPreset({'preset': 'FadeOutSlowB'})

        fork {
            CharmRockRoast.Destroy()
            GoronChief.SetComponentActive({'name': 'CharmRockRoast', 'active': False})
            GoronChief.ResetSteeringAnimation()

            fork {
                Player.WarpToActorLinkedPoint({'offsetY': 0.0, 'index': 7, 'actor': ActorIdentifier(name="Goron009")})
            } {
                Goron009.AimCompassPoint({'direction': 0, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
                Goron009.SetFacialExpression({'expression': 'smile'})
                Goron009.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                Goron009.SetFacialExpression({'expression': 'smile'})
            } {
                GoronChief.ResetFacialExpression()
                GoronChief.WarpToActor({'offsetX': 0.0, 'actor': ActorIdentifier(name="Goron009"), 'distance': 3.0, 'offsetY': 0.0})
                GoronChief.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Goron009"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                GoronChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Goron005.AimCompassPoint({'direction': 0, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
                Goron005.SetFacialExpression({'expression': 'smile'})
                Goron005.PlayAnimationNoWait({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Goron004.AimCompassPoint({'direction': 0, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
                Goron004.SetFacialExpression({'expression': 'smile'})
                Goron004.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

            Zelda.AimDegreeAngle({'duration': 0.0, 'angle': 300.0, 'withoutTurn': False, 'immediateTurn': False})
            Zelda.SetInterestIkEnabled({'enable': True})
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Camera.LookAt2ActorsCenterAsTalker({'offsetZ': 0.0, 'actor2': ActorIdentifier(name="Goron009"), 'actor1': ActorIdentifier(name="GoronChief"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0})
        } {
            Timer.Wait({'time': 0.5})
            Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_GORON_EAT_ROCK2', 'volume': 1.0, 'pitch': 1.0})
            Timer.Wait({'time': 3.0})
        }


        fork {
            Goron009.PlayAnimationNoWait({'name': 'satisfied01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Fade.StartPreset({'preset': 'FadeInSlow'})
        }

        Goron009.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATroubleClear_060', 'getAttention': False})

        fork {
            Timer.Wait({'time': 0.5})
            Goron005.PlayAnimation({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron004.PlayAnimation({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 0.5})
            Goron005.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Goron004.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        fork {
            Goron005.ResetFacialExpression()
        } {
            Goron004.ResetFacialExpression()
        }


        fork {
            GoronChief.PlayAnimationEx({'time': 0.0, 'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATroubleClear_070', 'getAttention': False})
        } {
            Timer.Wait({'time': 1.0})

            fork {
                Goron009.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Goron009.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Goron009.ResetFacialExpression()
            } {
                Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }

        }

        GoronChief.PlayAnimationEx({'time': 0.0, 'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            Goron009.SetFacialExpression({'expression': 'sad'})
        } {
            Goron009.PlayAnimationEx({'time': 0.0, 'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron009.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATroubleClear_080', 'getAttention': False})
        } {
            Timer.Wait({'time': 0.5})
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Timer.Wait({'time': 1.0})

        fork {
            Goron009.SetFacialExpression({'expression': 'sleep'})
        } {
            Goron009.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron009.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATroubleClear_090', 'getAttention': False})
        }

        Goron009.ResetFacialExpression()

        fork {
            GoronChief.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATroubleClear_100', 'getAttention': False})
        } {
            GoronChief.SetFacialExpression({'expression': 'sad'})
        } {
            Timer.Wait({'time': 0.5})
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        fork {
            Goron009.SetFacialExpression({'expression': 'smile'})
        } {
            Goron009.PlayAnimationNoWait({'name': 'yes01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron009.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATroubleClear_110', 'getAttention': False})
        } {
            Timer.Wait({'time': 0.5})
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Goron009.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            Timer.Wait({'time': 0.5})
            Goron005.PlayAnimation({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron004.PlayAnimation({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 0.5})
            Goron005.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Goron004.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Goron005.SetFacialExpression({'expression': 'smile'})
        } {
            Goron004.SetFacialExpression({'expression': 'smile'})
        }


        fork {
            Goron005.ResetFacialExpression()
        } {
            Goron004.ResetFacialExpression()
        }

        switch QuestSystem.GetStatus({'questKey': 'VolcanoPointB'}) {
          case [0, 1]:
            Goron009.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Goron009.ResetFacialExpression()
            Goron009.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATroubleClear_120', 'getAttention': True})
            Event500:
            Goron009.PlayAnimationNoWait({'name': 'yes01', 'layer': 0, 'blendFrame': -1, 'restart': False})

            fork {
                Goron009.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATroubleClear_130', 'getAttention': False})
            } {
                Goron009.SetFacialExpression({'expression': 'smile'})
            } {
                Goron009.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

            Fade.StartPreset({'preset': 'FadeOutSlowB'})

            fork {
                Goron005.Deactivate()
            } {
                Goron009.Deactivate()
            } {
                Goron004.Deactivate()
            }

            Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="GoronChief"), 'actor2': ActorIdentifier(name="Zelda"), 'duration': 0.0, 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
            Zelda.AimDegreeAngle({'duration': 0.0, 'angle': 345.0, 'withoutTurn': False, 'immediateTurn': False})
            GoronChief.AimDegreeAngle({'duration': 0.0, 'angle': 350.0, 'withoutTurn': False, 'immediateTurn': False})
            GoronChief.PlayAnimationEx({'time': 0.0, 'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 2.0})
            GoronChief.SetFacialExpression({'expression': 'normal'})
            Fade.StartPreset({'preset': 'FadeInSlow'})
            GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATroubleClear_140', 'getAttention': False})
            GoronChief.PlayAnimation({'name': 'surprised_ed,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

            fork {
                GoronChief.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATroubleClear_150', 'getAttention': False})
            } {
                GoronChief.SetFacialExpression({'expression': 'sad'})
                Timer.Wait({'time': 0.6000000238418579})
                GoronChief.SetFacialExpression({'expression': 'sadNoLipSync'})
            } {
                Timer.Wait({'time': 0.5})
                Zelda.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="GoronChief"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                GoronChief.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
            }

            Partner[companion].AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

            fork {
                Partner[companion].Talk({'message': 'scenario/StoryAreaC:VolcanoPointATroubleClear_160', 'getAttention': False})
            } {
                Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

            Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

            fork {
                GoronChief.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }


            fork {
                GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATroubleClear_170', 'getAttention': False})
            } {
                GoronChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                GoronChief.SetFacialExpression({'expression': 'sad'})
            }


            fork {
                GoronChief.PlayAnimationEx({'time': 0.0, 'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATroubleClear_180', 'getAttention': False})
            }


            fork {
                Partner[companion].Talk({'message': 'scenario/StoryAreaC:VolcanoPointATroubleClear_190', 'getAttention': False})
            } {
                Partner[companion].PlayAnimationNoWait({'name': 'ev_think', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

            Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

            fork {
                GoronChief.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                GoronChief.SetFacialExpression({'expression': 'sad'})
            } {
                GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATroubleClear_200', 'getAttention': False})
            }


            fork {
                GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATroubleClear_200_02', 'getAttention': False})
            } {
                GoronChief.PlayAnimationNoWait({'name': 'talk_stoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }


            fork {
                GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATroubleClear_200_03', 'getAttention': False})
            } {
                GoronChief.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }


            fork {
                GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATroubleClear_210', 'getAttention': False})
            } {
                GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

            EventFlags.SetFlag({'value': True, 'symbol': 'Volcano_VolcanoPointA'})
            QuestSystem.SetProgress({'symbol': 'VolcanoPointA:36325163', 'isShowTelopInEvent': False, 'isFrontFade': False})
            EventVariables.SetVariable({'symbol': 'VolcanoPointA:36325163'})
            if !EventFlags.CheckFlag({'symbol': 'Volcano_VolcanoPointB'}) {
                GoronChief.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                GoronChief.SetFacialExpression({'expression': 'sad'})
                GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATroubleClear_220', 'getAttention': False})
                GoronChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATroubleClear_230', 'getAttention': False})
                GoronChief.SetInstanceVariableString({'value': 'think01', 'name': 'idleAnim'})
                GoronChief.PlayAnimationEx({'time': 0.0, 'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointATroubleClear_240', 'getAttention': False})

                fork {
                    Partner[companion].Talk({'message': 'scenario/StoryAreaC:VolcanoPointATroubleClear_250', 'getAttention': False})
                } {
                    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
                }

                Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                GoronChief.SetInterestIkEnabled({'enable': True})
                Goron009.SetInterestIkEnabled({'enable': True})
                Player.SetInterestIkEnabled({'enable': False})
                Goron005.SetInterestIkEnabled({'enable': True})
                GoronChief.SkipAutoTurn()
                QuestSystem.SetProgress({'symbol': 'Volcano:1683922084', 'isShowTelopInEvent': False, 'isFrontFade': False})
            } else {

                call DoNotJustThink()

            }
          case 2:
            goto Event500
        }
    } else {
        Zelda.WarpToActor({'offsetX': 0.0, 'distance': 4.0, 'actor': ActorIdentifier(name="Goron009"), 'offsetY': 0.0})
        Partner[companion].WarpToActor({'distance': 4.0, 'offsetY': 1.0, 'offsetX': 1.0, 'actor': ActorIdentifier(name="Goron009")})
        Zelda.AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
        Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
        Camera.LookAt2ActorsCenterAsTalker({'duration': 0.0, 'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Goron009"), 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Player.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.0})
        Fade.StartPreset({'preset': 'FadeInNormal'})
        Goron009.GenericTalkSequenceWithDialog({'aimToPlayer': False, 'playerTalkAnim': False, 'cameraLookAt': True, 'aimFromPlayer': True, 'selfTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/StoryAreaC:CarryRockPaste_010', 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        Goron009.PlayAnimationNoWait({'name': 'wait_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.5})
        Goron009.PlayAnimationNoWait({'name': 'talk_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron009.Talk({'message': 'scenario/StoryAreaC:CarryRockPaste_020', 'getAttention': False})
        Goron009.Talk({'message': 'scenario/StoryAreaC:CarryRockEaten_010', 'getAttention': False})
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
        CharmRockRoast.Destroy()
        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
        Timer.Wait({'time': 1.0})
        Fade.StartPreset({'preset': 'FadeInNormal'})
    }
}

void DoNotJustThink() {
    Timer.Wait({'time': 1.5})

    fork {
        GoronChief.PlayAnimationEx({'time': 0.0, 'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:DoNotJustThink_010', 'getAttention': False})
    } {
        GoronChief.SetFacialExpression({'expression': 'angry'})
    }


    fork {
        GoronChief.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.ResetFacialExpression()
    } {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:DoNotJustThink_030', 'getAttention': False})
    }


    fork {
        GoronChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:DoNotJustThink_030_02', 'getAttention': False})
    } {
        GoronChief.SetFacialExpression({'expression': 'angry'})
    }


    fork {
        GoronChief.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.ResetFacialExpression()
    } {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:DoNotJustThink_060', 'getAttention': False})
    }

    Timer.Wait({'time': 1.0})
    GoronChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        GoronChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:DoNotJustThink_070', 'getAttention': False})
    }


    fork {
        GoronChief.PlayAnimationEx({'time': 0.0, 'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:DoNotJustThink_090', 'getAttention': False})
    }

    GoronChief.MoveToTargetLinkedPoint({'speed': 1, 'index': 3, 'actor': ActorIdentifier(name="Goron009"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    GoronChief.MoveToCompassPoint({'speed': 1, 'direction': 0, 'distance': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    GoronChief.Deactivate()

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaC:DoNotJustThink_100', 'getAttention': False})
    } {
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Partner"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    QuestSystem.SetProgress({'symbol': 'Volcano:1727991118', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventVariables.SetVariable({'symbol': 'Volcano:1727991118'})
}

void CarryRockFirst_Paste() {
    Fade.StartPreset({'preset': 'FadeOutNormalB'})

    call EvResetCommon.AllReset_PasteOff()

    Zelda.WarpToActor({'offsetX': 0.0, 'distance': 4.0, 'actor': ActorIdentifier(name="Goron009"), 'offsetY': 0.0})
    Partner[companion].WarpToActor({'distance': 4.0, 'offsetY': 1.0, 'offsetX': 1.0, 'actor': ActorIdentifier(name="Goron009")})
    Zelda.AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    Goron005.GenericTalkSequence({'aimToPlayer': False, 'playerTalkAnim': False, 'aimFromPlayer': True, 'selfTalkAnim': False, 'selfTalkAnimName': '', 'cameraLookAt': True, 'absorbAllPastedActors': False, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    Camera.LookAt2ActorsCenterAsTalker({'duration': 0.0, 'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Goron009"), 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Player.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    Goron005.PlayAnimationNoWait({'name': 'talk_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron005.Talk({'message': 'scenario/StoryAreaC:CarryRockFirst_010', 'getAttention': False})
    Goron005.AimActor({'actor': ActorIdentifier(name="CharmRockRoast"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Goron009.PlayAnimationNoWait({'name': 'wait_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.5})
    if !CharmBase.IsConsumedFirst() {

        fork {
            Goron005.Talk({'message': 'scenario/StoryAreaC:CarryRockFirst_020', 'getAttention': False})
        } {
            Goron005.SetFacialExpression({'expression': 'surprise'})
            Goron005.PlayAnimation({'name': 'curl_up_ed,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Goron005.PlayAnimationNoWait({'name': 'surprised_st02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            Goron005.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron005.SetFacialExpression({'expression': 'smile'})
        } {
            Goron005.Talk({'message': 'scenario/StoryAreaC:CarryRockFirst_030', 'getAttention': False})
        }

        Fade.StartPreset({'preset': 'FadeOutSlowB'})
        CharmRockRoast.Destroy()
        Timer.Wait({'time': 0.5})
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_GORON_EAT_ROCK1', 'volume': 1.0, 'pitch': 1.0})
        Goron005.AimPlayer({'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Goron005.SetFacialExpression({'expression': 'smile'})
        Goron005.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Goron009"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Timer.Wait({'time': 2.0})

        fork {
            Fade.StartPreset({'preset': 'FadeInSlow'})
        } {
            Goron005.PlayAnimationNoWait({'name': 'satisfied01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Goron005.Talk({'message': 'scenario/StoryAreaC:CarryRockFirst_Paste_010', 'getAttention': False})
        Goron005.SetFacialExpression({'expression': 'sad'})
        Goron005.Talk({'message': 'scenario/StoryAreaC:CarryRockFirst_Paste_020', 'getAttention': False})
        Timer.Wait({'time': 1.0})
        Goron005.SetFacialExpression({'expression': 'smile'})
        Goron005.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron005.Talk({'message': 'scenario/StoryAreaC:CarryRockFirst_Paste_030', 'getAttention': False})
        goto Event46
    } else {
        Goron005.PlayAnimationNoWait({'name': 'talk_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron005.Talk({'message': 'scenario/StoryAreaC:CarryRockFirst_020', 'getAttention': False})
        Goron005.PlayAnimationNoWait({'name': 'wait_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.0})
        Goron005.PlayAnimationNoWait({'name': 'talk_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron005.Talk({'message': 'scenario/StoryAreaC:CarryRockFirstEaten_010', 'getAttention': False})
        Goron005.Talk({'message': 'scenario/StoryAreaC:CarryRockFirstEaten_020', 'getAttention': False})
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
        Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
        Timer.Wait({'time': 1.0})
        Fade.StartPreset({'preset': 'FadeInNormal'})
    }
}
