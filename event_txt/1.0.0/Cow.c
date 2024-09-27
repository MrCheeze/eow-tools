-------- EventFlow: Cow --------

Actor: Cow
entrypoint: None()
actions: ['PlayAnimation', 'GenericTalkSequence']
queries: []
params: None

void talk() {
    Cow.GenericTalkSequence({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'selfTalkAnimName': '', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    Cow.PlayAnimation({'name': 'reaction01', 'layer': 0, 'blendFrame': -1, 'restart': False})
}
