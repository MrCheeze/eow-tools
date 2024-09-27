-------- EventFlow: HyruleSoldier026 --------

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag']
params: None

Actor: HyruleSoldier026
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
    HyruleSoldier026.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianSoldier026Talk010_010', 'keepPersonalSpace': True, 'selfTalkAnimName': 'salute_st,salute_talk', 'keepTalk': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    HyruleSoldier026.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier026.TalkKeep({'message': 'scenario/HylianGeneralTalk:HylianSoldier026Talk010_020', 'getAttention': False})
    HyruleSoldier026.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier026.Talk({'message': 'scenario/HylianGeneralTalk:HylianSoldier026Talk010_030', 'getAttention': False})
}

void Talk020() {
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/HylianGeneralTalk:HylianSoldier026Talk020_010'}) {
        HyruleSoldier026.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'keepPersonalSpace': True, 'message': 'scenario/HylianGeneralTalk:HylianSoldier026Talk020_010', 'selfTalkAnimName': 'surprised_st,surprised_lp', 'facial': 'surprise', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        HyruleSoldier026.SetFacialExpression({'expression': 'smile'})
        HyruleSoldier026.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier026.TalkKeep({'message': 'scenario/HylianGeneralTalk:HylianSoldier026Talk020_020', 'getAttention': False})
        Event15:
        HyruleSoldier026.SetFacialExpression({'expression': 'sleep'})
        HyruleSoldier026.PlayAnimationNoWait({'restart': False, 'name': 'wait', 'layer': 0, 'blendFrame': -1})
        HyruleSoldier026.Talk({'message': 'scenario/HylianGeneralTalk:HylianSoldier026Talk020_030', 'getAttention': False})
    } else {
        Audio.PlayOneshotSystemSE({'label': 'VO_HYL_SOL_001_006', 'volume': 1.0, 'pitch': 1.0})
        HyruleSoldier026.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'keepPersonalSpace': True, 'selfTalkAnimName': '', 'message': 'scenario/HylianGeneralTalk:HylianSoldier026Talk020_020', 'keepTalk': True, 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        goto Event15
    }
}
