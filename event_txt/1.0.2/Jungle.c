-------- EventFlow: Jungle --------

Actor: Partner
entrypoint: None()
actions: ['PlayAnimation', 'Talk', 'MoveToCompassPoint']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['CheckProgress']
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag', 'CheckMessgaeFlag']
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimCompassPoint', 'AimActor', 'LookAtTalker', 'WarpToActor', 'SetInterestIkEnabled', 'GenericItemGetSequence']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump', 'UnforbidWarp', 'ForbidLaunchApplet', 'UnforbidLaunchApplet']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE', 'SetTimeToRegionBgmPlay', 'StopRegionBgm', 'PlayBGM', 'PlayZoneBGM', 'StopBGM', 'Prepare', 'DisablePlaySeFromTailor', 'EnablePlaySeFromTailor']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset', 'StartParam']
queries: []
params: None

Actor: Deku011
entrypoint: None()
actions: ['Activate', 'SetInterestIkEnabled', 'PlayAnimation', 'AimActor', 'Destroy']
queries: []
params: None

Actor: Deku017
entrypoint: None()
actions: ['Talk', 'PlayAnimation', 'PlayAnimationNoWait', 'AimPlayer', 'AimActor', 'WarpToActorLinkedPoint', 'LookAtTalker', 'AimCompassPoint', 'SetInterestIkEnabled', 'MoveToCompassPoint', 'Activate', 'Destroy']
queries: []
params: None

Actor: Deku007
entrypoint: None()
actions: ['Talk', 'PlayAnimation', 'PlayAnimationNoWait', 'AimActor', 'AimPlayer', 'MoveToBesideTargetActor', 'MoveToTargetLinkedPoint', 'Destroy', 'SetInterestIkEnabled', 'LookAtGimmick', 'ResetAim', 'ChangeSteeringAnimation', 'MoveToCompassPoint', 'AimCompassPoint']
queries: []
params: None

Actor: Deku006
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'AimActor', 'SetInterestIkEnabled', 'MoveToBesideTargetActor', 'AimPlayer', 'ResetAim', 'PlayAnimation']
queries: []
params: None

Actor: Deku008
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'AimActor', 'SetInterestIkEnabled', 'PlayAnimation', 'MoveToBesideTargetActor', 'AimPlayer', 'ResetAim']
queries: []
params: None

Actor: Deku019
entrypoint: None()
actions: ['SetComponentActive']
queries: []
params: None

Actor: Deku023
entrypoint: None()
actions: ['Talk', 'LookAtTalker', 'PlayAnimationNoWait', 'PlayAnimation']
queries: []
params: None

Actor: Deku009
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'PlayAnimation']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

Actor: Deku005
entrypoint: None()
actions: ['SetComponentActive']
queries: []
params: None

Actor: Deku003
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'PlayAnimation', 'SetInterestIkEnabled', 'AimActor', 'MoveToBesideTargetActor', 'AimPlayer', 'ResetAim']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt3ActorsCenterAsTalker', 'LookAt2ActorsCenterAsTalker', 'Reset', 'PlayActorOriginCameraAnimation', 'MoveToWithTimeout']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Deku022
entrypoint: None()
actions: ['Talk', 'PlayAnimation', 'PlayAnimationNoWait', 'AimPlayer', 'AimActor', 'WarpToActorLinkedPoint', 'AimCompassPoint', 'SetInterestIkEnabled', 'MoveToCompassPoint']
queries: []
params: None

Actor: Deku024
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'PlayAnimation']
queries: []
params: None

Actor: Deku013[ev]
entrypoint: None()
actions: ['PlayAnimationNoWait', 'MoveToCompassPoint', 'AimCompassPoint', 'Activate', 'Deactivate', 'SetInterestIkEnabled', 'PlayAnimationEx', 'AimActor', 'PlayAnimation']
queries: []
params: None

Actor: Deku019[ev]
entrypoint: None()
actions: ['MoveToCompassPoint', 'AimActor', 'AimCompassPoint', 'PlayAnimationNoWait', 'Activate', 'Deactivate', 'SetInterestIkEnabled', 'PlayAnimationEx', 'ChangeSteeringAnimation', 'WarpToActor', 'SetComponentActive']
queries: []
params: None

Actor: Deku021[ev]
entrypoint: None()
actions: ['MoveToCompassPoint', 'PlayAnimation', 'AimCompassPoint', 'LookAtGimmick', 'AimActor', 'PlayAnimationNoWait', 'Activate', 'Deactivate', 'SetInterestIkEnabled', 'PlayAnimationEx', 'ChangeSteeringAnimation']
queries: []
params: None

Actor: Deku005[ev]
entrypoint: None()
actions: ['MoveToCompassPoint', 'AimActor', 'AimCompassPoint', 'PlayAnimationNoWait', 'Activate', 'Deactivate', 'SetInterestIkEnabled', 'PlayAnimationEx', 'ChangeSteeringAnimation', 'WarpToActor', 'SetComponentActive']
queries: []
params: None

