-------- EventFlow: S_Dungeon109 --------

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Deku006
entrypoint: None()
actions: ['Talk', 'SkipAutoTurn', 'Activate', 'PlayAnimationNoWait', 'SetComponentActive', 'SetInterestIkEnabled', 'AimActor', 'ResetAim', 'AimPlayer', 'AimToInitialAngle']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['ForbidWarp', 'ChangePlayingActor']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'LookAt3ActorsCenterAsTalker', 'Reset']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['GenericItemGetSequence', 'AimActor', 'MoveToTargetLinkedPoint', 'AddRupee', 'AddItem', 'SetInterestIkEnabled', 'MoveToTargetActor']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'MoveToCompassPoint', 'RemoveItem', 'PlayAnimationNoWait', 'SetEquipmentVisibility', 'GenericItemGetSequence', 'SetFacialExpression', 'ResetFacialExpression', 'SetInterestIkEnabled', 'ResetAim', 'PlayAnimation', 'AimCompassPoint']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Deku003
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'MoveToCompassPoint', 'AimPlayer', 'Destroy', 'PlayAnimation', 'SetComponentActive', 'Activate', 'MoveToTargetActor', 'SkipAutoTurn', 'SetInterestIkEnabled', 'LookAtTalker', 'PlayMaterialAnimation', 'MoveToBesideTargetActor', 'MoveToLinkedPoint', 'AimActor', 'ResetAim', 'AimCompassPoint', 'AimToInitialAngle']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayZoneBGM', 'StopRegionBgm', 'PlayOneshotSystemSE']
queries: []
params: None

Actor: JungleRuinsKey
entrypoint: None()
actions: ['LookAtTalker', 'Deactivate', 'SetCollisionEnabled', 'Activate']
queries: []
params: None

Actor: Deku008
entrypoint: None()
actions: ['Talk', 'SkipAutoTurn', 'Activate', 'PlayAnimationNoWait', 'SetComponentActive', 'SetInterestIkEnabled', 'AimActor', 'ResetAim', 'AimPlayer', 'AimToInitialAngle']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'AimPlayer', 'LookAtTalker', 'AimActor', 'MoveToCompassPoint', 'WarpToActor', 'SetFacialExpression', 'ResetFacialExpression', 'MoveToBesideTargetActor', 'MoveToTargetActor', 'ResetAim']
queries: []
params: None

Actor: PatrolDekuSoldier[ev01]
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'AimActor']
queries: []
params: None

Actor: PatrolDekuSoldier[ev02]
entrypoint: None()
actions: ['Talk', 'AimActor', 'PlayAnimationNoWait']
queries: []
params: None

Actor: DoorPrison
entrypoint: None()
actions: ['PlayAnimation', 'SetInstanceVariableString']
queries: []
params: None

