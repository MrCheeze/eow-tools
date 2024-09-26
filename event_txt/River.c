-------- EventFlow: River --------

Actor: Dialog
entrypoint: None()
actions: ['ShowTalker', 'Show']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: ZoraSeaChief
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'SetFacialExpression', 'AimActor', 'PlayAnimation', 'SetTalkerName', 'PlayAnimationEx', 'SetComponentActive', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel', 'Deactivate', 'ChangeSteeringAnimation', 'MoveToCompassPoint', 'PlayOneshotSE', 'SetInterestIkEnabled', 'LookAtTalker', 'ResetSteeringAnimation', 'AimCompassPoint', 'AimDegreeAngle', 'MoveToBesideTargetActor', 'MoveToLinkedPoint']
queries: []
params: None

Actor: ZoraRiverChief
entrypoint: None()
actions: ['Talk', 'SetFacialExpression', 'AimActor', 'SetTalkerName', 'PlayAnimationNoWait', 'PlayAnimation', 'SetComponentActive', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel', 'ResetFacialExpression', 'Deactivate', 'ChangeSteeringAnimation', 'MoveToCompassPoint', 'PlayOneshotSE', 'SetInterestIkEnabled', 'LookAtTalker', 'ResetSteeringAnimation', 'AimCompassPoint', 'MoveToBesideTargetActor', 'AimDegreeAngle', 'MoveToLinkedPoint']
queries: []
params: None

Actor: ZoraSea002
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'AimActor', 'MoveToBesideTargetActor', 'PlayAnimation', 'Deactivate', 'ChangeSteeringAnimation', 'SetFacialExpression', 'SetGravityEnable', 'SetCollisionEnabled', 'SetInterestIkEnabled', 'AimCompassPoint']
queries: []
params: None

Actor: ZoraRiver002
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'AimActor', 'MoveToBesideTargetActor', 'PlayAnimation', 'Deactivate', 'ChangeSteeringAnimation', 'SetFacialExpression', 'SetGravityEnable', 'SetCollisionEnabled', 'SetInterestIkEnabled', 'AimCompassPoint', 'SetTalkerName']
queries: []
params: None

Actor: ZoraRiver004
entrypoint: None()
actions: ['SetComponentActive', 'AimActorLinkedPoint', 'SetFacialExpression', 'AimToInitialAngle', 'SetInterestIkEnabled', 'SetDefaultFacialExpression', 'SetInstanceVariableString', 'PlayAnimationNoWait']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump', 'ForbidLaunchApplet', 'UnforbidLaunchApplet']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress', 'Close', 'Open']
queries: ['CheckProgress']
params: None

Actor: Partner
entrypoint: None()
actions: ['MoveToTargetActor']
queries: []
params: None

Actor: ZoraRiver000
entrypoint: None()
actions: ['Talk', 'MoveToCompassPoint', 'WarpToActorLinkedPoint', 'SetInterestIkEnabled', 'PlayAnimationNoWait', 'PlayAnimation', 'SetFacialExpression', 'AimActor']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: []
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'LerpDofSettings', 'Quake', 'LookAt3ActorsCenterAsTalker', 'RelativeMoveToWithTimeout']
queries: []
params: None

Actor: ZoraRiver001
entrypoint: None()
actions: ['AimActorLinkedPoint', 'PlayAnimationNoWait', 'PlayAnimation', 'SetFacialExpression', 'AimToInitialAngle', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Jabujabu
entrypoint: None()
actions: ['Activate', 'Deactivate', 'PlayAnimation', 'LookAtTalker', 'SetGravityEnable', 'SetCollisionEnabled', 'PlayAnimationNoWait', 'SetCullMode', 'SetCastShadow']
queries: []
params: None

Actor: ZoraSea000
entrypoint: None()
actions: ['Talk', 'MoveToCompassPoint', 'WarpToActorLinkedPoint', 'SetInterestIkEnabled', 'PlayAnimationNoWait', 'KeepAnimationAfterEvent', 'SetFacialExpression', 'AimActor']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['SetShadowDecalEnable', 'AimActor', 'PlayAnimation', 'SetEquipmentVisibility', 'AimCompassPoint', 'AimActorLinkedPoint']
queries: []
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: ZoraSeaC000
entrypoint: None()
actions: ['AimCompassPoint']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['InvokeTimeline', 'Yield_', 'PreloadTimeline']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Deactivate', 'Talk', 'PlayAnimation', 'AimActor', 'WarpToActor', 'AimCompassPoint', 'AimPlayer', 'MoveToTargetActor', 'MoveToBesideTargetActor', 'PlayAnimationNoWait', 'AimActorLinkedPoint', 'DisableAutoMovement', 'LookAtTalker']
queries: []
params: None

Actor: MinisterRight
entrypoint: None()
actions: ['Talk', 'Activate', 'MoveToCompassPoint', 'Deactivate', 'PlayAnimationNoWait', 'MoveToBesideTargetActor', 'SetTalkerName', 'SetFacialExpression', 'ResetFacialExpression', 'AimActor', 'SetInterestIkEnabled', 'AimCompassPoint', 'PlayAnimationEx', 'ChangeSteeringAnimation', 'ResetSteeringAnimation']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'AimCompassPoint', 'SetInterestIkEnabled', 'MoveToBesideTargetActor', 'ChangeSteeringAnimation', 'ResetSteeringAnimation', 'AimActorLinkedPoint', 'WarpToActorLinkedPoint', 'LookAtTalker', 'PlayAnimationNoWait']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayBGM', 'PlayOneshotSystemSE', 'Prepare', 'StopAllBGM', 'DisableRegionBgmAutoPlay', 'StopRegionBgm', 'EnableRegionBgmAutoPlay', 'PlayZoneBGM', 'StopSE', 'MuteOffBGM', 'MuteOnBGM']
queries: []
params: None

Actor: ZoraRiverC000
entrypoint: None()
actions: ['AimActorLinkedPoint', 'PlayAnimationNoWait', 'PlayAnimation', 'SetFacialExpression', 'AimToInitialAngle', 'SetInterestIkEnabled', 'SetInstanceVariableString', 'SetDefaultFacialExpression']
queries: []
params: None

Actor: ZoraRiver006
entrypoint: None()
actions: ['AimActorLinkedPoint', 'PlayAnimationNoWait', 'PlayAnimation', 'SetFacialExpression', 'AimToInitialAngle', 'SetInterestIkEnabled', 'SetDefaultFacialExpression', 'SetInstanceVariableString']
queries: []
params: None

