-------- EventFlow: Luberi --------

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult4']
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor', 'WarpToActorLinkedPoint', 'PlayAnimation', 'ResetAim', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['AimActor', 'WarpToActor', 'DisableAutoMovement', 'AimPlayer']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag', 'CheckMessgaeFlag']
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'Reset', 'RelativeMoveToWithTimeout']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: MinisterRight
entrypoint: None()
actions: ['Talk', 'PlayAnimation', 'Deactivate', 'AimActor', 'MoveToTargetLinkedPoint', 'ChangeSteeringAnimation', 'SetInterestIkEnabled', 'SetFacialExpression', 'PlayAnimationNoWait', 'AimCompassPoint', 'MoveToBesideTargetActor']
queries: []
params: None

Actor: Luberi
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimation', 'AimPlayer', 'PlayAnimationNoWait', 'ResetFacialExpression', 'AimActor', 'TalkKeep', 'SetInterestIkEnabled', 'SetFacialExpression', 'AimCompassPoint', 'LookAtTalker', 'SetTalkerName', 'AimDegreeAngle', 'MoveToCompassPoint', 'ResetAim', 'WarpToActorWithCompassPoint']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['WarpToActorLinkedPoint', 'SetInterestIkEnabled', 'AimActor', 'PlayAnimation']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor', 'SetInterestIkEnabled', 'WarpToActor', 'Talk', 'PlayAnimation', 'AimPlayer', 'MoveToBesideTargetActor', 'TalkKeep', 'PlayAnimationNoWait', 'AimDegreeAngle', 'AimCompassPoint', 'WarpToDefaultPosition', 'ResetAim']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['UnforbidSave']
queries: []
params: None

Actor: MinisterLeft
entrypoint: None()
actions: ['Talk', 'PlayAnimation', 'Deactivate', 'MoveToTargetLinkedPoint', 'ResetAim', 'PlayAnimationNoWait', 'AimActor', 'SetFacialExpression', 'SetInterestIkEnabled', 'MoveToCompassPoint', 'AimCompanion', 'AimPlayer', 'AimCompassPoint', 'TalkKeep']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['CheckProgress']
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: EventMap
entrypoint: None()
actions: ['PreloadArchive', 'Open', 'Close', 'HightlightCrackActor']
queries: []
params: None

Actor: LuberiHouseMachine
entrypoint: None()
actions: []
queries: []
params: None

Actor: LuberiBackpack
entrypoint: None()
actions: ['Deactivate']
queries: []
params: None

Actor: LuberiBaggage
entrypoint: None()
actions: ['Deactivate']
queries: []
params: None

Actor: FloorCover
entrypoint: None()
actions: ['Deactivate']
queries: []
params: None

Actor: TutorialUI
entrypoint: None()
actions: ['ShowModal']
queries: []
params: None

Actor: AreaStartTag
entrypoint: None()
actions: []
queries: []
params: None

