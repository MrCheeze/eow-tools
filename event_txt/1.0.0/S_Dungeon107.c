-------- EventFlow: S_Dungeon107 --------

Actor: Partner
entrypoint: None()
actions: ['Talk', 'PlayAnimation', 'AimActor', 'SetInterestIkEnabled', 'AimActorLinkedPoint', 'LookAtTalker', 'MoveToBesideTargetActor']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Yeti000
entrypoint: None()
actions: ['Talk', 'PlayAnimation', 'LookAtTalker', 'Deactivate', 'PlayAnimationNoWait', 'PlayOneshotSE', 'GenericTalkSequenceWithDialog', 'SetInterestIkEnabled', 'SetInstanceVariableString', 'AimToInitialAngle', 'ChangeSteeringAnimation', 'AimActor', 'ResetAim', 'SetComponentActive', 'AimPlayer']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag', 'SetLevelFlag']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt3ActorsCenterAsTalker', 'LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor', 'SetInterestIkEnabled', 'AimActorLinkedPoint', 'LookAtTalker', 'MoveToCompassPoint']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['SetInterestIkEnabled', 'AimActor']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'AimCompassPoint', 'AimPlayer', 'MoveToTargetLinkedPoint', 'AimActorLinkedPoint', 'MoveToTargetActor', 'PlayAnimationEx', 'PlayAnimation', 'SetInterestIkEnabled', 'LookAtTalker', 'ResetAim', 'AimActor', 'AimDegreeAngle']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: []
queries: []
params: None

