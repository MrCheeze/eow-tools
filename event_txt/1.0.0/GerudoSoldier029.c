-------- EventFlow: GerudoSoldier029 --------

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJumpInCurrentLevel', 'RequestLevelJump']
queries: []
params: None

Actor: GerudoSoldier029
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'AimPlayer', 'PlayAnimationNoWait', 'Talk']
queries: []
params: None

void talk010() {
    GerudoSoldier029.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier015Talk020_010', 'selfTalkAnimName': '', 'facial': '', 'aimToPlayer': False, 'selfTalkAnim': False, 'lookAtOffsetY': 1.0, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GerudoSoldier029.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier029.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoSoldier029.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier029.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoSoldier015Talk020_020', 'getAttention': False})

    call AreaStartCommon._InCommon({'fadePreset': 'FadeOutNormalB'})

    if !EventFlags.CheckFlag({'symbol': 'GerudoSoldierCatch'}) {
        EventFlags.SetFlag({'value': True, 'symbol': 'GerudoSoldierCatch'})
        GameControl.RequestLevelJump({'locator': 'GerudoSoldierCatch', 'level': 'Field', 'offsetX': 0.0, 'offsetZ': 0.0})
    } else {
        GameControl.RequestLevelJumpInCurrentLevel({'locator': 'S_Dungeon014_003', 'offsetX': 0.0, 'offsetZ': 0.0})
    }
}

void talk020() {
    GerudoSoldier029.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:GerudoSoldier015Talk030_010', 'selfTalkAnimName': '', 'aimToPlayer': False, 'selfTalkAnim': False, 'facial': '', 'lookAtOffsetY': 1.0, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GerudoSoldier029.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier029.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoSoldier029.PlayAnimationNoWait({'name': 'angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier029.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoSoldier015Talk030_020', 'getAttention': False})

    call AreaStartCommon._InCommon({'fadePreset': 'FadeOutNormalB'})

    GameControl.RequestLevelJumpInCurrentLevel({'locator': 'S_Dungeon014_003', 'offsetX': 0.0, 'offsetZ': 0.0})
}
