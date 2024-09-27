-------- EventFlow: EV_WorldRepairCastle --------

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump', 'SetActivateAllActor', 'LoadArea', 'ForbidLaunchApplet', 'UnforbidLaunchApplet']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['PreloadTimeline', 'InvokeTimeline', 'SetCanSkip', 'Yield_']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['AimActor', 'EnableAutoMovement', 'WarpToDefaultPosition']
queries: []
params: None

Actor: Environment
entrypoint: None()
actions: ['ChangeWeather']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['StopZoneBgm', 'PlayOneshotSystemSE', 'StopRegionBgm', 'StopZoneBaseAmbience', 'PlayBGM', 'StopAllBGM', 'SetPlayerVolume', 'PlaySpecifyLabelRegionBGM', 'MuteOffBGM']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartParam', 'StartPreset']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimCompassPoint', 'PlayAnimation', 'AimActor']
queries: []
params: None

Actor: EvHolyPillar
entrypoint: None()
actions: ['SetCullMode']
queries: []
params: None

Actor: AreaStartTag
entrypoint: None()
actions: ['Activate']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt3ActorsCenterAsTalker']
queries: []
params: None

Actor: CrackHuge
entrypoint: None()
actions: ['PlayMaterialAnimationNoWait']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'SetInterestIkEnabled', 'AimCompassPoint']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['WarpToActor', 'DisableAutoMovement', 'AimCompassPoint', 'Talk', 'AimPlayer', 'PlayAnimationNoWait', 'AimActor', 'SetInterestIkEnabled']
queries: []
params: None

Actor: MinisterRight
entrypoint: None()
actions: ['Talk', 'PlayAnimation', 'PlayAnimationNoWait', 'Activate', 'AimActor', 'AimCompassPoint', 'SetFacialExpression', 'ResetFacialExpression', 'ResetAim', 'SetInterestIkEnabled']
queries: []
params: None

Actor: MinisterLeft
entrypoint: None()
actions: ['Talk', 'PlayAnimation', 'PlayAnimationNoWait', 'AimPlayer', 'Activate', 'AimActor', 'AimCompassPoint', 'SetFacialExpression', 'ResetFacialExpression', 'SetInterestIkEnabled', 'ResetAim']
queries: []
params: None

Actor: EvMoriblinSpearBoundary[MorA]
entrypoint: None()
actions: ['SetVisibility']
queries: []
params: None

Actor: EvMoriblinSpearBoundary[MorB]
entrypoint: None()
actions: ['SetVisibility']
queries: []
params: None

Actor: EvDarknutBoundary[DnuA]
entrypoint: None()
actions: ['SetVisibility']
queries: []
params: None

Actor: EvDarknutBoundary[DnuB]
entrypoint: None()
actions: ['SetVisibility']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: HyruleSoldier025
entrypoint: None()
actions: ['Talk', 'PlayAnimation', 'AimCompassPoint', 'AimActor', 'PlayAnimationNoWait', 'SetInterestIkEnabled', 'SetFacialExpression', 'ResetFacialExpression']
queries: []
params: None

Actor: HyruleSoldier026
entrypoint: None()
actions: ['Talk', 'PlayAnimation', 'PlayAnimationNoWait', 'AimCompassPoint', 'AimActor', 'SetInterestIkEnabled', 'AimActorLinkedPoint', 'SetFacialExpression', 'ResetFacialExpression', 'ResetAim']
queries: []
params: None

Actor: EvKeeseBoundary[keesa]
entrypoint: None()
actions: ['Deactivate']
queries: []
params: None

Actor: EvKeeseBoundary[keesb]
entrypoint: None()
actions: ['Deactivate']
queries: []
params: None

Actor: EvHyruleSoldier001
entrypoint: None()
actions: ['AimCompassPoint', 'Talk', 'PlayAnimation', 'AimActor', 'Activate', 'PlayAnimationNoWait', 'SetFacialExpression', 'ResetFacialExpression', 'SetInterestIkEnabled']
queries: []
params: None

