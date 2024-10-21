-------- EventFlow: Deku023 --------

Actor: Deku023
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
params: None

void talk010() {
    Deku023.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkDeku:Deku023Talk010_Q1', 'selfTalkAnim': True, 'selfTalkAnimName': 'talk_lod', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        Deku023.Talk({'message': 'scenario/GeneralTalkDeku:Deku023Talk010_Q2', 'getAttention': False})
        if !Dialog.GetLastResult({'resultOnSkip': 1}) {
            Deku023.Talk({'message': 'scenario/GeneralTalkDeku:Deku023Talk010_Q2_A1_010', 'getAttention': False})
        } else {
            Event5:
            Deku023.Talk({'message': 'scenario/GeneralTalkDeku:Deku023Talk010_Q1_A2_010', 'getAttention': False})
        }
    } else {
        goto Event5
    }
}

void talk020() {
    Deku023.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkDeku:Deku023Talk020_010', 'selfTalkAnim': True, 'selfTalkAnimName': 'talk_lod', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Deku023.Talk({'message': 'scenario/GeneralTalkDeku:Deku023Talk020_020', 'getAttention': False})
}

void talk030() {
    Deku023.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkDeku:Deku023Talk030_010', 'selfTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}
