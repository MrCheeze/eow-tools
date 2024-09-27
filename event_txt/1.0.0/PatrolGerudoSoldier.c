-------- EventFlow: PatrolGerudoSoldier --------

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJumpInCurrentLevel', 'RequestLevelJump']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: Player
entrypoint: None()
actions: ['MoveToCompassPoint']
queries: []
params: None

Actor: PatrolGerudoSoldier
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'PlayAnimation', 'AimPlayer']
queries: []
params: None

void Catch() {

    call EvResetCommon.AllReset()

    PatrolGerudoSoldier.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    PatrolGerudoSoldier.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    PatrolGerudoSoldier.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkGerudo:GerudoSoldierCatch_010', 'selfTalkAnimName': 'angry01', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    call AreaStartCommon._InCommon({'fadePreset': 'FadeOutNormalB'})

    if !EventFlags.CheckFlag({'symbol': 'GerudoSoldierCatch'}) {
        EventFlags.SetFlag({'value': True, 'symbol': 'GerudoSoldierCatch'})
        GameControl.RequestLevelJump({'locator': 'GerudoSoldierCatch', 'level': 'Field', 'offsetX': 0.0, 'offsetZ': 0.0})
    } else {
        GameControl.RequestLevelJumpInCurrentLevel({'locator': 'S_Dungeon014_003', 'offsetX': 0.0, 'offsetZ': 0.0})
    }
}

void walk() {

    call EvResetCommon.AllReset()

    Timer.Wait({'time': 0.5})

    fork {

        call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

    } {
        Player.MoveToCompassPoint({'speed': 1, 'distance': 2.0, 'direction': 2, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

}
