-------- EventFlow: S_Dungeon020 --------

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['GetStatus']
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: Partner
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'PlayAnimationNoWait', 'PlayAnimation', 'MoveToBesideTargetActor', 'AimActor', 'AimDegreeAngle']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: GoronChief
entrypoint: None()
actions: ['Talk', 'GenericTalkSequenceWithDialog', 'AimCompassPoint', 'MoveToBesideTargetActor', 'PlayAnimationEx', 'PlayAnimationNoWait', 'Activate', 'AimActor', 'PlayAnimation', 'MoveToCompassPoint', 'Deactivate', 'AimPlayer', 'LookAtTalker', 'MoveToTargetLinkedPoint', 'PlayTailorOtherChannelNoWait', 'SetFacialExpression', 'ResetFacialExpression', 'SetDefaultFacialExpression', 'SetInstanceVariableString', 'SkipAutoTurn']
queries: []
params: None

Actor: Goron007
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'PlayAnimation', 'SetFacialExpression', 'AimActor', 'Deactivate', 'ResetFacialExpression']
queries: []
params: None

Actor: Goron002
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'PlayAnimationEx', 'PlayAnimation', 'SetFacialExpression', 'AimActor', 'ResetFacialExpression', 'SetInterestIkEnabled', 'Deactivate']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor', 'AimDegreeAngle', 'MoveToBesideTargetActor', 'AimCompassPoint', 'SetInterestIkEnabled', 'PlayAnimationNoWait']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt3ActorsCenterAsTalker', 'LookAt2ActorsCenterAsTalker', 'Shake']
queries: []
params: None

Actor: EvVibrationFallenRocks
entrypoint: None()
actions: ['PlayAnimationEx', 'Activate', 'PlayTailorOtherChannelNoWait', 'SetCullMode']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: ['LookAtGimmicksLinkedPoint']
queries: []
params: None

Actor: EvLizalfos00[10]
entrypoint: None()
actions: ['SetVisibility', 'PlayAnimationNoWait', 'PlayAnimation', 'Destroy']
queries: []
params: None

Actor: EvLizalfos00[20]
entrypoint: None()
actions: ['PlayAnimationNoWait', 'PlayAnimation', 'SetVisibility', 'Destroy']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['LookAtTalker', 'PlayAnimationNoWait', 'AimActor', 'SetInterestIkEnabled', 'AimDegreeAngle', 'AimCompassPoint']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE', 'SetBGMVolume']
queries: []
params: None

Actor: Vibration
entrypoint: None()
actions: ['PlayVibration']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'AimActor', 'PlayAnimationNoWait', 'AimPlayer']
queries: []
params: None

