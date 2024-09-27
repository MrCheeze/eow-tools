-------- EventFlow: HyrulePlains --------

Actor: Partner
entrypoint: None()
actions: []
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['SetVisibility']
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

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump']
queries: []
params: None

Actor: EvTecuum[TecuumFly_A]
entrypoint: None()
actions: ['Activate']
queries: []
params: None

Actor: EvTecuum[TecuumFly_B]
entrypoint: None()
actions: ['Activate']
queries: []
params: None

Actor: HylianM009
entrypoint: None()
actions: ['PlayAnimationNoWait', 'PlayAnimation', 'Talk', 'SetInterestIkEnabled', 'AimCompassPoint', 'AimToInitialAngle', 'AimPlayer']
queries: []
params: None

Actor: HylianF016
entrypoint: None()
actions: ['PlayAnimationNoWait', 'Talk', 'SetInterestIkEnabled', 'AimPlayer', 'AimToInitialAngle']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: []
queries: ['CheckProgress']
params: None

Actor: Audio
entrypoint: None()
actions: ['StopAllBGM', 'StopZoneBgm', 'StopZoneBaseAmbience', 'PlayOneshotSystemSE']
queries: []
params: None

Actor: EvMoriblinSpearBoundary[EvMoriblinSpearBoundary_A]
entrypoint: None()
actions: ['Activate']
queries: []
params: None

Actor: EvMoriblinSpearBoundary[EvMoriblinSpearBoundary_B]
entrypoint: None()
actions: ['Activate']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['InvokeTimeline', 'PreloadTimeline']
queries: []
params: None

Actor: EvMoriblinSpearBoundary[EvMoriblinSpearBoundary_C]
entrypoint: None()
actions: ['Activate']
queries: []
params: None

Actor: EvMoriblinSpearBoundary[EvMoriblinSpearBoundary_D]
entrypoint: None()
actions: ['Activate']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

Actor: HyruleSoldier025
entrypoint: None()
actions: ['PlayAnimationNoWait', 'AimPlayer', 'SetInterestIkEnabled', 'PlayAnimation', 'Talk', 'AimToInitialAngle']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'AimPlayer', 'PlayAnimationNoWait', 'SetVisibility']
queries: []
params: None

void Kingreport_HyrulePlains() {
    Audio.PlayOneshotSystemSE({'label': 'SE_EV_FIELD_SAKEME_APPEAR2', 'volume': 1.0, 'pitch': 1.0})
    Audio.StopZoneBaseAmbience()
    Audio.StopZoneBgm()
    Audio.StopAllBGM({'duration': 0.0})
    Zelda.SetVisibility({'visible': False})
    Partner[companion].SetVisibility({'visible': False})

    fork {
        EvTecuum[TecuumFly_A].Activate()
    } {
        EvTecuum[TecuumFly_B].Activate()
    } {
        EvMoriblinSpearBoundary[EvMoriblinSpearBoundary_B].Activate()
    } {
        EvMoriblinSpearBoundary[EvMoriblinSpearBoundary_A].Activate()
    } {
        EvMoriblinSpearBoundary[EvMoriblinSpearBoundary_C].Activate()
    } {
        EvMoriblinSpearBoundary[EvMoriblinSpearBoundary_D].Activate()
    }

    FlowControl.PreloadTimeline({'filename': 'Ev_CrackAppearSouthVillage'})

    fork {
        FlowControl.InvokeTimeline({'filename': 'Ev_CrackAppearSouthVillage', 'rate': 1.0})
    }

    GameControl.RequestLevelJump({'level': 'EV_Goddess', 'locator': 'rd005_MeetKingHyrule_1', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void PeopleWorriedVolcanoes() {

    call EvResetCommon.AllReset()

    HylianM009.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HyruleSoldier025.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        HyruleSoldier025.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="HyruleSoldier025"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'weight2': 3.0, 'weight1': 2.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="HyruleSoldier025"), 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }


    fork {
        HylianM009.SetInterestIkEnabled({'enable': False})
    } {
        HylianF016.SetInterestIkEnabled({'enable': False})
    } {
        HyruleSoldier025.SetInterestIkEnabled({'enable': False})
    }


    fork {
        HyruleSoldier025.Talk({'message': 'scenario/StoryAreaC:PeopleWorriedVolcanoes_005', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})

        fork {
            HylianF016.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            HylianF016.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } {
        Timer.Wait({'time': 0.6000000238418579})
        HylianM009.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HyruleSoldier025.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianM009.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianM009.Talk({'message': 'scenario/StoryAreaC:PeopleWorriedVolcanoes_010', 'getAttention': False})
    HylianM009.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianF016.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianF016.Talk({'message': 'scenario/StoryAreaC:PeopleWorriedVolcanoes_Q1_A1_020', 'getAttention': False})
    }

    HylianF016.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianM009.PlayAnimation({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM009.Talk({'message': 'scenario/StoryAreaC:PeopleWorriedVolcanoes_Q1_A1_030', 'getAttention': False})
    } {
        HylianM009.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    HyruleSoldier025.PlayAnimationNoWait({'name': 'salute_st,salute_talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier025.Talk({'message': 'scenario/StoryAreaC:PeopleWorriedVolcanoes_Q1_A1_025', 'getAttention': False})
    HyruleSoldier025.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    if QuestSystem.CheckProgress({'symbol': 'Volcano:1185195103'}) == 4294967295 {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Partner"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

        fork {
            Partner[companion].Talk({'message': 'scenario/StoryAreaC:PeopleWorriedVolcanoes_Q1_A1_040', 'getAttention': False})
        } {
            Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Player.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 0.5})
            HyruleSoldier025.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

            fork {
                HylianF016.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.20000000298023224})
                HylianM009.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
            } {
                HylianF016.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

            Timer.Wait({'time': 0.5})
            HylianM009.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }
}

void S_Dungeon053_clear() {

    call AreaStartCommon.MapWarpIn()

}
