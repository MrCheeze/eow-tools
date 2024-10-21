-------- EventFlow: NorthForest --------

Actor: Partner
entrypoint: None()
actions: ['AimToLocation', 'Talk', 'AimActor', 'PlayAnimation', 'PlayAnimationNoWait', 'MoveToLocation', 'MoveToBesideTargetActor', 'SetInterestIkEnabled']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['SetAllItemsVisibility', 'DestroyAllProjectiles', 'SetResetOverlappedActorsOnMoveDone', 'SetThroughObstaclesOnMove', 'ResetFloorAbyss']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['WarpToActor', 'SetInterestIkEnabled', 'AimActor', 'AimToLocation', 'MoveToTargetActor']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: MinisterRight
entrypoint: None()
actions: ['Talk', 'PlayAnimation', 'PlayAnimationNoWait', 'ResetFacialExpression', 'SetFacialExpression', 'SetDefaultFacialExpression', 'SetInstanceVariableString', 'SetInterestIkEnabled', 'AimToLocation', 'LookAtTalker', 'AimActor', 'Deactivate', 'TalkKeep', 'AimCompassPoint', 'MoveToCompassPoint', 'WarpToActor', 'ChangeSteeringAnimation', 'PlayOneshotSE', 'DestroyCollisionHitActors']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE', 'SetBGMVolume', 'StopAllBGM', 'Prepare', 'PlayBGMEx', 'PlayZoneBGM']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Reset', 'LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AbsorbAllPastedActors', 'MorphEnd', 'BreakBurrowable', 'ResetCarriedActor', 'StopBurning', 'PlayAnimation', 'GetOffVehicle', 'HideTimedAbilityEffect']
queries: ['CheckMorph']
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'WarpToActor', 'PlayAnimationNoWait', 'PlayAnimation', 'AimActor', 'DisableSyncRodBallFollow']
queries: []
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: EvHyruleSoldier007
entrypoint: None()
actions: ['SetFacialExpression', 'PlayAnimation', 'SetDefaultFacialExpression', 'SetInstanceVariableString', 'AimPlayer', 'PlayAnimationNoWait', 'Deactivate', 'MoveToCompassPoint', 'AimActor', 'WarpToActor', 'ResetAim', 'SetCollisionEnabled', 'SetGravityEnable', 'AimToLocation', 'DestroyCollisionHitActors']
queries: []
params: None

Actor: EvHyruleSoldier008
entrypoint: None()
actions: ['PlayAnimation', 'SetFacialExpression', 'SetDefaultFacialExpression', 'SetInstanceVariableString', 'AimPlayer', 'PlayAnimationNoWait', 'Deactivate', 'MoveToCompassPoint', 'AimActor', 'WarpToActor', 'ResetAim', 'SetCollisionEnabled', 'SetGravityEnable', 'AimToLocation', 'DestroyCollisionHitActors']
queries: []
params: None

Actor: Sync
entrypoint: None()
actions: ['SyncReset']
queries: []
params: None

Actor: StoneMonumentNorthForest
entrypoint: None()
actions: []
queries: []
params: None

