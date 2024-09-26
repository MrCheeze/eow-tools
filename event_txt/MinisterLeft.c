-------- EventFlow: MinisterLeft --------

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult4', 'GetConditionResult', 'GetLastResult']
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckMessgaeFlag', 'CheckFlag']
params: None

Actor: Partner
entrypoint: None()
actions: ['MoveToBesideTargetActor', 'Talk', 'PlayAnimationNoWait', 'PlayAnimation']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Reset', 'LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor', 'PlayAnimation', 'SetZeldaHood', 'AimCompassPoint', 'SetVisibility', 'LookAtTalker', 'PlayTailorOtherChannelNoWait', 'ResetAim']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Environment
entrypoint: None()
actions: ['ChangeWeather']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayZoneBGM']
queries: []
params: None

Actor: MinisterLeft
entrypoint: None()
actions: ['Talk', 'SetTalkerName', 'MoveToBesideTargetActor', 'SetVisibility', 'PlayAnimationNoWait', 'Deactivate', 'AimPlayer', 'SetFacialExpression', 'PlayAnimation', 'SetGravityEnable', 'GenericTalkSequenceWithDialog', 'TalkKeep', 'LookAtTalker', 'Activate', 'MoveToCompassPoint', 'SetInstanceVariableInt', 'SetInterestIkEnabled', 'SetInstanceVariableBool', 'AimDegreeAngle', 'AimActor', 'ResetFacialExpression', 'AimCompassPoint', 'SetCullMode', 'SetCollisionEnabled']
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

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['MoveToTargetActor', 'WarpToActor', 'AimActor', 'MoveToBesideTargetActor', 'PlayAnimationNoWait', 'SetCollisionEnabled']
queries: []
params: None

Actor: HylianMC001
entrypoint: None()
actions: ['PlayAnimationNoWait', 'SetFacialExpression', 'PlayAnimation', 'Talk', 'Activate', 'Deactivate', 'AimPlayer', 'AimActor']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['ForbidSave', 'RequestAutoSave', 'RequestLevelJump']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'MoveToBesideTargetActor', 'AimPlayer', 'AimActor', 'ResetAim', 'WarpToDefaultPosition', 'PlayAnimation', 'AimCompassPoint', 'SetVisibility', 'DisableAutoMovement', 'EnableAutoMovement']
queries: []
params: None

