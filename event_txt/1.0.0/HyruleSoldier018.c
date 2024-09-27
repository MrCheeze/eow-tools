-------- EventFlow: HyruleSoldier018 --------

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckFlag']
params: None

Actor: HyruleSoldier018
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SetFacialExpression', 'TalkKeep', 'SetInterestIkEnabled', 'PlayAnimationNoWait', 'PlayAnimation']
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

void talk010() {
    switch QuestSystem.CheckProgress({'symbol': 'Midpoint:2478168384'}) {
      case 4294967295:
        if !EventFlags.CheckFlag({'symbol': 'EvAreaA014'}) {
            HyruleSoldier018.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:SoldierRTalk010_010', 'aimToPlayer': False, 'aimFromPlayer': True, 'selfTalkAnim': False, 'playerTalkAnim': False, 'facial': 'sad', 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
            HyruleSoldier018.SetFacialExpression({'expression': 'smile'})
            HyruleSoldier018.Talk({'message': 'scenario/HylianGeneralTalk:SoldierRTalk010_020', 'getAttention': False})
        } else {
            HyruleSoldier018.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:SoldierRTalk020_010', 'aimToPlayer': False, 'aimFromPlayer': True, 'selfTalkAnim': False, 'playerTalkAnim': False, 'facial': 'sad', 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        }
      case [0, 1]:
        HyruleSoldier018.GenericTalkSequenceWithDialog({'facial': '', 'message': 'scenario/HylianGeneralTalk:HylianSoldier018Talk030_010', 'aimToPlayer': False, 'playerTalkAnim': False, 'selfTalkAnim': False, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
}

void talk020() {
    HyruleSoldier018.GenericTalkSequenceWithDialog({'facial': '', 'message': 'scenario/HylianGeneralTalk:HylianSoldier018Talk040_010', 'aimToPlayer': False, 'selfTalkAnim': False, 'playerTalkAnim': False, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Mystery_Forest020_SoldierTalk063() {

    call EvResetCommon.AllReset()


    fork {
        HyruleSoldier018.GenericTalkSequenceWithDialog({'selfTalkAnimName': 'salute_st,salute_lp', 'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk070_Q1', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        HyruleSoldier018.SetInterestIkEnabled({'enable': False})
    }

    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        fork {
            HyruleSoldier018.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk070_Q1_A1_010', 'getAttention': False})
        } {
            HyruleSoldier018.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HyruleSoldier018.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk070_Q1_A1_020', 'getAttention': False})
        } {
            HyruleSoldier018.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HyruleSoldier018.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk070_Q1_A1_030', 'getAttention': False})
        } {
            HyruleSoldier018.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier018.SetFacialExpression({'expression': 'smile'})
        }

    } else {

        fork {
            HyruleSoldier018.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk070_Q1_A2_010', 'getAttention': False})
        } {
            HyruleSoldier018.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
            HyruleSoldier018.PlayAnimationNoWait({'name': 'salute_st,salute_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }
}
