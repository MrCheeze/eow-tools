-------- EventFlow: HylianM034 --------

Actor: HylianM034
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimation', 'SetFacialExpression', 'SetInterestIkEnabled', 'AimActor', 'AimCompassPoint']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestAutoSave', 'ReportMinigamePlay']
queries: []
params: None

Actor: BattleChallenge
entrypoint: None()
actions: ['StartBattleChallenge', 'FinishBattleChallenge', 'GetHighlyRatedReward', 'RaiseRank', 'GetSecondHighlyRatedReward', 'AppryResultTimeToMessage', 'UpdateNewChallengeFlag', 'GetReward', 'SetNextRankParameter']
queries: ['CanRaiseHigherRank', 'CanGetHighlyRatedReward', 'IsEqualCurrentRank', 'CanGetReward', 'CanGetSecondHighlyRatedReward', 'GetFailureKind', 'IsUnderResultTime', 'IsExistNewChallenge', 'IsExistRewardItem', 'CanNotRankupAllClear']
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult4', 'GetLastResult']
params: None

Actor: BattleChallengeUI
entrypoint: None()
actions: ['Show']
queries: ['GetResult']
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'ResetAim', 'MoveToTargetLinkedPoint', 'SetInterestIkEnabled', 'ResetVelocity', 'MorphTo']
queries: ['HasItem', 'CheckMorph']
params: None

Actor: Zelda
entrypoint: None()
actions: ['GenericItemGetSequence', 'AimCompassPoint', 'SetFacialExpression', 'ResetFacialExpression', 'PlayAnimation', 'AimActor']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetLevelFlag', 'SetFlag']
queries: ['CheckMessgaeFlag', 'CheckFlag', 'CheckLevelFlag']
params: None

Actor: FlowControl
entrypoint: None()
actions: []
queries: ['Branch']
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE', 'StopAllBGM', 'StopRegionBgm', 'PlayZoneBGM']
queries: []
params: None

Actor: HylianM035
entrypoint: None()
actions: ['PlayAnimation', 'ResetFacialExpression', 'SetInterestIkEnabled', 'SetFacialExpression']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor', 'EnableAutoMovement', 'AimCompassPoint', 'SetInterestIkEnabled', 'MoveToTargetLinkedPoint']
queries: []
params: None

