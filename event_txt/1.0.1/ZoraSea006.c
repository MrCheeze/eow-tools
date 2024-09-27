-------- EventFlow: ZoraSea006 --------

Actor: ZoraSea006
entrypoint: None()
actions: ['Talk', 'GenericTalkSequenceWithDialog', 'PlayAnimationNoWait', 'SetInstanceVariableBool', 'AimActor', 'SetFacialExpression', 'PlayAnimation', 'PlayAnimationEx', 'AimCompassPoint']
queries: ['GetInstanceVariableBool']
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: ZoraRiverChief
entrypoint: None()
actions: ['LookAtTalker', 'PlayAnimationNoWait', 'Talk', 'AimPlayer', 'AimActor', 'SetFacialExpression', 'AimDegreeAngle', 'SetInterestIkEnabled', 'PlayAnimation']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['WarpToActor', 'AimActor', 'PlayAnimationNoWait']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['MorphEnd']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['WarpToActor', 'AimActor', 'Talk', 'PlayAnimationNoWait', 'MoveToBesideTargetActor']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE']
queries: []
params: None

void talk() {
    ZoraSea006.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea006Talk010_010', 'selfTalkAnimName': 'think01', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSea006.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSea006.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea006Talk010_020', 'getAttention': False})
}

void talk020() {
    ZoraSea006.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/StoryAreaB:CalamityByJabuJabu_Coast_060', 'selfTalkAnimName': 'sad01', 'facial': 'sad', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void CalamityByJabuJabu_Coast() {

    call EvResetCommon.AllReset()


    fork {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'strain_01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:CalamityByJabuJabu_Coast_010', 'getAttention': False})
    } {
        ZoraSea006.SetFacialExpression({'expression': 'sad'})
        ZoraSea006.PlayAnimationNoWait({'name': 'ev_worry_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    call FadeIn()


    fork {

        call TalkZoraRiverChief()

    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:CalamityByJabuJabu_Coast_020', 'getAttention': False})
    }


    fork {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea006.PlayAnimationEx({'time': 0.4000000059604645, 'name': 'ev_worry_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {

        call TalkZoraSea006()

    } {
        ZoraSea006.PlayAnimationNoWait({'name': 'ev_worry_talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea006.Talk({'message': 'scenario/StoryAreaB:CalamityByJabuJabu_Coast_030', 'getAttention': False})
    }


    fork {
        ZoraSea006.PlayAnimationNoWait({'blendFrame': -1, 'name': 'ev_worry_talk', 'layer': 0, 'restart': False})
    } {
        ZoraSea006.Talk({'message': 'scenario/StoryAreaB:CalamityByJabuJabu_Coast_040', 'getAttention': False})
    }

    ZoraSea006.PlayAnimationNoWait({'name': 'ev_worry_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {

        call TalkZoraRiverChief()

    } {
        ZoraRiverChief.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:CalamityByJabuJabu_Coast_050', 'getAttention': False})
    }

    ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSea006.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {

        call TalkZoraSea006()

    } {
        ZoraSea006.SetFacialExpression({'expression': 'sad'})
    } {
        ZoraSea006.PlayAnimationNoWait({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea006.Talk({'message': 'scenario/StoryAreaB:CalamityByJabuJabu_Coast_060', 'getAttention': False})
    }


    fork {
        Timer.Wait({'time': 0.4000000059604645})
        Zelda.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.800000011920929, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.6000000238418579, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraRiverChief.SetFacialExpression({'expression': 'smile'})
    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:CalamityByJabuJabu_Coast_070', 'getAttention': False})
    }

    ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraRiverChief.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {

        fork {
            ZoraSea006.PlayAnimation({'blendFrame': 10, 'name': 'ev_worry_wait', 'layer': 0, 'restart': False})
        } {
            ZoraSea006.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        ZoraSea006.PlayAnimation({'name': 'yes01,ev_worry_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    ZoraRiverChief.AimDegreeAngle({'angle': 30.0, 'duration': 0.20000000298023224, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        ZoraRiverChief.SetFacialExpression({'expression': 'sleep'})
    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:CalamityByJabuJabu_Coast_080', 'getAttention': False})
    }

    ZoraRiverChief.SetInterestIkEnabled({'enable': False})
    ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiverChief.SetFacialExpression({'expression': 'normal'})
    Timer.Wait({'time': 0.4000000059604645})
    ZoraRiverChief.AimDegreeAngle({'withoutTurn': False, 'angle': 198.38600158691406, 'duration': 0.6000000238418579, 'immediateTurn': False})
    ZoraRiverChief.PlayAnimationNoWait({'name': 'strain_01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetY': 1.0, 'offsetZ': 2.0, 'actor': ActorIdentifier(name="Player"), 'offsetX': -1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].AimActor({'duration': 0.6000000238418579, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].Talk({'message': 'scenario/StoryAreaB:CalamityByJabuJabu_Coast_090', 'getAttention': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvB_GetInfo_Coast'})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvB_CalamityByJabuJabu_Coast'})
    QuestSystem.SetProgress({'symbol': 'Calamity_Coast:2290931515', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void talk030() {
    ZoraSea006.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea006Talk030_010', 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSea006.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea006Talk030_020', 'getAttention': False})
}

void talk040() {
    if !ZoraSea006.GetInstanceVariableBool({'name': 'talkFinish'}) {
        ZoraSea006.SetInstanceVariableBool({'name': 'talkFinish', 'value': True})
        ZoraSea006.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea006Talk040_010', 'playerTalkAnim': False, 'selfTalkAnimName': 'happy01,wait01', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        ZoraSea006.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea006Talk040_020', 'getAttention': False})
    } else {
        Player.MorphEnd()

        fork {
            ZoraSea006.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'selfTalkAnimName': 'happy01,wait01', 'message': 'scenario/GeneralTalkZoraSea:ZoraSea006Talk040_020', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'SEQ_VO_ZORA_W002_2_001', 'volume': 1.0, 'pitch': 1.0})
        }

    }
}

void talk050() {
    ZoraSea006.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea006Talk050_010', 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSea006.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea006Talk050_020', 'getAttention': False})
}

void FadeIn() {
    Fade.StartPreset({'preset': 'FadeOutSlowB'})

    fork {
        Zelda.WarpToActor({'distance': -1.0, 'offsetX': -2.0, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'offsetY': 0.0})
        Zelda.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Zelda.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].WarpToActor({'offsetY': 1.0, 'distance': 2.0, 'offsetX': -1.5, 'actor': ActorIdentifier(name="ZoraRiverChief")})
        Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetY': 1.0, 'offsetZ': 2.0, 'actor': ActorIdentifier(name="Player"), 'offsetX': 0.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiverChief.AimPlayer({'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraSea006.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraSea006.PlayAnimationNoWait({'name': 'ev_worry_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSea006.SetFacialExpression({'expression': 'sad'})
    }

    Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 0.0, 'actor1': ActorIdentifier(name="ZoraRiverChief"), 'actor2': ActorIdentifier(name="Player"), 'duration': 0.0, 'chaseRatio': 1.0, 'weight1': 1.0, 'weight2': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 2.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})
}

void TalkZoraSea006() {

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraSea006"), 'duration': 0.30000001192092896, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Zelda.AimActor({'actor': ActorIdentifier(name="ZoraSea006"), 'duration': 0.800000011920929, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSea006"), 'duration': 0.6000000238418579, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void TalkZoraRiverChief() {

    fork {
        ZoraRiverChief.AimActor({'duration': 0.30000001192092896, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Zelda.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.800000011920929, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.6000000238418579, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}
