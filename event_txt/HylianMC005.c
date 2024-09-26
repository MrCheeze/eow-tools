-------- EventFlow: HylianMC005 --------

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
params: None

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag']
params: None

Actor: HylianMC005
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SetFacialExpression', 'PlayAnimationNoWait', 'SetInterestIkEnabled']
queries: []
params: None

void talk() {
    HylianMC005.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianMC005Talk010_010', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk020() {
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/HylianGeneralTalk:HylianMC005Talk020_Q1_010'}) {
        HylianMC005.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianMC005Talk020_Q1_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        if !Dialog.GetLastResult({'resultOnSkip': 1}) {
            HylianMC005.Talk({'message': 'scenario/HylianGeneralTalk:HylianMC005Talk020_Q1_A1_010', 'getAttention': False})
        } else {
            HylianMC005.Talk({'message': 'scenario/HylianGeneralTalk:HylianMC005Talk020_Q1_A2_010', 'getAttention': False})
        }
    } else {
        HylianMC005.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianMC005Talk020_Q1_020', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        if !Dialog.GetLastResult({'resultOnSkip': 1}) {
            HylianMC005.Talk({'message': 'scenario/HylianGeneralTalk:HylianMC005Talk020_Q1_A1_010', 'getAttention': False})
        } else {
            HylianMC005.Talk({'message': 'scenario/HylianGeneralTalk:HylianMC005Talk020_Q1_A2_010', 'getAttention': False})
        }
    }
}

void GetHorse_Forest010_020() {
    HylianMC005.SetInterestIkEnabled({'enable': False})
    HylianMC005.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'aimToPlayer': True, 'selfTalkAnimName': 'sad_st01,sad_lp01', 'message': 'quest/QuestAreaA:GetHorse_Forest030_120', 'facial': 'sleep', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void GetHorse_Forest010_end() {
    HylianMC005.SetInterestIkEnabled({'enable': False})
    HylianMC005.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': '', 'selfTalkAnim': True, 'aimToPlayer': True, 'message': 'scenario/HylianGeneralTalk:HylianMC005Talk030_010', 'selfTalkAnimName': 'yes01,wait05', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        HylianMC005.Talk({'message': 'scenario/HylianGeneralTalk:HylianMC005Talk030_020', 'getAttention': False})
    } {
        HylianMC005.PlayAnimationNoWait({'name': 'happy01,wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC005.SetFacialExpression({'expression': 'smile'})
    }

}

void GetHorse_Forest010_040() {
    HylianMC005.SetInterestIkEnabled({'enable': False})
    HylianMC005.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'aimToPlayer': True, 'message': 'quest/QuestAreaA:GetHorse_Forest040_140', 'facial': 'smile', 'selfTalkAnimName': 'happy01,ask', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        HylianMC005.Talk({'message': 'quest/QuestAreaA:GetHorse_Forest040_150', 'getAttention': False})
    } {
        HylianMC005.PlayAnimationNoWait({'name': 'yes01,talk03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void GetHorse_Forest010_035() {
    HylianMC005.SetInterestIkEnabled({'enable': False})
    HylianMC005.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'aimToPlayer': True, 'selfTalkAnimName': 'sad_st01,sad_lp01', 'facial': 'sleep', 'message': 'quest/QuestAreaA:GetHorse_Forest035_HylianMC005_010', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}