void talk010() {
    Player.ResetVelocity()
    Player.SetInterestIkEnabled({'enable': False})
    Partner[companion].SetInterestIkEnabled({'enable': False})
    HylianM034.SetInterestIkEnabled({'enable': False})
    if !EventFlags.CheckFlag({'symbol': 'JoinDojo'}) {
        BattleChallenge.UpdateNewChallengeFlag()
        if !EventFlags.CheckMessgaeFlag({'message': 'minigame/BattleChallenge:Unlock_BattleChallrenge_010_010'}) {

            call ExplainFirst_BattleChallrenge()


            call _talkTemp({'facial': 'normal', 'message': 'minigame/BattleChallenge:Unlock_BattleChallrenge_010_130', 'anime': 'ask'})

            Event12:
            EventFlags.SetLevelFlag({'index': 0, 'value': True})
            switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
              case 0:
                Event97:

                call _talkTemp({'message': 'minigame/BattleChallenge:AfterExplain_BattleChallrenge_020', 'anime': 'yes01,happy02', 'facial': 'smile'})

                EventFlags.SetFlag({'symbol': 'JoinDojo', 'value': True})

                call Show()

              case 1:

                call Explain_BattleChallrenge()

                if !Dialog.GetLastResult({'resultOnSkip': 1}) {
                    goto Event97
                } else {
                    Event84:

                    call _CancelTraining()

                }
              case 2:
                goto Event84
            }
        } else {

            call _talkTempFirst({'facial': 'normal', 'message': 'minigame/BattleChallenge:Unlock_BattleChallrenge_010_130', 'anime': 'ask'})

            goto Event12
        }
    } else
    if !EventFlags.CheckFlag({'symbol': 'GetMachineUnlock00'}) {

        call _CheckChallenge({'greeting': 'minigame/BattleChallenge:Introduction_BattleChallrenge_010', 'selection': 'minigame/BattleChallenge:Before_BattleChallrenge_010', 'selection2': 'minigame/BattleChallenge:Before_BattleChallrenge_010_02'})

        Event116:
        switch Dialog.GetLastResult4({'resultOnSkip': 1}) {
          case 0:
            Event103:

            call _talkTemp({'message': 'minigame/BattleChallenge:AfterExplain_BattleChallrenge_030', 'anime': 'yes_lp01', 'facial': 'smile'})


            call Show()

          case 1:

            call Explain_BattleChallrenge()

            if !Dialog.GetLastResult({'resultOnSkip': 1}) {
                goto Event103
            } else {
                Event281:

                call _CancelTraining()

            }
          case 2:
            goto Event281
        }
    } else
    if !Player.HasItem({'itemKey': 'Ornament31', 'count': 1, 'index': -1}) {

        call _CheckChallenge({'greeting': 'minigame/BattleChallenge:Introduction_BattleChallrenge_020', 'selection': 'minigame/BattleChallenge:Before_BattleChallrenge_020', 'selection2': 'minigame/BattleChallenge:Before_BattleChallrenge_020_02'})

    } else {

        call _CheckChallenge({'greeting': 'minigame/BattleChallenge:Introduction_BattleChallrenge_020', 'selection': 'minigame/BattleChallenge:Before_BattleChallrenge_030', 'selection2': 'minigame/BattleChallenge:Before_BattleChallrenge_030'})

    }
    goto Event116
}

