-------- EventFlow: Dog --------

Actor: Dog
entrypoint: None()
actions: ['GenericTalkSequence']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

void talk() {
    Dog.GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnimName': '', 'resetOverlappedActorsOnMoveDone': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    Timer.Wait({'time': 2.799999952316284})
}
