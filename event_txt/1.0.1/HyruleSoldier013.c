-------- EventFlow: HyruleSoldier013 --------

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult', 'GetLastResult4']
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['WarpToActorLinkedPoint']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'MoveToCompassPoint', 'SetInterestIkEnabled']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: HyruleSoldier013
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'LookAtGimmicksLinkedPoint', 'SetInterestIkEnabled', 'PlayAnimationNoWait', 'AimActor', 'SetFacialExpression', 'TalkKeep']
queries: []
params: None

Actor: HyruleSoldier028
entrypoint: None()
actions: ['Activate', 'SetInstanceVariableBool', 'MoveToLinkedPoint', 'Talk', 'SetFacialExpression', 'PlayAnimationNoWait', 'TalkKeep', 'AimPlayer', 'AimActor', 'PlayAnimationEx', 'SetInterestIkEnabled', 'WarpToLinkedPointWithCompassPoint', 'SetTalkerName', 'SkipAutoTurn']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['StopAllBGM', 'Prepare', 'PlayBGM', 'PlayZoneBGM']
queries: []
params: None

void talk010() {
    HyruleSoldier013.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:SoldierSTalk010_010', 'selfTalkAnimName': 'salute_st,salute_talk', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HyruleSoldier013.LookAtGimmicksLinkedPoint({'pointIndex': 0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    HyruleSoldier013.Talk({'message': 'scenario/HylianGeneralTalk:SoldierSTalk010_020', 'getAttention': False})
}

void talk020() {
    HyruleSoldier013.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:SoldierSTalk020_010', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HyruleSoldier013.Talk({'message': 'scenario/HylianGeneralTalk:SoldierSTalk020_020', 'getAttention': False})
}

