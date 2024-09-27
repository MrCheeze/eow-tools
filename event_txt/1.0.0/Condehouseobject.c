-------- EventFlow: Condehouseobject --------

Actor: Yeti000
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'MoveToCompassPoint', 'Deactivate', 'Talk', 'SetInterestIkEnabled', 'AimCompassPoint', 'AimPlayer', 'PlayAnimationNoWait', 'SkipAutoTurn', 'PlayAnimation', 'ResetAim', 'SetComponentActive']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: Partner
entrypoint: None()
actions: ['AimActor', 'AimDegreeAngle', 'SetInterestIkEnabled', 'MoveToTargetActor']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'MoveToBesideTargetActor', 'AimCompassPoint', 'AimDegreeAngle', 'SetInterestIkEnabled', 'LookAtTalker']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Condehouseobject[CondesHouseBook]
entrypoint: None()
actions: ['Destroy']
queries: []
params: None

Actor: Condehouseobject[CondeHouseTool]
entrypoint: None()
actions: ['Destroy']
queries: []
params: None

Actor: Condehouseobject[CondesHousePanting]
entrypoint: None()
actions: ['Destroy']
queries: []
params: None

Actor: doActionCommon_last
entrypoint: None()
actions: ['Activate']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['SetCheckCondesHouseStormSubsides']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor', 'Talk', 'PlayAnimationNoWait', 'PlayAnimation']
queries: []
params: None

