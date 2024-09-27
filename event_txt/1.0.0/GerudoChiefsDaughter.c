-------- EventFlow: GerudoChiefsDaughter --------

Actor: GerudoChiefsDaughter
entrypoint: None()
actions: ['Talk', 'GenericTalkSequenceWithDialog', 'PlayAnimationNoWait', 'PlayAnimation', 'MoveToCompassPoint', 'AimPlayer', 'AimActor', 'Deactivate', 'AimCompassPoint', 'LookAtTalker', 'SetTalkerName', 'SetFacialExpression', 'SetInterestIkEnabled', 'Destroy']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag', 'CheckMessgaeFlag']
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult4', 'GetLastResult']
params: None

Actor: GameControl
entrypoint: None()
actions: ['ResetSensorEventResetContainsActors']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress', 'AddProgress']
queries: ['CheckProgress']
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'Reset']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor', 'WarpToActorLinkedPoint']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['SetInterestIkEnabled']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['MoveToCompassPoint', 'AimActor', 'Talk', 'MoveToTargetActor', 'AimPlayer', 'LookAtTalker', 'WarpToActor', 'PlayAnimationNoWait', 'AimCompassPoint', 'MoveToTargetLinkedPoint', 'PlayAnimation']
queries: []
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['MorphEnd', 'MoveToCompassPoint', 'AimActor', 'WarpToActor', 'SetInterestIkEnabled', 'AimCompassPoint', 'RemoveDrink']
queries: ['CheckMorph', 'HasDrink', 'CheckOutfit']
params: None

Actor: Audio
entrypoint: None()
actions: ['MuteOnBGM']
queries: []
params: None

Actor: GerudoSoldier021
entrypoint: None()
actions: ['SetInterestIkEnabled', 'AimActor', 'PlayAnimation', 'AimCompassPoint', 'SkipAutoTurn']
queries: []
params: None

Actor: GerudoSoldier018
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'PlayAnimation', 'AimToInitialAngle', 'ResetAim', 'AimActor', 'Deactivate', 'Activate', 'SetInstanceVariableString']
queries: []
params: None

Actor: GerudoSoldier019
entrypoint: None()
actions: ['PlayAnimation', 'AimActor', 'PlayAnimationNoWait', 'Talk', 'AimPlayer', 'ResetAim', 'Deactivate', 'Activate', 'SetInstanceVariableString']
queries: []
params: None

Actor: GerudoSoldier017
entrypoint: None()
actions: ['Talk', 'PlayAnimation', 'AimToInitialAngle', 'ResetAim', 'AimActor', 'PlayAnimationNoWait', 'Deactivate', 'Activate', 'SetInstanceVariableString']
queries: []
params: None

Actor: GerudoSoldier023
entrypoint: None()
actions: ['Activate', 'SetInterestIkEnabled', 'MoveToTargetLinkedPoint']
queries: []
params: None

Actor: GerudoSoldier009
entrypoint: None()
actions: ['SetInterestIkEnabled', 'AimActor', 'PlayAnimation', 'AimCompassPoint', 'SkipAutoTurn']
queries: []
params: None

void talk010() {
    GerudoChiefsDaughter.SetTalkerName({'message': 'glossary/Character:Unknown', 'keep': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoChiefsDaughterTalk01_010', 'getAttention': False})
    GerudoChiefsDaughter.SetTalkerName({'message': 'glossary/Character:GerudoChiefsDaughter', 'keep': False})
}

void talk050() {
    GerudoChiefsDaughter.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGerudo:GerudoChiefsDaughterTalk03_050', 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoChiefsDaughterTalk04_010', 'getAttention': False})
}

