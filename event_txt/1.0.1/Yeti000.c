-------- EventFlow: Yeti000 --------

Actor: Yeti000
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SetTalkerName', 'AimToInitialAngle', 'SetInstanceVariableBool', 'PlayAnimation', 'AimPlayer', 'PlayAnimationNoWait', 'ChangeSteeringAnimation', 'Destroy', 'Activate', 'SetFacialExpression', 'AimCompassPoint', 'SetInterestIkEnabled', 'AimActor', 'LookAtTalker', 'KeepAnimationAfterEvent', 'ResetAim', 'GenericTalkSequence', 'SetComponentActive', 'ResetFacialExpression', 'SetInstanceVariableString', 'TalkKeep']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['PlayAnimation', 'AimActor']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['WarpToActorLinkedPoint', 'GenericItemGetSequence', 'AddItem']
queries: ['CheckEquippedOutfit']
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'AimCompassPoint', 'SetInterestIkEnabled', 'PlayAnimation', 'MoveToTargetLinkedPoint', 'WarpToActor']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag', 'SetLevelFlag']
queries: ['CheckLevelFlag']
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'LookAt3ActorsCenterAsTalker', 'Reset']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump']
queries: []
params: None

Actor: AreaStartTag
entrypoint: None()
actions: ['LookAtGimmicksLinkedPoint']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'AimActor', 'PlayAnimation', 'SetInterestIkEnabled', 'MoveToBesideTargetActor', 'AimPlayer', 'MoveToTargetLinkedPoint']
queries: []
params: None

Actor: Object
entrypoint: None()
actions: ['Destroy']
queries: []
params: None

Actor: SnowBallInduce
entrypoint: None()
actions: ['WarpToActorLinkedPoint']
queries: []
params: None