void CondesHousePanting() {

    call EvResetCommon.AllReset()

    Yeti000.SetInterestIkEnabled({'enable': False})
    if EventFlags.CheckFlag({'symbol': 'HyruleClear'}) {
        if !EventFlags.CheckFlag({'symbol': 'CondesHousePanting'}) {
            Player.MoveToBesideTargetActor({'speed': 0, 'offsetZ': 2.0, 'actor': ActorIdentifier(name="Condehouseobject", sub_name="CondesHousePanting"), 'offsetX': 0.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
            Player.SetInterestIkEnabled({'enable': True})
            Partner.SetInterestIkEnabled({'enable': True})
            Player.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
            Player.LookAtTalker({'offsetY': 2.0, 'distanceOffset': -2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetZ': 0.0, 'keep': False})
            Timer.Wait({'time': 0.4000000059604645})

            fork {
                Player.AimDegreeAngle({'withoutTurn': True, 'angle': 150.0, 'duration': 0.4000000059604645, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.20000000298023224})
                Partner.AimDegreeAngle({'withoutTurn': True, 'angle': 150.0, 'duration': 0.4000000059604645, 'immediateTurn': False})
            }

            Timer.Wait({'time': 0.800000011920929})

            fork {
                Player.AimDegreeAngle({'withoutTurn': True, 'angle': 210.0, 'duration': 0.4000000059604645, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.20000000298023224})
                Partner.AimDegreeAngle({'withoutTurn': True, 'angle': 200.0, 'duration': 0.4000000059604645, 'immediateTurn': False})
            }

            Yeti000.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Timer.Wait({'time': 1.2000000476837158})
            Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 3.0, 'offsetZ': 3.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Yeti000"), 'offsetY': 1.5, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0})
            Player.SetInterestIkEnabled({'enable': False})
            Timer.Wait({'time': 0.20000000298023224})
            Yeti000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Yeti000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'keepPersonalSpace': True, 'message': 'scenario/StoryAreaG:CondesHousePanting_010', 'cameraLookAt': False, 'aimToPlayer': False, 'aimFromPlayer': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
            Yeti000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 0.6000000238418579})
            Yeti000.Talk({'message': 'scenario/StoryAreaG:CondesHousePanting_020', 'getAttention': False})

            fork {
                Yeti000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                Yeti000.Talk({'message': 'scenario/StoryAreaG:CondesHousePanting_030', 'getAttention': False})
            } {
                Partner[companion].AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Player.SetInterestIkEnabled({'enable': True})
                Player.AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }

            QuestSystem.SetProgress({'symbol': 'Snowmountain:2772211975', 'isShowTelopInEvent': False, 'isFrontFade': False})
            EventFlags.SetFlag({'value': True, 'symbol': 'CondesHousePanting'})
            if !EventFlags.CheckFlag({'symbol': 'CondeHouseTool'}) {
                Yeti000.SkipAutoTurn()
            } else
            if !EventFlags.CheckFlag({'symbol': 'CondesHouseBook'}) {
                Yeti000.SkipAutoTurn()
            } else {

                call _AfterSnowstorm()

            }
        } else {
            Yeti000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'keepPersonalSpace': True, 'message': 'scenario/StoryAreaG:CondesHousePanting_010', 'cameraLookAt': False, 'aimFromPlayer': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        }
    }
}

void CondeHouseTool() {

    call EvResetCommon.AllReset()

    if EventFlags.CheckFlag({'symbol': 'HyruleClear'}) {
        if !EventFlags.CheckFlag({'symbol': 'CondeHouseTool'}) {

            fork {
                Player.AimActor({'actor': ActorIdentifier(name="Condehouseobject", sub_name="CondeHouseTool"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Partner.MoveToTargetActor({'distance': 0.0, 'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'speed': 0, 'offsetY': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0})
                Partner.AimActor({'offsetY': 3.0, 'actor': ActorIdentifier(name="Condehouseobject", sub_name="CondeHouseTool"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }

            Timer.Wait({'time': 0.6000000238418579})
            Yeti000.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

            fork {
                Yeti000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/StoryAreaG:CondesHouseTool_010', 'aimFromPlayer': False, 'aimToPlayer': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
            } {
                Timer.Wait({'time': 0.800000011920929})
                Player.SetInterestIkEnabled({'enable': True})
                Player.AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                Partner.AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }

            QuestSystem.SetProgress({'symbol': 'Snowmountain:2087719995', 'isShowTelopInEvent': False, 'isFrontFade': False})
            EventFlags.SetFlag({'value': True, 'symbol': 'CondeHouseTool'})
            if EventFlags.CheckFlag({'symbol': 'CondesHousePanting'})
            && EventFlags.CheckFlag({'symbol': 'CondesHouseBook'}) {

                call _AfterSnowstorm02()

            }
        } else {
            Yeti000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/StoryAreaG:CondesHouseTool_010', 'aimFromPlayer': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        }
    }
}

void _AfterSnowstorm() {

    call EvResetCommon.AllReset()

    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Yeti000.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Yeti000.SetInterestIkEnabled({'enable': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 4.0, 'offsetZ': 4.0, 'offsetY': 1.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Yeti000"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0})
    }

    Timer.Wait({'time': 0.800000011920929})
    Event33:

    fork {
        EventFlags.SetFlag({'value': True, 'symbol': 'AudioIsStormSubsidesCondesHouse'})
        Audio.SetCheckCondesHouseStormSubsides()
        Yeti000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'keepPersonalSpace': True, 'message': 'scenario/StoryAreaG:AfterSnowstorm_005', 'cameraLookAt': False, 'aimToPlayer': False, 'aimFromPlayer': False, 'selfTalkAnim': False, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        Yeti000.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Yeti000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Yeti000.Talk({'message': 'scenario/StoryAreaG:AfterSnowstorm_010', 'getAttention': False})
        Yeti000.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Yeti000.Talk({'message': 'scenario/StoryAreaG:AfterSnowstorm_020', 'getAttention': False})
        Yeti000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Yeti000.Talk({'message': 'scenario/StoryAreaG:AfterSnowstorm_030', 'getAttention': False})
        Yeti000.Talk({'message': 'scenario/StoryAreaG:AfterSnowstorm_040', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.550000011920929})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Event117:
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Timer.Wait({'time': 0.4000000059604645})
    Yeti000.ResetAim()
    Yeti000.SetComponentActive({'name': 'simulationStopperComp', 'active': False})
    Yeti000.MoveToCompassPoint({'speed': 0, 'direction': 0, 'distance': 4.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Yeti000.Deactivate()
    QuestSystem.SetProgress({'symbol': 'Snowmountain:3166995948', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'AfterSnowstorm'})
    Condehouseobject[CondesHouseBook].Destroy()
    Condehouseobject[CondeHouseTool].Destroy()
    Condehouseobject[CondesHousePanting].Destroy()
    doActionCommon_last.Activate()
}

void CondesHouseBook() {

    call EvResetCommon.AllReset()

    if !EventFlags.CheckFlag({'symbol': 'EvG_FreblazeDead'}) {
        Player.AimActor({'actor': ActorIdentifier(name="Condehouseobject", sub_name="CondesHouseBook"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner.AimActor({'actor': ActorIdentifier(name="Condehouseobject", sub_name="CondesHouseBook"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Dialog.Show({'message': 'scenario/StoryAreaG:CondesHouseBook_010'})
        if EventFlags.CheckFlag({'symbol': 'HyruleClear'})
        && !EventFlags.CheckFlag({'symbol': 'CondesHouseBook'}) {
            Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Partner[companion].Talk({'message': 'scenario/StoryAreaG:CondesHouseBook_020', 'getAttention': False})
            Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            EventFlags.SetFlag({'value': True, 'symbol': 'CondesHouseBook'})
            if EventFlags.CheckFlag({'symbol': 'CondesHousePanting'})
            && EventFlags.CheckFlag({'symbol': 'CondeHouseTool'}) {

                call _AfterSnowstorm03()

            }
        }
    } else {
        Dialog.Show({'message': 'scenario/StoryAreaG:CondesHouseBook_030'})
    }
}

void _AfterSnowstorm02() {

    call EvResetCommon.AllReset()

    Timer.Wait({'time': 0.6000000238418579})
    Yeti000.SetInterestIkEnabled({'enable': False})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.AimCompassPoint({'direction': 0, 'withoutTurn': False, 'duration': 0.4000000059604645, 'immediateTurn': False})
    Timer.Wait({'time': 0.800000011920929})
    Yeti000.SetInterestIkEnabled({'enable': True})
    goto Event33
}

void _AfterSnowstorm03() {

    call EvResetCommon.AllReset()

    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Yeti000.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Yeti000.SetInterestIkEnabled({'enable': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
    }

    Timer.Wait({'time': 0.800000011920929})
    EventFlags.SetFlag({'value': True, 'symbol': 'AudioIsStormSubsidesCondesHouse'})
    Audio.SetCheckCondesHouseStormSubsides()
    Yeti000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'keepPersonalSpace': True, 'message': 'scenario/StoryAreaG:AfterSnowstorm_005', 'cameraLookAt': False, 'aimToPlayer': False, 'aimFromPlayer': False, 'selfTalkAnim': False, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 4.0, 'offsetZ': 4.0, 'offsetY': 1.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Yeti000"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0})
        Timer.Wait({'time': 1.0})
        Yeti000.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Yeti000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Yeti000.Talk({'message': 'scenario/StoryAreaG:AfterSnowstorm_010', 'getAttention': False})
        Yeti000.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Yeti000.Talk({'message': 'scenario/StoryAreaG:AfterSnowstorm_020', 'getAttention': False})
        Yeti000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Yeti000.Talk({'message': 'scenario/StoryAreaG:AfterSnowstorm_030', 'getAttention': False})
        Yeti000.Talk({'message': 'scenario/StoryAreaG:AfterSnowstorm_040', 'getAttention': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    goto Event117
}