void talk035() {
    GerudoChiefsDaughter.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': 'sad', 'selfTalkAnim': True, 'selfTalkAnimName': '', 'message': 'scenario/StoryAreaD:MiniBoundaryDaughter_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void JoinUpDaughter() {
    Fade.StartPreset({'preset': 'FadeOutNormalB'})

    call EvResetCommon.AllReset()


    fork {
        Player.WarpToActor({'offsetY': 0.0, 'distance': 0.0, 'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'offsetX': -2.5})
    } {
        GameControl.ResetSensorEventResetContainsActors({'eventReset': False, 'cemeteryRevive': False})
    }

    GerudoChiefsDaughter.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Partner[companion].WarpToActor({'distance': 1.0, 'offsetY': 1.7000000476837158, 'actor': ActorIdentifier(name="Player"), 'offsetX': 0.5})
    Player.AimActor({'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].AimActor({'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoChiefsDaughter.LookAtTalker({'keep': True, 'duration': 0.10000000149011612, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    GerudoChiefsDaughter.SetInterestIkEnabled({'enable': True})
    GerudoSoldier009.SetInterestIkEnabled({'enable': True})
    GerudoSoldier021.SetInterestIkEnabled({'enable': True})
    GerudoSoldier009.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoSoldier021.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    GerudoChiefsDaughter.AimActor({'withoutTurn': True, 'duration': 0.6000000238418579, 'actor': ActorIdentifier(name="GerudoSoldier021"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    GerudoChiefsDaughter.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    GerudoChiefsDaughter.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoSoldier009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:JoinUpDaughter_010', 'getAttention': True})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.20000000298023224})

    fork {
        GerudoSoldier009.PlayAnimation({'name': 'salute', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoSoldier009.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoSoldier021.PlayAnimation({'name': 'salute', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoSoldier021.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GerudoChiefsDaughter.SetInterestIkEnabled({'enable': False})
    GerudoChiefsDaughter.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoChiefsDaughter.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:JoinUpDaughter_020', 'getAttention': False})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoChiefsDaughter.MoveToCompassPoint({'direction': 1, 'distance': 5.0, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        GerudoChiefsDaughter.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.MoveToCompassPoint({'direction': 1, 'speed': 0, 'distance': 6.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Player.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].MoveToCompassPoint({'direction': 1, 'speed': 0, 'distance': 5.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GerudoSoldier009.AimCompassPoint({'direction': 3, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        GerudoSoldier021.AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="GerudoChiefsDaughter"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    GerudoChiefsDaughter.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        Timer.Wait({'time': 0.800000011920929})
        Player.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.75})
        Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:JoinUpDaughter_030', 'getAttention': False})
    }

    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:JoinUpDaughter_040', 'getAttention': False})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoChiefsDaughter.SetInterestIkEnabled({'enable': True})
        GerudoChiefsDaughter.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Partner.SetInterestIkEnabled({'enable': True})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:JoinUpDaughter_040_02', 'getAttention': False})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.5})
    GerudoChiefsDaughter.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'happy,talk', 'blendFrame': 2, 'layer': 0, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:JoinUpDaughter_050', 'getAttention': False})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Event19:
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:JoinUpDaughter_Q1', 'getAttention': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:JoinUpDaughter_Q1_A1_010', 'getAttention': False})
        GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        goto Event19
      case 1:
        GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:JoinUpDaughter_Q1_A2_010', 'getAttention': False})
        GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        goto Event19
      case 2:
        GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:JoinUpDaughter_Q1_A3_010', 'getAttention': False})
        GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        goto Event19
      case 3:
        GerudoChiefsDaughter.PlayAnimation({'name': 'yes,happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:JoinUpDaughter_Q1_A4_010', 'getAttention': False})
        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})

        fork {

            fork {
                GerudoSoldier009.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
                GerudoSoldier009.SkipAutoTurn()
            } {
                GerudoSoldier021.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
                GerudoSoldier021.SkipAutoTurn()
            }

        } {
            if !EventFlags.CheckFlag({'symbol': 'EvD_JoinUpTona'}) {
                QuestSystem.SetProgress({'symbol': 'Desert:4179724650', 'isShowTelopInEvent': False, 'isFrontFade': False})
                EventFlags.SetFlag({'value': True, 'symbol': 'EvD_JoinUpTona'})
                EventFlags.SetFlag({'value': True, 'symbol': 'EvD_DesertCrack_B'})
                EventFlags.SetFlag({'value': True, 'symbol': 'LanmolaLv2Activate'})
            }
        }

    }
}

void DesertProblem_B() {
    if QuestSystem.CheckProgress({'symbol': 'Desert_Crack_C:4215343484'}) in [4294967295, 1] {

        call DaughterInvestigate()

    }
}

void DaughterInvestigate() {
    if !Player.CheckMorph({'morphKind': 0}) {
        Player.MorphEnd()
    }
    GerudoChiefsDaughter.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'aimToPlayer': True, 'message': 'scenario/StoryAreaD:DaughterInvestigate_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        Event31:
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:JoinUpDaughter_Q1', 'getAttention': False})
        switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
          case 0:
            GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            switch QuestSystem.CheckProgress({'symbol': 'Desert_Crack_A:1015199178'}) {
              case 4294967295:
                GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:JoinUpDaughter_Q1_A1_010', 'getAttention': False})
                Event137:
                GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

                call Q1()

              case 0:
                GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:JoinUpDaughter_Q1_A1_010_Comop', 'getAttention': False})
                GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:JoinUpDaughter_CompCommmon_010', 'getAttention': False})
                goto Event137
            }
          case 1:
            GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            switch QuestSystem.CheckProgress({'symbol': 'Desert_Crack_B:2065878810'}) {
              case 4294967295:
                GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:JoinUpDaughter_Q1_A2_010', 'getAttention': False})
                GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                Event189:

                call Q1()

              case 0:
                GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:JoinUpDaughter_Q1_A2_010_Comop', 'getAttention': False})
                GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:JoinUpDaughter_CompCommmon_010', 'getAttention': False})
                goto Event189
            }
          case 2:
            GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            switch QuestSystem.CheckProgress({'symbol': 'Desert_Crack_C:1178789546'}) {
              case 4294967295:
                GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:JoinUpDaughter_Q1_A3_010', 'getAttention': False})
                Event139:
                GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

                call Q1()

              case 0:
                GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:JoinUpDaughter_Q1_A3_010_Comop', 'getAttention': False})
                GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:JoinUpDaughter_CompCommmon_010', 'getAttention': False})
                goto Event139
            }
          case 3:
            Event141:
            GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
            GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:JoinUpDaughter_Q1_A4_010', 'getAttention': False})
        }
    } else {
        goto Event141
    }
}

void DesertProblem_C_2() {
    if !Player.HasDrink({'symbol': 'Smoothie13'})
    && !Player.HasDrink({'symbol': 'Smoothie18'}) {
        GerudoChiefsDaughter.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'keepPersonalSpace': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'message': 'scenario/StoryAreaD:DesertProblem_C_110', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else {

        fork {
            GerudoChiefsDaughter.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'keepPersonalSpace': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'facial': 'smile', 'message': 'scenario/StoryAreaD:DesertProblem_C2_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})

            fork {
                GerudoSoldier017.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                GerudoSoldier018.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                GerudoSoldier019.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }

        }

        GerudoChiefsDaughter.SetFacialExpression({'expression': 'normal'})
        GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoChiefsDaughter.AimActor({'actor': ActorIdentifier(name="GerudoSoldier017"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        GerudoChiefsDaughter.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:DesertProblem_C2_020', 'getAttention': False})
        GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.5})
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
        if !Player.HasDrink({'symbol': 'Smoothie13'}) {
            if Player.HasDrink({'symbol': 'Smoothie18'}) {
                Player.RemoveDrink({'symbol': 'Smoothie18'})
                Event611:
                EventVariables.SetVariable({'symbol': 'Desert_Crack_C:276214399'})

                fork {
                    GerudoSoldier017.Deactivate()
                    GerudoSoldier017.Activate()
                } {
                    GerudoSoldier018.Deactivate()
                    GerudoSoldier018.Activate()
                } {
                    GerudoSoldier019.Deactivate()
                    GerudoSoldier019.Activate()
                }


                call EvResetCommon.AllReset()


                fork {
                    Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 1.0, 'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="GerudoSoldier019"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
                } {
                    Zelda.WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'offsetY': 0.0})
                    Zelda.AimActor({'actor': ActorIdentifier(name="GerudoSoldier018"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    Partner[companion].WarpToActor({'offsetY': 1.0, 'actor': ActorIdentifier(name="Player"), 'distance': 1.0, 'offsetX': -2.0})
                    Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoSoldier018"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                } {
                    GerudoSoldier017.PlayAnimation({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    GerudoSoldier017.ResetAim()
                    GerudoSoldier017.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
                } {
                    GerudoSoldier018.PlayAnimation({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    GerudoSoldier018.ResetAim()
                    GerudoSoldier018.AimToInitialAngle({'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
                } {
                    GerudoSoldier019.PlayAnimation({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    GerudoSoldier019.ResetAim()
                    GerudoSoldier019.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'offsetX': 1.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                } {
                    GerudoChiefsDaughter.AimActor({'actor': ActorIdentifier(name="GerudoSoldier018"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                }

                GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                Fade.StartPreset({'preset': 'FadeInNormal'})

                fork {
                    GerudoSoldier018.PlayAnimationNoWait({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    GerudoSoldier018.Talk({'message': 'scenario/StoryAreaD:DesertProblem_C2_030', 'getAttention': False})
                    Timer.Wait({'time': 0.4000000059604645})
                    GerudoSoldier017.Talk({'message': 'scenario/StoryAreaD:DesertProblem_C2_040', 'getAttention': False})
                    GerudoSoldier019.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    Timer.Wait({'time': 0.4000000059604645})
                    GerudoSoldier019.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    GerudoSoldier019.Talk({'message': 'scenario/StoryAreaD:DesertProblem_C2_055', 'getAttention': False})
                    GerudoSoldier019.PlayAnimation({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    Timer.Wait({'time': 0.4000000059604645})
                    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:DesertProblem_C2_056', 'getAttention': False})
                    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                } {
                    Partner[companion].MoveToTargetLinkedPoint({'index': 0, 'speed': 1, 'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
                    Partner[companion].PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    Timer.Wait({'time': 3.0})
                    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    Partner[companion].MoveToCompassPoint({'direction': 1, 'speed': 0, 'distance': 5.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
                }

                QuestSystem.SetProgress({'symbol': 'Desert_Crack_C:1178789546', 'isShowTelopInEvent': False, 'isFrontFade': False})
                EventFlags.SetFlag({'symbol': 'EvD_DesertCrack_C2', 'value': True})
                switch QuestSystem.CheckProgress({'symbol': 'Desert_Crack_A:1015199178'}) {
                  case 4294967295:
                    Event108:
                    GerudoChiefsDaughter.SetInterestIkEnabled({'enable': False})
                    GerudoChiefsDaughter.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    Zelda.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:DesertProblem_C2_060', 'getAttention': False})
                    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    Fade.StartPreset({'preset': 'FadeOutNormalB'})
                    GerudoChiefsDaughter.Deactivate()
                    GerudoSoldier017.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    GerudoSoldier018.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    GerudoSoldier017.AimActor({'actor': ActorIdentifier(name="GerudoSoldier018"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    GerudoSoldier018.AimActor({'actor': ActorIdentifier(name="GerudoSoldier017"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    GerudoSoldier019.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    Fade.StartPreset({'preset': 'FadeInNormal'})
                    Partner[companion].MoveToTargetActor({'speed': 1, 'offsetY': 1.0, 'offsetX': -1.5, 'actor': ActorIdentifier(name="Player"), 'distance': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})

                    fork {
                        Zelda.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    } {
                        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    }


                    fork {
                        GerudoSoldier017.SetInstanceVariableString({'value': 'wait_spear01', 'name': 'idleAnim'})
                    } {
                        GerudoSoldier018.SetInstanceVariableString({'value': 'wait_spear01', 'name': 'idleAnim'})
                    } {
                        GerudoSoldier019.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait_spear01'})
                    }


                    fork {
                        Partner[companion].LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
                        Partner[companion].Talk({'message': 'scenario/StoryAreaD:DesertProblem_C2_070', 'getAttention': False})
                    } {
                        Timer.Wait({'time': 0.5})
                        GerudoSoldier017.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                        GerudoSoldier018.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    }

                    QuestSystem.AddProgress({'questKey': 'Desert', 'value': 1, 'isShowTelopInEvent': False, 'isFrontFade': False, 'isForceShowTelop': False})
                  case 0:
                    switch QuestSystem.CheckProgress({'symbol': 'Desert_Crack_B:2065878810'}) {
                      case 4294967295:
                        goto Event108
                      case 0:
                        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                        Partner[companion].MoveToTargetActor({'offsetY': 1.0, 'offsetX': -1.5, 'speed': 0, 'actor': ActorIdentifier(name="Player"), 'distance': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})

                        fork {
                            Zelda.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                        } {
                            Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                        }

                        Partner[companion].Talk({'message': 'scenario/StoryAreaD:DesertProblem_C2_070', 'getAttention': False})

                        fork {
                            GerudoSoldier017.PlayAnimation({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                        } {
                            GerudoSoldier018.PlayAnimation({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                        } {
                            GerudoSoldier019.PlayAnimation({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                        } {

                            fork {
                                GerudoChiefsDaughter.AimPlayer({'duration': 0.10000000149011612, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                            } {
                                Player.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.10000000149011612, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                            } {
                                Partner[companion].AimActor({'duration': 0.10000000149011612, 'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                            }

                        }


                        fork {
                            GerudoSoldier017.SetInstanceVariableString({'value': 'wait_spear01', 'name': 'idleAnim'})
                        } {
                            GerudoSoldier018.SetInstanceVariableString({'value': 'wait_spear01', 'name': 'idleAnim'})
                        } {
                            GerudoSoldier019.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait_spear01'})
                        }

                        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                        Timer.Wait({'time': 0.5})
                        Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 1.0, 'duration': 0.10000000149011612, 'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="GerudoChiefsDaughter"), 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
                        GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
                        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:DesertProblem_All_010', 'getAttention': False})
                        QuestSystem.SetProgress({'symbol': 'Desert:1907799803', 'isShowTelopInEvent': False, 'isFrontFade': False})
                        EventFlags.SetFlag({'value': True, 'symbol': 'EvD_ZeldasMerits'})
                        GerudoSoldier023.Activate()
                        GerudoChiefsDaughter.SetInterestIkEnabled({'enable': False})

                        call GeneralSequence.ZeldaTalkMotion()

                        GerudoChiefsDaughter.SetFacialExpression({'expression': 'sad'})
                        GerudoChiefsDaughter.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
                        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:DesertProblem_All_020', 'getAttention': False})
                        Audio.MuteOnBGM({'duration': 2.0})
                        GerudoChiefsDaughter.SetFacialExpression({'expression': 'normal'})
                        GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                        GerudoSoldier023.Activate()
                        GerudoSoldier023.SetInterestIkEnabled({'enable': False})
                        GerudoSoldier023.MoveToTargetLinkedPoint({'index': 2, 'speed': 1, 'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

                        call FieldDesert._DesertProblem_All()

                    }
                }
            }
        } else {
            Player.RemoveDrink({'symbol': 'Smoothie13'})
            goto Event611
        }
    }
}

void Special_Desert010_010() {

    call EvResetCommon.AllReset()

    if !EventFlags.CheckMessgaeFlag({'message': 'quest/QuestAreaD:Special_Desert010_Q1_A2_010'}) {
        GerudoChiefsDaughter.SetTalkerName({'message': 'glossary/Character:GerudoChiefsDaughter', 'keep': False})

        fork {
            GerudoChiefsDaughter.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'facial': 'sad', 'selfTalkAnimName': '', 'aimToPlayer': True, 'selfTalkAnim': False, 'message': 'quest/QuestAreaD:Special_Desert010_010', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            GerudoChiefsDaughter.SetFacialExpression({'expression': 'smile'})
        }

        GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            GerudoChiefsDaughter.Talk({'message': 'quest/QuestAreaD:Special_Desert010_020', 'getAttention': False})
        } {
            GerudoChiefsDaughter.SetFacialExpression({'expression': 'normal'})
        }

        GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoChiefsDaughter.SetInterestIkEnabled({'enable': False})
        GerudoChiefsDaughter.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

        fork {
            GerudoChiefsDaughter.Talk({'message': 'quest/QuestAreaD:Special_Desert010_030', 'getAttention': False})
        } {
            GerudoChiefsDaughter.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            GerudoChiefsDaughter.Talk({'message': 'quest/QuestAreaD:Special_Desert010_040', 'getAttention': False})
        } {
            GerudoChiefsDaughter.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GerudoChiefsDaughter.SetFacialExpression({'expression': 'sleep'})
        }


        fork {
            GerudoChiefsDaughter.Talk({'message': 'quest/QuestAreaD:Special_Desert010_050', 'getAttention': False})
        } {
            GerudoChiefsDaughter.SetFacialExpression({'expression': 'normal'})
        }

        GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            GerudoChiefsDaughter.Talk({'message': 'quest/QuestAreaD:Special_Desert010_060', 'getAttention': False})
        } {
            GerudoChiefsDaughter.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GerudoChiefsDaughter.SetFacialExpression({'expression': 'smile'})
        }

        GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            GerudoChiefsDaughter.Talk({'message': 'quest/QuestAreaD:Special_Desert010_070', 'getAttention': False})
        } {
            GerudoChiefsDaughter.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GerudoChiefsDaughter.SetFacialExpression({'expression': 'normal'})
        }


        fork {
            GerudoChiefsDaughter.Talk({'message': 'quest/QuestAreaD:Special_Desert010_Q1', 'getAttention': False})
        } {
            GerudoChiefsDaughter.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Event549:
        if !Dialog.GetLastResult({'resultOnSkip': 1}) {
            GameControl.ResetSensorEventResetContainsActors({'eventReset': False, 'cemeteryRevive': False})

            fork {
                GerudoChiefsDaughter.Talk({'message': 'quest/QuestAreaD:Special_Desert010_Q1_A1_010', 'getAttention': False})
            } {
                GerudoChiefsDaughter.SetFacialExpression({'expression': 'smile'})
            } {
                GerudoChiefsDaughter.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }


            fork {
                GerudoChiefsDaughter.Talk({'message': 'quest/QuestAreaD:Special_Desert010_Q1_A1_020', 'getAttention': False})
            } {
                GerudoChiefsDaughter.SetFacialExpression({'expression': 'normal'})
            }

            QuestSystem.SetProgress({'symbol': 'Special_Desert010:467236396', 'isShowTelopInEvent': False, 'isFrontFade': False})
        } else {

            fork {
                GerudoChiefsDaughter.Talk({'message': 'quest/QuestAreaD:Special_Desert010_Q1_A2_010', 'getAttention': False})
            } {
                GerudoChiefsDaughter.SetFacialExpression({'expression': 'normal'})
            }

        }
    } else {
        GerudoChiefsDaughter.SetTalkerName({'message': 'glossary/Character:GerudoChiefsDaughter', 'keep': False})

        fork {
            GerudoChiefsDaughter.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'facial': 'sad', 'selfTalkAnimName': '', 'aimToPlayer': True, 'selfTalkAnim': False, 'message': 'quest/QuestAreaD:Special_Desert010_120', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            GerudoChiefsDaughter.SetFacialExpression({'expression': 'smile'})
        }


        fork {
            GerudoChiefsDaughter.Talk({'message': 'quest/QuestAreaD:Special_Desert010_130', 'getAttention': False})
        } {
            GerudoChiefsDaughter.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GerudoChiefsDaughter.SetFacialExpression({'expression': 'normal'})
        }


        fork {
            GerudoChiefsDaughter.Talk({'message': 'quest/QuestAreaD:Special_Desert010_Q2', 'getAttention': False})
        } {
            GerudoChiefsDaughter.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        goto Event549
    }
}

void Special_Desert010_015() {

    call EvResetCommon.AllReset()

    GerudoChiefsDaughter.SetTalkerName({'message': 'glossary/Character:GerudoChiefsDaughter', 'keep': False})
    GerudoChiefsDaughter.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaD:Special_Desert010_100', 'selfTalkAnim': True, 'selfTalkAnimName': 'happy', 'facial': 'angry', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        GerudoChiefsDaughter.Talk({'message': 'quest/QuestAreaD:Special_Desert010_110', 'getAttention': False})
    } {
        GerudoChiefsDaughter.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void Special_Desert010_end() {

    call EvResetCommon.AllReset()

    GerudoChiefsDaughter.SetTalkerName({'message': 'glossary/Character:GerudoChiefsDaughter', 'keep': False})

    fork {
        GerudoChiefsDaughter.PlayAnimation({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoChiefsDaughter.SetFacialExpression({'expression': 'sleep'})
    }

    GerudoChiefsDaughter.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    GerudoChiefsDaughter.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'facial': 'sad', 'selfTalkAnimName': '', 'aimToPlayer': True, 'message': 'quest/QuestAreaD:Special_Desert040_010', 'selfTalkAnim': False, 'cameraLookAt': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        GerudoChiefsDaughter.Talk({'message': 'quest/QuestAreaD:Special_Desert040_020', 'getAttention': False})
    } {
        GerudoChiefsDaughter.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoChiefsDaughter.SetFacialExpression({'expression': 'normal'})
    }

    GerudoChiefsDaughter.SetInterestIkEnabled({'enable': False})

    fork {
        GerudoChiefsDaughter.Talk({'message': 'quest/QuestAreaD:Special_Desert040_030', 'getAttention': False})
    } {
        GerudoChiefsDaughter.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GerudoChiefsDaughter.Talk({'message': 'quest/QuestAreaD:Special_Desert040_040', 'getAttention': False})
    GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GerudoChiefsDaughter.Talk({'message': 'quest/QuestAreaD:Special_Desert040_050', 'getAttention': False})
    } {
        GerudoChiefsDaughter.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoChiefsDaughter.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        GerudoChiefsDaughter.Talk({'message': 'quest/QuestAreaD:Special_Desert040_060', 'getAttention': False})
    } {
        GerudoChiefsDaughter.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        GerudoChiefsDaughter.Talk({'message': 'quest/QuestAreaD:Special_Desert040_070', 'getAttention': False})
    } {
        GerudoChiefsDaughter.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoChiefsDaughter.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        GerudoChiefsDaughter.Talk({'message': 'quest/QuestAreaD:Special_Desert040_080', 'getAttention': False})
    } {
        GerudoChiefsDaughter.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GerudoChiefsDaughter.SetFacialExpression({'expression': 'smile'})
    }

    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    GerudoChiefsDaughter.Destroy()
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    QuestSystem.SetProgress({'symbol': 'Special_Desert010:546000385', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void talk032() {
    GerudoChiefsDaughter.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': 'sad', 'selfTalkAnim': True, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkGerudo:GerudoChiefsDaughterTalk032_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Q1() {
    goto Event31
}

void talk040() {
    GerudoChiefsDaughter.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkGerudo:GerudoChiefsDaughterTalk035_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoChiefsDaughterTalk035_020', 'getAttention': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoChiefsDaughterTalk035_030', 'getAttention': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoChiefsDaughterTalk035_040', 'getAttention': False})
}

void GerudoChiefsDaughterTalk040() {
    GerudoChiefsDaughter.SetTalkerName({'message': 'glossary/Character:GerudoChiefsDaughter', 'keep': False})
    GerudoChiefsDaughter.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': 'happy', 'message': 'scenario/GeneralTalkGerudo:GerudoChiefsDaughterTalk040_010', 'facial': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if Player.CheckOutfit({'outfit': 'Nightclothes'}) {

        fork {
            GerudoChiefsDaughter.Talk({'message': 'scenario/GeneralTalkGerudo:ZoraSeaChiefTalkPajama_010', 'getAttention': False})
        } {
            GerudoChiefsDaughter.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GerudoChiefsDaughter.SetFacialExpression({'expression': 'smile'})
        }

    } else {

        fork {
            GerudoChiefsDaughter.Talk({'message': 'scenario/GeneralTalkGerudo:GerudoChiefsDaughterTalk040_020', 'getAttention': False})
        } {
            GerudoChiefsDaughter.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GerudoChiefsDaughter.SetFacialExpression({'expression': 'normal'})
        }

    }
}