Actor: Deku016[ev]
entrypoint: None()
actions: ['Activate', 'Deactivate', 'TrailRail', 'AimActor', 'PlayAnimation', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Deku001[ev]
entrypoint: None()
actions: ['Deactivate', 'TrailRail', 'AimActor', 'PlayAnimation', 'Activate', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Deku014[ev]
entrypoint: None()
actions: ['Activate', 'Deactivate', 'SetInterestIkEnabled', 'PlayAnimation']
queries: []
params: None

Actor: Deku015[ev]
entrypoint: None()
actions: ['PlayAnimation', 'Activate', 'Deactivate', 'SetInterestIkEnabled', 'AimActor']
queries: []
params: None

Actor: Deku009[ev]
entrypoint: None()
actions: ['Activate', 'Deactivate', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Deku018[ev]
entrypoint: None()
actions: ['PlayAnimation', 'Activate', 'Deactivate', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Deku023[ev]
entrypoint: None()
actions: ['Activate', 'Deactivate', 'SetInterestIkEnabled', 'PlayAnimationNoWait']
queries: []
params: None

Actor: Deku024[ev]
entrypoint: None()
actions: ['Activate', 'Deactivate', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Deku010[ev]
entrypoint: None()
actions: ['PlayAnimation', 'Activate', 'Deactivate', 'TrailRail', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Deku024[gen]
entrypoint: None()
actions: ['Deactivate', 'Activate']
queries: []
params: None

Actor: Deku009[gen]
entrypoint: None()
actions: ['Deactivate', 'Activate']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'AimCompassPoint', 'MoveToCompassPoint', 'LookAtTalker', 'SetInterestIkEnabled', 'AimToLocation', 'AimDegreeAngle', 'PlayAnimationNoWait', 'WarpToActor', 'PlayAnimationEx', 'WarpToActorLinkedPoint', 'PlayAnimation', 'ResetAim', 'MorphTo']
queries: ['CheckMorph']
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'GenericTalkSequenceWithDialog', 'PlayAnimationNoWait', 'PlayAnimation', 'AimPlayer', 'AimCompassPoint', 'AimToLocation', 'MoveToTargetActor', 'MoveToBesideTargetActor', 'AimActor', 'MoveToCompassPoint', 'LookAtGimmick', 'AimDegreeAngle', 'PlayAnimationEx', 'WarpToActor', 'ResetAim']
queries: []
params: None

Actor: Deku027
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'PlayAnimation', 'AimPlayer', 'SetInterestIkEnabled', 'AimCompassPoint', 'AimActor']
queries: []
params: None

Actor: Deku028
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'AimPlayer', 'PlayAnimation', 'SetInterestIkEnabled', 'AimCompassPoint', 'AimActor']
queries: []
params: None

Actor: JungleRuinsDoor
entrypoint: None()
actions: ['PlayAnimation', 'Destroy', 'LookAtGimmick', 'LookAtTalker']
queries: []
params: None

Actor: Deku028[gen]
entrypoint: None()
actions: ['Destroy']
queries: []
params: None

Actor: Deku027[gen]
entrypoint: None()
actions: ['Destroy']
queries: []
params: None

Actor: Deku002[ev]
entrypoint: None()
actions: ['PlayAnimation', 'MoveToCompassPoint', 'AimCompassPoint', 'Activate', 'Deactivate', 'SetInterestIkEnabled', 'PlayAnimationEx', 'AimActor']
queries: []
params: None

Actor: Deku025
entrypoint: None()
actions: ['Talk', 'AimPlayer', 'PlayAnimationNoWait', 'SetInterestIkEnabled', 'MoveToTargetActor']
queries: []
params: None

Actor: Deku026
entrypoint: None()
actions: ['AimPlayer', 'Talk', 'PlayAnimationNoWait', 'SetInterestIkEnabled', 'MoveToTargetActor']
queries: []
params: None

Actor: LocationInfoUI
entrypoint: None()
actions: ['PreloadArchive', 'Show', 'Hide']
queries: []
params: None

Actor: Deku029
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog']
queries: []
params: None

Actor: DekuMerchant
entrypoint: None()
actions: ['Destroy', 'SetInterestIkEnabled', 'PlayAnimation']
queries: []
params: None

Actor: Movie
entrypoint: None()
actions: ['Play', 'Close', 'Prepare']
queries: []
params: None

Actor: evAirWallcommon
entrypoint: None()
actions: ['Deactivate']
queries: []
params: None

Actor: Deku014[gen]
entrypoint: None()
actions: ['Deactivate', 'Activate']
queries: []
params: None

Actor: Deku010[gen]
entrypoint: None()
actions: ['Deactivate', 'Activate']
queries: []
params: None

Actor: Deku018[gen]
entrypoint: None()
actions: ['Deactivate', 'Activate']
queries: []
params: None

Actor: Deku023[gen]
entrypoint: None()
actions: ['Deactivate', 'Activate']
queries: []
params: None

Actor: Deku015[gen]
entrypoint: None()
actions: ['Deactivate', 'Activate']
queries: []
params: None

void AreaFIntroduction() {

    call EvResetCommon.AllReset()

    EventFlags.SetFlag({'symbol': 'EvF_Overview', 'value': True})

    fork {
        Timer.Wait({'time': 0.5})
    } {
        LocationInfoUI.PreloadArchive()
    }


    fork {
        Camera.MoveToWithTimeout({'timeout': 3.0, 'targetPositionX': 522.5, 'targetPositionY': 1.5, 'targetPositionZ': 341.0, 'maxSpeed': 2.0, 'chaseRatio': 0.07999999821186066})
    } {
        Movie.Prepare({'filename': 'rd032_AreaFIntroduction'})
    } {
        GameControl.ForbidLaunchApplet()
    }


    fork {
        Movie.Play({'autoClose': False})
    } {
        Timer.Wait({'time': 1.0})
        LocationInfoUI.Show({'message': 'glossary/Location:Field_010', 'eventMessage': 'ui/LocationInfo:LocationInfo_Field_Jungle'})
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

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'chaseRatio': 0.10000000149011612, 'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.20000000298023224})
    Player.SetInterestIkEnabled({'enable': True})
    Player.AimActor({'offsetY': -1.5, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.4000000059604645})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:AreaFIntroduction_010', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:AreaFIntroduction_020', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        Player.AimToLocation({'location': 'ViewFieldJungle03_cam', 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Partner[companion].AimToLocation({'location': 'ViewFieldJungle03_cam', 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    QuestSystem.SetProgress({'symbol': 'Jungle:1171821801', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvF_ApproachEntranceRuins'})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvF_DekusTrend'})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvF_ApproachIncorrectCrackA'})
}

void ApproachEntranceRuins() {

    call EvResetCommon.AllReset()


    fork {
        Deku027.SetInterestIkEnabled({'enable': False})
    } {
        Deku028.SetInterestIkEnabled({'enable': False})
    }


    fork {
        Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetY': 1.0, 'offsetZ': 0.0, 'offsetX': -1.5, 'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0})
        Partner[companion].AimActor({'offsetY': -1.5, 'actor': ActorIdentifier(name="JungleRuinsDoor"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.AimActor({'offsetY': -1.5, 'actor': ActorIdentifier(name="JungleRuinsDoor"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        Partner[companion].LookAtGimmick({'offsetY': 0.0, 'offsetZ': 0.0, 'duration': 0.0, 'chaseRatio': 0.07999999821186066, 'keep': False, 'distanceOffset': -4.0, 'offsetX': 0.0})

        fork {
            Partner[companion].PlayAnimationNoWait({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 3.0})
        } {
            Audio.PlayOneshotSystemSE({'label': 'SE_PARTNER_LOOKAROUND', 'volume': 1.0, 'pitch': 1.0})
        }

        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.0})
        Player.AimActor({'offsetY': -1.5, 'withoutTurn': False, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'offsetY': -1.5, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].AimActor({'actor': ActorIdentifier(name="JungleRuinsDoor"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        JungleRuinsDoor.LookAtGimmick({'offsetZ': -5.0, 'duration': 1.0, 'offsetY': 7.0, 'distanceOffset': 16.0, 'chaseRatio': 0.02199999988079071, 'offsetX': 0.0, 'keep': False})
    } {
        Partner[companion].MoveToCompassPoint({'offsetX': 0.0, 'timeOut': 8.0, 'withoutTurn': True, 'speed': 1, 'distance': 17.0, 'direction': 5, 'offsetY': 0.0, 'tolerance': 0.0, 'customSpeed': 0.0, 'method': 0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_PARTNER_MOVE', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 1.5})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:ApproachEntranceRuins_010', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].MoveToBesideTargetActor({'offsetY': 1.0, 'offsetZ': 0.0, 'offsetX': -1.5, 'speed': 1, 'customSpeed': 7.0, 'withoutTurn': True, 'actor': ActorIdentifier(name="Player"), 'tolerance': 0.0, 'timeOut': 7.0, 'method': 0})
    } {
        Timer.Wait({'time': 0.800000011920929})
        Player.LookAtTalker({'offsetY': 1.0, 'chaseRatio': 0.07999999821186066, 'duration': 0.4000000059604645, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetZ': 0.0, 'keep': False})
        Player.AimActor({'offsetY': -1.5, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Camera.LookAt2ActorsCenterAsTalker({'duration': 0.5, 'chaseRatio': 0.07999999821186066, 'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Partner[companion].AimPlayer({'offsetY': 1.0, 'duration': 0.20000000298023224, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Player.AimActor({'offsetY': -1.5, 'withoutTurn': False, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:ApproachEntranceRuins_010_02', 'getAttention': False})

    fork {
        Partner[companion].MoveToTargetActor({'speed': 0, 'distance': -5.0, 'tolerance': 1.0, 'offsetY': 1.0, 'timeOut': 5.0, 'actor': ActorIdentifier(name="JungleRuinsDoor"), 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'offsetY': -1.5, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 1.600000023841858})
    Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetY': 1.0, 'offsetZ': 0.0, 'offsetX': -1.5, 'actor': ActorIdentifier(name="Player"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})

    fork {
        Partner[companion].AimPlayer({'offsetY': 1.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'offsetY': -1.5, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:ApproachEntranceRuins_020', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:ApproachEntranceRuins_025', 'getAttention': False})

    fork {
        Deku027.SetInterestIkEnabled({'enable': False})
        Deku027.PlayAnimation({'name': 'surprised_st01,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku027.Talk({'message': 'scenario/StoryAreaF:ApproachEntranceRuins_030', 'getAttention': False})
    } {
        Deku027.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Deku027"), 'actor3': ActorIdentifier(name="Deku028"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku027"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku027"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku027.PlayAnimationNoWait({'name': 'surprised_st01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku027.Talk({'message': 'scenario/StoryAreaF:ApproachEntranceRuins_035', 'getAttention': False})

    fork {
        Deku027.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku027.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.4000000059604645})

    fork {
        Timer.Wait({'time': 0.10000000149011612})
        Player.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetY': -1.5, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.4000000059604645})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:ApproachEntranceRuins_040', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku028.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.4000000059604645})
    Deku028.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.5})
        Player.AimActor({'actor': ActorIdentifier(name="Deku028"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku028"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku028.Talk({'message': 'scenario/StoryAreaF:ApproachEntranceRuins_050', 'getAttention': False})
    }

    Deku028.PlayAnimationNoWait({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku028.Talk({'message': 'scenario/StoryAreaF:ApproachEntranceRuins_060', 'getAttention': False})
    Deku028.PlayAnimationNoWait({'name': 'surprised_st01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku028.Talk({'message': 'scenario/StoryAreaF:ApproachEntranceRuins_080', 'getAttention': False})
    Deku028.PlayAnimationNoWait({'name': 'surprised_st01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku028.Talk({'message': 'scenario/StoryAreaF:ApproachEntranceRuins_090', 'getAttention': False})

    fork {
        Deku028.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku028.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'chaseRatio': 0.10000000149011612, 'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.20000000298023224})
    Player.SetInterestIkEnabled({'enable': True})
    Player.AimActor({'offsetY': -1.5, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.4000000059604645})
    Partner[companion].PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:ApproachEntranceRuins_130', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:ApproachEntranceRuins_140', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvF_ApproachEntranceRuins_Clear'})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvF_ApproachIncorrectCrackB'})
    QuestSystem.SetProgress({'symbol': 'Jungle:2941835573', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void DekusTrend() {

    call EvResetCommon.AllReset()


    fork {
        Zelda.AimActor({'actor': ActorIdentifier(name="Deku009"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku009"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].MoveToTargetActor({'offsetX': 1.0, 'speed': 0, 'distance': 1.5, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Timer.Wait({'time': 0.5})

    fork {
        Audio.PlayOneshotSystemSE({'label': 'SE_SYS_MESSAGE_TORI2', 'volume': 1.0, 'pitch': 1.0})
    } {
        Partner[companion].PlayAnimationEx({'name': 'lookaround', 'time': 2.0, 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Partner[companion].MoveToBesideTargetActor({'offsetY': 1.0, 'offsetX': -2.0, 'offsetZ': -2.0, 'speed': 0, 'customSpeed': 5.0, 'actor': ActorIdentifier(name="Deku023"), 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku023"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.0})
        Deku023.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    }

    Timer.Wait({'time': 0.4000000059604645})
    Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Audio.PlayOneshotSystemSE({'label': 'SE_SYS_MESSAGE_TORI3', 'volume': 1.0, 'pitch': 1.0})
    Timer.Wait({'time': 1.5})
    Deku023.PlayAnimationNoWait({'name': 'talk_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku023.Talk({'message': 'scenario/StoryAreaF:DekusTrend_010', 'getAttention': False})
    Deku023.PlayAnimation({'name': 'eat_lp_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        Partner[companion].MoveToBesideTargetActor({'offsetY': 1.0, 'offsetX': 2.0, 'offsetZ': 2.0, 'actor': ActorIdentifier(name="Deku009"), 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku009"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Camera.LookAt2ActorsCenterAsTalker({'weight1': 1.0, 'weight2': 1.0, 'actor1': ActorIdentifier(name="Deku009"), 'actor2': ActorIdentifier(name="Deku024"), 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    Timer.Wait({'time': 0.4000000059604645})
    Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Audio.PlayOneshotSystemSE({'label': 'SE_SYS_MESSAGE_TORI2', 'volume': 1.0, 'pitch': 1.0})
    Timer.Wait({'time': 1.5})
    Deku024.PlayAnimationNoWait({'name': 'talk_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku024.Talk({'message': 'scenario/StoryAreaF:DekusTrend_020', 'getAttention': False})
    Deku024.PlayAnimation({'name': 'eat_lp_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku009.PlayAnimationNoWait({'name': 'talk_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku009.Talk({'message': 'scenario/StoryAreaF:DekusTrend_030', 'getAttention': False})
    Deku009.Talk({'message': 'scenario/StoryAreaF:DekusTrend_040', 'getAttention': False})
    Deku009.PlayAnimation({'name': 'eat_lp_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku024.PlayAnimation({'name': 'talk_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku024.Talk({'message': 'scenario/StoryAreaF:DekusTrend_045', 'getAttention': False})
    Deku024.PlayAnimation({'name': 'eat_lp_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        Partner[companion].MoveToTargetActor({'offsetY': 1.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': 0.0, 'distance': 1.5, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.0})
        Zelda.LookAtTalker({'distanceOffset': 2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {

        call GeneralSequence.Look_at_Partner()

    }

    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:DekusTrend_050', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Partner[companion].PlayAnimationNoWait({'name': 'ev_think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:DekusTrend_060', 'getAttention': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvF_DekusTrend_Clear'})
}

void ApproachIncorrectCrackA() {
    Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaF:ApproachIncorrectCrackA_010', 'aimFromPlayer': False, 'playerTalkAnim': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvF_ApproachIncorrectCrackA_Clear'})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvF_SolutionIncorrectCrackA'})
}

void SolutionIncorrectCrackA() {
    if !EventFlags.CheckFlag({'symbol': 'EvF_ApproachEntranceRuins_Clear'}) {
        Event194:
        EventFlags.SetFlag({'value': True, 'symbol': 'EvF_SolutionIncorrectCrackA_Clear'})
    } else
    switch QuestSystem.CheckProgress({'symbol': 'Jungle:4220639031'}) {
      case [4294967295, 0]:
        Partner[companion].Talk({'message': 'scenario/StoryAreaF:SolutionIncorrectCrackA_010', 'getAttention': False})
        goto Event194
      case 1:
        goto Event194
    }
}

void ApproachIncorrectCrackB() {

    call EvResetCommon.AllReset()

    Timer.Wait({'time': 0.5})

    fork {
        Zelda.AimActor({'actor': ActorIdentifier(name="Deku017"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku017"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Deku017.LookAtTalker({'chaseRatio': 0.03999999910593033, 'duration': 0.4000000059604645, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku017"), 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'immediateTurn': False})
        Partner[companion].MoveToTargetActor({'speed': 0, 'tolerance': 0.0, 'offsetX': 0.0, 'withoutTurn': True, 'distance': 3.5, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 0.5, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku017"), 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'immediateTurn': False})
        Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 1.0})
    Deku017.PlayAnimationNoWait({'name': 'surprised_st01,panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku017.Talk({'message': 'scenario/StoryAreaF:ApproachIncorrectCrackB_010', 'getAttention': False})
    Camera.LookAt3ActorsCenterAsTalker({'distanceOffset': 2.0, 'actor1': ActorIdentifier(name="Deku017"), 'actor2': ActorIdentifier(name="Player"), 'actor3': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 2.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 1.0})
    Deku017.PlayAnimationNoWait({'name': 'surprised_st01,panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku017.Talk({'message': 'scenario/StoryAreaF:ApproachIncorrectCrackB_020', 'getAttention': False})
    Timer.Wait({'time': 0.800000011920929})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].MoveToTargetActor({'speed': 0, 'tolerance': 0.0, 'withoutTurn': True, 'offsetY': 1.0, 'offsetX': 1.0, 'distance': -1.0, 'actor': ActorIdentifier(name="Zelda"), 'customSpeed': 1.5, 'timeOut': 7.0, 'method': 0})
    Timer.Wait({'time': 0.800000011920929})

    fork {
        Timer.Wait({'time': 0.10000000149011612})

        call GeneralSequence.Look_at_Partner()

    } {
        Partner[companion].AimPlayer({'duration': 0.6000000238418579, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku017"), 'actor2': ActorIdentifier(name="Player"), 'actor3': ActorIdentifier(name="Partner", sub_name="companion"), 'distanceOffset': 2.0, 'weight1': 3.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    Timer.Wait({'time': 0.5})
    Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:ApproachIncorrectCrackB_030', 'getAttention': False})
    switch QuestSystem.CheckProgress({'symbol': 'Jungle:207596745'}) {
      case 4294967295:
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaF:ApproachIncorrectCrackB_035', 'getAttention': False})
        Event562:
        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.5})

        fork {
            Deku017.PlayAnimationNoWait({'name': 'surprised_st01,panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Deku017.Talk({'message': 'scenario/StoryAreaF:ApproachIncorrectCrackB_040', 'getAttention': False})
        } {
            Timer.Wait({'time': 0.5})
            Player.AimActor({'offsetY': -1.5, 'actor': ActorIdentifier(name="Deku017"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.6000000238418579})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku017"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Timer.Wait({'time': 1.0})
        Partner[companion].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaF:ApproachIncorrectCrackB_060', 'getAttention': False})
        EventFlags.SetFlag({'value': True, 'symbol': 'EvF_ApproachIncorrectCrackB_Clear'})
        EventFlags.SetFlag({'value': True, 'symbol': 'EvF_SolutionIncorrectCrackB'})
      case [0, 1]:
        goto Event562
    }
}

void SolutionIncorrectCrackB() {

    call EvResetCommon.AllReset()


    fork {
        Deku017.WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="Deku017"), 'offsetY': 0.0})
        Deku017.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Deku017.SetInterestIkEnabled({'enable': False})
        Deku017.PlayAnimationNoWait({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku022.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="Deku022"), 'offsetY': 0.0})
        Deku022.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Deku022.SetInterestIkEnabled({'enable': False})
        Timer.Wait({'time': 0.5})
        Deku022.PlayAnimationNoWait({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    call GeneralSequence.EvMapWarpIn()

    Player.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        Player.MoveToCompassPoint({'speed': 0, 'direction': 0, 'distance': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    } {
        Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetX': 1.2000000476837158, 'offsetY': 0.699999988079071, 'actor': ActorIdentifier(name="Player"), 'offsetZ': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    }

    Partner[companion].AimDegreeAngle({'angle': -10.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Camera.LookAt3ActorsCenterAsTalker({'distanceOffset': 0.0, 'offsetX': -0.5, 'offsetZ': 0.699999988079071, 'actor1': ActorIdentifier(name="Partner", sub_name="companion"), 'actor2': ActorIdentifier(name="Deku017"), 'actor3': ActorIdentifier(name="Deku022"), 'offsetY': 0.0, 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612})
    Timer.Wait({'time': 0.5})
    Deku022.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku022.Talk({'message': 'scenario/StoryAreaF:SolutionIncorrectCrackB_010', 'getAttention': False})
    Deku017.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku017.AimActor({'actor': ActorIdentifier(name="Deku022"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.4000000059604645})
    Deku017.PlayAnimation({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku017.Talk({'message': 'scenario/StoryAreaF:SolutionIncorrectCrackB_015', 'getAttention': False})

    fork {
        Timer.Wait({'time': 0.10000000149011612})
        Deku022.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku017.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Deku022.AimActor({'actor': ActorIdentifier(name="Deku017"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    Deku022.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku022.Talk({'message': 'scenario/StoryAreaF:SolutionIncorrectCrackB_020', 'getAttention': False})
    Deku022.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})

    fork {
        Deku017.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Deku017.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.5})
    Deku017.Talk({'message': 'scenario/StoryAreaF:SolutionIncorrectCrackB_030', 'getAttention': False})
    Timer.Wait({'time': 1.0})
    Deku022.PlayAnimation({'name': 'tiltyourhead_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku022.Talk({'message': 'scenario/StoryAreaF:SolutionIncorrectCrackB_040', 'getAttention': False})
    Deku022.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Deku017.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku017.Talk({'message': 'scenario/StoryAreaF:SolutionIncorrectCrackB_050', 'getAttention': False})
    Deku017.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku022.PlayAnimation({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku022.Talk({'message': 'scenario/StoryAreaF:SolutionIncorrectCrackB_060', 'getAttention': False})
    Timer.Wait({'time': 0.5})
    Deku017.SetInterestIkEnabled({'enable': True})
    Deku017.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku022"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.6000000238418579})
    Deku017.SetInterestIkEnabled({'enable': False})
    Timer.Wait({'time': 1.0})

    fork {
        Deku017.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku022"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku017.PlayAnimation({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Deku017.Talk({'message': 'scenario/StoryAreaF:SolutionIncorrectCrackB_070', 'getAttention': False})
    Deku022.PlayAnimation({'name': 'yes01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.4000000059604645})
    Deku022.Talk({'message': 'scenario/StoryAreaF:SolutionIncorrectCrackB_080', 'getAttention': False})
    Deku017.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku017.Talk({'message': 'scenario/StoryAreaF:SolutionIncorrectCrackB_090', 'getAttention': False})

    fork {
        Deku022.MoveToCompassPoint({'direction': 1, 'speed': 1, 'distance': 0.800000011920929, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Deku022.PlayAnimationNoWait({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku017.MoveToCompassPoint({'speed': 1, 'direction': 3, 'distance': 0.800000011920929, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Deku017.PlayAnimationNoWait({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Camera.LookAt3ActorsCenterAsTalker({'distanceOffset': 9.0, 'offsetZ': 1.5, 'offsetY': -1.0, 'actor1': ActorIdentifier(name="Partner", sub_name="companion"), 'actor2': ActorIdentifier(name="Deku017"), 'actor3': ActorIdentifier(name="Deku022"), 'chaseRatio': 0.014999999664723873, 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'offsetX': 0.0})
    }


    fork {
        Timer.Wait({'time': 4.5})
    } {
        Timer.Wait({'time': 1.0})
        Partner[companion].PlayAnimation({'name': 'happy,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Timer.Wait({'time': 0.10000000149011612})
        Player.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetY': -1.5, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:SolutionIncorrectCrackB_100', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    if !EventFlags.CheckFlag({'symbol': 'EvF_ApproachEntranceRuins_Clear'}) {
        Event196:
        EventFlags.SetFlag({'value': True, 'symbol': 'EvF_SolutionIncorrectCrackB_Clear'})
    } else
    switch QuestSystem.CheckProgress({'symbol': 'Jungle:1857682978'}) {
      case 4294967295:
        Timer.Wait({'time': 1.0})

        fork {
            Timer.Wait({'time': 0.20000000298023224})
            Partner[companion].AimActor({'offsetY': -1.5, 'actor': ActorIdentifier(name="Deku017"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Player.AimActor({'actor': ActorIdentifier(name="Deku022"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Camera.LookAt3ActorsCenterAsTalker({'offsetZ': 0.0, 'offsetY': -0.5, 'chaseRatio': 0.05999999865889549, 'actor1': ActorIdentifier(name="Partner", sub_name="companion"), 'actor2': ActorIdentifier(name="Deku017"), 'actor3': ActorIdentifier(name="Deku022"), 'distanceOffset': 3.0, 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'offsetX': 0.0})
        }

        Timer.Wait({'time': 0.5})
        Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaF:SolutionIncorrectCrackB_110', 'getAttention': False})
        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            Timer.Wait({'time': 0.10000000149011612})
            Deku017.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Deku017.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Deku022.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Deku022.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            Timer.Wait({'time': 0.4000000059604645})
            Partner[companion].AimActor({'offsetY': -1.5, 'actor': ActorIdentifier(name="Deku017"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.30000001192092896})
            Player.SetInterestIkEnabled({'enable': True})
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku017"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Deku017.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Deku017.Talk({'message': 'scenario/StoryAreaF:SolutionIncorrectCrackB_120', 'getAttention': False})
        }

        Deku017.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            Timer.Wait({'time': 0.4000000059604645})
            Partner[companion].AimActor({'offsetY': -1.5, 'actor': ActorIdentifier(name="Deku022"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.30000001192092896})
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku022"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Deku022.PlayAnimation({'name': 'surprised_st01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Deku022.Talk({'message': 'scenario/StoryAreaF:SolutionIncorrectCrackB_125', 'getAttention': False})
        }


        fork {
            Deku017.AimActor({'actor': ActorIdentifier(name="Deku022"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Deku022.AimActor({'actor': ActorIdentifier(name="Deku017"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Timer.Wait({'time': 0.5})
        Player.LookAtTalker({'chaseRatio': 0.07999999821186066, 'duration': 0.4000000059604645, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})

        fork {
            Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.10000000149011612})

            call GeneralSequence.Look_at_Partner()

        }

        Partner.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaF:SolutionIncorrectCrackB_130', 'getAttention': False})
        Partner.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        switch QuestSystem.CheckProgress({'symbol': 'Jungle:2352048004'}) {
          case 4294967295:
            QuestSystem.SetProgress({'symbol': 'Jungle:775789688', 'isShowTelopInEvent': False, 'isFrontFade': False})
            goto Event196
          case [0, 1]:
            goto Event196
        }
      case [0, 1]:
        goto Event196
    }
}

void ApproachCorrectCrack() {

    call EvResetCommon.AllReset()

    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku003"), 'actor2': ActorIdentifier(name="Deku007"), 'offsetZ': 0.5, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0})

    fork {
        Deku006.SetInterestIkEnabled({'enable': False})
        Deku006.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku006.AimActor({'actor': ActorIdentifier(name="Deku007"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku007.SetInterestIkEnabled({'enable': False})
    } {
        Deku003.SetInterestIkEnabled({'enable': False})
        Deku003.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku003.AimActor({'actor': ActorIdentifier(name="Deku007"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku008.SetInterestIkEnabled({'enable': False})
        Deku008.AimActor({'actor': ActorIdentifier(name="Deku007"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Zelda.AimActor({'actor': ActorIdentifier(name="Deku008"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetX': 1.0, 'offsetY': 1.0, 'offsetZ': 1.0, 'actor': ActorIdentifier(name="Zelda"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku008"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku008.PlayAnimationNoWait({'name': 'talk_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku008.Talk({'message': 'scenario/StoryAreaF:ApproachCorrectCrack_010', 'getAttention': False})
    Deku008.PlayAnimationNoWait({'name': 'eat_lp_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku006.PlayAnimationNoWait({'name': 'angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku006"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku006"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Deku007.AimActor({'actor': ActorIdentifier(name="Deku006"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku006.Talk({'message': 'scenario/StoryAreaF:ApproachCorrectCrack_020', 'getAttention': False})
    }

    Deku006.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku003.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'actor': ActorIdentifier(name="Deku003"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Deku007.AimActor({'actor': ActorIdentifier(name="Deku003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku003.Talk({'message': 'scenario/StoryAreaF:ApproachCorrectCrack_030', 'getAttention': False})
    }

    Deku003.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku007.PlayAnimation({'name': 'no01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'actor': ActorIdentifier(name="Deku007"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku007"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku007.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku007.Talk({'message': 'scenario/StoryAreaF:ApproachCorrectCrack_040', 'getAttention': False})
    }


    fork {
        Timer.Wait({'time': 0.800000011920929})
        Deku007.LookAtGimmick({'offsetX': 8.0, 'distanceOffset': 5.0, 'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {
        Deku007.AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    Deku007.PlayAnimationNoWait({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku007.Talk({'message': 'scenario/StoryAreaF:ApproachCorrectCrack_050', 'getAttention': False})
    Timer.Wait({'time': 0.5})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku003"), 'actor2': ActorIdentifier(name="Deku007"), 'offsetZ': 0.5, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Deku007.AimCompassPoint({'direction': 3, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Deku007.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.5})
    Deku008.AimActor({'actor': ActorIdentifier(name="Deku007"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Deku003.PlayAnimation({'name': 'tiltyourhead_st', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'actor': ActorIdentifier(name="Deku003"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Deku007.AimActor({'actor': ActorIdentifier(name="Deku003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku003.Talk({'message': 'scenario/StoryAreaF:ApproachCorrectCrack_060', 'getAttention': False})
    }

    Deku003.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Deku007.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'actor': ActorIdentifier(name="Deku007"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku007"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku007.Talk({'message': 'scenario/StoryAreaF:ApproachCorrectCrack_070', 'getAttention': False})
    }

    Deku007.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku006.AimActor({'actor': ActorIdentifier(name="Deku007"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Deku006.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'actor': ActorIdentifier(name="Deku006"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku006"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Deku007.AimActor({'actor': ActorIdentifier(name="Deku006"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku006.Talk({'message': 'scenario/StoryAreaF:ApproachCorrectCrack_080', 'getAttention': False})
    }

    Timer.Wait({'time': 0.30000001192092896})
    Deku003.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.5})
    Deku007.PlayAnimation({'name': 'no01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku007.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'actor': ActorIdentifier(name="Deku007"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku007"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku007.Talk({'message': 'scenario/StoryAreaF:ApproachCorrectCrack_090', 'getAttention': False})
    }

    Deku007.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    QuestSystem.SetProgress({'symbol': 'Jungle:459983305', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvF_ApproachCorrectCrack_Clear'})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvF_DekusTrend_Clear'})
}

void OpenDoor() {

    call EvResetCommon.AllReset()

    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Zelda.WarpToActor({'distance': 5.0, 'actor': ActorIdentifier(name="JungleRuinsDoor"), 'offsetY': -0.699999988079071, 'offsetX': 0.0})

    fork {
        Camera.LookAt3ActorsCenterAsTalker({'weight1': 1.0, 'weight2': 1.0, 'actor2': ActorIdentifier(name="Deku027"), 'actor3': ActorIdentifier(name="Deku028"), 'actor1': ActorIdentifier(name="Zelda"), 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Zelda.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Zelda.SetInterestIkEnabled({'enable': True})
    } {
        Partner[companion].MoveToBesideTargetActor({'offsetX': -1.0, 'withoutTurn': True, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 1.0, 'speed': 0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0})
        Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Deku027.SetInterestIkEnabled({'enable': False})
    } {
        Deku028.SetInterestIkEnabled({'enable': False})
    }

    Timer.Wait({'time': 0.800000011920929})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    Timer.Wait({'time': 0.30000001192092896})

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'actor': ActorIdentifier(name="Deku027"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku027"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku027.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Deku027.Talk({'message': 'scenario/StoryAreaF:OpenDoor_010', 'getAttention': False})
    } {
        Deku027.PlayAnimationNoWait({'name': 'surprised_st01,tiltyourhead_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Deku027.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'actor': ActorIdentifier(name="Deku028"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku028"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku028.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Deku028.Talk({'message': 'scenario/StoryAreaF:OpenDoor_020', 'getAttention': False})
    } {
        Deku028.PlayAnimationNoWait({'name': 'surprised_st01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Deku028.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.20000000298023224})
    Player.PlayAnimationEx({'time': 1.0, 'name': 'ev_hand_over', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})

    fork {
        Deku027.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku028.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku027.Talk({'message': 'scenario/StoryAreaF:OpenDoor_030', 'getAttention': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'actor': ActorIdentifier(name="Deku027"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku027"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku027.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Deku027.Talk({'message': 'scenario/StoryAreaF:OpenDoor_040', 'getAttention': False})
    } {
        Deku027.PlayAnimationNoWait({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Deku027.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku028.PlayAnimation({'name': 'yes01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'actor': ActorIdentifier(name="Deku028"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku028"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku028.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Deku028.Talk({'message': 'scenario/StoryAreaF:OpenDoor_050', 'getAttention': False})
    } {
        Deku028.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Deku028.AimActor({'actor': ActorIdentifier(name="JungleRuinsDoor"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Deku028.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        JungleRuinsDoor.LookAtTalker({'distanceOffset': 5.0, 'offsetY': -0.5, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {
        Deku027.AimActor({'actor': ActorIdentifier(name="JungleRuinsDoor"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="JungleRuinsDoor"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="JungleRuinsDoor"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.6000000238418579})

    fork {
        Deku028.PlayAnimationNoWait({'name': 'frightened_st01,wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_DKN_1_6_006_004', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 1.5})
    JungleRuinsDoor.PlayAnimation({'name': 'open', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Partner[companion].PlayAnimation({'name': 'appeal02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_SYS_MESSAGE_TORI3', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 0.5})
    Camera.LookAt3ActorsCenterAsTalker({'weight1': 1.0, 'weight2': 1.0, 'actor2': ActorIdentifier(name="Deku027"), 'actor3': ActorIdentifier(name="Deku028"), 'actor1': ActorIdentifier(name="Zelda"), 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'actor': ActorIdentifier(name="Deku027"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku027"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Deku028.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku027.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.20000000298023224})
        Deku027.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku027.Talk({'message': 'scenario/StoryAreaF:OpenDoor_070', 'getAttention': False})
    }

    JungleRuinsDoor.Destroy()
    QuestSystem.SetProgress({'symbol': 'Jungle:3062461699', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void _ItemJungleRuinsKeyGet() {
    Dialog.Show({'message': 'ItemGet:ItemJungleRuinsKey'})
}

void DoNotGoIn() {
    Deku026.SetInterestIkEnabled({'enable': False})
    Deku025.SetInterestIkEnabled({'enable': False})
    switch QuestSystem.CheckProgress({'symbol': 'Jungle:337646779'}) {
      case 4294967295:

        fork {
            Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku025"), 'actor2': ActorIdentifier(name="Deku026"), 'actor3': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        } {
            Deku025.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Deku026.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].MoveToBesideTargetActor({'offsetY': 1.0, 'offsetZ': 0.32499998807907104, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': -0.75, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        } {

            call EvResetCommon.AllReset()

        }

        Deku025.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            Deku025.Talk({'message': 'scenario/StoryAreaF:DoNotGoIn_010', 'getAttention': False})
        } {

            fork {
                Timer.Wait({'time': 0.20000000298023224})
                Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku025"), 'duration': 0.699999988079071, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.3499999940395355})
                Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku025"), 'duration': 0.699999988079071, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }

        }

        Deku026.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            Deku026.Talk({'message': 'scenario/StoryAreaF:DoNotGoIn_020', 'getAttention': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Deku025.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {

            fork {
                Timer.Wait({'time': 0.4000000059604645})
                Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku026"), 'duration': 0.699999988079071, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.550000011920929})
                Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku026"), 'duration': 0.699999988079071, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }

        }

        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
        Player.MoveToCompassPoint({'direction': 0, 'speed': 1, 'tolerance': 0.0, 'method': 0, 'distance': 2.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0})
      case [0, 1]:

        call _DoNotGoIn_02()

    }
}

void SoldierCatchJungle_Field() {

    call EvResetCommon.AllResetKeepTrans()

    evAirWallcommon.Deactivate()
    Deku026.SetInterestIkEnabled({'enable': False})
    Deku025.SetInterestIkEnabled({'enable': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku026"), 'actor2': ActorIdentifier(name="Deku025"), 'duration': 0.0, 'chaseRatio': 1.0, 'weight1': 1.0, 'weight2': 1.0, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Partner[companion].WarpToActor({'offsetX': 1.25, 'actor': ActorIdentifier(name="Player"), 'offsetY': 1.0, 'distance': 0.0})

    fork {
        Player.MoveToCompassPoint({'direction': 0, 'distance': 3.75, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Timer.Wait({'time': 1.0})

        fork {
            Timer.Wait({'time': 0.20000000298023224})
            Deku025.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Deku026.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    } {
        Timer.Wait({'time': 0.30000001192092896})
        Fade.StartPreset({'preset': 'FadeInNormal'})
    } {
        Partner.MoveToCompassPoint({'direction': 0, 'speed': 0, 'distance': 4.150000095367432, 'customSpeed': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }


    fork {
        Deku026.Talk({'message': 'scenario/StoryAreaF:SoldierCatchJungle_Field_010', 'getAttention': False})
    } {

        fork {
            Timer.Wait({'time': 0.20000000298023224})
            Player.SetInterestIkEnabled({'enable': True})
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku026"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.3499999940395355})
            Partner[companion].PlayAnimation({'name': 'appeal02', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku026"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimDegreeAngle({'withoutTurn': False, 'angle': 179.0, 'duration': 0.800000011920929, 'immediateTurn': False})
        Player.AimCompassPoint({'withoutTurn': False, 'direction': 2, 'duration': 0.009999999776482582, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        Deku025.Talk({'message': 'scenario/StoryAreaF:SoldierCatchJungle_Field_020', 'getAttention': False})
    } {
        Deku025.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {

        call Deku025_aim()

    }

    Timer.Wait({'time': 1.0})
    if Player.CheckMorph({'morphKind': 0}) {

        fork {
            Deku026.Talk({'message': 'scenario/StoryAreaF:SoldierCatchJungle_Field_030', 'getAttention': True})
        } {
            Deku026.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {

            call Deku026_aim()

        }


        fork {
            Deku025.Talk({'message': 'scenario/StoryAreaF:SoldierCatchJungle_Field_040', 'getAttention': True})
        } {
            Deku025.PlayAnimationNoWait({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {

            call Deku025_aim()

        }

        Event981:

        fork {
            Deku025.MoveToTargetActor({'speed': 1, 'distance': 1.0, 'offsetX': 1.0, 'actor': ActorIdentifier(name="Player"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetY': 0.0})
        } {
            Deku026.MoveToTargetActor({'speed': 1, 'distance': 1.0, 'actor': ActorIdentifier(name="Player"), 'offsetX': -1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetY': 0.0})
        } {
            Fade.StartPreset({'preset': 'FadeOutNormalB'})
        } {
            Partner[companion].PlayAnimation({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        if !Player.CheckMorph({'morphKind': 0}) {
            Player.MorphTo({'kind': 0})
        }
        EventFlags.SetFlag({'symbol': 'EvF_SoldierCatchJungle_Field', 'value': True})
        if !EventFlags.CheckMessgaeFlag({'message': 'scenario/StoryAreaF:SoldierCatchJungle_First_010'}) {
            GameControl.RequestLevelJump({'level': 'S_Dungeon109', 'locator': 'EV_S109_001_SoldierCatchJungle_First', 'offsetX': 0.0, 'offsetZ': 0.0})
        } else {
            GameControl.RequestLevelJump({'level': 'S_Dungeon109', 'locator': 'EV_S109_001_SoldierCatchJungle', 'offsetX': 0.0, 'offsetZ': 0.0})
        }
    } else {

        fork {
            Deku026.Talk({'message': 'scenario/StoryAreaF:SoldierCatchJungle_Field_Link_010', 'getAttention': True})
        } {
            Deku026.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {

            call Deku026_aim()

        }


        fork {
            Deku025.Talk({'message': 'scenario/StoryAreaF:SoldierCatchJungle_Field_Link_020', 'getAttention': True})
        } {
            Deku025.PlayAnimationNoWait({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {

            call Deku025_aim()

        }

        goto Event981
    }
}

void _DoNotGoIn_02() {

    fork {
        Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku025"), 'actor2': ActorIdentifier(name="Deku026"), 'actor3': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Deku025.AimPlayer({'duration': 0.20000000298023224, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku026.AimPlayer({'duration': 0.20000000298023224, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {

        call EvResetCommon.AllReset()

    } {
        Partner[companion].MoveToBesideTargetActor({'offsetY': 1.0, 'offsetZ': 0.32499998807907104, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': -0.75, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    }

    Deku025.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku025.Talk({'message': 'scenario/StoryAreaF:DoNotGoInAfter_010', 'getAttention': False})
    } {

        fork {
            Timer.Wait({'time': 0.20000000298023224})
            Player.AimActor({'actor': ActorIdentifier(name="Deku025"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.3499999940395355})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku025"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    Timer.Wait({'time': 1.0})
    Deku026.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku026"), 'duration': 0.699999988079071, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.550000011920929})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku026"), 'duration': 0.699999988079071, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Deku025.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku026.Talk({'message': 'scenario/StoryAreaF:DoNotGoInAfter_020', 'getAttention': False})
    }

    Deku025.PlayAnimationNoWait({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku025.Talk({'message': 'scenario/StoryAreaF:DoNotGoInAfter_030', 'getAttention': False})
    } {

        fork {
            Timer.Wait({'time': 0.20000000298023224})
            Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku025"), 'duration': 0.699999988079071, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.3499999940395355})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku025"), 'duration': 0.699999988079071, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/StoryAreaF:SoldierCatchJungle_First_010'}) {
        GameControl.RequestLevelJump({'level': 'S_Dungeon109', 'locator': 'EV_S109_001_SoldierCatchJungle_First', 'offsetX': 0.0, 'offsetZ': 0.0})
    } else {
        GameControl.RequestLevelJump({'level': 'S_Dungeon109', 'locator': 'EV_S109_001_SoldierCatchJungle', 'offsetX': 0.0, 'offsetZ': 0.0})
    }
}

void BeMyGuest() {

    call EvResetCommon.AllReset()


    fork {
        Camera.LookAt3ActorsCenterAsTalker({'actor2': ActorIdentifier(name="Deku025"), 'actor3': ActorIdentifier(name="Deku026"), 'actor1': ActorIdentifier(name="Zelda"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Deku025.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Deku025.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku025.Talk({'message': 'scenario/StoryAreaF:BeMyGuest_010', 'getAttention': False})
    } {
        Deku026.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="Deku025"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku025"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Deku026.Talk({'message': 'scenario/StoryAreaF:BeMyGuest_020', 'getAttention': False})
    } {
        Deku026.PlayAnimationNoWait({'name': 'surprised_st01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku025.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="Deku026"), 'duration': 0.800000011920929, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku026"), 'duration': 0.800000011920929, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Deku025.Talk({'message': 'scenario/StoryAreaF:BeMyGuest_030', 'getAttention': False})
    } {
        Deku025.PlayAnimationNoWait({'name': 'yes02,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku026.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Player.AimActor({'duration': 0.800000011920929, 'actor': ActorIdentifier(name="Deku025"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'duration': 0.800000011920929, 'actor': ActorIdentifier(name="Deku025"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Deku026.Talk({'message': 'scenario/StoryAreaF:BeMyGuest_040', 'getAttention': False})
    } {
        Deku026.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku025.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="Deku026"), 'duration': 0.800000011920929, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku026"), 'duration': 0.800000011920929, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    EventFlags.SetFlag({'symbol': 'EvF_BeMyGuest', 'value': True})
}

void DoNotComeCloser_Jungle() {
    Deku029.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaF:DoNotComeCloser_Jungle_020', 'playerTalkAnim': False, 'selfTalkAnim': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Deku025_aim() {

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="Deku025"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku025"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void Deku026_aim() {

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="Deku026"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku026"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void PrisonBreakInJungle() {

    call EvResetCommon.AllReset()

    Deku007.SetInterestIkEnabled({'enable': False})

    call AreaStartCommon.TopLadderUpIn()

    Player.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].MoveToBesideTargetActor({'actor': ActorIdentifier(name="Player"), 'offsetX': 1.0, 'offsetY': 1.0, 'offsetZ': -1.0, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})

    fork {
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        call GeneralSequence.Look_at_Partner()

    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    Partner[companion].Talk({'message': 'scenario/StoryAreaF:PrisonBreakInJungle_010', 'getAttention': False})
    Deku007.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Deku007.SetInterestIkEnabled({'enable': False})
    Deku007.PlayAnimationNoWait({'name': 'find,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku007.Talk({'message': 'scenario/StoryAreaF:PrisonBreakInJungle_020', 'getAttention': False})

    fork {
        Player.AimActor({'actor': ActorIdentifier(name="Deku007"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku007"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku007.MoveToBesideTargetActor({'speed': 0, 'offsetZ': -0.75, 'actor': ActorIdentifier(name="Player"), 'offsetX': 3.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Deku007.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Camera.LookAt2ActorsCenterAsTalker({'weight1': 1.0, 'weight2': 1.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Deku007"), 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Deku007.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku007.Talk({'message': 'scenario/StoryAreaF:PrisonBreakInJungle_030', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:PrisonBreakInJungle_040', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku007.PlayAnimationNoWait({'name': 'thanks01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku007.Talk({'message': 'scenario/StoryAreaF:PrisonBreakInJungle_050', 'getAttention': False})
    Deku007.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku007.Talk({'message': 'scenario/StoryAreaF:PrisonBreakInJungle_060', 'getAttention': False})

    fork {
        Timer.Wait({'time': 0.3499999940395355})

        call GeneralSequence.Look_at_Partner_neck()

    } {
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:PrisonBreakInJungle_070', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Player.AimActor({'actor': ActorIdentifier(name="Deku007"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Player.SetInterestIkEnabled({'enable': False})

        call GeneralSequence.ZeldaTalkMotion()

    } {
        Timer.Wait({'time': 0.699999988079071})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku007"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku007.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku007.Talk({'message': 'scenario/StoryAreaF:PrisonBreakInJungle_080', 'getAttention': False})
    Deku007.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku007.Talk({'message': 'scenario/StoryAreaF:PrisonBreakInJungle_100', 'getAttention': False})
    Deku007.PlayAnimation({'name': 'yes02,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.20000000298023224})
    Zelda.GenericItemGetSequence({'messageEntry': 'Jungle:_ItemJungleRuinsKeyGet', 'itemKey': 'ItemDekuMembershipCertificate', 'count': 1, 'keepRaise': False, 'index': -1})

    fork {
        Player.AimActor({'actor': ActorIdentifier(name="Deku007"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku007"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'weight1': 1.0, 'weight2': 1.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Deku007"), 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    Timer.Wait({'time': 0.20000000298023224})
    Deku007.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku007.Talk({'message': 'scenario/StoryAreaF:PrisonBreakInJungle_110', 'getAttention': False})
    Deku007.PlayAnimationNoWait({'name': 'yes02,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku007.Talk({'message': 'scenario/StoryAreaF:PrisonBreakInJungle_120', 'getAttention': False})
    Deku007.MoveToTargetLinkedPoint({'index': 0, 'speed': 1, 'actor': ActorIdentifier(name="Deku007"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {

        fork {
            Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.30000001192092896})

            call GeneralSequence.Look_at_Partner()

        } {
            Camera.LookAt2ActorsCenterAsTalker({'weight1': 1.0, 'weight2': 1.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        }

        Partner[companion].PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaF:PrisonBreakInJungle_130', 'getAttention': False})
    } {
        Deku007.MoveToTargetLinkedPoint({'index': 1, 'speed': 1, 'actor': ActorIdentifier(name="Deku007"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    GameControl.UnforbidWarp()
    QuestSystem.SetProgress({'symbol': 'Jungle:207596745', 'isShowTelopInEvent': False, 'isFrontFade': False})
    Deku007.Destroy()
}

void DekuNextTrend020() {

    fork {
        Audio.StopRegionBgm({'fadeSec': 2.0})
    } {
        Audio.Prepare({'label': 'BGM_EV_JUNGLE_FINALE', 'kind': 0, 'volume': 1.0})
    } {
        GameControl.ForbidLaunchApplet()
    }


    call EvResetCommon.AllResetNowait()


    fork {
        Deku002[ev].Activate()
        Deku021[ev].Activate()
        Deku001[ev].Activate()
        Deku009[ev].Activate()
        Deku024[ev].Activate()
    } {
        Deku013[ev].Activate()
        Deku005[ev].Activate()
        Deku014[ev].Activate()
        Deku018[ev].Activate()
        Deku010[ev].Activate()
    } {
        Deku019[ev].Activate()
        Deku016[ev].Activate()
        Deku015[ev].Activate()
        Deku023[ev].Activate()
        Deku017.Activate()
    } {
        Deku024[gen].Deactivate()
        Deku014[gen].Deactivate()
        Deku018[gen].Deactivate()
        Deku015[gen].Deactivate()
        Deku011.Activate()
    } {
        Deku009[gen].Deactivate()
        Deku010[gen].Deactivate()
        Deku023[gen].Deactivate()
        Deku027[gen].Destroy()
        Deku028[gen].Destroy()
    } {
        Deku002[ev].SetInterestIkEnabled({'enable': False})
        Deku021[ev].SetInterestIkEnabled({'enable': False})
        Deku001[ev].SetInterestIkEnabled({'enable': False})
        Deku009[ev].SetInterestIkEnabled({'enable': False})
        Deku024[ev].SetInterestIkEnabled({'enable': False})
    } {
        Deku013[ev].SetInterestIkEnabled({'enable': False})
        Deku005[ev].SetInterestIkEnabled({'enable': False})
        Deku014[ev].SetInterestIkEnabled({'enable': False})
        Deku018[ev].SetInterestIkEnabled({'enable': False})
        Deku010[ev].SetInterestIkEnabled({'enable': False})
        DekuMerchant.SetInterestIkEnabled({'enable': False})
    } {
        Deku019[ev].SetInterestIkEnabled({'enable': False})
        Deku016[ev].SetInterestIkEnabled({'enable': False})
        Deku015[ev].SetInterestIkEnabled({'enable': False})
        Deku023[ev].SetInterestIkEnabled({'enable': False})
        Deku017.SetInterestIkEnabled({'enable': False})
        Deku011.SetInterestIkEnabled({'enable': False})
    } {
        Player.WarpToActor({'distance': -2.25, 'actor': ActorIdentifier(name="Deku021", sub_name="ev"), 'offsetX': 0.75, 'offsetY': 0.0})
        Partner[companion].WarpToActor({'offsetY': 1.0, 'distance': -2.25, 'actor': ActorIdentifier(name="Deku021", sub_name="ev"), 'offsetX': -0.75})
        Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Deku023[ev].PlayAnimationNoWait({'name': 'drink', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku005[ev].SetComponentActive({'name': 'DekuSmoothie', 'active': False})
        Deku019[ev].SetComponentActive({'name': 'DekuSmoothie', 'active': False})
    }


    fork {
        Camera.LookAt2ActorsCenterAsTalker({'duration': 0.20000000298023224, 'distanceOffset': -2.0, 'actor1': ActorIdentifier(name="Deku019", sub_name="ev"), 'actor2': ActorIdentifier(name="Deku005", sub_name="ev"), 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Deku015[ev].PlayAnimation({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku018[ev].PlayAnimation({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku010[ev].PlayAnimation({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Deku017.PlayAnimation({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.800000011920929})
        Deku011.PlayAnimation({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku015[ev].AimActor({'actor': ActorIdentifier(name="DekuMerchant"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Deku017.AimActor({'actor': ActorIdentifier(name="DekuMerchant"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Deku011.AimActor({'actor': ActorIdentifier(name="DekuMerchant"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku002[ev].PlayAnimationEx({'name': 'wait01', 'time': 0.10000000149011612, 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku013[ev].PlayAnimationEx({'name': 'wait01', 'time': 0.10000000149011612, 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku019[ev].PlayAnimationEx({'name': 'wait01', 'time': 0.10000000149011612, 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku021[ev].PlayAnimationEx({'name': 'wait01', 'time': 0.10000000149011612, 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku005[ev].PlayAnimationEx({'name': 'wait01', 'time': 0.10000000149011612, 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku014[ev].PlayAnimation({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Audio.PlayBGM({'label': 'BGM_EV_JUNGLE_FINALE', 'ignoreSkip': False, 'volume': 1.0})
    Fade.StartParam({'mode': 0, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0, 'time': 1.0})
    Audio.DisablePlaySeFromTailor()

    fork {
        Deku002[ev].MoveToCompassPoint({'direction': 0, 'speed': 0, 'distance': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Deku002[ev].PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Deku013[ev].MoveToCompassPoint({'direction': 0, 'speed': 0, 'distance': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Timer.Wait({'time': 1.0})
        Deku013[ev].PlayAnimationNoWait({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Deku019[ev].ChangeSteeringAnimation({'idle': 'wait01', 'walk': 'move01', 'run': 'move_fast01', 'layer': 0})
        Deku019[ev].MoveToCompassPoint({'direction': 0, 'speed': 0, 'distance': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Deku021[ev].ChangeSteeringAnimation({'idle': 'wait01', 'walk': 'move01', 'run': 'move_fast01', 'layer': 0})
        Deku021[ev].MoveToCompassPoint({'direction': 0, 'speed': 0, 'distance': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        Deku005[ev].ChangeSteeringAnimation({'idle': 'wait01', 'walk': 'move01', 'run': 'move_fast01', 'layer': 0})
        Deku005[ev].MoveToCompassPoint({'direction': 0, 'speed': 0, 'distance': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_JUNGLE_FINALE', 'volume': 1.0, 'pitch': 1.0})
    }

    Deku010[ev].TrailRail({'railIndex': 0, 'speed': 1, 'reverse': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})

    fork {

        fork {
            Deku005[ev].AimActor({'actor': ActorIdentifier(name="Deku016", sub_name="ev"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Deku021[ev].PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Deku019[ev].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku001", sub_name="ev"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 1.5})
        } {
            DekuMerchant.PlayAnimation({'name': 'wait_smoothie', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            Camera.LookAt2ActorsCenterAsTalker({'offsetX': 22.0, 'duration': 3.0, 'offsetZ': 0.0, 'actor1': ActorIdentifier(name="Deku018", sub_name="ev"), 'actor2': ActorIdentifier(name="Deku024", sub_name="ev"), 'chaseRatio': 0.0020000000949949026, 'weight1': 1.0, 'weight2': 1.0, 'distanceOffset': 0.0, 'offsetY': 0.0})
        } {
            Timer.Wait({'time': 5.769999980926514})
            Camera.PlayActorOriginCameraAnimation({'path': 'map/Field_Jungle_002.bfres', 'chaseRatio': 1.0, 'name': 'DekuNextTrend_cam03', 'target': ActorIdentifier(name="Deku024", sub_name="ev"), 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
            Camera.PlayActorOriginCameraAnimation({'path': 'map/Field_Jungle_002.bfres', 'name': 'DekuNextTrend_cam04', 'target': ActorIdentifier(name="Deku018", sub_name="ev"), 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
        } {

            fork {
                Deku002[ev].AimCompassPoint({'direction': 0, 'duration': 0.20000000298023224, 'withoutTurn': False, 'immediateTurn': False})
                Deku019[ev].AimCompassPoint({'direction': 0, 'duration': 0.20000000298023224, 'withoutTurn': False, 'immediateTurn': False})
                Deku005[ev].AimCompassPoint({'direction': 0, 'duration': 0.20000000298023224, 'withoutTurn': False, 'immediateTurn': False})
            } {
                Deku013[ev].AimCompassPoint({'direction': 0, 'duration': 0.20000000298023224, 'withoutTurn': False, 'immediateTurn': False})
                Deku021[ev].AimCompassPoint({'direction': 0, 'duration': 0.20000000298023224, 'withoutTurn': False, 'immediateTurn': False})
                Deku021[ev].PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                Deku021[ev].AimCompassPoint({'direction': 0, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
            }

        }

        Deku001[ev].Deactivate()
        Deku016[ev].Deactivate()
    } {
        Deku016[ev].TrailRail({'railIndex': 0, 'speed': 1, 'reverse': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Deku016[ev].AimActor({'actor': ActorIdentifier(name="DekuMerchant"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Deku016[ev].PlayAnimation({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.2000000476837158})
        Camera.LookAt2ActorsCenterAsTalker({'duration': 0.20000000298023224, 'distanceOffset': 0.0, 'actor1': ActorIdentifier(name="Deku019", sub_name="ev"), 'actor2': ActorIdentifier(name="Deku005", sub_name="ev"), 'chaseRatio': 0.05000000074505806, 'weight1': 1.0, 'weight2': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Deku001[ev].TrailRail({'railIndex': 0, 'speed': 1, 'reverse': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Deku001[ev].AimActor({'actor': ActorIdentifier(name="DekuMerchant"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Deku001[ev].PlayAnimation({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Deku019[ev].WarpToActor({'distance': 0.5, 'offsetX': 1.600000023841858, 'actor': ActorIdentifier(name="Deku019", sub_name="ev"), 'offsetY': 0.0})
    } {
        Deku005[ev].WarpToActor({'offsetX': -1.600000023841858, 'actor': ActorIdentifier(name="Deku005", sub_name="ev"), 'distance': 0.4000000059604645, 'offsetY': 0.0})
    }

    Deku021[ev].LookAtGimmick({'duration': 0.0, 'chaseRatio': 1.0, 'distanceOffset': -1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 0.30000001192092896})

    fork {
        Deku019[ev].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Deku021", sub_name="ev"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku005[ev].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Deku021", sub_name="ev"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku021[ev].SetInterestIkEnabled({'enable': True})
        Timer.Wait({'time': 0.4000000059604645})
        Deku021[ev].AimActor({'withoutTurn': True, 'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Deku019", sub_name="ev"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.10000000149011612})
        Deku021[ev].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Deku005", sub_name="ev"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.20000000298023224})
        Deku021[ev].AimCompassPoint({'direction': 0, 'duration': 0.20000000298023224, 'withoutTurn': False, 'immediateTurn': False})
        Deku021[ev].SetInterestIkEnabled({'enable': False})
    }


    fork {
        Deku019[ev].PlayAnimationNoWait({'name': 'yes02,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.8999999761581421})
        Deku019[ev].MoveToCompassPoint({'direction': 0, 'speed': 1, 'timeOut': 10.0, 'distance': 6.5, 'offsetX': 0.0, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetY': 0.0})
        Deku019[ev].Deactivate()
    } {
        Deku005[ev].PlayAnimationNoWait({'name': 'yes02,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.8999999761581421})
        Deku005[ev].MoveToCompassPoint({'direction': 0, 'speed': 1, 'timeOut': 10.0, 'distance': 6.0, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Deku005[ev].Deactivate()
    } {
        Deku021[ev].PlayAnimationNoWait({'name': 'yes02,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.8999999761581421})
        Deku021[ev].MoveToCompassPoint({'direction': 0, 'speed': 1, 'timeOut': 10.0, 'distance': 7.0, 'offsetX': 0.0, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetY': 0.0})
        Deku021[ev].Deactivate()
    } {
        Timer.Wait({'time': 1.2999999523162842})

        fork {
            Timer.Wait({'time': 0.30000001192092896})
            Deku002[ev].MoveToCompassPoint({'direction': 0, 'timeOut': 4.0, 'speed': 0, 'distance': 3.700000047683716, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
            Timer.Wait({'time': 0.6000000238418579})
            Deku002[ev].AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.6000000238418579, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Timer.Wait({'time': 1.0})
            Deku002[ev].PlayAnimation({'name': 'thanks01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 0.30000001192092896})
            Deku013[ev].MoveToCompassPoint({'direction': 0, 'timeOut': 4.0, 'speed': 0, 'distance': 3.700000047683716, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
            Timer.Wait({'time': 0.6000000238418579})
            Deku013[ev].AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.6000000238418579, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Timer.Wait({'time': 1.0})
            Deku013[ev].PlayAnimation({'name': 'thanks01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 2.5})
            Player.MoveToCompassPoint({'direction': 0, 'speed': 0, 'distance': 3.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
            Player.AimActor({'actor': ActorIdentifier(name="Deku013", sub_name="ev"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 2.5})
            Partner[companion].MoveToCompassPoint({'direction': 0, 'speed': 0, 'distance': 3.0, 'customSpeed': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku002", sub_name="ev"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Player.LookAtTalker({'offsetZ': 1.5, 'chaseRatio': 0.019999999552965164, 'duration': 1.0, 'offsetX': -0.75, 'distanceOffset': 0.0, 'offsetY': 0.0, 'keep': False})
        }

    }

    Timer.Wait({'time': 0.5})
    Audio.EnablePlaySeFromTailor()

    fork {
        Deku002[ev].MoveToCompassPoint({'direction': 0, 'timeOut': 4.0, 'distance': 6.0, 'speed': 0, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Deku002[ev].Deactivate()
    } {
        Deku013[ev].MoveToCompassPoint({'direction': 0, 'timeOut': 4.0, 'distance': 6.0, 'speed': 0, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Deku013[ev].Deactivate()
    } {
        Player.AimCompassPoint({'direction': 0, 'duration': 3.0, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner[companion].AimCompassPoint({'direction': 0, 'duration': 3.0, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Deku005.SetComponentActive({'name': 'DekuSmoothie', 'active': True})
        Deku019.SetComponentActive({'name': 'DekuSmoothie', 'active': True})
    }

    Timer.Wait({'time': 1.899999976158142})

    fork {

        call GeneralSequence.Look_at_Partner()

    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})
    Audio.DisablePlaySeFromTailor()

    fork {
        Deku016[ev].Deactivate()
        Deku015[ev].Deactivate()
        Deku009[ev].Deactivate()
        Deku023[ev].Deactivate()
        Deku010[ev].Deactivate()
    } {
        Deku001[ev].Deactivate()
        Deku014[ev].Deactivate()
        Deku018[ev].Deactivate()
        Deku024[ev].Deactivate()
    } {
        Deku024[gen].Activate()
        Deku014[gen].Activate()
        Deku018[gen].Activate()
        Deku015[gen].Activate()
    } {
        Deku009[gen].Activate()
        Deku010[gen].Activate()
        Deku023[gen].Activate()
    } {
        DekuMerchant.Destroy()
        Deku017.Destroy()
        Deku011.Destroy()
    }

    Audio.EnablePlaySeFromTailor()
    GameControl.UnforbidLaunchApplet()
    Partner[companion].PlayAnimationNoWait({'name': 'appeal02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:DekuNextTrend_120', 'getAttention': False})
    switch QuestSystem.CheckProgress({'symbol': 'Snowmountain:776505974'}) {
      case 4294967295:
        switch QuestSystem.CheckProgress({'symbol': 'Volcano:1474105390'}) {
          case 4294967295:
            Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Partner.Talk({'message': 'scenario/StoryAreaF:DekuNextTrend_130', 'getAttention': False})
            Event359:
            Audio.StopBGM({'label': 'BGM_EV_JUNGLE_FINALE', 'duration': 2.0})
            Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            switch QuestSystem.CheckProgress({'symbol': 'Snowmountain:776505974'}) {
              case 4294967295:
                switch QuestSystem.CheckProgress({'symbol': 'Volcano:1474105390'}) {
                  case 4294967295:
                    Partner.Talk({'message': 'scenario/StoryAreaF:DekuNextTrend_140', 'getAttention': False})
                    Audio.PlayZoneBGM({'stopbgm': True})
                    Audio.SetTimeToRegionBgmPlay({'waitSec': 1.600000023841858})
                    QuestSystem.SetProgress({'symbol': 'Jungle:425818924', 'isShowTelopInEvent': False, 'isFrontFade': False})
                    QuestSystem.SetProgress({'symbol': 'LinkQuest:1947258801', 'isShowTelopInEvent': False, 'isFrontFade': False})
                  case 0:
                    Partner.Talk({'message': 'scenario/StoryAreaF:DekuNextTrend_160', 'getAttention': False})
                    Audio.PlayZoneBGM({'stopbgm': True})
                    Audio.SetTimeToRegionBgmPlay({'waitSec': 1.600000023841858})
                    QuestSystem.SetProgress({'symbol': 'Jungle:425818924', 'isShowTelopInEvent': False, 'isFrontFade': False})
                    QuestSystem.SetProgress({'symbol': 'LinkQuest:1187802142', 'isShowTelopInEvent': False, 'isFrontFade': False})
                }
              case 0:
                switch QuestSystem.CheckProgress({'symbol': 'Volcano:1474105390'}) {
                  case 4294967295:
                    Partner.Talk({'message': 'scenario/StoryAreaF:DekuNextTrend_150', 'getAttention': False})
                    Audio.PlayZoneBGM({'stopbgm': True})
                    Audio.SetTimeToRegionBgmPlay({'waitSec': 1.600000023841858})
                    QuestSystem.SetProgress({'symbol': 'Jungle:425818924', 'isShowTelopInEvent': False, 'isFrontFade': False})
                    QuestSystem.SetProgress({'symbol': 'LinkQuest:3703185651', 'isShowTelopInEvent': False, 'isFrontFade': False})
                  case 0:

                    call GeneralSequence.CopiedZelda({'region': 1})

                }
            }
          case [0, 1]:
            Event344:
            Partner.Talk({'message': 'scenario/StoryAreaF:DekuNextTrend_135', 'getAttention': False})
            goto Event359
        }
      case [0, 1]:
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        goto Event344
    }
}

void DekusAngry() {

    call EvResetCommon.AllReset()

    Player.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="Deku007"), 'offsetY': 0.0})
    Player.AimCompassPoint({'duration': 0.0, 'direction': 2, 'withoutTurn': False, 'immediateTurn': False})
    Player.SetInterestIkEnabled({'enable': True})

    fork {
        Deku003.SetInterestIkEnabled({'enable': False})
        Deku003.ResetAim()
        Deku003.PlayAnimationNoWait({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku006.SetInterestIkEnabled({'enable': False})
        Deku006.ResetAim()
        Timer.Wait({'time': 0.10000000149011612})
        Deku006.PlayAnimationNoWait({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku008.SetInterestIkEnabled({'enable': False})
        Deku008.ResetAim()
        Timer.Wait({'time': 0.20000000298023224})
        Deku008.PlayAnimationNoWait({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku007.SetInterestIkEnabled({'enable': False})
        Deku007.ResetAim()
        Deku007.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {

        call GeneralSequence.EvMapWarpIn()

    } {
        Timer.Wait({'time': 3.0})
        Deku007.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Deku007.PlayAnimation({'name': 'find,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.2999999523162842})
        Audio.PlayOneshotSystemSE({'label': 'VO_DKN_1_3_009_001', 'volume': 1.0, 'pitch': 1.0})
    } {
        Timer.Wait({'time': 1.5})
        Audio.PlayOneshotSystemSE({'label': 'VO_DKN_1_4_009_004', 'volume': 1.0, 'pitch': 1.0})
    } {
        Timer.Wait({'time': 1.7000000476837158})
        Audio.PlayOneshotSystemSE({'label': 'VO_DKN_1_6_009_003', 'volume': 1.0, 'pitch': 1.0})
    } {
        Timer.Wait({'time': 3.4000000953674316})
        Audio.PlayOneshotSystemSE({'label': 'VO_DKN_1_4_006_001', 'volume': 1.0, 'pitch': 1.0})
    }


    fork {
        Camera.LookAt3ActorsCenterAsTalker({'offsetX': 0.30000001192092896, 'actor1': ActorIdentifier(name="Deku003"), 'actor2': ActorIdentifier(name="Deku007"), 'actor3': ActorIdentifier(name="Player"), 'offsetZ': 0.5, 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetY': 0.0})
    } {
        Partner[companion].MoveToBesideTargetActor({'offsetX': 1.0, 'offsetY': 1.0, 'actor': ActorIdentifier(name="Player"), 'speed': 1, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    }


    fork {
        Player.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Deku003"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku003"), 'offsetY': 0.0, 'offsetX': 0.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})
    Deku003.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku003.Talk({'message': 'scenario/StoryAreaF:DekusAngry_010', 'getAttention': False})
    } {
        Player.AimDegreeAngle({'angle': 225.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    Deku006.PlayAnimationNoWait({'name': 'angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku006.Talk({'message': 'scenario/StoryAreaF:DekusAngry_020', 'getAttention': False})
    Deku008.PlayAnimation({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku008.Talk({'message': 'scenario/StoryAreaF:DekusAngry_030', 'getAttention': False})

    fork {
        Deku007.MoveToBesideTargetActor({'speed': 0, 'offsetZ': -3.0, 'actor': ActorIdentifier(name="Player"), 'offsetX': 0.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Deku007.AimActor({'offsetZ': -3.0, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Player.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Deku007"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Deku007.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku007.Talk({'message': 'scenario/StoryAreaF:DekusAngry_040', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'offsetY': 1.0, 'offsetX': 1.0, 'actor': ActorIdentifier(name="Deku007"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku007.PlayAnimationNoWait({'name': 'thanks01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku007.Talk({'message': 'scenario/StoryAreaF:DekusAngry_050', 'getAttention': False})
    Deku006.PlayAnimationNoWait({'name': 'find,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku006.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Deku006.Talk({'message': 'scenario/StoryAreaF:DekusAngry_060', 'getAttention': False})
    } {

        call _pd181Deku006()

    } {
        Timer.Wait({'time': 0.6000000238418579})
        Deku007.AimActor({'duration': 0.4000000059604645, 'withoutTurn': False, 'actor': ActorIdentifier(name="Deku008"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Deku003.PlayAnimationNoWait({'name': 'find,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku003.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku008.PlayAnimationNoWait({'name': 'find,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku008.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_DKN_1_6_006_004', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 1.0})
    Deku003.PlayAnimationNoWait({'blendFrame': 15, 'name': 'frightened_st01', 'layer': 0, 'restart': False})
    Deku003.Talk({'message': 'scenario/StoryAreaF:DekusAngry_070', 'getAttention': False})
    Timer.Wait({'time': 1.0})
    Deku003.PlayAnimationNoWait({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku003.Talk({'message': 'scenario/StoryAreaF:DekusAngry_080', 'getAttention': False})
    } {

        fork {
            Timer.Wait({'time': 0.20000000298023224})
            Player.AimActor({'actor': ActorIdentifier(name="Deku003"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.4000000059604645})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    } {
        Timer.Wait({'time': 0.6000000238418579})
        Deku007.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Deku003"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku008.PlayAnimationNoWait({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku008.Talk({'message': 'scenario/StoryAreaF:DekusAngry_090', 'getAttention': False})
    } {

        call _pd181Deku008()

    }

    Deku006.PlayAnimationNoWait({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku006.Talk({'message': 'scenario/StoryAreaF:DekusAngry_100', 'getAttention': False})
    } {

        call _pd181Deku006()

    }

    Deku003.PlayAnimationNoWait({'name': 'angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku003.Talk({'message': 'scenario/StoryAreaF:DekusAngry_110', 'getAttention': False})
    } {

        call _pd181Deku003()

    }

    Deku003.PlayAnimation({'name': 'no01,wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Deku003.PlayAnimationNoWait({'blendFrame': 15, 'name': 'frightened_st01', 'layer': 0, 'restart': False})

    fork {
        Deku003.Talk({'message': 'scenario/StoryAreaF:DekusAngry_120', 'getAttention': False})
    } {
        Audio.StopRegionBgm({'fadeSec': 2.0})
    }


    fork {
        Deku003.PlayAnimation({'name': 'laugh01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku006.PlayAnimation({'name': 'laugh01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku008.PlayAnimation({'name': 'laugh01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.800000011920929})
        Audio.PlayOneshotSystemSE({'label': 'VO_DKN_1_3_004_003', 'volume': 1.0, 'pitch': 1.0})
    }


    fork {
        Deku008.Talk({'message': 'scenario/StoryAreaF:DekusAngry_130', 'getAttention': False})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="Deku003"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Deku003.MoveToBesideTargetActor({'speed': 1, 'actor': ActorIdentifier(name="Player"), 'offsetZ': -1.25, 'offsetX': -1.25, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Deku003.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Deku003.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku006.MoveToBesideTargetActor({'speed': 1, 'actor': ActorIdentifier(name="Player"), 'offsetX': 1.25, 'offsetZ': -1.25, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Deku006.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Deku006.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku008.MoveToBesideTargetActor({'speed': 1, 'actor': ActorIdentifier(name="Player"), 'offsetZ': 1.25, 'offsetX': 0.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Deku008.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Deku008.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku008.Talk({'message': 'scenario/StoryAreaF:DekusAngry_140', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.5})
        Deku007.AimCompassPoint({'withoutTurn': False, 'direction': 0, 'duration': 0.4000000059604645, 'immediateTurn': False})
        Deku007.ChangeSteeringAnimation({'walk': 'surprised_st01', 'run': 'surprised_st01', 'idle': '', 'layer': 0})
        Deku007.MoveToCompassPoint({'direction': 2, 'withoutTurn': True, 'speed': 1, 'distance': 1.0, 'offsetX': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetY': 0.0})
        Deku007.PlayAnimationNoWait({'name': 'surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].MoveToTargetActor({'offsetY': 1.0, 'speed': 1, 'offsetX': -1.0, 'withoutTurn': True, 'actor': ActorIdentifier(name="Player"), 'distance': -1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0})
        Partner[companion].AimActor({'offsetY': 1.0, 'offsetX': 1.0, 'actor': ActorIdentifier(name="Deku003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].ResetAim()
        Partner[companion].PlayAnimationNoWait({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Player.LookAtTalker({'offsetZ': -1.0, 'chaseRatio': 0.10000000149011612, 'duration': 0.4000000059604645, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'keep': False})
    } {
        Player.ResetAim()
        Player.PlayAnimation({'name': 'search', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    QuestSystem.SetProgress({'symbol': 'Jungle:1857682978', 'isShowTelopInEvent': False, 'isFrontFade': False})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    GameControl.RequestLevelJump({'level': 'S_Dungeon109', 'locator': 'S109_R001_StartPrison', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void _pd181Deku006() {

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="Deku006"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku006"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void _pd181Deku003() {

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku003"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku003"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void _pd181Deku008() {

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku008"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku008"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}
