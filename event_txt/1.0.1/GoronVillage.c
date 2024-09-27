-------- EventFlow: GoronVillage --------

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelReload']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: GoronChief
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'MoveToCompassPoint', 'Deactivate', 'AimActor', 'AimCompassPoint', 'PlayAnimation', 'PlayAnimationEx', 'MoveToTargetLinkedPoint', 'AimPlayer', 'SetTalkerName', 'SetFacialExpression', 'LookAtTalker', 'ResetFacialExpression', 'SetInterestIkEnabled', 'MoveToTargetActor', 'ResetAim', 'MoveToBesideTargetActor', 'SetInstanceVariableString', 'SkipAutoTurn', 'Destroy']
queries: []
params: None

Actor: Goron000
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'AimActor', 'SetFacialExpression', 'ResetFacialExpression', 'AimPlayer', 'PlayAnimation']
queries: []
params: None

Actor: GoronC000
entrypoint: None()
actions: ['Talk', 'LookAtTalker', 'PlayAnimationEx', 'PlayAnimationNoWait', 'AimCompassPoint', 'SetFacialExpression', 'AimActor', 'PlayAnimation', 'ResetAim', 'ResetFacialExpression', 'AimPlayer', 'SetInterestIkEnabled', 'AimToInitialAngle']
queries: []
params: None

Actor: Goron001
entrypoint: None()
actions: ['PlayAnimationNoWait', 'ResetFacialExpression', 'AimActor', 'Activate', 'SetFacialExpression', 'AimPlayer']
queries: []
params: None

Actor: Goron003
entrypoint: None()
actions: ['Talk', 'PlayAnimationEx', 'PlayAnimationNoWait', 'AimActor', 'SetFacialExpression', 'ResetFacialExpression', 'PlayAnimation', 'SetInterestIkEnabled', 'AimPlayer', 'SkipAutoTurn']
queries: []
params: None

Actor: Goron008
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'AimActor', 'SetFacialExpression', 'ResetFacialExpression', 'AimPlayer', 'AimToLocation', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Goron009
entrypoint: None()
actions: ['Talk', 'AimActor', 'SetFacialExpression', 'PlayAnimationEx', 'AimCompassPoint', 'PlayAnimationNoWait', 'ResetAim', 'AimDegreeAngle', 'AimToInitialAngle', 'SetInterestIkEnabled', 'ResetFacialExpression', 'PlayAnimation']
queries: []
params: None

Actor: Goron002
entrypoint: None()
actions: ['Talk', 'PlayAnimationEx', 'SetFacialExpression', 'AimActor', 'PlayAnimationNoWait', 'PlayAnimation', 'AimDegreeAngle', 'AimCompassPoint', 'SetInterestIkEnabled', 'ResetAim', 'ResetFacialExpression']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['SetInterestIkEnabled', 'AimActor', 'MoveToBesideTargetActor', 'PlayAnimationNoWait']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor', 'SetInterestIkEnabled', 'AimCompassPoint', 'MoveToCompassPoint', 'MoveToTargetLinkedPoint']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: GoronStonePortrait
entrypoint: None()
actions: ['LookAtGimmick', 'SetVisibility', 'Destroy', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'LookAtLocationAsGimmick']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor', 'Talk', 'MoveToBesideTargetActor', 'PlayAnimationNoWait', 'MoveToCompassPoint']
queries: []
params: None

Actor: PortraitBolt
entrypoint: None()
actions: ['Destroy', 'SetVisibility', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: Goron006
entrypoint: None()
actions: ['PlayAnimationNoWait', 'SetFacialExpression', 'AimActor', 'Activate', 'ResetFacialExpression', 'AimPlayer']
queries: []
params: None

Actor: Goron012
entrypoint: None()
actions: ['PlayAnimationNoWait', 'SetFacialExpression', 'AimActor', 'Activate', 'ResetFacialExpression', 'AimPlayer']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'MoveToCompassPoint', 'SetInterestIkEnabled', 'AimToLocation', 'MorphEnd', 'PlayAnimationNoWait']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['StopAllBGM', 'PlayJingle', 'SetBGMVolume', 'Prepare', 'PlayBGMEx', 'PlayZoneBGM']
queries: []
params: None

Actor: AreaStartTag
entrypoint: None()
actions: []
queries: []
params: None

