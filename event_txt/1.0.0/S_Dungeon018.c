-------- EventFlow: S_Dungeon018 --------

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: GoronChief
entrypoint: None()
actions: ['Talk', 'PlayAnimation', 'PlayAnimationNoWait', 'MoveToCompassPoint', 'Activate', 'AimPlayer', 'MoveToTargetLinkedPoint', 'AimCompassPoint', 'WarpToActorLinkedPoint', 'AimActor', 'LookAtTalker', 'SetShapeVisibility', 'ResetAim', 'SetInterestIkEnabled', 'SetFacialExpression', 'SetCullMode', 'SetInstanceVariableString', 'ResetFacialExpression']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['ResetAim']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor', 'MoveToTargetLinkedPoint', 'MoveToBesideTargetActor', 'ResetAim']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: EvSecretPassageBlockRock
entrypoint: None()
actions: ['LookAtGimmick', 'SetShapeVisibility', 'Destroy', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'Quake', 'LookAtLocationAsGimmick']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor', 'Talk', 'PlayAnimation', 'MoveToTargetLinkedPoint', 'PlayAnimationNoWait', 'AimPlayer']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: []
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

Actor: Audio
entrypoint: None()
actions: ['EnablePlaySeFromTailor', 'StopAllBGM', 'Prepare', 'PlayBGM', 'PlayZoneBGM', 'SetTimeToRegionBgmPlay']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['SetInterestIkEnabled', 'AimActor']
queries: []
params: None