void talk030() {
    HyruleSoldier013.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianSoldier013Talk030_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk040() {
    HyruleSoldier013.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianSoldier013Talk040_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Mystery_Forest020_SoldierTalk080() {

    call EvResetCommon.AllReset()


    fork {
        HyruleSoldier013.GenericTalkSequenceWithDialog({'selfTalkAnimName': 'salute_st,salute_lp', 'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk080_Q1', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        HyruleSoldier013.SetInterestIkEnabled({'enable': False})
    }

    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        Event17:

        fork {
            HyruleSoldier013.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk080_Q1_A1_010', 'getAttention': False})
        } {
            HyruleSoldier013.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HyruleSoldier013.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk080_Q1_A1_020', 'getAttention': False})
        } {
            HyruleSoldier013.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier013.SetInterestIkEnabled({'enable': False})
        }

    } else {
        Event22:

        fork {
            HyruleSoldier013.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk080_Q1_A2_010', 'getAttention': False})
        } {
            HyruleSoldier013.PlayAnimationNoWait({'name': 'salute_st,salute_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }
}

void Mystery_Forest030() {

    call EvResetCommon.AllReset()


    fork {
        HyruleSoldier013.GenericTalkSequenceWithDialog({'selfTalkAnimName': 'salute_st,salute_lp', 'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk080_GotHint_Q1', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        HyruleSoldier013.SetInterestIkEnabled({'enable': False})
    }

    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        goto Event17
      case 1:
        Audio.StopAllBGM({'duration': 2.0})
        Fade.StartPreset({'preset': 'FadeOutSlowB'})

        call EvResetCommon.AllReset()

        Zelda.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="HyruleSoldier013"), 'offsetY': 0.0})
        Player.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="HyruleSoldier013"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        HyruleSoldier013.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HyruleSoldier013"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Audio.Prepare({'label': 'BGM_EV_COMMON2', 'kind': 0, 'volume': 1.0})
        Timer.Wait({'time': 2.0})
        Fade.StartPreset({'preset': 'FadeInSlow'})

        fork {
            HyruleSoldier013.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_010', 'getAttention': False})
        } {
            HyruleSoldier013.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier013.SetFacialExpression({'expression': 'surprise'})
        }


        fork {
            HyruleSoldier013.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest030_020', 'getAttention': False})
        } {
            HyruleSoldier013.PlayAnimationNoWait({'name': 'yes,think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier013.SetFacialExpression({'expression': 'normal'})
        }


        fork {
            HyruleSoldier013.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_030', 'getAttention': False})
        } {
            HyruleSoldier013.PlayAnimationNoWait({'name': 'no,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        HyruleSoldier013.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier028.SetInstanceVariableBool({'value': True, 'name': 'mc032_active'})

        fork {
            HyruleSoldier028.WarpToLinkedPointWithCompassPoint({'index': 0, 'direction': 2, 'offsetY': 0.0})
        } {
            HyruleSoldier028.Activate()
        }


        fork {
            HyruleSoldier028.MoveToLinkedPoint({'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'speed': 1, 'index': 1, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'offsetZ': 0.0})
        } {
            Timer.Wait({'time': 0.4000000059604645})
            Player.MoveToCompassPoint({'distance': 0.75, 'direction': 2, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        } {
            Player.AimActor({'actor': ActorIdentifier(name="HyruleSoldier028"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Audio.PlayBGM({'label': 'BGM_EV_COMMON2', 'ignoreSkip': False, 'volume': 1.0})
        }


        fork {
            HyruleSoldier013.AimActor({'actor': ActorIdentifier(name="HyruleSoldier028"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Player.AimActor({'actor': ActorIdentifier(name="HyruleSoldier028"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].AimActor({'actor': ActorIdentifier(name="HyruleSoldier028"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        fork {
            HyruleSoldier028.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest030_040', 'getAttention': False})
            HyruleSoldier028.SetTalkerName({'message': 'glossary/Character:SoldierB', 'keep': False})
            HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_050', 'getAttention': False})
        } {
            HyruleSoldier028.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier028.SetFacialExpression({'expression': 'normal'})
        } {
            HyruleSoldier028.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            HyruleSoldier028.SetInterestIkEnabled({'enable': False})
        }


        fork {
            HyruleSoldier013.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_060', 'getAttention': False})
        } {
            HyruleSoldier013.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier028.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 0.4000000059604645})
            HyruleSoldier028.AimActor({'actor': ActorIdentifier(name="HyruleSoldier013"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.4000000059604645})
            Player.SetInterestIkEnabled({'enable': True})
            Player.AimActor({'actor': ActorIdentifier(name="HyruleSoldier013"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.4000000059604645})
            Partner[companion].SetInterestIkEnabled({'enable': True})
            Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier013"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        fork {
            HyruleSoldier013.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier028.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_070', 'getAttention': False})
        } {
            Timer.Wait({'time': 0.4000000059604645})
            Player.AimActor({'actor': ActorIdentifier(name="HyruleSoldier028"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.4000000059604645})
            Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier028"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        fork {
            HyruleSoldier013.SetFacialExpression({'expression': 'surprise'})
        } {
            HyruleSoldier013.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_080', 'getAttention': False})
        } {
            HyruleSoldier013.PlayAnimationNoWait({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier028.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier013"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier013"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        fork {
            HyruleSoldier013.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier028.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_090', 'getAttention': False})
        } {
            Timer.Wait({'time': 0.4000000059604645})
            Player.AimActor({'actor': ActorIdentifier(name="HyruleSoldier028"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.4000000059604645})
            Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier028"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        fork {
            HyruleSoldier013.SetFacialExpression({'expression': 'normal'})
        } {
            HyruleSoldier013.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest030_100', 'getAttention': False})
        } {
            HyruleSoldier013.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier028.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Player.AimActor({'actor': ActorIdentifier(name="HyruleSoldier013"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier013"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        fork {
            HyruleSoldier013.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_110', 'getAttention': False})
        } {
            HyruleSoldier013.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            Timer.Wait({'time': 0.6000000238418579})
            HyruleSoldier013.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_120', 'getAttention': False})
        } {
            Player.AimActor({'actor': ActorIdentifier(name="HyruleSoldier028"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.4000000059604645})
            HyruleSoldier028.SetFacialExpression({'expression': 'surprise'})
            HyruleSoldier028.PlayAnimationNoWait({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 0.4000000059604645})
            Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier028"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        fork {
            HyruleSoldier028.PlayAnimationEx({'name': 'think', 'time': 2.0, 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier028.SetFacialExpression({'expression': 'normal'})
        }

        Event167:

        fork {
            HyruleSoldier028.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier028.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest030_130', 'getAttention': False})
        }

        HyruleSoldier028.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

        fork {
            HyruleSoldier028.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_Q1', 'getAttention': False})
        }

        switch Dialog.GetLastResult4({'resultOnSkip': 0}) {
          case 0:

            fork {
                HyruleSoldier028.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_Q1_A1_010', 'getAttention': False})
            }

            Event171:

            fork {
                HyruleSoldier028.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HyruleSoldier028.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest030_Q1_A1_020', 'getAttention': False})
            }

            goto Event167
          case 1:

            fork {
                HyruleSoldier028.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_Q1_A2_010', 'getAttention': False})
            }


            fork {
                HyruleSoldier013.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HyruleSoldier013.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_140', 'getAttention': False})
                HyruleSoldier013.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_150', 'getAttention': False})
            } {
                HyruleSoldier028.AimActor({'actor': ActorIdentifier(name="HyruleSoldier013"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.30000001192092896})
                Player.AimActor({'actor': ActorIdentifier(name="HyruleSoldier013"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.30000001192092896})
                Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier013"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }


            fork {
                HyruleSoldier013.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HyruleSoldier028.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_160', 'getAttention': False})
            } {
                Timer.Wait({'time': 0.4000000059604645})
                Player.AimActor({'actor': ActorIdentifier(name="HyruleSoldier028"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.4000000059604645})
                Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleSoldier028"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }


            fork {
                HyruleSoldier028.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_170', 'getAttention': False})
            }


            fork {
                HyruleSoldier028.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_180', 'getAttention': False})
            } {
                HyruleSoldier028.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }


            fork {
                HyruleSoldier028.PlayAnimationNoWait({'name': 'salute_st,salute_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_190', 'getAttention': False})
            }

            HyruleSoldier028.SkipAutoTurn()
            QuestSystem.SetProgress({'symbol': 'Mystery_Forest010:1627186546', 'isShowTelopInEvent': False, 'isFrontFade': False})
            Audio.StopAllBGM({'duration': 2.0})
            Audio.PlayZoneBGM({'stopbgm': False})
          case 2:

            fork {
                HyruleSoldier028.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HyruleSoldier028.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest030_Q1_A2_020', 'getAttention': False})
            }

            goto Event171
        }
      case 2:
        goto Event22
    }
}
