-------- EventFlow: Deku026 --------

Actor: Deku026
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimationNoWait']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag']
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

void talk010() {
    Deku026.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkDeku:Deku026Talk010_010', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk020() {
    Deku026.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkDeku:Deku026Talk020_010', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Deku026.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku026.Talk({'message': 'scenario/GeneralTalkDeku:Deku026Talk020_020', 'getAttention': False})
    Deku026.PlayAnimationNoWait({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku026.Talk({'message': 'scenario/GeneralTalkDeku:Deku026Talk020_030', 'getAttention': False})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/StoryAreaF:SoldierCatchJungle_First_010'}) {
        GameControl.RequestLevelJump({'level': 'S_Dungeon109', 'locator': 'EV_S109_001_SoldierCatchJungle_First', 'offsetX': 0.0, 'offsetZ': 0.0})
    } else {
        GameControl.RequestLevelJump({'level': 'S_Dungeon109', 'locator': 'EV_S109_001_SoldierCatchJungle', 'offsetX': 0.0, 'offsetZ': 0.0})
    }
}

void talk030() {
    Deku026.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkDeku:Deku026Talk030_010', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Deku026.Talk({'message': 'scenario/GeneralTalkDeku:Deku026Talk030_020', 'getAttention': False})
}