void FoundLuberi() {

    call EvResetCommon.AllReset()

    Audio.StopAllBGM({'duration': 2.0})
    Audio.Prepare({'label': 'BGM_EV_COMMON2', 'kind': 0, 'volume': 1.0})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    MinisterRight.LookAtTalker({'chaseRatio': 0.10000002384185791, 'distanceOffset': 0.0, 'offsetY': -0.5, 'offsetX': -2.25, 'duration': 0.4000000059604645, 'offsetZ': 0.0, 'keep': False})
    MinisterRight.SetInterestIkEnabled({'enable': False})
    MinisterRight.SetFacialExpression({'expression': 'sleep'})
    Zelda.WarpToActor({'actor': ActorIdentifier(name="MinisterRight"), 'distance': 1.5, 'offsetX': -1.75, 'offsetY': 0.0})
    Zelda.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].WarpToActor({'offsetY': 1.0, 'offsetX': -1.0, 'actor': ActorIdentifier(name="Zelda"), 'distance': 0.0})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    Audio.PlayBGMEx({'label': 'BGM_EV_COMMON2', 'volume': 1.0, 'sec': 1.4600000381469727, 'ignoreSkip': False})
    Timer.Wait({'time': 0.5})
    Timer.Wait({'time': 1.0})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaH:FoundMinisterRight_010', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterRight.SetDefaultFacialExpression({'expression': 'normal'})
    MinisterRight.ResetFacialExpression()
    Timer.Wait({'time': 0.5})

    fork {
        MinisterRight.PlayAnimation({'name': 'ev_down_ed', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Zelda.MoveToTargetActor({'distance': 2.0, 'offsetX': -2.25, 'actor': ActorIdentifier(name="MinisterRight"), 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetY': 0.0})
    }


    fork {
        MinisterRight.SetFacialExpression({'expression': 'sad'})
        MinisterRight.PlayAnimation({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

        fork {
            MinisterRight.Talk({'message': 'scenario/StoryAreaH:FoundMinisterRight_020', 'getAttention': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Zelda.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    } {
        EvHyruleSoldier007.SetFacialExpression({'expression': 'normal'})

        fork {
            EvHyruleSoldier007.PlayAnimation({'name': 'kneel_lp', 'blendFrame': 45, 'layer': 0, 'restart': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Zelda.SetInterestIkEnabled({'enable': True})
            Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="EvHyruleSoldier007"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Timer.Wait({'time': 1.0})
        EvHyruleSoldier007.PlayAnimation({'blendFrame': 120, 'name': 'kneel_ed,wait', 'layer': 0, 'restart': False})
        EvHyruleSoldier007.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        EvHyruleSoldier008.SetFacialExpression({'expression': 'normal'})
        EvHyruleSoldier008.PlayAnimation({'name': 'kneel_lp', 'blendFrame': 45, 'layer': 0, 'restart': False})
        Timer.Wait({'time': 1.0})
        EvHyruleSoldier008.PlayAnimation({'blendFrame': 120, 'name': 'kneel_ed,wait', 'layer': 0, 'restart': False})
        EvHyruleSoldier008.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterRight.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    call GeneralSequence.ZeldaTalkMotion()

    Timer.Wait({'time': 0.5})

    fork {
        MinisterRight.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.SetFacialExpression({'expression': 'surprise'})
        MinisterRight.Talk({'message': 'scenario/StoryAreaH:FoundMinisterRight_040', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        EvHyruleSoldier007.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EvHyruleSoldier007.SetFacialExpression({'expression': 'surprise'})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        EvHyruleSoldier008.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EvHyruleSoldier008.SetFacialExpression({'expression': 'surprise'})
    }

    Timer.Wait({'time': 0.5})

    fork {
        MinisterRight.PlayAnimationNoWait({'name': 'ev_angry_st,ev_angry_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.SetFacialExpression({'expression': 'angry'})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        EvHyruleSoldier007.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EvHyruleSoldier007.SetFacialExpression({'expression': 'normal'})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        EvHyruleSoldier008.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EvHyruleSoldier008.SetFacialExpression({'expression': 'normal'})
    }

    MinisterRight.Talk({'message': 'scenario/StoryAreaH:FoundMinisterRight_050', 'getAttention': False})
    Timer.Wait({'time': 0.5})
    MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterRight.ResetFacialExpression()
    Timer.Wait({'time': 1.0})
    MinisterRight.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterRight.Talk({'message': 'scenario/StoryAreaH:FoundMinisterRight_060', 'getAttention': False})
    Timer.Wait({'time': 0.5})

    fork {
        MinisterRight.Talk({'message': 'scenario/StoryAreaH:FoundMinisterRight_060_02', 'getAttention': False})
    } {
        MinisterRight.AimToLocation({'location': 'StoneMonument', 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})

        fork {
            Zelda.AimToLocation({'location': 'StoneMonument', 'withoutTurn': True, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner.AimToLocation({'location': 'StoneMonument', 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    Timer.Wait({'time': 0.5})

    fork {
        MinisterRight.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Zelda.AimToLocation({'location': 'StoneMonument', 'withoutTurn': False, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Partner[companion].PlayAnimation({'name': 'lookaround02,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_PARTNER_LOOKAROUND2', 'volume': 1.0, 'pitch': 1.0})
    }


    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaH:FoundMinisterRight_070', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'withoutTurn': True, 'offsetY': -0.6000000238418579, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetZ': 0.20000000298023224, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        MinisterRight.SetDefaultFacialExpression({'expression': 'normal'})
        MinisterRight.SetInstanceVariableString({'name': 'idleAnim', 'value': 'think'})
    } {
        EvHyruleSoldier007.SetDefaultFacialExpression({'expression': 'normal'})
        EvHyruleSoldier007.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait'})
    } {
        EvHyruleSoldier008.SetDefaultFacialExpression({'expression': 'normal'})
        EvHyruleSoldier008.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait'})
    }

    Timer.Wait({'time': 1.0})
    Audio.StopAllBGM({'duration': 2.0})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    MinisterRight.Deactivate()
    EvHyruleSoldier007.Deactivate()
    EvHyruleSoldier008.Deactivate()
    QuestSystem.SetProgress({'symbol': 'LastDungeon:721740190', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventVariables.SetVariable({'symbol': 'LastDungeon:721740190'})
    Timer.Wait({'time': 1.0})
}

void SolvedGimmick() {

    call _AllResetnorthforest({'disappearHorse': True})

    Partner.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterRight.WarpToActor({'offsetX': 2.5, 'actor': ActorIdentifier(name="StoneMonumentNorthForest"), 'distance': 9.25, 'offsetY': 0.0})

    fork {
        EvHyruleSoldier007.WarpToActor({'distance': -1.0, 'actor': ActorIdentifier(name="MinisterRight"), 'offsetX': -1.25, 'offsetY': 0.0})
        EvHyruleSoldier007.SetGravityEnable({'enable': False})
        EvHyruleSoldier007.SetCollisionEnabled({'enable': False})
    } {
        EvHyruleSoldier008.WarpToActor({'distance': -1.0, 'actor': ActorIdentifier(name="MinisterRight"), 'offsetX': 1.25, 'offsetY': 0.0})
        EvHyruleSoldier008.SetGravityEnable({'enable': False})
        EvHyruleSoldier008.SetCollisionEnabled({'enable': False})
    }


    fork {
        Partner.MoveToLocation({'speed': 0, 'location': 'StoneMonument', 'offsetY': 1.0, 'distance': -2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0})
        Partner.PlayAnimationNoWait({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.20000000298023224})
    } {
        Timer.Wait({'time': 0.5})
        Audio.SetBGMVolume({'duration': 3.5, 'volume': 1.0})
    }


    fork {
        MinisterRight.MoveToCompassPoint({'direction': 2, 'speed': 1, 'distance': 8.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        MinisterRight.DestroyCollisionHitActors({'eventReset': False})
        MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="MinisterRight"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

        fork {
            MinisterRight.PlayAnimation({'name': 'surprised_st', 'blendFrame': -1, 'layer': 0, 'restart': False})
            MinisterRight.PlayAnimationNoWait({'name': 'surprised', 'blendFrame': -1, 'layer': 0, 'restart': False})
        } {
            Zelda.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            MinisterRight.Talk({'message': 'scenario/StoryAreaH:SolvedGimmick_010', 'getAttention': False})
        } {
            MinisterRight.AimToLocation({'location': 'StoneMonument', 'offsetZ': -5.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'immediateTurn': False})
        }

    } {

        fork {
            Timer.Wait({'time': 0.4000000059604645})
            EvHyruleSoldier007.SetGravityEnable({'enable': False})
            EvHyruleSoldier007.MoveToCompassPoint({'direction': 2, 'speed': 1, 'distance': 3.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
            EvHyruleSoldier007.DestroyCollisionHitActors({'eventReset': False})
            EvHyruleSoldier007.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            EvHyruleSoldier007.AimToLocation({'location': 'StoneMonument', 'offsetZ': -5.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.5})
            EvHyruleSoldier008.SetGravityEnable({'enable': False})
            EvHyruleSoldier008.MoveToCompassPoint({'direction': 2, 'speed': 1, 'distance': 4.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
            EvHyruleSoldier008.DestroyCollisionHitActors({'eventReset': False})
            EvHyruleSoldier008.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            EvHyruleSoldier008.AimToLocation({'location': 'StoneMonument', 'offsetZ': -5.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'immediateTurn': False})
        }

    }

    Timer.Wait({'time': 1.0})
    MinisterRight.PlayAnimationNoWait({'blendFrame': -1, 'name': 'wait', 'layer': 0, 'restart': False})
    MinisterRight.AimActor({'withoutTurn': False, 'offsetX': -0.5, 'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        MinisterRight.Talk({'message': 'scenario/StoryAreaH:SolvedGimmick_020', 'getAttention': False})
    } {
        MinisterRight.PlayAnimation({'name': 'yes,wait', 'blendFrame': -1, 'layer': 0, 'restart': False})
    } {
        Partner.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            EvHyruleSoldier007.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            EvHyruleSoldier007.PlayAnimation({'name': 'salute,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            EvHyruleSoldier008.AimActor({'actor': ActorIdentifier(name="Zelda"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            EvHyruleSoldier008.PlayAnimation({'name': 'salute,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }

    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Partner.MoveToBesideTargetActor({'speed': 0, 'offsetY': 1.0, 'offsetZ': -1.0, 'offsetX': -2.0, 'actor': ActorIdentifier(name="MinisterRight"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})

        fork {
            Partner.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.5})
        }

    } {
        Partner.PlayAnimationNoWait({'name': 'notice02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            MinisterRight.SetFacialExpression({'expression': 'surprise'})
            MinisterRight.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MinisterRight.SetInterestIkEnabled({'enable': True})
            MinisterRight.AimActor({'offsetY': -0.6000000238418579, 'offsetX': -0.5, 'offsetZ': 0.5, 'actor': ActorIdentifier(name="Partner"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'immediateTurn': False})
        }

        Timer.Wait({'time': 0.30000001192092896})

        fork {
            EvHyruleSoldier007.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            EvHyruleSoldier008.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } {
        Partner.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner.Talk({'message': 'scenario/StoryAreaH:SolvedGimmick_030', 'getAttention': False})
    }

    Timer.Wait({'time': 0.20000000298023224})
    Partner.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        MinisterRight.Talk({'message': 'scenario/StoryAreaH:SolvedGimmick_040', 'getAttention': False})
    } {
        MinisterRight.PlayAnimation({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'sad'})
    } {
        EvHyruleSoldier007.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EvHyruleSoldier008.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        Partner.Talk({'message': 'scenario/StoryAreaH:SolvedGimmick_050', 'getAttention': False})
    } {
        Partner.PlayAnimation({'name': 'yes02,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.20000000298023224})

    fork {
        MinisterRight.Talk({'message': 'scenario/StoryAreaH:SolvedGimmick_060', 'getAttention': False})
    } {
        MinisterRight.PlayAnimation({'name': 'surprised_st', 'blendFrame': -1, 'layer': 0, 'restart': False})
        MinisterRight.PlayAnimationNoWait({'name': 'surprised', 'blendFrame': -1, 'layer': 0, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'surprise'})
    }

    Timer.Wait({'time': 1.0})

    fork {
        MinisterRight.TalkKeep({'message': 'scenario/StoryAreaH:SolvedGimmick_070', 'getAttention': False})
    } {
        MinisterRight.PlayAnimation({'blendFrame': -1, 'name': 'yes', 'layer': 0, 'restart': False})
        MinisterRight.PlayAnimationNoWait({'blendFrame': -1, 'name': 'wait', 'layer': 0, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'normal'})
    }

    Timer.Wait({'time': 0.20000000298023224})
    MinisterRight.SetInterestIkEnabled({'enable': False})

    fork {
        MinisterRight.Talk({'message': 'scenario/StoryAreaH:SolvedGimmick_080', 'getAttention': False})
    } {
        MinisterRight.PlayAnimation({'name': 'salute,wait', 'blendFrame': -1, 'layer': 0, 'restart': False})
    } {
        MinisterRight.ResetFacialExpression()
    }

    Timer.Wait({'time': 0.5})

    fork {
        MinisterRight.Talk({'message': 'scenario/StoryAreaH:SolvedGimmick_090', 'getAttention': False})
    } {
        MinisterRight.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.20000000298023224})
        MinisterRight.PlayAnimation({'blendFrame': -1, 'name': 'yes', 'layer': 0, 'restart': False})
        MinisterRight.PlayAnimationNoWait({'blendFrame': -1, 'name': 'wait', 'layer': 0, 'restart': False})
    }

    Timer.Wait({'time': 0.20000000298023224})
    MinisterRight.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        MinisterRight.Talk({'message': 'scenario/StoryAreaH:SolvedGimmick_100', 'getAttention': False})
    } {
        MinisterRight.PlayAnimation({'name': 'yes', 'blendFrame': -1, 'layer': 0, 'restart': False})
        MinisterRight.PlayAnimationNoWait({'name': 'wait', 'blendFrame': -1, 'layer': 0, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            Zelda.SetInterestIkEnabled({'enable': True})
            Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner.SetInterestIkEnabled({'enable': True})
            Partner.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }


    fork {
        EvHyruleSoldier007.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        EvHyruleSoldier007.PlayAnimation({'name': 'salute', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EvHyruleSoldier008.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        EvHyruleSoldier008.PlayAnimation({'name': 'salute', 'blendFrame': -1, 'layer': 0, 'restart': False})
    }

    Timer.Wait({'time': 0.20000000298023224})

    fork {
        MinisterRight.ChangeSteeringAnimation({'run': 'ev_move_fast_powerful', 'idle': 'wait', 'walk': 'move', 'layer': 0})

        fork {
            MinisterRight.PlayOneshotSE({'label': 'VO_UGI_009_1', 'volume': 1.0, 'pitch': 1.0})
        } {
            MinisterRight.MoveToCompassPoint({'direction': 0, 'distance': 10.0, 'speed': 1, 'customSpeed': 10.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        }

    } {

        fork {
            EvHyruleSoldier007.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            EvHyruleSoldier008.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            EvHyruleSoldier007.SetFacialExpression({'expression': 'surprise'})
        } {
            EvHyruleSoldier008.SetFacialExpression({'expression': 'surprise'})
        }

        Timer.Wait({'time': 1.0})

        fork {
            Timer.Wait({'time': 0.20000000298023224})
            EvHyruleSoldier007.ResetAim()
            EvHyruleSoldier007.MoveToCompassPoint({'direction': 0, 'distance': 10.0, 'speed': 1, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        } {
            EvHyruleSoldier008.ResetAim()
            EvHyruleSoldier008.MoveToCompassPoint({'direction': 0, 'distance': 10.0, 'speed': 1, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        }

    }

    Partner.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.20000000298023224})
    Partner.AimActor({'actor': ActorIdentifier(name="Zelda"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.20000000298023224})
    Zelda.AimActor({'offsetY': -0.6000000238418579, 'actor': ActorIdentifier(name="Partner"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner.SetInterestIkEnabled({'enable': False})

    fork {
        Partner.PlayAnimation({'name': 'yes02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner.Talk({'message': 'scenario/StoryAreaH:SolvedGimmick_110', 'getAttention': False})
    }

    QuestSystem.SetProgress({'symbol': 'LastDungeon:3401986107', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void FoundLuberi_end() {
    Fade.StartPreset({'preset': 'FadeInNormal'})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    EventVariables.SetVariable({'symbol': 'LastDungeon:3401986107'})
    Audio.PlayZoneBGM({'stopbgm': False})
}

void _AllResetnorthforest() {

    fork {
        Player.AbsorbAllPastedActors({'isExcludeLocked': True, 'isExcludeKarakuri': False})
    } {
        Sync.SyncReset()
    } {
        if !Player.CheckMorph({'morphKind': 0}) {
            Player.MorphEnd()
        }
    } {
        Player.BreakBurrowable()
    } {
        Player.ResetCarriedActor()
    } {
        Player.StopBurning()
    } {
        Player.GetOffVehicle({'disappear': 'disappearHorse', 'method': 0, 'anim': 'get_off'})
    } {
        Partner[companion].DisableSyncRodBallFollow()
    } {
        GameControl.SetAllItemsVisibility({'visible': False})
    } {
        GameControl.DestroyAllProjectiles()
    } {
        GameControl.SetResetOverlappedActorsOnMoveDone({'enable': True})
        GameControl.SetThroughObstaclesOnMove({'enable': True})
    } {
        GameControl.ResetFloorAbyss()
    } {
        Player.HideTimedAbilityEffect()
    }

    Timer.Wait({'time': 0.10000000149011612})
    Player.PlayAnimation({'name': '', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.30000001192092896})
    Player.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
}