void Failed() {

    call _ResetSwordMode()

    Audio.StopRegionBgm({'fadeSec': 0.0})
    BattleChallenge.FinishBattleChallenge({'success': False})

    call AreaStartCommon._InCommon({'fadePreset': 'CutOutB'})


    fork {
        Zelda.SetFacialExpression({'expression': 'sleep'})
    } {
        Zelda.AimCompassPoint({'direction': 0, 'duration': 0.10000000149011612, 'withoutTurn': False, 'immediateTurn': False})
    }

    Camera.LookAt2ActorsCenterAsTalker({'chaseRatio': 1.0, 'actor1': ActorIdentifier(name="HylianM034"), 'actor2': ActorIdentifier(name="Player"), 'duration': 0.0, 'weight1': 1.0, 'weight2': 1.0, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    EventFlags.SetLevelFlag({'index': 0, 'value': True})
    Fade.StartPreset({'preset': 'FadeInSlow'})

    call _talkTemp({'facial': 'normal', 'message': 'minigame/BattleChallenge:BattleChallrenge_ResultCommon_010', 'anime': 'talk_once,wait01'})


    fork {
        Timer.Wait({'time': 1.7999999523162842})
    } {
        Zelda.PlayAnimation({'name': 'search', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Zelda.ResetFacialExpression()
    } {
        Audio.PlayZoneBGM({'stopbgm': False})
    }

    Zelda.PlayAnimation({'name': 'find,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    switch BattleChallenge.GetFailureKind() {
      case [1, 2, 4]:

        call _talkTempFirst({'anime': 'talk01', 'facial': 'normal', 'message': 'minigame/BattleChallenge:BattleChallrenge_Failed_010'})

      case 3:

        call _talkTempFirst({'anime': 'talk01', 'facial': 'normal', 'message': 'minigame/BattleChallenge:BattleChallrenge_FailedTimeOut_010'})

    }
}

void Success() {

    call _ResetSwordMode()

    Audio.StopRegionBgm({'fadeSec': 0.0})
    HylianM034.SetInterestIkEnabled({'enable': False})
    HylianM035.SetInterestIkEnabled({'enable': False})
    BattleChallenge.FinishBattleChallenge({'success': True})
    if !BattleChallenge.IsEqualCurrentRank({'rank': 2}) {
        Event6:

        call AreaStartCommon._InCommon({'fadePreset': 'CutOutB'})


        fork {
            Zelda.SetFacialExpression({'expression': 'sleep'})
        } {
            Zelda.AimCompassPoint({'direction': 0, 'duration': 0.10000000149011612, 'withoutTurn': False, 'immediateTurn': False})
        }

        Camera.LookAt2ActorsCenterAsTalker({'duration': 0.0, 'actor1': ActorIdentifier(name="HylianM034"), 'actor2': ActorIdentifier(name="Player"), 'chaseRatio': 1.0, 'weight1': 1.0, 'weight2': 1.0, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        EventFlags.SetLevelFlag({'index': 0, 'value': True})
        if !BattleChallenge.IsUnderResultTime({'timeSec': 60.0}) {
            BattleChallenge.AppryResultTimeToMessage({'useMinutes': True})
        } else {
            BattleChallenge.AppryResultTimeToMessage({'useMinutes': False})
        }
        Fade.StartPreset({'preset': 'FadeInSlow'})

        call _talkTemp({'facial': 'normal', 'message': 'minigame/BattleChallenge:BattleChallrenge_ResultCommon_010', 'anime': 'talk_once,wait01'})


        fork {
            Timer.Wait({'time': 0.5})
        } {
            Zelda.ResetFacialExpression()
        } {
            Zelda.PlayAnimation({'name': 'find,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Audio.PlayZoneBGM({'stopbgm': False})
        }

        GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
        switch BattleChallenge.CanGetReward() {
          case [0, 2]:
            switch BattleChallenge.CanGetHighlyRatedReward() {
              case 0:

                call _withDeshi({'isFirst': True, 'anime': 'talk02', 'facial': 'normal', 'danime': 'yes_lp01', 'dfacial': 'smile', 'fmessage': 'minigame/BattleChallenge:BattleChallrenge_ResultFast_042', 'smessage': 'minigame/BattleChallenge:BattleChallrenge_ResultFast_040'})

              case 1:

                call _withDeshi({'anime': 'happy02', 'facial': 'smile', 'isFirst': True, 'dfacial': 'surprise', 'danime': 'surprised_st01,surprised_lp01', 'fmessage': 'minigame/BattleChallenge:BattleChallrenge_GiveRewardGreenTunic_007', 'smessage': 'minigame/BattleChallenge:BattleChallrenge_GiveRewardGreenTunic_005'})


                call _talkTemp({'message': 'minigame/BattleChallenge:BattleChallrenge_ResultFast_015', 'facial': 'smile', 'anime': 'talk02'})


                call _wait()

                BattleChallenge.GetHighlyRatedReward()

                call _CheckGrade()

              case 2:
                if BattleChallenge.CanGetSecondHighlyRatedReward() {

                    call _withDeshi({'anime': 'happy02', 'facial': 'smile', 'isFirst': True, 'dfacial': 'surprise', 'danime': 'surprised_st01,surprised_lp01', 'fmessage': 'minigame/BattleChallenge:BattleChallrenge_GiveRewardGreenTunic_007', 'smessage': 'minigame/BattleChallenge:BattleChallrenge_GiveRewardGreenTunic_005'})


                    call _talkTemp({'message': 'minigame/BattleChallenge:BattleChallrenge_ResultFast_015', 'facial': 'smile', 'anime': 'talk02'})


                    call _wait()

                    BattleChallenge.GetSecondHighlyRatedReward()

                    call _CheckGrade()

                }
            }
          case 1:

            call _withDeshi({'isFirst': True, 'anime': 'talk02', 'facial': 'normal', 'danime': 'yes_lp01', 'dfacial': 'smile', 'smessage': 'minigame/BattleChallenge:BattleChallrenge_ResultFast_010', 'fmessage': 'minigame/BattleChallenge:BattleChallrenge_ResultFast_012'})

            if !BattleChallenge.IsExistRewardItem({'itemKey': 'ZeldaClothes05'}) {

                call _talkTemp({'message': 'minigame/BattleChallenge:BattleChallrenge_ResultFast_015', 'facial': 'smile', 'anime': 'talk02'})


                call _wait()

                BattleChallenge.GetReward()
                switch BattleChallenge.CanGetHighlyRatedReward() {
                  case 0:

                    call _CheckGrade()

                  case 1:

                    call _withDeshiN({'isFirst': True, 'anime': 'yes_lp01', 'facial': 'smile', 'danime': 'surprised_st01,surprised_lp01', 'dfacial': 'surprise', 'message': 'minigame/BattleChallenge:BattleChallrenge_ResultFast_020'})


                    call _wait()

                    BattleChallenge.GetHighlyRatedReward()

                    call _CheckGrade()

                  case 2:

                    call _CheckGrade()

                }
            } else {

                call _talkTemp({'facial': 'smile', 'anime': 'talk02', 'message': 'minigame/BattleChallenge:BattleChallrenge_GiveRewardGreenTunic_010'})


                call _wait()

                BattleChallenge.GetReward()
                switch BattleChallenge.CanGetHighlyRatedReward() {
                  case [0, 2]:
                    Event13:

                    call _withDeshiN({'message': 'minigame/BattleChallenge:BattleChallrenge_GiveRewardGreenTunic_020', 'anime': 'yes_lp01', 'facial': 'smile', 'isFirst': True, 'danime': 'applause01', 'dfacial': 'smile'})

                  case 1:

                    call _withDeshiN({'isFirst': True, 'anime': 'yes_lp01', 'facial': 'smile', 'danime': 'surprised_st01,surprised_lp01', 'dfacial': 'surprise', 'message': 'minigame/BattleChallenge:BattleChallrenge_ResultFast_020'})


                    call _wait()

                    BattleChallenge.GetHighlyRatedReward()
                    goto Event13
                }
            }
        }
    } else
    switch BattleChallenge.CanRaiseHigherRank() {
      case [0, 2]:
        goto Event6
      case 1:
        EventFlags.SetFlag({'value': True, 'symbol': 'GetMachineUnlock00'})
        goto Event6
    }
}

void Show() {
    BattleChallenge.UpdateNewChallengeFlag()
    BattleChallengeUI.Show()
    if !BattleChallengeUI.GetResult() {

        call _CancelTraining()

    } else {

        call _talkTemp({'facial': 'normal', 'message': 'minigame/BattleChallenge:BattleChallrenge_Start_010', 'anime': 'yes01,wait01'})

        Partner[companion].EnableAutoMovement()
        if !EventFlags.CheckMessgaeFlag({'message': 'minigame/BattleChallenge:BattleChallrenge_Start_020'}) {

            fork {
                HylianM034.AimCompassPoint({'duration': 0.800000011920929, 'direction': 0, 'withoutTurn': False, 'immediateTurn': False})
            } {
                HylianM034.PlayAnimation({'name': 'talk_once,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Audio.PlayOneshotSystemSE({'label': 'VO_MASTER_007_5', 'volume': 1.0, 'pitch': 1.0})
            }

            Player.ResetAim()

            call _Move()


            fork {
                Partner[companion].AimActor({'withoutTurn': False, 'duration': 0.30000001192092896, 'actor': ActorIdentifier(name="HylianM034"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Zelda.AimActor({'withoutTurn': False, 'duration': 0.30000001192092896, 'actor': ActorIdentifier(name="HylianM034"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }


            fork {
                Audio.PlayOneshotSystemSE({'label': 'VO_MASTER_007_2', 'volume': 1.0, 'pitch': 1.0})
            } {
                HylianM034.PlayAnimation({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

            Event293:

            fork {
                Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
            } {
                Zelda.AimCompassPoint({'direction': 0, 'withoutTurn': False, 'duration': 0.30000001192092896, 'immediateTurn': False})
            } {
                Audio.StopAllBGM({'duration': 3.0})
            }


            fork {

                call _talkTemp({'facial': 'normal', 'message': 'minigame/BattleChallenge:BattleChallrenge_Start_020', 'anime': 'talk13'})

            } {
                Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

            Zelda.SetFacialExpression({'expression': 'sleep'})
            Timer.Wait({'time': 0.5})
            Fade.StartPreset({'preset': 'FadeOutSlowB'})

            call _talkTemp({'anime': 'talk01', 'facial': 'normal', 'message': 'minigame/BattleChallenge:BattleChallrenge_Start_025'})


            call _talkTemp({'anime': 'talk01', 'facial': 'normal', 'message': 'minigame/BattleChallenge:BattleChallrenge_Start_030'})

            GameControl.ReportMinigamePlay({'kind': 3})
            BattleChallenge.StartBattleChallenge()
        } else {
            Player.ResetAim()

            call _Move()

            goto Event293
        }
    }
}

void GetReward() {
    Zelda.GenericItemGetSequence({'itemKey': 'rewardItemKey', 'count': 'count', 'keepRaise': False, 'messageEntry': '', 'index': -1})
}

void Explain_BattleChallrenge() {

    call _talkTemp({'facial': 'normal', 'message': 'minigame/BattleChallenge:Unlock_BattleChallrenge_010_030', 'anime': 'talk02'})


    call _talkTemp({'facial': 'normal', 'message': 'minigame/BattleChallenge:Unlock_BattleChallrenge_010_040', 'anime': 'talk02'})


    call _talkTemp({'facial': 'normal', 'message': 'minigame/BattleChallenge:Unlock_BattleChallrenge_010_050', 'anime': 'talk02'})


    call _talkTemp({'anime': 'talk01', 'facial': 'normal', 'message': 'minigame/BattleChallenge:Unlock_BattleChallrenge_010_060'})


    call _talkTemp({'anime': 'talk01', 'facial': 'normal', 'message': 'minigame/BattleChallenge:Unlock_BattleChallrenge_010_070'})

    if !EventFlags.CheckFlag({'symbol': 'JoinDojo'}) {

        call _talkTemp({'facial': 'normal', 'message': 'minigame/BattleChallenge:Unlock_BattleChallrenge_010_090', 'anime': 'talk03'})

    }

    fork {

        call _talkTemp({'facial': 'normal', 'message': 'minigame/BattleChallenge:Unlock_BattleChallrenge_010_110', 'anime': 'talk03'})

    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_MASTER_007_8', 'volume': 1.0, 'pitch': 1.0})
    }


    call _talkTemp({'facial': 'normal', 'message': 'minigame/BattleChallenge:AfterExplain_BattleChallrenge_010', 'anime': 'ask'})

}

void KatanaTalk() {

    call EvResetCommon.AllReset()

    HylianM034.SetInterestIkEnabled({'enable': False})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HylianM034"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        HylianM034.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    if !EventFlags.CheckFlag({'symbol': 'JoinDojo'}) {

        call _talkTemp({'anime': 'talk01', 'facial': 'normal', 'message': 'minigame/BattleChallenge:BattleChallrenge_KatanaExplainYet_010'})


        fork {
            Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="HylianM034"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="HylianM034"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        call _talkTemp({'anime': 'talk01', 'facial': 'normal', 'message': 'minigame/BattleChallenge:BattleChallrenge_KatanaExplainYet_020'})

        Event91:
        HylianM034.SetInterestIkEnabled({'enable': True})
    } else {

        call _talkTemp({'anime': 'talk01', 'facial': 'normal', 'message': 'minigame/BattleChallenge:BattleChallrenge_KatanaExplain_010'})


        fork {
            Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="HylianM034"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="HylianM034"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        call _talkTemp({'anime': 'talk01', 'facial': 'normal', 'message': 'minigame/BattleChallenge:BattleChallrenge_KatanaExplain_020'})


        call _talkTemp({'facial': 'normal', 'message': 'minigame/BattleChallenge:BattleChallrenge_KatanaExplain_030', 'anime': 'yes01,talk01'})

        goto Event91
    }
}

void ExplainFirst_BattleChallrenge() {

    call _talkTempFirst({'facial': 'normal', 'message': 'minigame/BattleChallenge:Unlock_BattleChallrenge_010_010', 'anime': 'ask'})


    call _talkTemp({'facial': 'normal', 'message': 'minigame/BattleChallenge:Unlock_BattleChallrenge_010_020', 'anime': 'no01,talk02'})


    call _talkTemp({'facial': 'normal', 'message': 'minigame/BattleChallenge:Unlock_BattleChallrenge_010_030', 'anime': 'talk02'})


    call _talkTemp({'facial': 'normal', 'message': 'minigame/BattleChallenge:Unlock_BattleChallrenge_010_040', 'anime': 'talk02'})


    call _talkTemp({'facial': 'normal', 'message': 'minigame/BattleChallenge:Unlock_BattleChallrenge_010_050', 'anime': 'talk01'})


    call _talkTemp({'facial': 'normal', 'message': 'minigame/BattleChallenge:Unlock_BattleChallrenge_010_060', 'anime': 'talk01'})


    call _talkTemp({'anime': 'talk01', 'facial': 'normal', 'message': 'minigame/BattleChallenge:Unlock_BattleChallrenge_010_070'})


    call _talkTemp({'facial': 'normal', 'message': 'minigame/BattleChallenge:Unlock_BattleChallrenge_010_080', 'anime': 'talk03'})


    call _talkTemp({'facial': 'normal', 'message': 'minigame/BattleChallenge:Unlock_BattleChallrenge_010_090', 'anime': 'talk03'})


    call _talkTemp({'message': 'minigame/BattleChallenge:Unlock_BattleChallrenge_010_100', 'anime': 'ask', 'facial': 'normal'})


    call _talkTemp({'message': 'minigame/BattleChallenge:Unlock_BattleChallrenge_010_110', 'anime': 'ask', 'facial': 'normal'})


    call _talkTemp({'message': 'minigame/BattleChallenge:Unlock_BattleChallrenge_010_120', 'anime': 'sad_st01,sad_lp01', 'facial': 'sad'})

}

void _talkTemp() {

    fork {
        HylianM034.Talk({'message': 'message', 'getAttention': False})
    } {
        HylianM034.PlayAnimation({'name': 'anime', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM034.SetFacialExpression({'expression': 'facial'})
    }

}

void _talkTempFirst() {

    fork {
        HylianM034.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'cameraLookAt': False, 'message': 'message', 'selfTalkAnim': True, 'selfTalkAnimName': 'anime', 'facial': 'facial', 'aimFromPlayer': False, 'aimToPlayer': False, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HylianM034"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="HylianM034"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HylianM034.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="HylianM034"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void _CheckChallenge() {
    if !EventFlags.CheckLevelFlag({'index': 0}) {

        call _talkTempFirst({'anime': 'talk01', 'facial': 'normal', 'message': 'greeting'})

        if BattleChallenge.IsExistNewChallenge() {

            call _talkTemp({'facial': 'normal', 'message': 'minigame/BattleChallenge:UnlockNewChallrenge_010', 'anime': 'think01'})

        }

        call _talkTemp({'facial': 'normal', 'anime': 'talk02', 'message': 'selection'})

        if !Player.HasItem({'itemKey': 'Ornament31', 'count': 1, 'index': -1}) {

            fork {

                call _talkTemp({'facial': 'normal', 'anime': 'talk02', 'message': 'selection2'})

            } {
                Audio.PlayOneshotSystemSE({'label': 'VO_MASTER_007_1', 'volume': 1.0, 'pitch': 1.0})
            }

        }
        Event99:
        EventFlags.SetLevelFlag({'index': 0, 'value': True})
    } else
    if !BattleChallenge.IsExistNewChallenge() {

        fork {

            call _talkTempFirst({'facial': 'normal', 'anime': 'talk02', 'message': 'selection'})

        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_MASTER_001', 'volume': 1.0, 'pitch': 1.0})
        }

        if !Player.HasItem({'itemKey': 'Ornament31', 'count': 1, 'index': -1}) {

            call _talkTemp({'facial': 'normal', 'anime': 'talk02', 'message': 'selection2'})

        }
        goto Event99
    } else {

        fork {

            call _talkTempFirst({'facial': 'normal', 'message': 'minigame/BattleChallenge:UnlockNewChallrenge_010', 'anime': 'think01'})

        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_MASTER_001', 'volume': 1.0, 'pitch': 1.0})
        }


        call _talkTemp({'facial': 'normal', 'anime': 'talk02', 'message': 'selection'})

        if !Player.HasItem({'itemKey': 'Ornament31', 'count': 1, 'index': -1}) {

            fork {

                call _talkTemp({'facial': 'normal', 'anime': 'talk02', 'message': 'selection2'})

            } {
                Audio.PlayOneshotSystemSE({'label': 'VO_MASTER_007_1', 'volume': 1.0, 'pitch': 1.0})
            }

        }
        goto Event99
    }
}

void _wait() {

    fork {
        HylianM035.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM034.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM035.ResetFacialExpression()
    }

}

void _CheckGrade() {
    switch BattleChallenge.CanRaiseHigherRank() {
      case 0:

        call _CheckNextGrade()

      case 1:
        if !BattleChallenge.IsEqualCurrentRank({'rank': 5}) {
            if !BattleChallenge.IsEqualCurrentRank({'rank': 2}) {

                call _talkTempFirst({'facial': 'normal', 'message': 'minigame/BattleChallenge:BattleChallrenge_RankUp_010', 'anime': 'talk03'})


                call _talkTemp({'facial': 'normal', 'message': 'minigame/BattleChallenge:BattleChallrenge_RankUp_020', 'anime': 'talk03'})

                Event230:
                HylianM034.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                BattleChallenge.RaiseRank({'offset': 1})

                call _CheckNextGrade()

            } else {

                call _talkTempFirst({'facial': 'normal', 'message': 'minigame/BattleChallenge:BattleChallrenge_GiveRewardKatana_010', 'anime': 'talk03'})


                call _talkTemp({'facial': 'normal', 'message': 'minigame/BattleChallenge:BattleChallrenge_GiveRewardKatana_020', 'anime': 'talk03'})

                goto Event230
            }
        } else {

            call _talkTempFirst({'facial': 'normal', 'message': 'minigame/BattleChallenge:BattleChallrenge_RankUp_010', 'anime': 'talk03'})


            call _talkTemp({'facial': 'normal', 'message': 'minigame/BattleChallenge:BattleChallrenge_RankUp_020', 'anime': 'yes_lp01'})

            HylianM034.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            BattleChallenge.RaiseRank({'offset': 1})

            call _withDeshiN({'message': 'minigame/BattleChallenge:BattleChallrenge_Rank_020', 'facial': 'smile', 'anime': 'yes01,talk03', 'isFirst': True, 'dfacial': 'smile', 'danime': 'applause01'})


            call _talkTemp({'facial': 'normal', 'message': 'minigame/BattleChallenge:BattleChallrenge_Rank_030', 'anime': 'talk03'})


            call _talkTemp({'facial': 'normal', 'message': 'minigame/BattleChallenge:BattleChallrenge_Rank_040', 'anime': 'happy02'})

            EventFlags.SetFlag({'symbol': 'BattleChallengeFinalTraining', 'value': True})
            BattleChallenge.UpdateNewChallengeFlag()
        }
      case 2:

        call _talkTempFirst({'facial': 'normal', 'message': 'minigame/BattleChallenge:BattleChallrenge_End_010', 'anime': 'talk03'})

    }
}

void _withDeshi() {
    if !FlowControl.Branch({'value': 'isFirst'}) {

        fork {
            Timer.Wait({'time': 0.699999988079071})
            HylianM035.SetFacialExpression({'expression': 'dfacial'})
        } {
            if !BattleChallenge.IsUnderResultTime({'timeSec': 60.0}) {

                call _talkTemp({'message': 'smessage', 'anime': 'anime', 'facial': 'facial'})

            } else {

                call _talkTemp({'anime': 'anime', 'facial': 'facial', 'message': 'fmessage'})

            }
        } {
            Timer.Wait({'time': 0.699999988079071})
            HylianM035.PlayAnimation({'name': 'danime', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } else {

        fork {
            Timer.Wait({'time': 0.699999988079071})
            HylianM035.SetFacialExpression({'expression': 'dfacial'})
        } {
            if !BattleChallenge.IsUnderResultTime({'timeSec': 60.0}) {

                call _talkTempFirst({'message': 'smessage', 'anime': 'anime', 'facial': 'facial'})

            } else {

                call _talkTempFirst({'anime': 'anime', 'facial': 'facial', 'message': 'fmessage'})

            }
        } {
            Timer.Wait({'time': 0.699999988079071})
            HylianM035.PlayAnimation({'name': 'danime', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }
}

void _withDeshiN() {
    if !FlowControl.Branch({'value': 'isFirst'}) {

        fork {
            Timer.Wait({'time': 0.699999988079071})
            HylianM035.SetFacialExpression({'expression': 'dfacial'})
        } {
            Timer.Wait({'time': 0.699999988079071})
            HylianM035.PlayAnimation({'name': 'danime', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {

            call _talkTemp({'anime': 'anime', 'facial': 'facial', 'message': 'message'})

        }

    } else {

        fork {
            Timer.Wait({'time': 0.699999988079071})
            HylianM035.SetFacialExpression({'expression': 'dfacial'})
        } {
            Timer.Wait({'time': 0.699999988079071})
            HylianM035.PlayAnimation({'name': 'danime', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {

            call _talkTempFirst({'anime': 'anime', 'facial': 'facial', 'message': 'message'})

        }

    }
}

void _CancelTraining() {

    call _talkTemp({'message': 'minigame/BattleChallenge:CancelBattleChallrenge_010', 'anime': 'sad_st02,sad_lp02', 'facial': 'sad'})

}

void _Move() {

    fork {
        Player.MoveToTargetLinkedPoint({'withoutTurn': False, 'speed': 0, 'index': 0, 'offsetZ': 0.0, 'method': 1, 'actor': ActorIdentifier(name="HylianM034"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Partner[companion].MoveToTargetLinkedPoint({'speed': 0, 'index': 0, 'actor': ActorIdentifier(name="HylianM034"), 'offsetX': -1.0, 'offsetY': 0.375, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetZ': 0.0})
    }

}

void _CheckNextGrade() {
    BattleChallenge.SetNextRankParameter()

    call _talkTempFirst({'facial': 'normal', 'message': 'minigame/BattleChallenge:BattleChallrenge_Rank_010', 'anime': 'talk03'})

    if BattleChallenge.CanNotRankupAllClear() {

        call _talkTemp({'facial': 'normal', 'anime': 'talk03', 'message': 'minigame/BattleChallenge:BattleChallrenge_Rank_015'})

    }
}

void _ResetSwordMode() {
    if !Player.CheckMorph({'morphKind': 0}) {
        Player.MorphTo({'kind': 0})
    }
}
