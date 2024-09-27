-------- EventFlow: S_Dungeon051 --------

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Reset']
queries: []
params: None

Actor: HylianFC000
entrypoint: None()
actions: ['LookAtTalker']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['PlayAnimation', 'AimActor', 'GenericTalkSequenceWithDialog', 'MoveToBesideTargetActor', 'AimPlayer', 'LookAtTalker']
queries: []
params: None

void Special_HyruleCastle075() {

    call EvResetCommon.AllReset()


    fork {
        Player.AimActor({'actor': ActorIdentifier(name="HylianFC000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].MoveToBesideTargetActor({'actor': ActorIdentifier(name="Player"), 'speed': 1, 'offsetX': -1.0, 'offsetY': 1.0, 'offsetZ': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="HylianFC000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        HylianFC000.LookAtTalker({'distanceOffset': -4.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {
        Timer.Wait({'time': 3.0})
    }

    Timer.Wait({'time': 0.5})

    fork {
        Partner[companion].GenericTalkSequenceWithDialog({'selfTalkAnimName': 'talk', 'playerTalkAnim': False, 'message': 'quest/QuestAreaA:Special_HyruleCastle075_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner[companion].PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    }

    EventFlags.SetFlag({'value': True, 'symbol': 'Find_BoundaryHylianFC000'})
    QuestSystem.SetProgress({'symbol': 'Special_HyruleCastle010:3323836330', 'isShowTelopInEvent': False, 'isFrontFade': False})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
}
