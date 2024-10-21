-------- EventFlow: ZoraRiverC002 --------

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: ZoraRiverC002
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SetFacialExpression', 'TalkKeep', 'AimCompassPoint']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: []
queries: ['CheckProgress']
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
params: None

void talk030() {
    ZoraRiverC002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverC002Talk030_010', 'selfTalkAnimName': '', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk020() {
    ZoraRiverC002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverC002Talk020_010', 'selfTalkAnimName': '', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk() {
    ZoraRiverC002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverC002Talk010_Q1', 'selfTalkAnimName': 'talk01', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        ZoraRiverC002.TalkKeep({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverC002Talk010_Q1_A1_010', 'getAttention': False})
        ZoraRiverC002.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverC002Talk010_Q1_A1_020', 'getAttention': False})
    } else {
        ZoraRiverC002.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverC002Talk010_Q1_A2_010', 'getAttention': False})
    }
}

void GetInfo_River() {
    switch QuestSystem.CheckProgress({'symbol': 'Calamity_Coast:928336285'}) {
      case [4294967295, 0]:
        EventFlags.SetFlag({'symbol': 'EvB_GetInfo_River', 'value': True})
        Event26:
        ZoraRiverC002.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaB:GetInfo_River_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        ZoraRiverC002.AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        ZoraRiverC002.Talk({'message': 'scenario/StoryAreaB:GetInfo_River_020', 'getAttention': False})

        fork {
            ZoraRiverC002.SetFacialExpression({'expression': 'surprise'})
        } {
            ZoraRiverC002.Talk({'message': 'scenario/StoryAreaB:GetInfo_River_030', 'getAttention': False})
        }

      case 1:
        goto Event26
    }
}

void talk015() {
    ZoraRiverC002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverC002Talk015_Q1', 'selfTalkAnimName': 'talk01', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        ZoraRiverC002.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverC002Talk015_Q1_A1_010', 'getAttention': False})
    } else {
        ZoraRiverC002.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverC002Talk015_Q1_A2_010', 'getAttention': False})
    }
}

void talk040() {
    ZoraRiverC002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverC002Talk040_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}
