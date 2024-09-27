-------- EventFlow: L_Dungeon005 --------

Actor: GameControl
entrypoint: None()
actions: ['UnforbidSave', 'EnableAutoSave', 'ForbidWarp']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'RelativeMoveToWithTimeout']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['StopZoneBgm', 'PlayOneshotSystemSE', 'PlayZoneBaseAmbience']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor', 'MoveToCompassPoint']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimCompassPoint', 'AimActor', 'LookAtTalker', 'SetInterestIkEnabled', 'MoveToTargetActor']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: EvTestitart
entrypoint: None()
actions: ['LookAtTalker', 'PlayAnimation', 'PlayAnimationNoWait', 'Destroy', 'PlayTailorOtherChannelNoWait', 'SetComponentActive']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['MoveToBesideTargetActor', 'Talk', 'AimPlayer', 'PlayAnimationNoWait', 'AimCompassPoint', 'MoveToCompassPoint', 'PlayAnimation', 'AimActor', 'AimDegreeAngle', 'MoveToTargetActor', 'WarpToDefaultPosition', 'WaitMoveDone']
queries: []
params: None

Actor: TraceTestitart[tes0]
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait', 'SetVisibility']
queries: []
params: None

Actor: TraceTestitart[tes1]
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait', 'SetVisibility']
queries: []
params: None

Actor: TraceTestitart[tes2]
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait', 'SetVisibility']
queries: []
params: None

Actor: TraceTestitart[tes3]
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait', 'SetVisibility']
queries: []
params: None

Actor: TraceTestitart[tes4]
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait', 'SetVisibility']
queries: []
params: None

Actor: TraceTestitart[tes5]
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait', 'SetVisibility']
queries: []
params: None

Actor: TraceTestitart[tes6]
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait', 'SetVisibility']
queries: []
params: None

Actor: TraceTestitart[tes7]
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait', 'SetVisibility']
queries: []
params: None

