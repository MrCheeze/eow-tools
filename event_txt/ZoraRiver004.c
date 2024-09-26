-------- EventFlow: ZoraRiver004 --------

Actor: ZoraRiver004
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimation', 'SetFacialExpression', 'PlayAnimationNoWait', 'SetDefaultFacialExpression', 'SetInstanceVariableString']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
params: None

void talk() {
    ZoraRiver004.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver004Talk010_010', 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        ZoraRiver004.SetFacialExpression({'expression': 'sad'})
    } {
        ZoraRiver004.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver004.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver004Talk010_030', 'getAttention': False})
    }

}

void talk020() {
    ZoraRiver004.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver004Talk020_Q1', 'selfTalkAnim': True, 'facial': 'sad', 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        fork {
            ZoraRiver004.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraRiver004.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver004Talk020_Q1_A1_010', 'getAttention': False})
        }

    } else {

        fork {
            ZoraRiver004.PlayAnimationNoWait({'name': 'sad02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraRiver004.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver004Talk020_Q1_A2_010', 'getAttention': False})
        }

    }
    ZoraRiver004.SetDefaultFacialExpression({'expression': 'sad'})
    ZoraRiver004.SetInstanceVariableString({'name': 'idleAnim', 'value': 'sad01'})
}

void talk030() {
    ZoraRiver004.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver004Talk030_010', 'selfTalkAnim': True, 'facial': 'sad', 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        ZoraRiver004.PlayAnimationNoWait({'name': 'sad02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver004.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver004Talk030_030', 'getAttention': False})
    }

}

void talk050() {
    ZoraRiver004.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver004Talk050_010', 'selfTalkAnim': True, 'facial': 'smile', 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        ZoraRiver004.PlayAnimationNoWait({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver004.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver004Talk050_020', 'getAttention': False})
    }

}

void Special_Coast010_020() {
    ZoraRiver004.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'selfTalkAnimName': '', 'message': 'quest/QuestAreaB:Special_Coast050_040', 'facial': '', 'selfTalkAnim': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        ZoraRiver004.Talk({'message': 'quest/QuestAreaB:Special_Coast050_050', 'getAttention': False})
    } {
        ZoraRiver004.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        ZoraRiver004.Talk({'message': 'quest/QuestAreaB:Special_Coast050_060', 'getAttention': False})
    } {
        ZoraRiver004.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void talk040() {
    ZoraRiver004.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver004Talk040_010', 'selfTalkAnim': True, 'facial': 'sad', 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        ZoraRiver004.PlayAnimationNoWait({'name': 'sad02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver004.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver004Talk040_030', 'getAttention': False})
    }

}
