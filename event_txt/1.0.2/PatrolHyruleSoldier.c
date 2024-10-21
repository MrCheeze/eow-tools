-------- EventFlow: PatrolHyruleSoldier --------

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump']
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

Actor: PatrolHyruleSoldier
entrypoint: None()
actions: ['Talk']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: PatrolHyruleSoldier[solD]
entrypoint: None()
actions: ['PlayAnimation', 'Talk', 'GenericTalkSequenceWithDialog', 'SetInstanceVariableString']
queries: []
params: None

Actor: PatrolHyruleSoldier[solE]
entrypoint: None()
actions: ['Talk', 'PlayAnimation', 'SetInstanceVariableString']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['MoveToCompassPoint']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AbsorbAllPastedActors', 'AimActor']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

void SoldierRumor() {

    call EvResetCommon.AllReset()

    Zelda.AimActor({'actor': ActorIdentifier(name="PatrolHyruleSoldier", sub_name="solD"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="PatrolHyruleSoldier", sub_name="solD"), 'actor2': ActorIdentifier(name="PatrolHyruleSoldier", sub_name="solE"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    PatrolHyruleSoldier[solE].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    PatrolHyruleSoldier[solD].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Event1:
    PatrolHyruleSoldier[solD].Talk({'message': 'scenario/StoryAreaA:SoldierRumor_010', 'getAttention': False})
    PatrolHyruleSoldier[solD].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    PatrolHyruleSoldier[solE].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    PatrolHyruleSoldier[solE].Talk({'message': 'scenario/StoryAreaA:SoldierRumor_020', 'getAttention': False})
    PatrolHyruleSoldier[solE].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    PatrolHyruleSoldier[solD].GenericTalkSequenceWithDialog({'aimFromPlayer': False, 'playerTalkAnim': False, 'aimToPlayer': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'message': 'scenario/StoryAreaA:SoldierRumor_030', 'selfTalkAnimName': 'no,talk', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    PatrolHyruleSoldier[solD].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    PatrolHyruleSoldier[solE].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    PatrolHyruleSoldier[solE].Talk({'message': 'scenario/StoryAreaA:SoldierRumor_040', 'getAttention': False})
    PatrolHyruleSoldier[solE].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    EventFlags.SetFlag({'symbol': 'EvPrologue021', 'value': True})
    PatrolHyruleSoldier[solE].SetInstanceVariableString({'value': 'talk', 'name': '$wait'})
    PatrolHyruleSoldier[solD].SetInstanceVariableString({'value': 'talk', 'name': '$wait'})
}

void CatchWarehouseEntrance() {

    call EvResetCommon.AllReset()

    PatrolHyruleSoldier.Talk({'message': 'scenario/StoryAreaA:SoldierCatch_010', 'getAttention': False})

    call AreaStartCommon._InCommon({'fadePreset': 'FadeOutNormalB'})

    if !EventFlags.CheckFlag({'symbol': 'EvSentPrison'})
    && !EventFlags.CheckFlag({'symbol': 'EvSoldierCatch'}) {
        EventFlags.SetFlag({'symbol': 'EvSoldierCatch', 'value': True})
        GameControl.RequestLevelJump({'level': 'HyruleCastlePrison', 'locator': 'EvSoldierFoundZelda', 'offsetX': 0.0, 'offsetZ': 0.0})
    } else {
        GameControl.RequestLevelJump({'level': 'HyruleCastlePrison', 'locator': 'HyruleCastlePrison_004_001', 'offsetX': 0.0, 'offsetZ': 0.0})
    }
}

void CatchPotArea() {

    call EvResetCommon.AllReset()

    PatrolHyruleSoldier.Talk({'message': 'scenario/StoryAreaA:SoldierCatch_010', 'getAttention': False})

    call AreaStartCommon._InCommon({'fadePreset': 'FadeOutNormalB'})

    if !EventFlags.CheckFlag({'symbol': 'EvSentPrison'})
    && !EventFlags.CheckFlag({'symbol': 'EvSoldierCatch'}) {
        EventFlags.SetFlag({'symbol': 'EvSoldierCatch', 'value': True})
        GameControl.RequestLevelJump({'level': 'HyruleCastlePrison', 'locator': 'EvSoldierFoundZelda', 'offsetX': 0.0, 'offsetZ': 0.0})
    } else {
        GameControl.RequestLevelJump({'level': 'HyruleCastlePrison', 'locator': 'HyruleCastlePrison_004_002', 'offsetX': 0.0, 'offsetZ': 0.0})
    }
}

void walk() {

    call EvResetCommon.AllReset()

    Timer.Wait({'time': 0.5})

    fork {

        call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

    } {
        Player.MoveToCompassPoint({'direction': 3, 'speed': 1, 'distance': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

}

void walk_2() {

    call EvResetCommon.AllReset()

    Timer.Wait({'time': 0.5})

    fork {

        call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

    } {
        Player.MoveToCompassPoint({'direction': 3, 'speed': 1, 'distance': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

}

void SoldierRumor1() {

    call EvResetCommon.AllReset()

    Zelda.AimActor({'actor': ActorIdentifier(name="PatrolHyruleSoldier", sub_name="solD"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="PatrolHyruleSoldier", sub_name="solD"), 'actor2': ActorIdentifier(name="PatrolHyruleSoldier", sub_name="solE"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    PatrolHyruleSoldier[solD].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    PatrolHyruleSoldier[solE].PlayAnimation({'name': 'search', 'layer': 0, 'blendFrame': -1, 'restart': False})
    PatrolHyruleSoldier[solE].Talk({'message': 'scenario/StoryAreaA:SoldierRumor_008', 'getAttention': False})
    PatrolHyruleSoldier[solD].PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    PatrolHyruleSoldier[solD].Talk({'message': 'scenario/StoryAreaA:SoldierRumor_009', 'getAttention': False})
    PatrolHyruleSoldier[solE].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    PatrolHyruleSoldier[solD].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    goto Event1
}

void ZeldaFound() {

    call EvResetCommon.AllReset()

    PatrolHyruleSoldier.Talk({'message': 'scenario/StoryAreaA:SoldierCatch_010', 'getAttention': False})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Zelda.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    GameControl.RequestLevelJump({'level': 'HyruleCastlePrison', 'locator': 'ZeldaFound', 'offsetX': 0.0, 'offsetZ': 0.0})
}
