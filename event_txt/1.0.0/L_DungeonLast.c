-------- EventFlow: L_DungeonLast --------

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress', 'SetWaitShowTelopTimeSeconds']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: EvLink
entrypoint: None()
actions: ['Destroy', 'MoveToTargetActor', 'MoveToCompassPoint', 'PlayAnimation', 'AimCompassPoint', 'AimPlayer', 'SetGravityEnable', 'SetCollisionEnabled', 'PlayMaterialAnimation', 'ChangeSteeringAnimation', 'MoveToLinkedPoint', 'PlayAnimationNoWait', 'SetInterestIkEnabled', 'SetVisibility', 'AimActor', 'WarpToActor', 'Activate', 'AimDegreeAngle']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['ChangePlayingActor', 'SaveToTemporarySaveData']
queries: []
params: None

Actor: WallMu
entrypoint: None()
actions: ['Activate']
queries: []
params: None

Actor: TagRoomLocker
entrypoint: None()
actions: ['OpenAllDoors', 'SetRestartPositionToLinkedPoint']
queries: []
params: None

Actor: CompanionLink
entrypoint: None()
actions: ['MoveToCompassPoint', 'PlayAnimation', 'MoveToLinkedPoint', 'AimPlayer', 'AimActorLinkedPoint', 'PlayMaterialAnimation', 'Destroy']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['MoveToTargetLinkedPoint', 'MoveToTargetActor', 'AimActor', 'WarpToActor', 'PlayAnimationNoWait', 'WarpToActorLinkedPoint', 'KeepDistanceFromActor']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor', 'SetInterestIkEnabled', 'MoveToCompassPoint']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag', 'CheckLevelFlag']
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: EvLinkLast
entrypoint: None()
actions: ['MoveToCompassPoint', 'Destroy', 'AimPlayer', 'PlayAnimation', 'PlayAnimationNoWait', 'AimCompassPoint', 'LookAtTalker', 'PlayMaterialAnimationNoWait', 'SetInterestIkEnabled', 'MoveToTargetLinkedPoint', 'WarpToLinkedPoint']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['StopRegionBgm', 'PlaySpecifyLabelRegionBGM', 'PlayOneshotSystemSE']
queries: []
params: None

Actor: CompanionLinkDungeon
entrypoint: None()
actions: ['PlayAnimation', 'AimActorLinkedPoint', 'MoveToLinkedPoint', 'AimPlayer', 'MoveToCompassPoint', 'PlayMaterialAnimation', 'Destroy']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: ['SetRestartPositionToLinkedPoint']
queries: []
params: None

Actor: AreaStartTag
entrypoint: None()
actions: ['SetRestartPositionToLinkedPoint']
queries: []
params: None

Actor: EvLinkLast[Start]
entrypoint: None()
actions: ['LookAtTalker', 'MoveToCompassPoint', 'Destroy', 'PlayAnimation', 'AimCompassPoint', 'AimPlayer']
queries: []
params: None

Actor: EvLinkLast[Goal]
entrypoint: None()
actions: ['Destroy', 'MoveToTargetLinkedPoint', 'LookAtTalker', 'PlayAnimation', 'AimPlayer', 'AimCompassPoint', 'PlayMaterialAnimationNoWait', 'Activate', 'WarpToLinkedPoint']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['TalkKeep', 'Talk', 'GenericTalkSequenceWithDialog', 'PlayAnimation', 'AimCompassPoint', 'PlayAnimationNoWait', 'AimActor', 'MoveToTargetLinkedPoint']
queries: []
params: None

Actor: SwitchFootLast
entrypoint: None()
actions: []
queries: []
params: None

