-------- EventFlow: Gerudo008 --------

Actor: Gerudo008
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog']
queries: []
params: None

Actor: GerudoSoldier030
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt3ActorsCenterAsTalker']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: []
queries: []
params: None

void talk010() {
    Gerudo008.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:Gerudo008Talk010_010', 'aimToPlayer': False, 'selfTalkAnimName': '', 'selfTalkAnim': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="GerudoSoldier030"), 'actor2': ActorIdentifier(name="Gerudo008"), 'actor3': ActorIdentifier(name="Zelda"), 'weight1': 2.0, 'weight2': 2.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    GerudoSoldier030.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkGerudo:Gerudo008Talk010_020', 'playerTalkAnim': False, 'cameraLookAt': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GerudoSoldier030.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo008Talk010_030', 'getAttention': False})
    GerudoSoldier030.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo008Talk010_040', 'getAttention': False})
}