void ImprisonedInJungle() {
    Audio.StopRegionBgm({'fadeSec': 0.0})

    call EvResetCommon.AllResetNowait()


    fork {
        JungleRuinsKey.SetCollisionEnabled({'enable': False})
    } {
        JungleRuinsKey.Deactivate()
    }


    fork {
        Player.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Player.RemoveItem({'itemKey': 'CopyRod', 'count': 1, 'index': -1})
    } {
        Player.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Deku003"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.SetEquipmentVisibility({'visibility': False})
    } {
        Partner[companion].WarpToActor({'offsetY': 1.0, 'offsetX': -1.0, 'actor': ActorIdentifier(name="Player"), 'distance': 0.30000001192092896})
    } {
        Deku003.AimPlayer({'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku003.SetInterestIkEnabled({'enable': False})
    } {
        Partner[companion].AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Deku003"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Camera.LookAt2ActorsCenterAsTalker({'duration': 0.0, 'chaseRatio': 1.0, 'distanceOffset': 0.0, 'offsetY': 0.5, 'actor1': ActorIdentifier(name="Deku003"), 'actor2': ActorIdentifier(name="Zelda"), 'offsetZ': 0.6000000238418579, 'weight1': 1.0, 'weight2': 1.0, 'offsetX': 0.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    Deku003.PlayAnimationNoWait({'name': 'angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku003.Talk({'message': 'scenario/StoryAreaF:ImprisonedInJungle_010', 'getAttention': False})
    Deku003.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku003.Talk({'message': 'scenario/StoryAreaF:ImprisonedInJungle_020', 'getAttention': False})
    Deku003.MoveToCompassPoint({'speed': 1, 'direction': 1, 'distance': 1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Deku003.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku003.Talk({'message': 'scenario/StoryAreaF:ImprisonedInJungle_030', 'getAttention': False})
    Deku003.MoveToCompassPoint({'speed': 1, 'direction': 3, 'distance': 1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Deku003.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Deku003.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku003.Talk({'message': 'scenario/StoryAreaF:ImprisonedInJungle_040', 'getAttention': False})
    Deku003.MoveToBesideTargetActor({'speed': 1, 'offsetX': 0.0, 'actor': ActorIdentifier(name="Player"), 'offsetZ': -3.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Deku003.AimPlayer({'offsetX': 0.0, 'offsetZ': -3.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetY': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.20000000298023224})
    Deku003.PlayAnimation({'name': 'yes02,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.10000000149011612})
    Deku003.MoveToLinkedPoint({'index': 1, 'speed': 1, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Deku003.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Player.GenericItemGetSequence({'itemKey': 'ItemWoodenStick', 'messageEntry': 'S_Dungeon109:GetWoodenStick', 'count': 1, 'keepRaise': False, 'index': -1})
    } {
        Player.SetFacialExpression({'expression': 'sad'})
    } {
        Partner[companion].SetFacialExpression({'expression': 'sad'})
    }

    Partner[companion].ResetFacialExpression()
    Player.ResetFacialExpression()
    Camera.LookAt2ActorsCenterAsTalker({'offsetY': 0.5, 'offsetZ': 0.6000000238418579, 'actor1': ActorIdentifier(name="Deku003"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0})
    Player.SetEquipmentVisibility({'visibility': True})

    fork {
        Player.AimActor({'actor': ActorIdentifier(name="Deku003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.11999999731779099})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku003.PlayAnimationNoWait({'name': 'yes02,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku003.Talk({'message': 'scenario/StoryAreaF:ImprisonedInJungle_050', 'getAttention': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        call GeneralSequence.Look_at_Partner()

    }

    Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:ImprisonedInJungle_060', 'getAttention': False})
    Camera.LookAt2ActorsCenterAsTalker({'offsetY': 0.5, 'actor1': ActorIdentifier(name="Deku003"), 'actor2': ActorIdentifier(name="Player"), 'offsetZ': 0.6000000238418579, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0})
    Deku003.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku003.Talk({'message': 'scenario/StoryAreaF:ImprisonedInJungle_070', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.11999999731779099})
        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.25})
        Player.AimActor({'actor': ActorIdentifier(name="Deku003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku003.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku003.Talk({'message': 'scenario/StoryAreaF:ImprisonedInJungle_075', 'getAttention': False})

    fork {
        Deku003.MoveToCompassPoint({'timeOut': 7.0, 'speed': 1, 'direction': 1, 'distance': 8.0, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Deku003.Destroy()
    } {
        JungleRuinsKey.SetCollisionEnabled({'enable': True})
        JungleRuinsKey.Activate()
    }


    fork {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="JungleRuinsKey"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="JungleRuinsKey"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    JungleRuinsKey.LookAtTalker({'distanceOffset': -1.5, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 1.0})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:ImprisonedInJungle_080', 'getAttention': False})
    Timer.Wait({'time': 1.0})
    GameControl.ForbidWarp()
    QuestSystem.SetProgress({'symbol': 'Jungle:337646779', 'isShowTelopInEvent': False, 'isFrontFade': False})
    GameControl.ChangePlayingActor({'actor': 2})
    Audio.PlayZoneBGM({'stopbgm': True})
    EventFlags.SetFlag({'value': True, 'symbol': 'Deku_Leave'})
}

void SoldierCatchJungle() {
    EventFlags.SetFlag({'value': False, 'symbol': 'EvF_DoorPrisonOpen'})
    DoorPrison.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait_off'})
    DoorPrison.PlayAnimation({'name': 'wait_off', 'layer': 0, 'blendFrame': -1, 'restart': False})

    call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

}

void GiveItBack() {

    call EvResetCommon.AllReset()

    Deku003.SetInterestIkEnabled({'enable': False})
    Deku003.SetComponentActive({'name': 'CottonCandyRod', 'active': True})
    Deku003.PlayAnimation({'name': 'eat_lp_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.MoveToCompassPoint({'speed': 0, 'direction': 1, 'distance': 2.25, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'actor2': ActorIdentifier(name="Zelda"), 'actor1': ActorIdentifier(name="Deku003"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Partner[companion].AimActor({'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'actor': ActorIdentifier(name="Deku003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.20000000298023224})
    Deku003.Talk({'message': 'scenario/StoryAreaF:GiveItBack_020', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'appeal02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:GiveItBack_030', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'angry02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:GiveItBack_040', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaF:GiveItBack_050', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        call GeneralSequence.Look_at_Partner()

    }

    Deku003.Talk({'message': 'scenario/StoryAreaF:GiveItBack_060', 'getAttention': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="Deku003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku003.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    }

    Timer.Wait({'time': 0.5})
    Partner[companion].PlayAnimationNoWait({'name': 'no', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:GiveItBack_070', 'getAttention': False})
    Timer.Wait({'time': 0.5})

    fork {
        Deku003.Talk({'message': 'scenario/StoryAreaF:GiveItBack_080', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Deku003.PlayAnimationNoWait({'name': 'surprised_st_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Deku003.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku003.PlayAnimation({'name': 'surprised_lp_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Deku003"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 1.5})
    Deku003.PlayAnimation({'name': 'raise_cottoncandy_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku003.PlayAnimationNoWait({'name': 'raise_cottoncandy_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku003.Talk({'message': 'scenario/StoryAreaF:GiveItBack_090', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'no_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:GiveItBack_100', 'getAttention': False})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Deku003.PlayAnimationNoWait({'name': 'eat_lp_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].PlayAnimationNoWait({'name': 'appeal02,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaF:GiveItBack_105', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        call GeneralSequence.Look_at_Partner()

    }

    Player.AimActor({'actor': ActorIdentifier(name="Deku003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Player.SetInterestIkEnabled({'enable': False})

    call GeneralSequence.ZeldaTalkMotion()

    Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Deku003.Talk({'message': 'scenario/StoryAreaF:GiveItBack_110', 'getAttention': False})
    Deku003.PlayAnimationNoWait({'name': 'talk_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku003.Talk({'message': 'scenario/StoryAreaF:GiveItBack_120', 'getAttention': False})
    Timer.Wait({'time': 0.5})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Deku003.LookAtTalker({'offsetX': -1.5, 'keep': False, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Deku003.Talk({'message': 'scenario/StoryAreaF:GiveItBack_130', 'getAttention': False})
    Deku003.SetComponentActive({'active': False, 'name': 'CottonCandyRod'})
    Deku003.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInFast'})
    Deku003.Talk({'message': 'scenario/StoryAreaF:GiveItBack_140', 'getAttention': False})
    Deku003.MoveToTargetActor({'speed': 1, 'actor': ActorIdentifier(name="Zelda"), 'distance': 2.25, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Deku003.PlayAnimation({'name': 'yes02,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Zelda.GenericItemGetSequence({'itemKey': 'CopyRod', 'messageEntry': 'S_Dungeon109:_ItemJungleCopyRod', 'count': 1, 'keepRaise': False, 'index': -1})
        Zelda.AddItem({'itemKey': 'CopyRod', 'count': 1, 'index': -1, 'autoEquip': False})
    } {
        Player.SetFacialExpression({'expression': 'sad'})
    }

    Player.ResetFacialExpression()
    Deku003.LookAtTalker({'offsetX': -1.5, 'keep': False, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Zelda.AimActor({'actor': ActorIdentifier(name="Deku003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku003.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku003.Talk({'message': 'scenario/StoryAreaF:GiveItBack_160', 'getAttention': False})
    Deku003.PlayAnimationNoWait({'name': 'yes02,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku003.Talk({'message': 'scenario/StoryAreaF:GiveItBack_170', 'getAttention': False})

    fork {
        Deku003.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            Timer.Wait({'time': 3.6500000953674316})
            Deku003.PlayMaterialAnimation({'name': 'fade_out', 'layer': 0})
        } {
            Deku003.MoveToCompassPoint({'direction': 3, 'timeOut': 7.0, 'speed': 0, 'distance': 6.0, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        }

        Deku003.Destroy()
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.MoveToCompassPoint({'distance': 1.5, 'direction': 2, 'speed': 1, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Zelda.AimActor({'actor': ActorIdentifier(name="Deku003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].MoveToCompassPoint({'direction': 2, 'speed': 1, 'distance': 1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Deku003.LookAtTalker({'keep': True, 'offsetX': -1.5, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Timer.Wait({'time': 1.2000000476837158})
        Deku003.LookAtTalker({'offsetX': -1.5, 'keep': False, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    Timer.Wait({'time': 2.5})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Partner", sub_name="companion"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 0.5})
    Partner[companion].PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:GiveItBack_180', 'getAttention': False})
    Timer.Wait({'time': 1.5})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].ResetAim()
    Timer.Wait({'time': 0.699999988079071})

    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaF:GiveItBack_190', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.699999988079071})

        call GeneralSequence.Look_at_Partner()

    }

    Timer.Wait({'time': 1.0})
    Player.ResetAim()
    QuestSystem.SetProgress({'symbol': 'Jungle:966286477', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventFlags.SetFlag({'symbol': 'EvF_GiveItBack', 'value': True})
    GameControl.ChangePlayingActor({'actor': 0})
}

void _ItemJungleCopyRod() {
    Dialog.Show({'message': 'scenario/StoryAreaF:GiveItBack_150'})
}

void NotSafeOutside() {

    call EvResetCommon.AllReset()


    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaF:NotSafeOutside_010', 'getAttention': False})
    } {
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetY': -0.8999999761581421, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.4000000059604645})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:NotSafeOutside_020', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Player.SetInterestIkEnabled({'enable': False})
    Player.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Player.MoveToCompassPoint({'direction': 2, 'distance': 3.0, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
}

void SoldierCatchJungle_First() {
    EventFlags.SetFlag({'value': False, 'symbol': 'EvF_DoorPrisonOpen'})
    DoorPrison.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait_off'})

    call EvResetCommon.AllResetNowait()

    DoorPrison.PlayAnimation({'name': 'wait_off', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku003.Activate()

    fork {
        Player.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Player.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Deku003"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].WarpToActor({'offsetY': 1.0, 'offsetX': -1.0, 'actor': ActorIdentifier(name="Player"), 'distance': 0.30000001192092896})
    } {
        Deku003.AimPlayer({'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku003.SetInterestIkEnabled({'enable': False})
    } {
        Partner[companion].AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Deku003"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku003.PlayAnimationNoWait({'name': 'angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Camera.LookAt2ActorsCenterAsTalker({'duration': 0.0, 'chaseRatio': 1.0, 'distanceOffset': 0.0, 'offsetY': 0.5, 'actor1': ActorIdentifier(name="Deku003"), 'actor2': ActorIdentifier(name="Zelda"), 'offsetZ': 0.6000000238418579, 'weight1': 1.0, 'weight2': 1.0, 'offsetX': 0.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    Deku003.Talk({'message': 'scenario/StoryAreaF:SoldierCatchJungle_First_010', 'getAttention': False})
    Deku003.MoveToCompassPoint({'timeOut': 7.0, 'speed': 1, 'direction': 1, 'distance': 8.0, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})

    fork {
        Deku003.Destroy()
    } {
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        call GeneralSequence.Look_at_Partner()

    }

    Timer.Wait({'time': 0.20000000298023224})
    Partner[companion].PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:SoldierCatchJungle_First_020', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:SoldierCatchJungle_First_020_02', 'getAttention': False})
}

void AfraidOfEnemy() {

    call EvResetCommon.AllReset()

    PatrolDekuSoldier[ev01].AimActor({'actor': ActorIdentifier(name="PatrolDekuSoldier", sub_name="ev02"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    PatrolDekuSoldier[ev02].AimActor({'actor': ActorIdentifier(name="PatrolDekuSoldier", sub_name="ev01"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    call AreaStartCommon.WallStairDownIn()

    Player.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.MoveToCompassPoint({'direction': 0, 'speed': 0, 'distance': 0.75, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Player.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.AimActor({'actor': ActorIdentifier(name="PatrolDekuSoldier", sub_name="ev02"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.10000000149011612})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="PatrolDekuSoldier", sub_name="ev01"), 'actor2': ActorIdentifier(name="PatrolDekuSoldier", sub_name="ev02"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 0.20000000298023224})
    PatrolDekuSoldier[ev01].PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    PatrolDekuSoldier[ev01].Talk({'message': 'scenario/StoryAreaF:AfraidOfEnemy_010', 'getAttention': False})
    PatrolDekuSoldier[ev02].PlayAnimationNoWait({'name': 'surprised_st01,frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    PatrolDekuSoldier[ev02].Talk({'message': 'scenario/StoryAreaF:AfraidOfEnemy_020', 'getAttention': False})
    PatrolDekuSoldier[ev01].PlayAnimationNoWait({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
    PatrolDekuSoldier[ev01].Talk({'message': 'scenario/StoryAreaF:AfraidOfEnemy_030', 'getAttention': False})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    PatrolDekuSoldier[ev02].PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    PatrolDekuSoldier[ev01].PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    EventFlags.SetFlag({'symbol': 'EvF_AfraidOfEnemy', 'value': True})
}

void PlayHookyDekus() {

    call EvResetCommon.AllReset()


    fork {
        Deku003.Activate()
        Deku003.SetComponentActive({'name': 'DekuSmoothie', 'active': False})
        Deku003.SetInterestIkEnabled({'enable': False})
        Deku003.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku006.Activate()
        Deku006.SetComponentActive({'name': 'DekuSmoothie', 'active': False})
        Deku006.SetInterestIkEnabled({'enable': False})
        Deku006.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku008.Activate()
        Deku008.SetComponentActive({'name': 'DekuSmoothie', 'active': False})
        Deku008.SetInterestIkEnabled({'enable': False})
        Deku008.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku003"), 'actor2': ActorIdentifier(name="Deku006"), 'actor3': ActorIdentifier(name="Deku008"), 'offsetX': -1.5, 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 0.6000000238418579})
    Deku003.PlayAnimationNoWait({'name': 'talk_sit01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.4000000059604645})

    fork {
        Deku003.Talk({'message': 'scenario/StoryAreaF:PlayHookyDekus_010', 'getAttention': False})
    } {
        Deku006.SetInterestIkEnabled({'enable': True})
        Deku006.AimActor({'actor': ActorIdentifier(name="Deku003"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku008.SetInterestIkEnabled({'enable': True})
        Timer.Wait({'time': 0.10000000149011612})
        Deku008.AimActor({'actor': ActorIdentifier(name="Deku003"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'actor': ActorIdentifier(name="Deku006"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku006"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku003.PlayAnimationNoWait({'name': 'wait_sit01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.4000000059604645})
    Deku006.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku003.SetInterestIkEnabled({'enable': True})
        Timer.Wait({'time': 0.10000000149011612})
        Deku003.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku006"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku006.ResetAim()
        Deku006.Talk({'message': 'scenario/StoryAreaF:PlayHookyDekus_020', 'getAttention': False})
    } {
        Deku008.AimActor({'actor': ActorIdentifier(name="Deku006"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku006.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.4000000059604645})
    Deku008.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.10000000149011612})
        Deku003.AimActor({'actor': ActorIdentifier(name="Deku008"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku006.AimActor({'actor': ActorIdentifier(name="Deku008"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku008.ResetAim()
        Deku008.Talk({'message': 'scenario/StoryAreaF:PlayHookyDekus_030', 'getAttention': False})
    }

    Deku008.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.800000011920929})
    Deku003.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku003.ResetAim()
        Deku003.SetInterestIkEnabled({'enable': False})
        Deku003.Talk({'message': 'scenario/StoryAreaF:PlayHookyDekus_040', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Deku006.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku003"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku008.AimActor({'actor': ActorIdentifier(name="Deku003"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.800000011920929})
    Deku003.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku003.Talk({'message': 'scenario/StoryAreaF:PlayHookyDekus_050', 'getAttention': False})
    Deku003.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku006.PlayAnimationNoWait({'name': 'laugh01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.10000000149011612})
        Deku003.SetInterestIkEnabled({'enable': True})
        Deku003.AimActor({'actor': ActorIdentifier(name="Deku006"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku006.ResetAim()
        Deku006.Talk({'message': 'scenario/StoryAreaF:PlayHookyDekus_060', 'getAttention': False})
    } {
        Deku008.AimActor({'actor': ActorIdentifier(name="Deku006"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku008.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku008.ResetAim()

    fork {
        Deku008.Talk({'message': 'scenario/StoryAreaF:PlayHookyDekus_070', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Deku003.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku008"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Deku003.AimCompassPoint({'withoutTurn': True, 'direction': 1, 'duration': 0.4000000059604645, 'immediateTurn': False})
    } {
        Deku003.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Deku003.Talk({'message': 'scenario/StoryAreaF:PlayHookyDekus_080', 'getAttention': False})
    Timer.Wait({'time': 1.5})

    fork {
        Deku003.SetInterestIkEnabled({'enable': False})
        Deku003.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku003.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 1.0})
    } {
        Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku003"), 'actor2': ActorIdentifier(name="Zelda"), 'actor3': ActorIdentifier(name="Deku008"), 'weight2': 2.0, 'weight1': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    Deku003.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku003.Talk({'message': 'scenario/StoryAreaF:PlayHookyDekus_090', 'getAttention': False})

    fork {
        Deku006.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku006.SetInterestIkEnabled({'enable': False})
        Deku006.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.6000000238418579})
        Deku006.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku008.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.10000000149011612})
        Deku008.SetInterestIkEnabled({'enable': False})
        Deku008.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.6000000238418579})
        Audio.PlayOneshotSystemSE({'label': 'VO_DKN_1_6_006_004', 'volume': 1.0, 'pitch': 1.0})
        Deku008.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Zelda.MoveToTargetLinkedPoint({'index': 0, 'speed': 0, 'actor': ActorIdentifier(name="Deku003"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Zelda.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku006"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku003.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku006.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku008.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].MoveToBesideTargetActor({'offsetY': 1.0, 'speed': 0, 'withoutTurn': False, 'offsetX': -4.5, 'offsetZ': 0.30000001192092896, 'actor': ActorIdentifier(name="Deku003"), 'customSpeed': 1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'method': 0})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku006"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku003"), 'actor2': ActorIdentifier(name="Zelda"), 'actor3': ActorIdentifier(name="Deku008"), 'weight2': 2.0, 'weight1': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 0.5})
    Deku003.PlayAnimationNoWait({'name': 'find,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku003.Talk({'message': 'scenario/StoryAreaF:PlayHookyDekus_100', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku003"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku003"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku003.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku003.SetInterestIkEnabled({'enable': True})
        Deku003.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Timer.Wait({'time': 0.699999988079071})
        Deku003.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku006"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku006.SetInterestIkEnabled({'enable': True})
        Deku006.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Deku006.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.6000000238418579})
        Deku006.Talk({'message': 'scenario/StoryAreaF:PlayHookyDekus_110', 'getAttention': False})
    } {
        Deku008.SetInterestIkEnabled({'enable': True})
        Deku008.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku008.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Timer.Wait({'time': 0.800000011920929})
        Deku008.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku006"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku006"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku006"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku003"), 'actor2': ActorIdentifier(name="Deku006"), 'actor3': ActorIdentifier(name="Deku008"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    Deku006.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku008.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Deku003.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku008"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Deku006.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku008"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku008.ResetAim()
        Deku008.Talk({'message': 'scenario/StoryAreaF:PlayHookyDekus_120', 'getAttention': False})
    }

    Deku008.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku003.ResetAim()
    } {
        Deku006.ResetAim()
    } {
        Deku008.ResetAim()
    }

    Timer.Wait({'time': 0.800000011920929})

    fork {
        Deku003.SetInterestIkEnabled({'enable': False})
        Deku003.PlayAnimationNoWait({'name': 'yes02,wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku006.SetInterestIkEnabled({'enable': False})
        Deku006.PlayAnimationNoWait({'name': 'yes02,wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku008.SetInterestIkEnabled({'enable': False})
        Deku008.PlayAnimationNoWait({'name': 'yes02,wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 1.2999999523162842})

    fork {
        Timer.Wait({'time': 0.30000001192092896})
        Deku003.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Deku003.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Deku006.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Deku008.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku003"), 'actor2': ActorIdentifier(name="Zelda"), 'actor3': ActorIdentifier(name="Deku008"), 'weight2': 2.0, 'weight1': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }


    fork {
        Deku003.Talk({'message': 'scenario/StoryAreaF:PlayHookyDekus_130', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku003"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku003"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku003.MoveToTargetActor({'speed': 1, 'actor': ActorIdentifier(name="Zelda"), 'distance': 1.100000023841858, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Deku003.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Deku003.MoveToTargetActor({'distance': 0.6000000238418579, 'speed': 0, 'actor': ActorIdentifier(name="Zelda"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Timer.Wait({'time': 0.5})
        Deku003.MoveToTargetActor({'withoutTurn': True, 'speed': 0, 'actor': ActorIdentifier(name="Zelda"), 'distance': 1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Timer.Wait({'time': 0.5})
    } {
        Zelda.MoveToTargetActor({'withoutTurn': True, 'distance': -0.5, 'actor': ActorIdentifier(name="Zelda"), 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Partner[companion].MoveToTargetActor({'withoutTurn': True, 'speed': 0, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'distance': -0.4000000059604645, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    Player.SetFacialExpression({'expression': 'sad'})
    Zelda.GenericItemGetSequence({'itemKey': 'RupeeBlue', 'messageEntry': 'S_Dungeon109:Message', 'count': 1, 'keepRaise': False, 'index': -1})
    Zelda.AddRupee({'amount': 5})
    Player.ResetFacialExpression()
    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku003"), 'actor2': ActorIdentifier(name="Zelda"), 'actor3': ActorIdentifier(name="Deku008"), 'weight2': 2.0, 'weight1': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        Zelda.AimActor({'actor': ActorIdentifier(name="Deku006"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku006"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku003.MoveToBesideTargetActor({'offsetX': 1.0, 'withoutTurn': False, 'speed': 1, 'offsetZ': -1.5, 'actor': ActorIdentifier(name="Deku006"), 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0})
    Deku003.AimPlayer({'offsetX': 1.0, 'withoutTurn': False, 'offsetZ': -1.5, 'duration': 0.4000000059604645, 'boneName': '', 'offsetY': 0.0, 'immediateTurn': False})
    Deku003.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku008.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.30000001192092896})
    Deku006.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku006.Talk({'message': 'scenario/StoryAreaF:PlayHookyDekus_140', 'getAttention': False})
    Deku006.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku008.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku008.Talk({'message': 'scenario/StoryAreaF:PlayHookyDekus_150', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku008"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku008"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku008.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku003.PlayAnimationNoWait({'name': 'yes01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku003.Talk({'message': 'scenario/StoryAreaF:PlayHookyDekus_160', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku003"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku003"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Deku003.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku003.SkipAutoTurn()
    } {
        Deku006.SkipAutoTurn()
    } {
        Deku008.SkipAutoTurn()
    }

    EventFlags.SetFlag({'symbol': 'EvF_PlayHookyDekus', 'value': True})
}

void Message() {
    Dialog.Show({'message': 'ItemGet:DekusPresent'})
}

void GetWoodenStick() {
    Dialog.Show({'message': 'scenario/StoryAreaF:ImprisonedInJungle_045'})
}
