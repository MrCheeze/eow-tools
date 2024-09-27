-------- EventFlow: HylianM001 --------

Actor: HylianM001
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimationNoWait', 'ResetFacialExpression', 'SetFacialExpression']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
params: None

void talk010Sec() {
    HylianM001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianM001Talk010_Q1', 'selfTalkAnimName': '', 'facial': 'sad', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        HylianM001.SetFacialExpression({'expression': 'surprise'})
        HylianM001.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HylianM001.Talk({'message': 'scenario/HylianGeneralTalk:HylianM001Talk010_Q1_A1_010', 'getAttention': False})

        call _selectLinkTalk()

    } else {
        HylianM001.Talk({'message': 'scenario/HylianGeneralTalk:HylianM001Talk010_Q1_A2_010', 'getAttention': False})
    }
}

void talk020() {
    HylianM001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': 'sad', 'message': 'scenario/HylianGeneralTalk:HylianM001Talk020_Q1', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        call _selectLinkTalk()

    } else {
        HylianM001.Talk({'message': 'scenario/HylianGeneralTalk:HylianM001Talk020_Q1_A2_010', 'getAttention': False})
    }
}

void _selectLinkTalk() {
    HylianM001.ResetFacialExpression()
    HylianM001.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianM001.Talk({'message': 'scenario/HylianGeneralTalk:HylianM001Talk010_Q1_A1_020', 'getAttention': False})
    HylianM001.SetFacialExpression({'expression': 'sad'})
    HylianM001.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianM001.Talk({'message': 'scenario/HylianGeneralTalk:HylianM001Talk010_Q1_A1_030', 'getAttention': False})
    HylianM001.Talk({'message': 'scenario/HylianGeneralTalk:HylianM001Talk010_Q1_A1_040', 'getAttention': False})
}

void talk010() {
    HylianM001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianM001Talk010_010', 'facial': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}
