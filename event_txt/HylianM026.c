-------- EventFlow: HylianM026 --------

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult4', 'GetLastResult']
params: None

Actor: HylianM026
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'TalkKeep', 'SetInstanceVariableBool', 'PlayAnimationNoWait', 'SetFacialExpression', 'ResetFacialExpression']
queries: ['GetInstanceVariableBool']
params: None

void talk010() {
    if !HylianM026.GetInstanceVariableBool({'name': 'talkFinish'}) {
        HylianM026.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': 'sad', 'message': 'scenario/HylianGeneralTalk:HylianM026Talk010_010', 'selfTalkAnimName': 'think02', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        HylianM026.SetInstanceVariableBool({'value': True, 'name': 'talkFinish'})
        HylianM026.Talk({'message': 'scenario/HylianGeneralTalk:HylianM026Talk010_Q1', 'getAttention': False})
        Event7:
        switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
          case 0:
            HylianM026.ResetFacialExpression()
            HylianM026.PlayAnimationNoWait({'name': 'yes01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            HylianM026.TalkKeep({'message': 'scenario/HylianGeneralTalk:HylianM026Talk010_Q1_A1_010', 'getAttention': False})
            HylianM026.SetFacialExpression({'expression': 'sad'})
            HylianM026.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
            HylianM026.Talk({'message': 'scenario/HylianGeneralTalk:HylianM026Talk010_Q2', 'getAttention': False})
            if !Dialog.GetLastResult({'resultOnSkip': 1}) {
                Event22:
                HylianM026.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                HylianM026.Talk({'message': 'scenario/HylianGeneralTalk:HylianM026Talk010_Q1_A2_010', 'getAttention': False})
                HylianM026.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } else {
                Event21:
                HylianM026.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                HylianM026.Talk({'message': 'scenario/HylianGeneralTalk:HylianM026Talk010_Q1_A3_010', 'getAttention': False})
            }
          case 1:
            goto Event22
          case 2:
            goto Event21
        }
    } else {
        HylianM026.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianM026Talk010_Q1', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        goto Event7
    }
}

void talk020() {
    HylianM026.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianM026Talk020_010', 'selfTalkAnimName': 'think02', 'facial': 'sad', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk030() {
    HylianM026.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianM026Talk030_010', 'aimToPlayer': False, 'selfTalkAnimName': 'think02', 'facial': 'smile', 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk040() {
    HylianM026.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': False, 'facial': '', 'message': 'scenario/HylianGeneralTalk:HylianM026Talk040_010', 'selfTalkAnimName': '', 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}