void MinisterTalk() {
    GameControl.RequestAutoSave({'needsStartupEvent': True, 'immediate': True, 'name': 'MinisterTalk', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
    GameControl.ForbidSave()

    fork {
        Environment.ChangeWeather({'blendtime': 0.0, 'name': 'Sunny', 'timespan': 5.0})
    } {
        MinisterLeft.SetVisibility({'visible': False})
    } {
        Partner[companion].DisableAutoMovement()
    }

    Zelda.LookAtTalker({'offsetZ': -2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'keep': False})
    Partner[companion].MoveToBesideTargetActor({'speed': 0, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 1.75, 'offsetX': 0.0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
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


    call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

    Timer.Wait({'time': 0.5})
    Zelda.PlayTailorOtherChannelNoWait({'channel': 'WarpEnd_00', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    Timer.Wait({'time': 2.5})

    fork {
        Zelda.SetVisibility({'visible': True})
    } {
        Partner[companion].SetVisibility({'visible': True})
    }

    Timer.Wait({'time': 0.5})

    fork {
        Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.5})
    Partner[companion].MoveToBesideTargetActor({'offsetX': 1.0, 'offsetZ': -1.0, 'offsetY': 1.0, 'customSpeed': 10.0, 'actor': ActorIdentifier(name="Zelda"), 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.30000001192092896})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:MinisterTalk_010', 'getAttention': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:MinisterTalk_011', 'getAttention': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:MinisterTalk_012', 'getAttention': False})
    } {
        Partner[companion].PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterLeft.SetInterestIkEnabled({'enable': False})
    } {
        Timer.Wait({'time': 0.5})

        call GeneralSequence.Look_at_Partner()

    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})

    fork {
        MinisterLeft.SetTalkerName({'message': 'glossary/Character:Unknown', 'keep': False})
        MinisterLeft.Talk({'message': 'scenario/StoryAreaA:MinisterTalk_020', 'getAttention': False})
    } {
        MinisterLeft.SetVisibility({'visible': True})
        MinisterLeft.SetGravityEnable({'enable': True})
    }

    MinisterLeft.SetTalkerName({'message': 'glossary/Character:MinisterLeft', 'keep': False})

    fork {
        MinisterLeft.SetFacialExpression({'expression': 'sad'})
    } {
        Zelda.AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterLeft.MoveToCompassPoint({'speed': 1, 'direction': 0, 'distance': 5.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    MinisterLeft.MoveToBesideTargetActor({'offsetZ': -2.0, 'speed': 1, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': -1.5, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    MinisterLeft.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="MinisterLeft"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    MinisterLeft.SetFacialExpression({'expression': 'sleep'})
    MinisterLeft.PlayAnimation({'name': 'no', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.SetFacialExpression({'expression': 'normal'})

    fork {
        MinisterLeft.Talk({'message': 'scenario/StoryAreaA:MinisterTalk_030', 'getAttention': False})
    } {
        MinisterLeft.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Zelda.PlayAnimation({'name': 'hood_off', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.38999998569488525})
        Zelda.SetZeldaHood({'isOn': False})
    }

    Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        MinisterLeft.Talk({'message': 'scenario/StoryAreaA:MinisterTalk_040', 'getAttention': False})
    } {
        MinisterLeft.SetFacialExpression({'expression': 'surprise'})
    } {
        MinisterLeft.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    MinisterLeft.SetFacialExpression({'expression': 'normal'})
    MinisterLeft.PlayAnimation({'name': 'surprised_ed01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        MinisterLeft.Talk({'message': 'scenario/StoryAreaA:MinisterTalk_050', 'getAttention': False})
    } {
        MinisterLeft.SetFacialExpression({'expression': 'sad'})
        MinisterLeft.PlayAnimation({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    MinisterLeft.SetFacialExpression({'expression': 'normal'})
    MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Zelda.PlayAnimation({'name': 'hood_on', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.38999998569488525})
        Zelda.SetZeldaHood({'isOn': True})
    }

    Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.30000001192092896})
    Zelda.ResetAim()
    Zelda.PlayAnimation({'name': 'talk_hand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeOutFastB'})
    Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.SetFacialExpression({'expression': 'sad'})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInFast'})
    MinisterLeft.Talk({'message': 'scenario/StoryAreaA:MinisterTalk_055', 'getAttention': False})
    Timer.Wait({'time': 1.0})
    MinisterLeft.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.SetFacialExpression({'expression': 'sleep'})
    MinisterLeft.Talk({'message': 'scenario/StoryAreaA:MinisterTalk_060', 'getAttention': False})
    MinisterLeft.SetFacialExpression({'expression': 'smile'})
    MinisterLeft.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.Talk({'message': 'scenario/StoryAreaA:MinisterTalk_061', 'getAttention': False})
    MinisterLeft.SetFacialExpression({'expression': 'normal'})
    MinisterLeft.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.AimDegreeAngle({'angle': 60.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})

    fork {
        MinisterLeft.Talk({'message': 'scenario/StoryAreaA:MinisterTalk_062', 'getAttention': False})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

        fork {
            Timer.Wait({'time': 0.4000000059604645})

            call GeneralSequence.Look_at_Partner_neck()

        } {
            Partner[companion].PlayAnimationNoWait({'name': 'appeal02,talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Partner[companion].Talk({'message': 'scenario/StoryAreaA:MinisterTalk_070', 'getAttention': False})
        }

    } {
        MinisterLeft.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterLeft.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.SetFacialExpression({'expression': 'smile'})
    MinisterLeft.PlayAnimationNoWait({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.Talk({'message': 'scenario/StoryAreaA:MinisterTalk_071', 'getAttention': False})
    MinisterLeft.SetFacialExpression({'expression': 'normal'})
    MinisterLeft.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:MinisterTalk_072', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    MinisterLeft.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.SetFacialExpression({'expression': 'sleep'})

    fork {
        MinisterLeft.Talk({'message': 'scenario/StoryAreaA:MinisterTalk_080', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.699999988079071})
        Zelda.AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].ResetAim()
    Timer.Wait({'time': 1.0})

    fork {
        MinisterLeft.SetFacialExpression({'expression': 'normal'})
        MinisterLeft.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterLeft.AimPlayer({'duration': 1.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.Talk({'message': 'scenario/StoryAreaA:MinisterTalk_090', 'getAttention': False})
    MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.Talk({'message': 'scenario/StoryAreaA:MinisterTalk_100', 'getAttention': False})
    MinisterLeft.SetFacialExpression({'expression': 'normal'})
    MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.699999988079071})
    Zelda.PlayAnimation({'name': 'ev_hand_over,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    MinisterLeft.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    MinisterLeft.Talk({'message': 'scenario/StoryAreaA:MinisterTalk_110', 'getAttention': False})
    MinisterLeft.SetFacialExpression({'expression': 'sleep'})
    Timer.Wait({'time': 1.0})
    MinisterLeft.SetFacialExpression({'expression': 'normal'})
    MinisterLeft.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.Talk({'message': 'scenario/StoryAreaA:MinisterTalk_120', 'getAttention': False})
    MinisterLeft.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.SetFacialExpression({'expression': 'smile'})
    MinisterLeft.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.Talk({'message': 'scenario/StoryAreaA:MinisterTalk_130', 'getAttention': False})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    MinisterLeft.SetFacialExpression({'expression': 'normal'})
    MinisterLeft.MoveToCompassPoint({'speed': 1, 'direction': 0, 'distance': 7.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    MinisterLeft.Deactivate()
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    EventFlags.SetFlag({'symbol': 'EvAreaA014', 'value': True})
    Audio.PlayZoneBGM({'stopbgm': True})
    QuestSystem.SetProgress({'symbol': 'HyruleCastle_LuberiHouse:430356480', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventVariables.SetVariable({'symbol': 'HyruleCastle_LuberiHouse:430356480'})
    MinisterLeft.SetInstanceVariableInt({'name': 'pathIndex', 'value': 0})
    EventFlags.SetFlag({'symbol': 'EvA_MinisterTalk', 'value': True})
}

void MinisterLeftInfo() {
    MinisterLeft.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/StoryAreaA:MinisterLeftInfo_010', 'facial': 'angry', 'selfTalkAnimName': 'wish_st,wish_lp', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    MinisterLeft.SetInstanceVariableBool({'name': 'MinisterLeftInfo', 'value': True})
    Event127:
    MinisterLeft.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.ResetFacialExpression()
    MinisterLeft.TalkKeep({'message': 'scenario/StoryAreaA:MinisterLeftInfo_Q0', 'getAttention': False})
    MinisterLeft.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        MinisterLeft.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterLeft.TalkKeep({'message': 'scenario/StoryAreaA:MinisterLeftInfo_Q0_A1_010', 'getAttention': False})
        Event195:
        MinisterLeft.SetFacialExpression({'expression': 'smile'})
        MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterLeft.TalkKeep({'message': 'scenario/StoryAreaA:MinisterLeftInfo_Q1', 'getAttention': False})
        switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
          case 0:

            call Info_CoastRiver()

            Event260:

            call MinisterLeftInfo_Q1_Loop()

          case 1:

            call Info_Desert()

            goto Event260
          case 2:

            call MinisterLeftInfo_Q0_Loop()

        }
      case 1:
        MinisterLeft.SetFacialExpression({'expression': 'sad'})
        MinisterLeft.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk01_010', 'getAttention': False})
        MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk01_020', 'getAttention': False})
        MinisterLeft.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterLeft.ResetFacialExpression()

        call MinisterLeftInfo_Q0_Loop()

      case 2:

        fork {
            MinisterLeft.PlayAnimation({'name': 'wish_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
            MinisterLeft.PlayAnimation({'name': 'wish_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MinisterLeft.SetFacialExpression({'expression': 'sad'})
        } {
            MinisterLeft.TalkKeep({'message': 'scenario/StoryAreaA:MinisterLeftInfo_Q1_A3_010', 'getAttention': False})
        }

        MinisterLeft.ResetFacialExpression()
    }
}

void MinisterLeftRescue() {

    call EvResetCommon.AllResetNowait()


    fork {
        MinisterLeft.Activate()
        MinisterLeft.SetFacialExpression({'expression': 'smile'})
    } {
        HylianMC001.Activate()
        HylianMC001.SetFacialExpression({'expression': 'sad'})
        HylianMC001.PlayAnimationNoWait({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.20000000298023224})

    call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})


    fork {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="MinisterLeft"), 'actor2': ActorIdentifier(name="HylianMC001"), 'weight1': 1.5, 'weight2': 1.5, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Timer.Wait({'time': 0.5})
        HylianMC001.Talk({'message': 'scenario/StoryAreaHyruleCastle:MinisterLeftRescue_005', 'getAttention': False})

        fork {
            MinisterLeft.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MinisterLeft.Talk({'message': 'scenario/StoryAreaHyruleCastle:MinisterLeftRescue_010', 'getAttention': False})
        }

    } {
        Player.MoveToTargetActor({'speed': 0, 'distance': 3.0, 'offsetX': -0.5, 'actor': ActorIdentifier(name="Player"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetY': 0.0})
        Partner.MoveToBesideTargetActor({'speed': 0, 'offsetY': 1.0, 'offsetX': -1.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})

        fork {
            Player.AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    HylianMC001.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        MinisterLeft.AimActor({'withoutTurn': True, 'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="HylianMC001"), 'offsetX': 0.20000000298023224, 'boneName': '', 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.5})
        HylianMC001.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        HylianMC001.PlayAnimation({'name': 'yes_lp01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.4300000071525574})
        HylianMC001.Talk({'message': 'scenario/StoryAreaHyruleCastle:MinisterLeftRescue_020', 'getAttention': False})
    }

    Timer.Wait({'time': 1.0})

    fork {
        MinisterLeft.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MinisterLeft.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    }


    fork {
        MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterLeft.SetFacialExpression({'expression': 'surprise'})
    } {
        MinisterLeft.Talk({'message': 'scenario/StoryAreaHyruleCastle:MinisterLeftRescue_030', 'getAttention': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="MinisterLeft"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        HylianMC001.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    MinisterLeft.SetFacialExpression({'expression': 'normal'})

    fork {
        MinisterLeft.Talk({'message': 'scenario/StoryAreaHyruleCastle:MinisterLeftRescue_040', 'getAttention': False})
    } {
        MinisterLeft.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    switch QuestSystem.CheckProgress({'symbol': 'Midpoint:855587140'}) {
      case [4294967295, 1]:
        Event291:
        MinisterLeft.SetFacialExpression({'expression': 'sad'})

        fork {
            MinisterLeft.PlayAnimation({'name': 'wish_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
            MinisterLeft.PlayAnimation({'name': 'wish_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MinisterLeft.Talk({'message': 'scenario/StoryAreaHyruleCastle:MinisterLeftRescue_050', 'getAttention': False})
        }

        Fade.StartPreset({'preset': 'FadeOutNormalB'})
        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
        MinisterLeft.Deactivate()
        HylianMC001.Deactivate()
        Timer.Wait({'time': 1.5})
        Fade.StartPreset({'preset': 'FadeInNormal'})
      case 0:

        fork {
            Partner.Talk({'message': 'scenario/StoryAreaHyruleCastle:MinisterLeftRescue_Another_010', 'getAttention': False})
        } {
            Partner.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MinisterLeft.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Partner.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.5})

        fork {
            MinisterLeft.Talk({'message': 'scenario/StoryAreaHyruleCastle:MinisterLeftRescue_Another_020', 'getAttention': False})
        } {
            MinisterLeft.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MinisterLeft.SetInterestIkEnabled({'enable': False})
        }

        Timer.Wait({'time': 0.5})

        fork {
            MinisterLeft.Talk({'message': 'scenario/StoryAreaHyruleCastle:MinisterLeftRescue_Another_030', 'getAttention': False})
        } {
            MinisterLeft.SetFacialExpression({'expression': 'sleep'})
        }

        Timer.Wait({'time': 0.5})

        fork {
            Partner.Talk({'message': 'scenario/StoryAreaHyruleCastle:MinisterLeftRescue_Another_040', 'getAttention': False})
        } {
            Partner.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        goto Event291
    }
}

void MinisterLeftTalk04() {
    MinisterLeft.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk040_Q1', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        MinisterLeft.SetFacialExpression({'expression': 'sleep'})
        MinisterLeft.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk04_010', 'getAttention': False})
        Event539:
        MinisterLeft.ResetFacialExpression()
        MinisterLeft.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk04_Q1', 'getAttention': False})
        switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
          case 0:
            MinisterLeft.Talk({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk04_Q1_A1_010', 'getAttention': False})
            Event174:

            call MinisterLeftTalk04_Q1_Loop()

          case 1:
            MinisterLeft.Talk({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk04_Q1_A2_010', 'getAttention': False})
            goto Event174
          case 2:
            MinisterLeft.Talk({'message': 'scenario/HylianGeneralTalk:MinisterLeftInfo_Q1_A3_010', 'getAttention': False})
            goto Event174
          case 3:
            MinisterLeft.SetFacialExpression({'expression': 'sad'})
            MinisterLeft.PlayAnimationNoWait({'name': 'wish_st,wish_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
            MinisterLeft.Talk({'message': 'scenario/HylianGeneralTalk:MinisterLeftInfo_Q1_A4_010', 'getAttention': False})
            MinisterLeft.ResetFacialExpression()
        }
    } else {
        MinisterLeft.SetFacialExpression({'expression': 'smile'})
        MinisterLeft.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk040_Q1_A2_010', 'getAttention': False})
        MinisterLeft.ResetFacialExpression()
    }
}

void WaitingMinisterLeft() {

    call EvResetCommon.AllReset()

    Timer.Wait({'time': 0.5})

    fork {
        Zelda.LookAtTalker({'offsetZ': -2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'keep': False})
    } {
        MinisterLeft.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].EnableAutoMovement()
    }

    Timer.Wait({'time': 0.5})

    fork {
        MinisterLeft.Talk({'message': 'scenario/StoryAreaA:WaitingMinisterLeft_010', 'getAttention': False})
    } {
        MinisterLeft.PlayAnimation({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        MinisterLeft.SetGravityEnable({'enable': False})
        MinisterLeft.SetCollisionEnabled({'enable': False})
        MinisterLeft.MoveToCompassPoint({'speed': 0, 'direction': 2, 'distance': 5.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Player.MoveToBesideTargetActor({'speed': 0, 'actor': ActorIdentifier(name="MinisterLeft"), 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    } {
        Timer.Wait({'time': 1.0})
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
    } {
        Timer.Wait({'time': 0.800000011920929})
        MinisterLeft.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    EventFlags.SetFlag({'symbol': 'EvA_EndLeadMinister', 'value': True})
    EventFlags.SetFlag({'symbol': 'EvA_WaitingMinisterLeftFadeIn', 'value': True})
    GameControl.RequestLevelJump({'level': 'LuberiHouse', 'locator': 'MeetLuberi', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void detain() {
    Timer.Wait({'time': 0.4000000059604645})

    fork {
        MinisterLeft.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MinisterLeft.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    }

    Timer.Wait({'time': 0.5})
    Player.SetCollisionEnabled({'enable': False})
    MinisterLeft.Talk({'message': 'scenario/StoryAreaA:DontLeaveForest_010', 'getAttention': False})
    Fade.StartPreset({'preset': 'FadeOutFastB'})
    MinisterLeft.AimCompassPoint({'direction': 1, 'immediateTurn': True, 'duration': 0.0, 'withoutTurn': False})

    call EvResetCommon.AllReset()

    Timer.Wait({'time': 0.5})
    Player.WarpToActor({'distance': 1.5, 'actor': ActorIdentifier(name="MinisterLeft"), 'offsetY': 0.0, 'offsetX': 0.0})
    Partner[companion].WarpToDefaultPosition({'position': 1, 'avoidWall': False, 'avoidPlayer': False})
    Player.SetCollisionEnabled({'enable': True})

    fork {
        Player.AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.0, 'immediateTurn': True, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Player.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.0, 'immediateTurn': True, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    MinisterLeft.AimDegreeAngle({'immediateTurn': True, 'duration': 0.0, 'angle': 'baseAngleY', 'withoutTurn': False})
    Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})
    Timer.Wait({'time': 0.20000000298023224})
    Fade.StartPreset({'preset': 'FadeInFast'})
}

void talk060() {
    MinisterLeft.SetFacialExpression({'expression': 'sad'})
    MinisterLeft.PlayAnimationNoWait({'name': 'no,sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.Talk({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk060_020', 'getAttention': False})
    MinisterLeft.ResetFacialExpression()
    MinisterLeft.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void talk070() {
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk070_010'}) {
        MinisterLeft.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterLeft.Talk({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk070_010', 'getAttention': False})
        MinisterLeft.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        call GeneralSequence.ZeldaTalkMotion_2.0s()

        Timer.Wait({'time': 0.4000000059604645})
        MinisterLeft.SetFacialExpression({'expression': 'smile'})
        MinisterLeft.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk070_020', 'getAttention': False})
        MinisterLeft.SetFacialExpression({'expression': 'sad'})
        MinisterLeft.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk070_030', 'getAttention': False})
        MinisterLeft.SetFacialExpression({'expression': 'angry'})
        MinisterLeft.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk070_040', 'getAttention': False})
        Event530:
        MinisterLeft.ResetFacialExpression()
        MinisterLeft.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk070_050', 'getAttention': False})
    } else {
        MinisterLeft.SetFacialExpression({'expression': 'angry'})
        MinisterLeft.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk070_040', 'getAttention': False})
        goto Event530
    }
}

void MinisterLeftInfo_Q0_Loop() {
    goto Event127
}

void MinisterLeftInfo_Q1_Loop() {
    goto Event195
}

void MinisterLeftInfo02() {
    MinisterLeft.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/StoryAreaA:MinisterLeftInfo_010', 'facial': 'angry', 'selfTalkAnimName': 'wish_st,wish_lp', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    MinisterLeft.SetInstanceVariableBool({'name': 'MinisterLeftInfo', 'value': True})
    Event586:
    MinisterLeft.ResetFacialExpression()
    MinisterLeft.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.TalkKeep({'message': 'scenario/StoryAreaA:MinisterLeftInfo_Q0', 'getAttention': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !EventFlags.CheckMessgaeFlag({'message': 'scenario/StoryAreaA:MinisterLeftInfo_020'}) {
            MinisterLeft.SetFacialExpression({'expression': 'smile'})
            MinisterLeft.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            MinisterLeft.TalkKeep({'message': 'scenario/StoryAreaA:MinisterLeftInfo_020', 'getAttention': False})
            MinisterLeft.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            MinisterLeft.ResetFacialExpression()
            Event590:
            MinisterLeft.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            MinisterLeft.TalkKeep({'message': 'scenario/StoryAreaA:MinisterLeftInfo_Q1b', 'getAttention': False})
            switch Dialog.GetConditionResult({'resultOnSkip': 0}) {
              case 0:

                call Info_CoastRiver()

                Event453:

                call MinisterLeftInfo02_Q1_Loop()

              case 1:

                call Info_Desert()

                goto Event453
              case 2:

                call MinisterLeftInfo02_Q0_Loop()

            }
        } else {
            Event452:
            MinisterLeft.SetFacialExpression({'expression': 'smile'})
            goto Event590
        }
      case 1:
        switch QuestSystem.CheckProgress({'symbol': 'Coast_River:4211698231'}) {
          case 4294967295:
            MinisterLeft.SetFacialExpression({'expression': 'sad'})
            MinisterLeft.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk01_010', 'getAttention': False})
            MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk01_020', 'getAttention': False})
            MinisterLeft.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

            call MinisterLeftInfo02_Q0_Loop()

          case 0:
            MinisterLeft.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

            fork {
                MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk03_010', 'getAttention': False})
            } {
                MinisterLeft.SetFacialExpression({'expression': 'smile'})
            }


            fork {
                MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk03_020', 'getAttention': False})
            } {
                MinisterLeft.SetFacialExpression({'expression': 'sad'})
                MinisterLeft.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }


            call MinisterLeftInfo02_Q0_Loop()

        }
      case 2:
        MinisterLeft.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            MinisterLeft.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk03_030', 'facial': 'sad', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
            MinisterLeft.Talk({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk03_040', 'getAttention': False})
        } {
            MinisterLeft.SetFacialExpression({'expression': 'sad'})
        }

    }
}

void MinisterLeftInfo02_Q0_Loop() {
    goto Event586
}

void Info_Desert() {

    fork {
        MinisterLeft.TalkKeep({'message': 'scenario/StoryAreaA:MinisterLeftInfo_Q1_A2_010', 'getAttention': False})
    } {
        MinisterLeft.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterLeft.SetFacialExpression({'expression': 'angry'})
    }


    fork {
        MinisterLeft.TalkKeep({'message': 'scenario/StoryAreaA:MinisterLeftInfo_Q1_A2_020', 'getAttention': False})
    } {
        MinisterLeft.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterLeft.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        MinisterLeft.TalkKeep({'message': 'scenario/StoryAreaA:MinisterLeftInfo_Q1_A2_030', 'getAttention': False})
    } {
        MinisterLeft.SetFacialExpression({'expression': 'surprise'})
    }


    fork {
        MinisterLeft.TalkKeep({'message': 'scenario/StoryAreaA:MinisterLeftInfo_Q1_A2_040', 'getAttention': False})
    } {
        MinisterLeft.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterLeft.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterLeft.SetFacialExpression({'expression': 'normal'})
    }

    MinisterLeft.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void Info_CoastRiver() {

    fork {
        MinisterLeft.TalkKeep({'message': 'scenario/StoryAreaA:MinisterLeftInfo_Q1_A1_010', 'getAttention': False})
    } {
        MinisterLeft.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterLeft.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        MinisterLeft.TalkKeep({'message': 'scenario/StoryAreaA:MinisterLeftInfo_Q1_A1_020', 'getAttention': False})
    } {
        MinisterLeft.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        MinisterLeft.TalkKeep({'message': 'scenario/StoryAreaA:MinisterLeftInfo_Q1_A1_030', 'getAttention': False})
    } {
        MinisterLeft.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        MinisterLeft.TalkKeep({'message': 'scenario/StoryAreaA:MinisterLeftInfo_Q1_A1_040', 'getAttention': False})
    } {
        MinisterLeft.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterLeft.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterLeft.SetFacialExpression({'expression': 'smile'})
    }

    MinisterLeft.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void MinisterLeftInfo02_Q1_Loop() {
    goto Event452
}

void talk045() {
    MinisterLeft.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk045_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Event461:
    MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk045Q0', 'getAttention': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !EventFlags.CheckFlag({'symbol': 'ReleaseofGoddess1'}) {
            MinisterLeft.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk045Q0_A1_010', 'getAttention': False})

            call talk045_Q0_Loop()

        } else {
            MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk045Q1', 'getAttention': False})
            Event182:
            switch Dialog.GetConditionResult({'resultOnSkip': 0}) {
              case 0:
                MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk045Q1_A1_010', 'getAttention': False})
                MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk045Q1_A1_020', 'getAttention': False})
                MinisterLeft.SetFacialExpression({'expression': 'sad'})
                MinisterLeft.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk045Q1_A1_030', 'getAttention': False})
                MinisterLeft.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk045Q1_A1_040', 'getAttention': False})
                MinisterLeft.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
                MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk045Q1_A1_050', 'getAttention': False})
                MinisterLeft.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk045Q1_A1_060', 'getAttention': False})
                MinisterLeft.ResetFacialExpression()
                Event488:

                call talk045_Q1_Loop()

              case 1:
                MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk045Q1_A2_010', 'getAttention': False})
                MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk045Q1_A2_020', 'getAttention': False})
                MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk045Q1_A2_030', 'getAttention': False})
                MinisterLeft.SetFacialExpression({'expression': 'sleep'})
                MinisterLeft.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk045Q1_A2_040', 'getAttention': False})
                MinisterLeft.ResetFacialExpression()
                MinisterLeft.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
                MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk045Q1_A2_050', 'getAttention': False})
                goto Event488
              case 2:
                MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk045Q1_A3_010', 'getAttention': False})
                MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk045Q1_A3_020', 'getAttention': False})
                MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk045Q1_A3_030', 'getAttention': False})
                MinisterLeft.SetFacialExpression({'expression': 'sleep'})
                MinisterLeft.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk045Q1_A3_040', 'getAttention': False})
                MinisterLeft.ResetFacialExpression()
                MinisterLeft.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
                MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk045Q1_A3_050', 'getAttention': False})
                MinisterLeft.SetFacialExpression({'expression': 'sad'})
                MinisterLeft.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk045Q1_A3_060', 'getAttention': False})
                MinisterLeft.SetFacialExpression({'expression': 'angry'})
                MinisterLeft.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk045Q1_A3_070', 'getAttention': False})
                goto Event488
              case 3:
                MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk045Q1_A4_010', 'getAttention': False})
                MinisterLeft.SetFacialExpression({'expression': 'sad'})
                MinisterLeft.PlayAnimationNoWait({'name': 'no,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
                MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk045Q1_A4_020', 'getAttention': False})
                MinisterLeft.ResetFacialExpression()
                MinisterLeft.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
                MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk045Q1_A4_030', 'getAttention': False})
                MinisterLeft.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk045Q1_A4_040', 'getAttention': False})
                goto Event488
              case 4:
                MinisterLeft.Talk({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk045_020', 'getAttention': False})

                call talk045_Q0_Loop()

            }
        }
      case 1:

        call talk045_SequenceCheck()

      case 2:
        MinisterLeft.SetFacialExpression({'expression': 'smile'})
        MinisterLeft.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterLeft.Talk({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk045_030', 'getAttention': False})
    }
}

void talk045_Q0_Loop() {
    goto Event461
}

void talk045_SequenceCheck() {
    if !EventFlags.CheckFlag({'symbol': 'ReleaseofGoddess1'}) {
        Event496:

        call talk055()

        Event500:

        call talk045_Q0_Loop()

    } else
    switch QuestSystem.CheckProgress({'symbol': 'LastDungeon:1973410502'}) {
      case 4294967295:
        goto Event496
      case 0:
        Event497:

        call talk060()

        goto Event500
      case 1:
        switch QuestSystem.CheckProgress({'symbol': 'Link_Rescue:1774146960'}) {
          case 4294967295:
            goto Event497
          case [0, 1]:

            call talk070()

            goto Event500
        }
    }
}

void talk045_Q1_Loop() {
    MinisterLeft.ResetFacialExpression()
    MinisterLeft.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterLeft.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk045Q1b', 'getAttention': False})
    goto Event182
}

void talk055() {
    MinisterLeft.Talk({'message': 'scenario/HylianGeneralTalk:MinisterLeftTalk055_010', 'getAttention': False})
}

void MinisterLeftTalk04_Q1_Loop() {
    goto Event539
}

void WaitingMinisterLeftFadeIn() {
    Fade.StartPreset({'preset': 'FadeOutFastB'})
    EventFlags.SetFlag({'symbol': 'EvA_WaitingMinisterLeftFadeIn', 'value': True})

    call EvResetCommon.AllReset()

    MinisterLeft.Activate()
    MinisterLeft.SetCullMode({'cullMode': 0, 'enabled': True})
    Player.WarpToActor({'distance': 3.0, 'actor': ActorIdentifier(name="MinisterLeft"), 'offsetX': 2.0, 'offsetY': 0.0})
    Partner[companion].WarpToDefaultPosition({'position': 3, 'avoidWall': False, 'avoidPlayer': False})
    Partner[companion].EnableAutoMovement()

    fork {
        Zelda.LookAtTalker({'offsetZ': -2.0, 'chaseRatio': 1.0, 'duration': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'keep': False})
    } {
        Zelda.AimActor({'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="MinisterLeft"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MinisterLeft.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.10000000149011612, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
    }

    Fade.StartPreset({'preset': 'FadeInFast'})
    Timer.Wait({'time': 0.5})

    fork {
        MinisterLeft.Talk({'message': 'scenario/StoryAreaA:WaitingMinisterLeft_010', 'getAttention': False})
    } {
        MinisterLeft.PlayAnimation({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    MinisterLeft.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        MinisterLeft.SetGravityEnable({'enable': False})
        MinisterLeft.SetCollisionEnabled({'enable': False})
        MinisterLeft.MoveToCompassPoint({'speed': 0, 'direction': 2, 'distance': 5.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Player.MoveToBesideTargetActor({'speed': 0, 'actor': ActorIdentifier(name="MinisterLeft"), 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    } {
        Timer.Wait({'time': 1.0})
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
    } {
        Timer.Wait({'time': 0.800000011920929})
        MinisterLeft.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    EventFlags.SetFlag({'symbol': 'EvA_EndLeadMinister', 'value': True})
    GameControl.RequestLevelJump({'level': 'LuberiHouse', 'locator': 'MeetLuberi', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void detain_Goal() {
    Timer.Wait({'time': 0.4000000059604645})

    fork {
        MinisterLeft.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MinisterLeft.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {
        Partner[companion].EnableAutoMovement()
    }

    Timer.Wait({'time': 0.5})
    Player.SetCollisionEnabled({'enable': False})
    MinisterLeft.Talk({'message': 'scenario/StoryAreaA:DontLeaveForest_010', 'getAttention': False})
    Fade.StartPreset({'preset': 'FadeOutFastB'})
    MinisterLeft.AimCompassPoint({'duration': 0.10000000149011612, 'direction': 0, 'withoutTurn': False, 'immediateTurn': False})

    call EvResetCommon.AllReset()

    Player.WarpToActor({'offsetX': 1.5, 'actor': ActorIdentifier(name="MinisterLeft"), 'distance': 5.0, 'offsetY': 0.0})
    Partner[companion].WarpToDefaultPosition({'position': 1, 'avoidWall': False, 'avoidPlayer': False})
    Player.SetCollisionEnabled({'enable': True})

    fork {
        Player.AimActor({'actor': ActorIdentifier(name="MinisterLeft"), 'duration': 0.10000000149011612, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Player.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].AimActor({'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="MinisterLeft"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})
    Timer.Wait({'time': 0.20000000298023224})
    Fade.StartPreset({'preset': 'FadeInFast'})
}