void DepartureGoronChief() {

    call EvResetCommon.AllReset()

    GoronChief.SetFacialExpression({'expression': 'sleep'})
    GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronC000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron003.SetFacialExpression({'expression': 'normal'})
        Goron003.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron008.SetFacialExpression({'expression': 'smile'})
        Goron008.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron000.SetFacialExpression({'expression': 'smile'})
        Goron000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron001.Activate()
        Goron001.SetFacialExpression({'expression': 'smile'})
        Goron001.PlayAnimationNoWait({'name': 'wait31', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron006.Activate()
        Goron006.SetFacialExpression({'expression': 'smile'})
        Goron006.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron012.Activate()
        Goron012.SetFacialExpression({'expression': 'smile'})
        Goron012.PlayAnimationNoWait({'name': 'wait03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.SetTalkerName({'message': 'glossary/Character:Unknown', 'keep': False})
        GoronC000.SetFacialExpression({'expression': 'smile'})
        Goron008.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {

        call GeneralSequence.EvMapWarpIn()

    } {
        Timer.Wait({'time': 1.2999999523162842})
        Goron003.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.800000011920929})
        Goron003.SetFacialExpression({'expression': 'surprise'})
        Goron003.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 2.799999952316284})
        Goron006.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Player.SetInterestIkEnabled({'enable': True})
    Partner[companion].MoveToBesideTargetActor({'actor': ActorIdentifier(name="Player"), 'speed': 1, 'offsetX': -1.0, 'offsetZ': -0.30000001192092896, 'offsetY': 0.800000011920929, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})

    fork {
        Player.AimActor({'actor': ActorIdentifier(name="Goron003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'actor': ActorIdentifier(name="Goron003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'immediateTurn': False})
    }

    GoronChief.LookAtTalker({'distanceOffset': 2.0, 'offsetZ': 2.25, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'keep': False})
    Timer.Wait({'time': 0.5})
    Goron003.SetInterestIkEnabled({'enable': False})
    Goron003.SetFacialExpression({'expression': 'smile'})
    Goron003.PlayAnimation({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.20000000298023224})
    Goron003.AimActor({'offsetX': -1.5, 'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.20000000298023224})
    Goron003.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron003.SetFacialExpression({'expression': 'smile'})
    Goron003.Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_010', 'getAttention': False})

    fork {
        Goron000.AimActor({'actor': ActorIdentifier(name="Goron003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Goron012.AimActor({'actor': ActorIdentifier(name="Goron003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Goron003.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Goron003.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron012"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Goron001.AimActor({'actor': ActorIdentifier(name="Goron003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Goron006.AimActor({'actor': ActorIdentifier(name="Goron003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Goron000.PlayAnimationNoWait({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron000.Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_020', 'getAttention': False})
    } {

        call _pd147_Goron000()

    }


    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Goron003.SetFacialExpression({'expression': 'smile'})
        Goron003.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron008.SetFacialExpression({'expression': 'smile'})
        Goron008.PlayAnimationNoWait({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Goron001.SetFacialExpression({'expression': 'smile'})
        Goron001.PlayAnimationNoWait({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron006.SetFacialExpression({'expression': 'smile'})
        Goron006.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Goron012.SetFacialExpression({'expression': 'smile'})
        Goron012.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronC000.SetFacialExpression({'expression': 'smile'})
        GoronC000.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 3.0})
    GoronChief.SetFacialExpression({'expression': 'sad'})
    GoronChief.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_030', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.800000011920929})
        Goron006.ResetFacialExpression()
        Goron006.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.0})
        Goron003.ResetFacialExpression()
        Goron003.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})

        call _YattagoroStop()

    }

    Goron008.ResetFacialExpression()
    Goron008.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron008.Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_040', 'getAttention': False})
    } {

        call _pd147_Goron008()

    }


    fork {
        Timer.Wait({'time': 0.30000001192092896})
        Goron012.ResetFacialExpression()
        Goron012.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Goron001.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Goron000.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.AimActor({'actor': ActorIdentifier(name="Goron008"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GoronChief.ResetFacialExpression()
    GoronChief.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_050', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Goron008.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {

        call _pd147_GoronChief()

    }

    GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron008.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.20000000298023224})
    Goron008.SetFacialExpression({'expression': 'smile'})
    Goron008.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron008.Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_060', 'getAttention': False})
    } {

        call _pd147_Goron008()

    }

    Goron008.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        GoronChief.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Goron001.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Goron006.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Goron012.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Goron000.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Goron003.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        GoronC000.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GoronChief.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_070', 'getAttention': False})
    GoronChief.PlayAnimation({'name': 'surprised_ed', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.SetFacialExpression({'expression': 'smile'})
    GoronChief.MoveToTargetActor({'speed': 0, 'distance': 2.25, 'actor': ActorIdentifier(name="Player"), 'offsetX': -0.30000001192092896, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetY': 0.0})

    fork {
        GoronChief.AimPlayer({'offsetX': -0.30000001192092896, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GoronChief.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    }

    Timer.Wait({'time': 0.20000000298023224})
    GoronChief.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_080', 'getAttention': False})
    GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Player.SetInterestIkEnabled({'enable': False})

    call GeneralSequence.ZeldaTalkMotion()

    Player.SetInterestIkEnabled({'enable': True})
    GoronChief.SetFacialExpression({'expression': 'surprise'})
    GoronChief.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_090', 'getAttention': False})
    GoronChief.SetFacialExpression({'expression': 'normal'})
    GoronChief.PlayAnimation({'name': 'surprised_ed,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.10000000149011612})
    GoronChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_090_02', 'getAttention': False})
    Timer.Wait({'time': 0.5})
    GoronChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.SetTalkerName({'message': 'glossary/Character:GoronChief', 'keep': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_090_03', 'getAttention': False})
    GoronChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.20000000298023224})
    GoronChief.PlayAnimationNoWait({'name': 'talk,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_100', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_110', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.SetFacialExpression({'expression': 'smile'})
    GoronChief.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_120', 'getAttention': False})
    GoronChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronC000.SetFacialExpression({'expression': 'sad'})
    GoronC000.AimCompassPoint({'direction': 3, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    GoronC000.PlayAnimation({'name': 'lookaround', 'blendFrame': 15, 'layer': 0, 'restart': False})
    Timer.Wait({'time': 1.5})

    fork {
        GoronC000.Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_130', 'getAttention': False})
    } {

        call _pd147_GoronC000()

    }

    Audio.StopAllBGM({'duration': 2.0})
    GoronC000.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    GoronChief.ResetFacialExpression()
    GoronChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GoronChief.AimActor({'actor': ActorIdentifier(name="GoronC000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Zelda.AimActor({'actor': ActorIdentifier(name="GoronC000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GoronC000.Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_140', 'getAttention': False})
    GoronC000.PlayAnimationEx({'time': 0.0, 'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronC000.SetFacialExpression({'expression': 'sad'})
    GoronC000.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GoronC000.PlayAnimationNoWait({'name': 'sad01', 'blendFrame': 15, 'layer': 0, 'restart': False})

    fork {
        Timer.Wait({'time': 0.10000000149011612})
        Goron003.ResetFacialExpression()
        Goron003.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron003.AimActor({'actor': ActorIdentifier(name="GoronC000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Goron000.ResetFacialExpression()
        Goron000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron000.AimActor({'actor': ActorIdentifier(name="GoronC000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Goron008.SetFacialExpression({'expression': 'sad'})
        Goron008.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron008.AimActor({'actor': ActorIdentifier(name="GoronC000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Goron001.ResetFacialExpression()
        Goron001.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron001.AimActor({'actor': ActorIdentifier(name="GoronC000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Goron006.SetFacialExpression({'expression': 'sad'})
        Goron006.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron006.AimActor({'actor': ActorIdentifier(name="GoronC000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Goron012.SetFacialExpression({'expression': 'sad'})
        Goron012.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron012.AimActor({'actor': ActorIdentifier(name="GoronC000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        GoronChief.PlayAnimation({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronC000.Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_150', 'getAttention': False})
    }

    GoronC000.ResetAim()
    GoronChief.LookAtTalker({'offsetZ': 0.5, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'keep': False})
    Zelda.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="GoronChief"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GoronChief.PlayAnimation({'name': 'surprised_ed,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron003.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Goron003.SetFacialExpression({'expression': 'sad'})
    Goron003.PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Audio.Prepare({'label': 'BGM_EV_COMMON2', 'kind': 0, 'volume': 1.0})
    Timer.Wait({'time': 3.0})
    Goron003.SetFacialExpression({'expression': 'surprise'})
    Goron003.PlayAnimationEx({'time': 0.0, 'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron003.Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_160', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        GoronChief.AimActor({'actor': ActorIdentifier(name="Goron003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {

        call _pd147_Goron003()

    } {
        Audio.PlayBGMEx({'label': 'BGM_EV_COMMON2', 'volume': 1.0, 'sec': 1.100000023841858, 'ignoreSkip': False})
    }

    GoronChief.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_170', 'getAttention': False})
    } {

        call _pd147_GoronChief()

    }


    fork {
        Goron001.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Goron006.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Goron012.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Goron000.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Goron000.SetFacialExpression({'expression': 'sad'})
        Goron000.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron000.Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_180', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        GoronChief.AimActor({'actor': ActorIdentifier(name="Goron000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {

        call _pd147_Goron000()

    }


    fork {
        Goron008.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Goron008.SetFacialExpression({'expression': 'sad'})
        Goron008.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron008.Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_190', 'getAttention': False})
        Goron008.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.800000011920929})
        GoronChief.AimActor({'actor': ActorIdentifier(name="Goron008"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Goron000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {

        call _pd147_Goron008()

    }


    fork {
        Goron003.SetFacialExpression({'expression': 'angry'})
        Goron003.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron003.Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_200', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        GoronChief.AimActor({'actor': ActorIdentifier(name="Goron003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {

        call _pd147_Goron003()

    }

    GoronChief.AimCompassPoint({'direction': 0, 'duration': 0.800000011920929, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        Goron000.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Goron012.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Goron006.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Goron003.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron003.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Goron008.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Goron001.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GoronChief.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_210', 'getAttention': False})
    } {

        call _pd147_GoronChief()

    }

    Goron008.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron003.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.MoveToCompassPoint({'direction': 2, 'speed': 0, 'distance': 1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    GoronChief.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_220', 'getAttention': False})
    GoronChief.PlayAnimationNoWait({'name': 'wait_stoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.5})
    Goron000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron000.Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_230', 'getAttention': False})
    } {

        call _pd147_Goron000()

    }

    Goron000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    GoronChief.PlayAnimationNoWait({'name': 'talk_stoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_240', 'getAttention': False})
    } {

        call _pd147_GoronChief()

    }

    GoronChief.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    GoronChief.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_250', 'getAttention': False})
    Player.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GoronChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_270', 'getAttention': False})
    GoronChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.10000000149011612})
    GoronChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_280', 'getAttention': False})

    fork {
        GoronChief.MoveToCompassPoint({'direction': 0, 'speed': 1, 'distance': 7.150000095367432, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.MoveToCompassPoint({'direction': 3, 'distance': 0.75, 'speed': 0, 'withoutTurn': False, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].MoveToCompassPoint({'direction': 3, 'distance': 0.75, 'speed': 0, 'withoutTurn': False, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GoronChief.Deactivate()
    Goron000.SetFacialExpression({'expression': 'surprise'})
    Goron000.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Goron000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {

        fork {
            Goron000.Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_290', 'getAttention': False})
        } {
            Timer.Wait({'time': 0.3499999940395355})
            Player.AimActor({'actor': ActorIdentifier(name="Goron000"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Goron008.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            Goron008.Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_300', 'getAttention': False})
        } {

            call _pd147_Goron008()

        }

        Partner[companion].MoveToBesideTargetActor({'offsetX': 1.0, 'offsetY': 1.0, 'actor': ActorIdentifier(name="Player"), 'offsetZ': -0.30000001192092896, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            Partner[companion].AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Partner", sub_name="companion"), 'actor2': ActorIdentifier(name="Zelda"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        } {

            call GeneralSequence.Look_at_Partner()

        } {
            Goron000.SetFacialExpression({'expression': 'sad'})
            Goron000.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaC:DepartureGoronChief_310', 'getAttention': False})
        QuestSystem.SetProgress({'symbol': 'Volcano:1172601107', 'isShowTelopInEvent': False, 'isFrontFade': False})
        EventVariables.SetVariable({'symbol': 'Volcano:1172601107'})
        EventFlags.SetFlag({'value': True, 'symbol': 'volcano_boundary_close'})
        Audio.StopAllBGM({'duration': 3.0})
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
        GameControl.RequestLevelReload({'offsetX': 0.0, 'offsetZ': 0.0})
        Audio.PlayZoneBGM({'stopbgm': False})
    }

}

void HelpMeGoro() {

    call EvResetCommon.AllResetNowait()


    call AreaStartCommon.WalkIn()

    GoronC000.SetFacialExpression({'expression': 'sad'})
    Goron003.SetFacialExpression({'expression': 'sad'})
    Goron008.SetFacialExpression({'expression': 'sad'})
    Player.MoveToCompassPoint({'direction': 2, 'distance': 3.0, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})

    fork {
        Player.AimActor({'actor': ActorIdentifier(name="Goron008"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Goron008"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GoronC000.PlayAnimationEx({'time': 0.0, 'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor2': ActorIdentifier(name="Zelda"), 'actor1': ActorIdentifier(name="Goron008"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Goron008.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Goron008.Talk({'message': 'scenario/StoryAreaC:HelpMeGoro_010', 'getAttention': False})
    } {
        Goron008.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.20000000298023224})
    Goron008.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron008.AimToLocation({'location': 'GoronVillage_R001_007', 'offsetZ': 2.0, 'offsetX': -2.0, 'withoutTurn': False, 'duration': 0.4000000059604645, 'offsetY': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimToLocation({'location': 'GoronVillage_R001_007', 'offsetZ': 2.0, 'offsetX': -2.0, 'withoutTurn': False, 'duration': 0.4000000059604645, 'offsetY': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.20000000298023224})
    Camera.LookAtLocationAsGimmick({'location': 'GoronVillage_R001_007', 'posOffsetX': -2.0, 'posOffsetZ': 2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'posOffsetY': 0.0})
    Timer.Wait({'time': 1.5})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="GoronC000"), 'actor2': ActorIdentifier(name="Zelda"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 0.20000000298023224})

    fork {
        GoronC000.Talk({'message': 'scenario/StoryAreaC:HelpMeGoro_020', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            Goron003.AimActor({'actor': ActorIdentifier(name="GoronC000"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Goron003.SetFacialExpression({'expression': 'sad'})
        } {
            Goron008.AimActor({'actor': ActorIdentifier(name="GoronC000"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Goron008.SetFacialExpression({'expression': 'sad'})
        } {
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GoronC000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    Timer.Wait({'time': 0.5})
    Goron003.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Goron003.PlayAnimationEx({'time': 0.0, 'name': 'ask', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron003.Talk({'message': 'scenario/StoryAreaC:HelpMeGoro_030', 'getAttention': False})
        Goron003.SkipAutoTurn()
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron003"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    QuestSystem.SetProgress({'symbol': 'Volcano:2252136208', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventVariables.SetVariable({'symbol': 'Volcano:2252136208'})
}

void ComeHereGoro() {

    call EvResetCommon.AllResetNowait()

    Timer.Wait({'time': 0.20000000298023224})

    call AreaStartCommon.WalkIn()

    Goron002.SetInterestIkEnabled({'enable': False})

    fork {

        fork {
            Goron002.SetFacialExpression({'expression': 'sad'})
            GoronChief.PlayAnimationEx({'time': 0.0, 'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Goron002"), 'actor2': ActorIdentifier(name="Goron009"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
            Goron009.SetFacialExpression({'expression': 'surprise'})

            fork {
                Goron009.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                Goron009.Talk({'message': 'scenario/StoryAreaC:ComeHereGoro_010', 'getAttention': False})
            } {
                Goron009.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Goron002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }

        } {
            Player.MorphEnd()
            Player.MoveToCompassPoint({'direction': 2, 'distance': 5.0, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
            Player.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Partner.SetInterestIkEnabled({'enable': True})
            Zelda.SetInterestIkEnabled({'enable': True})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Zelda.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    } {
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            Goron008.SetInterestIkEnabled({'enable': False})
            Goron008.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GoronC000.AimActor({'actor': ActorIdentifier(name="Goron008"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            GoronC000.PlayAnimationNoWait({'name': 'wait03', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }


    fork {
        Goron002.Talk({'message': 'scenario/StoryAreaC:ComeHereGoro_020', 'getAttention': True})
    } {
        Goron002.PlayAnimationNoWait({'name': 'talk01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    Goron009.SetFacialExpression({'expression': 'sad'})
    Goron009.ResetAim()

    fork {
        Goron009.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron009.Talk({'message': 'scenario/StoryAreaC:ComeHereGoro_030', 'getAttention': True})
    } {
        Goron009.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    Goron009.SetInterestIkEnabled({'enable': False})

    fork {
        Goron002.Talk({'message': 'scenario/StoryAreaC:ComeHereGoro_040', 'getAttention': True})
    } {
        Goron002.PlayAnimation({'name': 'no01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    Timer.Wait({'time': 1.0})
    GoronChief.ResetAim()
    GoronChief.SetInterestIkEnabled({'enable': True})

    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:ComeHereGoro_050', 'getAttention': True})
    } {
        GoronChief.PlayAnimationEx({'time': 0.0, 'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.AimActor({'actor': ActorIdentifier(name="Goron009"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.5})
        GoronChief.AimActor({'actor': ActorIdentifier(name="Goron002"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.5})
        GoronChief.PlayAnimationEx({'time': 0.0, 'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.SetInterestIkEnabled({'enable': False})
    } {
        Timer.Wait({'time': 0.5})
        Goron009.SetInterestIkEnabled({'enable': True})

        fork {
            Goron009.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Goron009.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Timer.Wait({'time': 0.5})

        fork {
            Goron002.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Goron002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron002.SetInterestIkEnabled({'enable': True})
        }

    } {
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    Timer.Wait({'time': 0.20000000298023224})
    GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron009.SetFacialExpression({'expression': 'sleep'})
    Goron009.PlayAnimationEx({'time': 0.0, 'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron002.PlayAnimationEx({'time': 0.0, 'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron009.AimDegreeAngle({'angle': 54.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        Goron009.Talk({'message': 'scenario/StoryAreaC:ComeHereGoro_110', 'getAttention': True})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Goron002.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Goron009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        GoronChief.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Goron009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Goron009.PlayAnimation({'name': 'yes01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron009.ResetFacialExpression()
        Goron009.SetInterestIkEnabled({'enable': True})

        fork {
            Goron009.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron009.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    } {
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    } {
        Timer.Wait({'time': 0.5})
        Goron008.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.20000000298023224})
        GoronC000.PlayAnimationNoWait({'name': 'ask', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Goron009.PlayAnimationEx({'time': 0.0, 'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    GoronChief.SetInterestIkEnabled({'enable': False})

    fork {
        GoronChief.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.AimCompassPoint({'withoutTurn': False, 'direction': 0, 'duration': 0.4000000059604645, 'immediateTurn': False})
    }


    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:ComeHereGoro_140', 'getAttention': False})
        GoronChief.Talk({'message': 'scenario/StoryAreaC:ComeHereGoro_150', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            Goron002.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Goron009.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    Timer.Wait({'time': 1.5})

    fork {

        fork {
            Goron002.Talk({'message': 'scenario/StoryAreaC:ComeHereGoro_160', 'getAttention': True})
        } {

            fork {
                Goron002.PlayAnimationEx({'time': 0.0, 'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Goron002.AimDegreeAngle({'angle': -54.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
            } {
                Goron002.SetFacialExpression({'expression': 'surprise'})
            }

            Timer.Wait({'time': 0.5})

            fork {
                Timer.Wait({'time': 0.20000000298023224})
                Goron009.ResetFacialExpression()
            } {
                Goron002.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.20000000298023224})

                fork {
                    GoronChief.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Goron002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                } {
                    GoronChief.PlayAnimationEx({'time': 0.0, 'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                }

            } {
                Timer.Wait({'time': 0.20000000298023224})

                fork {
                    Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                } {
                    Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                }

            }

        }

    } {

        fork {
            Goron008.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GoronC000.SetInterestIkEnabled({'enable': False})
            GoronC000.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        } {
            GoronC000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron008.SetInterestIkEnabled({'enable': True})
            Goron008.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    Goron002.ResetFacialExpression()

    fork {
        Goron002.Talk({'message': 'scenario/StoryAreaC:ComeHereGoro_170', 'getAttention': False})
    } {
        Goron002.PlayAnimationEx({'time': 0.0, 'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {

        fork {
            GoronChief.PlayAnimationEx({'time': 0.0, 'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GoronChief.SetFacialExpression({'expression': 'sleep'})
        }

    }

    Goron002.PlayAnimationEx({'time': 0.0, 'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Goron009.PlayAnimationEx({'time': 0.0, 'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron009.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Goron009.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        Goron009.Talk({'message': 'scenario/StoryAreaC:ComeHereGoro_180', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }


    fork {
        GoronChief.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.ResetFacialExpression()
    }


    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:ComeHereGoro_190', 'getAttention': False})
        GoronChief.PlayAnimation({'name': 'surprised_ed,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.AimCompassPoint({'withoutTurn': False, 'direction': 0, 'duration': 0.4000000059604645, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            Goron009.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Goron002.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Goron009.ResetFacialExpression()
            Goron009.PlayAnimationEx({'time': 0.0, 'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }


    fork {
        GoronChief.MoveToTargetLinkedPoint({'speed': 1, 'index': 0, 'actor': ActorIdentifier(name="AreaStartTag"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        GoronChief.MoveToTargetLinkedPoint({'speed': 1, 'index': 1, 'actor': ActorIdentifier(name="AreaStartTag"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

        fork {
            GoronChief.MoveToTargetLinkedPoint({'speed': 1, 'index': 2, 'actor': ActorIdentifier(name="AreaStartTag"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        } {
            Goron002.SetFacialExpression({'expression': 'sleep'})
            Goron002.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron002.ResetAim()
            Goron002.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        }

    } {
        Timer.Wait({'time': 0.30000001192092896})
        Player.MoveToCompassPoint({'withoutTurn': False, 'direction': 0, 'distance': 0.5, 'speed': 1, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        GoronChief.MoveToTargetLinkedPoint({'speed': 1, 'index': 3, 'actor': ActorIdentifier(name="AreaStartTag"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        GoronChief.MoveToTargetLinkedPoint({'index': 4, 'speed': 1, 'actor': ActorIdentifier(name="AreaStartTag"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Partner.MoveToBesideTargetActor({'withoutTurn': True, 'speed': 0, 'actor': ActorIdentifier(name="Partner"), 'offsetY': 1.5, 'offsetX': 0.0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0})
    }

    GoronChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:ComeHereGoro_195', 'getAttention': False})

    fork {
        GoronChief.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        GoronChief.PlayAnimationNoWait({'name': 'flash,happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 2.0})
    GoronChief.MoveToCompassPoint({'direction': 2, 'speed': 1, 'distance': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    GoronChief.Deactivate()
    Goron002.PlayAnimationEx({'time': 0.0, 'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Goron002"), 'actor2': ActorIdentifier(name="Goron009"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Partner.MoveToBesideTargetActor({'withoutTurn': True, 'speed': 0, 'actor': ActorIdentifier(name="Partner"), 'offsetY': -1.5, 'offsetX': 0.0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0})
    } {
        Partner.PlayAnimationNoWait({'name': 'move_down', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        Goron002.Talk({'message': 'scenario/StoryAreaC:ComeHereGoro_200', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    } {
        GoronChief.ResetFacialExpression()
        Goron002.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.5})
        Goron002.PlayAnimation({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.5})
    QuestSystem.SetProgress({'symbol': 'Volcano:687519485', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void LookForSecretPassage() {

    call EvResetCommon.AllResetNowait()


    call AreaStartCommon.WalkIn()

    GoronChief.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="GoronChief"), 'actor2': ActorIdentifier(name="Zelda"), 'weight2': 2.0, 'weight1': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GoronChief.PlayAnimationNoWait({'name': 'yes,wait', 'restart': False, 'layer': 0, 'blendFrame': -1})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:GoronSecretPassage_010', 'getAttention': False})
    Timer.Wait({'time': 0.20000000298023224})

    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:GoronSecretPassage_020', 'getAttention': False})
    } {
        GoronChief.PlayAnimation({'name': 'yes,wait', 'restart': True, 'layer': 0, 'blendFrame': -1})
        GoronChief.ResetFacialExpression()
    } {
        GoronChief.SetFacialExpression({'expression': 'smile'})
    } {
        Zelda.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        GoronStonePortrait.LookAtGimmick({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {
        GoronChief.MoveToBesideTargetActor({'speed': 0, 'offsetZ': -0.75, 'actor': ActorIdentifier(name="GoronChief"), 'offsetX': 2.25, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        GoronChief.AimActor({'actor': ActorIdentifier(name="GoronStonePortrait"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.MoveToCompassPoint({'speed': 0, 'direction': 2, 'distance': 3.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    Timer.Wait({'time': 0.20000000298023224})

    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:GoronSecretPassage_030', 'getAttention': False})
    } {
        GoronChief.PlayAnimationNoWait({'name': 'no,think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 1.0})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="GoronChief"), 'actor2': ActorIdentifier(name="Zelda"), 'weight2': 2.0, 'weight1': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:GoronSecretPassage_040', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            Zelda.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    } {
        GoronChief.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.PlayAnimation({'name': 'surprised_ed,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.SetInstanceVariableString({'value': 'think01', 'name': 'idleAnim'})
        GoronChief.SkipAutoTurn()
    }

    QuestSystem.SetProgress({'symbol': 'Volcano:833297561', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventVariables.SetVariable({'symbol': 'Volcano:833297561'})
}

void _pd147_GoronChief() {

    fork {
        Timer.Wait({'time': 0.3499999940395355})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void _pd147_Goron003() {

    fork {
        Timer.Wait({'time': 0.3499999940395355})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron003"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Goron003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void _pd147_Goron000() {

    fork {
        Timer.Wait({'time': 0.3499999940395355})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Goron000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void _pd147_Goron008() {

    fork {
        Timer.Wait({'time': 0.3499999940395355})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Goron008"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Goron008"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void _pd147_GoronC000() {

    fork {
        Timer.Wait({'time': 0.3499999940395355})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GoronC000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GoronC000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void _YattagoroStop() {

    fork {
        Timer.Wait({'time': 1.2000000476837158})
        GoronC000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronC000.ResetFacialExpression()
        Event564:
        Timer.Wait({'time': 0.800000011920929})

        fork {
            Timer.Wait({'time': 0.30000001192092896})
            Goron000.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.5})
            Goron001.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.10000000149011612})
            Goron008.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.8999999761581421})
            Goron012.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 1.0})
            GoronC000.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    } {

        fork {
            Timer.Wait({'time': 0.800000011920929})
            Goron003.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Goron003.ResetFacialExpression()
        } {
            Timer.Wait({'time': 0.30000001192092896})
            Goron000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Goron000.ResetFacialExpression()
        } {
            Timer.Wait({'time': 0.5})
            Goron001.PlayAnimationNoWait({'name': 'wait31', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Goron001.ResetFacialExpression()
        } {
            Timer.Wait({'time': 0.10000000149011612})
            Goron008.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Goron008.ResetFacialExpression()
        } {
            Timer.Wait({'time': 1.0})
            Goron006.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Goron006.ResetFacialExpression()
        } {
            Timer.Wait({'time': 1.2000000476837158})
            Goron012.PlayAnimationNoWait({'name': 'wait03', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Goron012.ResetFacialExpression()
        } {
            Timer.Wait({'time': 0.699999988079071})
            GoronChief.SetInterestIkEnabled({'enable': False})
            GoronChief.PlayAnimation({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        goto Event564
    }

}

void GoronSecretPassageOpen() {

    fork {
        PortraitBolt.SetVisibility({'visible': False})
    } {
        PortraitBolt.PlayTailorOtherChannelNoWait({'channel': 'PullOut', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    }


    call EvResetCommon.AllReset()


    fork {

        fork {
            Zelda.AimActor({'actor': ActorIdentifier(name="GoronStonePortrait"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            GoronChief.AimActor({'actor': ActorIdentifier(name="GoronStonePortrait"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    } {
        Timer.Wait({'time': 0.5})
        PortraitBolt.Destroy()
    }

    Player.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    if !EventFlags.CheckFlag({'symbol': 'FrontGoronStonePortrait'}) {
        QuestSystem.SetProgress({'symbol': 'Volcano:3354662517', 'isShowTelopInEvent': False, 'isFrontFade': False})
        EventVariables.SetVariable({'symbol': 'Volcano:3354662517'})
        Audio.SetBGMVolume({'volume': 0.0, 'duration': 1.0})
        GoronStonePortrait.PlayTailorOtherChannelNoWait({'channel': 'ac_BreakSE', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Timer.Wait({'time': 0.8999999761581421})

        fork {
            GoronChief.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner.PlayAnimationNoWait({'name': 'appeal02,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner[companion].AimActor({'actor': ActorIdentifier(name="GoronStonePortrait"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.10000000149011612})
            GoronStonePortrait.PlayTailorOtherChannelNoWait({'channel': 'ac_Break', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            GoronStonePortrait.SetVisibility({'visible': False})
        }

        Event902:
        Timer.Wait({'time': 1.5})
        GoronStonePortrait.Destroy()
        Audio.PlayJingle({'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
        GoronChief.LookAtTalker({'keep': False, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        GoronChief.Talk({'message': 'scenario/StoryAreaC:GoronSecretPassageOpen_010', 'getAttention': False})
        GoronChief.Talk({'message': 'scenario/StoryAreaC:GoronSecretPassageOpen_020', 'getAttention': False})
        GoronChief.PlayAnimation({'name': 'surprised_ed,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            Partner[companion].Talk({'message': 'scenario/StoryAreaC:GoronSecretPassageOpen_030', 'getAttention': False})
        } {
            Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="GoronChief"), 'actor2': ActorIdentifier(name="Zelda"), 'weight2': 2.0, 'weight1': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        }

        GoronChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GoronChief.SetFacialExpression({'expression': 'smile'})
        GoronChief.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            GoronChief.Talk({'message': 'scenario/StoryAreaC:GoronSecretPassageOpen_040', 'getAttention': False})
            GoronChief.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})

            fork {
                Zelda.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Partner[companion].AimActor({'actor': ActorIdentifier(name="GoronChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }

        } {
            Timer.Wait({'time': 0.5})
            Audio.SetBGMVolume({'duration': 2.0, 'volume': 1.0})
        }


        fork {
            GoronChief.Talk({'message': 'scenario/StoryAreaC:GoronSecretPassageOpen_050', 'getAttention': False})
        } {
            GoronChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            Timer.Wait({'time': 0.30000001192092896})
            Fade.StartPreset({'preset': 'FadeOutNormalB'})
        } {
            GoronChief.MoveToBesideTargetActor({'speed': 0, 'offsetZ': -2.0, 'actor': ActorIdentifier(name="GoronChief"), 'offsetX': -2.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        }

        GoronChief.Destroy()
        Timer.Wait({'time': 2.0})
        Fade.StartPreset({'preset': 'FadeInNormal'})
        EventFlags.SetFlag({'symbol': 'EvC_GoronSecretPassageOpen', 'value': True})
    } else {

        fork {
            QuestSystem.SetProgress({'symbol': 'Volcano:3354662517', 'isShowTelopInEvent': False, 'isFrontFade': False})
            EventVariables.SetVariable({'symbol': 'Volcano:3354662517'})
            Audio.SetBGMVolume({'volume': 0.0, 'duration': 1.0})
            GoronStonePortrait.PlayTailorOtherChannelNoWait({'channel': 'ac_BreakSE', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            Timer.Wait({'time': 0.8999999761581421})

            fork {
                GoronChief.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Timer.Wait({'time': 0.10000000149011612})
                GoronStonePortrait.PlayTailorOtherChannelNoWait({'channel': 'ac_Break', 'restart': False, 'index': -1, 'stopOnSkipped': True})
                GoronStonePortrait.SetVisibility({'visible': False})
            }

        } {
            Zelda.MoveToTargetLinkedPoint({'withoutTurn': False, 'speed': 1, 'index': 0, 'timeOut': 5.0, 'actor': ActorIdentifier(name="GoronStonePortrait"), 'tolerance': 0.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
            Zelda.AimActor({'actor': ActorIdentifier(name="GoronStonePortrait"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

            fork {
                Timer.Wait({'time': 0.30000001192092896})
                Partner.PlayAnimationNoWait({'name': 'appeal02,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Partner[companion].AimActor({'actor': ActorIdentifier(name="GoronStonePortrait"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }

        }

        goto Event902
    }
}
