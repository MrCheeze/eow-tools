-------- EventFlow: PatrolDekuSoldier --------

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag']
params: None

Actor: Player
entrypoint: None()
actions: ['HideTimedAbilityEffect']
queries: []
params: None

Actor: PatrolDekuSoldier
entrypoint: None()
actions: ['PlayOneshotSE', 'Talk', 'PlayAnimationNoWait']
queries: []
params: None

void Catch002_RodNotAvailable() {

    call EvResetCommon.AllReset()

    Player.HideTimedAbilityEffect()

    fork {
        PatrolDekuSoldier.Talk({'message': 'scenario/StoryAreaF:SoldierCatchJungle_010', 'getAttention': False})
    } {
        PatrolDekuSoldier.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        PatrolDekuSoldier.PlayOneshotSE({'label': 'VO_DKN_1_3_009_003', 'volume': 1.0, 'pitch': 1.0})
    }


    call AreaStartCommon._InCommon({'fadePreset': 'FadeOutNormalB'})

    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/StoryAreaF:SoldierCatchJungle_First_010'}) {
        GameControl.RequestLevelJump({'level': 'S_Dungeon109', 'locator': 'EV_S109_001_SoldierCatchJungle_First', 'offsetX': 0.0, 'offsetZ': 0.0})
    } else {
        GameControl.RequestLevelJump({'level': 'S_Dungeon109', 'locator': 'EV_S109_001_SoldierCatchJungle', 'offsetX': 0.0, 'offsetZ': 0.0})
    }
}
