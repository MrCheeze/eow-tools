-------- EventFlow: HyruleSoldier025 --------

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag']
params: None

Actor: HyruleSoldier025
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'TalkKeep', 'PlayAnimationNoWait', 'Talk', 'SetFacialExpression']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE']
queries: []
params: None

void Talk010() {
    HyruleSoldier025.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'keepPersonalSpace': True, 'selfTalkAnimName': 'salute_st,salute_talk', 'message': 'scenario/HylianGeneralTalk:HylianSoldier025Talk010_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Talk020() {
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/HylianGeneralTalk:HylianSoldier025Talk020_010'}) {
        HyruleSoldier025.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'keepPersonalSpace': True, 'selfTalkAnimName': 'surprised_st,surprised_lp', 'facial': 'surprise', 'message': 'scenario/HylianGeneralTalk:HylianSoldier025Talk020_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        HyruleSoldier025.SetFacialExpression({'expression': 'sad'})
        HyruleSoldier025.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier025.TalkKeep({'message': 'scenario/HylianGeneralTalk:HylianSoldier025Talk020_020', 'getAttention': False})
        HyruleSoldier025.SetFacialExpression({'expression': 'normal'})
        HyruleSoldier025.Talk({'message': 'scenario/HylianGeneralTalk:HylianSoldier025Talk020_030', 'getAttention': False})
    } else {
        Audio.PlayOneshotSystemSE({'label': 'VO_HYL_SOL_001_006', 'volume': 1.0, 'pitch': 1.0})
        HyruleSoldier025.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'keepPersonalSpace': True, 'message': 'scenario/HylianGeneralTalk:HylianSoldier025Talk020_030', 'selfTalkAnimName': '', 'facial': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
}
