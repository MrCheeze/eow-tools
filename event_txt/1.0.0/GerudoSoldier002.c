-------- EventFlow: GerudoSoldier002 --------

Actor: GerudoSoldier002
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimation', 'SetFacialExpression', 'PlayAnimationNoWait']
queries: []
params: None

void talk() {
    GerudoSoldier002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': 'surprise', 'selfTalkAnimName': 'surprised_st01,surprised_lp01', 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier015Talk01_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        GerudoSoldier002.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoSoldier015Talk01_020', 'getAttention': False})
    } {
        GerudoSoldier002.SetFacialExpression({'expression': 'sad'})
        GerudoSoldier002.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        GerudoSoldier002.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoSoldier015Talk01_030', 'getAttention': False})
    } {
        GerudoSoldier002.SetFacialExpression({'expression': 'sleep'})
        GerudoSoldier002.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void talk010() {
    GerudoSoldier002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier015Talk015_010', 'selfTalkAnimName': '', 'facial': 'sad', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        GerudoSoldier002.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoSoldier015Talk015_020', 'getAttention': False})
    } {
        GerudoSoldier002.SetFacialExpression({'expression': 'sleep'})
        GerudoSoldier002.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}