void VolcanoPointBTrouble() {

    call EvResetCommon.AllReset()

    Player.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Goron007"), 'actor2': ActorIdentifier(name="Goron002"), 'offsetZ': 0.0, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0})
    Goron007.PlayAnimationNoWait({'name': 'talk_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron007.PlayAnimationNoWait({'name': 'wait_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron007.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTrouble_010', 'getAttention': False})
    }

    GoronChief.Activate()

    fork {
        GoronChief.MoveToBesideTargetActor({'speed': 1, 'offsetX': -3.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetZ': 1.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Player.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    }

    GoronChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Zelda.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GoronChief.PlayAnimationEx({'time': 0.0, 'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    switch QuestSystem.GetStatus({'questKey': 'VolcanoPointA'}) {
      case [0, 1]:
        GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTrouble_020', 'getAttention': False})
        Event114:
        GoronChief.PlayAnimationEx({'time': 0.0, 'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.AimActor({'actor': ActorIdentifier(name="Goron002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GoronChief.PlayAnimationEx({'time': 0.0, 'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            GoronChief.SetFacialExpression({'expression': 'surprise'})
        } {
            GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTrouble_030', 'getAttention': False})
        }

        GoronChief.PlayAnimation({'name': 'surprised_ed,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.ResetFacialExpression()
        Zelda.AimActor({'actor': ActorIdentifier(name="Goron002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Camera.LookAt2ActorsCenterAsTalker({'weight1': 1.0, 'actor1': ActorIdentifier(name="GoronChief"), 'actor2': ActorIdentifier(name="Goron002"), 'distanceOffset': 2.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Goron002.PlayAnimationNoWait({'name': 'talk_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron002.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTrouble_050', 'getAttention': False})
        Goron002.PlayAnimationEx({'time': 0.0, 'name': 'wait_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            GoronChief.SetFacialExpression({'expression': 'surprise'})
        } {
            GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTrouble_060', 'getAttention': False})
        }

        GoronChief.PlayAnimation({'name': 'surprised_ed,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.ResetFacialExpression()
        Goron002.PlayAnimationEx({'time': 0.0, 'name': 'talk_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron002.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTrouble_070', 'getAttention': False})
        Goron002.PlayAnimationEx({'time': 0.0, 'name': 'wait_curl01', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            GoronChief.SetFacialExpression({'expression': 'sad'})
        } {
            GoronChief.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTrouble_100', 'getAttention': False})
        }

        GoronChief.ResetFacialExpression()
        GoronChief.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        GoronChief.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTrouble_110', 'getAttention': False})
        } {
            Timer.Wait({'time': 0.5})
            Player.SetInterestIkEnabled({'enable': True})
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        fork {
            Timer.Wait({'time': 0.5})
            Player.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            GoronChief.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
            GoronChief.SetFacialExpression({'expression': 'sad'})
            GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTrouble_140', 'getAttention': False})
        }

        GoronChief.SetDefaultFacialExpression({'expression': 'sad'})

        fork {
            Partner[companion].AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Zelda.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Partner.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaC:VolcanoPointBTrouble_150', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTrouble_160', 'getAttention': False})
        EventFlags.SetFlag({'value': True, 'symbol': 'Volcano_VolcanoPointB_1'})
        QuestSystem.SetProgress({'symbol': 'VolcanoPointB:541829843', 'isShowTelopInEvent': False, 'isFrontFade': False})
        GoronChief.SetInstanceVariableString({'name': 'idleAnim', 'value': 'think02'})
        GoronChief.SkipAutoTurn()
      case 2:
        GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTrouble_020_After', 'getAttention': False})
        goto Event114
    }
}

void VolcanoPointBTroubleTactics() {

    call EvResetCommon.AllReset()

    EvLizalfos00[10].PlayAnimationNoWait({'name': 'search', 'layer': 0, 'blendFrame': -1, 'restart': False})
    EvLizalfos00[20].PlayAnimationNoWait({'name': 'search', 'layer': 0, 'blendFrame': -1, 'restart': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'Volcano_VolcanoPointB_2'})
    GoronChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GoronChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'message': 'scenario/StoryAreaC:VolcanoPointBTroubleTactics_010', 'selfTalkAnimName': '', 'selfTalkAnim': False, 'aimToPlayer': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Area.LookAtGimmicksLinkedPoint({'pointIndex': 0, 'offsetZ': -2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0})
    GoronChief.MoveToCompassPoint({'speed': 1, 'direction': 3, 'distance': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    GoronChief.AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    Zelda.MoveToBesideTargetActor({'speed': 1, 'offsetX': 2.0, 'actor': ActorIdentifier(name="GoronChief"), 'offsetY': 0.0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Player.SetInterestIkEnabled({'enable': True})
    Zelda.AimCompassPoint({'duration': 0.0, 'direction': 2, 'withoutTurn': False, 'immediateTurn': False})
    GoronChief.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleTactics_020', 'getAttention': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleTactics_030', 'getAttention': False})
    GoronChief.LookAtTalker({'keep': True, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleTactics_030_02', 'getAttention': False})
    } {
        GoronChief.PlayAnimationNoWait({'name': 'no,think03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleTactics_030_03', 'getAttention': False})
    } {
        GoronChief.PlayAnimationNoWait({'name': 'wait_stoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Player.AimDegreeAngle({'duration': 0.4000000059604645, 'withoutTurn': True, 'angle': 225.0, 'immediateTurn': False})
    }


    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleTactics_040', 'getAttention': False})
    } {
        GoronChief.PlayAnimationNoWait({'name': 'talk_stoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {

        fork {
            GoronChief.PlayAnimationNoWait({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleTactics_050', 'getAttention': False})
        } {
            Timer.Wait({'time': 1.0})
            Partner[companion].PlayAnimationNoWait({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Timer.Wait({'time': 2.5})
    } {
        Timer.Wait({'time': 1.0})
        Player.AimDegreeAngle({'duration': 0.4000000059604645, 'withoutTurn': True, 'angle': 145.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.800000011920929})
        Player.AimDegreeAngle({'angle': 215.0, 'duration': 0.4000000059604645, 'withoutTurn': True, 'immediateTurn': False})
        Timer.Wait({'time': 1.0})
        Player.AimCompassPoint({'duration': 0.4000000059604645, 'withoutTurn': False, 'direction': 2, 'immediateTurn': False})
    }


    fork {
        GoronChief.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.PlayAnimation({'name': 'surprised_ed,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleTactics_050_02', 'getAttention': False})
    } {
        GoronChief.SetFacialExpression({'expression': 'surprise'})
    } {
        Timer.Wait({'time': 0.5})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.5})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        GoronChief.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleTactics_060', 'getAttention': False})
    } {
        GoronChief.ResetFacialExpression()
    } {
        Audio.SetBGMVolume({'volume': 0.0, 'duration': 3.0})
    }

    GoronChief.MoveToTargetLinkedPoint({'speed': 1, 'index': 1, 'withoutTurn': False, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    GoronChief.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleTactics_065', 'getAttention': False})
    } {
        GoronChief.PlayAnimationNoWait({'name': 'think03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleTactics_070', 'getAttention': False})
    } {
        GoronChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GoronChief.PlayAnimation({'name': 'curl_up_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.PlayAnimation({'name': 'wait_curl', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.3499999940395355})

    fork {
        GoronChief.PlayAnimation({'name': 'curl_press,wait_curl', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EvVibrationFallenRocks.PlayTailorOtherChannelNoWait({'channel': 'pre_falling', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Timer.Wait({'time': 1.2000000476837158})

        fork {
            Camera.Shake({'power': 3, 'duration': 1.5})
        } {
            Vibration.PlayVibration({'label': '10_B11_Boom4', 'pan': 0.5, 'ratio': 1.0})
        }

    } {
        GoronChief.PlayTailorOtherChannelNoWait({'channel': 'ev_fallingRocks', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Timer.Wait({'time': 1.2999999523162842})

        fork {
            Audio.PlayOneshotSystemSE({'label': 'SE_SYS_MESSAGE_TORI2', 'volume': 1.0, 'pitch': 1.0})
        } {
            Partner[companion].PlayAnimationNoWait({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } {
        Timer.Wait({'time': 1.2999999523162842})
        Zelda.PlayAnimationNoWait({'name': 'ev_surprise_st,ev_surprise_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.5})
    EvVibrationFallenRocks.Activate()
    EvVibrationFallenRocks.SetCullMode({'enabled': True, 'cullMode': 0})
    Area.LookAtGimmicksLinkedPoint({'pointIndex': 0, 'offsetZ': -3.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0})

    fork {
        Camera.Shake({'power': 3, 'duration': 3.0})
    } {
        Vibration.PlayVibration({'label': '08_B09_Boom2', 'pan': 0.5, 'ratio': 1.0})
    } {
        EvVibrationFallenRocks.PlayAnimationEx({'name': 'ev_collapse', 'time': 1.0, 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 2.0})
    } {
        EvLizalfos00[10].PlayAnimationNoWait({'name': 'damage_blowaway_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.5})
        EvLizalfos00[10].PlayAnimation({'name': 'damage_electric', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EvLizalfos00[10].PlayAnimationNoWait({'name': 'dead_f', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.5})
        EvLizalfos00[10].SetVisibility({'visible': False})
    } {
        EvLizalfos00[20].PlayAnimationNoWait({'name': 'damage_blowaway_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.5})
        EvLizalfos00[20].PlayAnimation({'name': 'damage_electric', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EvLizalfos00[20].PlayAnimationNoWait({'name': 'dead_f', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.5})
        EvLizalfos00[20].SetVisibility({'visible': False})
    }


    fork {
        EvLizalfos00[10].Destroy()
    } {
        EvLizalfos00[20].Destroy()
    }

    GoronChief.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    GoronChief.PlayAnimation({'name': 'curl_up_ed,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Partner.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Zelda.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Player.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        GoronChief.PlayAnimation({'name': 'flash', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            GoronChief.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GoronChief.SetFacialExpression({'expression': 'smile'})
        } {
            GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleTactics_080', 'getAttention': False})
        } {
            Timer.Wait({'time': 0.5})
            Audio.SetBGMVolume({'volume': 1.0, 'duration': 2.0})
        }

    } {
        Partner.PlayAnimation({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_SYS_MESSAGE_TORI3', 'volume': 1.0, 'pitch': 1.0})
    }


    fork {
        GoronChief.ResetFacialExpression()
    } {
        Partner.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        GoronChief.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleTactics_090', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.699999988079071})
        Partner.PlayAnimationNoWait({'name': 'ev_think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GoronChief.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Partner.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    QuestSystem.SetProgress({'symbol': 'VolcanoPointB:1518538330', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventVariables.SetVariable({'symbol': 'VolcanoPointB:1518538330'})
}

void DoNotJustThink() {
    Timer.Wait({'time': 1.5})

    fork {
        GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.ResetFacialExpression()
    }

    GoronChief.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})

    fork {
        GoronChief.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:DoNotJustThink_010', 'getAttention': False})
    } {
        GoronChief.SetFacialExpression({'expression': 'angry'})
    }


    fork {
        GoronChief.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.ResetFacialExpression()
    } {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:DoNotJustThink_030', 'getAttention': False})
    }


    fork {
        GoronChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:DoNotJustThink_030_02', 'getAttention': False})
    } {
        GoronChief.SetFacialExpression({'expression': 'angry'})
    }


    fork {
        GoronChief.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:DoNotJustThink_060', 'getAttention': False})
    }

    Timer.Wait({'time': 1.0})
    GoronChief.ResetFacialExpression()
    GoronChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        GoronChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:DoNotJustThink_070', 'getAttention': False})
    }


    fork {
        GoronChief.PlayAnimationEx({'time': 0.0, 'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:DoNotJustThink_090', 'getAttention': False})
    } {
        GoronChief.SetFacialExpression({'expression': 'angry'})
    }

    GoronChief.MoveToCompassPoint({'direction': 0, 'speed': 1, 'distance': 7.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    GoronChief.Deactivate()

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaC:DoNotJustThink_100', 'getAttention': False})
    } {
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Partner"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 1.0})
    QuestSystem.SetProgress({'symbol': 'Volcano:1727991118', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventVariables.SetVariable({'symbol': 'Volcano:1727991118'})
}

void VolcanoPointBTroubleClear_2() {

    call EvResetCommon.AllResetNowait()

    GoronChief.Activate()
    Camera.LookAt3ActorsCenterAsTalker({'duration': 0.0, 'offsetX': 1.0, 'offsetZ': -0.5, 'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="GoronChief"), 'actor3': ActorIdentifier(name="Goron002"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetY': 0.0})

    fork {
        Zelda.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Goron002"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GoronChief.AimActor({'actor': ActorIdentifier(name="Goron002"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Goron002.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Goron007.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner.MoveToBesideTargetActor({'speed': 1, 'offsetZ': 0.5, 'offsetY': 1.0, 'offsetX': 1.5, 'actor': ActorIdentifier(name="Zelda"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    }

    Partner.AimActor({'offsetX': 1.0, 'offsetY': 0.0, 'offsetZ': 1.0, 'duration': 0.0, 'actor': ActorIdentifier(name="Goron007"), 'withoutTurn': False, 'boneName': '', 'immediateTurn': False})
    Partner.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron007.SetFacialExpression({'expression': 'smile'})
    Goron007.PlayAnimation({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron002.SetInterestIkEnabled({'enable': False})
    Goron002.SetFacialExpression({'expression': 'smile'})
    Timer.Wait({'time': 2.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})

    fork {
        Goron002.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleClear_010', 'getAttention': False})
    } {
        Goron002.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Goron002.SetFacialExpression({'expression': 'sleep'})

    fork {
        Goron002.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleClear_020', 'getAttention': False})
    } {
        Goron002.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Goron002.ResetFacialExpression()
    } {
        Goron007.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron007.ResetFacialExpression()
    } {
        Partner.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner.AimActor({'actor': ActorIdentifier(name="Goron002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleClear_030', 'getAttention': False})
    } {
        GoronChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.0})
        Goron002.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.5})
        Goron007.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.800000011920929, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron002.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleClear_050', 'getAttention': False})
    } {
        Goron002.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron002.SetFacialExpression({'expression': 'sad'})
    }

    Timer.Wait({'time': 1.0})

    fork {
        Goron002.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleClear_060', 'getAttention': False})
    } {
        Goron002.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron002.SetFacialExpression({'expression': 'normal'})
    }

    Goron002.SetFacialExpression({'expression': 'smile'})

    fork {
        GoronChief.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleClear_065', 'getAttention': False})
    } {
        GoronChief.SetFacialExpression({'expression': 'sad'})
    }

    GoronChief.ResetFacialExpression()

    fork {
        Goron002.PlayAnimationNoWait({'name': 'yes01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron002.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleClear_066', 'getAttention': False})
    }

    Timer.Wait({'time': 1.0})

    fork {
        Goron002.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron002.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleClear_067', 'getAttention': False})
    } {
        Goron002.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        Goron002.PlayAnimation({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron002.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleClear_070', 'getAttention': False})
    } {
        Goron002.SetFacialExpression({'expression': 'smile'})
    }

    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    Goron007.Deactivate()
    Goron002.Deactivate()
    Camera.LookAt2ActorsCenterAsTalker({'duration': 0.0, 'actor1': ActorIdentifier(name="GoronChief"), 'actor2': ActorIdentifier(name="Zelda"), 'distanceOffset': 0.0, 'offsetZ': -1.0, 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0})
    Zelda.AimDegreeAngle({'duration': 0.0, 'angle': 355.0, 'withoutTurn': False, 'immediateTurn': False})
    Partner.MoveToBesideTargetActor({'speed': 1, 'offsetX': 1.0, 'offsetZ': -1.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Partner.AimDegreeAngle({'duration': 0.0, 'angle': 355.0, 'withoutTurn': False, 'immediateTurn': False})
    GoronChief.AimCompassPoint({'direction': 0, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    GoronChief.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 2.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleClear_080', 'getAttention': False})
    GoronChief.PlayAnimation({'name': 'surprised_ed,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleClear_090', 'getAttention': False})
    } {
        GoronChief.PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.SetFacialExpression({'expression': 'sad'})
    } {
        Timer.Wait({'time': 1.0})

        fork {
            Zelda.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }


    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleClear_100', 'getAttention': False})
    } {
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.AimActor({'actor': ActorIdentifier(name="Partner"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        GoronChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleClear_110', 'getAttention': False})
    } {
        GoronChief.ResetFacialExpression()
    }


    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleClear_120', 'getAttention': False})
    } {
        Partner.PlayAnimationNoWait({'name': 'ev_think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GoronChief.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleClear_130', 'getAttention': False})
    } {
        GoronChief.SetFacialExpression({'expression': 'sad'})
    }

    GoronChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleClear_130_02', 'getAttention': False})

    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleClear_130_03', 'getAttention': False})
    } {
        GoronChief.PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }


    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleClear_160', 'getAttention': False})
    } {
        GoronChief.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    EventVariables.SetVariable({'symbol': 'VolcanoPointB:1166687739'})
    QuestSystem.SetProgress({'symbol': 'VolcanoPointB:1166687739', 'isShowTelopInEvent': False, 'isFrontFade': False})
    if !EventFlags.CheckFlag({'symbol': 'Volcano_VolcanoPointA'}) {

        fork {
            GoronChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            GoronChief.PlayAnimationEx({'time': 0.0, 'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleClear_170', 'getAttention': False})
        }

        GoronChief.PlayAnimationEx({'time': 0.0, 'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleClear_180', 'getAttention': False})
        GoronChief.PlayAnimationEx({'time': 0.0, 'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleClear_190', 'getAttention': False})
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Partner"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleClear_200', 'getAttention': False})
        QuestSystem.SetProgress({'symbol': 'Volcano:3804950026', 'isShowTelopInEvent': False, 'isFrontFade': False})
        GoronChief.SetInstanceVariableString({'value': 'think02', 'name': 'idleAnim'})
    } else {

        call DoNotJustThink()

    }
}
