-------- EventFlow: ZoraRiver003 --------

Actor: ZoraRiver003
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SetFacialExpression', 'PlayAnimationNoWait', 'PlayAnimation', 'AimPlayer']
queries: []
params: None

void talk() {
    ZoraRiver003.GenericTalkSequenceWithDialog({'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver003Talk010_010', 'facial': 'sad', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraRiver003.SetFacialExpression({'expression': 'surprise'})
    ZoraRiver003.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver003.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver003Talk010_020', 'getAttention': False})
}

void talk020() {
    ZoraRiver003.SetFacialExpression({'expression': 'sad'})
    ZoraRiver003.GenericTalkSequenceWithDialog({'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver003Talk020_010', 'selfTalkAnimName': 'sad01', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraRiver003.SetFacialExpression({'expression': 'smile'})
    ZoraRiver003.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver003.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver003Talk020_020', 'getAttention': False})
}

void talk030() {
    ZoraRiver003.SetFacialExpression({'expression': 'smile'})
    ZoraRiver003.GenericTalkSequenceWithDialog({'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver003Talk030_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraRiver003.SetFacialExpression({'expression': 'sad'})
    ZoraRiver003.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver003.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver003Talk030_020', 'getAttention': False})
    ZoraRiver003.SetFacialExpression({'expression': 'normal'})
    ZoraRiver003.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver003.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver003Talk030_030', 'getAttention': False})
}

void Special_Coast010_020() {
    ZoraRiver003.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'quest/QuestAreaB:Special_Coast050_010', 'facial': '', 'selfTalkAnimName': 'think01', 'aimToPlayer': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraRiver003.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        ZoraRiver003.Talk({'message': 'quest/QuestAreaB:Special_Coast050_020', 'getAttention': False})
    } {
        ZoraRiver003.PlayAnimation({'name': 'wait03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver003.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        ZoraRiver003.Talk({'message': 'quest/QuestAreaB:Special_Coast050_025', 'getAttention': False})
    } {
        ZoraRiver003.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        ZoraRiver003.Talk({'message': 'quest/QuestAreaB:Special_Coast050_030', 'getAttention': False})
    } {
        ZoraRiver003.SetFacialExpression({'expression': 'sleep'})
    } {
        ZoraRiver003.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        ZoraRiver003.Talk({'message': 'quest/QuestAreaB:Special_Coast050_030_02', 'getAttention': False})
    } {
        ZoraRiver003.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraRiver003.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void talk040() {
    ZoraRiver003.GenericTalkSequenceWithDialog({'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver003Talk040_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}