void ZorasChiefsIntroduction() {
    Event201:
    QuestSystem.SetProgress({'symbol': 'Coast_River:276104939', 'isShowTelopInEvent': False, 'isFrontFade': False})

    call EvResetCommon.AllReset()

    Audio.StopRegionBgm({'fadeSec': 2.0})
    Audio.DisableRegionBgmAutoPlay()
    Jabujabu.Activate()
    Jabujabu.SetCullMode({'enabled': True, 'cullMode': 0})
    Jabujabu.SetCastShadow({'cast': False})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})

    fork {
        Player.WarpToActorLinkedPoint({'index': 4, 'actor': ActorIdentifier(name="Area"), 'offsetY': 0.0})
        Zelda.AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
        Player.SetInterestIkEnabled({'enable': True})
        Player.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Partner[companion].WarpToActor({'distance': 0.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 0.5, 'offsetX': 1.2000000476837158})
        Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    } {
        ZoraRiverChief.SetInterestIkEnabled({'enable': False})
        ZoraRiverChief.SetFacialExpression({'expression': 'angry'})
        ZoraRiverChief.PlayAnimationNoWait({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.SetInterestIkEnabled({'enable': False})
        ZoraSeaChief.SetFacialExpression({'expression': 'angry'})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'angry_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea002.SetInterestIkEnabled({'enable': False})
        ZoraSea000.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="ZoraSea000"), 'index': 0, 'offsetY': 0.0})
        ZoraSea000.SetInterestIkEnabled({'enable': False})
    } {
        ZoraRiver002.SetInterestIkEnabled({'enable': False})
        ZoraRiver000.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="ZoraRiver000"), 'index': 0, 'offsetY': 0.0})
        ZoraRiver000.SetInterestIkEnabled({'enable': False})
    }

    Camera.LookAt2ActorsCenterAsTalker({'duration': 0.0, 'chaseRatio': 1.0, 'distanceOffset': 2.799999952316284, 'offsetY': 0.0, 'offsetZ': 1.2999999523162842, 'actor1': ActorIdentifier(name="ZoraSeaChief"), 'actor2': ActorIdentifier(name="ZoraRiverChief"), 'weight1': 1.0, 'weight2': 1.0, 'offsetX': 0.0})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})

    fork {

        call _pd064_ZoraRivChief()

    } {

        call ZorasTurnsToRiverChief()

    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'strong_anger', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_010', 'getAttention': False})
    }

    ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {

        call _pd064_ZoraSeaChief()

    } {

        call ZorasTurnsToSeaChief()

    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'angry'})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'angry_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_025', 'getAttention': False})
    }


    fork {

        call _pd064_ZoraRivChief()

    } {

        call ZorasTurnsToRiverChief()

    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_030', 'getAttention': False})
    }

    ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {

        call _pd064_ZoraRiv002()

    } {
        ZoraRiver002.SetFacialExpression({'expression': 'sad'})
        ZoraRiver002.PlayAnimationNoWait({'name': 'frightened02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver002.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_040', 'getAttention': False})
    }


    fork {

        call _pd064_ZoraSea002()

    } {
        ZoraSea002.SetFacialExpression({'expression': 'sad'})
        ZoraSea002.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSea002.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_050', 'getAttention': False})
    } {
        ZoraSea002.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {

        call _pd064_ZoraSeaChief()

    } {

        call ZorasTurnsToSeaChief()

    } {
        ZoraRiver002.SetFacialExpression({'expression': 'sad'})
        ZoraRiver002.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'angry'})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'angry_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_060', 'getAttention': False})
    }


    fork {

        call _pd064_ZoraRivChief()

    } {

        call ZorasTurnsToRiverChief()

    } {
        ZoraRiverChief.SetFacialExpression({'expression': 'surprise'})
        ZoraRiverChief.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_070', 'getAttention': False})
        ZoraRiverChief.SetFacialExpression({'expression': 'angry'})
        ZoraRiverChief.PlayAnimationNoWait({'name': 'strong_anger', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_070_02', 'getAttention': False})
    }


    fork {

        call _pd064_ZoraSeaChief()

    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'surprise'})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_075', 'getAttention': False})
    }

    ZoraRiverChief.SetTalkerName({'message': 'glossary/Character:ZoraSeaChiefZoraRiverChief', 'keep': False})
    ZoraRiverChief.SetFacialExpression({'expression': 'angry'})

    fork {

        fork {
            Zelda.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': True, 'immediateTurn': False})
        } {
            Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        } {
            ZoraSea002.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    } {

        fork {

            fork {
                ZoraRiverChief.SetFacialExpression({'expression': 'rage'})
                ZoraRiverChief.PlayAnimationNoWait({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                ZoraSeaChief.SetFacialExpression({'expression': 'angry'})
                ZoraSeaChief.PlayAnimationNoWait({'name': 'sad_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

        } {
            Timer.Wait({'time': 0.20000000298023224})
            Audio.PlayOneshotSystemSE({'label': 'VO_ZORA_SEA_CHIEF_004_4', 'volume': 1.0, 'pitch': 1.0})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_ZORA_RIVER_CHIEF_004_2', 'volume': 1.0, 'pitch': 1.0})
        } {
            ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_080', 'getAttention': False})
        }

    }

    ZoraRiverChief.SetTalkerName({'message': 'glossary/Character:ZoraRiverChief', 'keep': False})
    Timer.Wait({'time': 1.2000000476837158})

    fork {

        call _pd064_ZoraSeaChief()

    } {

        call ZorasTurnsToSeaChief()

    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'trollface_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_090', 'getAttention': False})
    }


    fork {

        call _pd064_ZoraRivChief()

    } {

        call ZorasTurnsToRiverChief()

    } {
        ZoraRiverChief.SetFacialExpression({'expression': 'angry'})
        ZoraRiverChief.PlayAnimationNoWait({'name': 'trollface_st,trollface_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_100', 'getAttention': False})
    }

    ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {

        fork {
            Timer.Wait({'time': 1.2000000476837158})
            ZoraRiver002.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            ZoraSea002.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            ZoraSea002.SetFacialExpression({'expression': 'surprise'})
            ZoraSea002.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            ZoraSea002.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_110', 'getAttention': False})
        }

        ZoraSea002.MoveToBesideTargetActor({'speed': 0, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'offsetZ': -1.2999999523162842, 'offsetX': 1.7999999523162842, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        ZoraSea002.SetFacialExpression({'expression': 'sad'})
        ZoraSea002.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSea002.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraSea002.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_110_02', 'getAttention': False})
    } {

        call _pd064_ZoraSea002()

    }

    ZoraSea002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {

        call _pd064_ZoraRiv002()

    } {
        Timer.Wait({'time': 0.6000000238418579})
        ZoraSea002.SetFacialExpression({'expression': 'sad'})
        ZoraSea002.AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiver002.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiver002.SetFacialExpression({'expression': 'sad'})
        ZoraRiver002.PlayAnimationNoWait({'name': 'no01,sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver002.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_120', 'getAttention': False})
    }

    ZoraSea002.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraSeaChief.SetTalkerName({'message': 'glossary/Character:ZoraSeaChief', 'keep': False})

    call _ZoraRiverChief_Play()

    Timer.Wait({'time': 1.0})

    call _ZoraSeaChief_Play()

    Timer.Wait({'time': 1.0})
    Camera.LookAt2ActorsCenterAsTalker({'chaseRatio': 0.10000000149011612, 'duration': 0.4000000059604645, 'offsetY': 0.5, 'offsetZ': 0.5, 'distanceOffset': 1.5, 'actor1': ActorIdentifier(name="ZoraSeaChief"), 'actor2': ActorIdentifier(name="ZoraRiverChief"), 'weight1': 1.0, 'weight2': 1.0, 'offsetX': 0.0})

    fork {
        Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimCompassPoint({'direction': 2, 'withoutTurn': True, 'duration': 0.4000000059604645, 'immediateTurn': False})
    }


    fork {
        Audio.Prepare({'kind': 0, 'label': 'BGM_EV_ZORA_MISS', 'volume': 1.0})
    } {
        GameControl.ForbidLaunchApplet()
    }

    Timer.Wait({'time': 2.0})

    fork {
        Timer.Wait({'time': 10.0})

        fork {
            ZoraRiverChief.StopTailorOtherChannel({'channel': 'Bad_Performance', 'index': -1})
            ZoraRiverChief.PlayAnimation({'name': 'play_after_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraSeaChief.StopTailorOtherChannel({'channel': 'Bad_Performance', 'index': -1})
            ZoraSeaChief.PlayAnimation({'name': 'play_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } {
        Audio.PlayBGM({'label': 'BGM_EV_ZORA_MISS', 'volume': 1.0, 'ignoreSkip': True})

        fork {

            fork {
                ZoraRiverChief.PlayAnimation({'name': 'play', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Timer.Wait({'time': 0.20000000298023224})
                ZoraSeaChief.PlayAnimation({'name': 'play', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Timer.Wait({'time': 0.800000011920929})
                ZoraSeaChief.PlayTailorOtherChannelNoWait({'channel': 'Bad_Performance', 'restart': False, 'index': -1, 'stopOnSkipped': True})
                ZoraRiverChief.PlayTailorOtherChannelNoWait({'channel': 'Bad_Performance', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            } {
                Timer.Wait({'time': 2.799999952316284})
                Partner[companion].PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

        } {
            Timer.Wait({'time': 1.7999999523162842})

            fork {
                ZoraRiver002.SetFacialExpression({'expression': 'sad'})
                ZoraRiver002.PlayAnimation({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                ZoraSea002.SetFacialExpression({'expression': 'sad'})
                ZoraSea002.PlayAnimationNoWait({'name': 'angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

            Timer.Wait({'time': 2.0})

            fork {
                ZoraRiver002.SetFacialExpression({'expression': 'sad'})
                ZoraRiver002.PlayAnimation({'name': 'frightened02', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                ZoraSea002.SetFacialExpression({'expression': 'sad'})
                ZoraSea002.PlayAnimationNoWait({'name': 'no01,sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

        }

    } {
        Camera.LookAt2ActorsCenterAsTalker({'chaseRatio': 0.004999999888241291, 'duration': 7.0, 'offsetX': 0.0, 'offsetY': 0.5, 'distanceOffset': -1.0, 'actor1': ActorIdentifier(name="ZoraRiverChief"), 'actor2': ActorIdentifier(name="ZoraSeaChief"), 'weight1': 1.0, 'weight2': 1.0, 'offsetZ': 0.0})
    }

    Timer.Wait({'time': 1.0})
    ZoraRiver002.PlayAnimation({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiverChief.SetFacialExpression({'expression': 'normal'})
        ZoraRiverChief.PlayAnimation({'name': 'play_ed', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.SetComponentActive({'active': False, 'name': 'instrument'})
        ZoraRiverChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.5})
        ZoraRiverChief.SetFacialExpression({'expression': 'trollface'})
        ZoraRiverChief.PlayAnimation({'name': 'trollface_st,trollface_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'normal'})
        ZoraSeaChief.PlayAnimation({'name': 'play_ed', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaChief.SetComponentActive({'active': False, 'name': 'instrument'})
        ZoraSeaChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.5})
        ZoraSeaChief.SetFacialExpression({'expression': 'trollface'})
        ZoraSeaChief.PlayAnimation({'name': 'trollface_st,trollface_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'actor1': ActorIdentifier(name="ZoraRiverChief"), 'actor2': ActorIdentifier(name="ZoraSeaChief"), 'distanceOffset': 2.799999952316284, 'offsetZ': 1.2999999523162842, 'weight1': 1.0, 'weight2': 1.0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    GameControl.UnforbidLaunchApplet()

    fork {
        ZoraSea002.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSea002.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_125', 'getAttention': False})
    } {

        call _pd064_ZoraSea002()

    }


    fork {
        ZoraRiver002.PlayAnimation({'name': 'no01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver002.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver002.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_126', 'getAttention': False})
    } {

        call _pd064_ZoraRiv002()

    }


    fork {
        Camera.Quake({'targetPower': 3, 'initPower': 0, 'duration': 1.0})
        Timer.Wait({'time': 2.0})
        Camera.Quake({'targetPower': 0, 'initPower': 3, 'duration': 1.0})
    } {
        Timer.Wait({'time': 1.2000000476837158})
        ZoraRiverChief.SetFacialExpression({'expression': 'surprise'})
        ZoraRiverChief.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.149999976158142})
        ZoraSeaChief.SetFacialExpression({'expression': 'surprise'})
        ZoraSeaChief.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.350000023841858})
        ZoraRiver002.SetFacialExpression({'expression': 'surprise'})
        ZoraRiver002.PlayAnimation({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.4500000476837158})
        ZoraSea002.SetFacialExpression({'expression': 'surprise'})
        ZoraSea002.PlayAnimation({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.2999999523162842})
        Player.AimCompassPoint({'withoutTurn': True, 'direction': 2, 'duration': 0.4000000059604645, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.100000023841858})
        Partner[companion].AimCompassPoint({'withoutTurn': True, 'direction': 2, 'duration': 0.4000000059604645, 'immediateTurn': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_JAB_RETURN_RUMBLE', 'volume': 1.0, 'pitch': 1.0})
    }

    Audio.StopSE({'label': 'SE_EV_JAB_BAD_RAMPAGE_RUMBLE', 'duration': 1.0})
    Jabujabu.SetGravityEnable({'enable': False})
    Jabujabu.SetCollisionEnabled({'enable': False})
    Camera.LookAt2ActorsCenterAsTalker({'offsetY': -2.0, 'distanceOffset': 6.0, 'offsetZ': -12.5, 'actor1': ActorIdentifier(name="ZoraRiverChief"), 'actor2': ActorIdentifier(name="ZoraSeaChief"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0})

    fork {
        Jabujabu.PlayAnimation({'name': 'jump_join,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="Jabujabu"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="Jabujabu"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSea002.AimActor({'actor': ActorIdentifier(name="Jabujabu"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiver002.AimActor({'actor': ActorIdentifier(name="Jabujabu"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Camera.LookAt3ActorsCenterAsTalker({'offsetY': 0.0, 'distanceOffset': 6.300000190734863, 'actor1': ActorIdentifier(name="ZoraRiverChief"), 'actor2': ActorIdentifier(name="ZoraSeaChief"), 'actor3': ActorIdentifier(name="Jabujabu"), 'offsetZ': -1.2000000476837158, 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0})
    ZoraRiverChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_128', 'getAttention': False})

    fork {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraSea002.SetFacialExpression({'expression': 'sad'})
        ZoraSea002.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraSea002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        ZoraRiver002.SetFacialExpression({'expression': 'sad'})
        ZoraRiver002.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraRiver002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_140', 'getAttention': False})
    }

    ZoraRiverChief.SetFacialExpression({'expression': 'angry'})
    ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Audio.Prepare({'label': 'BGM_EV_COMMON3', 'kind': 0, 'volume': 1.0})

    fork {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_150', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraSea002.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        ZoraRiver002.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        ZoraRiver002.SetFacialExpression({'expression': 'sad'})
        ZoraRiver002.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraRiver002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea002.SetFacialExpression({'expression': 'sad'})
        ZoraSea002.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraSea002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        ZoraSeaChief.PlayAnimationEx({'time': 0.0, 'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'angry'})
    } {
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'angry_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_160', 'getAttention': False})
    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Jabujabu.LookAtTalker({'offsetZ': -2.0, 'distanceOffset': 4.0, 'offsetX': 0.0, 'offsetY': 0.699999988079071, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'keep': False})

    fork {
        Jabujabu.PlayAnimation({'name': 'bark_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Camera.Quake({'initPower': 0, 'targetPower': 2, 'duration': 1.0})
    }

    Camera.Quake({'targetPower': 0, 'initPower': 2, 'duration': 1.0})

    fork {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="Jabujabu"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="Jabujabu"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSea002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSea002.AimActor({'actor': ActorIdentifier(name="Jabujabu"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiver002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver002.AimActor({'actor': ActorIdentifier(name="Jabujabu"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 2.0})
    Jabujabu.PlayAnimation({'name': 'bark_ed', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Jabujabu.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Camera.LookAt3ActorsCenterAsTalker({'offsetY': 0.0, 'distanceOffset': 6.300000190734863, 'actor1': ActorIdentifier(name="ZoraRiverChief"), 'actor2': ActorIdentifier(name="ZoraSeaChief"), 'actor3': ActorIdentifier(name="Jabujabu"), 'offsetZ': -1.2000000476837158, 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0})
    Audio.PlayBGM({'label': 'BGM_EV_COMMON3', 'ignoreSkip': False, 'volume': 1.0})
    ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_170', 'getAttention': False})
    Timer.Wait({'time': 1.0})

    fork {
        Jabujabu.PlayAnimation({'name': 'inhale_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.5})
        Camera.LookAt3ActorsCenterAsTalker({'offsetY': 0.0, 'offsetZ': -1.2000000476837158, 'actor1': ActorIdentifier(name="ZoraRiverChief"), 'actor2': ActorIdentifier(name="ZoraSeaChief"), 'actor3': ActorIdentifier(name="Jabujabu"), 'distanceOffset': 5.0, 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0})
    }


    fork {
        ZoraRiverChief.SetFacialExpression({'expression': 'surprise'})
        ZoraRiverChief.PlayAnimation({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'surprise'})
        ZoraSeaChief.PlayAnimation({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver002.SetFacialExpression({'expression': 'surprise'})
        ZoraRiver002.PlayAnimation({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea002.SetFacialExpression({'expression': 'surprise'})
        ZoraSea002.PlayAnimation({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver002.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_180', 'getAttention': False})
    }

    ZoraSea002.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_190', 'getAttention': False})

    fork {
        ZoraRiver002.MoveToBesideTargetActor({'speed': 1, 'offsetY': 0.0, 'offsetZ': -1.0, 'offsetX': 1.0, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        ZoraRiver002.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSea002.MoveToBesideTargetActor({'speed': 1, 'offsetY': 0.0, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'offsetX': -0.6000000238418579, 'offsetZ': -0.6000000238418579, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        ZoraSea002.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {

        fork {
            ZoraRiverChief.ChangeSteeringAnimation({'idle': '', 'walk': 'pushedaway_st', 'run': '', 'layer': 0})
            ZoraRiverChief.MoveToCompassPoint({'direction': 0, 'withoutTurn': True, 'speed': 0, 'distance': 0.800000011920929, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        } {
            ZoraRiver002.SetFacialExpression({'expression': 'angry'})
            ZoraRiver002.PlayAnimation({'name': 'pushaway', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } {

        fork {
            ZoraSeaChief.ChangeSteeringAnimation({'idle': '', 'walk': 'pushedaway_st', 'run': '', 'layer': 0})
            ZoraSeaChief.MoveToCompassPoint({'direction': 0, 'withoutTurn': True, 'speed': 0, 'distance': 0.800000011920929, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        } {
            ZoraSea002.SetFacialExpression({'expression': 'angry'})
            ZoraSea002.PlayAnimation({'name': 'pushaway', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }

    Timer.Wait({'time': 0.5})
    ZoraSea002.SetFacialExpression({'expression': 'surprise'})
    ZoraRiver002.SetFacialExpression({'expression': 'surprise'})

    fork {
        ZoraSea002.PlayAnimationNoWait({'name': 'suckedin', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSea002.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        ZoraRiver002.PlayAnimationNoWait({'name': 'suckedin', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver002.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.0})
    }


    fork {
        ZoraSea002.SetCollisionEnabled({'enable': False})
        ZoraSea002.SetGravityEnable({'enable': False})
        ZoraSea002.ChangeSteeringAnimation({'run': 'suckedin', 'walk': 'suckedin', 'idle': 'suckedin', 'layer': 0})

        fork {
            Audio.PlayOneshotSystemSE({'label': 'SEQ_VO_ZORA_M013_1_008_1', 'volume': 1.0, 'pitch': 1.0})
        } {
            ZoraSea002.MoveToBesideTargetActor({'withoutTurn': True, 'offsetY': 4.0, 'timeOut': 1.0, 'speed': 0, 'offsetX': 0.6000000238418579, 'offsetZ': 6.0, 'actor': ActorIdentifier(name="Jabujabu"), 'tolerance': 0.0, 'customSpeed': 0.0, 'method': 0})
            ZoraSea002.MoveToBesideTargetActor({'speed': 1, 'withoutTurn': True, 'offsetX': 0.5, 'offsetY': 4.0, 'timeOut': 1.0, 'offsetZ': 5.0, 'customSpeed': 10.0, 'actor': ActorIdentifier(name="Jabujabu"), 'tolerance': 0.0, 'method': 0})
            ZoraSea002.Deactivate()
        } {
            Timer.Wait({'time': 1.0})
            ZoraSeaChief.MoveToBesideTargetActor({'offsetX': 2.0, 'speed': 1, 'offsetZ': 7.5, 'actor': ActorIdentifier(name="Jabujabu"), 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
            ZoraSeaChief.SetFacialExpression({'expression': 'surprise'})
            ZoraSeaChief.PlayAnimation({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } {
        ZoraRiver002.SetCollisionEnabled({'enable': False})
        ZoraRiver002.SetGravityEnable({'enable': False})
        ZoraRiver002.ChangeSteeringAnimation({'run': 'suckedin', 'idle': 'suckedin', 'walk': 'suckedin', 'layer': 0})

        fork {
            Audio.PlayOneshotSystemSE({'label': 'VO_ZORA_M3_1_008_2', 'volume': 1.0, 'pitch': 1.0})
        } {
            ZoraRiver002.MoveToBesideTargetActor({'withoutTurn': True, 'offsetY': 4.0, 'timeOut': 1.0, 'speed': 0, 'offsetX': -0.6000000238418579, 'offsetZ': 6.0, 'customSpeed': 0.0, 'actor': ActorIdentifier(name="Jabujabu"), 'tolerance': 0.0, 'method': 0})
            ZoraRiver002.MoveToBesideTargetActor({'speed': 1, 'withoutTurn': True, 'offsetX': -0.5, 'offsetY': 4.0, 'timeOut': 1.0, 'offsetZ': 5.0, 'actor': ActorIdentifier(name="Jabujabu"), 'customSpeed': 10.0, 'tolerance': 0.0, 'method': 0})
            ZoraRiver002.Deactivate()
        } {
            Timer.Wait({'time': 1.0})
            ZoraRiverChief.MoveToBesideTargetActor({'offsetX': -2.0, 'speed': 1, 'actor': ActorIdentifier(name="Jabujabu"), 'offsetZ': 7.5, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
            ZoraRiverChief.SetFacialExpression({'expression': 'surprise'})
            ZoraRiverChief.PlayAnimation({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } {
        ZoraRiver002.SetTalkerName({'message': 'glossary/Character:ZoraSea002ZoraRiver002', 'keep': False})
        ZoraRiver002.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_200', 'getAttention': False})
        ZoraRiver002.SetTalkerName({'message': 'glossary/Character:ZoraRiver002', 'keep': False})
    }

    Jabujabu.LookAtTalker({'distanceOffset': 7.0, 'offsetX': 0.0, 'offsetY': 0.699999988079071, 'offsetZ': -1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'keep': False})
    Jabujabu.PlayAnimation({'name': 'swallow', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Jabujabu.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Jabujabu.PlayAnimationNoWait({'name': 'rampage', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 3.0})
    Jabujabu.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Jabujabu.PlayAnimation({'name': 'jump_out', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Jabujabu.LookAtTalker({'chaseRatio': 0.05000000074505806, 'distanceOffset': 5.0, 'offsetZ': -1.0, 'offsetX': 0.0, 'offsetY': 1.0, 'duration': 0.4000000059604645, 'keep': False})
        Timer.Wait({'time': 2.4000000953674316})
        Jabujabu.LookAtTalker({'distanceOffset': 7.0, 'offsetX': 0.0, 'offsetY': 4.0, 'offsetZ': -1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'keep': False})
    }

    Timer.Wait({'time': 1.0})
    FlowControl.Yield_()
    Jabujabu.Deactivate()
    Jabujabu.SetCastShadow({'cast': True})
    Zelda.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 2.0, 'actor1': ActorIdentifier(name="ZoraRiverChief"), 'actor2': ActorIdentifier(name="ZoraSeaChief"), 'offsetZ': -2.5, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0})
    ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_210', 'getAttention': False})
    ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_220', 'getAttention': False})
    ZoraRiverChief.SetFacialExpression({'expression': 'normal'})
    ZoraSeaChief.PlayAnimationNoWait({'name': 'no', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_230', 'getAttention': False})
    ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiverChief.ResetSteeringAnimation()
    } {
        ZoraSeaChief.ResetSteeringAnimation()
    }


    fork {
        ZoraSeaChief.MoveToLinkedPoint({'speed': 1, 'index': 2, 'customSpeed': 10.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'wait_swim', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        ZoraRiverChief.SetInterestIkEnabled({'enable': True})
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.4000000059604645})
    ZoraRiverChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_240', 'getAttention': False})
    ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiverChief.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    ZoraRiverChief.MoveToLinkedPoint({'speed': 1, 'index': 2, 'customSpeed': 10.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait_swim', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="ZoraRiverChief"), 'actor2': ActorIdentifier(name="ZoraSeaChief"), 'offsetZ': -2.0, 'distanceOffset': 0.0, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    ZoraRiverChief.ResetFacialExpression()
    ZoraSeaChief.SetInterestIkEnabled({'enable': True})
    ZoraSeaChief.AimActor({'offsetZ': 0.0, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'immediateTurn': False})

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraRiverChief.SetInterestIkEnabled({'enable': True})
        ZoraRiverChief.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_250', 'getAttention': False})
    }


    fork {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_260', 'getAttention': False})
    } {
        ZoraRiverChief.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        ZoraRiverChief.MoveToLinkedPoint({'speed': 1, 'index': 3, 'timeOut': 9.0, 'customSpeed': 10.0, 'tolerance': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        ZoraRiverChief.SetComponentActive({'name': 'poseAdjusterComp', 'active': True})
        ZoraRiverChief.Deactivate()
    }

    ZoraSeaChief.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    ZoraSeaChief.PlayAnimationNoWait({'name': 'swim_talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_270', 'getAttention': False})
    Audio.StopAllBGM({'duration': 5.5})
    ZoraSeaChief.SetInterestIkEnabled({'enable': False})
    ZoraSeaChief.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    ZoraSeaChief.PlayAnimationNoWait({'name': 'wait_swim', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSeaChief.MoveToLinkedPoint({'speed': 1, 'index': 3, 'customSpeed': 11.0, 'timeOut': 9.0, 'tolerance': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    ZoraSeaChief.Deactivate()
    Timer.Wait({'time': 0.20000000298023224})
    Camera.RelativeMoveToWithTimeout({'timeout': 2.0, 'chaseRatio': 0.019999999552965164, 'maxSpeed': 0.10000000149011612, 'offsetY': 2.0, 'offsetZ': 2.0, 'offsetX': 0.0})
    Timer.Wait({'time': 0.4000000059604645})
    Player.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})

    fork {
        Partner[companion].PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.0})
    }


    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaB:DiscordConcert_280', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})

        call GeneralSequence.Look_at_Partner()

    }

    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaB:DiscordConcert_290', 'getAttention': False})

    fork {
        ZoraRiver000.MoveToCompassPoint({'direction': 2, 'speed': 1, 'distance': 2.25, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        ZoraSea000.MoveToCompassPoint({'direction': 2, 'speed': 1, 'distance': 2.25, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Timer.Wait({'time': 1.5})
        Camera.LookAt3ActorsCenterAsTalker({'offsetX': 0.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="ZoraRiver000"), 'actor3': ActorIdentifier(name="ZoraSea000"), 'offsetZ': -0.5, 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetY': 0.0})
    }


    fork {
        Player.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    ZoraRiver000.PlayAnimationNoWait({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiver000.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_300', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiver000"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        Player.AimActor({'actor': ActorIdentifier(name="ZoraRiver000"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    ZoraSea000.SetFacialExpression({'expression': 'sad'})
    ZoraSea000.AimActor({'actor': ActorIdentifier(name="ZoraRiver000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraSea000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSea000.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_310', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSea000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        Player.AimActor({'actor': ActorIdentifier(name="ZoraSea000"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    ZoraSea000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver000.SetFacialExpression({'expression': 'sad'})
    ZoraRiver000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver000.AimActor({'actor': ActorIdentifier(name="ZoraSea000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraRiver000.PlayAnimationNoWait({'name': 'yes01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiver000.Talk({'message': 'scenario/StoryAreaB:DiscordConcert_320', 'getAttention': True})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiver000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        Player.AimActor({'actor': ActorIdentifier(name="ZoraRiver000"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    ZoraRiver000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSea000.KeepAnimationAfterEvent()
    EventFlags.SetFlag({'symbol': 'EvB_Calamity_RiverStart', 'value': True})
    EventFlags.SetFlag({'symbol': 'EvB_ZorasChiefsIntroduction', 'value': True})
    Audio.EnableRegionBgmAutoPlay()
    Audio.PlayZoneBGM({'stopbgm': False})
    QuestSystem.Close({'questKey': 'ZoraChiefsConflict', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void ReconciliationConcert() {

    call EvResetCommon.AllResetNowait()

    Partner[companion].Deactivate()
    Zelda.SetEquipmentVisibility({'visibility': False})
    Zelda.SetShadowDecalEnable({'enable': False})
    ZoraRiver004.SetComponentActive({'active': False, 'name': 'instrument'})
    ZoraRiver004.SetComponentActive({'active': False, 'name': 'streamSyncAnim'})
    Jabujabu.Activate()
    ZoraSeaC000.AimCompassPoint({'direction': 0, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        FlowControl.PreloadTimeline({'filename': 'ReconciliationConcert'})
    } {
        GameControl.ForbidLaunchApplet()
    }

    Camera.LerpDofSettings({'kind': 7, 'TiltShiftCenterX': 0.0, 'BlurRatio': 1.0, 'BlurSizeScale': 1.0, 'FocusRange': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftBlurSizeScale': 1.0, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofBlurRatio': 1.0, 'duration': 0.0, 'TiltShiftDofBackBlurFadeWidth': 0.05000000074505806, 'TiltShiftDofBackCurve': 0.5, 'FocalDistance': 31.600000381469727, 'TiltShiftCenterY': 0.75, 'TiltShiftRange': 0.25, 'TiltShiftGamma': 1.0, 'TiltShiftDofBackRange': 12.5, 'TiltShiftDofFocalDistance': 26.5, 'noWait': False})
    FlowControl.InvokeTimeline({'filename': 'ReconciliationConcert', 'rate': 1.0})
    Camera.LerpDofSettings({'kind': 7, 'TiltShiftCenterX': 0.0, 'BlurRatio': 1.0, 'BlurSizeScale': 1.0, 'FocusRange': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftBlurSizeScale': 1.0, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofBlurRatio': 1.0, 'duration': 0.0, 'TiltShiftDofBackBlurFadeWidth': 0.05000000074505806, 'TiltShiftDofBackCurve': 0.5, 'FocalDistance': 31.600000381469727, 'TiltShiftCenterY': 0.75, 'TiltShiftRange': 0.25, 'TiltShiftGamma': 1.0, 'TiltShiftDofBackRange': 12.5, 'TiltShiftDofFocalDistance': 40.0, 'noWait': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvB_ReconciliationConcert'})
    Zelda.SetEquipmentVisibility({'visibility': True})
    EventVariables.SetVariable({'symbol': 'Coast_River:4211698231'})
    GameControl.UnforbidLaunchApplet()
    GameControl.RequestLevelJump({'level': 'Field', 'locator': 'ministerright_talk', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void ZorasChiefsIntroduction_d() {
    goto Event201
}

void ministerright_talk() {

    call EvResetCommon.AllReset()


    fork {
        Partner[companion].WarpToActor({'offsetY': 1.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': 0.800000011920929, 'distance': 2.0})
        Partner[companion].AimPlayer({'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {

        call GeneralSequence.Look_at_Partner()

    } {
        MinisterRight.SetTalkerName({'message': 'glossary/Character:Unknown', 'keep': False})
    }

    Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 0.0, 'offsetZ': 1.0, 'duration': 0.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'chaseRatio': 1.0, 'weight1': 1.0, 'weight2': 1.0, 'offsetX': 0.0, 'offsetY': 0.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    Timer.Wait({'time': 0.800000011920929})

    fork {
        MinisterRight.Activate()
        MinisterRight.SetInterestIkEnabled({'enable': False})
    } {
        Partner[companion].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].Talk({'message': 'scenario/StoryAreaB:ReturnOfMinisterRight_005', 'getAttention': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.20000000298023224})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Partner[companion].PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].Talk({'message': 'scenario/StoryAreaB:ReturnOfMinisterRight_006', 'getAttention': False})
    }


    fork {
        MinisterRight.Talk({'message': 'scenario/StoryAreaB:ReturnOfMinisterRight_010', 'getAttention': False})
        MinisterRight.SetTalkerName({'message': 'glossary/Character:MinisterRight', 'keep': False})
    } {
        Timer.Wait({'time': 0.800000011920929})
        Zelda.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.800000011920929, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].AimActor({'duration': 0.6000000238418579, 'actor': ActorIdentifier(name="MinisterRight"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetY': 1.0, 'offsetZ': -1.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': -0.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterRight.MoveToBesideTargetActor({'speed': 1, 'offsetZ': 0.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': -3.5, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="MinisterRight"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        MinisterRight.SetInterestIkEnabled({'enable': True})
        MinisterRight.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        MinisterRight.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.Talk({'message': 'scenario/StoryAreaB:ReturnOfMinisterRight_020', 'getAttention': False})
    }


    fork {
        MinisterRight.SetFacialExpression({'expression': 'surprise'})
        Timer.Wait({'time': 0.5})
        MinisterRight.SetFacialExpression({'expression': 'normal'})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'salute,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.Talk({'message': 'scenario/StoryAreaB:ReturnOfMinisterRight_030', 'getAttention': False})
    }

    Timer.Wait({'time': 0.4000000059604645})

    fork {
        MinisterRight.SetFacialExpression({'expression': 'smile'})
        MinisterRight.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 2.0})
        MinisterRight.SetFacialExpression({'expression': 'normal'})
        MinisterRight.MoveToBesideTargetActor({'offsetZ': 0.0, 'speed': 0, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': -3.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    } {
        MinisterRight.Talk({'message': 'scenario/StoryAreaB:ReturnOfMinisterRight_040', 'getAttention': False})
    }

    Timer.Wait({'time': 0.800000011920929})

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        MinisterRight.SetFacialExpression({'expression': 'angry'})
        MinisterRight.MoveToBesideTargetActor({'offsetZ': 0.0, 'speed': 0, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': -2.5, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    } {
        MinisterRight.Talk({'message': 'scenario/StoryAreaB:ReturnOfMinisterRight_040_02', 'getAttention': False})
    }

    Timer.Wait({'time': 0.800000011920929})

    fork {
        Timer.Wait({'time': 0.4000000059604645})

        fork {
            MinisterRight.MoveToBesideTargetActor({'offsetZ': 0.0, 'speed': 0, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': -1.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetY': 1.0, 'offsetZ': -1.0, 'offsetX': -0.5, 'actor': ActorIdentifier(name="Zelda"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 1.0})
            Player.ChangeSteeringAnimation({'run': 'ev_surprise_st', 'idle': '', 'walk': '', 'layer': 0})
            Player.MoveToBesideTargetActor({'offsetZ': 0.0, 'offsetX': 1.5, 'withoutTurn': True, 'speed': 1, 'actor': ActorIdentifier(name="MinisterRight"), 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0})
            Player.ResetSteeringAnimation()
        }

    } {
        MinisterRight.Talk({'message': 'scenario/StoryAreaB:ReturnOfMinisterRight_040_03', 'getAttention': False})
    }

    Timer.Wait({'time': 0.4000000059604645})

    fork {
        Timer.Wait({'time': 1.2000000476837158})
        MinisterRight.SetFacialExpression({'expression': 'surprise'})
        MinisterRight.ChangeSteeringAnimation({'run': 'surprised_st', 'idle': '', 'walk': '', 'layer': 0})
        MinisterRight.MoveToBesideTargetActor({'speed': 1, 'offsetZ': 0.0, 'offsetX': -3.0, 'customSpeed': 5.0, 'actor': ActorIdentifier(name="Zelda"), 'withoutTurn': True, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'method': 0})
    } {

        call GeneralSequence.Zelda_hood_off()


        call GeneralSequence.Zelda_hood_on()

    }

    MinisterRight.Talk({'message': 'scenario/StoryAreaB:ReturnOfMinisterRight_050', 'getAttention': False})
    MinisterRight.ResetSteeringAnimation()

    fork {
        MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.20000000298023224})
        MinisterRight.SetFacialExpression({'expression': 'sad'})
        MinisterRight.PlayAnimationNoWait({'name': 'salute,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.Talk({'message': 'scenario/StoryAreaB:ReturnOfMinisterRight_060', 'getAttention': False})
    }

    Timer.Wait({'time': 0.4000000059604645})
    Zelda.PlayAnimation({'name': 'talk_hand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.5})
    Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        MinisterRight.SetFacialExpression({'expression': 'surprise'})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.Talk({'message': 'scenario/StoryAreaB:ReturnOfMinisterRight_070', 'getAttention': False})
    }


    fork {
        MinisterRight.SetFacialExpression({'expression': 'sleep'})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.Talk({'message': 'scenario/StoryAreaB:ReturnOfMinisterRight_080', 'getAttention': False})
    }


    fork {
        Timer.Wait({'time': 0.20000000298023224})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        MinisterRight.ResetFacialExpression()
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.Talk({'message': 'scenario/StoryAreaB:ReturnOfMinisterRight_090', 'getAttention': False})
    }

    MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.4000000059604645})
    MinisterRight.PlayAnimationEx({'name': 'yes', 'time': 0.800000011920929, 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterRight.SetInterestIkEnabled({'enable': False})

    fork {
        MinisterRight.AimCompassPoint({'duration': 0.4000000059604645, 'direction': 0, 'withoutTurn': False, 'immediateTurn': False})
        MinisterRight.SetFacialExpression({'expression': 'angry'})
        MinisterRight.MoveToCompassPoint({'speed': 1, 'direction': 0, 'distance': 7.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        MinisterRight.Talk({'message': 'scenario/StoryAreaB:ReturnOfMinisterRight_100', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.5})
        Zelda.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterRight.Deactivate()
    Timer.Wait({'time': 3.0})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 0.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetZ': 1.0, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Timer.Wait({'time': 0.800000011920929})
        Player.AimActor({'duration': 0.800000011920929, 'offsetY': -0.4000000059604645, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].MoveToTargetActor({'speed': 1, 'distance': 1.5, 'offsetX': -1.0, 'offsetY': 0.5, 'actor': ActorIdentifier(name="Player"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.4000000059604645})
    switch QuestSystem.CheckProgress({'symbol': 'Desert:3205882340'}) {
      case 4294967295:

        fork {
            Partner[companion].Talk({'message': 'scenario/StoryAreaB:ReturnOfMinisterRight_DesertBefore_010', 'getAttention': False})
        } {
            Partner[companion].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        QuestSystem.SetProgress({'symbol': 'Coast_River:4211698231', 'isShowTelopInEvent': False, 'isFrontFade': False})
        QuestSystem.SetProgress({'symbol': 'Area3Quest:2380387596', 'isShowTelopInEvent': False, 'isFrontFade': False})
      case [0, 1]:

        fork {
            Partner[companion].Talk({'message': 'scenario/StoryAreaB:ReturnOfMinisterRight_DesertAfter_010', 'getAttention': False})
        } {
            Partner[companion].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        QuestSystem.SetProgress({'symbol': 'Coast_River:4211698231', 'isShowTelopInEvent': False, 'isFrontFade': False})
        QuestSystem.SetProgress({'symbol': 'Area3Quest:3236604128', 'isShowTelopInEvent': False, 'isFrontFade': False})
        QuestSystem.SetProgress({'symbol': 'Midpoint:1333872236', 'isShowTelopInEvent': False, 'isFrontFade': False})
    }
}

void CoasteRiverCrack() {

    call EvResetCommon.AllReset()

    Zelda.AimActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'pointIndex': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetY': 4.0, 'actor': ActorIdentifier(name="Area"), 'offsetZ': 1.0, 'offsetX': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    } {
        Timer.Wait({'time': 1.0})

        call GeneralSequence.Look_at_Partner_neck()

    } {
        Timer.Wait({'time': 0.10000000149011612})
        Partner[companion].LookAtTalker({'keep': True, 'offsetZ': 0.0, 'distanceOffset': 4.0, 'offsetY': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0})
    }

    Partner[companion].DisableAutoMovement()
    Partner[companion].AimActorLinkedPoint({'pointIndex': 0, 'actor': ActorIdentifier(name="Area"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})
    Partner[companion].Talk({'message': 'scenario/StoryAreaB:CoasteRiverCrack_010', 'getAttention': False})
    Partner[companion].MoveToTargetActor({'speed': 1, 'offsetY': 1.0, 'offsetX': 0.0, 'actor': ActorIdentifier(name="Player"), 'distance': 1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 0.0, 'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.10000000149011612, 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Partner[companion].Talk({'message': 'scenario/StoryAreaB:CoasteRiverCrack_020', 'getAttention': False})
}

void DiscordConcert() {

    call EvResetCommon.AllReset()


    fork {
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        ZoraRiverChief.SetFacialExpression({'expression': 'angry'})
    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'strong_anger', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:ZoraChiefsEncountering_010', 'getAttention': False})
    }

    Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 0.0, 'actor1': ActorIdentifier(name="ZoraRiverChief"), 'actor2': ActorIdentifier(name="ZoraSeaChief"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:ZoraChiefsEncountering_020', 'getAttention': False})

    fork {
        ZoraSeaChief.SetFacialExpression({'expression': 'angry'})
    } {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'angry_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ZoraChiefsEncountering_030', 'getAttention': False})
    }

    ZoraRiverChief.SetTalkerName({'message': 'glossary/Character:ZoraSeaChiefZoraRiverChief', 'keep': False})

    fork {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:ZoraChiefsEncountering_040', 'getAttention': False})
    } {
        ZoraRiverChief.PlayOneshotSE({'label': 'VO_ZORA_RIVER_CHIEF_004_2', 'volume': 1.0, 'pitch': 1.0})
    } {
        ZoraSeaChief.PlayOneshotSE({'label': 'VO_ZORA_SEA_CHIEF_004_4', 'volume': 1.0, 'pitch': 1.0})
    }

    QuestSystem.SetProgress({'symbol': 'Coast_River:3979756810', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventFlags.SetFlag({'symbol': 'EvB_DiscordConcertEnd', 'value': True})
}

void _ZoraRiverChief_Play() {
    ZoraRiverChief.LookAtTalker({'offsetZ': 0.5, 'offsetX': 0.20000000298023224, 'distanceOffset': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetY': 0.0, 'keep': False})
    ZoraRiverChief.SetFacialExpression({'expression': 'angry'})
    ZoraRiverChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    ZoraRiverChief.SetInterestIkEnabled({'enable': False})
    ZoraRiverChief.AimDegreeAngle({'angle': 45.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {

        fork {
            ZoraRiverChief.SetComponentActive({'name': 'poseAdjusterComp', 'active': False})
            ZoraRiverChief.PlayAnimation({'name': 'ev_play_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
            ZoraRiverChief.PlayAnimation({'name': 'play_after_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 0.5})
            ZoraRiverChief.SetComponentActive({'name': 'instrument', 'active': True})
        } {
            Timer.Wait({'time': 0.20000000298023224})
        }

    } {
        Timer.Wait({'time': 0.6000000238418579})

        fork {
            ZoraRiver002.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            ZoraRiver002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } {

        fork {
            Timer.Wait({'time': 0.20000000298023224})
            Player.SetInterestIkEnabled({'enable': True})
            Player.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.3499999940395355})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

}

void _ZoraSeaChief_Play() {
    ZoraSeaChief.LookAtTalker({'offsetZ': 0.5, 'offsetX': -0.20000000298023224, 'distanceOffset': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetY': 0.0, 'keep': False})
    ZoraSeaChief.SetFacialExpression({'expression': 'angry'})
    ZoraSeaChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {

        fork {
            ZoraSeaChief.PlayAnimation({'name': 'play_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
            ZoraSeaChief.PlayAnimation({'name': 'play_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 0.5})
            ZoraSeaChief.SetComponentActive({'active': True, 'name': 'instrument'})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            ZoraSeaChief.AimDegreeAngle({'angle': 315.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        }

    } {
        Timer.Wait({'time': 0.800000011920929})
        ZoraSea002.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraSea002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {

        fork {
            Timer.Wait({'time': 0.20000000298023224})
            Player.SetInterestIkEnabled({'enable': True})
            Player.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.3499999940395355})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

}

void _pd064_ZoraRivChief() {

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void _pd064_ZoraSeaChief() {

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void _pd064_ZoraRiv002() {

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void _pd064_ZoraSea002() {

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void AccidentAtRiverWithZoraRiver() {

    call AccidentAtRiverActingSystem()


    fork {

        call AccidentAtRiverActingZeldaPartner1()

    } {

        call AccidentAtRiverActingZoraRIver1()

    }


    fork {

        call AccidentAtRiverActingZeldaPartner2()

    } {

        call AccidentAtRiverActingZoraRIver2()

    }

}

void AccidentAtRiverWithOutZoraRiver() {

    call AccidentAtRiverActingSystem()


    call AccidentAtRiverActingZeldaPartner1()


    call AccidentAtRiverActingZeldaPartner2()

}

void AccidentAtRiverActingZeldaPartner1() {

    fork {
        Timer.Wait({'time': 1.899999976158142})
        Partner[companion].AimActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'pointIndex': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner.MoveToTargetActor({'speed': 1, 'offsetY': 1.0, 'actor': ActorIdentifier(name="Player"), 'distance': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0})
        Partner[companion].PlayAnimationNoWait({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 2.0999999046325684})
        Player.AimActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'pointIndex': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.0})
        Dialog.ShowTalker({'talker': 'glossary/Character:ZoraRiverChief', 'message': 'scenario/StoryAreaB:AccidentAtRiver_010'})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_JAB_BAD_RAMPAGE_WATER', 'volume': 1.0, 'pitch': 1.0})
    }

    Camera.Quake({'targetPower': 0, 'initPower': 2, 'duration': 1.0})
    Audio.StopSE({'label': 'SE_EV_JAB_BAD_RAMPAGE_RUMBLE', 'duration': 0.4000000059604645})
    Dialog.Show({'message': 'scenario/StoryAreaB:AccidentAtRiver_020'})
}

void AccidentAtRiverActingZoraRIver1() {
    ZoraRiver001.SetFacialExpression({'expression': 'surprise'})
    ZoraRiver001.PlayAnimation({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    ZoraRiver001.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.600000023841858})
    ZoraRiver001.AimActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'pointIndex': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraRiver001.SetFacialExpression({'expression': 'sad'})
    ZoraRiver001.PlayAnimationNoWait({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void AccidentAtRiverActingZeldaPartner2() {
    Timer.Wait({'time': 0.4000000059604645})

    call GeneralSequence.Look_at_Partner()

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].Talk({'message': 'scenario/StoryAreaB:AccidentAtRiver_030', 'getAttention': False})
    }


    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].Talk({'message': 'scenario/StoryAreaB:AccidentAtRiver_040', 'getAttention': False})
    }

    EventFlags.SetFlag({'symbol': 'EvB_AccidentAtRiver', 'value': True})
    Audio.MuteOffBGM({'duration': 1.0})
}

void AccidentAtRiverActingZoraRIver2() {
    Timer.Wait({'time': 2.0})
    ZoraRiver001.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver001.AimToInitialAngle({'duration': 0.800000011920929, 'withoutTurn': False, 'immediateTurn': False})
    ZoraRiver001.SetInterestIkEnabled({'enable': False})
    ZoraRiver001.PlayAnimation({'name': 'no01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver001.SetFacialExpression({'expression': 'normal'})
}

void AccidentAtRiverActingSystem() {

    call EvResetCommon.AllReset()

    QuestSystem.Open({'questKey': 'Calamity_River', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventFlags.SetFlag({'value': False, 'symbol': 'EvB_Calamity_RiverStart'})
    EventFlags.SetFlag({'symbol': 'EvB_ZorasChiefsIntroduction', 'value': True})

    fork {
        Camera.Quake({'targetPower': 2, 'initPower': 0, 'duration': 1.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_JAB_BAD_RAMPAGE_RUMBLE', 'volume': 1.0, 'pitch': 1.0})
    } {
        Audio.MuteOnBGM({'duration': 0.800000011920929})
    }

}

void AccidentAtRiverActing3ZoraRIver1() {

    fork {
        Timer.Wait({'time': 0.10000000149011612})
        ZoraRiver004.SetFacialExpression({'expression': 'surprise'})
        Timer.Wait({'time': 1.899999976158142})
        ZoraRiver004.AimActorLinkedPoint({'pointIndex': 0, 'actor': ActorIdentifier(name="Area"), 'duration': 0.6000000238418579, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraRiver004.SetFacialExpression({'expression': 'sad'})
        ZoraRiver004.PlayAnimationNoWait({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverC000.SetFacialExpression({'expression': 'surprise'})
        ZoraRiverC000.PlayAnimation({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.7999999523162842})
        ZoraRiverC000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverC000.AimActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'pointIndex': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraRiverC000.SetFacialExpression({'expression': 'sad'})
        ZoraRiverC000.PlayAnimationNoWait({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        ZoraRiver006.SetFacialExpression({'expression': 'surprise'})
        ZoraRiver006.PlayAnimation({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.7000000476837158})
        ZoraRiver006.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver006.AimActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'pointIndex': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraRiver006.SetFacialExpression({'expression': 'sad'})
        ZoraRiver006.PlayAnimationNoWait({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void AccidentAtRiverActing3ZoraRIver2() {
    Timer.Wait({'time': 2.0})

    fork {
        Timer.Wait({'time': 0.6000000238418579})

        fork {
            ZoraRiver004.AimToInitialAngle({'duration': 0.6000000238418579, 'withoutTurn': False, 'immediateTurn': False})
        } {
            ZoraRiver004.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        ZoraRiver004.SetInterestIkEnabled({'enable': False})
        ZoraRiver004.SetDefaultFacialExpression({'expression': 'sad'})
        ZoraRiver004.SetInstanceVariableString({'name': 'idleAnim', 'value': 'sad01'})
    } {
        ZoraRiverC000.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        ZoraRiverC000.SetInterestIkEnabled({'enable': False})
        ZoraRiverC000.SetDefaultFacialExpression({'expression': 'sad'})
        ZoraRiverC000.SetInstanceVariableString({'name': 'idleAnim', 'value': 'frightened01'})
    } {
        Timer.Wait({'time': 0.4000000059604645})

        fork {
            ZoraRiver006.AimToInitialAngle({'duration': 0.800000011920929, 'withoutTurn': False, 'immediateTurn': False})
        } {
            ZoraRiver006.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        ZoraRiver006.SetInterestIkEnabled({'enable': False})
        ZoraRiver006.SetDefaultFacialExpression({'expression': 'sad'})
        ZoraRiver006.SetInstanceVariableString({'name': 'idleAnim', 'value': 'sad01'})
    }

}

void AccidentAtRiverWith4ZoraRiver() {

    call AccidentAtRiverActingSystem()


    fork {

        call AccidentAtRiverActingZeldaPartner1()

    } {

        call AccidentAtRiverActingZoraRIver1()

    } {

        call AccidentAtRiverActing3ZoraRIver1()

    }


    fork {

        call AccidentAtRiverActingZeldaPartner2()

    } {

        call AccidentAtRiverActingZoraRIver2()

    } {

        call AccidentAtRiverActing3ZoraRIver2()

    }

}

void ZorasTurnsToSeaChief() {

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraSea002.SetInterestIkEnabled({'enable': True})
        ZoraSea002.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        ZoraRiver002.SetInterestIkEnabled({'enable': True})
        ZoraRiver002.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void ZorasTurnsToRiverChief() {

    fork {
        Timer.Wait({'time': 0.6000000238418579})
        ZoraSea002.SetInterestIkEnabled({'enable': True})
        ZoraSea002.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraRiver002.SetInterestIkEnabled({'enable': True})
        ZoraRiver002.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}
