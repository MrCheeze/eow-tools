-------- EventFlow: Coast --------

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: ['GetLastResult']
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['ForbidLaunchApplet', 'UnforbidLaunchApplet']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['Open', 'SetProgress']
queries: ['CheckProgress']
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayJingle']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'LookAt3ActorsCenterAsTalker', 'Reset', 'MoveToWithTimeout']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: []
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: []
queries: []
params: None

Actor: ZoraSea006
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'SetFacialExpression', 'PlayAnimationNoWait', 'Talk', 'LookAtGimmicksLinkedPoint']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'AimPlayer', 'AimCompassPoint', 'PlayAnimationNoWait', 'MoveToTargetActor', 'AimActor']
queries: []
params: None

Actor: LocationInfoUI
entrypoint: None()
actions: ['Show', 'Hide', 'PreloadArchive']
queries: []
params: None

Actor: HylianM026
entrypoint: None()
actions: ['Talk', 'SetFacialExpression', 'PlayAnimationNoWait', 'AimPlayer', 'SkipAutoTurn', 'KeepAnimationAfterEvent', 'SetInterestIkEnabled']
queries: []
params: None

Actor: HylianF011
entrypoint: None()
actions: ['Talk', 'SetFacialExpression', 'PlayAnimationNoWait', 'AimPlayer', 'SkipAutoTurn', 'KeepAnimationAfterEvent', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'AimToLocation', 'AimCompassPoint', 'MoveToTargetActor']
queries: []
params: None

Actor: QuestShipLid
entrypoint: None()
actions: ['Destroy']
queries: []
params: None

Actor: Movie
entrypoint: None()
actions: ['Play', 'Close', 'Prepare']
queries: []
params: None

