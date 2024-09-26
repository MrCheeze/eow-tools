-------- EventFlow: TagRoomLocker --------

Actor: TagRoomLocker
entrypoint: None()
actions: ['OpenAllDoors', 'CloseAllDoors']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['PlayAnimation', 'AimActor', 'WarpToActorLinkedPoint', 'PlayAnimationNoWait']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['StopRegionBgm', 'PlayBGM', 'StopBGM', 'PlayZoneBGM']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['WarpToDefaultPosition', 'EnableAutoMovement']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['MoveToTargetActor']
queries: []
params: None

Actor: Door
entrypoint: None()
actions: ['DoorOpen', 'GenericGimmickSequence']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['CheckProgress']
params: None

Actor: GoronChief
entrypoint: None()
actions: ['Talk', 'Activate', 'GenericTalkSequenceWithDialog', 'MoveToTargetLinkedPoint', 'Deactivate', 'PlayAnimationNoWait', 'AimActor', 'PlayAnimation', 'AimCompassPoint', 'AimPlayer', 'MoveToLinkedPoint', 'SetFacialExpression']
queries: []
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

void RoomCleared() {
    TagRoomLocker.OpenAllDoors()
}

void RoomClose() {
    switch QuestSystem.CheckProgress({'symbol': 'OP_Dungeon:3547397471'}) {
      case 4294967295:
        TagRoomLocker.CloseAllDoors()
        Player.PlayAnimation({'name': '$ev_lookback', 'layer': 0, 'blendFrame': -1, 'restart': False})
      case [0, 1]:

        fork {
            TagRoomLocker.CloseAllDoors()
        } {
            Partner[companion].MoveToTargetActor({'speed': 0, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'distance': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        }

        Player.PlayAnimation({'name': '$ev_lookback', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }
}

void RoomCleared_OP() {
    Door.GenericGimmickSequence({'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0})
    Timer.Wait({'time': 0.44999998807907104})
    Door.DoorOpen()
    Timer.Wait({'time': 1.0})
}

void RoomClose_L002() {

    call RegionBGMStop()

    TagRoomLocker.CloseAllDoors()

    call BattleBGMStart()

}

void PreRoomCleared() {

    call BattleBGMStop()

    Timer.Wait({'time': 'delay'})
}

void VolcanoPointBTroubleDefeat() {

    call RoomClearedBattle()

    Audio.StopRegionBgm({'fadeSec': 0.0})
    EventFlags.SetFlag({'value': True, 'symbol': 'Volcano_VolcanoPointB_2'})

    call EvResetCommon.AllReset()

    Partner.EnableAutoMovement()

    fork {
        GoronChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'think01', 'message': 'scenario/StoryAreaC:VolcanoPointBTroubleDefeat_010', 'aimToPlayer': True, 'aimFromPlayer': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Timer.Wait({'time': 0.5})
        Player.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    GoronChief.Activate()
    Player.WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="GoronChief"), 'offsetY': 0.0})
    Player.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="GoronChief"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner.WarpToDefaultPosition({'avoidPlayer': True, 'avoidWall': True, 'position': 2})
    Partner.EnableAutoMovement()
    Camera.LookAt2ActorsCenterAsTalker({'duration': 0.0, 'weight1': 1.0, 'offsetX': 4.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="GoronChief"), 'offsetZ': -1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetY': 0.0})
    Player.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})

    fork {
        Timer.Wait({'time': 1.0})
        Fade.StartPreset({'preset': 'FadeInSlow'})
    } {
        GoronChief.MoveToLinkedPoint({'index': 2, 'speed': 1, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        GoronChief.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GoronChief.PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Audio.PlayZoneBGM({'stopbgm': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleDefeat_020', 'getAttention': False})
    GoronChief.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleDefeat_030', 'getAttention': False})
    } {
        GoronChief.SetFacialExpression({'expression': 'surprise'})
    }

    GoronChief.PlayAnimation({'name': 'surprised_ed,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleDefeat_040', 'getAttention': False})
    } {
        GoronChief.SetFacialExpression({'expression': 'frown'})
    }

    GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    GoronChief.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleDefeat_050', 'getAttention': False})
    GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        GoronChief.PlayAnimationNoWait({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.SetFacialExpression({'expression': 'angry'})
    } {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleDefeat_060', 'getAttention': False})
    }

    GoronChief.MoveToTargetLinkedPoint({'speed': 1, 'index': 3, 'actor': ActorIdentifier(name="GoronChief"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    GoronChief.MoveToTargetLinkedPoint({'speed': 1, 'index': 0, 'actor': ActorIdentifier(name="GoronChief"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    GoronChief.Deactivate()
    QuestSystem.SetProgress({'symbol': 'VolcanoPointB:2281334597', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventVariables.SetVariable({'symbol': 'VolcanoPointB:2281334597'})
}

void RoomCloseBattle() {

    fork {

        call RegionBGMStop()

    } {

        call RoomClose({'direction': 'direction'})


        call BattleBGMStart()

    }

}

void BattleBGMStart() {
    Audio.PlayBGM({'label': 'BGM_BATTLE_ZENMETSU', 'volume': 1.0, 'ignoreSkip': True})
}

void RegionBGMStop() {

    fork {
        Audio.StopRegionBgm({'fadeSec': 2.0})
    } {
        Timer.Wait({'time': 2.0})
        Audio.StopRegionBgm({'fadeSec': 0.0})
    }

}

void RoomClearedBattle() {

    call RoomCleared()


    call RegionBGMStart()

}

void BattleBGMStop() {

    fork {
        Audio.StopBGM({'label': 'BGM_BATTLE_ZENMETSU', 'duration': 0.10000000149011612})
    } {
        Audio.PlayBGM({'label': 'BGM_BATTLE_ZENMETSU_END', 'ignoreSkip': False, 'volume': 1.0})
    }

}

void RegionBGMStart() {
    Audio.PlayZoneBGM({'stopbgm': True})
}
