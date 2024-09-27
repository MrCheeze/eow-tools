-------- EventFlow: HyruleSoldier004 --------

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckFlag']
params: None

Actor: QuestSystem
entrypoint: None()
actions: []
queries: ['CheckProgress']
params: None

Actor: HyruleSoldier004
entrypoint: None()
actions: ['Talk', 'GenericTalkSequenceWithDialog', 'TalkKeep', 'PlayAnimationNoWait', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
params: None

void talk010() {
    switch QuestSystem.CheckProgress({'symbol': 'Midpoint:1911838744'}) {
      case 4294967295:
        if !EventFlags.CheckFlag({'symbol': 'EvAreaA014'}) {
            HyruleSoldier004.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': 'no,talk', 'facial': 'sad', 'message': 'scenario/HylianGeneralTalk:SoldierDTalk01_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
            HyruleSoldier004.Talk({'message': 'scenario/HylianGeneralTalk:SoldierDTalk01_020', 'getAttention': False})
        } else {
            HyruleSoldier004.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'facial': 'sad', 'selfTalkAnimName': 'salute_st', 'message': 'scenario/HylianGeneralTalk:SoldierDTalk02_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
            HyruleSoldier004.Talk({'message': 'scenario/HylianGeneralTalk:SoldierDTalk02_020', 'getAttention': False})
        }
      case [0, 1]:
        HyruleSoldier004.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'message': 'scenario/HylianGeneralTalk:HylianSoldier003Talk030_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
}

void talk020() {
    HyruleSoldier004.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': 'salute_st', 'facial': '', 'message': 'scenario/HylianGeneralTalk:HylianSoldier003Talk040_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Mystery_Forest020_SoldierTalk030() {

    call EvResetCommon.AllReset()


    fork {
        HyruleSoldier004.GenericTalkSequenceWithDialog({'selfTalkAnimName': 'salute_st,salute_lp', 'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk030_Q1', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        HyruleSoldier004.SetInterestIkEnabled({'enable': False})
    }

    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        fork {
            HyruleSoldier004.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk030_Q1_A1_010', 'getAttention': False})
        } {
            HyruleSoldier004.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HyruleSoldier004.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk030_Q1_A1_020', 'getAttention': False})
        } {
            HyruleSoldier004.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Event15:
        HyruleSoldier004.PlayAnimationNoWait({'name': 'salute_st,salute_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier004.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk030_Q1_A2_010', 'getAttention': False})
    } else {
        goto Event15
    }
}
