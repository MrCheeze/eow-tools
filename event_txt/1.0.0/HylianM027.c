-------- EventFlow: HylianM027 --------

Actor: HylianM027
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'SetFacialExpression', 'KeepAnimationAfterEvent', 'Talk', 'SetInstanceVariableBool', 'SkipAutoTurn']
queries: ['GetInstanceVariableBool']
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE']
queries: []
params: None

void talk010() {
    HylianM027.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'scenario/HylianGeneralTalk:HylianM027Talk010_Q1', 'selfTalkAnimName': 'talk01', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        HylianM027.Talk({'message': 'scenario/HylianGeneralTalk:HylianM027Talk010_Q1_A1_010', 'getAttention': False})
        HylianM027.Talk({'message': 'scenario/HylianGeneralTalk:HylianM027Talk010_Q1_A1_020', 'getAttention': False})
        HylianM027.SkipAutoTurn()
    } else {
        HylianM027.Talk({'message': 'scenario/HylianGeneralTalk:HylianM027Talk010_Q1_A2_010', 'getAttention': False})
        HylianM027.SkipAutoTurn()
    }
}

void talk020() {
    HylianM027.SetFacialExpression({'expression': 'sleep'})
    HylianM027.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'scenario/HylianGeneralTalk:HylianM027Talk020_010', 'selfTalkAnimName': 'think01', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianM027.KeepAnimationAfterEvent()
}

void talk030() {
    HylianM027.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': 'talk01', 'message': 'scenario/HylianGeneralTalk:HylianM027Talk030_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk040() {
    HylianM027.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': 'talk01', 'message': 'scenario/HylianGeneralTalk:HylianM027Talk040_Q1', 'facial': 'sad', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        HylianM027.Talk({'message': 'scenario/HylianGeneralTalk:HylianM027Talk040_Q1_A1_010', 'getAttention': False})
    } else {
        HylianM027.Talk({'message': 'scenario/HylianGeneralTalk:HylianM027Talk040_Q1_A2_010', 'getAttention': False})
    }
}

void talk050() {
    HylianM027.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': 'talk01', 'message': 'scenario/HylianGeneralTalk:HylianM027Talk050_010', 'facial': 'sad', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk060() {
    if !HylianM027.GetInstanceVariableBool({'name': 'HylianM027Talk060'}) {
        HylianM027.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': 'talk01', 'message': 'scenario/HylianGeneralTalk:HylianM027Talk060_010', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        HylianM027.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': 'talk01', 'message': 'scenario/HylianGeneralTalk:HylianM027Talk060_020', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        HylianM027.SetInstanceVariableBool({'name': 'HylianM027Talk060', 'value': True})
    } else {

        fork {
            HylianM027.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': 'talk01', 'message': 'scenario/HylianGeneralTalk:HylianM027Talk060_020', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_HYL_M004_1_003', 'volume': 1.0, 'pitch': 1.0})
        }

    }
}

void talk070() {
    HylianM027.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': 'talk01', 'message': 'scenario/HylianGeneralTalk:HylianM027Talk070_010', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}
