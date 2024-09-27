-------- EventFlow: HyruleSoldier010 --------

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag']
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult4']
params: None

Actor: HyruleSoldier010
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SetTalkerName', 'PlayAnimation']
queries: []
params: None

void talk010() {
    HyruleSoldier010.SetTalkerName({'message': 'glossary/Character:SoldierJ', 'keep': False})
    if !EventFlags.CheckMessgaeFlag({'message': 'quest/QuestAreaPlains:Mystery_Forest020_290'}) {
        HyruleSoldier010.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'quest/QuestAreaPlains:Mystery_Forest020_615', 'cameraLookAt': True, 'selfTalkAnimName': 'wait', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
          case 0:
            HyruleSoldier010.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': 'talk', 'message': 'quest/QuestAreaPlains:Mystery_Forest020_620', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

            fork {
                HyruleSoldier010.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_625', 'getAttention': False})
            } {
                HyruleSoldier010.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

          case 1:
            if !EventFlags.CheckMessgaeFlag({'message': 'quest/QuestAreaPlains:Mystery_Forest020_630'}) {
                HyruleSoldier010.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaPlains:Mystery_Forest020_630', 'playerTalkAnim': False, 'selfTalkAnimName': 'think', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
                HyruleSoldier010.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_635', 'getAttention': False})
            } else {
                HyruleSoldier010.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'cameraLookAt': True, 'selfTalkAnimName': 'think', 'message': 'quest/QuestAreaPlains:Mystery_Forest020_640', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

                fork {
                    HyruleSoldier010.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_645', 'getAttention': False})
                } {
                    HyruleSoldier010.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
                }

            }
          case 2:
            HyruleSoldier010.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'quest/QuestAreaPlains:Mystery_Forest020_655', 'selfTalkAnimName': 'talk', 'cameraLookAt': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        }
    } else {
        HyruleSoldier010.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'quest/QuestAreaPlains:Mystery_Forest020_660', 'cameraLookAt': True, 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
}

void Special_HyruleCastle010_020() {
    HyruleSoldier010.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': 'think', 'message': 'quest/QuestAreaA:Special_HyruleCastle050_040', 'facial': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        HyruleSoldier010.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle050_050', 'getAttention': False})
    } {
        HyruleSoldier010.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}
