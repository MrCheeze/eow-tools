-------- EventFlow: HylianM012 --------

Actor: HylianM012
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SetFacialExpression', 'AimCompassPoint', 'Deactivate', 'PlayAnimation', 'PlayAnimationNoWait', 'SkipAutoTurn', 'AimPlayer', 'SetInterestIkEnabled', 'MoveToCompassPoint']
queries: ['GetLastMovementResult']
params: None

Actor: Player
entrypoint: None()
actions: ['AddItem', 'GenericItemGetSequence', 'AimActor']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['AimActor', 'MoveToBesideTargetActor']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

void talk() {
    HylianM012.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianM012Talk01_010', 'selfTalkAnim': False, 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianM012.Talk({'message': 'scenario/HylianGeneralTalk:HylianM012Talk01_020', 'getAttention': False})
    HylianM012.SetFacialExpression({'expression': 'smile'})
    HylianM012.Talk({'message': 'scenario/HylianGeneralTalk:HylianM012Talk01_030', 'getAttention': False})
}

void Sink_HyrulePlains010_010() {

    call EvResetCommon.AllReset()

    HylianM012.SetInterestIkEnabled({'enable': False})
    HylianM012.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaPlains:Sink_HyrulePlains010_010', 'playerTalkAnim': False, 'selfTalkAnim': True, 'aimFromPlayer': True, 'aimToPlayer': False, 'selfTalkAnimName': 'think02', 'facial': 'angry', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianM012.MoveToCompassPoint({'speed': 0, 'direction': 2, 'method': 2, 'tolerance': 1.5, 'timeOut': 12.0, 'offsetY': 1.5, 'distance': 21.0, 'customSpeed': 0.0, 'withoutTurn': False, 'offsetX': 0.0})
    switch HylianM012.GetLastMovementResult() {
      case 0:
        Event93:
        Timer.Wait({'time': 0.10000000149011612})
        HylianM012.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

        fork {
            Timer.Wait({'time': 2.0})
            HylianM012.AimCompassPoint({'withoutTurn': True, 'direction': 2, 'duration': 0.4000000059604645, 'immediateTurn': False})
        } {
            HylianM012.Talk({'message': 'quest/QuestAreaPlains:Sink_HyrulePlains010_032', 'getAttention': False})
        } {
            HylianM012.PlayAnimation({'name': 'no01,wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        call _Sink_HyrulePlains010_Yes()

      case [1, 2, 3]:
        HylianM012.MoveToCompassPoint({'speed': 0, 'direction': 2, 'method': 2, 'tolerance': 1.5, 'timeOut': 12.0, 'offsetY': 1.5, 'distance': 21.0, 'offsetX': -1.5, 'customSpeed': 0.0, 'withoutTurn': False})
        switch HylianM012.GetLastMovementResult() {
          case 0:
            goto Event93
          case [1, 2, 3]:
            HylianM012.MoveToCompassPoint({'speed': 0, 'direction': 2, 'method': 2, 'tolerance': 1.5, 'timeOut': 12.0, 'offsetY': 1.5, 'distance': 21.0, 'offsetX': -3.0, 'customSpeed': 0.0, 'withoutTurn': False})
            switch HylianM012.GetLastMovementResult() {
              case 0:
                goto Event93
              case [1, 2, 3]:
                HylianM012.MoveToCompassPoint({'speed': 0, 'direction': 2, 'method': 2, 'tolerance': 1.5, 'timeOut': 12.0, 'offsetY': 1.5, 'distance': 21.0, 'offsetX': -4.5, 'customSpeed': 0.0, 'withoutTurn': False})
                switch HylianM012.GetLastMovementResult() {
                  case 0:
                    goto Event93
                  case [1, 2, 3]:
                    HylianM012.MoveToCompassPoint({'speed': 0, 'direction': 2, 'method': 2, 'tolerance': 1.5, 'timeOut': 12.0, 'offsetY': 1.5, 'distance': 21.0, 'offsetX': -6.0, 'customSpeed': 0.0, 'withoutTurn': False})
                    switch HylianM012.GetLastMovementResult() {
                      case 0:
                        goto Event93
                      case [1, 2, 3]:
                        Timer.Wait({'time': 0.10000000149011612})
                        HylianM012.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

                        fork {
                            HylianM012.Talk({'message': 'quest/QuestAreaPlains:Sink_HyrulePlains010_020', 'getAttention': False})
                        } {
                            HylianM012.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
                        }


                        fork {
                            HylianM012.Talk({'message': 'quest/QuestAreaPlains:Sink_HyrulePlains010_030', 'getAttention': False})
                        } {
                            HylianM012.PlayAnimation({'name': 'sad_st01,sad_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                        } {
                            HylianM012.SetFacialExpression({'expression': 'sad'})
                        }

                        HylianM012.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
                        QuestSystem.SetProgress({'symbol': 'Sink_HyrulePlains010:4088133465', 'isShowTelopInEvent': False, 'isFrontFade': False})
                    }
                }
            }
        }
    }
}

void Sink_HyrulePlains010_015() {

    call EvResetCommon.AllReset()

    HylianM012.SetInterestIkEnabled({'enable': False})
    HylianM012.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaPlains:Sink_HyrulePlains020_010', 'selfTalkAnim': True, 'aimToPlayer': False, 'selfTalkAnimName': 'think02', 'facial': 'sad', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianM012.MoveToCompassPoint({'speed': 0, 'direction': 2, 'method': 2, 'tolerance': 1.5, 'timeOut': 12.0, 'offsetY': 1.5, 'distance': 21.0, 'customSpeed': 0.0, 'withoutTurn': False, 'offsetX': 0.0})
    switch HylianM012.GetLastMovementResult() {
      case 0:
        Event105:
        Timer.Wait({'time': 0.10000000149011612})

        fork {
            Timer.Wait({'time': 2.0})
            HylianM012.AimCompassPoint({'withoutTurn': True, 'direction': 2, 'duration': 0.4000000059604645, 'immediateTurn': False})
        } {
            HylianM012.Talk({'message': 'quest/QuestAreaPlains:Sink_HyrulePlains030_010', 'getAttention': False})
        } {
            HylianM012.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        call _Sink_HyrulePlains010_Yes()

      case [1, 2, 3]:
        HylianM012.MoveToCompassPoint({'speed': 0, 'direction': 2, 'method': 2, 'tolerance': 1.5, 'timeOut': 12.0, 'offsetY': 1.5, 'distance': 21.0, 'offsetX': -1.5, 'customSpeed': 0.0, 'withoutTurn': False})
        switch HylianM012.GetLastMovementResult() {
          case 0:
            goto Event105
          case [1, 2, 3]:
            HylianM012.MoveToCompassPoint({'speed': 0, 'direction': 2, 'method': 2, 'tolerance': 1.5, 'timeOut': 12.0, 'offsetY': 1.5, 'distance': 21.0, 'offsetX': -3.0, 'customSpeed': 0.0, 'withoutTurn': False})
            switch HylianM012.GetLastMovementResult() {
              case 0:
                goto Event105
              case [1, 2, 3]:
                HylianM012.MoveToCompassPoint({'speed': 0, 'direction': 2, 'method': 2, 'tolerance': 1.5, 'timeOut': 12.0, 'offsetY': 1.5, 'distance': 21.0, 'offsetX': -4.5, 'customSpeed': 0.0, 'withoutTurn': False})
                switch HylianM012.GetLastMovementResult() {
                  case 0:
                    goto Event105
                  case [1, 2, 3]:
                    HylianM012.MoveToCompassPoint({'speed': 0, 'direction': 2, 'method': 2, 'tolerance': 1.5, 'timeOut': 12.0, 'offsetY': 1.5, 'distance': 21.0, 'offsetX': -6.0, 'customSpeed': 0.0, 'withoutTurn': False})
                    switch HylianM012.GetLastMovementResult() {
                      case 0:
                        goto Event105
                      case [1, 2, 3]:
                        Timer.Wait({'time': 0.10000000149011612})

                        call _Sink_HyrulePlains010_No()

                    }
                }
            }
        }
    }
}

void _Sink_HyrulePlains010_No() {

    fork {
        HylianM012.SetFacialExpression({'expression': 'sad'})
    } {
        HylianM012.PlayAnimation({'name': 'sad_st01,sad_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM012.Talk({'message': 'quest/QuestAreaPlains:Sink_HyrulePlains020_020', 'getAttention': False})
    }


    fork {
        HylianM012.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM012.SetFacialExpression({'expression': 'normal'})
    }

}

void _Sink_HyrulePlains010_Yes() {
    HylianM012.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})

    fork {
        HylianM012.Talk({'message': 'quest/QuestAreaPlains:Sink_HyrulePlains030_020', 'getAttention': False})
    } {
        HylianM012.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HylianM012.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianM012.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HylianM012"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        HylianM012.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM012.Talk({'message': 'quest/QuestAreaPlains:Sink_HyrulePlains030_030', 'getAttention': False})
    } {
        HylianM012.SetFacialExpression({'expression': 'smile'})
    }

    HylianM012.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.AddItem({'autoEquip': False, 'index': -1, 'itemKey': 'RupeeRed', 'count': 1})
    Player.GenericItemGetSequence({'itemKey': 'RupeeRed', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})

    fork {
        Player.AimActor({'actor': ActorIdentifier(name="HylianM012"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner.MoveToBesideTargetActor({'offsetX': 1.0, 'speed': 1, 'actor': ActorIdentifier(name="Player"), 'offsetY': 1.0, 'offsetZ': 0.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner.AimActor({'actor': ActorIdentifier(name="HylianM012"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HylianM012"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    HylianM012.SkipAutoTurn()

    fork {
        HylianM012.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM012.Talk({'message': 'quest/QuestAreaPlains:Sink_HyrulePlains030_040', 'getAttention': False})
    } {
        HylianM012.SetFacialExpression({'expression': 'normal'})
    }

    HylianM012.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    EventFlags.SetFlag({'symbol': 'Sink_HyrulePlains010_Clear', 'value': True})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    QuestSystem.SetProgress({'symbol': 'Sink_HyrulePlains010:3371814772', 'isShowTelopInEvent': False, 'isFrontFade': False})
    HylianM012.Deactivate()
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
}

void Sink_HyrulePlains010_020() {
    HylianM012.SetInterestIkEnabled({'enable': False})
    HylianM012.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'scenario/HylianGeneralTalk:HylianM012Talk010_010', 'selfTalkAnimName': 'talk02', 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        HylianM012.Talk({'message': 'scenario/HylianGeneralTalk:HylianM012Talk010_020', 'getAttention': False})
    } {
        HylianM012.PlayAnimation({'name': 'wait05', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM012.SetFacialExpression({'expression': 'normal'})
    }

    HylianM012.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
}