Actor: EvHyruleSoldier002
entrypoint: None()
actions: ['AimActor', 'AimCompassPoint', 'PlayAnimation', 'Activate', 'SetFacialExpression', 'ResetFacialExpression', 'PlayAnimationNoWait', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Movie
entrypoint: None()
actions: ['Close', 'Play', 'Prepare']
queries: []
params: None

Actor: EvCrackAppearHyruleCastle
entrypoint: None()
actions: ['Activate']
queries: []
params: None

Actor: EvHyruleSoldier004
entrypoint: None()
actions: ['WarpToActor']
queries: []
params: None

Actor: EvHyruleSoldier003
entrypoint: None()
actions: ['WarpToActor']
queries: []
params: None

void Ev_WorldRepairCastle() {
    Fade.StartPreset({'preset': 'CutOutW'})
    Audio.StopZoneBgm()
    FlowControl.SetCanSkip({'enable': True})
    Environment.ChangeWeather({'blendtime': 0.0, 'name': 'Sunny', 'timespan': 5.0})
    Partner[companion].DisableAutoMovement()
    Partner[companion].WarpToActor({'distance': 0.0, 'offsetY': -10.0, 'actor': ActorIdentifier(name="Player"), 'offsetX': 0.0})
    EvHolyPillar.SetCullMode({'enabled': False, 'cullMode': 0})
    AreaStartTag.Activate()
    GameControl.SetActivateAllActor({'is_active': True})
    FlowControl.PreloadTimeline({'filename': 'Ev_WorldRepairCastle'})
    FlowControl.InvokeTimeline({'filename': 'Ev_WorldRepairCastle', 'rate': 1.0})
    FlowControl.Yield_()
    GameControl.RequestLevelJump({'level': 'EV_Goddess', 'locator': 'rd031_HyruleCastle_WorldGlobeActivate', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void MinistersSuspected() {
    Audio.MuteOffBGM({'duration': 0.0})

    call EvResetCommon.AllReset()

    Audio.StopRegionBgm({'fadeSec': 2.0})
    Zelda.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Zelda.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].WarpToActor({'offsetX': 1.0, 'distance': 0.30000001192092896, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 0.5})
    Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    MinisterLeft.Activate()
    MinisterRight.Activate()
    Camera.LookAt3ActorsCenterAsTalker({'weight3': 1.0, 'offsetY': 1.0, 'offsetZ': 0.5, 'actor1': ActorIdentifier(name="MinisterRight"), 'actor2': ActorIdentifier(name="MinisterLeft"), 'actor3': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0})
    MinisterRight.SetInterestIkEnabled({'enable': False})
    EvHyruleSoldier001.Activate()
    EvHyruleSoldier002.Activate()
    HyruleSoldier025.AimActor({'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="MinisterRight"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HyruleSoldier026.AimActor({'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="MinisterRight"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Player.SetInterestIkEnabled({'enable': True})
    Partner[companion].SetInterestIkEnabled({'enable': True})
    EvHyruleSoldier001.SetInterestIkEnabled({'enable': False})
    EvHyruleSoldier002.SetInterestIkEnabled({'enable': False})
    MinisterLeft.SetInterestIkEnabled({'enable': True})
    HyruleSoldier025.SetFacialExpression({'expression': 'angry'})
    EvHyruleSoldier002.SetFacialExpression({'expression': 'angry'})
    HyruleSoldier025.SetInterestIkEnabled({'enable': False})
    HyruleSoldier026.SetInterestIkEnabled({'enable': False})
    GameControl.SetActivateAllActor({'is_active': True})
    GameControl.LoadArea({'syncLoad': True, 'extentsZ': 120.0, 'extentsX': 40.0, 'extentsY': 40.0, 'location': 'CrackAppearHyruleCastle2'})
    Audio.PlayBGM({'label': 'BGM_EV_COMMON2', 'volume': 1.0, 'ignoreSkip': True})
    Fade.StartParam({'mode': 0, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0, 'time': 1.0})
    MinisterRight.SetFacialExpression({'expression': 'surprise'})
    MinisterRight.PlayAnimation({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterRight.PlayAnimationNoWait({'name': 'surprised', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Audio.SetPlayerVolume({'label': 'PLAYER_SE_BASE_AMBIENCE', 'volume': 0.20000000298023224, 'duration': 2.0})
    MinisterRight.Talk({'message': 'scenario/StoryAreaHyruleCastle:MinistersSuspected_010', 'getAttention': False})
    MinisterRight.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {

        fork {
            MinisterRight.ResetFacialExpression()
        } {
            MinisterLeft.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            MinisterLeft.Talk({'message': 'scenario/StoryAreaHyruleCastle:MinistersSuspected_020', 'getAttention': False})
        }

    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MinisterRight.SetInterestIkEnabled({'enable': True})
        Timer.Wait({'time': 0.15000000596046448})
        MinisterRight.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HyruleSoldier025.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier025.Talk({'message': 'scenario/StoryAreaHyruleCastle:MinistersSuspected_030', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier025"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="HyruleSoldier025"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.2999999523162842})
        MinisterLeft.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier025"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        MinisterRight.AimActor({'actor': ActorIdentifier(name="HyruleSoldier025"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HyruleSoldier025.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HyruleSoldier026.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier026.Talk({'message': 'scenario/StoryAreaHyruleCastle:MinistersSuspected_050', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier026"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier026"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        MinisterLeft.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="HyruleSoldier026"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        MinisterRight.AimActor({'actor': ActorIdentifier(name="HyruleSoldier026"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HyruleSoldier026.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterRight.ResetAim()
    MinisterRight.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        MinisterRight.Talk({'message': 'scenario/StoryAreaHyruleCastle:MinistersSuspected_060', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Player.AimCompassPoint({'direction': 2, 'withoutTurn': False, 'duration': 0.4000000059604645, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Partner[companion].AimCompassPoint({'direction': 2, 'withoutTurn': False, 'duration': 0.4000000059604645, 'immediateTurn': False})
    }

    MinisterRight.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier026.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier026.Talk({'message': 'scenario/StoryAreaHyruleCastle:MinistersSuspected_070', 'getAttention': False})
    HyruleSoldier026.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier025.AimCompassPoint({'direction': 0, 'withoutTurn': True, 'duration': 0.4000000059604645, 'immediateTurn': False})
    EvHyruleSoldier002.AimCompassPoint({'direction': 0, 'withoutTurn': True, 'duration': 0.4000000059604645, 'immediateTurn': False})
    MinisterLeft.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.Talk({'message': 'scenario/StoryAreaHyruleCastle:MinistersSuspected_080', 'getAttention': False})
    MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        MinisterRight.AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MinisterLeft.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        MinisterLeft.ResetAim()
        MinisterLeft.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterLeft.Talk({'message': 'scenario/StoryAreaHyruleCastle:MinistersSuspected_110', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        MinisterRight.ResetAim()
        MinisterRight.PlayAnimationNoWait({'name': 'ev_angry_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.SetFacialExpression({'expression': 'angry'})
        MinisterRight.Talk({'message': 'scenario/StoryAreaHyruleCastle:MinistersSuspected_120', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterRight.ResetFacialExpression()
    MinisterRight.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaHyruleCastle:MinistersSuspected_130', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        call GeneralSequence.Look_at_Partner()

    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterRight.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    MinisterRight.ResetAim()

    fork {
        MinisterRight.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.Talk({'message': 'scenario/StoryAreaHyruleCastle:MinistersSuspected_140', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.25})
        MinisterLeft.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    MinisterRight.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.SetInterestIkEnabled({'enable': False})
    MinisterLeft.PlayAnimation({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.6000000238418579})
    MinisterLeft.SetInterestIkEnabled({'enable': True})
    MinisterLeft.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        MinisterLeft.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterLeft.Talk({'message': 'scenario/StoryAreaHyruleCastle:MinistersSuspected_150', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterRight.AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        MinisterRight.PlayAnimationNoWait({'name': 'ev_angry_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.Talk({'message': 'scenario/StoryAreaHyruleCastle:MinistersSuspected_160', 'getAttention': False})
        Audio.StopAllBGM({'duration': 1.5})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Audio.StopZoneBaseAmbience()
    Audio.PlayOneshotSystemSE({'label': 'SE_EV_SAKEME_SIGN', 'volume': 1.0, 'pitch': 1.0})
    Timer.Wait({'time': 2.0})
    HyruleSoldier026.Talk({'message': 'scenario/StoryAreaHyruleCastle:MinistersSuspected_180', 'getAttention': False})
    HyruleSoldier026.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    HyruleSoldier026.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier026.Talk({'message': 'scenario/StoryAreaHyruleCastle:MinistersSuspected_190', 'getAttention': False})

    fork {
        EvHyruleSoldier001.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        HyruleSoldier025.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier025.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        EvHyruleSoldier002.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EvHyruleSoldier002.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Zelda.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        MinisterRight.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        MinisterLeft.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    GameControl.SetActivateAllActor({'is_active': True})

    fork {
        Movie.Prepare({'filename': 'rd026_CrackAppearHyruleCastle'})
    } {
        GameControl.ForbidLaunchApplet()
    }


    fork {
        Movie.Play({'autoClose': False})
    } {
        Timer.Wait({'time': 2.25})
        Audio.PlaySpecifyLabelRegionBGM({'label': 'BGM_EV_HYRULE_CASTLE_UNREST'})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_RD026_CRACK_APPEAR', 'volume': 1.0, 'pitch': 1.0})
    }


    fork {
        Camera.LookAt3ActorsCenterAsTalker({'weight3': 1.0, 'offsetY': 1.0, 'offsetZ': 0.5, 'actor1': ActorIdentifier(name="MinisterRight"), 'actor2': ActorIdentifier(name="MinisterLeft"), 'actor3': ActorIdentifier(name="Player"), 'duration': 0.0, 'chaseRatio': 1.0, 'weight1': 1.0, 'weight2': 1.0, 'distanceOffset': 0.0, 'offsetX': 0.0})
    } {
        Movie.Close()
    } {
        GameControl.UnforbidLaunchApplet()
    }


    fork {
        EvMoriblinSpearBoundary[MorA].SetVisibility({'visible': False})
    } {
        EvMoriblinSpearBoundary[MorB].SetVisibility({'visible': False})
    } {
        EvDarknutBoundary[DnuA].SetVisibility({'visible': False})
    } {
        EvDarknutBoundary[DnuB].SetVisibility({'visible': False})
    }

    HyruleSoldier025.ResetFacialExpression()
    EvHyruleSoldier002.ResetFacialExpression()

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        EvHyruleSoldier001.PlayAnimationNoWait({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        HyruleSoldier025.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.23000000417232513})
        EvHyruleSoldier002.PlayAnimationNoWait({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        EvKeeseBoundary[keesa].Deactivate()
    } {
        EvKeeseBoundary[keesb].Deactivate()
    }

    MinisterRight.ResetAim()
    EvHyruleSoldier001.Talk({'message': 'scenario/StoryAreaHyruleCastle:FindBoundaryEntrance_010', 'getAttention': False})
    EvHyruleSoldier001.Talk({'message': 'scenario/StoryAreaHyruleCastle:FindBoundaryEntrance_020', 'getAttention': False})
    HyruleSoldier026.PlayAnimation({'name': 'search', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier026.Talk({'message': 'scenario/StoryAreaHyruleCastle:FindBoundaryEntrance_040', 'getAttention': False})
    Timer.Wait({'time': 1.5})
    MinisterRight.PlayAnimationNoWait({'name': 'ev_angry_st,ev_angry_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        MinisterRight.Talk({'message': 'scenario/StoryAreaHyruleCastle:FindBoundaryEntrance_050', 'getAttention': False})
        MinisterRight.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})

        fork {
            EvHyruleSoldier001.AimActor({'duration': 0.20000000298023224, 'actor': ActorIdentifier(name="MinisterRight"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            EvHyruleSoldier001.SetFacialExpression({'expression': 'surprise'})
            EvHyruleSoldier001.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            EvHyruleSoldier002.AimActor({'duration': 0.20000000298023224, 'actor': ActorIdentifier(name="MinisterRight"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            EvHyruleSoldier002.SetFacialExpression({'expression': 'surprise'})
            EvHyruleSoldier002.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier025.AimActor({'duration': 0.20000000298023224, 'actor': ActorIdentifier(name="MinisterRight"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            HyruleSoldier025.SetFacialExpression({'expression': 'surprise'})
            HyruleSoldier025.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier026.AimActor({'duration': 0.20000000298023224, 'actor': ActorIdentifier(name="MinisterRight"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            HyruleSoldier026.SetFacialExpression({'expression': 'surprise'})
            HyruleSoldier026.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Player.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            MinisterLeft.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.20000000298023224, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            MinisterLeft.PlayAnimation({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }

    HyruleSoldier025.Talk({'message': 'scenario/StoryAreaHyruleCastle:FindBoundaryEntrance_060', 'getAttention': False})

    fork {
        MinisterRight.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.Talk({'message': 'scenario/StoryAreaHyruleCastle:FindBoundaryEntrance_070', 'getAttention': True})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        EvHyruleSoldier001.ResetFacialExpression()
        EvHyruleSoldier001.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.25})
        HyruleSoldier025.ResetFacialExpression()
        HyruleSoldier025.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        HyruleSoldier026.ResetFacialExpression()
        HyruleSoldier026.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        EvHyruleSoldier002.ResetFacialExpression()
        EvHyruleSoldier002.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterLeft.PlayAnimation({'name': 'surprised_ed01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    MinisterRight.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier026.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier026.SetInterestIkEnabled({'enable': True})
    HyruleSoldier026.SetFacialExpression({'expression': 'sleep'})
    HyruleSoldier026.AimActorLinkedPoint({'duration': 0.3999999761581421, 'withoutTurn': True, 'pointIndex': 1, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.5})
    HyruleSoldier026.ResetFacialExpression()
    HyruleSoldier026.SetInterestIkEnabled({'enable': False})
    HyruleSoldier026.ResetAim()
    HyruleSoldier026.PlayAnimation({'name': 'salute_st,salute_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HyruleSoldier026.PlayAnimationNoWait({'name': 'salute_talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier026.Talk({'message': 'scenario/StoryAreaHyruleCastle:FindBoundaryEntrance_080', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier026"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="HyruleSoldier026"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        MinisterRight.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier026"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.44999998807907104})
        MinisterLeft.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier026"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HyruleSoldier026.AimActor({'duration': 0.3999999761581421, 'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterRight"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HyruleSoldier026.PlayAnimation({'name': 'salute_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        MinisterRight.AimActor({'actor': ActorIdentifier(name="HyruleSoldier026"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        MinisterRight.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.Talk({'message': 'scenario/StoryAreaHyruleCastle:FindBoundaryEntrance_090', 'getAttention': True})
        MinisterRight.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.AimCompassPoint({'direction': 2, 'withoutTurn': False, 'duration': 0.4000000059604645, 'immediateTurn': False})
        MinisterRight.ResetAim()
        MinisterRight.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.Talk({'message': 'scenario/StoryAreaHyruleCastle:FindBoundaryEntrance_100', 'getAttention': True})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterRight.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        EvHyruleSoldier001.Talk({'message': 'scenario/StoryAreaHyruleCastle:FindBoundaryEntrance_110', 'getAttention': False})
    } {
        EvHyruleSoldier001.PlayAnimation({'name': 'salute_st,salute_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EvHyruleSoldier002.PlayAnimation({'name': 'salute_st,salute_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier025.PlayAnimation({'name': 'salute_st,salute_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier026.PlayAnimation({'name': 'salute_st,salute_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_HYL_SOL_001_011', 'volume': 1.0, 'pitch': 1.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_HYL_SOL_008_010', 'volume': 1.0, 'pitch': 1.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_HYL_SOL_001_001', 'volume': 1.0, 'pitch': 1.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_HYL_SOL_008_003', 'volume': 1.0, 'pitch': 1.0})
    }

    MinisterLeft.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        MinisterLeft.PlayAnimation({'name': 'wish_st,wish_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterLeft.SetFacialExpression({'expression': 'sad'})
        MinisterLeft.Talk({'message': 'scenario/StoryAreaHyruleCastle:FindBoundaryEntrance_120', 'getAttention': False})
        MinisterLeft.ResetFacialExpression()
        MinisterLeft.Talk({'message': 'scenario/StoryAreaHyruleCastle:FindBoundaryEntrance_130', 'getAttention': False})
        MinisterLeft.Talk({'message': 'scenario/StoryAreaHyruleCastle:FindBoundaryEntrance_140', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    QuestSystem.SetProgress({'symbol': 'Midpoint:855587140', 'isShowTelopInEvent': False, 'isFrontFade': False})
    Fade.StartParam({'mode': 1, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0, 'time': 1.0})
    Partner.WarpToDefaultPosition({'position': 2, 'avoidWall': False, 'avoidPlayer': False})
    Partner.EnableAutoMovement()
    Timer.Wait({'time': 0.6000000238418579})
    GameControl.RequestLevelJump({'locator': 'MinistersSuspected_after', 'level': 'Field', 'offsetX': 0.0, 'offsetZ': 0.0})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvE_MinistersSuspected_after'})
}

void CrackAppearHyruleCastle() {
    EvCrackAppearHyruleCastle.Activate()
    GameControl.SetActivateAllActor({'is_active': True})
    FlowControl.SetCanSkip({'enable': True})
    EvHyruleSoldier003.WarpToActor({'actor': ActorIdentifier(name="EvHyruleSoldier003"), 'distance': 5.0, 'offsetY': 0.0, 'offsetX': 0.0})
    EvHyruleSoldier004.WarpToActor({'actor': ActorIdentifier(name="EvHyruleSoldier004"), 'distance': 5.0, 'offsetY': 0.0, 'offsetX': 0.0})
    GameControl.LoadArea({'syncLoad': True, 'extentsZ': 120.0, 'extentsX': 40.0, 'extentsY': 40.0, 'location': 'CrackAppearHyruleCastle2'})
    FlowControl.PreloadTimeline({'filename': 'CrackAppearHyruleCastle'})
    Fade.StartPreset({'preset': 'CutIn'})
    CrackHuge.PlayMaterialAnimationNoWait({'name': 'ev_CrackAppearHyruleCastle_c1', 'layer': 0})
    FlowControl.InvokeTimeline({'filename': 'CrackAppearHyruleCastle', 'rate': 1.0})
    GameControl.RequestLevelJump({'level': 'EV_Goddess', 'locator': 'rd026_CrackAppearHyruleCastle', 'offsetX': 0.0, 'offsetZ': 0.0})
}
