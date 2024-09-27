-------- EventFlow: HyruleSoldier017 --------

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
params: None

Actor: HyruleSoldier017
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimationNoWait', 'SetInstanceVariableBool', 'SkipAutoTurn', 'TalkKeep', 'SetInterestIkEnabled', 'PlayAnimation', 'SetInstanceVariableString']
queries: ['GetInstanceVariableBool']
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE']
queries: []
params: None

void talk010() {
    if !HyruleSoldier017.GetInstanceVariableBool({'name': 'HylianSoldier017Talk010'}) {
        HyruleSoldier017.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'surprised_st', 'message': 'scenario/HylianGeneralTalk:HylianSoldier017Talk010_010', 'facial': 'surprise', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        HyruleSoldier017.PlayAnimationNoWait({'name': 'salute_st,salute_talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier017.Talk({'message': 'scenario/HylianGeneralTalk:HylianSoldier017Talk010_020', 'getAttention': False})
        HyruleSoldier017.SetInstanceVariableBool({'name': 'HylianSoldier017Talk010', 'value': True})
        HyruleSoldier017.SkipAutoTurn()
        HyruleSoldier017.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait'})
    } else {

        fork {
            HyruleSoldier017.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianSoldier017Talk010_020', 'selfTalkAnimName': 'salute_st,salute_talk', 'facial': 'surprise', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_HYL_SOL_008', 'volume': 1.0, 'pitch': 1.0})
        }

        HyruleSoldier017.SkipAutoTurn()
        HyruleSoldier017.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait'})
    }
}

void talk020() {
    HyruleSoldier017.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/HylianGeneralTalk:HylianSoldier017Talk020_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk030() {
    HyruleSoldier017.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/HylianGeneralTalk:HylianSoldier017Talk030_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk040() {
    HyruleSoldier017.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/HylianGeneralTalk:HylianSoldier017Talk040_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk025() {
    HyruleSoldier017.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianSoldier017Talk025_010', 'selfTalkAnimName': 'no,talk', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Mystery_Forest020_SoldierTalk060() {

    call EvResetCommon.AllReset()


    fork {
        HyruleSoldier017.GenericTalkSequenceWithDialog({'selfTalkAnimName': 'salute_st,salute_lp', 'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk060_Q1', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        HyruleSoldier017.SetInterestIkEnabled({'enable': False})
    }

    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        fork {
            HyruleSoldier017.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk060_Q1_A1_010', 'getAttention': False})
        } {
            HyruleSoldier017.SetInterestIkEnabled({'enable': False})
            HyruleSoldier017.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HyruleSoldier017.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk060_Q1_A1_020', 'getAttention': False})
        } {
            HyruleSoldier017.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Event24:

        fork {
            HyruleSoldier017.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk060_Q1_A2_010', 'getAttention': False})
        } {
            HyruleSoldier017.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            HyruleSoldier017.PlayAnimationNoWait({'name': 'salute_st,salute_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } else {
        goto Event24
    }
}
