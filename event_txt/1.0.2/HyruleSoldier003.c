-------- EventFlow: HyruleSoldier003 --------

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag']
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
params: None

Actor: HyruleSoldier003
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'TalkKeep', 'PlayAnimationNoWait', 'SetFacialExpression', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE']
queries: []
params: None

void talk040() {
    HyruleSoldier003.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'selfTalkAnimName': 'salute_st', 'message': 'scenario/HylianGeneralTalk:HylianSoldier002Talk030_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HyruleSoldier003.Talk({'message': 'scenario/HylianGeneralTalk:HylianSoldier002Talk030_020', 'getAttention': False})
}

void talk050() {
    HyruleSoldier003.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'selfTalkAnimName': 'salute_st', 'message': 'scenario/HylianGeneralTalk:HylianSoldier002Talk040_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HyruleSoldier003.Talk({'message': 'scenario/HylianGeneralTalk:HylianSoldier002Talk040_020', 'getAttention': False})
}

void Mystery_Forest020_SoldierTalk020() {

    call EvResetCommon.AllReset()


    fork {
        HyruleSoldier003.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk020_Q1', 'selfTalkAnimName': 'salute_st,salute_lp', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        HyruleSoldier003.SetInterestIkEnabled({'enable': False})
    }

    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        fork {
            HyruleSoldier003.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk020_Q1_A1_010', 'getAttention': False})
        } {
            HyruleSoldier003.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HyruleSoldier003.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk020_Q1_A1_020', 'getAttention': False})
        } {
            HyruleSoldier003.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Event7:
        HyruleSoldier003.PlayAnimationNoWait({'name': 'salute_st,salute_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier003.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk020_Q1_A2_010', 'getAttention': False})
        HyruleSoldier003.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk020_Q1_A2_020', 'getAttention': False})
    } else {
        goto Event7
    }
}

void talk010() {
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/HylianGeneralTalk:SoldierCTalk01_010'}) {
        HyruleSoldier003.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'surprised_st', 'facial': 'surprise', 'message': 'scenario/HylianGeneralTalk:SoldierCTalk01_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        HyruleSoldier003.SetFacialExpression({'expression': 'sleep'})
        HyruleSoldier003.PlayAnimationNoWait({'name': 'salute,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier003.Talk({'message': 'scenario/HylianGeneralTalk:SoldierCTalk01_020', 'getAttention': False})
    } else {

        fork {
            HyruleSoldier003.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:SoldierCTalk01_020', 'cameraLookAt': True, 'facial': 'sleep', 'selfTalkAnimName': 'salute_st', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_HYL_SOL_001', 'volume': 1.0, 'pitch': 1.0})
        }

    }
}

void talk020() {
    HyruleSoldier003.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'no,wait', 'facial': 'sad', 'message': 'scenario/HylianGeneralTalk:SoldierCTalk02_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HyruleSoldier003.SetFacialExpression({'expression': 'angry'})
    HyruleSoldier003.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier003.Talk({'message': 'scenario/HylianGeneralTalk:SoldierCTalk02_020', 'getAttention': False})
}

void talk030() {
    HyruleSoldier003.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianSoldier002Talk030_010', 'facial': 'smile', 'selfTalkAnimName': 'talk', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}