void CondeDig() {

    call EvResetCommon.AllReset()

    Yeti000.SetInterestIkEnabled({'enable': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Yeti000"), 'actor3': ActorIdentifier(name="Partner"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Yeti000.GenericTalkSequenceWithDialog({'aimToPlayer': False, 'playerTalkAnim': False, 'message': 'scenario/StoryAreaG:CondeDig_010', 'selfTalkAnimName': '', 'selfTalkAnim': False, 'cameraLookAt': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    QuestSystem.SetProgress({'symbol': 'Snowmountain:1697430969', 'isShowTelopInEvent': False, 'isFrontFade': False})
    Yeti000.SetInstanceVariableString({'name': 'idleAnim', 'value': 'dig'})
    Timer.Wait({'time': 2.0})
    Yeti000.SetComponentActive({'name': 'componentActivator', 'active': False})
    Player.SetInterestIkEnabled({'enable': True})
    Partner[companion].SetInterestIkEnabled({'enable': False})
    Yeti000.PlayAnimation({'name': 'wait03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.699999988079071})
    Yeti000.ResetAim()
    Yeti000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'keepPersonalSpace': True, 'message': 'scenario/StoryAreaG:RushConde_010', 'selfTalkAnimName': 'talk03', 'aimFromPlayer': False, 'cameraLookAt': False, 'aimToPlayer': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Yeti000.ChangeSteeringAnimation({'walk': 'move02', 'run': 'move02', 'idle': 'wait03', 'layer': 0})
    Yeti000.PlayAnimation({'name': 'wait03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaG:RushConde_020', 'getAttention': False})
    } {
        Yeti000.SetInterestIkEnabled({'enable': True})
        Timer.Wait({'time': 0.5})
        Yeti000.AimActor({'actor': ActorIdentifier(name="Partner"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.PlayAnimationNoWait({'name': 'talk03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:RushConde_030', 'getAttention': True})
    Yeti000.PlayAnimation({'name': 'wait03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaG:RushConde_040', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.PlayAnimationNoWait({'name': 'talk03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:RushConde_050', 'getAttention': True})
    Yeti000.PlayAnimation({'name': 'wait03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaG:RushConde_060', 'getAttention': False})
    Yeti000.PlayAnimationNoWait({'name': 'talk03', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Yeti000.Talk({'message': 'scenario/StoryAreaG:RushConde_070', 'getAttention': True})
    } {
        Timer.Wait({'time': 0.699999988079071})
        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Yeti000.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Yeti000.ResetAim()
    Yeti000.PlayAnimationNoWait({'name': 'dig', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:RushConde_080', 'getAttention': True})
    Timer.Wait({'time': 1.0})
    Partner[companion].AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Timer.Wait({'time': 0.6000000238418579})
        Player.AimActor({'offsetY': -0.6000000238418579, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].PlayAnimationNoWait({'name': 'no_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaG:RushConde_090', 'getAttention': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    QuestSystem.SetProgress({'symbol': 'Snowmountain:1584015532', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'Ev_SmallBoundaryWorldOpen_011'})
    EventFlags.SetLevelFlag({'index': 199, 'value': False})
    Yeti000.SetComponentActive({'name': 'componentActivator', 'active': True})
    Yeti000.SetInstanceVariableString({'name': 'idleAnim', 'value': 'dig'})
}

void HelpConde() {
    QuestSystem.SetProgress({'symbol': 'Snowmountain:3384954459', 'isShowTelopInEvent': False, 'isFrontFade': False})

    call AreaStartCommon.MapWarpIn()

}

void MoveOnConde() {

    call EvResetCommon.AllReset()


    fork {
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'offsetY': 0.5, 'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner.SetInterestIkEnabled({'enable': True})
        Partner.AimActor({'offsetY': 0.5, 'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.30000001192092896})
    Yeti000.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 0.6000000238418579})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:MoveOnConde_010', 'getAttention': False})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        Yeti000.PlayAnimationNoWait({'name': 'jump02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 2.0})
        Yeti000.Deactivate()
    } {
        Timer.Wait({'time': 1.2999999523162842})
        Yeti000.PlayOneshotSE({'label': 'VO_YETI_008_11', 'volume': 1.0, 'pitch': 1.0})
    } {
        Timer.Wait({'time': 1.7000000476837158})
        Zelda.AimActorLinkedPoint({'pointIndex': 1, 'duration': 0.20000000298023224, 'offsetY': 0.0, 'withoutTurn': True, 'actor': ActorIdentifier(name="Area"), 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.7000000476837158})
        Partner.AimActorLinkedPoint({'pointIndex': 1, 'duration': 0.20000000298023224, 'withoutTurn': True, 'offsetY': 0.0, 'actor': ActorIdentifier(name="Area"), 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})
    Partner.LookAtTalker({'offsetX': 2.0, 'offsetY': -1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetZ': 0.0, 'keep': False})
    Partner.Talk({'message': 'scenario/StoryAreaG:MoveOnConde_015', 'getAttention': False})
    Partner.SetInterestIkEnabled({'enable': False})
    Partner.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].MoveToTargetActor({'offsetY': 1.0, 'speed': 1, 'offsetX': 0.0, 'actor': ActorIdentifier(name="Zelda"), 'distance': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].SetInterestIkEnabled({'enable': True})
    Partner[companion].AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].ResetAim()
    Event31:

    fork {
        Timer.Wait({'time': 0.6000000238418579})

        call GeneralSequence.Look_at_Partner()

    } {
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaG:MoveOnConde_020', 'getAttention': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Partner[companion].AimActorLinkedPoint({'pointIndex': 0, 'actor': ActorIdentifier(name="Area"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})
    Partner[companion].ResetAim()
    Partner[companion].PlayAnimationNoWait({'name': 'ev_think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaG:MoveOnConde_030', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.699999988079071})
    Partner[companion].PlayAnimationEx({'name': 'lookaround', 'time': 2.5, 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.4000000059604645})

    fork {
        Partner[companion].MoveToTargetLinkedPoint({'speed': 1, 'index': 0, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].LookAtTalker({'keep': True, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaG:MoveOnConde_040', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].ResetAim()
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaG:MoveOnConde_050', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    QuestSystem.SetProgress({'symbol': 'Snowmountain:3090057468', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void MoveOnConde_2() {

    call EvResetCommon.AllReset()


    fork {
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'offsetY': 0.5, 'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner.SetInterestIkEnabled({'enable': True})
        Partner.AimActor({'offsetY': 0.5, 'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.30000001192092896})
    Yeti000.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 0.6000000238418579})
    Partner.MoveToBesideTargetActor({'withoutTurn': True, 'speed': 1, 'actor': ActorIdentifier(name="Player"), 'offsetX': -1.0, 'offsetY': 1.0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0})
    Yeti000.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaG:MoveOnConde_010', 'aimToPlayer': False, 'selfTalkAnimName': 'happy', 'playerTalkAnim': False, 'aimFromPlayer': False, 'selfTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        Yeti000.PlayAnimationNoWait({'name': 'jump02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 2.0})
        Yeti000.Deactivate()
    } {
        Timer.Wait({'time': 1.2999999523162842})
        Yeti000.PlayOneshotSE({'label': 'VO_YETI_008_11', 'volume': 1.0, 'pitch': 1.0})
    } {
        Timer.Wait({'time': 1.7000000476837158})
        Zelda.AimActorLinkedPoint({'pointIndex': 1, 'duration': 0.20000000298023224, 'offsetY': 0.0, 'withoutTurn': True, 'actor': ActorIdentifier(name="Area"), 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.7000000476837158})
        Partner.AimActorLinkedPoint({'pointIndex': 1, 'duration': 0.20000000298023224, 'withoutTurn': True, 'offsetY': 0.0, 'actor': ActorIdentifier(name="Area"), 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})
    Zelda.LookAtTalker({'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': -2.200000047683716, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'keep': False})
    Partner.Talk({'message': 'scenario/StoryAreaG:MoveOnConde_015', 'getAttention': False})
    Partner.SetInterestIkEnabled({'enable': False})
    Partner.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].MoveToTargetActor({'offsetY': 1.0, 'speed': 1, 'offsetX': 0.0, 'distance': 2.0, 'actor': ActorIdentifier(name="Zelda"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].SetInterestIkEnabled({'enable': True})
    Partner[companion].AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].ResetAim()
    goto Event31
}

void MoveOnConde_3() {

    call EvResetCommon.AllReset()


    fork {
        Zelda.MoveToCompassPoint({'direction': 0, 'speed': 1, 'distance': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Partner.MoveToBesideTargetActor({'withoutTurn': True, 'speed': 1, 'offsetY': 1.0, 'offsetX': 1.5, 'actor': ActorIdentifier(name="Yeti000"), 'offsetZ': -7.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0})
    }


    fork {
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'offsetY': 0.5, 'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner.SetInterestIkEnabled({'enable': True})
        Partner.AimActor({'offsetY': 0.5, 'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.30000001192092896})
    Yeti000.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 0.6000000238418579})
    Yeti000.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaG:MoveOnConde_010', 'aimToPlayer': False, 'selfTalkAnimName': 'happy', 'playerTalkAnim': False, 'aimFromPlayer': False, 'selfTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        Yeti000.PlayAnimationNoWait({'name': 'jump02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 2.0})
        Yeti000.Deactivate()
    } {
        Timer.Wait({'time': 1.2999999523162842})
        Yeti000.PlayOneshotSE({'label': 'VO_YETI_008_11', 'volume': 1.0, 'pitch': 1.0})
    } {
        Timer.Wait({'time': 1.7000000476837158})
        Zelda.AimActorLinkedPoint({'pointIndex': 1, 'duration': 0.20000000298023224, 'withoutTurn': True, 'actor': ActorIdentifier(name="Area"), 'offsetY': 2.0, 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.7000000476837158})
        Partner.AimActorLinkedPoint({'pointIndex': 1, 'duration': 0.20000000298023224, 'withoutTurn': True, 'actor': ActorIdentifier(name="Area"), 'offsetY': 2.0, 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})
    Zelda.LookAtTalker({'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': -1.5, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'keep': False})
    Partner.Talk({'message': 'scenario/StoryAreaG:MoveOnConde_015', 'getAttention': False})
    Partner.SetInterestIkEnabled({'enable': False})
    Partner.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].SetInterestIkEnabled({'enable': True})
    Partner[companion].AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].ResetAim()

    fork {
        Timer.Wait({'time': 0.6000000238418579})

        call GeneralSequence.Look_at_Partner()

    } {
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaG:MoveOnConde_020', 'getAttention': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Partner[companion].AimDegreeAngle({'angle': 200.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})
    Partner[companion].ResetAim()
    Partner[companion].PlayAnimationNoWait({'name': 'ev_think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaG:MoveOnConde_030', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.699999988079071})
    Partner[companion].PlayAnimationEx({'name': 'lookaround', 'time': 2.5, 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.699999988079071})
    Partner[companion].MoveToTargetActor({'actor': ActorIdentifier(name="Partner"), 'speed': 0, 'distance': 1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Timer.Wait({'time': 0.5})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaG:MoveOnConde_040', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].ResetAim()
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaG:MoveOnConde_050', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    QuestSystem.SetProgress({'symbol': 'Snowmountain:3090057468', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void MoveOnConde_4() {

    call EvResetCommon.AllReset()


    fork {
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'offsetY': 0.5, 'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner.SetInterestIkEnabled({'enable': True})
        Partner.AimActor({'offsetY': 0.5, 'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.30000001192092896})
    Camera.LookAt2ActorsCenterAsTalker({'duration': 0.10000000149011612, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Yeti000"), 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 0.6000000238418579})
    Yeti000.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaG:MoveOnConde_010', 'aimToPlayer': False, 'selfTalkAnimName': 'happy', 'playerTalkAnim': False, 'aimFromPlayer': False, 'selfTalkAnim': False, 'cameraLookAt': False, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        Yeti000.PlayAnimationNoWait({'name': 'jump02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 2.0})
        Yeti000.Deactivate()
    } {
        Timer.Wait({'time': 1.2999999523162842})
        Yeti000.PlayOneshotSE({'label': 'VO_YETI_008_11', 'volume': 1.0, 'pitch': 1.0})
    } {
        Timer.Wait({'time': 1.7000000476837158})
        Zelda.AimActorLinkedPoint({'pointIndex': 1, 'duration': 0.20000000298023224, 'offsetY': 0.0, 'withoutTurn': True, 'actor': ActorIdentifier(name="Area"), 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.7000000476837158})
        Partner.AimActorLinkedPoint({'pointIndex': 1, 'duration': 0.20000000298023224, 'withoutTurn': True, 'offsetY': 0.0, 'actor': ActorIdentifier(name="Area"), 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})
    Zelda.LookAtTalker({'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'keep': False})
    Partner.Talk({'message': 'scenario/StoryAreaG:MoveOnConde_015', 'getAttention': False})
    Partner.SetInterestIkEnabled({'enable': False})
    Partner.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].MoveToTargetActor({'offsetY': 1.0, 'speed': 1, 'offsetX': 0.0, 'distance': 2.0, 'actor': ActorIdentifier(name="Zelda"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].SetInterestIkEnabled({'enable': True})
    Partner[companion].AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].ResetAim()
    goto Event31
}
