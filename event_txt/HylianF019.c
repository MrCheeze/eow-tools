-------- EventFlow: HylianF019 --------

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
params: None

Actor: HylianF019
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimationNoWait', 'SetFacialExpression']
queries: []
params: None

void talk() {
    HylianF019.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianF019Talk010_Q1', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        HylianF019.PlayAnimationNoWait({'name': 'no01,talk03', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HylianF019.Talk({'message': 'scenario/HylianGeneralTalk:HylianF019Talk010_Q1_A1_010', 'getAttention': False})
        HylianF019.SetFacialExpression({'expression': 'sleep'})
        HylianF019.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HylianF019.Talk({'message': 'scenario/HylianGeneralTalk:HylianF019Talk010_Q1_A1_020', 'getAttention': False})
    } else {
        HylianF019.Talk({'message': 'scenario/HylianGeneralTalk:HylianF019Talk010_Q1_A2_010', 'getAttention': False})
    }
}

void talk030() {
    HylianF019.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianF019Talk030_Q1', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        call _AlreadyMeetGreatFairy()

    } else {
        HylianF019.SetFacialExpression({'expression': 'angry'})
        HylianF019.Talk({'message': 'scenario/HylianGeneralTalk:HylianF019Talk020_Q1_A3_010', 'getAttention': False})
    }
}

void talkExtra() {
    HylianF019.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianF019Talk010Extra_Q1', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        call _AlreadyMeetGreatFairy()

    } else {
        HylianF019.Talk({'message': 'scenario/HylianGeneralTalk:HylianF019Talk010_Q1_A2_010', 'getAttention': False})
    }
}

void talk020() {
    HylianF019.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianF019Talk020_Q1', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        HylianF019.PlayAnimationNoWait({'name': 'no01,talk03', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HylianF019.Talk({'message': 'scenario/HylianGeneralTalk:HylianF019Talk010_Q1_A1_010', 'getAttention': False})
        HylianF019.SetFacialExpression({'expression': 'sleep'})
        HylianF019.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HylianF019.Talk({'message': 'scenario/HylianGeneralTalk:HylianF019Talk010_Q1_A1_020', 'getAttention': False})
        HylianF019.SetFacialExpression({'expression': 'sad'})
        HylianF019.Talk({'message': 'scenario/HylianGeneralTalk:HylianF019Talk020_Q1_A1_010', 'getAttention': False})
    } else {
        HylianF019.SetFacialExpression({'expression': 'angry'})
        HylianF019.Talk({'message': 'scenario/HylianGeneralTalk:HylianF019Talk020_Q1_A3_010', 'getAttention': False})
    }
}

void _AlreadyMeetGreatFairy() {
    HylianF019.SetFacialExpression({'expression': 'surprise'})
    HylianF019.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF019.Talk({'message': 'scenario/HylianGeneralTalk:HylianF019Talk030_Q1_A1_010', 'getAttention': False})
    HylianF019.SetFacialExpression({'expression': 'sad'})
    HylianF019.PlayAnimationNoWait({'name': 'no01,talk03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF019.Talk({'message': 'scenario/HylianGeneralTalk:HylianF019Talk030_Q1_A1_020', 'getAttention': False})
    HylianF019.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    call GeneralSequence.ZeldaTalkMotion()

    HylianF019.SetFacialExpression({'expression': 'sleep'})
    HylianF019.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF019.Talk({'message': 'scenario/HylianGeneralTalk:HylianF019Talk030_Q1_A1_030', 'getAttention': False})
    HylianF019.SetFacialExpression({'expression': 'sad'})
    HylianF019.PlayAnimationNoWait({'name': 'talk03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF019.Talk({'message': 'scenario/HylianGeneralTalk:HylianF019Talk030_Q1_A1_050', 'getAttention': False})
    HylianF019.SetFacialExpression({'expression': 'smile'})
    HylianF019.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF019.Talk({'message': 'scenario/HylianGeneralTalk:HylianF019Talk030_Q1_A1_060', 'getAttention': False})
    HylianF019.SetFacialExpression({'expression': 'sleep'})
    HylianF019.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF019.Talk({'message': 'scenario/HylianGeneralTalk:HylianF019Talk030_Q1_A1_070', 'getAttention': False})
}

void talk040() {
    HylianF019.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianF019Talk030_010', 'selfTalkAnimName': 'think01', 'facial': 'sleep', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}
