-------- EventFlow: HyruleSoldier024 --------

Actor: HyruleSoldier024
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'GenericTalkSequenceWithDialog', 'SetInstanceVariableBool', 'SetFacialExpression']
queries: ['GetInstanceVariableBool']
params: None

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag']
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE']
queries: []
params: None

void Talk010() {
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/HylianGeneralTalk:HylianSoldier024Talk010_010'}) {
        HyruleSoldier024.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianSoldier024Talk010_010', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        HyruleSoldier024.PlayAnimationNoWait({'blendFrame': -1, 'name': 'salute_st,salute_talk', 'layer': 0, 'restart': False})
        HyruleSoldier024.Talk({'message': 'scenario/HylianGeneralTalk:HylianSoldier024Talk010_020', 'getAttention': False})
    } else {

        fork {
            HyruleSoldier024.GenericTalkSequenceWithDialog({'selfTalkAnimName': 'salute_st,salute_talk', 'message': 'scenario/HylianGeneralTalk:HylianSoldier024Talk010_020', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_HYL_SOL_001', 'volume': 1.0, 'pitch': 1.0})
        }

    }
}

void Talk020() {
    HyruleSoldier024.GenericTalkSequenceWithDialog({'selfTalkAnimName': 'salute_st,salute_talk', 'message': 'scenario/HylianGeneralTalk:HylianSoldier024Talk020_010', 'facial': 'smile', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Talk030() {
    HyruleSoldier024.GenericTalkSequenceWithDialog({'selfTalkAnimName': 'salute_st,salute_talk', 'facial': 'smile', 'message': 'scenario/HylianGeneralTalk:HylianSoldier024Talk030_010', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Talk040() {
    if !HyruleSoldier024.GetInstanceVariableBool({'name': 'talkFinish'}) {
        HyruleSoldier024.GenericTalkSequenceWithDialog({'selfTalkAnimName': 'salute_st,salute_talk', 'message': 'scenario/HylianGeneralTalk:HylianSoldier024Talk040_010', 'facial': 'normal', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        HyruleSoldier024.Talk({'message': 'scenario/HylianGeneralTalk:HylianSoldier024Talk040_020', 'getAttention': False})
        HyruleSoldier024.SetInstanceVariableBool({'value': True, 'name': 'talkFinish'})
        HyruleSoldier024.SetFacialExpression({'expression': 'smile'})
        HyruleSoldier024.Talk({'message': 'scenario/HylianGeneralTalk:HylianSoldier024Talk040_030', 'getAttention': False})
    } else {
        HyruleSoldier024.GenericTalkSequenceWithDialog({'selfTalkAnimName': 'salute_st,salute_talk', 'facial': 'smile', 'message': 'scenario/HylianGeneralTalk:HylianSoldier024Talk040_030', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
}
