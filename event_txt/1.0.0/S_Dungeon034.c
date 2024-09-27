-------- EventFlow: S_Dungeon034 --------

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Deku013
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'MoveToCompassPoint', 'Deactivate', 'PlayAnimation', 'MoveToTargetLinkedPoint', 'WarpToActorLinkedPoint', 'AimCompassPoint', 'SetComponentActive', 'SetInterestIkEnabled', 'AimPlayer', 'AimActor', 'SkipAutoTurn', 'WarpToActor', 'AimDegreeAngle', 'SetInstanceVariableString']
queries: []
params: None

Actor: Deku021
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'MoveToCompassPoint', 'Deactivate', 'PlayAnimation', 'Destroy', 'AimActor', 'WarpToActor', 'SetInterestIkEnabled', 'AimDegreeAngle', 'PlayMaterialAnimationNoWait', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel']
queries: []
params: None

Actor: Deku005
entrypoint: None()
actions: ['Talk', 'PlayAnimation', 'PlayAnimationNoWait', 'MoveToCompassPoint', 'Deactivate', 'Destroy', 'AimActor', 'WarpToActor', 'SetInterestIkEnabled', 'AimCompassPoint', 'AimDegreeAngle', 'PlayMaterialAnimationNoWait', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump', 'ForbidSave', 'UnforbidSave']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartParam', 'StartPreset']
queries: []
params: None

Actor: Deku019
entrypoint: None()
actions: ['Talk', 'MoveToCompassPoint', 'Deactivate', 'Destroy', 'AimActor', 'PlayAnimationNoWait', 'PlayAnimation', 'WarpToActor', 'SetInterestIkEnabled', 'AimDegreeAngle', 'AimToInitialAngle', 'PlayMaterialAnimationNoWait', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimCompassPoint', 'WarpToActor']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'LookAt3ActorsCenterAsTalker', 'Reset']
queries: []
params: None

Actor: Deku002
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'MoveToCompassPoint', 'Deactivate', 'AimPlayer', 'AimDegreeAngle', 'PlayAnimation', 'MoveToTargetLinkedPoint', 'AimActor', 'WarpToActorLinkedPoint', 'AimCompassPoint', 'SetInterestIkEnabled', 'SkipAutoTurn', 'SetComponentActive', 'SetInstanceVariableString', 'WarpToActor']
queries: []
params: None

Actor: TecuumFly
entrypoint: None()
actions: ['PlayAnimationNoWait', 'Activate', 'LookAtTalker', 'StopFindTarget', 'SetCollisionEnabled']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['MoveToCompassPoint', 'MoveToTargetActor', 'PlayAnimation', 'AimActor', 'AimCompassPoint', 'SetVisibility', 'PlayAnimationNoWait', 'LookAtTalker', 'PlayTailorOtherChannelNoWait', 'SetInterestIkEnabled', 'SetFacialExpression', 'ResetFacialExpression']
queries: []
params: None

Actor: EvCrackDekuKidnapped
entrypoint: None()
actions: ['PlayAnimation', 'SetCollisionEnabled', 'KeepAnimationAfterEvent', 'PlayMaterialAnimationNoWait']
queries: []
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'MoveToCompassPoint', 'PlayAnimationNoWait', 'MoveToBesideTargetActor', 'PlayAnimation', 'AimCompassPoint', 'SetVisibility', 'DisableAutoMovement', 'AimActor']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE', 'DisablePlaySeFromTailor', 'EnablePlaySeFromTailor', 'Prepare', 'PlayBGMEx', 'StopAllBGM', 'PlaySpecifyLabelRegionBGM']
queries: []
params: None

Actor: BoundaryGateSign
entrypoint: None()
actions: ['Activate']
queries: []
params: None

Actor: EvSDungeon034Door
entrypoint: None()
actions: ['PlayAnimation', 'Deactivate', 'SetCollisionEnabled', 'Activate']
queries: []
params: None

Actor: SpiderWeb[web0]
entrypoint: None()
actions: ['Deactivate']
queries: []
params: None

Actor: SpiderWeb[web1]
entrypoint: None()
actions: ['Deactivate']
queries: []
params: None

Actor: SpiderWeb[web2]
entrypoint: None()
actions: ['Deactivate']
queries: []
params: None

Actor: SpiderWeb[web3]
entrypoint: None()
actions: ['Deactivate']
queries: []
params: None

Actor: SpiderWeb[web4]
entrypoint: None()
actions: ['Deactivate']
queries: []
params: None

