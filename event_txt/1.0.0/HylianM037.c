-------- EventFlow: HylianM037 --------

Actor: HylianM037
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog']
queries: []
params: None

Actor: HylianM021
entrypoint: None()
actions: ['Talk', 'AimPlayer', 'PlayAnimationNoWait', 'AimActor', 'SkipAutoTurn']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

void talk010() {
    HylianM037.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianM036Talk010_010', 'aimToPlayer': False, 'selfTalkAnim': False, 'playerTalkAnim': False, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HylianM037"), 'actor2': ActorIdentifier(name="HylianM021"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        HylianM021.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.20000000298023224})
    HylianM021.PlayAnimationNoWait({'name': 'talk09', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianM021.Talk({'message': 'scenario/HylianGeneralTalk:HylianM036Talk010_020', 'getAttention': True})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            Zelda.AimActor({'actor': ActorIdentifier(name="HylianM021"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="HylianM021"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    HylianM021.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianM021.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="HylianM037"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianM021.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianM021.Talk({'message': 'scenario/HylianGeneralTalk:HylianM036Talk010_030', 'getAttention': False})
    HylianM021.SkipAutoTurn()
}
