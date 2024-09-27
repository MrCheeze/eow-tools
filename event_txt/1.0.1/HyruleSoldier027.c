-------- EventFlow: HyruleSoldier027 --------

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag']
params: None

Actor: HyruleSoldier027
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
    HyruleSoldier027.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'keepPersonalSpace': True, 'selfTalkAnimName': 'salute_st,salute_talk', 'message': 'scenario/HylianGeneralTalk:HylianSoldier027Talk010_010', 'keepTalk': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    HyruleSoldier027.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier027.TalkKeep({'message': 'scenario/HylianGeneralTalk:HylianSoldier027Talk010_020', 'getAttention': False})
    HyruleSoldier027.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier027.TalkKeep({'message': 'scenario/HylianGeneralTalk:HylianSoldier027Talk010_030', 'getAttention': False})
    HyruleSoldier027.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier027.Talk({'message': 'scenario/HylianGeneralTalk:HylianSoldier027Talk010_040', 'getAttention': False})
}

void Talk020() {
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/HylianGeneralTalk:HylianSoldier027Talk020_010'}) {
        HyruleSoldier027.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'keepPersonalSpace': True, 'selfTalkAnimName': 'surprised_st,surprised_lp', 'facial': 'surprise', 'message': 'scenario/HylianGeneralTalk:HylianSoldier027Talk020_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        HyruleSoldier027.SetFacialExpression({'expression': 'smile'})
        HyruleSoldier027.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier027.TalkKeep({'message': 'scenario/HylianGeneralTalk:HylianSoldier027Talk020_020', 'getAttention': False})
        HyruleSoldier027.SetFacialExpression({'expression': 'normal'})
        HyruleSoldier027.Talk({'message': 'scenario/HylianGeneralTalk:HylianSoldier027Talk020_030', 'getAttention': False})
    } else {
        Audio.PlayOneshotSystemSE({'label': 'VO_HYL_SOL_003_002', 'volume': 1.0, 'pitch': 1.0})
        HyruleSoldier027.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'keepPersonalSpace': True, 'selfTalkAnimName': '', 'facial': '', 'message': 'scenario/HylianGeneralTalk:HylianSoldier027Talk020_030', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
}
