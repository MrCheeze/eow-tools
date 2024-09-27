-------- EventFlow: HylianF026 --------

Actor: HylianF026
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SetFacialExpression', 'PlayAnimationNoWait', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: []
queries: ['CheckMorph']
params: None

void talk010() {
    HylianF026.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianF026Talk010_010', 'facial': 'sad', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianF026.SetFacialExpression({'expression': 'sleep'})
    HylianF026.Talk({'message': 'scenario/HylianGeneralTalk:HylianF026Talk010_020', 'getAttention': False})
}

void talk020() {
    if Zelda.CheckMorph({'morphKind': 0}) {
        HylianF026.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianF026Talk020_010', 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        HylianF026.SetFacialExpression({'expression': 'smile'})
        HylianF026.Talk({'message': 'scenario/HylianGeneralTalk:HylianF026Talk020_020', 'getAttention': False})
    } else {

        call _talkLink()

    }
}

void talk030() {
    if Zelda.CheckMorph({'morphKind': 0}) {
        HylianF026.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianF026Talk030_010', 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else {

        call _talkLink()

    }
}

void _talkLink() {
    HylianF026.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianF026TalkLink_010', 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talkSecretlyClothes() {
    HylianF026.GenericTalkSequenceWithDialog({'facial': 'smile', 'message': 'scenario/HylianGeneralTalk:HylianF026TalkSecretlyClothes_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talkMc002() {
    HylianF026.SetInterestIkEnabled({'enable': False})
    HylianF026.GenericTalkSequenceWithDialog({'facial': 'smile', 'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianF026Talk015_010', 'selfTalkAnimName': 'no01,talk01', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        HylianF026.Talk({'message': 'scenario/HylianGeneralTalk:HylianF026Talk015_020', 'getAttention': False})
    } {
        HylianF026.PlayAnimationNoWait({'blendFrame': -1, 'name': 'think01', 'layer': 0, 'restart': False})
    } {
        HylianF026.SetFacialExpression({'expression': 'sleep'})
    }

}

void talkMc002Clear() {
    HylianF026.SetInterestIkEnabled({'enable': False})
    HylianF026.GenericTalkSequenceWithDialog({'facial': 'smile', 'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianF026Talk017_010', 'selfTalkAnimName': 'think01', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        HylianF026.Talk({'message': 'scenario/HylianGeneralTalk:HylianF026Talk017_020', 'getAttention': False})
    } {
        HylianF026.PlayAnimationNoWait({'blendFrame': -1, 'name': 'yes01', 'layer': 0, 'restart': False})
    } {
        HylianF026.SetFacialExpression({'expression': 'smile'})
    }

}
