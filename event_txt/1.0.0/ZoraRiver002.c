-------- EventFlow: ZoraRiver002 --------

Actor: ZoraRiver002
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SetFacialExpression', 'PlayAnimation', 'SetTalkerName', 'AimActor', 'AimToInitialAngle', 'SetInstanceVariableString']
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
actions: []
queries: []
params: None

void talk() {
    ZoraRiver002.GenericTalkSequenceWithDialog({'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver002Talk005_010', 'selfTalkAnimName': '', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraRiver002.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver002Talk005_020', 'getAttention': False})
}

void talk020() {
    ZoraRiver002.GenericTalkSequenceWithDialog({'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver002Talk010_010', 'selfTalkAnimName': 'think01', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk030() {
    ZoraRiver002.SetFacialExpression({'expression': 'smile'})
    ZoraRiver002.GenericTalkSequenceWithDialog({'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver002Talk020_010', 'selfTalkAnimName': 'happy01', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraRiver002.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver002Talk020_020', 'getAttention': False})
}

void Special_Coast010_010() {

    call EvResetCommon.AllReset()

    ZoraRiver002.SetTalkerName({'message': 'glossary/Character:ZoraRiver002', 'keep': False})
    ZoraRiver002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaB:Special_Coast030_010', 'facial': '', 'aimToPlayer': False, 'selfTalkAnimName': 'sad02', 'selfTalkAnim': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        ZoraRiver002.Talk({'message': 'quest/QuestAreaB:Special_Coast030_020', 'getAttention': False})
    } {
        ZoraRiver002.PlayAnimation({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver002.SetFacialExpression({'expression': 'sad'})
    }

    ZoraRiver002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiver002.Talk({'message': 'quest/QuestAreaB:Special_Coast030_030', 'getAttention': False})
    } {
        ZoraRiver002.PlayAnimation({'name': 'angry02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver002.SetFacialExpression({'expression': 'angry'})
    }

    ZoraRiver002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiver002.Talk({'message': 'quest/QuestAreaB:Special_Coast030_040', 'getAttention': False})
    } {
        ZoraRiver002.PlayAnimation({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    ZoraRiver002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiver002.Talk({'message': 'quest/QuestAreaB:Special_Coast030_050', 'getAttention': False})
    } {
        ZoraRiver002.PlayAnimation({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver002.SetFacialExpression({'expression': 'angry'})
    }


    call GeneralSequence.ZeldaTalkMotion()

    Timer.Wait({'time': 0.5})
    ZoraRiver002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiver002.Talk({'message': 'quest/QuestAreaB:Special_Coast030_060', 'getAttention': False})
    } {
        ZoraRiver002.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraRiver002.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    ZoraRiver002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiver002.Talk({'message': 'quest/QuestAreaB:Special_Coast030_070', 'getAttention': False})
    } {
        ZoraRiver002.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver002.SetFacialExpression({'expression': 'sad'})
    }

    ZoraRiver002.Talk({'message': 'quest/QuestAreaB:Special_Coast030_080', 'getAttention': False})
    QuestSystem.SetProgress({'symbol': 'Special_Coast010:1491560386', 'isShowTelopInEvent': False, 'isFrontFade': False})
    ZoraRiver002.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait01'})
}

void Special_Coast010_020() {
    ZoraRiver002.SetTalkerName({'message': 'glossary/Character:ZoraRiver002', 'keep': False})
    ZoraRiver002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaB:Special_Coast040_010', 'facial': '', 'selfTalkAnim': True, 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraRiver002.Talk({'message': 'quest/QuestAreaB:Special_Coast040_020', 'getAttention': False})
}

void Special_Coast010_030() {
    ZoraRiver002.SetTalkerName({'message': 'glossary/Character:ZoraRiver002', 'keep': False})
    ZoraRiver002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'message': 'quest/QuestAreaB:Special_Coast060_080', 'selfTalkAnimName': 'think01', 'facial': '', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraRiver002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiver002.Talk({'message': 'quest/QuestAreaB:Special_Coast060_090', 'getAttention': False})
    } {
        ZoraRiver002.PlayAnimation({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver002.SetFacialExpression({'expression': 'sad'})
    }

    ZoraRiver002.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
}

void talk040() {
    ZoraRiver002.SetFacialExpression({'expression': 'smile'})
    ZoraRiver002.GenericTalkSequenceWithDialog({'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'playerTalkAnim': False, 'selfTalkAnimName': 'happy01', 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver002Talk030_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraRiver002.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver002Talk030_020', 'getAttention': False})
}