void MeetLuberi() {
    GameControl.UnforbidSave()

    call EvResetCommon.AllReset()

    Luberi.MoveToCompassPoint({'direction': 0, 'speed': 0, 'distance': 0.75, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Luberi.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    MinisterLeft.AimActor({'actor': ActorIdentifier(name="Luberi"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Luberi.ResetAim()
    Luberi.PlayAnimationNoWait({'name': 'dressoneself', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetY': 0.0})
    Zelda.AimActor({'actor': ActorIdentifier(name="Luberi"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner.WarpToActor({'distance': -1.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 1.0, 'offsetX': -1.0})
    Partner.DisableAutoMovement()
    MinisterLeft.SetFacialExpression({'expression': 'sad'})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    MinisterLeft.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.Talk({'message': 'scenario/StoryAreaA:MeetLuberi_ZeldaVer_000', 'getAttention': False})

    fork {
        Luberi.Talk({'message': 'scenario/StoryAreaA:MeetLuberi_ZeldaVer_001', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.5})

        fork {
            MinisterLeft.SetFacialExpression({'expression': 'surprise'})
        } {
            MinisterLeft.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }


    fork {
        MinisterLeft.SetFacialExpression({'expression': 'normal'})
    } {
        MinisterLeft.PlayAnimation({'name': 'surprised_ed01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.5})
    MinisterLeft.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.Talk({'message': 'scenario/StoryAreaA:MeetLuberi_ZeldaVer_005', 'getAttention': False})
    MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Luberi.PlayAnimation({'name': 'wait', 'blendFrame': 12, 'layer': 0, 'restart': False})
    Luberi.AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    Luberi.ResetAim()

    fork {
        Luberi.Talk({'message': 'scenario/StoryAreaA:MeetLuberi_ZeldaVer_010', 'getAttention': False})
    } {
        Luberi.PlayAnimation({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Luberi.SetFacialExpression({'expression': 'angry'})
    }

    MinisterLeft.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.Talk({'message': 'scenario/StoryAreaA:MeetLuberi_ZeldaVer_015', 'getAttention': False})
    MinisterLeft.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Luberi.PlayAnimationNoWait({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Luberi.Talk({'message': 'scenario/StoryAreaA:MeetLuberi_ZeldaVer_016', 'getAttention': False})
    Timer.Wait({'time': 0.5})
    Luberi.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Luberi.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Luberi.ResetAim()
    Timer.Wait({'time': 0.5})
    Luberi.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})

    fork {
        Luberi.Talk({'message': 'scenario/StoryAreaA:MeetLuberi_ZeldaVer_020', 'getAttention': False})
    } {
        Luberi.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        Luberi.Talk({'message': 'scenario/StoryAreaA:MeetLuberi_ZeldaVer_030', 'getAttention': False})
    } {
        Luberi.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Luberi.SetFacialExpression({'expression': 'angry'})
    }

    Luberi.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 2.0})
    } {
        Zelda.PlayAnimation({'name': 'talk_hand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Luberi.LookAtTalker({'keep': True, 'distanceOffset': -1.0, 'offsetZ': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0})
        Luberi.Talk({'message': 'scenario/StoryAreaA:MeetLuberi_ZeldaVer_040', 'getAttention': False})
    } {
        Luberi.PlayAnimation({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Luberi.PlayAnimation({'name': 'surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Luberi.SetFacialExpression({'expression': 'surprise'})
    }

    Luberi.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Luberi.Talk({'message': 'scenario/StoryAreaA:MeetLuberi_ZeldaVer_050', 'getAttention': False})
    Luberi.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        Timer.Wait({'time': 1.5})
        Fade.StartPreset({'preset': 'FadeOutFastB'})
    } {

        call GeneralSequence.ZeldaTalkMotion_2.0s()

    }

    Timer.Wait({'time': 0.5})

    fork {
        Timer.Wait({'time': 1.0})
    } {
        Luberi.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Luberi.SetFacialExpression({'expression': 'sleep'})
    }

    Fade.StartPreset({'preset': 'FadeInSlow'})
    Timer.Wait({'time': 0.5})
    Luberi.SetFacialExpression({'expression': 'normal'})
    Luberi.ResetAim()

    fork {
        Luberi.Talk({'message': 'scenario/StoryAreaA:MeetLuberi_110', 'getAttention': False})
    } {
        Luberi.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Luberi.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MinisterLeft.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Zelda"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        MinisterLeft.Talk({'message': 'scenario/StoryAreaA:MeetLuberi_120', 'getAttention': False})
    } {
        MinisterLeft.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Luberi.SetFacialExpression({'expression': 'smile'})
    } {
        Zelda.SetInterestIkEnabled({'enable': True})
        Timer.Wait({'time': 0.5})
        Zelda.AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterLeft"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Luberi.AimDegreeAngle({'duration': 0.4000000059604645, 'angle': 15.0, 'withoutTurn': False, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    Luberi.ResetAim()

    fork {
        Luberi.Talk({'message': 'scenario/StoryAreaA:MeetLuberi_121', 'getAttention': False})
    } {
        Luberi.PlayAnimation({'name': 'observation', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            Zelda.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Luberi"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            MinisterLeft.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Luberi"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].AimActor({'actor': ActorIdentifier(name="Luberi"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }


    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:MeetLuberi_122', 'getAttention': False})
    } {
        Partner[companion].PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})
        MinisterLeft.AimCompanion({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Luberi.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Luberi.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Luberi.Talk({'message': 'scenario/StoryAreaA:MeetLuberi_123', 'getAttention': False})
    Luberi.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Luberi"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    MinisterLeft.ResetAim()

    fork {
        MinisterLeft.Talk({'message': 'scenario/StoryAreaA:MeetLuberi_124', 'getAttention': False})
    } {
        MinisterLeft.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Luberi.SetInterestIkEnabled({'enable': True})
        Luberi.AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterLeft"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Luberi.AimActor({'duration': 0.4000000059604645, 'withoutTurn': False, 'actor': ActorIdentifier(name="MinisterLeft"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Luberi.ResetAim()

    fork {
        Luberi.TalkKeep({'message': 'scenario/StoryAreaA:MeetLuberi_125', 'getAttention': False})
        Luberi.TalkKeep({'message': 'scenario/StoryAreaA:MeetLuberi_126', 'getAttention': False})
    } {
        Luberi.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Luberi.Talk({'message': 'scenario/StoryAreaA:MeetLuberi_127', 'getAttention': False})
    } {
        Luberi.PlayAnimation({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Luberi.AimCompassPoint({'duration': 0.4000000059604645, 'direction': 0, 'withoutTurn': False, 'immediateTurn': False})
    Luberi.ResetAim()
    Timer.Wait({'time': 0.5})
    MinisterLeft.SetFacialExpression({'expression': 'normal'})

    fork {
        Luberi.Talk({'message': 'scenario/StoryAreaA:MeetLuberi_130', 'getAttention': False})
    } {
        Luberi.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Luberi.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Luberi.SetTalkerName({'message': 'glossary/Character:Luberi', 'keep': False})

    fork {
        MinisterLeft.Talk({'message': 'scenario/StoryAreaA:MeetLuberi_150', 'getAttention': False})
    } {
        MinisterLeft.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterLeft.SetFacialExpression({'expression': 'sad'})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Luberi.SetInterestIkEnabled({'enable': True})

        fork {
            Luberi.AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterLeft"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Luberi.SetFacialExpression({'expression': 'normal'})
        }

    } {
        Timer.Wait({'time': 0.5})
        Zelda.AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterLeft"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Luberi.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Zelda"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Luberi.ResetAim()

    fork {
        Luberi.Talk({'message': 'scenario/StoryAreaA:MeetLuberi_160', 'getAttention': False})
    } {
        Luberi.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})
        Zelda.AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="Luberi"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Luberi.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Luberi.Talk({'message': 'scenario/StoryAreaA:MeetLuberi_170', 'getAttention': False})
    } {
        Luberi.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Luberi.Talk({'message': 'scenario/StoryAreaA:MeetLuberi_171', 'getAttention': False})
    } {
        Luberi.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Luberi.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.ResetAim()

    fork {
        MinisterLeft.Talk({'message': 'scenario/StoryAreaA:MeetLuberi_182', 'getAttention': False})
    } {
        MinisterLeft.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})
        Luberi.AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterLeft"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Luberi.AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Luberi.ResetAim()
    Luberi.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        Luberi.TalkKeep({'message': 'scenario/StoryAreaA:MeetLuberi_E020', 'getAttention': False})
        Luberi.TalkKeep({'message': 'scenario/StoryAreaA:MeetLuberi_E040', 'getAttention': False})
    } {
        Luberi.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Luberi.Talk({'message': 'scenario/StoryAreaA:MeetLuberi_E050', 'getAttention': False})
    } {
        Luberi.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Luberi.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Luberi.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Luberi.ResetAim()

    fork {
        Luberi.Talk({'message': 'scenario/StoryAreaA:MeetLuberi_E060', 'getAttention': False})
        Luberi.Talk({'message': 'scenario/StoryAreaA:MeetLuberi_240', 'getAttention': False})
    } {
        Luberi.PlayAnimation({'name': 'no,think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Luberi.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        MinisterLeft.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterLeft.SetFacialExpression({'expression': 'sleep'})
    }

    Timer.Wait({'time': 1.0})
    MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        MinisterLeft.MoveToCompassPoint({'distance': 0.5, 'direction': 1, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        MinisterLeft.SetFacialExpression({'expression': 'normal'})
    }

    Zelda.SetInterestIkEnabled({'enable': True})

    fork {
        MinisterLeft.Talk({'message': 'scenario/StoryAreaA:MeetLuberi_260', 'getAttention': False})
    } {
        MinisterLeft.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Zelda"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.20000000298023224})
        MinisterLeft.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Luberi"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterLeft"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="MinisterLeft"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.20000000298023224})
        Luberi.AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterLeft"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterLeft.ResetAim()

    fork {
        MinisterLeft.Talk({'message': 'scenario/StoryAreaA:MeetLuberi_270', 'getAttention': False})
        MinisterLeft.Talk({'message': 'scenario/StoryAreaA:MeetLuberi_272', 'getAttention': False})
    } {
        MinisterLeft.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    MinisterLeft.ResetAim()
    MinisterLeft.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.Talk({'message': 'scenario/StoryAreaA:MeetLuberi_273', 'getAttention': False})
    MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:MeetLuberi_274', 'getAttention': False})
    } {
        Partner[companion].PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        call GeneralSequence.Look_at_Partner()

    } {
        Timer.Wait({'time': 0.4000000059604645})
        Luberi.SetInterestIkEnabled({'enable': True})
        Luberi.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Partner"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        MinisterLeft.SetInterestIkEnabled({'enable': True})
        MinisterLeft.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Partner"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Luberi.Talk({'message': 'scenario/StoryAreaA:MeetLuberi_291', 'getAttention': False})
    } {
        Luberi.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Luberi"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Zelda.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Luberi"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Luberi.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].ResetAim()
    Partner[companion].PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    Partner[companion].ResetAim()

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:MeetLuberi_300', 'getAttention': False})
    } {
        Partner[companion].PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})

        call GeneralSequence.Look_at_Partner()

    }


    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:MeetLuberi_310', 'getAttention': False})
    } {
        Partner[companion].PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    call DepartureOfZelda()

}

void DepartureOfZelda() {
    Partner[companion].AimCompassPoint({'duration': 0.4000000059604645, 'direction': 0, 'withoutTurn': False, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})

    fork {
        Partner[companion].MoveToBesideTargetActor({'offsetX': 1.0, 'speed': 0, 'offsetZ': 1.0, 'offsetY': 9.0, 'actor': ActorIdentifier(name="Zelda"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    } {

        call GeneralSequence.Look_at_Partner()

    } {
        Luberi.SetInterestIkEnabled({'enable': True})
        Luberi.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MinisterLeft.SetInterestIkEnabled({'enable': True})
        MinisterLeft.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Fade.StartPreset({'preset': 'FadeOutFastB'})
    Partner[companion].AimDegreeAngle({'angle': -45.0, 'duration': 1.0999999046325684, 'withoutTurn': False, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    Fade.StartPreset({'preset': 'FadeInFast'})
    Partner[companion].MoveToBesideTargetActor({'offsetY': 1.0, 'offsetX': 1.0, 'speed': 0, 'offsetZ': 1.0, 'actor': ActorIdentifier(name="Zelda"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {

        call GeneralSequence.Look_at_Partner()

    } {
        Luberi.SetInterestIkEnabled({'enable': False})
    } {
        MinisterLeft.SetInterestIkEnabled({'enable': False})
    }

    Timer.Wait({'time': 1.0})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    Partner[companion].PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].ResetAim()
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:DepartureOfZelda_010', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:DepartureOfZelda_020', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:DepartureOfZelda_030', 'getAttention': False})
    } {
        Partner[companion].PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    QuestSystem.SetProgress({'symbol': 'HyruleCastle_LuberiHouse:404754367', 'isShowTelopInEvent': False, 'isFrontFade': False})
    QuestSystem.SetProgress({'symbol': 'Area3Quest:2596641860', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvAreaA028'})
    EventMap.PreloadArchive({'levelName': 'Field'})
    EventMap.Open({'levelName': 'Field', 'scale': 0.8999999761581421})
    Timer.Wait({'time': 0.5})
    EventMap.HightlightCrackActor({'index': -1})
    Timer.Wait({'time': 3.5})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:DepartureOfZelda_035', 'getAttention': False})
    Timer.Wait({'time': 0.20000000298023224})
    EventMap.Close()
    Partner[companion].PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].TalkKeep({'message': 'scenario/StoryAreaA:DepartureOfZelda_060', 'getAttention': False})
    Partner[companion].ResetAim()
    Partner[companion].PlayAnimationNoWait({'name': 'yes,talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:DepartureOfZelda_070', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Zelda.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="MinisterLeft"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Zelda.ResetAim()

    fork {
        Zelda.PlayAnimation({'name': 'talk_hand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterLeft.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Luberi.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 1.5})
    Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.699999988079071})
    MinisterLeft.ResetAim()

    fork {
        MinisterLeft.Talk({'message': 'scenario/StoryAreaA:DepartureOfZelda_080', 'getAttention': False})
    } {
        MinisterLeft.PlayAnimation({'name': 'no,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterLeft.SetFacialExpression({'expression': 'sad'})
    }

    MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Luberi.AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    Luberi.ResetAim()

    fork {
        Luberi.Talk({'message': 'scenario/StoryAreaA:DepartureOfZelda_090', 'getAttention': False})
    } {
        Luberi.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.699999988079071})
        Zelda.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Luberi"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        MinisterLeft.AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="Luberi"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MinisterLeft.SetInterestIkEnabled({'enable': True})
    } {
        Timer.Wait({'time': 1.0})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Luberi"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Luberi.Talk({'message': 'scenario/StoryAreaA:DepartureOfZelda_100', 'getAttention': False})
    } {
        Luberi.PlayAnimation({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Luberi.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.ResetAim()

    fork {
        MinisterLeft.Talk({'message': 'scenario/StoryAreaA:DepartureOfZelda_110', 'getAttention': False})
    } {
        MinisterLeft.PlayAnimation({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterLeft.SetFacialExpression({'expression': 'sad'})
    } {
        MinisterLeft.AimActor({'actor': ActorIdentifier(name="Luberi"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 1.0})
    Luberi.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Luberi.ResetAim()

    fork {
        Luberi.Talk({'message': 'scenario/StoryAreaA:DepartureOfZelda_120', 'getAttention': False})
    } {
        Luberi.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Luberi.SetFacialExpression({'expression': 'normal'})
    } {
        Zelda.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Luberi"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Luberi.Talk({'message': 'scenario/StoryAreaA:DepartureOfZelda_130', 'getAttention': False})
    } {
        Luberi.PlayAnimation({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Luberi.SetFacialExpression({'expression': 'sad'})
    }

    Luberi.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Luberi.AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})

    fork {
        Luberi.Talk({'message': 'scenario/StoryAreaA:DepartureOfZelda_140', 'getAttention': False})
    } {
        Luberi.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Luberi.SetFacialExpression({'expression': 'smile'})
    }

    Luberi.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.ResetAim()

    fork {
        MinisterLeft.Talk({'message': 'scenario/StoryAreaA:DepartureOfZelda_150', 'getAttention': False})
    } {
        MinisterLeft.PlayAnimation({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterLeft.SetFacialExpression({'expression': 'angry'})
    }

    MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})

    fork {
        MinisterLeft.TalkKeep({'message': 'scenario/StoryAreaA:DepartureOfZelda_152', 'getAttention': False})
        MinisterLeft.Talk({'message': 'scenario/StoryAreaA:DepartureOfZelda_160', 'getAttention': False})
    } {
        MinisterLeft.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterLeft.SetFacialExpression({'expression': 'normal'})
    } {
        Timer.Wait({'time': 0.5})
        Zelda.AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.699999988079071})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Luberi.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})
    Luberi.ResetAim()

    fork {
        Luberi.Talk({'message': 'scenario/StoryAreaA:DepartureOfZelda_170', 'getAttention': False})
    } {
        Luberi.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Luberi.SetFacialExpression({'expression': 'normal'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Luberi"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Luberi"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    LuberiBackpack.Deactivate()
    LuberiBaggage.Deactivate()
    FloorCover.Deactivate()
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Partner[companion].WarpToDefaultPosition({'position': 1, 'avoidWall': False, 'avoidPlayer': False})
    EventVariables.SetVariable({'symbol': 'HyruleCastle_LuberiHouse:404754367'})
    EventVariables.SetVariable({'symbol': 'LuberiLvUpTalk:788313743'})
    EventFlags.SetFlag({'symbol': 'Left_LuberiHouse', 'value': True})
    Luberi.WarpToActorWithCompassPoint({'direction': 2, 'actor': ActorIdentifier(name="Luberi"), 'distance': -1.25, 'offsetY': 0.0, 'offsetX': 0.0})
    MinisterLeft.AimCompassPoint({'direction': 0, 'duration': 0.10000000149011612, 'withoutTurn': False, 'immediateTurn': False})
    Luberi.AimCompassPoint({'direction': 0, 'duration': 0.10000000149011612, 'withoutTurn': False, 'immediateTurn': False})
    Luberi.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
}

void talk020() {
    Luberi.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:PastOfLink_005', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Event85:
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:

        call _talkLink()

        Event210:
        Luberi.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:PastOfLink_Q1_020', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        goto Event85
      case 1:
        Luberi.Talk({'message': 'scenario/HylianGeneralTalk:LuberiHouseLuberiTalk02_010', 'getAttention': False})
        Luberi.Talk({'message': 'scenario/HylianGeneralTalk:LuberiHouseLuberiTalk02_020', 'getAttention': False})
        goto Event210
      case 2:
        Luberi.Talk({'message': 'scenario/StoryAreaA:PastOfLink_050', 'getAttention': False})
    }
}

void LuberiHouseConsutation() {
    Player.WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetY': 0.0})
    Player.SetInterestIkEnabled({'enable': True})
    Partner[companion].SetInterestIkEnabled({'enable': True})
    MinisterRight.MoveToBesideTargetActor({'actor': ActorIdentifier(name="MinisterRight"), 'speed': 1, 'offsetX': 3.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})

    fork {
        Luberi.AimPlayer({'duration': 0.10000000149011612, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MinisterRight.AimActor({'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="Luberi"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MinisterLeft.AimActor({'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="Luberi"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].WarpToActor({'offsetY': 1.0, 'offsetX': 1.0, 'distance': 0.0, 'actor': ActorIdentifier(name="Player")})
    }


    call EvResetCommon.AllReset()

    Player.AimActor({'duration': 0.10000000149011612, 'withoutTurn': True, 'actor': ActorIdentifier(name="Luberi"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Zelda.ResetAim()
    Timer.Wait({'time': 0.10000000149011612})
    Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 0.0, 'duration': 1.0, 'chaseRatio': 0.10000000149011612, 'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Luberi"), 'weight1': 1.0, 'weight2': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    Luberi.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Luberi.Talk({'getAttention': True, 'message': 'scenario/StoryAreaHyruleCastle:LuberiHouseConsutation_005'})
    Luberi.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    call GeneralSequence.ZeldaTalkMotion()

    Luberi.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Luberi.Talk({'message': 'scenario/StoryAreaHyruleCastle:LuberiHouseConsutation_010', 'getAttention': True})
    Luberi.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        MinisterRight.SetInterestIkEnabled({'enable': False})
        MinisterRight.PlayAnimation({'name': 'sad_st,sad_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.Talk({'message': 'scenario/StoryAreaHyruleCastle:LuberiHouseConsutation_030', 'getAttention': True})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    MinisterRight.SetInterestIkEnabled({'enable': True})
    MinisterRight.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        MinisterLeft.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterLeft.Talk({'message': 'scenario/StoryAreaHyruleCastle:LuberiHouseConsutation_040', 'getAttention': True})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Luberi.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Luberi.Talk({'message': 'scenario/StoryAreaHyruleCastle:LuberiHouseConsutation_070', 'getAttention': True})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Luberi"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Luberi"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    Luberi.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterRight.SetInterestIkEnabled({'enable': False})

    fork {
        MinisterRight.PlayAnimationNoWait({'name': 'think,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.Talk({'message': 'scenario/StoryAreaHyruleCastle:LuberiHouseConsutation_100', 'getAttention': True})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    MinisterRight.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.Talk({'message': 'scenario/StoryAreaHyruleCastle:LuberiHouseConsutation_110', 'getAttention': False})
    MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterRight.SetFacialExpression({'expression': 'angry'})
    MinisterRight.SetInterestIkEnabled({'enable': False})

    fork {
        MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.AimCompassPoint({'withoutTurn': False, 'direction': 3, 'duration': 0.4000000059604645, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.20000000298023224})

    fork {
        MinisterRight.Talk({'message': 'scenario/StoryAreaHyruleCastle:LuberiHouseConsutation_111', 'getAttention': True})
    } {
        MinisterRight.SetInterestIkEnabled({'enable': True})
        Timer.Wait({'time': 0.30000001192092896})

        fork {
            MinisterRight.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})

            fork {
                Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Partner.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Player.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

        }

        Timer.Wait({'time': 0.30000001192092896})

        fork {
            MinisterRight.AimActor({'actor': ActorIdentifier(name="Luberi"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})

            fork {
                Luberi.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Luberi.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

        }

        Timer.Wait({'time': 0.30000001192092896})

        fork {
            MinisterRight.AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})

            fork {
                MinisterLeft.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

        }

    }

    MinisterRight.SetInterestIkEnabled({'enable': False})
    Timer.Wait({'time': 0.5})

    fork {
        MinisterRight.Talk({'message': 'scenario/StoryAreaHyruleCastle:LuberiHouseConsutation_114', 'getAttention': False})
    } {
        MinisterRight.PlayAnimation({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    MinisterRight.SetInterestIkEnabled({'enable': True})

    fork {
        MinisterLeft.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterLeft.SetFacialExpression({'expression': 'surprise'})
    } {
        MinisterLeft.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterLeft.Talk({'message': 'scenario/StoryAreaHyruleCastle:LuberiHouseConsutation_116', 'getAttention': False})
    MinisterRight.SetInterestIkEnabled({'enable': False})

    fork {
        MinisterRight.Talk({'message': 'scenario/StoryAreaHyruleCastle:LuberiHouseConsutation_118', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'ev_angry_st,ev_angry_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterRight.ChangeSteeringAnimation({'idle': 'wait', 'walk': 'ev_move_fast_powerful', 'run': 'ev_move_fast_powerful', 'layer': 0})

    fork {
        MinisterRight.MoveToTargetLinkedPoint({'index': 0, 'speed': 1, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetZ': 0.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        MinisterRight.MoveToTargetLinkedPoint({'index': 0, 'speed': 1, 'actor': ActorIdentifier(name="AreaStartTag"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        MinisterRight.Deactivate()
    } {
        MinisterRight.Talk({'message': 'scenario/StoryAreaHyruleCastle:LuberiHouseConsutation_120', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="MinisterRight"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        MinisterLeft.Talk({'message': 'scenario/StoryAreaHyruleCastle:LuberiHouseConsutation_160', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.5})
        MinisterLeft.SetInterestIkEnabled({'enable': False})

        fork {
            MinisterLeft.PlayAnimation({'name': 'surprised_ed01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            MinisterLeft.PlayAnimation({'name': 'no', 'layer': 0, 'blendFrame': -1, 'restart': False})
            MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MinisterLeft.SetFacialExpression({'expression': 'sad'})
        }

    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})
    MinisterLeft.ResetAim()
    MinisterLeft.MoveToTargetLinkedPoint({'index': 0, 'speed': 1, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetZ': 0.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    MinisterLeft.MoveToTargetLinkedPoint({'index': 0, 'speed': 1, 'actor': ActorIdentifier(name="AreaStartTag"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    MinisterLeft.Deactivate()
    Luberi.PlayAnimationNoWait({'name': 'sad_st,sad_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Luberi.Talk({'message': 'scenario/StoryAreaHyruleCastle:LuberiHouseConsutation_170', 'getAttention': False})

    fork {
        Timer.Wait({'time': 1.5})
    } {
        Timer.Wait({'time': 1.0})

        fork {
            Luberi.PlayAnimation({'name': 'sad_ed', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Luberi.ResetFacialExpression()
        }

    }


    fork {
        Luberi.Talk({'message': 'scenario/StoryAreaHyruleCastle:LuberiHouseConsutation_180', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="Luberi"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Luberi"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Luberi.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Luberi.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Luberi.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Luberi.Talk({'message': 'scenario/StoryAreaHyruleCastle:LuberiHouseConsutation_190', 'getAttention': False})
    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Luberi.Talk({'message': 'scenario/StoryAreaHyruleCastle:LuberiHouseConsutation_200', 'getAttention': False})
    } {
        Luberi.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Luberi.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    QuestSystem.SetProgress({'symbol': 'Midpoint:2815898635', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Luberi_LvUpTuto() {
    Luberi.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_005', 'selfTalkAnimName': 'yes,think', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Luberi.TalkKeep({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_005_02', 'getAttention': False})
    } {
        Luberi.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Luberi.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})

    fork {
        Luberi.TalkKeep({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_007', 'getAttention': False})
    } {
        Luberi.PlayAnimationNoWait({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.0})
        Luberi.PlayAnimationNoWait({'name': 'surprised_ed,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Luberi.TalkKeep({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_005_03', 'getAttention': False})
    } {
        Luberi.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Luberi.Talk({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_016', 'getAttention': False})
    } {
        Luberi.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Timer.Wait({'time': 1.0})
        Luberi.Talk({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_016_02', 'getAttention': False})
    } {
        Luberi.AimActor({'actor': ActorIdentifier(name="LuberiHouseMachine"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Luberi.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.2000000476837158})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="LuberiHouseMachine"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.149999976158142})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="LuberiHouseMachine"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.RelativeMoveToWithTimeout({'chaseRatio': 0.10000000149011612, 'offsetX': 1.5, 'timeout': 1.5, 'offsetY': 0.0, 'offsetZ': 0.0, 'maxSpeed': 999.0})
    }


    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.SetInterestIkEnabled({'enable': False})
        Player.AimActor({'actor': ActorIdentifier(name="Luberi"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Luberi"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Luberi.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.RelativeMoveToWithTimeout({'chaseRatio': 0.10000000149011612, 'offsetX': -1.5, 'timeout': 1.5, 'offsetY': 0.0, 'offsetZ': 0.0, 'maxSpeed': 999.0})
    }

    Timer.Wait({'time': 0.800000011920929})

    fork {
        Luberi.Talk({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_020', 'getAttention': False})
    } {
        Luberi.PlayAnimationNoWait({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.0})
        Luberi.PlayAnimationNoWait({'name': 'surprised_ed,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Luberi.Talk({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_030', 'getAttention': False})

    fork {
        Timer.Wait({'time': 1.0})
        Luberi.Talk({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_016_03', 'getAttention': False})
    } {
        Luberi.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Luberi.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Luberi.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Luberi.SetInterestIkEnabled({'enable': True})
    TutorialUI.ShowModal({'key': 'LuberiLvUp'})
    EventFlags.SetFlag({'symbol': 'EventLuberiLvUpTalk', 'value': True})
    switch QuestSystem.CheckProgress({'symbol': 'Midpoint:2478168384'}) {
      case 4294967295:
        Event558:
        EventVariables.SetVariable({'symbol': 'LuberiLvUpTalk:2848816309'})
      case [0, 1]:
        EventFlags.SetFlag({'symbol': 'WeaponCapOpenMessage', 'value': True})
        goto Event558
    }
}

void talk030() {
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/HylianGeneralTalk:LuberiHouseLuberiTalk030_010'}) {
        Luberi.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'message': 'scenario/HylianGeneralTalk:LuberiHouseLuberiTalk030_010', 'selfTalkAnimName': '', 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else
    if !EventFlags.CheckFlag({'symbol': 'EventLuberiLvUpTalk'}) {

        call Luberi_LvUpTuto()

    } else {
        Luberi.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'selfTalkAnimName': '', 'message': 'scenario/HylianGeneralTalk:LuberiTalkCommon_Q1', 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        Event543:
        switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
          case 0:
            Luberi.Talk({'message': 'scenario/HylianGeneralTalk:LuberiHouseLuberiTalk030_010', 'getAttention': False})
            Event86:
            Luberi.Talk({'message': 'scenario/HylianGeneralTalk:LuberiTalkCommon_Q1', 'getAttention': False})
            goto Event543
          case 1:

            call _talkLink()

            goto Event86
          case 2:
            Luberi.Talk({'message': 'scenario/HylianGeneralTalk:LuberiTalkCommon_Q1_A2_010', 'getAttention': False})
        }
    }
}

void talk040() {
    Luberi.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/HylianGeneralTalk:LuberiHouseLuberiTalk040_005', 'keepTalk': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    Luberi.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Luberi.TalkKeep({'message': 'scenario/HylianGeneralTalk:LuberiHouseLuberiTalk040_006', 'getAttention': False})
    Luberi.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Luberi.Talk({'message': 'scenario/HylianGeneralTalk:LuberiHouseLuberiTalk040_007', 'getAttention': False})
    Luberi.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Luberi.Talk({'message': 'scenario/HylianGeneralTalk:LuberiHouseLuberiTalk040_011', 'getAttention': False})
}

void talk050() {
    if !EventFlags.CheckFlag({'symbol': 'EventLuberiLvUpTalk'}) {

        call Luberi_LvUpTuto()

    } else {
        Luberi.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/HylianGeneralTalk:LuberiHouseLuberiTalk050_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        Luberi.TalkKeep({'message': 'scenario/HylianGeneralTalk:LuberiTalkCommon_Q1', 'getAttention': False})
        Event126:
        switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
          case 0:
            Luberi.TalkKeep({'message': 'scenario/HylianGeneralTalk:LuberiHouseLuberiTalk050_020', 'getAttention': False})
            Event193:
            Luberi.TalkKeep({'message': 'scenario/HylianGeneralTalk:LuberiTalkCommon_Q1', 'getAttention': False})
            goto Event126
          case 1:

            call _talkLink()

            goto Event193
          case 2:
            Luberi.Talk({'message': 'scenario/HylianGeneralTalk:LuberiTalkCommon_Q1_A2_010', 'getAttention': False})
        }
    }
}

void _talkLink() {
    Luberi.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Luberi.TalkKeep({'message': 'scenario/StoryAreaA:PastOfLink_010', 'getAttention': False})
    Luberi.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Luberi.TalkKeep({'message': 'scenario/StoryAreaA:PastOfLink_020', 'getAttention': False})
    Luberi.TalkKeep({'message': 'scenario/StoryAreaA:PastOfLink_030', 'getAttention': False})
    Luberi.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Luberi.TalkKeep({'message': 'scenario/StoryAreaA:PastOfLink_031', 'getAttention': False})
    Luberi.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Luberi.TalkKeep({'message': 'scenario/StoryAreaA:PastOfLink_032', 'getAttention': False})
    Luberi.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Luberi.TalkKeep({'message': 'scenario/StoryAreaA:PastOfLink_040', 'getAttention': False})
}

void talk060() {
    if !EventFlags.CheckFlag({'symbol': 'EventLuberiLvUpTalk'}) {

        call Luberi_LvUpTuto()

    } else
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/HylianGeneralTalk:LuberiTalk060_020'}) {
        Luberi.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/HylianGeneralTalk:LuberiTalk060_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        Luberi.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        call GeneralSequence.ZeldaTalkMotion()

        Luberi.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Luberi.TalkKeep({'message': 'scenario/HylianGeneralTalk:LuberiTalk060_020', 'getAttention': False})
        Luberi.TalkKeep({'message': 'scenario/HylianGeneralTalk:LuberiTalk060_030', 'getAttention': False})
        Event158:
        Luberi.TalkKeep({'message': 'scenario/HylianGeneralTalk:LuberiTalkCommon_Q1', 'getAttention': False})
        Event156:
        switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
          case 0:
            Luberi.TalkKeep({'message': 'scenario/HylianGeneralTalk:LuberiTalk060_040', 'getAttention': False})
            Event161:
            Luberi.TalkKeep({'message': 'scenario/HylianGeneralTalk:LuberiTalkCommon_Q1', 'getAttention': False})
            goto Event156
          case 1:

            call _talkLink()

            goto Event161
          case 2:
            Luberi.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Luberi.Talk({'message': 'scenario/HylianGeneralTalk:LuberiTalkCommon_Q1_A2_020', 'getAttention': False})
        }
    } else {

        fork {
            Luberi.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:LuberiTalk060_030', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_LUB_004', 'volume': 1.0, 'pitch': 1.0})
        }

        goto Event158
    }
}

void talk070() {
    if !EventFlags.CheckFlag({'symbol': 'EventLuberiLvUpTalk'}) {

        call Luberi_LvUpTuto()

    } else
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/HylianGeneralTalk:LuberiHouseLuberiTalk070_010'}) {
        Luberi.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/HylianGeneralTalk:LuberiHouseLuberiTalk070_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        Luberi.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        call GeneralSequence.ZeldaTalkMotion()

        Luberi.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Luberi.Talk({'message': 'scenario/HylianGeneralTalk:LuberiHouseLuberiTalk070_020', 'getAttention': False})
        Luberi.PlayAnimationNoWait({'name': 'surprised_ed,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Luberi.Talk({'message': 'scenario/HylianGeneralTalk:LuberiHouseLuberiTalk070_030', 'getAttention': False})
        Luberi.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        call GeneralSequence.ZeldaTalkMotion()

        Luberi.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Luberi.Talk({'message': 'scenario/HylianGeneralTalk:LuberiHouseLuberiTalk070_040', 'getAttention': False})
        Luberi.Talk({'message': 'scenario/HylianGeneralTalk:LuberiHouseLuberiTalk070_050', 'getAttention': False})
        Event173:
        Luberi.TalkKeep({'message': 'scenario/HylianGeneralTalk:LuberiTalkCommon_Q1', 'getAttention': False})
        Event170:
        switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
          case 0:
            Luberi.TalkKeep({'message': 'scenario/HylianGeneralTalk:LuberiHouseLuberiTalk070_060', 'getAttention': False})
            Event179:
            Luberi.TalkKeep({'message': 'scenario/HylianGeneralTalk:LuberiTalkCommon_Q1', 'getAttention': False})
            goto Event170
          case 1:

            call _talkLink()

            goto Event179
          case 2:
            Luberi.Talk({'message': 'scenario/HylianGeneralTalk:LuberiTalkCommon_Q1_A3_010_LinkSave', 'getAttention': False})
        }
    } else {

        fork {
            Luberi.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:LuberiHouseLuberiTalk070_050', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_LUB_007', 'volume': 1.0, 'pitch': 1.0})
        }

        goto Event173
    }
}

void Area3Quest_Start() {

    call AreaStartCommon.FieldWalkIn()

}

void talk041() {
    if !EventFlags.CheckFlag({'symbol': 'EventLuberiLvUpTalk'}) {

        call Luberi_LvUpTuto()

    } else {
        Luberi.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:LuberiTalkCommon_Q1', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        Event88:
        switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
          case 0:
            Luberi.TalkKeep({'message': 'scenario/HylianGeneralTalk:LuberiHouseLuberiTalk050_020', 'getAttention': False})
            Event147:
            Luberi.Talk({'message': 'scenario/HylianGeneralTalk:LuberiTalkCommon_Q1', 'getAttention': False})
            goto Event88
          case 1:

            call _talkLink()

            goto Event147
          case 2:
            Luberi.Talk({'message': 'scenario/HylianGeneralTalk:LuberiTalkCommon_Q1_A2_010', 'getAttention': False})
        }
    }
}
