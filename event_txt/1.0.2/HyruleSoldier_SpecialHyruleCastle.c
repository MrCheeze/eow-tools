-------- EventFlow: HyruleSoldier_SpecialHyruleCastle --------

Actor: HyruleSoldier_SpecialHyruleCastle
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'AimActor', 'PlayAnimation', 'SetFacialExpression', 'AimToInitialAngle']
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

Actor: HyruleSoldier_SpecialHyruleCastle[03]
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'PlayAnimation', 'AimActor']
queries: []
params: None

Actor: HyruleSoldier_SpecialHyruleCastle[09]
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'PlayAnimation', 'AimActor']
queries: []
params: None

Actor: HyruleSoldier_SpecialHyruleCastle[06]
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'PlayAnimation', 'AimActor']
queries: []
params: None

Actor: HyruleSoldier_SpecialHyruleCastle[07]
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'PlayAnimation', 'AimActor']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: []
queries: []
params: None

void Special_HyruleCastle050_030() {

    fork {
        HyruleSoldier_SpecialHyruleCastle[03].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'facial': 'sad', 'message': 'quest/QuestAreaA:Special_HyruleCastle050_030', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        HyruleSoldier_SpecialHyruleCastle[09].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HyruleSoldier_SpecialHyruleCastle[03].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier_SpecialHyruleCastle[03].AimActor({'actor': ActorIdentifier(name="HyruleSoldier_SpecialHyruleCastle", sub_name="09"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
}

void Special_HyruleCastle050_040() {
    HyruleSoldier_SpecialHyruleCastle.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'facial': 'sad', 'message': 'quest/QuestAreaA:Special_HyruleCastle050_040', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HyruleSoldier_SpecialHyruleCastle.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'facial': 'sad', 'message': 'quest/QuestAreaA:Special_HyruleCastle050_050', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HyruleSoldier_SpecialHyruleCastle.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier_SpecialHyruleCastle.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
}

void Special_HyruleCastle050_050() {
    HyruleSoldier_SpecialHyruleCastle.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'facial': 'sad', 'message': 'quest/QuestAreaA:Special_HyruleCastle050_060', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HyruleSoldier_SpecialHyruleCastle.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'facial': 'sad', 'message': 'quest/QuestAreaA:Special_HyruleCastle050_070', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HyruleSoldier_SpecialHyruleCastle.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier_SpecialHyruleCastle.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
}

void Special_HyruleCastle050_060() {

    fork {
        HyruleSoldier_SpecialHyruleCastle[06].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'facial': 'sad', 'message': 'quest/QuestAreaA:Special_HyruleCastle050_080', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        HyruleSoldier_SpecialHyruleCastle[07].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HyruleSoldier_SpecialHyruleCastle[06].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'facial': 'sad', 'message': 'quest/QuestAreaA:Special_HyruleCastle050_090', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HyruleSoldier_SpecialHyruleCastle[06].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier_SpecialHyruleCastle[06].AimActor({'actor': ActorIdentifier(name="HyruleSoldier_SpecialHyruleCastle", sub_name="07"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
}

void Special_HyruleCastle050_070() {

    fork {
        HyruleSoldier_SpecialHyruleCastle[07].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'facial': 'sad', 'message': 'quest/QuestAreaA:Special_HyruleCastle050_100', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        HyruleSoldier_SpecialHyruleCastle[06].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HyruleSoldier_SpecialHyruleCastle[07].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'facial': 'sad', 'message': 'quest/QuestAreaA:Special_HyruleCastle050_110', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HyruleSoldier_SpecialHyruleCastle[07].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier_SpecialHyruleCastle[07].AimActor({'actor': ActorIdentifier(name="HyruleSoldier_SpecialHyruleCastle", sub_name="06"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
}

void Special_HyruleCastle050_080() {
    HyruleSoldier_SpecialHyruleCastle.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'facial': 'sad', 'message': 'quest/QuestAreaA:Special_HyruleCastle050_120', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HyruleSoldier_SpecialHyruleCastle.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'facial': 'sad', 'message': 'quest/QuestAreaA:Special_HyruleCastle050_130', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HyruleSoldier_SpecialHyruleCastle.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier_SpecialHyruleCastle.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
}

void Special_HyruleCastle050_090() {

    fork {
        HyruleSoldier_SpecialHyruleCastle[09].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'facial': 'sad', 'message': 'quest/QuestAreaA:Special_HyruleCastle050_140', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        HyruleSoldier_SpecialHyruleCastle[03].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HyruleSoldier_SpecialHyruleCastle[09].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'facial': 'sad', 'message': 'quest/QuestAreaA:Special_HyruleCastle050_150', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HyruleSoldier_SpecialHyruleCastle[09].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier_SpecialHyruleCastle[09].AimActor({'actor': ActorIdentifier(name="HyruleSoldier_SpecialHyruleCastle", sub_name="03"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
}

void Special_HyruleCastle050_100() {

    call EvResetCommon.AllReset()

    HyruleSoldier_SpecialHyruleCastle.AimActor({'duration': 0.800000011920929, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HyruleSoldier_SpecialHyruleCastle.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'facial': 'sad', 'message': 'quest/QuestAreaA:Special_HyruleCastle070_010', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HyruleSoldier_SpecialHyruleCastle.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle070_020', 'getAttention': False})
    HyruleSoldier_SpecialHyruleCastle.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle070_030', 'getAttention': False})

    fork {
        HyruleSoldier_SpecialHyruleCastle.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle070_040', 'getAttention': False})
    } {
        HyruleSoldier_SpecialHyruleCastle.PlayAnimation({'name': 'no', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier_SpecialHyruleCastle.SetFacialExpression({'expression': 'sad'})
    }

    HyruleSoldier_SpecialHyruleCastle.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'Find_ForestSquare_Crack'})
    QuestSystem.SetProgress({'symbol': 'Special_HyruleCastle010:3741746923', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Special_HyruleCastle050_105() {
    if !EventFlags.CheckFlag({'symbol': 'SmallBoundaryWorldOpen_016'}) {
        HyruleSoldier_SpecialHyruleCastle.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'facial': 'sad', 'message': 'quest/QuestAreaA:Special_HyruleCastle070_020', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        HyruleSoldier_SpecialHyruleCastle.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle070_030', 'getAttention': False})

        fork {
            HyruleSoldier_SpecialHyruleCastle.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle070_040', 'getAttention': False})
        } {
            HyruleSoldier_SpecialHyruleCastle.PlayAnimation({'name': 'no', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier_SpecialHyruleCastle.SetFacialExpression({'expression': 'sad'})
        }

        HyruleSoldier_SpecialHyruleCastle.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } else {
        HyruleSoldier_SpecialHyruleCastle.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'facial': 'sad', 'message': 'quest/QuestAreaA:Special_HyruleCastle073_010', 'aimToPlayer': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
}
