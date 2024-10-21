-------- EventFlow: Goron002 --------

Actor: Goron002
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimation', 'PlayAnimationNoWait', 'SetFacialExpression', 'AimActor', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Goron009
entrypoint: None()
actions: ['Talk', 'AimPlayer', 'SetFacialExpression', 'PlayAnimationNoWait', 'AimActor', 'SetInterestIkEnabled', 'SetInstanceVariableBool', 'PlayAnimation', 'GenericTalkSequenceWithDialog']
queries: ['GetInstanceVariableBool']
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'LookAt3ActorsCenterAsTalker']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'WarpToActorLinkedPoint', 'AimCompassPoint', 'SetInterestIkEnabled', 'PlayAnimationNoWait']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor', 'SetInterestIkEnabled', 'AimCompassPoint']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE']
queries: []
params: None

void talk() {
    Goron002.PlayAnimationNoWait({'name': 'talk_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGoron:Goron002Talk010_010', 'selfTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': False, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Goron002.Talk({'message': 'scenario/GeneralTalkGoron:Goron002Talk010_020', 'getAttention': False})
    Goron002.PlayAnimation({'name': 'wait_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void talk020() {
    Goron002.SetFacialExpression({'expression': 'sad'})
    Goron002.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGoron:Goron002Talk020_010', 'selfTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Goron002.SetFacialExpression({'expression': 'smile'})
    Goron002.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron002.Talk({'message': 'scenario/GeneralTalkGoron:Goron002Talk020_020', 'getAttention': False})
    Goron002.Talk({'message': 'scenario/GeneralTalkGoron:Goron002Talk020_030', 'getAttention': False})
}

void talk030() {
    Goron002.SetFacialExpression({'expression': 'sad'})
    Goron002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGoron:Goron002Talk030_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Goron002.SetFacialExpression({'expression': 'smile'})
    Goron002.Talk({'message': 'scenario/GeneralTalkGoron:Goron002Talk030_020', 'getAttention': False})
    Goron002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Goron009"), 'actor2': ActorIdentifier(name="Goron002"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Goron009.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Goron009.SetFacialExpression({'expression': 'sad'})
    Goron009.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron009.Talk({'message': 'scenario/GeneralTalkGoron:Goron002Talk030_030', 'getAttention': False})
    Goron002.AimActor({'actor': ActorIdentifier(name="Goron009"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Goron002.SetFacialExpression({'expression': 'sleep'})
    Goron002.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron002.Talk({'message': 'scenario/GeneralTalkGoron:Goron002Talk030_040', 'getAttention': False})
}

void talk040() {
    Player.SetInterestIkEnabled({'enable': True})
    Goron002.SetFacialExpression({'expression': 'angry'})
    Goron002.PlayAnimation({'name': 'angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGoron:Goron002Talk040_010', 'selfTalkAnimName': '', 'selfTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Goron009"), 'actor2': ActorIdentifier(name="Goron002"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Goron009.AimActor({'actor': ActorIdentifier(name="Goron002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Goron009.SetFacialExpression({'expression': 'sad'})
    Goron009.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron009.Talk({'message': 'scenario/GeneralTalkGoron:Goron002Talk040_020', 'getAttention': False})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="Goron009"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Goron002.SetFacialExpression({'expression': 'surprise'})
    Goron002.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron002.Talk({'message': 'scenario/GeneralTalkGoron:Goron002Talk040_030', 'getAttention': True})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Goron009.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void mc066_005OrderS() {

    call EvResetCommon.AllReset()

    Goron002.SetInterestIkEnabled({'enable': False})
    Goron002.SetInterestIkEnabled({'enable': False})

    fork {
        Goron002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaC:Golem_Valcano007_010', 'facial': 'surprise', 'selfTalkAnimName': 'ask', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_GORON_004_1_007_7', 'volume': 1.0, 'pitch': 1.0})
    }

    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    Player.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="Goron009"), 'index': 0, 'offsetY': 0.0})
    Player.AimCompassPoint({'direction': 2, 'duration': 1.0, 'withoutTurn': False, 'immediateTurn': False})
    Player.SetInterestIkEnabled({'enable': True})
    Partner[companion].SetInterestIkEnabled({'enable': True})
    Goron002.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Goron009.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Goron002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron002.SetFacialExpression({'expression': 'sad'})
    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Goron009"), 'actor2': ActorIdentifier(name="Goron002"), 'actor3': ActorIdentifier(name="Player"), 'duration': 0.10000000149011612, 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})

    fork {
        Goron009.Talk({'message': 'quest/QuestAreaC:Golem_Valcano007_020', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="Goron009"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Goron009.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Goron009.PlayAnimationNoWait({'name': 'no01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron009.SetFacialExpression({'expression': 'sad'})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_GORON_003_1_004_4', 'volume': 1.0, 'pitch': 1.0})
    }

    Goron002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron009.Talk({'message': 'quest/QuestAreaC:Golem_Valcano007_030', 'getAttention': False})
    } {
        Goron009.PlayAnimationNoWait({'name': 'wait03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron009.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        Goron002.Talk({'message': 'quest/QuestAreaC:Golem_Valcano007_040', 'getAttention': False})
    } {
        Goron002.PlayAnimationNoWait({'name': 'wait03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron002.SetFacialExpression({'expression': 'sleep'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="Goron002"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Goron009.Talk({'message': 'quest/QuestAreaC:Golem_Valcano007_050', 'getAttention': False})
    } {
        Goron009.PlayAnimationNoWait({'name': 'yes01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron009.SetFacialExpression({'expression': 'normal'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="Goron009"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Goron009.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron002.Talk({'message': 'quest/QuestAreaC:Golem_Valcano007_060', 'getAttention': False})
    } {
        Goron002.PlayAnimationNoWait({'name': 'yes01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron002.SetFacialExpression({'expression': 'normal'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="Goron002"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Goron002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    EventFlags.SetFlag({'symbol': 'Mc066MetGandS', 'value': True})
    QuestSystem.SetProgress({'symbol': 'Golem_Valcano010:3590350612', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void mc066_005TalkS() {

    call EvResetCommon.AllReset()

    Goron002.SetInterestIkEnabled({'enable': False})
    Goron009.SetInterestIkEnabled({'enable': False})
    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Goron009"), 'actor2': ActorIdentifier(name="Goron002"), 'actor3': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        Goron009.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaC:Golem_Valcano007_050', 'aimFromPlayer': False, 'selfTalkAnimName': 'yes01,talk01', 'playerTalkAnim': False, 'cameraLookAt': False, 'facial': 'sad', 'aimToPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Goron009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': False, 'actor': ActorIdentifier(name="Goron002"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Goron009.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron002.Talk({'message': 'quest/QuestAreaC:Golem_Valcano007_060', 'getAttention': False})
    } {
        Goron002.PlayAnimationNoWait({'name': 'yes01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron002.SetFacialExpression({'expression': 'sad'})
    } {
        Goron002.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Goron002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': False, 'actor': ActorIdentifier(name="Goron002"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void mc066_010ContactS() {
    if !EventFlags.CheckFlag({'symbol': 'Mc066MetGandS'}) {
        if !EventFlags.CheckFlag({'symbol': 'Mc066GC_First'}) {
            Event80:

            call EvResetCommon.AllReset()

            Goron002.SetInterestIkEnabled({'enable': False})
            Goron009.SetInterestIkEnabled({'enable': False})

            fork {
                Goron002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaC:Golem_Valcano008_010', 'selfTalkAnimName': 'happy01', 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
            } {
                Audio.PlayOneshotSystemSE({'label': 'VO_GORON_004_1_002_1', 'volume': 1.0, 'pitch': 1.0})
            }

            Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Goron009"), 'actor2': ActorIdentifier(name="Goron002"), 'actor3': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

            fork {
                Goron009.Talk({'message': 'quest/QuestAreaC:Golem_Valcano008_020', 'getAttention': False})
            } {
                Timer.Wait({'time': 0.20000000298023224})
                Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Goron009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.30000001192092896})
                Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': False, 'actor': ActorIdentifier(name="Goron009"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Goron009.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Goron009.PlayAnimationNoWait({'name': 'no01,think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Goron009.SetFacialExpression({'expression': 'sleep'})
            }


            fork {
                Goron002.Talk({'message': 'quest/QuestAreaC:Golem_Valcano008_030', 'getAttention': False})
            } {
                Timer.Wait({'time': 0.20000000298023224})
                Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Goron002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.30000001192092896})
                Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': False, 'actor': ActorIdentifier(name="Goron002"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Goron002.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Goron002.PlayAnimationNoWait({'name': 'no01,think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Goron002.SetFacialExpression({'expression': 'sleep'})
            }


            fork {
                Goron009.PlayAnimation({'name': 'yes01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Goron009.SetFacialExpression({'expression': 'smile'})
            } {
                Goron002.PlayAnimation({'name': 'yes01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Goron002.SetFacialExpression({'expression': 'smile'})
            }

            Timer.Wait({'time': 0.5})
        } else {

            call EvResetCommon.AllReset()

            Goron002.SetInterestIkEnabled({'enable': False})
            Goron002.SetInterestIkEnabled({'enable': False})

            fork {
                Goron002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaC:Golem_Valcano007_010', 'facial': 'surprise', 'selfTalkAnimName': 'ask', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
            } {
                Audio.PlayOneshotSystemSE({'label': 'VO_GORON_004_1_007_7', 'volume': 1.0, 'pitch': 1.0})
            }

            Fade.StartPreset({'preset': 'FadeOutSlowB'})
            Player.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="Goron009"), 'index': 0, 'offsetY': 0.0})
            Player.AimCompassPoint({'direction': 2, 'duration': 1.0, 'withoutTurn': False, 'immediateTurn': False})
            Player.SetInterestIkEnabled({'enable': True})
            Partner[companion].SetInterestIkEnabled({'enable': True})
            Goron002.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Goron009.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Goron002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Goron002.SetFacialExpression({'expression': 'sad'})
            Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Goron009"), 'actor2': ActorIdentifier(name="Goron002"), 'actor3': ActorIdentifier(name="Player"), 'duration': 0.10000000149011612, 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
            Timer.Wait({'time': 1.0})
            Fade.StartPreset({'preset': 'FadeInSlow'})

            fork {
                Goron009.Talk({'message': 'quest/QuestAreaC:Golem_Valcano007_020', 'getAttention': False})
            } {
                Timer.Wait({'time': 0.20000000298023224})
                Player.AimActor({'actor': ActorIdentifier(name="Goron009"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.30000001192092896})
                Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="Goron009"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Goron009.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Goron009.PlayAnimationNoWait({'name': 'no01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Goron009.SetFacialExpression({'expression': 'sad'})
            } {
                Audio.PlayOneshotSystemSE({'label': 'VO_GORON_003_1_005_1', 'volume': 1.0, 'pitch': 1.0})
            }

            Goron009.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Player.AimCompassPoint({'direction': 2, 'withoutTurn': False, 'duration': 0.4000000059604645, 'immediateTurn': False})
            Player.PlayAnimationNoWait({'name': 'talk_hand', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 1.0})
            Player.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 0.20000000298023224})

            fork {
                Goron002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaC:Golem_Valcano008_010', 'selfTalkAnimName': 'happy01', 'cameraLookAt': False, 'keepPersonalSpace': False, 'unmorph': False, 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
            } {
                Audio.PlayOneshotSystemSE({'label': 'VO_GORON_004_1_002_1', 'volume': 1.0, 'pitch': 1.0})
            } {
                Timer.Wait({'time': 0.30000001192092896})
                Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="Goron002"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.20000000298023224})
                Player.AimActor({'actor': ActorIdentifier(name="Goron002"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }

            EventFlags.SetFlag({'symbol': 'Mc066MetGandS', 'value': True})

            fork {
                Goron009.Talk({'message': 'quest/QuestAreaC:Golem_Valcano008_020', 'getAttention': False})
            } {
                Timer.Wait({'time': 0.20000000298023224})
                Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.30000001192092896})
                Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="Goron009"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Goron009.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Goron009.PlayAnimationNoWait({'name': 'no01,think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Goron009.SetFacialExpression({'expression': 'sleep'})
            }

            Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Goron009"), 'actor2': ActorIdentifier(name="Goron002"), 'actor3': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

            fork {
                Goron002.Talk({'message': 'quest/QuestAreaC:Golem_Valcano008_030', 'getAttention': False})
            } {
                Timer.Wait({'time': 0.20000000298023224})
                Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.30000001192092896})
                Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="Goron002"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Goron002.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Goron002.PlayAnimationNoWait({'name': 'no01,think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Goron002.SetFacialExpression({'expression': 'sleep'})
            }


            fork {
                Goron009.PlayAnimation({'name': 'yes01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Goron009.SetFacialExpression({'expression': 'smile'})
            } {
                Goron002.PlayAnimation({'name': 'yes01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Goron002.SetFacialExpression({'expression': 'smile'})
            } {
                Timer.Wait({'time': 0.20000000298023224})
                Player.AimCompassPoint({'withoutTurn': False, 'direction': 2, 'duration': 0.4000000059604645, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.2999999523162842})
                Partner[companion].AimCompassPoint({'duration': 0.4000000059604645, 'withoutTurn': False, 'direction': 2, 'immediateTurn': False})
            }

            Timer.Wait({'time': 0.5})
        }
    } else {
        goto Event80
    }
}

void mc066_020TalkS() {
    if !EventFlags.CheckFlag({'symbol': 'Mc066MetGandS'}) {
        if !EventFlags.CheckFlag({'symbol': 'Mc066GC_First'}) {
            Event110:

            call EvResetCommon.AllReset()

            Goron002.SetInterestIkEnabled({'enable': False})
            Goron009.SetInterestIkEnabled({'enable': False})

            fork {
                Goron002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': 'surprise', 'message': 'quest/QuestAreaC:Golem_Valcano008_050', 'selfTalkAnimName': 'surprised_st01,surprised_lp01', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
            } {
                Audio.PlayOneshotSystemSE({'label': 'VO_GORON_004_1_007_7', 'volume': 1.0, 'pitch': 1.0})
            }

            Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Goron009"), 'actor2': ActorIdentifier(name="Goron002"), 'actor3': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

            fork {
                Goron009.Talk({'message': 'quest/QuestAreaC:Golem_Valcano008_060', 'getAttention': False})
            } {
                Timer.Wait({'time': 0.20000000298023224})
                Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Goron009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.30000001192092896})
                Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': False, 'actor': ActorIdentifier(name="Goron009"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Goron009.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Goron009.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Goron009.SetFacialExpression({'expression': 'surprise'})
            } {
                Audio.PlayOneshotSystemSE({'label': 'VO_GORON_003_1_007_2', 'volume': 1.0, 'pitch': 1.0})
            }

            if !Goron009.GetInstanceVariableBool({'name': 'talkFinish'}) {

                fork {
                    Goron009.Talk({'message': 'quest/QuestAreaC:Golem_Valcano008_070', 'getAttention': False})
                } {
                    Goron009.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                } {
                    Goron009.SetFacialExpression({'expression': 'normal'})
                }


                fork {
                    Goron002.Talk({'message': 'quest/QuestAreaC:Golem_Valcano008_080', 'getAttention': False})
                } {
                    Timer.Wait({'time': 0.20000000298023224})
                    Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Goron002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                } {
                    Timer.Wait({'time': 0.30000001192092896})
                    Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': False, 'actor': ActorIdentifier(name="Goron002"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                } {
                    Goron002.PlayAnimationNoWait({'name': 'yes01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                } {
                    Goron002.SetFacialExpression({'expression': 'normal'})
                }

                Goron009.SetInstanceVariableBool({'value': True, 'name': 'talkFinish'})
            }
        } else {

            call EvResetCommon.AllReset()

            Goron002.SetInterestIkEnabled({'enable': False})
            Goron002.SetInterestIkEnabled({'enable': False})

            fork {
                Goron002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaC:Golem_Valcano007_010', 'facial': 'surprise', 'selfTalkAnimName': 'ask', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
            } {
                Audio.PlayOneshotSystemSE({'label': 'VO_GORON_004_1_007_7', 'volume': 1.0, 'pitch': 1.0})
            }

            Fade.StartPreset({'preset': 'FadeOutSlowB'})
            Player.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="Goron009"), 'index': 0, 'offsetY': 0.0})
            Player.AimCompassPoint({'direction': 2, 'duration': 1.0, 'withoutTurn': False, 'immediateTurn': False})
            Player.SetInterestIkEnabled({'enable': True})
            Partner[companion].AimCompassPoint({'withoutTurn': False, 'direction': 2, 'duration': 0.0, 'immediateTurn': False})
            Partner[companion].SetInterestIkEnabled({'enable': True})
            Goron002.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Goron009.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Goron002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Goron002.SetFacialExpression({'expression': 'sad'})
            Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Goron009"), 'actor2': ActorIdentifier(name="Goron002"), 'actor3': ActorIdentifier(name="Player"), 'duration': 0.10000000149011612, 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
            Timer.Wait({'time': 1.0})
            Fade.StartPreset({'preset': 'FadeInSlow'})

            fork {
                Goron009.Talk({'message': 'quest/QuestAreaC:Golem_Valcano008Other_010', 'getAttention': False})
            } {
                Timer.Wait({'time': 0.20000000298023224})
                Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.30000001192092896})
                Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Goron009"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Goron009.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Goron009.PlayAnimationNoWait({'name': 'no01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Goron009.SetFacialExpression({'expression': 'sad'})
            } {
                Audio.PlayOneshotSystemSE({'label': 'VO_GORON_003_1_005_1', 'volume': 1.0, 'pitch': 1.0})
            }

            Goron009.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Player.AimCompassPoint({'direction': 2, 'withoutTurn': False, 'duration': 0.4000000059604645, 'immediateTurn': False})
            Player.PlayAnimationNoWait({'name': 'talk_hand', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Partner[companion].AimCompassPoint({'withoutTurn': False, 'direction': 2, 'duration': 0.4000000059604645, 'immediateTurn': False})
            Timer.Wait({'time': 1.0})
            Player.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

            fork {
                Goron002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': 'surprise', 'message': 'quest/QuestAreaC:Golem_Valcano008_050', 'selfTalkAnimName': 'surprised_st01,surprised_lp01', 'cameraLookAt': False, 'keepPersonalSpace': False, 'aimFromPlayer': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
            } {
                Audio.PlayOneshotSystemSE({'label': 'VO_GORON_004_1_007_7', 'volume': 1.0, 'pitch': 1.0})
            } {
                Timer.Wait({'time': 0.30000001192092896})
                Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="Goron002"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.20000000298023224})
                Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }

            EventFlags.SetFlag({'symbol': 'Mc066MetGandS', 'value': True})

            fork {
                Goron009.Talk({'message': 'quest/QuestAreaC:Golem_Valcano008_060', 'getAttention': False})
            } {
                Timer.Wait({'time': 0.20000000298023224})
                Player.AimActor({'actor': ActorIdentifier(name="Goron009"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.30000001192092896})
                Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Goron009"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Goron009.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Goron009.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Goron009.SetFacialExpression({'expression': 'surprise'})
            } {
                Audio.PlayOneshotSystemSE({'label': 'VO_GORON_003_1_007_2', 'volume': 1.0, 'pitch': 1.0})
            }

            if !Goron009.GetInstanceVariableBool({'name': 'talkFinish'}) {

                fork {
                    Goron009.Talk({'message': 'quest/QuestAreaC:Golem_Valcano008_070', 'getAttention': False})
                } {
                    Goron009.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                } {
                    Goron009.SetFacialExpression({'expression': 'normal'})
                }


                fork {
                    Goron002.Talk({'message': 'quest/QuestAreaC:Golem_Valcano008_080', 'getAttention': False})
                } {
                    Timer.Wait({'time': 0.20000000298023224})
                    Player.AimActor({'actor': ActorIdentifier(name="Goron002"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                } {
                    Timer.Wait({'time': 0.30000001192092896})
                    Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Goron002"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                } {
                    Goron002.PlayAnimationNoWait({'name': 'yes01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                } {
                    Goron002.SetFacialExpression({'expression': 'normal'})
                }

                Goron009.SetInstanceVariableBool({'value': True, 'name': 'talkFinish'})
            }
        }
    } else {
        goto Event110
    }
}