void TalkConde() {
    if !EventFlags.CheckLevelFlag({'index': 192}) {

        call EvResetCommon.AllReset()

        Event13:
        Yeti000.SetTalkerName({'message': 'glossary/Character:Unknown', 'keep': False})
        Partner[companion].MoveToBesideTargetActor({'withoutTurn': True, 'speed': 0, 'offsetY': 1.5, 'offsetZ': -1.5, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Player.PlayAnimation({'blendFrame': -1, 'name': 'ev_conde_shake', 'layer': 0, 'restart': False})
        Timer.Wait({'time': 1.0})
        Player.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Yeti000.LookAtTalker({'offsetZ': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'keep': False})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Yeti000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/StoryAreaG:TalkConde_010', 'aimToPlayer': False, 'selfTalkAnim': False, 'keepPersonalSpace': False, 'lookAtOffsetY': 1.5, 'cameraLookAt': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        Timer.Wait({'time': 1.0})

        fork {
            Timer.Wait({'time': 0.20000000298023224})
            Player.SetInterestIkEnabled({'enable': True})
            Player.AimActor({'offsetY': -0.6000000238418579, 'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.15000000596046448})
            Partner[companion].SetInterestIkEnabled({'enable': True})
            Partner[companion].AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Timer.Wait({'time': 1.0})

        fork {
            Yeti000.PlayAnimation({'name': 'wakeup', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Partner[companion].MoveToTargetLinkedPoint({'speed': 0, 'index': 1, 'withoutTurn': True, 'actor': ActorIdentifier(name="Yeti000"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Player.SetInterestIkEnabled({'enable': False})
            Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Player.MoveToTargetLinkedPoint({'index': 0, 'speed': 0, 'withoutTurn': True, 'actor': ActorIdentifier(name="Yeti000"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
            Camera.LookAt2ActorsCenterAsTalker({'offsetY': 1.0, 'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Yeti000"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetZ': 0.0})
        }

        Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'withoutTurn': True, 'offsetY': 0.0, 'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Yeti000.Talk({'message': 'scenario/StoryAreaG:TalkConde_020', 'getAttention': False})
        Yeti000.SetTalkerName({'message': 'glossary/Character:Yeti000', 'keep': False})
        Yeti000.PlayAnimation({'name': 'search', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Yeti000.Talk({'message': 'scenario/StoryAreaG:TalkConde_030', 'getAttention': False})
        Timer.Wait({'time': 1.5})
        Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EventFlags.SetLevelFlag({'value': True, 'index': 179})
        Yeti000.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Player.SetInterestIkEnabled({'enable': True})
        Partner[companion].SetInterestIkEnabled({'enable': True})
        Yeti000.SetInterestIkEnabled({'enable': True})
        Yeti000.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Yeti000.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Yeti000.Talk({'message': 'scenario/StoryAreaG:TalkConde_040', 'getAttention': True})
        Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Yeti000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Yeti000.Talk({'message': 'scenario/StoryAreaG:TalkConde_042', 'getAttention': True})
        Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Yeti000.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

        call GeneralSequence.ZeldaTalkMotion()


        fork {
            Yeti000.Talk({'getAttention': True, 'message': 'scenario/StoryAreaG:TalkConde_042_02'})
        } {
            Timer.Wait({'time': 1.5})
            Yeti000.AimActor({'offsetY': -0.6000000238418579, 'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            Timer.Wait({'time': 0.20000000298023224})
            Player.AimActor({'offsetY': -0.6000000238418579, 'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.15000000596046448})
            Yeti000.AimActor({'offsetY': -0.6000000238418579, 'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].Talk({'message': 'scenario/StoryAreaG:TalkConde_044', 'getAttention': False})
        }

        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            Yeti000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Yeti000.Talk({'message': 'scenario/StoryAreaG:TalkConde_046', 'getAttention': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Player.AimActor({'withoutTurn': True, 'offsetY': 0.0, 'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Yeti000.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Yeti000.Talk({'message': 'scenario/StoryAreaG:TalkConde_048', 'getAttention': True})
        Yeti000.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.5})
        Yeti000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Yeti000.Talk({'message': 'scenario/StoryAreaG:TalkConde_050', 'getAttention': True})
        Yeti000.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Yeti000.Talk({'message': 'scenario/StoryAreaG:TalkConde_060', 'getAttention': False})
        Yeti000.SetInterestIkEnabled({'enable': False})
        Yeti000.PlayAnimation({'name': 'takeout01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Yeti000.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Yeti000.SetComponentActive({'name': 'simulationStopperComp', 'active': False})
        Timer.Wait({'time': 1.0})
        Yeti000.AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Yeti000.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait02'})
        Yeti000.SetInstanceVariableString({'name': 'runAnim', 'value': 'move02'})
        Yeti000.SetInstanceVariableString({'name': 'walkAnim', 'value': 'move02'})
        Yeti000.SetInstanceVariableBool({'name': 'Leading', 'value': True})
        Yeti000.ChangeSteeringAnimation({'idle': 'wait02', 'walk': 'move02', 'run': 'move02', 'layer': 0})
        Timer.Wait({'time': 1.0})
        EventFlags.SetLevelFlag({'index': 19, 'value': True})
        QuestSystem.SetProgress({'symbol': 'Snowmountain:681687062', 'isShowTelopInEvent': False, 'isFrontFade': False})
        EventFlags.SetFlag({'value': True, 'symbol': 'CondesHouse_before'})
    } else {
        Fade.StartPreset({'preset': 'FadeOutNormalB'})

        call EvResetCommon.AllReset()

        Player.WarpToActor({'distance': 0.0, 'offsetX': -2.0, 'actor': ActorIdentifier(name="Yeti000"), 'offsetY': 0.0})
        Partner[companion].MoveToBesideTargetActor({'withoutTurn': True, 'speed': 0, 'offsetY': 1.5, 'offsetZ': -1.5, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0})
        Partner[companion].AimActor({'offsetX': -2.5, 'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="Yeti000"), 'withoutTurn': False, 'boneName': '', 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Yeti000.GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnimName': '', 'aimToPlayer': False, 'aimFromPlayer': True, 'selfTalkAnim': False, 'keepPersonalSpace': False, 'lookAtOffsetY': 1.5, 'cameraLookAt': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        Yeti000.LookAtTalker({'duration': 0.10000000149011612, 'offsetZ': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'keep': False})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Fade.StartPreset({'preset': 'FadeInNormal'})
        goto Event13
    }
}

void RushConde() {
    EventFlags.SetLevelFlag({'index': 199, 'value': True})
    Yeti000.SetComponentActive({'name': 'componentActivator', 'active': False})

    call EvResetCommon.AllReset()

    Player.SetInterestIkEnabled({'enable': True})
    Partner[companion].SetInterestIkEnabled({'enable': True})

    fork {
        Yeti000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/StoryAreaG:RushConde_010', 'selfTalkAnimName': 'talk03', 'aimFromPlayer': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetY': 1.0, 'offsetZ': 0.0, 'offsetX': -1.5, 'actor': ActorIdentifier(name="Zelda"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Timer.Wait({'time': 0.15000000596046448})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Partner"), 'actor3': ActorIdentifier(name="Yeti000"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    Yeti000.ChangeSteeringAnimation({'walk': 'move02', 'run': 'move02', 'idle': 'wait03', 'layer': 0})
    Yeti000.PlayAnimation({'name': 'wait03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaG:RushConde_020', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.699999988079071})
        Yeti000.AimActor({'actor': ActorIdentifier(name="Partner"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
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
    Yeti000.Talk({'message': 'scenario/StoryAreaG:RushConde_070', 'getAttention': True})
    Yeti000.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Yeti000.ResetAim()
    Yeti000.PlayAnimationNoWait({'name': 'dig', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:RushConde_080', 'getAttention': True})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'offsetY': -0.6000000238418579, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaG:RushConde_090', 'getAttention': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    QuestSystem.SetProgress({'symbol': 'Snowmountain:1584015532', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'Ev_SmallBoundaryWorldOpen_011'})
    EventFlags.SetLevelFlag({'index': 199, 'value': False})
    Yeti000.SetComponentActive({'name': 'componentActivator', 'active': True})
    Yeti000.SetInstanceVariableString({'name': 'idleAnim', 'value': 'dig'})
}

void HotSpringConde() {
    Yeti000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/StoryAreaG:CondeScream_150', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void RushConde2() {
    Yeti000.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaG:RushConde_080', 'aimToPlayer': False, 'playerTalkAnim': False, 'selfTalkAnimName': 'dig', 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Yeti000.PlayAnimation({'name': 'dig', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.KeepAnimationAfterEvent()
}

void talk010() {
    Yeti000.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaG:CondesHouseTalk_010', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Quest_Carry_Snowmountain010_Order() {

    call EvResetCommon.AllReset()

    Yeti000.GenericTalkSequenceWithDialog({'aimToPlayer': True, 'playerTalkAnim': False, 'message': 'quest/QuestAreaG:Carry_Snowmountain010_010', 'selfTalkAnimName': 'talk01', 'selfTalkAnim': True, 'facial': 'smile', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Yeti000.Talk({'message': 'quest/QuestAreaG:Carry_Snowmountain010_020', 'getAttention': False})
    } {
        Yeti000.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Yeti000.SetFacialExpression({'expression': 'normal'})
    }

    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.SetInterestIkEnabled({'enable': True})

    fork {
        Partner[companion].Talk({'message': 'quest/QuestAreaG:Carry_Snowmountain010_030', 'getAttention': False})
    } {
        Partner.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})
        Yeti000.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Partner"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Partner"), 'duration': 0.6000000238418579, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Yeti000.Talk({'message': 'quest/QuestAreaG:Carry_Snowmountain010_040', 'getAttention': False})
    } {
        Yeti000.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Yeti000.Talk({'message': 'quest/QuestAreaG:Carry_Snowmountain010_045', 'getAttention': False})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Partner[companion].Talk({'message': 'quest/QuestAreaG:Carry_Snowmountain010_050', 'getAttention': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Yeti000.Talk({'message': 'quest/QuestAreaG:Carry_Snowmountain010_060', 'getAttention': False})
    } {
        Yeti000.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Yeti000.SetFacialExpression({'expression': 'smile'})
    } {
        Partner.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Yeti000.Talk({'message': 'quest/QuestAreaG:Carry_Snowmountain010_070', 'getAttention': False})
    } {
        Yeti000.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Yeti000.Talk({'message': 'quest/QuestAreaG:Carry_Snowmountain010_080', 'getAttention': False})
    } {
        Yeti000.PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Yeti000.SetFacialExpression({'expression': 'sad'})
    }

    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Yeti000.Talk({'message': 'quest/QuestAreaG:Carry_Snowmountain010_090', 'getAttention': False})
    } {
        Yeti000.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Yeti000.SetFacialExpression({'expression': 'normal'})
    }

    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Yeti000.Talk({'message': 'quest/QuestAreaG:Carry_Snowmountain010_100', 'getAttention': False})
    } {
        Yeti000.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Yeti000.SetFacialExpression({'expression': 'angry'})
    }

    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    Yeti000.SetFacialExpression({'expression': 'normal'})
    GameControl.RequestLevelJump({'offsetZ': 1.0, 'locator': 'Carry_Snowmountain010', 'level': 'Field', 'offsetX': 0.0})
}

void Quest_Carry_Snowmountain010_020() {
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Yeti000"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Yeti000.GenericTalkSequenceWithDialog({'aimToPlayer': True, 'playerTalkAnim': False, 'message': 'quest/QuestAreaG:Carry_Snowmountain020_010', 'selfTalkAnim': True, 'selfTalkAnimName': 'search', 'lookAtOffsetY': 0.0, 'cameraLookAt': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Yeti000.Talk({'message': 'quest/QuestAreaG:Carry_Snowmountain020_020', 'getAttention': False})
    } {
        Yeti000.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Yeti000.SetFacialExpression({'expression': 'smile'})
    }

    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Yeti000.Talk({'message': 'quest/QuestAreaG:Carry_Snowmountain020_030', 'getAttention': False})
    } {
        Yeti000.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Yeti000.ResetFacialExpression()
    }


    fork {
        Yeti000.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Camera.Reset({'chaseRatio': 0.05000000074505806, 'resetPlayerCamera': False})
    }

}

void Quest_Carry_Snowmountain010_030() {

    call EvResetCommon.AllReset()

    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Yeti000.Activate()
    Yeti000.AimCompassPoint({'duration': 0.0, 'direction': 3, 'withoutTurn': False, 'immediateTurn': False})
    Zelda.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="Yeti000"), 'offsetY': 0.0})
    Player.AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Yeti000"), 'duration': 0.0, 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    SnowBallInduce.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="Yeti000"), 'index': 1, 'offsetY': 0.0})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    Yeti000.GenericTalkSequenceWithDialog({'aimToPlayer': True, 'playerTalkAnim': False, 'message': 'quest/QuestAreaG:Carry_Snowmountain030_010', 'selfTalkAnim': True, 'selfTalkAnimName': 'happy', 'facial': 'smile', 'cameraLookAt': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Yeti000.Talk({'message': 'quest/QuestAreaG:Carry_Snowmountain030_020', 'getAttention': False})
    } {
        Yeti000.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Yeti000.SetFacialExpression({'expression': 'normal'})
    }

    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Yeti000.Talk({'message': 'quest/QuestAreaG:Carry_Snowmountain030_030', 'getAttention': False})
    } {
        Yeti000.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Yeti000.SetFacialExpression({'expression': 'smile'})
    }

    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Yeti000.Talk({'message': 'quest/QuestAreaG:Carry_Snowmountain030_040', 'getAttention': False})
    } {
        Yeti000.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.GenericItemGetSequence({'count': 1, 'itemKey': 'HeartPiece', 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Zelda.AddItem({'count': 1, 'itemKey': 'HeartPiece', 'index': 22, 'autoEquip': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Yeti000"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        Yeti000.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner.AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Yeti000.Talk({'message': 'quest/QuestAreaG:Carry_Snowmountain030_050', 'getAttention': False})
    } {
        Yeti000.PlayAnimationNoWait({'name': 'search', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Yeti000.ResetFacialExpression()
    }

    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Yeti000.Talk({'message': 'quest/QuestAreaG:Carry_Snowmountain030_060', 'getAttention': False})
    } {
        Yeti000.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Yeti000.Talk({'message': 'quest/QuestAreaG:Carry_Snowmountain030_090', 'getAttention': False})
    } {
        Yeti000.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Yeti000.SetFacialExpression({'expression': 'smile'})
    }

    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Yeti000.Destroy()
    Object.Destroy()
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Timer.Wait({'time': 1.0})
    QuestSystem.SetProgress({'symbol': 'Carry_Snowmountain010:1389532332', 'isShowTelopInEvent': False, 'isFrontFade': False})
    Fade.StartPreset({'preset': 'FadeInNormal'})
}

void Quest_Carry_Snowmountain010_Order_02() {
    Player.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Yeti000"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Yeti000.LookAtTalker({'duration': 0.0, 'offsetY': -0.5, 'offsetZ': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'keep': False})

    call EvResetCommon.AllResetNowait()

    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    Yeti000.GenericTalkSequenceWithDialog({'aimToPlayer': True, 'playerTalkAnim': False, 'message': 'quest/QuestAreaG:Carry_Snowmountain010_110', 'facial': 'smile', 'selfTalkAnim': True, 'selfTalkAnimName': 'talk01', 'cameraLookAt': False, 'lookAtOffsetZ': 1.0, 'lookAtOffsetY': -0.5, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Yeti000.Talk({'message': 'quest/QuestAreaG:Carry_Snowmountain010_120', 'getAttention': False})
    } {
        Yeti000.PlayAnimation({'name': 'search', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Yeti000.SetFacialExpression({'expression': 'normal'})
    }

    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Yeti000.Talk({'message': 'quest/QuestAreaG:Carry_Snowmountain010_130', 'getAttention': False})
    } {
        Yeti000.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        AreaStartTag.LookAtGimmicksLinkedPoint({'pointIndex': 0, 'duration': 0.4000000059604645, 'chaseRatio': 0.05000000074505806, 'offsetY': -3.0, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetZ': 0.0})
    }

    Timer.Wait({'time': 1.5})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.LookAtTalker({'duration': 0.0, 'offsetY': -0.5, 'offsetZ': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'keep': False})
    Timer.Wait({'time': 0.10000000149011612})

    fork {
        Yeti000.Talk({'message': 'quest/QuestAreaG:Carry_Snowmountain010_140', 'getAttention': False})
    } {
        Yeti000.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Yeti000.SetFacialExpression({'expression': 'angry'})
    }

    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Yeti000.Talk({'message': 'quest/QuestAreaG:Carry_Snowmountain010_150', 'getAttention': False})
    } {
        Yeti000.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Yeti000.SetFacialExpression({'expression': 'normal'})
    }

    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    QuestSystem.SetProgress({'symbol': 'Carry_Snowmountain010:1770040449', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void talk020() {
    switch Zelda.CheckEquippedOutfit() {
      case 1554019448:
        Yeti000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'keepTalk': True, 'message': 'scenario/StoryAreaG:Yeti000TalkSecretlyClothes_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        Yeti000.Talk({'message': 'scenario/StoryAreaG:Yeti000TalkSecretlyClothes_020', 'getAttention': False})
      case [3902480774, 3233774377]:
        Yeti000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'keepTalk': True, 'message': 'scenario/StoryAreaG:Yeti000TalkDress_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
      case [3316196802, 2356304888]:
        Yeti000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/StoryAreaG:Yeti000Talk020_010', 'keepTalk': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        Yeti000.Talk({'message': 'scenario/StoryAreaG:Yeti000Talk020_020', 'getAttention': False})
      case [1829185065, 2720556046]:
        Yeti000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'keepTalk': True, 'message': 'scenario/StoryAreaG:Yeti000TalkAnimalClothes_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        Yeti000.TalkKeep({'message': 'scenario/StoryAreaG:Yeti000TalkAnimalClothes_020', 'getAttention': False})
        Yeti000.Talk({'message': 'scenario/StoryAreaG:Yeti000TalkAnimalClothes_030', 'getAttention': False})
      case 3633431057:
        Yeti000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'keepTalk': True, 'message': 'scenario/StoryAreaG:Yeti000TalkPajama_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
      case 1400351931:
        Yeti000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'keepTalk': True, 'message': 'scenario/StoryAreaG:Yeti000TalkLinkClothes_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        Yeti000.Talk({'message': 'scenario/StoryAreaG:Yeti000TalkLinkClothes_020', 'getAttention': False})
      case 3065040287:
        Yeti000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'keepTalk': True, 'message': 'scenario/StoryAreaG:Yeti000TalkGerudoClothes_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        Yeti000.Talk({'message': 'scenario/StoryAreaG:Yeti000TalkGerudoClothes_020', 'getAttention': False})
      case 2492444684:
        Yeti000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'keepTalk': True, 'message': 'scenario/StoryAreaG:Yeti000TalkStampClothes_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        Yeti000.TalkKeep({'message': 'scenario/StoryAreaG:Yeti000TalkStampClothes_020', 'getAttention': False})
        Yeti000.Talk({'message': 'scenario/StoryAreaG:Yeti000TalkStampClothes_030', 'getAttention': False})
    }
}
