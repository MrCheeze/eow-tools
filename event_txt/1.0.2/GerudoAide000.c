-------- EventFlow: GerudoAide000 --------

Actor: GerudoAide000
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'LookAtTalker']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['PlayAnimationNoWait', 'ResetAim']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: []
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['SetInterestIkEnabled', 'AimActor']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'SetInterestIkEnabled', 'AimActor', 'MoveToBesideTargetActor']
queries: []
params: None

void talk010() {
    GerudoAide000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkGerudo:GerudoAide000Talk01_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void TalkMiniBoundary() {

    call EvResetCommon.AllReset()

    Zelda.SetInterestIkEnabled({'enable': True})
    Zelda.AimActor({'actor': ActorIdentifier(name="GerudoAide000"), 'offsetY': -0.20000000298023224, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        GerudoAide000.LookAtTalker({'keep': True, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetY': 1.0, 'offsetX': 1.0, 'offsetZ': 1.0, 'actor': ActorIdentifier(name="Zelda"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].SetInterestIkEnabled({'enable': True})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoAide000"), 'offsetY': -0.20000000298023224, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 1.2000000476837158})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="GerudoAide000"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 0.800000011920929})
    Partner.ResetAim()
    Partner.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/GeneralTalkGerudo:GerudoAide000Talk05_020', 'getAttention': False})
    Timer.Wait({'time': 0.699999988079071})
}

void talk040() {
    GerudoAide000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkGerudo:GerudoAide000Talk04_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GerudoAide000.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoAide000Talk04_020', 'getAttention': False})
}

void SandRemoverCave() {
    GerudoAide000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkGerudo:GerudoAide000Talk03_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GerudoAide000.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoAide000Talk03_020', 'getAttention': False})
}

void talk060() {
    GerudoAide000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkGerudo:GerudoAide000Talk060_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}
