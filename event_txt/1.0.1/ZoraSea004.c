-------- EventFlow: ZoraSea004 --------

Actor: ZoraSea004
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SetFacialExpression', 'PlayAnimationNoWait', 'ResetFacialExpression', 'PlayAnimation']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult4']
params: None

void talk() {
    ZoraSea004.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea004Talk010_010', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSea004.SetFacialExpression({'expression': 'smile'})
    ZoraSea004.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea004Talk010_020', 'getAttention': False})
}

void talk020() {
    ZoraSea004.SetFacialExpression({'expression': 'sad'})
    ZoraSea004.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea004Talk020_010', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSea004.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSea004.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea004Talk020_020', 'getAttention': False})
}

void talk030() {
    ZoraSea004.SetFacialExpression({'expression': 'sad'})
    ZoraSea004.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea004Talk030_010', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSea004.ResetFacialExpression()
    ZoraSea004.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSea004.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea004Talk030_020', 'getAttention': False})
}

void talk040() {
    ZoraSea004.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkZoraSea:ZoraSea004Talk040_010', 'selfTalkAnim': True, 'playerTalkAnim': False, 'selfTalkAnimName': 'no01,wait01', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSea004.SetFacialExpression({'expression': 'sleep'})
    ZoraSea004.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSea004.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea004Talk040_020', 'getAttention': False})
}

void talk015() {
    ZoraSea004.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea004Talk015_Q1', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Event20:
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        ZoraSea004.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea004Talk015_Q1_A1_010', 'getAttention': False})
        Event33:

        call talk015Q1_Loop()

      case 1:
        ZoraSea004.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea004Talk015_Q1_A2_010', 'getAttention': False})
        goto Event33
      case 2:
        ZoraSea004.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea004Talk015_Q1_A3_010', 'getAttention': False})
    }
}

void talk050() {
    ZoraSea004.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea004Talk050_010', 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSea004.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea004Talk050_020', 'getAttention': False})
}

void Special_Coast010_010() {
    ZoraSea004.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'quest/QuestAreaB:Special_Coast020_070', 'selfTalkAnim': True, 'facial': 'sad', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        ZoraSea004.Talk({'message': 'quest/QuestAreaB:Special_Coast020_080', 'getAttention': False})
    } {
        ZoraSea004.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea004.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        ZoraSea004.Talk({'message': 'quest/QuestAreaB:Special_Coast020_090', 'getAttention': False})
    } {
        ZoraSea004.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea004.SetFacialExpression({'expression': 'smile'})
    }

}

void talk015Q1_Loop() {
    ZoraSea004.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea004Talk015_Q1', 'getAttention': False})
    goto Event20
}