void SwallowedUpKeyBoss() {

    call EvResetCommon.AllReset()

    EvTestitart.SetComponentActive({'name': 'TreasureBoxBig', 'active': True})
    Partner[companion].MoveToBesideTargetActor({'offsetY': 1.0, 'speed': 0, 'offsetX': 0.5, 'offsetZ': 0.0, 'actor': ActorIdentifier(name="Player"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    EvTestitart.PlayAnimationNoWait({'name': 'wait_open_b', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetZ': 0.0, 'distanceOffset': -1.0, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0})

    fork {
        Fade.StartPreset({'preset': 'FadeInNormal'})
    } {
        Zelda.MoveToCompassPoint({'direction': 2, 'speed': 0, 'distance': 1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Partner[companion].MoveToCompassPoint({'direction': 2, 'speed': 0, 'distance': 0.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    Partner[companion].MoveToBesideTargetActor({'offsetZ': -1.0, 'speed': 0, 'actor': ActorIdentifier(name="Player"), 'offsetX': 1.0, 'offsetY': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.30000001192092896})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaF:SwallowedUpKeyBoss_010', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Zelda.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.20000000298023224})
    Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Partner[companion].PlayAnimationNoWait({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 2.0})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Timer.Wait({'time': 0.4000000059604645})

    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'appeal02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_SYS_MESSAGE_TORI2', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 0.699999988079071})
    Player.AimCompassPoint({'direction': 2, 'duration': 0.20000000298023224, 'withoutTurn': False, 'immediateTurn': False})
    Timer.Wait({'time': 0.30000001192092896})
    EvTestitart.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 1.0})

    fork {
        EvTestitart.PlayAnimation({'name': 'close_b', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        EvTestitart.SetComponentActive({'active': False, 'name': 'TreasureBoxBig'})
    }

    EvTestitart.PlayAnimationNoWait({'name': 'dive_b', 'layer': 0, 'blendFrame': -1, 'restart': False})
    EvTestitart.LookAtTalker({'chaseRatio': 0.10000000149011612, 'duration': 0.30000001192092896, 'distanceOffset': 2.5, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 0.4000000059604645})

    fork {
        EvTestitart.PlayTailorOtherChannelNoWait({'channel': 'RunAway', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Camera.RelativeMoveToWithTimeout({'offsetZ': -6.0, 'offsetY': 3.0, 'timeout': 2.0, 'maxSpeed': 7.0, 'offsetX': 0.0, 'chaseRatio': 0.10000000149011612})
    } {
        Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetY': 1.0, 'offsetX': 2.0, 'actor': ActorIdentifier(name="Player"), 'offsetZ': -5.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="EvTestitart"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 1.0})
    EvTestitart.LookAtTalker({'offsetZ': 1.0, 'distanceOffset': 4.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'keep': False})

    fork {

        call TestitartGrassDies()

        Timer.Wait({'time': 1.7999999523162842})
    } {
        Timer.Wait({'time': 1.5})
        Partner[companion].AimDegreeAngle({'angle': 210.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Partner[companion].PlayAnimationNoWait({'name': 'ev_think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetX': 1.0, 'offsetY': 1.0, 'offsetZ': -1.5, 'actor': ActorIdentifier(name="Player"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {
        EvTestitart.Destroy()
    }

    Timer.Wait({'time': 0.20000000298023224})
    Partner[companion].PlayAnimation({'name': 'appeal02,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.20000000298023224})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:SwallowedUpKeyBoss_020', 'getAttention': False})
    QuestSystem.SetProgress({'isShowTelopInEvent': False, 'symbol': 'Jungle:3972776168', 'isFrontFade': False})
}

void IntoDungeon_AreaF() {

    call EvResetCommon.AllResetNowait()

    Partner[companion].WarpToDefaultPosition({'position': 2, 'avoidWall': False, 'avoidPlayer': False})

    fork {

        call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

    } {
        Player.MoveToTargetActor({'speed': 0, 'actor': ActorIdentifier(name="Player"), 'distance': 1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    Timer.Wait({'time': 0.5})
    Partner[companion].MoveToTargetActor({'speed': 1, 'offsetY': 0.0, 'distance': 3.0, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0})
    Partner[companion].PlayAnimation({'name': 'lookaround02,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Player"), 'offsetY': 0.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaF:IntoDungeon_AreaF_010', 'getAttention': False})
        Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaF:IntoDungeon_AreaF_020', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.5})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'offsetY': -1.0, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

}

void AfterReleasPartnerTalk() {
    Audio.StopZoneBgm()
    Audio.PlayZoneBaseAmbience()

    call EvResetCommon.AllResetNowait()


    call GeneralSequence.LookReturnPartner()

    Timer.Wait({'time': 1.0})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvF_WorldGlobeActivate'})

    call GeneralSequence.PartnerLvelUp({'Key': 'L005'})


    call GeneralSequence.LD_WorldGlobePieceGet({'Dungeon': 'L005', 'Idx': 100})

    Timer.Wait({'time': 1.0})

    call GeneralSequence.ReleaseofGoddess_Farore()

    Timer.Wait({'time': 1.5})
    Partner[companion].PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:LetsGoBack_010', 'getAttention': False})

    fork {
        GameControl.UnforbidSave()
    } {
        GameControl.EnableAutoSave()
    }

    GameControl.ForbidWarp()
    QuestSystem.SetProgress({'symbol': 'Jungle:4220639031', 'isShowTelopInEvent': False, 'isFrontFade': False})
    QuestSystem.SetProgress({'symbol': 'Jungle:2471736681', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void TestitartGrassDies() {

    fork {
        Timer.Wait({'time': 1.7999999523162842})
        TraceTestitart[tes0].PlayTailorOtherChannelNoWait({'channel': 'DryFalling', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        TraceTestitart[tes0].SetVisibility({'visible': False})
    } {
        Timer.Wait({'time': 1.2999999523162842})
        TraceTestitart[tes1].PlayTailorOtherChannelNoWait({'channel': 'DryFalling', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        TraceTestitart[tes1].SetVisibility({'visible': False})
    } {
        Timer.Wait({'time': 1.0})
        TraceTestitart[tes2].PlayTailorOtherChannelNoWait({'channel': 'DryFalling', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        TraceTestitart[tes2].SetVisibility({'visible': False})
    } {
        Timer.Wait({'time': 0.699999988079071})
        TraceTestitart[tes3].PlayTailorOtherChannelNoWait({'channel': 'DryFalling', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        TraceTestitart[tes3].SetVisibility({'visible': False})
    } {
        Timer.Wait({'time': 1.2000000476837158})
        TraceTestitart[tes4].PlayTailorOtherChannelNoWait({'channel': 'DryFalling', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        TraceTestitart[tes4].SetVisibility({'visible': False})
    } {
        Timer.Wait({'time': 1.2999999523162842})
        TraceTestitart[tes5].PlayTailorOtherChannelNoWait({'channel': 'DryFalling', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        TraceTestitart[tes5].SetVisibility({'visible': False})
    } {
        Timer.Wait({'time': 0.800000011920929})
        TraceTestitart[tes6].PlayTailorOtherChannelNoWait({'channel': 'DryFalling', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        TraceTestitart[tes6].SetVisibility({'visible': False})
    } {
        Timer.Wait({'time': 1.2000000476837158})
        TraceTestitart[tes7].PlayTailorOtherChannelNoWait({'channel': 'DryFalling', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        TraceTestitart[tes7].SetVisibility({'visible': False})
    } {
        Timer.Wait({'time': 0.800000011920929})
        Audio.PlayOneshotSystemSE({'label': 'SE_ENEMY_TESTITART_GRASS_WITHERS2', 'volume': 1.0, 'pitch': 1.0})
    }

}

void IntoDungeon_AreaF02() {

    call EvResetCommon.AllReset()

    Partner[companion].WaitMoveDone({'timeout': 3.0})

    fork {
        Partner[companion].MoveToBesideTargetActor({'tolerance': 1.0, 'speed': 0, 'offsetX': -1.5, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 1.0, 'offsetZ': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimCompassPoint({'direction': 3, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Player.AimActor({'offsetY': -1.0, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimation({'name': 'lookaround02,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Player"), 'offsetY': 0.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaF:IntoDungeon_AreaF_010', 'getAttention': False})
        Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaF:IntoDungeon_AreaF_020', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.5})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'offsetY': -1.0, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

}

void IntoDungeon_AreaF03() {

    call EvResetCommon.AllReset()

    Timer.Wait({'time': 0.5})
    Partner[companion].MoveToTargetActor({'speed': 1, 'offsetY': 1.0, 'actor': ActorIdentifier(name="Player"), 'distance': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0})
    Partner[companion].PlayAnimation({'name': 'lookaround02,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Player"), 'offsetY': 0.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaF:IntoDungeon_AreaF_010', 'getAttention': False})
        Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaF:IntoDungeon_AreaF_020', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.5})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'offsetY': -1.0, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

}
