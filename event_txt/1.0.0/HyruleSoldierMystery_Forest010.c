-------- EventFlow: HyruleSoldierMystery_Forest010 --------

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
params: None

Actor: HyruleSoldierMystery_Forest010
entrypoint: None()
actions: ['Talk', 'GenericTalkSequenceWithDialog', 'SetInterestIkEnabled', 'PlayAnimationNoWait', 'SetFacialExpression', 'TalkKeep', 'ResetFacialExpression']
queries: []
params: None

void Mystery_Forest020_SoldierTargetTalk010() {

    call EvResetCommon.AllReset()


    fork {
        HyruleSoldierMystery_Forest010.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTargetTalk010_Q1', 'selfTalkAnimName': 'salute_talk', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        HyruleSoldierMystery_Forest010.SetInterestIkEnabled({'enable': False})
    } {
        HyruleSoldierMystery_Forest010.SetFacialExpression({'expression': 'smile'})
    }

    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        fork {
            HyruleSoldierMystery_Forest010.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTargetTalk010_Q1_A1_010', 'getAttention': False})
        } {
            HyruleSoldierMystery_Forest010.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HyruleSoldierMystery_Forest010.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTargetTalk010_Q1_A1_020', 'getAttention': False})
        } {
            HyruleSoldierMystery_Forest010.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } else {

        fork {
            HyruleSoldierMystery_Forest010.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTargetTalk010_Q1_A2_010', 'getAttention': False})
        } {
            HyruleSoldierMystery_Forest010.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldierMystery_Forest010.SetFacialExpression({'expression': 'smile'})
        }

    }
}

void Mystery_Forest020_SoldierTargetTalk020() {

    call EvResetCommon.AllReset()

    HyruleSoldierMystery_Forest010.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HyruleSoldierMystery_Forest010Talk010_010', 'selfTalkAnimName': 'salute,wait', 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        HyruleSoldierMystery_Forest010.TalkKeep({'message': 'scenario/HylianGeneralTalk:HyruleSoldierMystery_Forest010Talk010_020', 'getAttention': False})
    } {
        HyruleSoldierMystery_Forest010.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldierMystery_Forest010.ResetFacialExpression()
    }


    fork {
        HyruleSoldierMystery_Forest010.Talk({'message': 'scenario/HylianGeneralTalk:HyruleSoldierMystery_Forest010Talk010_030', 'getAttention': False})
    } {
        HyruleSoldierMystery_Forest010.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldierMystery_Forest010.SetFacialExpression({'expression': 'smile'})
    }

}
