-------- EventFlow: YetiHouse --------

Actor: Yeti000
entrypoint: None()
actions: ['Talk', 'GenericTalkSequence', 'PlayAnimation', 'AimPlayer', 'AimActor', 'SetInterestIkEnabled', 'AimCompassPoint', 'GenericTalkSequenceWithDialog', 'SetComponentActive']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: []
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['MoveToTargetActor', 'WarpToActor', 'SetInterestIkEnabled', 'AimActor', 'ResetAim']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['ForbidWarp']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['SetBGMVolume', 'PlaySpecifyLabelRegionBGM']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'AimActor', 'AimPlayer', 'LookAtTalker', 'PlayAnimation', 'WarpToActor', 'SetInterestIkEnabled', 'ResetAim']
queries: []
params: None

void CondesHouse() {

    call EvResetCommon.AllReset()

    GameControl.ForbidWarp()
    Player.WarpToActor({'offsetY': 0.0, 'offsetX': 0.0, 'distance': 3.0, 'actor': ActorIdentifier(name="Yeti000")})
    Player.SetInterestIkEnabled({'enable': True})
    Partner[companion].SetInterestIkEnabled({'enable': True})
    Partner[companion].WarpToActor({'distance': 2.5, 'offsetX': -1.0, 'actor': ActorIdentifier(name="Yeti000"), 'offsetY': 0.5})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Yeti000.AimCompassPoint({'withoutTurn': True, 'direction': 0, 'duration': 0.4000000059604645, 'immediateTurn': False})
    Yeti000.SetInterestIkEnabled({'enable': True})
    Yeti000.GenericTalkSequence({'playerTalkAnim': False, 'aimFromPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': False, 'aimToPlayer': False, 'selfTalkAnimName': 'wait01', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'AudioIsStartedCondesHouse'})
    Camera.LookAt2ActorsCenterAsTalker({'offsetZ': 0.0, 'offsetY': 0.5, 'actor1': ActorIdentifier(name="Yeti000"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    Audio.PlaySpecifyLabelRegionBGM({'label': 'BGM_EV_SNOW_FINALE'})
    Audio.SetBGMVolume({'duration': 0.0, 'volume': 1.0})
    Timer.Wait({'time': 0.10000000149011612})
    Yeti000.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    Yeti000.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    Yeti000.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Yeti000.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:CondesHouse_010', 'getAttention': True})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaG:CondesHouse_020', 'getAttention': True})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.30000001192092896})
    Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.20000000298023224})
    Yeti000.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    Yeti000.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    Yeti000.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Yeti000.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:CondesHouse_030', 'getAttention': True})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:CondesHouse_031', 'getAttention': True})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:CondesHouse_032', 'getAttention': True})
    Yeti000.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:CondesHouse_033', 'getAttention': True})
    Yeti000.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:CondesHouse_040', 'getAttention': True})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

        call GeneralSequence.ZeldaTalkMotion()

    } {
        Timer.Wait({'time': 0.20000000298023224})
        Yeti000.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Yeti000.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:CondesHouse_050', 'getAttention': True})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaG:CondesHouse_055', 'getAttention': True})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.AimCompassPoint({'direction': 0, 'withoutTurn': True, 'duration': 0.4000000059604645, 'immediateTurn': False})
    Yeti000.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:CondesHouse_060', 'getAttention': True})
    Yeti000.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Yeti000.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:CondesHouse_065', 'getAttention': True})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaG:CondesHouse_066', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Yeti000.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Partner"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:CondesHouse_067', 'getAttention': True})
    Yeti000.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Yeti000.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:CondesHouse_068', 'getAttention': True})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:CondesHouse_070', 'getAttention': True})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})

        call GeneralSequence.Look_at_Partner()

    } {
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Partner[companion].ResetAim()
    Partner[companion].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaG:CondesHouse_080', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'CondesHouse'})
    QuestSystem.SetProgress({'symbol': 'Snowmountain:1904612481', 'isShowTelopInEvent': False, 'isFrontFade': False})
    Yeti000.SetComponentActive({'name': 'npcReactionComp', 'active': True})
}

void not_reave() {

    call EvResetCommon.AllReset()

    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Yeti000"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        Yeti000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'keepPersonalSpace': False, 'selfTalkAnim': False, 'message': 'scenario/StoryAreaG:NotLeaveCondesHouse_010', 'aimToPlayer': True, 'cameraLookAt': False, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Timer.Wait({'time': 0.4000000059604645})

        call GeneralSequence.Look_at_Partner()

    } {
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaG:NotLeaveCondesHouse_020', 'getAttention': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.ResetAim()
    Player.MoveToTargetActor({'speed': 0, 'distance': 3.0, 'actor': ActorIdentifier(name="Yeti000"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
}
