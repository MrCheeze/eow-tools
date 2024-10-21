-------- EventFlow: ZoraSea003 --------

Actor: ZoraSea003
entrypoint: None()
actions: ['Talk', 'GenericTalkSequenceWithDialog', 'LookAtGimmicksLinkedPoint', 'PlayAnimationNoWait', 'KeepAnimationAfterEvent', 'SetInstanceVariableBool']
queries: ['GetInstanceVariableBool']
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE']
queries: []
params: None

void talk() {
    if !ZoraSea003.GetInstanceVariableBool({'name': 'talk010'}) {
        ZoraSea003.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea003Talk010_010', 'selfTalkAnimName': 'talk_swim01', 'facial': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        ZoraSea003.SetInstanceVariableBool({'name': 'talk010', 'value': True})
        ZoraSea003.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea003Talk010_020', 'getAttention': False})
        Event5:
        ZoraSea003.LookAtGimmicksLinkedPoint({'pointIndex': 0, 'duration': 0.10000000149011612, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        ZoraSea003.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea003Talk010_030', 'getAttention': False})
        ZoraSea003.PlayAnimationNoWait({'name': 'wait_swim01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSea003.KeepAnimationAfterEvent()
    } else {

        fork {
            ZoraSea003.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkZoraSea:ZoraSea003Talk010_020', 'selfTalkAnimName': 'talk_swim01', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_ZORA_M002_1_001', 'volume': 1.0, 'pitch': 1.0})
        }

        goto Event5
    }
}

void talk020() {
    ZoraSea003.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea003Talk020_010', 'playerTalkAnim': False, 'selfTalkAnimName': 'talk_swim01', 'aimToPlayer': True, 'facial': 'sad', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSea003.PlayAnimationNoWait({'name': 'wait_swim01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSea003.KeepAnimationAfterEvent()
}

void talk030() {
    ZoraSea003.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea003Talk030_010', 'playerTalkAnim': False, 'selfTalkAnimName': 'talk_swim01', 'aimToPlayer': True, 'facial': 'sad', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSea003.PlayAnimationNoWait({'name': 'wait_swim01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSea003.KeepAnimationAfterEvent()
}

void talk040() {
    ZoraSea003.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea003Talk040_010', 'selfTalkAnimName': 'talk_swim01', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSea003.PlayAnimationNoWait({'name': 'wait_swim01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSea003.KeepAnimationAfterEvent()
}

void talk050() {
    if !ZoraSea003.GetInstanceVariableBool({'name': 'talkFinish'}) {
        ZoraSea003.SetInstanceVariableBool({'name': 'talkFinish', 'value': True})
        ZoraSea003.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea003Talk050_010', 'selfTalkAnimName': 'talk_swim01', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        ZoraSea003.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea003Talk050_020', 'getAttention': False})
        ZoraSea003.PlayAnimationNoWait({'name': 'wait_swim01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSea003.KeepAnimationAfterEvent()
    } else {

        fork {
            ZoraSea003.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea003Talk050_020', 'selfTalkAnimName': 'talk_swim01', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_ZORA_M002_1_002', 'volume': 1.0, 'pitch': 1.0})
        }

        ZoraSea003.PlayAnimationNoWait({'name': 'wait_swim01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSea003.KeepAnimationAfterEvent()
    }
}