void CoastRiverOverview() {

    call EvResetCommon.AllReset()

    EventFlags.SetFlag({'symbol': 'EvB_Overview', 'value': True})

    fork {
        Timer.Wait({'time': 0.5})
    } {
        LocationInfoUI.PreloadArchive()
    }


    fork {
        Camera.MoveToWithTimeout({'timeout': 3.0, 'targetPositionY': 7.5, 'targetPositionX': 542.0, 'targetPositionZ': 218.0, 'maxSpeed': 2.0, 'chaseRatio': 0.07999999821186066})
    } {
        Movie.Prepare({'filename': 'rd013_CoastRiverOverview'})
    } {
        GameControl.ForbidLaunchApplet()
    }


    fork {
        Movie.Play({'autoClose': False})
    } {
        Timer.Wait({'time': 1.0})
        LocationInfoUI.Show({'eventMessage': 'ui/LocationInfo:LocationInfo_Field_RiverCoast', 'message': 'glossary/Location:region003'})
        Timer.Wait({'time': 5.0})
        LocationInfoUI.Hide()
    }


    fork {
        Movie.Close()
    } {
        Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})
    } {
        GameControl.UnforbidLaunchApplet()
    }

    Timer.Wait({'time': 1.0})
    Timer.Wait({'time': 1.0})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'chaseRatio': 0.10000000149011612, 'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.20000000298023224})

    call GeneralSequence.Look_at_Partner()

    Timer.Wait({'time': 0.4000000059604645})
    Partner[companion].PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaB:Coast_River_Overview_010', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaB:Coast_River_Overview_020', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        Player.AimToLocation({'location': 'ViewFieldSea03_cam', 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    }

    QuestSystem.SetProgress({'symbol': 'Coast_River:2484872267', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void AccidentAtCoast() {

    call EvResetCommon.AllReset()

    QuestSystem.Open({'questKey': 'Calamity_Coast', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventFlags.SetFlag({'symbol': 'EvB_Calamity_CoastStart', 'value': False})
    Timer.Wait({'time': 0.4000000059604645})

    fork {
        Dialog.Show({'message': 'scenario/StoryAreaB:AccidentAtCoast_010'})
    } {
        Timer.Wait({'time': 0.800000011920929})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Area"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].MoveToTargetActor({'speed': 1, 'offsetY': 1.0, 'offsetX': 1.0, 'distance': 2.0, 'actor': ActorIdentifier(name="Player"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Area"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].PlayAnimationNoWait({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.0})
        Player.AimActor({'actor': ActorIdentifier(name="Area"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Dialog.Show({'message': 'scenario/StoryAreaB:AccidentAtCoast_020'})

    fork {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {

        call GeneralSequence.Look_at_Partner()

        Timer.Wait({'time': 0.20000000298023224})
    }


    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].Talk({'message': 'scenario/StoryAreaB:AccidentAtCoast_030', 'getAttention': False})
    }

    EventFlags.SetFlag({'symbol': 'EvB_AccidentAtCoast', 'value': True})
}

void CaveEntranceDestroy() {
    if !EventFlags.CheckFlag({'symbol': 'EvB_DestroyCaveEntrance_Coast'}) {
        ZoraSea006.LookAtGimmicksLinkedPoint({'pointIndex': 0, 'distanceOffset': -2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Timer.Wait({'time': 1.2000000476837158})
        Audio.PlayJingle({'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
        EventFlags.SetFlag({'symbol': 'EvB_DestroyCaveEntrance_Coast', 'value': True})
        Timer.Wait({'time': 1.2000000476837158})
        Event48:
        ZoraSea006.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/StoryAreaB:CaveEntranceDestroy_010', 'facial': 'surprise', 'selfTalkAnimName': 'surprised_st01', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        ZoraSea006.LookAtGimmicksLinkedPoint({'pointIndex': 0, 'distanceOffset': -2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        ZoraSea006.SetFacialExpression({'expression': 'sad'})
        ZoraSea006.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSea006.Talk({'message': 'scenario/StoryAreaB:CaveEntranceDestroy_020', 'getAttention': False})
    } else {
        goto Event48
    }
}

void PeopleAfraidOfJabujabu() {

    call EvResetCommon.AllReset()

    Player.AimActor({'actor': ActorIdentifier(name="HylianF011"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        HylianM026.SetInterestIkEnabled({'enable': False})
    } {
        HylianF011.SetInterestIkEnabled({'enable': False})
    }

    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HylianM026"), 'actor2': ActorIdentifier(name="HylianF011"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        HylianM026.SetFacialExpression({'expression': 'sad'})
    } {
        HylianM026.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM026.Talk({'message': 'scenario/StoryAreaB:PeopleAfraidOfJabujabu_010', 'getAttention': False})
    }


    fork {
        HylianF011.SetFacialExpression({'expression': 'sad'})
    } {
        HylianF011.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HylianF011.Talk({'message': 'scenario/StoryAreaB:PeopleAfraidOfJabujabu_Q1', 'getAttention': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HylianM026"), 'actor2': ActorIdentifier(name="HylianF011"), 'actor3': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

        fork {
            HylianF011.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            HylianM026.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            HylianM026.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Timer.Wait({'time': 0.5})
        HylianM026.SetFacialExpression({'expression': 'normal'})
        HylianM026.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HylianM026.Talk({'message': 'scenario/StoryAreaB:PeopleAfraidOfJabujabu_Q1_A1_010', 'getAttention': False})

        fork {
            HylianF011.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HylianM026.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        HylianF011.Talk({'message': 'scenario/StoryAreaB:PeopleAfraidOfJabujabu_Q2', 'getAttention': False})
        if !Dialog.GetLastResult({'resultOnSkip': 1}) {
            HylianM026.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            HylianM026.Talk({'message': 'scenario/StoryAreaB:PeopleAfraidOfJabujabu_Q2_A1_010', 'getAttention': False})
            HylianM026.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Partner[companion].Talk({'message': 'scenario/StoryAreaB:PeopleAfraidOfJabujabu_020', 'getAttention': False})
            Timer.Wait({'time': 0.5})

            fork {
                Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Partner", sub_name="companion"), 'actor2': ActorIdentifier(name="Zelda"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
            } {
                Timer.Wait({'time': 0.20000000298023224})

                call GeneralSequence.Look_at_Partner()

            }

            Timer.Wait({'time': 0.20000000298023224})
            Partner[companion].Talk({'message': 'scenario/StoryAreaB:PeopleAfraidOfJabujabu_030', 'getAttention': False})

            fork {
                HylianF011.SkipAutoTurn()
            } {
                HylianM026.SkipAutoTurn()
            } {
                HylianM026.KeepAnimationAfterEvent()
            } {
                HylianF011.KeepAnimationAfterEvent()
            } {
                Player.AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
            } {
                Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
            } {
                Partner[companion].AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
            }

            EventFlags.SetFlag({'symbol': 'EvB_PeopleAfraidOfJabujabu', 'value': True})
            if QuestSystem.CheckProgress({'symbol': 'Coast_River:3565611949'}) in [4294967295, 0] {
                QuestSystem.SetProgress({'symbol': 'QuestIcon_Coast_River:3637805137', 'isShowTelopInEvent': False, 'isFrontFade': False})
                QuestSystem.SetProgress({'symbol': 'Coast_River:3565611949', 'isShowTelopInEvent': False, 'isFrontFade': False})
            }
        } else {
            Event86:

            fork {
                HylianM026.SetFacialExpression({'expression': 'sad'})
            } {
                HylianM026.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HylianM026.Talk({'message': 'scenario/StoryAreaB:PeopleAfraidOfJabujabu_Q1_A2_010', 'getAttention': False})
            }


            fork {
                HylianF011.SkipAutoTurn()
            } {
                HylianM026.SkipAutoTurn()
            } {
                HylianM026.KeepAnimationAfterEvent()
            } {
                HylianF011.KeepAnimationAfterEvent()
            } {
                Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
            }

            EventFlags.SetFlag({'symbol': 'EvB_PeopleAfraidOfJabujabu', 'value': True})
        }
    } else {
        goto Event86
    }
}

void InactiveShipLid() {
    QuestShipLid.Destroy()

    fork {

        call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

    } {
        Player.MoveToTargetActor({'speed': 0, 'actor': ActorIdentifier(name="Player"), 'distance': 1.2999999523162842, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

}
