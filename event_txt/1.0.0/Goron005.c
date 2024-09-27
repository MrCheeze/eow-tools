-------- EventFlow: Goron005 --------

Actor: Goron005
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimation', 'PlayAnimationNoWait', 'SetFacialExpression']
queries: []
params: None

void talk() {
    Goron005.PlayAnimationNoWait({'name': 'talk_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron005.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGoron:Goron005Talk010_010', 'aimFromPlayer': True, 'aimToPlayer': False, 'selfTalkAnim': False, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Goron005.Talk({'message': 'scenario/GeneralTalkGoron:Goron005Talk010_020', 'getAttention': False})
    Goron005.PlayAnimation({'name': 'wait_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void talk020() {
    Goron005.PlayAnimation({'name': 'curl_up_ed', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron005.SetFacialExpression({'expression': 'smile'})
    Goron005.PlayAnimationNoWait({'name': 'satisfied01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron005.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'selfTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/StoryAreaC:CarryRockFirst_040', 'aimToPlayer': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Goron005.SetFacialExpression({'expression': 'sad'})
    Goron005.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron005.Talk({'message': 'scenario/StoryAreaC:CarryRockFirst_050', 'getAttention': False})
    Goron005.PlayAnimation({'name': 'curl_up_st,wait_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void talk030() {
    Goron005.SetFacialExpression({'expression': 'sad'})
    Goron005.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGoron:Goron005Talk030_010', 'selfTalkAnim': False, 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Goron005.Talk({'message': 'scenario/GeneralTalkGoron:Goron005Talk030_020', 'getAttention': False})
}

void talk040() {
    Goron005.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGoron:Goron005Talk040_010', 'selfTalkAnim': False, 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Goron005.Talk({'message': 'scenario/GeneralTalkGoron:Goron005Talk040_020', 'getAttention': False})
}

void talk0() {
    Goron005.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'aimToPlayer': True, 'selfTalkAnim': True, 'message': 'scenario/GeneralTalkGoron:Goron005Talk005_010', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}