void ViewBoundaryWorldAreaH() {

    call EvResetCommon.AllReset()

    Partner[companion].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].TalkKeep({'message': 'scenario/StoryAreaH:ViewBoundaryWorldAreaH_010', 'getAttention': False})
    Partner[companion].TalkKeep({'message': 'scenario/StoryAreaH:ViewBoundaryWorldAreaH_020', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaH:ViewBoundaryWorldAreaH_030', 'getAttention': False})
    QuestSystem.SetProgress({'symbol': 'LastDungeon:1511324440', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void BreakAwayLink() {

    call EvResetCommon.AllReset()

    Fade.StartPreset({'preset': 'FadeInNormal'})

    fork {
        EvLink.MoveToTargetActor({'speed': 1, 'actor': ActorIdentifier(name="EvLink"), 'distance': 6.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        EvLink.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="EvLink"), 'actor2': ActorIdentifier(name="Zelda"), 'distanceOffset': 2.0, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 0.5})
        Player.MoveToTargetActor({'actor': ActorIdentifier(name="Player"), 'speed': 1, 'distance': 4.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Timer.Wait({'time': 1.2999999523162842})
        WallMu.Activate()
    }

    EvLink.SetInterestIkEnabled({'enable': True})
    EvLink.AimDegreeAngle({'angle': 120.0, 'duration': 0.30000001192092896, 'withoutTurn': False, 'immediateTurn': False})
    EvLink.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Zelda"), 'duration': 0.20000000298023224, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    EvLink.AimCompassPoint({'direction': 1, 'duration': 0.20000000298023224, 'withoutTurn': False, 'immediateTurn': False})
    EvLink.AimDegreeAngle({'angle': 1.0, 'duration': 0.30000001192092896, 'withoutTurn': False, 'immediateTurn': False})
    EvLink.SetInterestIkEnabled({'enable': False})
    Timer.Wait({'time': 0.30000001192092896})
    EvLink.PlayAnimation({'name': 'search', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaH:BreakAwayLink_010', 'aimFromPlayer': False, 'aimToPlayer': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'playerTalkAnim': False, 'selfTalkAnimName': 'surprised_st,surprised_lp', 'keepTalk': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        Partner[companion].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaH:BreakAwayLink_020', 'getAttention': False})
    } {
        Timer.Wait({'time': 1.0})
        EvLink.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    EvLink.PlayAnimation({'name': 'ev_yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    EvLink.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    EvLink.MoveToCompassPoint({'direction': 2, 'speed': 1, 'timeOut': 2.0, 'distance': 4.0, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    EvLink.Destroy()
    QuestSystem.SetProgress({'symbol': 'LastDungeon:2534190080', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventFlags.SetFlag({'symbol': 'L008R003BreakAwayLink', 'value': True})
}

void R005_LinkGoOut() {

    call EvResetCommon.AllReset_PasteOff()


    fork {
        TagRoomLocker.OpenAllDoors()
    } {
        Timer.Wait({'time': 1.5})
        EvLink.PlayAnimation({'name': 'find,$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        EvLink.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'actor': ActorIdentifier(name="EvLink"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.4000000059604645})
    EvLink.PlayAnimation({'name': 'ev_yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.20000000298023224})
    EvLink.ChangeSteeringAnimation({'idle': '$wait', 'walk': '$move', 'run': '$move_fast', 'layer': 0})
    EvLink.SetGravityEnable({'enable': False})
    EvLink.SetCollisionEnabled({'enable': False})

    fork {
        EvLink.MoveToCompassPoint({'direction': 2, 'speed': 1, 'distance': 6.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Timer.Wait({'time': 0.6499999761581421})
        EvLink.PlayMaterialAnimation({'name': 'fade_out', 'layer': 0})
    }

    EvLink.Destroy()
    TagRoomLocker.SetRestartPositionToLinkedPoint({'direction': 2, 'pointIndex': 0, 'stance': 'Ground'})
    GameControl.SaveToTemporarySaveData()
}

void R016_LinkGoOut() {

    call EvResetCommon.AllReset()


    fork {
        TagRoomLocker.OpenAllDoors()
    } {
        Timer.Wait({'time': 1.100000023841858})
        CompanionLinkDungeon.AimActorLinkedPoint({'pointIndex': 0, 'actor': ActorIdentifier(name="CompanionLinkDungeon"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        CompanionLinkDungeon.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Player.AimActor({'actor': ActorIdentifier(name="SwitchFootLast"), 'offsetZ': -3.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.20000000298023224})
    CompanionLinkDungeon.MoveToLinkedPoint({'speed': 1, 'index': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    CompanionLinkDungeon.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.20000000298023224})
    CompanionLinkDungeon.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})

    fork {
        CompanionLinkDungeon.MoveToCompassPoint({'speed': 1, 'direction': 2, 'distance': 4.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Timer.Wait({'time': 0.44999998807907104})
        CompanionLinkDungeon.PlayMaterialAnimation({'name': 'fade_out', 'layer': 0})
    }

    CompanionLinkDungeon.Destroy()
    EventFlags.SetFlag({'value': True, 'symbol': 'L008R016WallMuClear'})
    TagRoomLocker.SetRestartPositionToLinkedPoint({'direction': 2, 'pointIndex': 0, 'stance': 'Ground'})
    GameControl.SaveToTemporarySaveData()
}

void LastDungeonLockedRoomClear010() {

    call EvResetCommon.AllReset()


    fork {
        TagRoomLocker.OpenAllDoors()
    } {
        Timer.Wait({'time': 1.100000023841858})
        CompanionLink.AimActorLinkedPoint({'actor': ActorIdentifier(name="CompanionLink"), 'pointIndex': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        CompanionLink.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Player.AimActor({'actor': ActorIdentifier(name="CompanionLink"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.20000000298023224})
    Player.KeepDistanceFromActor({'distance': 2.0, 'actor': ActorIdentifier(name="CompanionLink"), 'timeout': 0.75})
    Timer.Wait({'time': 0.20000000298023224})
    if !EventFlags.CheckLevelFlag({'index': 188}) {
        CompanionLink.MoveToLinkedPoint({'speed': 1, 'index': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } else {

        fork {
            Timer.Wait({'time': 0.5})
            Zelda.MoveToCompassPoint({'direction': 3, 'speed': 0, 'distance': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
            Player.AimActor({'actor': ActorIdentifier(name="CompanionLink"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            CompanionLink.MoveToLinkedPoint({'speed': 1, 'index': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        }

    }
    CompanionLink.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.20000000298023224})
    CompanionLink.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.20000000298023224})
    CompanionLink.PlayAnimation({'name': 'ev_yes,$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        CompanionLink.MoveToCompassPoint({'speed': 1, 'direction': 2, 'distance': 4.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Timer.Wait({'time': 0.44999998807907104})
        CompanionLink.PlayMaterialAnimation({'name': 'fade_out', 'layer': 0})
    }

    CompanionLink.Destroy()
    TagRoomLocker.SetRestartPositionToLinkedPoint({'direction': 2, 'pointIndex': 0, 'stance': 'Ground'})
    GameControl.SaveToTemporarySaveData()
}

void LastDungeonLockedRoomClear020() {

    call EvResetCommon.AllReset()


    fork {
        TagRoomLocker.OpenAllDoors()
    } {
        Timer.Wait({'time': 1.100000023841858})
        CompanionLink.AimActorLinkedPoint({'actor': ActorIdentifier(name="CompanionLink"), 'pointIndex': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        CompanionLink.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Player.AimActor({'actor': ActorIdentifier(name="CompanionLink"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.20000000298023224})
    CompanionLink.MoveToLinkedPoint({'speed': 1, 'index': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    CompanionLink.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.20000000298023224})
    CompanionLink.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.20000000298023224})
    CompanionLink.PlayAnimation({'name': 'ev_yes,$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        CompanionLink.MoveToCompassPoint({'speed': 1, 'direction': 2, 'distance': 4.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Timer.Wait({'time': 0.44999998807907104})
        CompanionLink.PlayMaterialAnimation({'name': 'fade_out', 'layer': 0})
    }

    CompanionLink.Destroy()
    TagRoomLocker.SetRestartPositionToLinkedPoint({'direction': 2, 'pointIndex': 0, 'stance': 'Ground'})
    GameControl.SaveToTemporarySaveData()
}

void LinkLeadTheWay020() {

    call EvResetCommon.AllReset()

    EvLinkLast.SetInterestIkEnabled({'enable': False})
    Audio.StopRegionBgm({'fadeSec': 2.5})
    Player.MoveToTargetLinkedPoint({'speed': 0, 'index': 0, 'actor': ActorIdentifier(name="EvLinkLast"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="EvLinkLast"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="EvLinkLast"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    EvLinkLast.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    EvLinkLast.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})

    fork {
        EvLinkLast.PlayAnimation({'name': 'ev_yes,$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.5})
    }

    EvLinkLast.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    EvLinkLast.MoveToCompassPoint({'speed': 1, 'direction': 2, 'distance': 22.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Timer.Wait({'time': 1.0})
    EvLinkLast.Destroy()
    EventFlags.SetFlag({'symbol': 'L008R020LinkStart', 'value': True})
    EventFlags.SetFlag({'symbol': 'AudioIsDoneLastDungeonLastRoom', 'value': True})
    Audio.PlaySpecifyLabelRegionBGM({'label': 'BGM_DUNGEON_LAST_B'})
}

void R017_JoinedUpLink() {

    call EvResetCommon.AllReset()

    EvLink.ChangeSteeringAnimation({'idle': '$wait', 'walk': '$move', 'run': '$move_fast', 'layer': 0})
    Timer.Wait({'time': 0.5})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        EvLink.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.4000000059604645})
        EvLink.PlayAnimation({'name': 'ev_yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="EvLink"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 1.0})
    EvLink.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        EvLink.MoveToLinkedPoint({'speed': 1, 'index': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        EvLink.SetGravityEnable({'enable': False})
        EvLink.SetCollisionEnabled({'enable': False})
        EvLink.MoveToCompassPoint({'speed': 1, 'direction': 2, 'distance': 3.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        EvLink.Destroy()
    } {
        Zelda.AimActor({'actor': ActorIdentifier(name="EvLink"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    EventFlags.SetFlag({'symbol': 'LastDungeon_JoinedLink', 'value': True})
}

void L008R020_LinkOut() {

    call EvResetCommon.AllReset()

    EvLinkLast.SetInterestIkEnabled({'enable': False})

    fork {
        EvLinkLast.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {
        EvLinkLast.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="EvLinkLast"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.20000000298023224})

    fork {
        EvLinkLast.PlayAnimation({'name': 'ev_yes,$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.5})
    }

    EvLinkLast.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        EvLinkLast.MoveToCompassPoint({'speed': 1, 'direction': 2, 'distance': 5.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        EvLinkLast.PlayMaterialAnimationNoWait({'name': 'fade_out', 'layer': 0})
    }

    EvLinkLast.Destroy()
    EventFlags.SetFlag({'symbol': 'L008R020LinkOut', 'value': True})
}

void LastBossenter() {

    call EvResetCommon.AllReset()

    Timer.Wait({'time': 0.5})
    EvLink.SetGravityEnable({'enable': False})
    EvLink.SetCollisionEnabled({'enable': False})
    EvLink.ChangeSteeringAnimation({'idle': 'wait', 'walk': 'jump', 'run': 'jump', 'layer': 0})
    EvLink.MoveToCompassPoint({'direction': 2, 'speed': 1, 'distance': 1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Timer.Wait({'time': 0.25})
    EvLink.SetGravityEnable({'enable': True})
    EvLink.SetCollisionEnabled({'enable': True})
    EvLink.SetVisibility({'visible': False})
}

void LastDungeonEnter() {

    call EvResetCommon.AllResetNowait()

    Audio.StopRegionBgm({'fadeSec': 0.0})
    Audio.PlaySpecifyLabelRegionBGM({'label': 'BGM_DUNGEON_LAST_A'})
    Audio.PlayOneshotSystemSE({'label': 'SE_EV_LAST_DUNGEON_START', 'volume': 1.0, 'pitch': 1.0})

    fork {
        EvLink.Activate()
        EvLink.WarpToActor({'distance': 0.0, 'offsetY': -1.0, 'actor': ActorIdentifier(name="EvLink"), 'offsetX': 0.0})
        EvLink.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Player.WarpToActor({'offsetY': 8.210000038146973, 'actor': ActorIdentifier(name="Player"), 'distance': 0.0, 'offsetX': 0.0})
    }


    fork {
        Fade.StartPreset({'preset': 'FadeInNormal'})
    } {
        Partner[companion].MoveToTargetLinkedPoint({'speed': 1, 'index': 1, 'offsetX': -0.5, 'offsetZ': -1.5, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetY': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    }

    if !EventFlags.CheckFlag({'symbol': 'Ev_LastDungeonEnter'}) {
        Timer.Wait({'time': 0.5})
        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Timer.Wait({'time': 1.5})

        fork {
            Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaH:LastDungeonEnter_010', 'playerTalkAnim': False, 'aimToPlayer': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Timer.Wait({'time': 0.5})
            EvLink.SetInterestIkEnabled({'enable': True})
            EvLink.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetY': -0.6000000238418579, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Zelda.SetInterestIkEnabled({'enable': True})
            Zelda.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetY': -0.6000000238418579, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 2.0})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

        fork {
            Partner[companion].Talk({'message': 'scenario/StoryAreaH:LastDungeonEnter_020', 'getAttention': False})
        } {
            Partner[companion].PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Timer.Wait({'time': 1.0})

        fork {
            Zelda.AimActor({'actor': ActorIdentifier(name="EvLink"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            EvLink.SetInterestIkEnabled({'enable': False})
            EvLink.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            EvLink.PlayAnimation({'name': 'ev_yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Timer.Wait({'time': 1.0})
        EvLink.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Timer.Wait({'time': 0.5})
        EvLink.MoveToLinkedPoint({'speed': 1, 'index': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        EvLink.SetGravityEnable({'enable': False})
        EvLink.SetCollisionEnabled({'enable': False})
        EvLink.MoveToCompassPoint({'speed': 1, 'direction': 2, 'distance': 3.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        EvLink.Destroy()
        GameControl.ChangePlayingActor({'actor': 3})
        EventFlags.SetFlag({'symbol': 'Ev_LastDungeonEnter', 'value': True})
        QuestSystem.SetProgress({'symbol': 'LastDungeon:1355103998', 'isShowTelopInEvent': False, 'isFrontFade': False})
        QuestSystem.SetWaitShowTelopTimeSeconds({'waitSeconds': 3.5})
        AreaStartTag.SetRestartPositionToLinkedPoint({'direction': 2, 'pointIndex': 1, 'stance': 'Ground'})
        GameControl.SaveToTemporarySaveData()
    }
}

void LinkLeadTheWay010() {

    call EvResetCommon.AllReset()

    EvLinkLast[Start].LookAtTalker({'offsetX': -1.5399999618530273, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})

    fork {
        Timer.Wait({'time': 3.5})
    } {
        Timer.Wait({'time': 1.5})
        Player.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="EvLinkLast", sub_name="Start"), 'offsetY': 0.0})
        Player.MoveToTargetLinkedPoint({'index': 1, 'speed': 0, 'actor': ActorIdentifier(name="EvLinkLast", sub_name="Start"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Player.AimActor({'actor': ActorIdentifier(name="EvLinkLast", sub_name="Start"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.649999976158142})
        EvLinkLast[Start].PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.4000000059604645})
        EvLinkLast[Start].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 1.0})

    fork {
        EvLinkLast[Start].PlayAnimation({'name': 'ev_yes,$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.5})
    }

    EvLinkLast[Start].AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    EvLinkLast[Start].MoveToCompassPoint({'direction': 1, 'speed': 1, 'distance': 7.0, 'customSpeed': 5.599999904632568, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    EvLinkLast[Start].Destroy()
    EvLinkLast[Goal].Activate()
    EvLinkLast[Goal].WarpToLinkedPoint({'index': 2, 'offsetY': 0.0})
    EventFlags.SetFlag({'symbol': 'L008R013LinkStart', 'value': True})
}

void L008R013_LinkOut() {

    call EvResetCommon.AllReset()


    fork {
        EvLinkLast[Goal].LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {
        EvLinkLast[Goal].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'actor': ActorIdentifier(name="EvLinkLast", sub_name="Goal"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.20000000298023224})

    fork {
        EvLinkLast[Goal].PlayAnimation({'name': 'ev_yes,$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.5})
    }

    EvLinkLast[Goal].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        EvLinkLast[Goal].MoveToTargetLinkedPoint({'speed': 1, 'customSpeed': 5.599999904632568, 'actor': ActorIdentifier(name="EvLinkLast"), 'index': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        EvLinkLast[Goal].PlayMaterialAnimationNoWait({'name': 'fade_out', 'layer': 0})
    }

    EvLinkLast[Goal].Destroy()
    EventFlags.SetFlag({'symbol': 'L008R013LinkOut', 'value': True})
    if !EventFlags.CheckFlag({'symbol': 'LastDungeon_013_Goal'}) {
        EventFlags.SetFlag({'symbol': 'LastDungeon_013_Goal', 'value': True})
    }
    Area.SetRestartPositionToLinkedPoint({'direction': 2, 'pointIndex': 0, 'stance': 'Ground'})
    GameControl.SaveToTemporarySaveData()
}

void L008R013_LinkOutFadein() {

    call EvResetCommon.AllReset()

    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    EvLinkLast.WarpToLinkedPoint({'index': 1, 'offsetY': 0.0})
    Player.WarpToActor({'actor': ActorIdentifier(name="EvLinkLast"), 'distance': -3.0, 'offsetY': 0.0, 'offsetX': 0.0})
    EvLinkLast.LookAtTalker({'duration': 0.0, 'chaseRatio': 1.0, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    EvLinkLast.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.AimActor({'actor': ActorIdentifier(name="EvLinkLast"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    EvLinkLast.AimPlayer({'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    Timer.Wait({'time': 0.20000000298023224})

    fork {
        EvLinkLast.PlayAnimation({'name': 'ev_yes,$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.5})
    }

    EvLinkLast.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        EvLinkLast.MoveToTargetLinkedPoint({'speed': 1, 'actor': ActorIdentifier(name="EvLinkLast"), 'customSpeed': 5.599999904632568, 'index': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        EvLinkLast.PlayMaterialAnimationNoWait({'name': 'fade_out', 'layer': 0})
    }

    EvLinkLast.Destroy()
    EventFlags.SetFlag({'symbol': 'L008R013LinkOut', 'value': True})
    if !EventFlags.CheckFlag({'symbol': 'LastDungeon_013_Goal'}) {
        EventFlags.SetFlag({'symbol': 'LastDungeon_013_Goal', 'value': True})
    }
    Area.SetRestartPositionToLinkedPoint({'direction': 2, 'pointIndex': 0, 'stance': 'Ground'})
    GameControl.SaveToTemporarySaveData()
}