void GoronChiefFistBump() {

    call EvResetCommon.AllReset()

    GoronChief.SetCullMode({'cullMode': 0, 'enabled': True})
    GoronChief.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'index': 2, 'offsetY': 0.0})
    GoronChief.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    GoronChief.Activate()
    Audio.EnablePlaySeFromTailor()
    GoronChief.Talk({'message': 'scenario/StoryAreaC:GoronChiefFistBump_010', 'getAttention': False})
    Zelda.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GoronChief.MoveToCompassPoint({'speed': 1, 'direction': 2, 'distance': 5.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Camera.LookAt2ActorsCenterAsTalker({'weight1': 2.0, 'distanceOffset': 0.0, 'actor1': ActorIdentifier(name="GoronChief"), 'actor2': ActorIdentifier(name="Zelda"), 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    GoronChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:GoronChiefFistBump_020', 'getAttention': False})
    EvSecretPassageBlockRock.LookAtGimmick({'distanceOffset': -3.0, 'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 1.0})
    GoronChief.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:GoronChiefFistBump_040', 'getAttention': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="GoronChief"), 'distanceOffset': 0.0, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    GoronChief.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:GoronChiefFistBump_060', 'getAttention': False})
    GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GoronChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:GoronChiefFistBump_070', 'getAttention': False})
    Audio.StopAllBGM({'duration': 3.0})
    GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.SetInterestIkEnabled({'enable': True})
    Audio.Prepare({'label': 'BGM_EV_COMMON5', 'kind': 0, 'volume': 1.0})
    GoronChief.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Zelda.MoveToTargetLinkedPoint({'speed': 1, 'index': 1, 'actor': ActorIdentifier(name="Area"), 'offsetX': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Zelda.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].MoveToTargetLinkedPoint({'speed': 1, 'index': 1, 'offsetY': 1.0, 'offsetZ': -1.5, 'actor': ActorIdentifier(name="Area"), 'offsetX': 0.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GoronChief.ResetAim()
    GoronChief.LookAtTalker({'keep': True, 'offsetZ': -2.0, 'distanceOffset': 0.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0})
    GoronChief.MoveToTargetLinkedPoint({'speed': 1, 'index': 0, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    GoronChief.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    GoronChief.SetInterestIkEnabled({'enable': False})
    GoronChief.PlayAnimationNoWait({'name': 'think03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:GoronChiefFistBump_090', 'getAttention': False})
    GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    GoronChief.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.PlayAnimationNoWait({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:GoronChiefFistBump_100', 'getAttention': False})

    fork {
        GoronChief.PlayAnimation({'name': 'straightfistpunch', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.675000011920929})

        fork {
            EvSecretPassageBlockRock.SetShapeVisibility({'visible': False, 'shapeName': 'before__MI_EvSecretPassageBlockRock_00'})
        } {
            EvSecretPassageBlockRock.SetShapeVisibility({'visible': False, 'shapeName': 'before__MI_EvSecretPassageBlockRock_02'})
        } {
            EvSecretPassageBlockRock.SetShapeVisibility({'visible': True, 'shapeName': 'after__MI_EvSecretPassageBlockRock_01'})
        }

    } {
        Timer.Wait({'time': 0.675000011920929})
        Camera.Quake({'initPower': 0, 'duration': 0.5, 'targetPower': 1})
    } {

        call pd165_Rock()

    }


    fork {
        Camera.Quake({'duration': 0.5, 'initPower': 1, 'targetPower': 0})
    } {
        Timer.Wait({'time': 1.5})
    }

    GoronChief.PlayAnimationNoWait({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:GoronChiefFistBump_110', 'getAttention': False})
    } {

        call pd165_GoronChief()

    }

    GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    GoronChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="GoronChief"), 'actor2': ActorIdentifier(name="Zelda"), 'offsetZ': -0.30000001192092896, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0})
    Timer.Wait({'time': 0.5})
    GoronChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:GoronChiefFistBump_120', 'getAttention': False})
    GoronChief.SetFacialExpression({'expression': 'sleep'})
    GoronChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.SetInterestIkEnabled({'enable': True})
    GoronChief.AimActor({'withoutTurn': True, 'offsetY': -1.0, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:GoronChiefFistBump_130', 'getAttention': False})
    GoronChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GoronChief.SetInterestIkEnabled({'enable': False})
    GoronChief.SetFacialExpression({'expression': 'normal'})
    GoronChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Audio.PlayBGM({'label': 'BGM_EV_COMMON5', 'ignoreSkip': False, 'volume': 1.0})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:GoronChiefFistBump_140', 'getAttention': False})
    GoronChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.SetFacialExpression({'expression': 'smile'})
    GoronChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:GoronChiefFistBump_160', 'getAttention': False})
    GoronChief.LookAtTalker({'keep': False, 'distanceOffset': 0.0, 'offsetZ': -2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0})
    GoronChief.ResetFacialExpression()
    GoronChief.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        GoronChief.PlayAnimation({'name': 'set_stoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.PlayAnimation({'name': 'wait_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.0})
        EvSecretPassageBlockRock.SetShapeVisibility({'visible': True, 'shapeName': 'after__MI_parts'})
        GoronChief.SetShapeVisibility({'shapeName': 'stoneslab_low__MI_parts', 'visible': False})
    }

    GoronChief.PlayAnimationNoWait({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:GoronChiefFistBump_170', 'getAttention': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:GoronChiefFistBump_180', 'getAttention': False})

    fork {
        GoronChief.PlayAnimation({'name': 'straightfistpunch', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.PlayAnimation({'name': 'wait_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.7149999737739563})

        fork {
            EvSecretPassageBlockRock.SetShapeVisibility({'visible': False, 'shapeName': 'after__MI_EvSecretPassageBlockRock_01'})
        } {
            EvSecretPassageBlockRock.SetShapeVisibility({'visible': False, 'shapeName': 'after__MI_EvSecretPassageBlockRock_02'})
        } {
            EvSecretPassageBlockRock.SetShapeVisibility({'visible': False, 'shapeName': 'after__MI_parts'})
        } {
            EvSecretPassageBlockRock.SetShapeVisibility({'visible': False, 'shapeName': 'during__MI_EvSecretPassageBlockRock_01'})
        } {
            EvSecretPassageBlockRock.SetShapeVisibility({'visible': False, 'shapeName': 'during__MI_EvSecretPassageBlockRock_02'})
        }

    } {
        Timer.Wait({'time': 0.5649999976158142})
        EvSecretPassageBlockRock.PlayTailorOtherChannelNoWait({'channel': 'ev_RockBreak', 'index': 0, 'stopOnSkipped': True, 'restart': False})
    } {
        Timer.Wait({'time': 0.5649999976158142})
        Camera.Quake({'initPower': 0, 'duration': 0.5, 'targetPower': 2})
    } {
        Timer.Wait({'time': 0.7649999856948853})
        Partner[companion].PlayAnimationNoWait({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {

        call pd165_Rock()

    }


    fork {
        Timer.Wait({'time': 1.0})
    } {
        Camera.Quake({'initPower': 2, 'targetPower': 0, 'duration': 0.5})
    }

    EvSecretPassageBlockRock.Destroy()
    Timer.Wait({'time': 1.0})

    fork {
        GoronChief.LookAtTalker({'keep': False, 'distanceOffset': 0.0, 'offsetZ': 0.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Zelda.ResetAim()
    } {
        Partner.ResetAim()
    }

    Timer.Wait({'time': 0.5})
    GoronChief.SetFacialExpression({'expression': 'smile'})
    GoronChief.PlayAnimationNoWait({'name': 'wait_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    GoronChief.PlayAnimationNoWait({'name': 'happy_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:GoronChiefFistBump_190', 'getAttention': False})
    } {

        call pd165_GoronChief()

    }

    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="GoronChief"), 'offsetZ': -0.30000001192092896, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0})
    Timer.Wait({'time': 0.5})
    Partner[companion].PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaC:GoronChiefFistBump_200', 'getAttention': False})
    GoronChief.SetFacialExpression({'expression': 'normal'})
    GoronChief.PlayAnimation({'name': 'wait_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaC:GoronChiefFistBump_210', 'getAttention': False})
    Timer.Wait({'time': 1.0})
    GoronChief.SetFacialExpression({'expression': 'sleep'})
    GoronChief.PlayAnimationNoWait({'name': 'yes_nostoneslab,wait_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:GoronChiefFistBump_220', 'getAttention': False})
    Timer.Wait({'time': 1.0})
    GoronChief.SetFacialExpression({'expression': 'normal'})
    GoronChief.PlayAnimationNoWait({'name': 'talk_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:GoronChiefFistBump_230', 'getAttention': False})
    GoronChief.PlayAnimation({'name': 'wait_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.PlayAnimation({'name': 'yes_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.PlayAnimationNoWait({'name': 'wait_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:GoronChiefFistBump_240', 'getAttention': False})
    GoronChief.MoveToCompassPoint({'direction': 1, 'speed': 0, 'distance': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    GoronChief.PlayAnimation({'name': 'wait_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.20000000298023224})
    GoronChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GoronChief.SetFacialExpression({'expression': 'smile'})
    GoronChief.PlayAnimationNoWait({'name': 'talk_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:GoronChiefFistBump_250', 'getAttention': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor2': ActorIdentifier(name="Zelda"), 'actor1': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.PlayAnimationNoWait({'name': 'wait_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaC:GoronChiefFistBump_260', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        call GeneralSequence.Look_at_Partner()

    }

    QuestSystem.SetProgress({'symbol': 'Volcano:1507786808', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventVariables.SetVariable({'symbol': 'Volcano:1507786808'})
    Audio.StopAllBGM({'duration': 2.5})
    Audio.PlayZoneBGM({'stopbgm': False})
    Audio.SetTimeToRegionBgmPlay({'waitSec': 1.0})
}

void GlidingPractice() {
    GoronChief.SetInterestIkEnabled({'enable': False})

    call EvResetCommon.AllResetNowait()


    call AreaStartCommon.WalkIn()

    GoronChief.LookAtTalker({'keep': True, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Zelda.MoveToBesideTargetActor({'speed': 0, 'actor': ActorIdentifier(name="GoronChief"), 'offsetZ': 1.5, 'offsetX': -1.5, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    GoronChief.SetInterestIkEnabled({'enable': True})
    GoronChief.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Zelda.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Camera.LookAtLocationAsGimmick({'location': 'pd163camera', 'distanceOffset': -4.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'posOffsetX': 0.0, 'posOffsetY': 0.0, 'posOffsetZ': 0.0})
    Timer.Wait({'time': 0.5})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:HowToGetToOtherSide_010', 'getAttention': False})
    Timer.Wait({'time': 0.5})
    GoronChief.LookAtTalker({'keep': True, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 0.5})

    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:HowToGetToOtherSide_020', 'getAttention': False})
    } {
        GoronChief.PlayAnimationNoWait({'name': 'talk_stoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.20000000298023224})
    GoronChief.PlayAnimationNoWait({'name': 'think03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:HowToGetToOtherSide_030', 'getAttention': False})
    GoronChief.SetInstanceVariableString({'name': 'idleAnim', 'value': 'think03'})
    EventFlags.SetFlag({'symbol': 'EvC_GlidingPracticeStart', 'value': True})
}

void GlidingPracticeEnd() {

    call EvResetCommon.AllReset()

    Timer.Wait({'time': 0.6000000238418579})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:CatchUpLater_010', 'getAttention': False})
    GoronChief.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GoronChief.LookAtTalker({'keep': True, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:CatchUpLater_020', 'getAttention': False})
    } {
        GoronChief.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.20000000298023224})

    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:CatchUpLater_030', 'getAttention': False})
    } {
        GoronChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.20000000298023224})
    GoronChief.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait'})
    EventFlags.SetFlag({'symbol': 'EvC_GlidingPracticeEnd', 'value': True})
}

void pd165_Rock() {

    fork {
        Player.SetInterestIkEnabled({'enable': True})
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GoronChief"), 'offsetZ': 2.5, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GoronChief"), 'offsetZ': 2.5, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'immediateTurn': False})
    }

}

void pd165_GoronChief() {

    fork {
        Player.SetInterestIkEnabled({'enable': False})
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'offsetZ': 0.0, 'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'offsetZ': 0.0, 'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'immediateTurn': False})
    }

}