void DekuKidnapped() {
    Audio.DisablePlaySeFromTailor()

    call EvResetCommon.AllResetNowait()


    fork {
        EvCrackDekuKidnapped.PlayAnimation({'name': 'ev_DekuKidnapped_1st_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EvCrackDekuKidnapped.SetCollisionEnabled({'enable': False})
    } {
        GameControl.ForbidSave()
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Deku019.PlayAnimationNoWait({'name': 'make_cottoncandy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Deku005.PlayAnimationNoWait({'name': 'make_cottoncandy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku021.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EvSDungeon034Door.Deactivate()
    } {
        Deku013.SetComponentActive({'name': 'CottonCandy', 'active': True})
        Deku013.PlayAnimationNoWait({'name': 'eat_lp_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Deku019.SetInterestIkEnabled({'enable': False})
    } {
        Deku021.SetInterestIkEnabled({'enable': False})
    } {
        Deku002.SetInterestIkEnabled({'enable': False})
    } {
        Deku005.SetInterestIkEnabled({'enable': False})
    } {
        Deku013.SetInterestIkEnabled({'enable': False})
    }

    Fade.StartPreset({'preset': 'FadeInNormal'})
    Audio.EnablePlaySeFromTailor()

    fork {
        Zelda.MoveToTargetActor({'customSpeed': 0.0, 'speed': 0, 'actor': ActorIdentifier(name="Deku005"), 'distance': 13.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Zelda.PlayAnimationNoWait({'name': 'search', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.5})
    } {
        Timer.Wait({'time': 1.5})
        EvSDungeon034Door.Activate()
        EvSDungeon034Door.PlayAnimation({'name': 'close', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EvSDungeon034Door.SetCollisionEnabled({'enable': True})
    }

    Zelda.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku021"), 'actor2': ActorIdentifier(name="Deku019"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 0.5})
    Deku019.PlayAnimation({'blendFrame': 6, 'name': 'talk_lod', 'layer': 0, 'restart': False})
    Deku019.Talk({'message': 'scenario/StoryAreaF:DekuKidnapped_010', 'getAttention': False})
    Deku019.PlayAnimation({'name': 'make_cottoncandy', 'blendFrame': 6, 'layer': 0, 'restart': False})
    Timer.Wait({'time': 0.4000000059604645})
    Deku021.PlayAnimation({'blendFrame': 6, 'name': 'happy02', 'layer': 0, 'restart': False})
    Deku021.Talk({'message': 'scenario/StoryAreaF:DekuKidnapped_020', 'getAttention': False})
    Deku021.PlayAnimation({'blendFrame': 6, 'name': 'wait01', 'layer': 0, 'restart': False})

    fork {
        Timer.Wait({'time': 1.0})
        Camera.LookAt3ActorsCenterAsTalker({'weight2': 2.0, 'weight1': 4.0, 'actor1': ActorIdentifier(name="Deku002"), 'actor2': ActorIdentifier(name="Zelda"), 'actor3': ActorIdentifier(name="Deku013"), 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Zelda.MoveToTargetActor({'customSpeed': 0.0, 'speed': 0, 'actor': ActorIdentifier(name="Deku005"), 'distance': 10.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Zelda.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 1.0})
    Deku002.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.4000000059604645})
    Deku002.PlayAnimationNoWait({'name': 'surprised_st01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.30000001192092896})
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'actor': ActorIdentifier(name="Deku002"), 'duration': 0.4000000059604645, 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku002.Talk({'message': 'scenario/StoryAreaF:DekuKidnapped_030', 'getAttention': False})
    }

    Deku002.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku002.Talk({'message': 'scenario/StoryAreaF:DekuKidnapped_040', 'getAttention': False})
    Deku002.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.30000001192092896})
    Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 0.0, 'actor1': ActorIdentifier(name="Deku019"), 'actor2': ActorIdentifier(name="Deku021"), 'offsetZ': -1.0, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0})

    fork {
        EvCrackDekuKidnapped.PlayMaterialAnimationNoWait({'name': 'ev_DekuKidnapped_1st_to_2nd', 'layer': 0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_RD187_SAKEME1', 'volume': 1.0, 'pitch': 1.0})
    }

    EvCrackDekuKidnapped.PlayAnimation({'name': 'ev_DekuKidnapped_1st_to_2nd,ev_DekuKidnapped_2nd_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Zelda.AimActor({'duration': 0.4000000059604645, 'withoutTurn': False, 'actor': ActorIdentifier(name="Deku005"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku005"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.LookAt3ActorsCenterAsTalker({'distanceOffset': 0.0, 'actor1': ActorIdentifier(name="Deku002"), 'actor2': ActorIdentifier(name="Zelda"), 'actor3': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Zelda.SetInterestIkEnabled({'enable': False})
        Timer.Wait({'time': 0.4000000059604645})
        Zelda.PlayAnimationNoWait({'blendFrame': 3, 'name': 'ev_BossApear_st', 'layer': 0, 'restart': False})
        Zelda.SetFacialExpression({'expression': 'serious_few'})
    } {
        Partner[companion].PlayAnimationNoWait({'name': 'appeal02,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaF:DekuKidnapped_050', 'getAttention': False})
    }

    Timer.Wait({'time': 0.5})
    Deku002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku002.AimDegreeAngle({'angle': 160.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Deku002.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku002.Talk({'message': 'scenario/StoryAreaF:DekuKidnapped_060', 'getAttention': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku019"), 'actor2': ActorIdentifier(name="Deku021"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        EvCrackDekuKidnapped.PlayMaterialAnimationNoWait({'name': 'ev_DekuKidnapped_2nd_to_3rd', 'layer': 0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_RD187_SAKEME2', 'volume': 1.0, 'pitch': 1.0})
    }

    EvCrackDekuKidnapped.PlayAnimation({'name': 'ev_DekuKidnapped_2nd_to_3rd,ev_DekuKidnapped_3rd_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku019"), 'actor2': ActorIdentifier(name="Deku021"), 'offsetZ': 3.0, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0})

    fork {
        Deku002.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku002.Talk({'message': 'scenario/StoryAreaF:DekuKidnapped_070', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Deku013.PlayAnimationNoWait({'name': 'surprised_st_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Deku002.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku002.Talk({'message': 'scenario/StoryAreaF:DekuKidnapped_080', 'getAttention': False})
    Deku019.PlayAnimationNoWait({'blendFrame': 6, 'name': 'talk_lod', 'layer': 0, 'restart': False})
    Deku019.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Deku019.Talk({'message': 'scenario/StoryAreaF:DekuKidnapped_090', 'getAttention': False})
    Deku019.Talk({'message': 'scenario/StoryAreaF:DekuKidnapped_100', 'getAttention': False})
    Deku019.AimToInitialAngle({'duration': 0.30000001192092896, 'withoutTurn': False, 'immediateTurn': False})
    Deku019.PlayAnimationNoWait({'blendFrame': 6, 'name': 'make_cottoncandy', 'layer': 0, 'restart': False})
    Deku002.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku002.Talk({'message': 'scenario/StoryAreaF:DekuKidnapped_110', 'getAttention': False})
    Deku005.SetInterestIkEnabled({'enable': True})
    Deku005.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Deku005.PlayAnimationNoWait({'name': 'surprised_st_lod', 'blendFrame': 8, 'layer': 0, 'restart': False})
    Deku005.Talk({'message': 'scenario/StoryAreaF:DekuKidnapped_120', 'getAttention': False})
    Deku005.SetInterestIkEnabled({'enable': False})
    Deku005.PlayAnimationNoWait({'name': 'make_cottoncandy', 'blendFrame': 8, 'layer': 0, 'restart': False})
    Deku002.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Camera.LookAt2ActorsCenterAsTalker({'offsetZ': -1.0, 'actor2': ActorIdentifier(name="Deku021"), 'actor1': ActorIdentifier(name="Deku019"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0})
    Timer.Wait({'time': 1.0})

    fork {
        Deku005.SetInterestIkEnabled({'enable': True})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_RD187_SAKEME3', 'volume': 1.0, 'pitch': 1.0})
    }

    Deku005.PlayAnimationNoWait({'name': 'wait_cottoncandy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.699999988079071})
    Deku005.AimCompassPoint({'direction': 3, 'withoutTurn': False, 'duration': 0.20000000298023224, 'immediateTurn': False})
    Deku005.AimCompassPoint({'direction': 2, 'withoutTurn': True, 'duration': 0.30000001192092896, 'immediateTurn': False})
    Deku005.Talk({'message': 'scenario/StoryAreaF:DekuKidnapped_130', 'getAttention': False})
    Audio.PlaySpecifyLabelRegionBGM({'label': 'BGM_EV_HYRULE_CASTLE_UNREST'})

    fork {
        Timer.Wait({'time': 0.5})
        Deku005.PlayMaterialAnimationNoWait({'name': 'SinkingBoundary', 'layer': 0})
        Deku005.PlayTailorOtherChannelNoWait({'channel': 'SinkingCrack', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Timer.Wait({'time': 0.699999988079071})

        fork {
            Timer.Wait({'time': 1.5})
            Deku005.StopTailorOtherChannel({'channel': 'SinkingCrack', 'index': -1})
        } {
            Deku005.PlayAnimation({'name': 'make_cottoncandy_beswallowed', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Deku005.Destroy()
    } {
        Timer.Wait({'time': 0.699999988079071})
        Deku019.PlayMaterialAnimationNoWait({'name': 'SinkingBoundary', 'layer': 0})
        Deku019.PlayTailorOtherChannelNoWait({'channel': 'SinkingCrack', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Timer.Wait({'time': 0.699999988079071})

        fork {
            Timer.Wait({'time': 1.5})
            Deku019.StopTailorOtherChannel({'channel': 'SinkingCrack', 'index': -1})
        } {
            Deku019.PlayAnimation({'name': 'make_cottoncandy_beswallowed', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Deku019.Destroy()
    } {
        Timer.Wait({'time': 1.5})
        Deku021.PlayMaterialAnimationNoWait({'name': 'SinkingBoundary', 'layer': 0})
        Deku021.PlayTailorOtherChannelNoWait({'channel': 'SinkingCrack', 'restart': False, 'index': -1, 'stopOnSkipped': True})

        fork {
            Timer.Wait({'time': 3.3329999446868896})
            Deku021.StopTailorOtherChannel({'channel': 'SinkingCrack', 'index': -1})
        } {
            Deku021.PlayAnimation({'name': 'lookaround_beswallowed', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 0.5})
            Audio.PlayOneshotSystemSE({'label': 'VO_DKN_1_6_006_001', 'volume': 1.0, 'pitch': 1.0})
        }

        Deku021.Destroy()
    } {
        EvCrackDekuKidnapped.PlayMaterialAnimationNoWait({'name': 'ev_DekuKidnapped_3rd_to_4th', 'layer': 0})
        EvCrackDekuKidnapped.PlayAnimation({'name': 'ev_DekuKidnapped_3rd_to_4th,ev_DekuKidnapped_4th_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EvCrackDekuKidnapped.KeepAnimationAfterEvent()
    } {
        Deku013.SetComponentActive({'name': 'CottonCandy', 'active': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_RD187_SAKEME4', 'volume': 1.0, 'pitch': 1.0})
    }

    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku002"), 'actor2': ActorIdentifier(name="Deku013"), 'actor3': ActorIdentifier(name="Zelda"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        Deku002.PlayAnimationNoWait({'name': 'surprised_st01,wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku013.PlayAnimationNoWait({'name': 'surprised_st01,wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Deku002.Talk({'message': 'scenario/StoryAreaF:DekuKidnapped_140', 'getAttention': False})
    Timer.Wait({'time': 1.5})

    fork {
        Deku002.PlayAnimationNoWait({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Deku013.PlayAnimationNoWait({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku002.Talk({'message': 'scenario/StoryAreaF:DekuKidnapped_145', 'getAttention': False})
    }

    TecuumFly.LookAtTalker({'keep': False, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    TecuumFly.Activate()

    fork {
        TecuumFly.SetCollisionEnabled({'enable': False})
        TecuumFly.PlayAnimationNoWait({'name': 'appear', 'layer': 0, 'blendFrame': -1, 'restart': False})
        TecuumFly.StopFindTarget()
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_ENEMY_TECUUM_FLY_APPEAR', 'volume': 1.0, 'pitch': 1.0})
    } {
        Timer.Wait({'time': 3.5999999046325684})
    }

    TecuumFly.SetCollisionEnabled({'enable': True})
    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku002"), 'actor2': ActorIdentifier(name="Deku013"), 'actor3': ActorIdentifier(name="Zelda"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Deku002.PlayAnimation({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku002.MoveToTargetLinkedPoint({'speed': 1, 'index': 1, 'actor': ActorIdentifier(name="Deku002"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Deku002.SetComponentActive({'name': 'steeringComp', 'active': False})
        Deku002.PlayAnimation({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku002.SetInstanceVariableString({'name': 'idleAnim', 'value': 'frightened01'})
    } {
        Deku013.PlayAnimation({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku013.MoveToTargetLinkedPoint({'speed': 1, 'index': 2, 'actor': ActorIdentifier(name="Deku002"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Deku013.SetComponentActive({'name': 'steeringComp', 'active': False})
        Deku013.PlayAnimation({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku013.SetInstanceVariableString({'name': 'idleAnim', 'value': 'frightened01'})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Deku002.Talk({'message': 'scenario/StoryAreaF:DekuKidnapped_150', 'getAttention': False})
    }

    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku002"), 'actor2': ActorIdentifier(name="Deku013"), 'offsetY': 1.5, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetZ': 0.0})
    Deku002.Talk({'message': 'scenario/StoryAreaF:DekuKidnapped_160', 'getAttention': False})
    Timer.Wait({'time': 0.5})

    fork {
        Deku002.SkipAutoTurn()
    } {
        Deku013.SkipAutoTurn()
    } {
        SpiderWeb[web0].Deactivate()
    } {
        SpiderWeb[web1].Deactivate()
    } {
        SpiderWeb[web2].Deactivate()
    } {
        SpiderWeb[web3].Deactivate()
    } {
        SpiderWeb[web4].Deactivate()
    }

    Zelda.ResetFacialExpression()
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    EvCrackDekuKidnapped.SetCollisionEnabled({'enable': True})
    EventFlags.SetFlag({'symbol': 'EvF_DekuKidnapped_Start', 'value': True})
    QuestSystem.SetProgress({'symbol': 'Jungle:190251542', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void OpenAreaFBoundaryGate() {
    Audio.StopAllBGM({'duration': 2.0})
    Fade.StartParam({'time': 2.0, 'mode': 1, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0})
    Audio.DisablePlaySeFromTailor()
    Deku013.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku002.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GameControl.UnforbidSave()

    call EvResetCommon.AllReset()

    BoundaryGateSign.Activate()
    Deku002.WarpToActorLinkedPoint({'index': 4, 'actor': ActorIdentifier(name="Deku002"), 'offsetY': 0.0})
    Deku013.WarpToActorLinkedPoint({'offsetY': 0.0, 'index': 5, 'actor': ActorIdentifier(name="Deku002")})
    Deku002.SetComponentActive({'name': 'steeringComp', 'active': True})
    Deku013.SetComponentActive({'name': 'steeringComp', 'active': True})
    Deku013.PlayAnimationNoWait({'name': 'eat_lp_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku013.SetInterestIkEnabled({'enable': False})
    Deku002.SetInterestIkEnabled({'enable': False})
    Deku002.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Deku013.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Player.WarpToActor({'distance': 2.5, 'actor': ActorIdentifier(name="Deku002"), 'offsetX': 1.399999976158142, 'offsetY': 0.0})
    Deku013.SetComponentActive({'name': 'CottonCandy', 'active': True})
    Deku013.PlayAnimationNoWait({'name': 'eat_lp_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku002.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Partner[companion].MoveToBesideTargetActor({'offsetX': -1.0, 'offsetY': 1.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetZ': 0.5, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Deku002"), 'actor3': ActorIdentifier(name="Deku013"), 'weight1': 2.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Audio.EnablePlaySeFromTailor()
    Fade.StartParam({'time': 2.0, 'mode': 0, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0})
    Deku002.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.10000000149011612})
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="Deku002"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku002.Talk({'message': 'scenario/StoryAreaF:OpenAreaFBoundaryGate_010', 'getAttention': False})
    }

    Deku013.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Deku013.PlayAnimationNoWait({'name': 'talk_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.10000000149011612})
        Zelda.AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="Deku013"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku013"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku013.Talk({'message': 'scenario/StoryAreaF:OpenAreaFBoundaryGate_020', 'getAttention': False})
    }

    Deku013.PlayAnimationNoWait({'name': 'eat_lp_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku002.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.30000001192092896})
        Zelda.AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="Deku002"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku002.Talk({'message': 'scenario/StoryAreaF:OpenAreaFBoundaryGate_030', 'getAttention': False})
    } {
        Deku002.AimActor({'actor': ActorIdentifier(name="Deku013"), 'duration': 0.30000001192092896, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku002.PlayAnimationNoWait({'name': 'surprised_st01,angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Deku002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku002.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Deku002.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku002.Talk({'message': 'scenario/StoryAreaF:OpenAreaFBoundaryGate_040', 'getAttention': False})
    Timer.Wait({'time': 1.0})
    Deku002.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.20000000298023224})
    Deku002.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Deku002.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku002.Talk({'message': 'scenario/StoryAreaF:OpenAreaFBoundaryGate_041', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Deku013.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="Deku002"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku002.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:OpenAreaFBoundaryGate_050', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.PlayAnimation({'name': 'talk_hand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Deku002.PlayAnimationNoWait({'name': 'surprised_st01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku002.Talk({'message': 'scenario/StoryAreaF:OpenAreaFBoundaryGate_060', 'getAttention': False})
    Deku013.PlayAnimationNoWait({'name': 'surprised_st_lod,surprised_lp_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku002.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Zelda.AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="Deku013"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku013"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku013.Talk({'message': 'scenario/StoryAreaF:OpenAreaFBoundaryGate_070', 'getAttention': False})
    }

    Deku013.Talk({'message': 'scenario/StoryAreaF:OpenAreaFBoundaryGate_080', 'getAttention': False})

    fork {
        Deku002.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku013"), 'duration': 0.30000001192092896, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku002.PlayAnimationNoWait({'name': 'surprised_st01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku002.Talk({'message': 'scenario/StoryAreaF:OpenAreaFBoundaryGate_090', 'getAttention': False})
    }

    Deku002.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku013.SetInterestIkEnabled({'enable': True})
    Deku013.PlayAnimationNoWait({'name': 'wait_cottoncandy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku013.Talk({'message': 'scenario/StoryAreaF:OpenAreaFBoundaryGate_100', 'getAttention': False})
    Camera.LookAt3ActorsCenterAsTalker({'weight1': 2.0, 'weight3': 2.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Deku002"), 'actor3': ActorIdentifier(name="Deku013"), 'distanceOffset': -4.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 1.399999976158142})
    Deku013.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.399999976158142})
    Deku013.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.2000000476837158})

    fork {
        Camera.LookAt3ActorsCenterAsTalker({'weight1': 2.0, 'distanceOffset': 0.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Deku002"), 'actor3': ActorIdentifier(name="Deku013"), 'chaseRatio': 0.20000000298023224, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Deku002.PlayAnimationNoWait({'name': 'find,angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku002.Talk({'message': 'scenario/StoryAreaF:OpenAreaFBoundaryGate_110', 'getAttention': False})
    }

    Timer.Wait({'time': 0.5})
    Deku013.SetInterestIkEnabled({'enable': False})

    fork {
        Timer.Wait({'time': 0.5})
        Zelda.AimActor({'withoutTurn': False, 'duration': 0.4000000059604645, 'offsetY': -0.800000011920929, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaF:OpenAreaFBoundaryGate_120', 'getAttention': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku002.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku002.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Deku002.PlayAnimation({'name': 'thanks01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku002.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku002.Talk({'message': 'scenario/StoryAreaF:OpenAreaFBoundaryGate_130', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Deku002"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku002.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku013.PlayAnimationNoWait({'name': 'wait_cottoncandy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku013.SetInterestIkEnabled({'enable': True})
        Deku013.AimCompassPoint({'withoutTurn': True, 'direction': 0, 'duration': 0.4000000059604645, 'immediateTurn': False})
    } {
        Deku013.Talk({'message': 'scenario/StoryAreaF:OpenAreaFBoundaryGate_140', 'getAttention': False})
    }


    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'duration': 0.4000000059604645, 'withoutTurn': False, 'actor': ActorIdentifier(name="Deku013"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku013"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Deku002.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku013"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 2.0})
    Deku013.SetInterestIkEnabled({'enable': True})
    Deku013.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.4000000059604645})
    Deku013.SetInterestIkEnabled({'enable': False})

    fork {
        Deku013.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku013.PlayAnimationNoWait({'name': 'surprised_st_lod,surprised_lp_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Deku013.Talk({'message': 'scenario/StoryAreaF:OpenAreaFBoundaryGate_150', 'getAttention': False})

    fork {
        Deku002.AimCompassPoint({'withoutTurn': False, 'direction': 0, 'duration': 0.4000000059604645, 'immediateTurn': False})
        Deku002.SkipAutoTurn()
        Deku002.PlayAnimationNoWait({'blendFrame': 8, 'name': 'wait02', 'layer': 0, 'restart': False})
    } {
        Deku013.AimCompassPoint({'withoutTurn': False, 'direction': 0, 'duration': 0.4000000059604645, 'immediateTurn': False})
        Deku013.SkipAutoTurn()
        Deku013.PlayAnimationNoWait({'blendFrame': 8, 'name': 'eat_lp_lod', 'layer': 0, 'restart': False})
    }


    fork {
        Deku002.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait02'})
    } {
        Deku013.SetInstanceVariableString({'name': 'idleAnim', 'value': 'eat_lp_lod'})
    }

    QuestSystem.SetProgress({'symbol': 'Jungle:711665023', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void DekuNextTrend() {
    Audio.DisablePlaySeFromTailor()

    call EvResetCommon.AllResetNowait()


    fork {
        Deku019.SetInterestIkEnabled({'enable': False})
        Deku019.WarpToActor({'offsetX': -3.0, 'distance': -3.5, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 0.0})
        Deku019.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Deku019.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku021.SetInterestIkEnabled({'enable': False})
        Deku021.WarpToActor({'offsetX': -2.0, 'actor': ActorIdentifier(name="Zelda"), 'distance': -2.5, 'offsetY': 0.0})
        Deku021.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Deku021.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku002.SetInterestIkEnabled({'enable': False})
        Deku002.WarpToActor({'offsetX': -1.0, 'distance': -3.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 0.0})
        Deku002.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Deku002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku005.SetInterestIkEnabled({'enable': False})
        Deku005.WarpToActor({'offsetX': 1.0, 'distance': -3.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 0.0})
        Deku005.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Deku005.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku013.SetComponentActive({'name': 'DekuSmoothie', 'active': False})
        Deku013.SetInterestIkEnabled({'enable': False})
        Deku013.WarpToActor({'distance': -2.5, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': 2.5, 'offsetY': 0.0})
        Deku013.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Deku013.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    EventVariables.SetVariable({'symbol': 'Jungle:1409972566'})
    Partner[companion].DisableAutoMovement()
    Zelda.LookAtTalker({'offsetZ': -1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'keep': False})
    Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetY': 1.75, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': 0.0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Audio.Prepare({'label': 'BGM_DEKUNUT_TOWN', 'kind': 0, 'volume': 1.0})
    Timer.Wait({'time': 1.0})

    fork {
        Zelda.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        Zelda.PlayAnimation({'name': 'ev_WarpStart_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Zelda.PlayAnimation({'name': 'ev_WarpStart_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayAnimation({'name': 'ev_WarpStart_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].PlayAnimation({'name': 'ev_WarpStart_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Zelda.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    }

    Audio.EnablePlaySeFromTailor()

    call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

    Timer.Wait({'time': 0.5})
    Zelda.PlayTailorOtherChannelNoWait({'channel': 'WarpEnd_00', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    Timer.Wait({'time': 2.5})

    fork {
        Zelda.SetVisibility({'visible': True})
    } {
        Partner[companion].SetVisibility({'visible': True})
    }

    Timer.Wait({'time': 0.30000001192092896})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Audio.PlayOneshotSystemSE({'label': 'VO_DKN_1_4_006_001', 'volume': 1.0, 'pitch': 1.0})
        Deku019.PlayAnimation({'name': 'surprised_st01,wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Deku021.PlayAnimation({'name': 'surprised_st01,wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Deku002.PlayAnimation({'name': 'surprised_st01,wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Deku005.PlayAnimation({'name': 'surprised_st01,wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Audio.PlayOneshotSystemSE({'label': 'VO_DKN_1_5_006_003', 'volume': 1.0, 'pitch': 1.0})
        Deku013.PlayAnimation({'name': 'surprised_st01,wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        Zelda.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner[companion].MoveToBesideTargetActor({'offsetX': 1.0, 'offsetY': 1.0, 'offsetZ': 1.0, 'speed': 0, 'customSpeed': 0.0, 'actor': ActorIdentifier(name="Zelda"), 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].AimCompassPoint({'withoutTurn': False, 'direction': 0, 'duration': 0.4000000059604645, 'immediateTurn': False})
    Timer.Wait({'time': 0.4000000059604645})

    fork {
        Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Deku013"), 'actor3': ActorIdentifier(name="Deku019"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimCompassPoint({'direction': 2, 'withoutTurn': False, 'duration': 0.5, 'immediateTurn': False})
    } {
        Partner[companion].AimCompassPoint({'withoutTurn': False, 'direction': 2, 'duration': 0.4000000059604645, 'immediateTurn': False})
    }

    Timer.Wait({'time': 1.0})

    fork {
        Deku005.Talk({'message': 'scenario/StoryAreaF:DekuNextTrend_010', 'getAttention': False})
    } {
        Deku005.PlayAnimation({'name': 'talk_sit01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku005"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku005"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku005.PlayAnimationNoWait({'name': 'wait_sit01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku021.PlayAnimationNoWait({'name': 'no01,talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku021.Talk({'message': 'scenario/StoryAreaF:DekuNextTrend_020', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku021"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku021"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.0})
        Deku013.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Deku013.PlayAnimationNoWait({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Deku021.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.4000000059604645})

    fork {
        Deku002.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku002.Talk({'message': 'scenario/StoryAreaF:DekuNextTrend_030', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku002.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.699999988079071})
    Deku021.AimActor({'actor': ActorIdentifier(name="Deku013"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    Deku021.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku021.Talk({'message': 'scenario/StoryAreaF:DekuNextTrend_040', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku021"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku021"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Deku019.AimActor({'actor': ActorIdentifier(name="Deku013"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Deku002.AimActor({'actor': ActorIdentifier(name="Deku013"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Deku005.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku005.AimActor({'actor': ActorIdentifier(name="Deku013"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Zelda.AimActor({'actor': ActorIdentifier(name="Deku013"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku013"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 1.0})
    Deku013.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Audio.PlayBGMEx({'label': 'BGM_DEKUNUT_TOWN', 'volume': 0.8999999761581421, 'sec': 1.0, 'ignoreSkip': False})
    Deku013.Talk({'message': 'scenario/StoryAreaF:DekuNextTrend_050', 'getAttention': False})
    Timer.Wait({'time': 0.5})
    Deku005.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Deku005.PlayAnimationNoWait({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.10000000149011612})
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku005"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku005"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku005.Talk({'message': 'scenario/StoryAreaF:DekuNextTrend_060', 'getAttention': False})
    }

    Timer.Wait({'time': 1.0})

    fork {
        Deku013.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku013.Talk({'message': 'scenario/StoryAreaF:DekuNextTrend_070', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.5})
        Deku005.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku005.AimActor({'actor': ActorIdentifier(name="Deku013"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku013"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku013"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku021.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku021.Talk({'message': 'scenario/StoryAreaF:DekuNextTrend_080', 'getAttention': False})

    fork {
        Timer.Wait({'time': 0.6000000238418579})
        Deku019.PlayAnimation({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.699999988079071})
        Deku021.PlayAnimation({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Deku002.PlayAnimation({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.800000011920929})
        Deku005.PlayAnimation({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku013.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku013.Talk({'message': 'scenario/StoryAreaF:DekuNextTrend_090', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.800000011920929})
        Partner[companion].PlayAnimation({'name': 'appeal02,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku021.PlayAnimation({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku021.Talk({'message': 'scenario/StoryAreaF:DekuNextTrend_100', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Zelda.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku021"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku021"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Timer.Wait({'time': 0.30000001192092896})
        Deku019.AimDegreeAngle({'angle': 45.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Deku019.PlayAnimationNoWait({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Audio.PlayOneshotSystemSE({'label': 'VO_DKN_1_4_009_002', 'volume': 1.0, 'pitch': 1.0})
        Timer.Wait({'time': 1.5})
        Deku013.MoveToCompassPoint({'direction': 0, 'speed': 1, 'distance': 8.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Deku013.Deactivate()
    } {
        Deku021.AimDegreeAngle({'angle': -15.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Audio.PlayOneshotSystemSE({'label': 'VO_DKN_1_6_009_005', 'volume': 1.0, 'pitch': 1.0})
        Timer.Wait({'time': 1.5})
        Deku021.MoveToCompassPoint({'direction': 0, 'speed': 1, 'distance': 8.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Deku021.Deactivate()
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Deku002.PlayAnimationNoWait({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Audio.PlayOneshotSystemSE({'label': 'VO_DKN_1_3_009_002', 'volume': 1.0, 'pitch': 1.0})
        Timer.Wait({'time': 1.2999999523162842})
        Deku002.MoveToCompassPoint({'direction': 0, 'speed': 1, 'distance': 8.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Deku002.Deactivate()
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Deku005.AimDegreeAngle({'angle': -35.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Deku005.PlayAnimationNoWait({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.5})
        Deku019.MoveToCompassPoint({'direction': 0, 'speed': 1, 'distance': 8.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Deku019.Deactivate()
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Deku013.AimDegreeAngle({'angle': -25.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Deku013.PlayAnimationNoWait({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Audio.PlayOneshotSystemSE({'label': 'VO_DKN_1_5_009_001', 'volume': 1.0, 'pitch': 1.0})
        Timer.Wait({'time': 1.5})
        Deku005.MoveToCompassPoint({'direction': 0, 'speed': 1, 'distance': 8.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Deku005.Deactivate()
    } {
        Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.20000000298023224, 'withoutTurn': False, 'immediateTurn': False})
        Partner[companion].PlayAnimationNoWait({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.7999999523162842})
        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.5})
        Partner[companion].MoveToBesideTargetActor({'customSpeed': 0.0, 'speed': 1, 'offsetY': 1.0, 'withoutTurn': False, 'offsetX': 1.7000000476837158, 'actor': ActorIdentifier(name="Zelda"), 'offsetZ': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'method': 0})
        Partner[companion].AimCompassPoint({'withoutTurn': False, 'direction': 0, 'duration': 0.800000011920929, 'immediateTurn': False})
    } {
        Zelda.AimCompassPoint({'direction': 2, 'duration': 0.20000000298023224, 'withoutTurn': False, 'immediateTurn': False})
        Zelda.SetInterestIkEnabled({'enable': False})
        Zelda.PlayAnimationNoWait({'name': 'search', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 2.299999952316284})
        Zelda.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku005"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].MoveToBesideTargetActor({'offsetY': 1.0, 'offsetZ': 1.0, 'offsetX': 1.0, 'speed': 0, 'withoutTurn': False, 'actor': ActorIdentifier(name="Zelda"), 'customSpeed': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'method': 0})
    Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.800000011920929, 'withoutTurn': False, 'immediateTurn': False})
    Timer.Wait({'time': 2.0})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetZ': -1.0, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:DekuNextTrend_110', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})

    fork {
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'withoutTurn': True, 'duration': 0.699999988079071, 'offsetY': -0.5, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.5, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 2.0})

    fork {
        Zelda.AimCompassPoint({'direction': 0, 'withoutTurn': True, 'duration': 0.4000000059604645, 'immediateTurn': False})
    } {
        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].AimCompassPoint({'direction': 0, 'withoutTurn': False, 'duration': 0.4000000059604645, 'immediateTurn': False})
    }

    Audio.StopAllBGM({'duration': 3.0})

    fork {
        Zelda.SetInterestIkEnabled({'enable': False})
        Zelda.MoveToCompassPoint({'direction': 0, 'speed': 0, 'distance': 4.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Partner[companion].MoveToCompassPoint({'direction': 0, 'speed': 0, 'distance': 4.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Fade.StartParam({'mode': 1, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0, 'time': 1.0})
    }

    EventFlags.SetFlag({'symbol': 'EvF_DekuNextTrend', 'value': True})
    GameControl.RequestLevelJump({'level': 'Field', 'locator': 'EV_DekuNextTrend020', 'offsetX': 0.0, 'offsetZ': 0.0})
}
