-------- EventFlow: Deku021 --------

Actor: Deku021
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SkipAutoTurn']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

void talk010() {
    Deku021.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkDeku:Deku021Talk010_010', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Deku021.Talk({'message': 'scenario/GeneralTalkDeku:Deku021Talk010_020', 'getAttention': False})
}

void talkBoundary() {
    Dialog.Show({'message': 'scenario/StoryAreaF:BoundaryDekuTalk_010'})
    Deku021.SkipAutoTurn()
}
