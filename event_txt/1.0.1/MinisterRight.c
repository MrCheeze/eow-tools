-------- EventFlow: MinisterRight --------

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult', 'GetLastResult4', 'GetLastResult5']
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag', 'CheckMessgaeFlag']
params: None

Actor: Camera
entrypoint: None()
actions: ['Shake']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE']
queries: []
params: None

Actor: MinisterRight
entrypoint: None()
actions: ['PlayAnimation', 'GenericTalkSequenceWithDialog', 'Talk', 'SetFacialExpression', 'SetInstanceVariableInt', 'AddInstanceVariableInt', 'SetInterestIkEnabled', 'PlayAnimationNoWait', 'TalkKeep', 'AimToInitialAngle', 'ResetFacialExpression']
queries: ['GetInstanceVariableInt']
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'PlayAnimation', 'AimPlayer', 'LookAtTalker', 'PlayAnimationNoWait', 'AimActor']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['PlayAnimation', 'PlayAnimationNoWait']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['CheckProgress']
params: None

Actor: TransitCounters
entrypoint: None()
actions: []
queries: ['IsZero']
params: None

void BoundaryUgiTalk() {
    if !EventFlags.CheckFlag({'symbol': 'EvBoundaryUgiTalk'}) {

        fork {
            Partner[companion].Talk({'message': 'scenario/StoryAreaB:BoundaryMinisterRightTalk_010', 'getAttention': False})
        } {
            Partner[companion].PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        }

        Partner[companion].Talk({'message': 'scenario/StoryAreaB:BoundaryMinisterRightTalk_020', 'getAttention': False})
        EventFlags.SetFlag({'symbol': 'EvBoundaryUgiTalk', 'value': True})
    }
}

void talk_010() {
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/HylianGeneralTalk:MinisterRightTalk01_030'}) {
        MinisterRight.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'laugh', 'message': 'scenario/HylianGeneralTalk:MinisterRightTalk01_010', 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

        fork {
            MinisterRight.Talk({'message': 'scenario/HylianGeneralTalk:MinisterRightTalk01_030', 'getAttention': False})
        } {
            MinisterRight.PlayAnimation({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MinisterRight.SetFacialExpression({'expression': 'smile'})
        }


        fork {
            MinisterRight.Talk({'message': 'scenario/HylianGeneralTalk:MinisterRightTalk01_040', 'getAttention': False})
        } {
            MinisterRight.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MinisterRight.SetFacialExpression({'expression': 'sad'})
        }

    } else {
        MinisterRight.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:MinisterRightTalk01_040', 'selfTalkAnimName': 'think', 'selfTalkAnim': True, 'facial': 'sad', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
}

void MinisterRightTalk02() {
    MinisterRight.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/HylianGeneralTalk:MinisterRightTalk02_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    call GeneralTalkToBossQuestOrder_main()

}

void talk030() {
    MinisterRight.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/HylianGeneralTalk:MinisterRightTalk030_010', 'facial': 'smile', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    MinisterRight.ResetFacialExpression()

    call GeneralTalkToBossQuestOrder_main()

}

void Quest_1() {
    MinisterRight.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert005_010', 'getAttention': False})

    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert005_020', 'getAttention': False})
    } {
        MinisterRight.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'angry'})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert005_030', 'getAttention': False})
    } {
        MinisterRight.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'normal'})
    }

    MinisterRight.SetInterestIkEnabled({'enable': False})

    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert005_040', 'getAttention': False})
    } {
        MinisterRight.PlayAnimation({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'sad'})
    }

    MinisterRight.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert005_050', 'getAttention': False})
}

void BossQuestOrder_main() {
    MinisterRight.SetInstanceVariableInt({'name': 'QuestCount', 'value': 0})
    MinisterRight.SetInstanceVariableInt({'name': 'TypeOfMission', 'value': 0})
    MinisterRight.SetInterestIkEnabled({'enable': False})
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/HylianGeneralTalk:MinisterRightTalkCommonFirst'}) {
        MinisterRight.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:MinisterRightTalkCommonFirst', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else {
        MinisterRight.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/HylianGeneralTalk:MinisterRightTalk02_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
    Event370:
    MinisterRight.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterRightTalkCommon_Q1', 'getAttention': False})
    if !Dialog.GetLastResult({'resultOnSkip': 2}) {

        call _BossQuest01Active()


        call _BossQuest02Active()


        call _BossQuest03Active()


        call _BossQuest04Active()


        call _BossQuest05Active()

        switch MinisterRight.GetInstanceVariableInt({'name': 'QuestCount', 'threshold': 1}) {
          case 4294967295:

            fork {
                MinisterRight.Talk({'message': 'scenario/HylianGeneralTalk:MinisterRightBossInfo_Q2_A_500', 'getAttention': False})
            } {
                MinisterRight.PlayAnimationNoWait({'name': 'salute,laugh', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                MinisterRight.SetFacialExpression({'expression': 'smile'})
            }

          case 0:
            MinisterRight.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:MinisterRightBossInfo_Q2_005', 'selfTalkAnimName': 'yes,wait', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

            call _BossQuestSelect1()

          case 1:
            MinisterRight.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:MinisterRightBossInfo_Q2_005', 'selfTalkAnimName': 'yes,wait', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
            if !MinisterRight.GetInstanceVariableInt({'name': 'QuestCount', 'threshold': 2}) {

                call _BossQuestSelect2()

            } else
            if !MinisterRight.GetInstanceVariableInt({'name': 'QuestCount', 'threshold': 3}) {

                call _BossQuestSelect3()

            } else {

                call _BossQuestSelect4()

            }
        }
    } else {
        MinisterRight.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.Talk({'message': 'scenario/HylianGeneralTalk:MinisterRightTalkCommon_Q1_A2_010', 'getAttention': False})
    }
}

void _BossQuest01Active() {
    switch QuestSystem.CheckProgress({'symbol': 'Balom_HyrulePlains010:2332086646'}) {
      case [4294967295, 1]:
        if !QuestSystem.CheckProgress({'symbol': 'Midpoint:2478168384'})
        Event143:
        && !EventFlags.CheckFlag({'symbol': 'MinisterRight_Balom01_After'}) {
            MinisterRight.AddInstanceVariableInt({'name': 'QuestCount', 'value': 1})
            MinisterRight.AddInstanceVariableInt({'name': 'TypeOfMission', 'value': 10000})
        }
      case 0:
        if QuestSystem.CheckProgress({'symbol': 'Jungle:425818924'}) in [4294967295, 1] {
            goto Event143
        }
    }
}

void _BossQuest02Active() {
    switch QuestSystem.CheckProgress({'symbol': 'Balom_Jungle010:4154295259'}) {
      case [4294967295, 1]:
        if !QuestSystem.CheckProgress({'symbol': 'Jungle:425818924'})
        && !QuestSystem.CheckProgress({'symbol': 'Balom_HyrulePlains010:2332086646'})
        Event311:
        && !EventFlags.CheckFlag({'symbol': 'MinisterRight_Balom02_After'}) {
            MinisterRight.AddInstanceVariableInt({'name': 'QuestCount', 'value': 1})
            MinisterRight.AddInstanceVariableInt({'name': 'TypeOfMission', 'value': 1000})
        }
      case 0:
        goto Event311
    }
}

void _BossQuest03Active() {
    switch QuestSystem.CheckProgress({'symbol': 'BigBari_Coast010:239512758'}) {
      case [4294967295, 1]:
        if !EventFlags.CheckFlag({'symbol': 'EvB_BigBariDead'}) {
            if !QuestSystem.CheckProgress({'symbol': 'Midpoint:2478168384'})
            Event314:
            && !EventFlags.CheckFlag({'symbol': 'MinisterRight_BigBari_After'}) {
                MinisterRight.AddInstanceVariableInt({'name': 'QuestCount', 'value': 1})
                MinisterRight.AddInstanceVariableInt({'name': 'TypeOfMission', 'value': 100})
            }
        } else
        goto Event314
      case 0:
        goto Event314
    }
}

void _BossQuest04Active() {
    switch QuestSystem.CheckProgress({'symbol': 'Lanmola_Desert010:1131498840'}) {
      case [4294967295, 1]:
        if !QuestSystem.CheckProgress({'symbol': 'Midpoint:2478168384'})
        && EventFlags.CheckFlag({'symbol': 'Desert_LanmolaDead1'})
        && EventFlags.CheckFlag({'symbol': 'Desert_LanmolaDead2'})
        Event316:
        && !EventFlags.CheckFlag({'symbol': 'MinisterRight_Lanmola_After'}) {
            MinisterRight.AddInstanceVariableInt({'name': 'QuestCount', 'value': 1})
            MinisterRight.AddInstanceVariableInt({'name': 'TypeOfMission', 'value': 10})
        }
      case 0:
        goto Event316
    }
}

void _BossQuest05Active() {
    switch QuestSystem.CheckProgress({'symbol': 'Golem_Valcano010:2216925943'}) {
      case [4294967295, 1]:
        if !QuestSystem.CheckProgress({'symbol': 'Volcano:1474105390'})
        && !QuestSystem.CheckProgress({'symbol': 'Firework_Valcano010:1977653168'})
        && TransitCounters.IsZero({'key': 'VolcanoSubQuests'})
        Event318:
        && !EventFlags.CheckFlag({'symbol': 'MinisterRight_Golem_After'}) {
            MinisterRight.AddInstanceVariableInt({'name': 'QuestCount', 'value': 1})
            MinisterRight.AddInstanceVariableInt({'name': 'TypeOfMission', 'value': 1})
        }
      case 0:
        goto Event318
    }
}

void _BossQuestSelect1() {
    MinisterRight.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    switch MinisterRight.GetInstanceVariableInt({'name': 'TypeOfMission', 'threshold': 10000}) {
      case [4294967295, 1]:
        switch MinisterRight.GetInstanceVariableInt({'name': 'TypeOfMission', 'threshold': 1000}) {
          case [4294967295, 1]:
            switch MinisterRight.GetInstanceVariableInt({'name': 'TypeOfMission', 'threshold': 100}) {
              case [4294967295, 1]:
                switch MinisterRight.GetInstanceVariableInt({'name': 'TypeOfMission', 'threshold': 10}) {
                  case [4294967295, 1]:
                    if !MinisterRight.GetInstanceVariableInt({'name': 'TypeOfMission', 'threshold': 1}) {
                        MinisterRight.Talk({'message': 'scenario/HylianGeneralTalk:MinisterRightBossInfo_Q2_050', 'getAttention': False})
                        if !Dialog.GetLastResult({'resultOnSkip': 1}) {

                            call _BossQuestGolem()

                        } else {
                            Event162:

                            call _BossQuestSelectEnd()

                        }
                    }
                  case 0:
                    MinisterRight.Talk({'message': 'scenario/HylianGeneralTalk:MinisterRightBossInfo_Q2_040', 'getAttention': False})
                    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

                        call _BossQuestLanmola()

                    } else {
                        goto Event162
                    }
                }
              case 0:
                MinisterRight.Talk({'message': 'scenario/HylianGeneralTalk:MinisterRightBossInfo_Q2_030', 'getAttention': False})
                if !Dialog.GetLastResult({'resultOnSkip': 1}) {

                    call _BossQuestBigBari()

                } else {
                    goto Event162
                }
            }
          case 0:
            MinisterRight.Talk({'message': 'scenario/HylianGeneralTalk:MinisterRightBossInfo_Q2_020', 'getAttention': False})
            if !Dialog.GetLastResult({'resultOnSkip': 1}) {

                call _BossQuestBalomLv2()

            } else {
                goto Event162
            }
        }
      case 0:
        MinisterRight.Talk({'message': 'scenario/HylianGeneralTalk:MinisterRightBossInfo_Q2_010', 'getAttention': False})
        if !Dialog.GetLastResult({'resultOnSkip': 1}) {

            call _BossQuestBalomLv1()

        } else {
            goto Event162
        }
    }
}

void _BossQuestSelectEnd() {
    MinisterRight.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:MinisterRightBossInfo_Q2_A_010', 'selfTalkAnimName': 'salute,wait', 'aimToPlayer': False, 'aimFromPlayer': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void _BossQuestSelect2() {
    MinisterRight.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    switch MinisterRight.GetInstanceVariableInt({'name': 'TypeOfMission', 'threshold': 10100}) {
      case [4294967295, 1]:
        switch MinisterRight.GetInstanceVariableInt({'name': 'TypeOfMission', 'threshold': 10010}) {
          case [4294967295, 1]:
            switch MinisterRight.GetInstanceVariableInt({'name': 'TypeOfMission', 'threshold': 10001}) {
              case [4294967295, 1]:
                switch MinisterRight.GetInstanceVariableInt({'name': 'TypeOfMission', 'threshold': 1100}) {
                  case [4294967295, 1]:
                    switch MinisterRight.GetInstanceVariableInt({'name': 'TypeOfMission', 'threshold': 1010}) {
                      case [4294967295, 1]:
                        switch MinisterRight.GetInstanceVariableInt({'name': 'TypeOfMission', 'threshold': 1001}) {
                          case [4294967295, 1]:
                            switch MinisterRight.GetInstanceVariableInt({'name': 'TypeOfMission', 'threshold': 110}) {
                              case [4294967295, 1]:
                                switch MinisterRight.GetInstanceVariableInt({'name': 'TypeOfMission', 'threshold': 101}) {
                                  case [4294967295, 1]:
                                    if !MinisterRight.GetInstanceVariableInt({'name': 'TypeOfMission', 'threshold': 11}) {
                                        MinisterRight.Talk({'message': 'scenario/HylianGeneralTalk:MinisterRightBossInfo_Q2_140', 'getAttention': False})
                                        switch Dialog.GetLastResult4({'resultOnSkip': 2}) {
                                          case 0:

                                            call _BossQuestLanmola()

                                            Event92:

                                            call _BossQuestLoopChecker()

                                          case 1:

                                            call _BossQuestGolem()

                                            goto Event92
                                          case 2:
                                            Event172:

                                            call _BossQuestSelectEnd()

                                        }
                                    }
                                  case 0:
                                    MinisterRight.Talk({'message': 'scenario/HylianGeneralTalk:MinisterRightBossInfo_Q2_130', 'getAttention': False})
                                    switch Dialog.GetLastResult4({'resultOnSkip': 2}) {
                                      case 0:

                                        call _BossQuestBigBari()

                                        Event230:

                                        call _BossQuestLoopChecker()

                                      case 1:

                                        call _BossQuestGolem()

                                        goto Event230
                                      case 2:
                                        goto Event172
                                    }
                                }
                              case 0:
                                MinisterRight.Talk({'message': 'scenario/HylianGeneralTalk:MinisterRightBossInfo_Q2_120', 'getAttention': False})
                                switch Dialog.GetLastResult4({'resultOnSkip': 2}) {
                                  case 0:

                                    call _BossQuestBigBari()

                                    Event354:

                                    call _BossQuestLoopChecker()

                                  case 1:

                                    call _BossQuestLanmola()

                                    goto Event354
                                  case 2:
                                    goto Event172
                                }
                            }
                          case 0:
                            MinisterRight.Talk({'message': 'scenario/HylianGeneralTalk:MinisterRightBossInfo_Q2_110', 'getAttention': False})
                            switch Dialog.GetLastResult4({'resultOnSkip': 2}) {
                              case 0:

                                call _BossQuestBalomLv2()

                                Event373:

                                call _BossQuestLoopChecker()

                              case 1:

                                call _BossQuestGolem()

                                goto Event373
                              case 2:
                                goto Event172
                            }
                        }
                      case 0:
                        MinisterRight.Talk({'message': 'scenario/HylianGeneralTalk:MinisterRightBossInfo_Q2_100', 'getAttention': False})
                        switch Dialog.GetLastResult4({'resultOnSkip': 2}) {
                          case 0:

                            call _BossQuestBalomLv2()

                            Event374:

                            call _BossQuestLoopChecker()

                          case 1:

                            call _BossQuestLanmola()

                            goto Event374
                          case 2:
                            goto Event172
                        }
                    }
                  case 0:
                    MinisterRight.Talk({'message': 'scenario/HylianGeneralTalk:MinisterRightBossInfo_Q2_090', 'getAttention': False})
                    switch Dialog.GetLastResult4({'resultOnSkip': 2}) {
                      case 0:

                        call _BossQuestBalomLv2()

                        Event375:

                        call _BossQuestLoopChecker()

                      case 1:

                        call _BossQuestBigBari()

                        goto Event375
                      case 2:
                        goto Event172
                    }
                }
              case 0:
                MinisterRight.Talk({'message': 'scenario/HylianGeneralTalk:MinisterRightBossInfo_Q2_080', 'getAttention': False})
                switch Dialog.GetLastResult4({'resultOnSkip': 2}) {
                  case 0:

                    call _BossQuestBalomLv1()

                    Event376:

                    call _BossQuestLoopChecker()

                  case 1:

                    call _BossQuestGolem()

                    goto Event376
                  case 2:
                    goto Event172
                }
            }
          case 0:
            MinisterRight.Talk({'message': 'scenario/HylianGeneralTalk:MinisterRightBossInfo_Q2_070', 'getAttention': False})
            switch Dialog.GetLastResult4({'resultOnSkip': 2}) {
              case 0:

                call _BossQuestBalomLv1()

                Event377:

                call _BossQuestLoopChecker()

              case 1:

                call _BossQuestLanmola()

                goto Event377
              case 2:
                goto Event172
            }
        }
      case 0:
        MinisterRight.Talk({'message': 'scenario/HylianGeneralTalk:MinisterRightBossInfo_Q2_060', 'getAttention': False})
        switch Dialog.GetLastResult4({'resultOnSkip': 2}) {
          case 0:

            call _BossQuestBalomLv1()

            Event378:

            call _BossQuestLoopChecker()

          case 1:

            call _BossQuestBigBari()

            goto Event378
          case 2:
            goto Event172
        }
    }
}

void _BossQuestSelect3() {
    MinisterRight.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    switch MinisterRight.GetInstanceVariableInt({'name': 'TypeOfMission', 'threshold': 10110}) {
      case [4294967295, 1]:
        switch MinisterRight.GetInstanceVariableInt({'name': 'TypeOfMission', 'threshold': 10101}) {
          case [4294967295, 1]:
            switch MinisterRight.GetInstanceVariableInt({'name': 'TypeOfMission', 'threshold': 10011}) {
              case [4294967295, 1]:
                switch MinisterRight.GetInstanceVariableInt({'name': 'TypeOfMission', 'threshold': 1110}) {
                  case [4294967295, 1]:
                    switch MinisterRight.GetInstanceVariableInt({'name': 'TypeOfMission', 'threshold': 1101}) {
                      case [4294967295, 1]:
                        switch MinisterRight.GetInstanceVariableInt({'name': 'TypeOfMission', 'threshold': 1011}) {
                          case [4294967295, 1]:
                            if !MinisterRight.GetInstanceVariableInt({'name': 'TypeOfMission', 'threshold': 111}) {
                                MinisterRight.Talk({'message': 'scenario/HylianGeneralTalk:MinisterRightBossInfo_Q2_200', 'getAttention': False})
                                switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
                                  case 0:

                                    call _BossQuestBigBari()

                                    Event379:

                                    call _BossQuestLoopChecker()

                                  case 1:

                                    call _BossQuestLanmola()

                                    goto Event379
                                  case 2:

                                    call _BossQuestGolem()

                                    goto Event379
                                  case 3:
                                    Event219:

                                    call _BossQuestSelectEnd()

                                }
                            }
                          case 0:
                            MinisterRight.Talk({'message': 'scenario/HylianGeneralTalk:MinisterRightBossInfo_Q2_190', 'getAttention': False})
                            switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
                              case 0:

                                call _BossQuestBalomLv2()

                                Event380:

                                call _BossQuestLoopChecker()

                              case 1:

                                call _BossQuestLanmola()

                                goto Event380
                              case 2:

                                call _BossQuestGolem()

                                goto Event380
                              case 3:
                                goto Event219
                            }
                        }
                      case 0:
                        MinisterRight.Talk({'message': 'scenario/HylianGeneralTalk:MinisterRightBossInfo_Q2_185', 'getAttention': False})
                        switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
                          case 0:

                            call _BossQuestBalomLv2()

                            Event381:

                            call _BossQuestLoopChecker()

                          case 1:

                            call _BossQuestBigBari()

                            goto Event381
                          case 2:

                            call _BossQuestGolem()

                            goto Event381
                          case 3:
                            goto Event219
                        }
                    }
                  case 0:
                    MinisterRight.Talk({'message': 'scenario/HylianGeneralTalk:MinisterRightBossInfo_Q2_180', 'getAttention': False})
                    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
                      case 0:

                        call _BossQuestBalomLv2()

                        Event382:

                        call _BossQuestLoopChecker()

                      case 1:

                        call _BossQuestBigBari()

                        goto Event382
                      case 2:

                        call _BossQuestLanmola()

                        goto Event382
                      case 3:
                        goto Event219
                    }
                }
              case 0:
                MinisterRight.Talk({'message': 'scenario/HylianGeneralTalk:MinisterRightBossInfo_Q2_170', 'getAttention': False})
                switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
                  case 0:

                    call _BossQuestBalomLv1()

                    Event383:

                    call _BossQuestLoopChecker()

                  case 1:

                    call _BossQuestLanmola()

                    goto Event383
                  case 2:

                    call _BossQuestGolem()

                    goto Event383
                  case 3:
                    goto Event219
                }
            }
          case 0:
            MinisterRight.Talk({'message': 'scenario/HylianGeneralTalk:MinisterRightBossInfo_Q2_160', 'getAttention': False})
            switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
              case 0:

                call _BossQuestBalomLv1()

                Event384:

                call _BossQuestLoopChecker()

              case 1:

                call _BossQuestBigBari()

                goto Event384
              case 2:

                call _BossQuestGolem()

                goto Event384
              case 3:
                goto Event219
            }
        }
      case 0:
        MinisterRight.Talk({'message': 'scenario/HylianGeneralTalk:MinisterRightBossInfo_Q2_150', 'getAttention': False})
        switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
          case 0:

            call _BossQuestBalomLv1()

            Event385:

            call _BossQuestLoopChecker()

          case 1:

            call _BossQuestBigBari()

            goto Event385
          case 2:

            call _BossQuestLanmola()

            goto Event385
          case 3:
            goto Event219
        }
    }
}

void _BossQuestSelect4() {
    MinisterRight.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    switch MinisterRight.GetInstanceVariableInt({'name': 'TypeOfMission', 'threshold': 10111}) {
      case [4294967295, 1]:
        if !MinisterRight.GetInstanceVariableInt({'name': 'TypeOfMission', 'threshold': 1111}) {
            MinisterRight.Talk({'message': 'scenario/HylianGeneralTalk:MinisterRightBossInfo_Q2_220', 'getAttention': False})
            switch Dialog.GetLastResult5({'resultOnSkip': 4}) {
              case 0:

                call _BossQuestBalomLv2()

                Event387:

                call _BossQuestLoopChecker()

              case 1:

                call _BossQuestBigBari()

                goto Event387
              case 2:

                call _BossQuestLanmola()

                goto Event387
              case 3:

                call _BossQuestGolem()

                goto Event387
              case 4:
                Event226:

                call _BossQuestSelectEnd()

            }
        }
      case 0:
        MinisterRight.Talk({'message': 'scenario/HylianGeneralTalk:MinisterRightBossInfo_Q2_210', 'getAttention': False})
        switch Dialog.GetLastResult5({'resultOnSkip': 4}) {
          case 0:

            call _BossQuestBalomLv1()

            Event386:

            call _BossQuestLoopChecker()

          case 1:

            call _BossQuestBigBari()

            goto Event386
          case 2:

            call _BossQuestLanmola()

            goto Event386
          case 3:

            call _BossQuestGolem()

            goto Event386
          case 4:
            goto Event226
        }
    }
}

void _BossQuestOrder_talk() {
    switch QuestSystem.CheckProgress({'symbol': 'Volcano:1474105390'}) {
      case 4294967295:
        switch QuestSystem.CheckProgress({'symbol': 'Snowmountain:776505974'}) {
          case 4294967295:
            switch QuestSystem.CheckProgress({'symbol': 'Jungle:425818924'}) {
              case 4294967295:

                call MinisterRightTalk02()

              case [0, 1]:
                Event326:

                call talk030()

            }
          case [0, 1]:
            goto Event326
        }
      case [0, 1]:
        goto Event326
    }
}

void talk050() {
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/HylianGeneralTalk:MinisterRightTalk040_010'}) {
        MinisterRight.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/HylianGeneralTalk:MinisterRightTalk040_010', 'facial': 'sad', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        MinisterRight.Talk({'message': 'scenario/HylianGeneralTalk:MinisterRightTalk040_020', 'getAttention': False})
        Event3:
        MinisterRight.ResetFacialExpression()

        call GeneralTalkToBossQuestOrder_main()

    } else {
        MinisterRight.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/HylianGeneralTalk:MinisterRightTalk030_010', 'facial': 'smile', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        goto Event3
    }
}

void _BalomL1_Destroy() {

    fork {
        Player.PlayAnimation({'name': 'talk_hand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'normal'})
    }

    Timer.Wait({'time': 1.5})
    Player.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        MinisterRight.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaPlains:Balom_HyrulePlains005_100', 'facial': 'surprise', 'selfTalkAnimName': 'surprised_st,surprised', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Camera.Shake({'power': 3, 'duration': 1.0})
    } {
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="MinisterRight"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaPlains:Balom_HyrulePlains005_110', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'no,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'angry'})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaPlains:Balom_HyrulePlains005_120', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaPlains:Balom_HyrulePlains005_130', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'ev_angry_st,ev_angry_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.PlayAnimationNoWait({'name': 'ev_surprise_st,ev_surprise_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].PlayAnimationNoWait({'restart': False, 'name': 'panic', 'layer': 0, 'blendFrame': -1})
        Timer.Wait({'time': 0.550000011920929})
        Partner[companion].PlayAnimationNoWait({'restart': False, 'name': 'wait', 'layer': 0, 'blendFrame': -1})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaPlains:Balom_HyrulePlains005_140', 'getAttention': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'normal'})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'salute,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaPlains:Balom_HyrulePlains005_150', 'getAttention': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'sleep'})
    } {
        MinisterRight.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    EventFlags.SetFlag({'symbol': 'MinisterRight_Balom01_After', 'value': True})
    if !QuestSystem.CheckProgress({'symbol': 'Balom_HyrulePlains010:2608839320'}) {

        fork {
            MinisterRight.Talk({'message': 'quest/QuestAreaPlains:Balom_HyrulePlains005_200', 'getAttention': False})
        } {
            MinisterRight.SetFacialExpression({'expression': 'sad'})
        }


        fork {
            MinisterRight.Talk({'message': 'quest/QuestAreaPlains:Balom_HyrulePlains005_210', 'getAttention': False})
        } {
            MinisterRight.SetFacialExpression({'expression': 'smile'})
        } {
            MinisterRight.PlayAnimation({'name': 'salute,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }
}

void _BossQuestBalomLv1() {

    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaPlains:Balom_HyrulePlains005_010', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaPlains:Balom_HyrulePlains005_020', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'sleep'})
    }

    switch QuestSystem.CheckProgress({'symbol': 'Balom_HyrulePlains010:2958223707'}) {
      case [4294967295, 0]:
        Timer.Wait({'time': 1.0})

        fork {
            MinisterRight.Talk({'message': 'quest/QuestAreaPlains:Balom_HyrulePlains005_030', 'getAttention': False})
        } {
            MinisterRight.PlayAnimationNoWait({'name': 'no,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MinisterRight.SetFacialExpression({'expression': 'normal'})
        }


        fork {
            MinisterRight.Talk({'message': 'quest/QuestAreaPlains:Balom_HyrulePlains005_040', 'getAttention': False})
        } {
            MinisterRight.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MinisterRight.SetFacialExpression({'expression': 'sad'})
        }

      case 1:

        call _BalomL1_Destroy()

    }
}

void _BossQuestBalomLv2() {

    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaF:Balom_Jungle005_010', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaF:Balom_Jungle005_020', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaF:Balom_Jungle005_030', 'getAttention': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'sad'})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    switch QuestSystem.CheckProgress({'symbol': 'Balom_Jungle010:3436166134'}) {
      case [4294967295, 0]:

        fork {
            MinisterRight.Talk({'message': 'quest/QuestAreaF:Balom_Jungle005_040', 'getAttention': False})
        } {
            MinisterRight.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MinisterRight.SetFacialExpression({'expression': 'normal'})
        }


        fork {
            MinisterRight.Talk({'message': 'quest/QuestAreaF:Balom_Jungle005_050', 'getAttention': False})
        } {
            MinisterRight.PlayAnimationNoWait({'name': 'yes,think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MinisterRight.SetFacialExpression({'expression': 'sad'})
        }

      case 1:

        call _BalomL2_Destroy()

    }
}

void _BalomL2_Destroy() {

    fork {
        Player.PlayAnimation({'name': 'talk_hand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'normal'})
    }

    Timer.Wait({'time': 1.5})
    Player.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        MinisterRight.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': 'surprise', 'selfTalkAnimName': 'surprised_st,surprised', 'message': 'quest/QuestAreaF:Balom_Jungle005_100', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Camera.Shake({'power': 3, 'duration': 1.0})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaF:Balom_Jungle005_110', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'no,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'angry'})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaF:Balom_Jungle005_120', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaF:Balom_Jungle005_130', 'getAttention': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'smile'})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'yes,laugh', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaF:Balom_Jungle005_140', 'getAttention': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'sleep'})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaF:Balom_Jungle005_150', 'getAttention': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'smile'})
    } {
        MinisterRight.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaF:Balom_Jungle005_160', 'getAttention': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'angry'})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    EventFlags.SetFlag({'symbol': 'MinisterRight_Balom02_After', 'value': True})
    if !QuestSystem.CheckProgress({'symbol': 'Balom_Jungle010:3890407477'}) {

        fork {
            MinisterRight.Talk({'message': 'quest/QuestAreaF:Balom_Jungle005_200', 'getAttention': False})
        } {
            MinisterRight.SetFacialExpression({'expression': 'sad'})
        }


        fork {
            MinisterRight.Talk({'message': 'quest/QuestAreaF:Balom_Jungle005_210', 'getAttention': False})
        } {
            MinisterRight.SetFacialExpression({'expression': 'smile'})
        } {
            MinisterRight.PlayAnimation({'name': 'salute,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }
}

void _BossQuestBigBari() {

    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaB:BigBari_Coast005_010', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaB:BigBari_Coast005_020', 'getAttention': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'sleep'})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaB:BigBari_Coast005_030', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'sad'})
    }

    switch QuestSystem.CheckProgress({'symbol': 'BigBari_Coast010:890541211'}) {
      case [4294967295, 0]:
        if !EventFlags.CheckFlag({'symbol': 'EvB_BigBariDead'}) {

            fork {
                MinisterRight.Talk({'message': 'quest/QuestAreaB:BigBari_Coast005_040', 'getAttention': False})
            } {
                MinisterRight.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                MinisterRight.SetFacialExpression({'expression': 'normal'})
            }

        } else {

            call _BigBari_Destroy()

        }
      case 1:

        call _BigBari_Destroy()

    }
}

void _BigBari_Destroy() {

    fork {
        Player.PlayAnimation({'name': 'talk_hand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'normal'})
    }

    Timer.Wait({'time': 1.5})
    Player.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaB:BigBari_Coast005_100', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'surprised_st,surprised', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'surprise'})
    } {
        Camera.Shake({'power': 3, 'duration': 1.0})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaB:BigBari_Coast005_110', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'angry'})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaB:BigBari_Coast005_120', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'no,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'surprise'})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaB:BigBari_Coast005_130', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'angry'})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaB:BigBari_Coast005_140', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaB:BigBari_Coast005_150', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'laugh', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'smile'})
    }

    EventFlags.SetFlag({'symbol': 'MinisterRight_BigBari_After', 'value': True})
    switch QuestSystem.CheckProgress({'symbol': 'BigBari_Coast010:507103064'}) {
      case 4294967295:
        if EventFlags.CheckFlag({'symbol': 'EvB_BigBariDead'}) {
            Event758:

            fork {
                MinisterRight.Talk({'message': 'quest/QuestAreaB:BigBari_Coast005_200', 'getAttention': False})
            } {
                MinisterRight.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                MinisterRight.SetFacialExpression({'expression': 'sad'})
            }


            fork {
                MinisterRight.Talk({'message': 'quest/QuestAreaB:BigBari_Coast005_210', 'getAttention': False})
            } {
                MinisterRight.SetFacialExpression({'expression': 'smile'})
            } {
                MinisterRight.PlayAnimation({'name': 'salute,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

        }
      case 0:
        goto Event758
    }
}

void _BossQuestLanmola() {

    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert005_010', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert005_020', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert005_030', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'normal'})
    }

    switch QuestSystem.CheckProgress({'symbol': 'Lanmola_Desert010:2015589749'}) {
      case [4294967295, 0]:

        fork {
            MinisterRight.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert005_040', 'getAttention': False})
        } {
            MinisterRight.PlayAnimation({'name': 'no,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MinisterRight.SetFacialExpression({'expression': 'sad'})
        }


        fork {
            MinisterRight.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert005_050', 'getAttention': False})
        } {
            MinisterRight.PlayAnimation({'name': 'salute,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MinisterRight.SetFacialExpression({'expression': 'angry'})
        }

      case 1:

        call _Lanmola_Destroy()

    }
}

void _Lanmola_Destroy() {

    fork {
        Player.PlayAnimation({'name': 'talk_hand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'normal'})
    }

    Timer.Wait({'time': 1.5})
    Player.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        MinisterRight.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': 'surprise', 'selfTalkAnimName': 'surprised_st,surprised', 'message': 'quest/QuestAreaD:Lanmola_Desert005_100', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Camera.Shake({'power': 3, 'duration': 1.0})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert005_110', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'no,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'angry'})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert005_120', 'getAttention': False})
    } {
        MinisterRight.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert005_130', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert005_140', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'sleep'})
    }

    EventFlags.SetFlag({'symbol': 'MinisterRight_Lanmola_After', 'value': True})
    if !QuestSystem.CheckProgress({'symbol': 'Lanmola_Desert010:1393436342'}) {

        fork {
            MinisterRight.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert005_200', 'getAttention': False})
        } {
            MinisterRight.SetFacialExpression({'expression': 'sad'})
        }


        fork {
            MinisterRight.Talk({'message': 'quest/QuestAreaD:Lanmola_Desert005_210', 'getAttention': False})
        } {
            MinisterRight.SetFacialExpression({'expression': 'smile'})
        } {
            MinisterRight.PlayAnimation({'name': 'salute,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }
}

void _BossQuestGolem() {

    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaC:Golem_Valcano005_010', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaC:Golem_Valcano005_020', 'getAttention': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'sleep'})
    } {
        MinisterRight.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaC:Golem_Valcano005_030', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'normal'})
    }

    switch QuestSystem.CheckProgress({'symbol': 'Golem_Valcano010:3211895514'}) {
      case [4294967295, 0]:

        fork {
            MinisterRight.Talk({'message': 'quest/QuestAreaC:Golem_Valcano005_040', 'getAttention': False})
        } {
            MinisterRight.PlayAnimationNoWait({'name': 'think,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

      case 1:

        call _Golem_Destroy()

    }
}

void _Golem_Destroy() {

    fork {
        Player.PlayAnimation({'name': 'talk_hand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'normal'})
    }

    Timer.Wait({'time': 1.5})
    Player.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        MinisterRight.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaC:Golem_Valcano005_050', 'selfTalkAnimName': 'surprised_st,surprised', 'facial': 'surprise', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Camera.Shake({'power': 3, 'duration': 1.0})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaC:Golem_Valcano005_060', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'no,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'angry'})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaC:Golem_Valcano005_070', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        MinisterRight.Talk({'message': 'quest/QuestAreaC:Golem_Valcano005_080', 'getAttention': False})
    } {
        MinisterRight.PlayAnimationNoWait({'name': 'yes,laugh', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'smile'})
    }

    EventFlags.SetFlag({'symbol': 'MinisterRight_Golem_After', 'value': True})
    if !QuestSystem.CheckProgress({'symbol': 'Golem_Valcano010:2489119001'}) {

        fork {
            MinisterRight.Talk({'message': 'quest/QuestAreaC:Golem_Valcano005_090', 'getAttention': False})
        } {
            MinisterRight.SetFacialExpression({'expression': 'sad'})
        } {
            MinisterRight.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            MinisterRight.Talk({'message': 'quest/QuestAreaC:Golem_Valcano005_100', 'getAttention': False})
        } {
            MinisterRight.SetFacialExpression({'expression': 'smile'})
        } {
            MinisterRight.PlayAnimationNoWait({'name': 'salute,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }
}

void Special_HyruleCastle050_012() {
    MinisterRight.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'facial': 'angry', 'selfTalkAnimName': 'think', 'message': 'quest/QuestAreaA:Special_HyruleCastle050_012', 'aimToPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    MinisterRight.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterRight.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    QuestSystem.SetProgress({'symbol': 'Special_HyruleCastle010:2420576300', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Special_HyruleCastle050_013() {
    MinisterRight.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'facial': 'angry', 'selfTalkAnimName': 'think', 'message': 'quest/QuestAreaA:Special_HyruleCastle050_012', 'aimToPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    MinisterRight.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MinisterRight.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
}

void talk060() {
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/HylianGeneralTalk:MinisterRightTalk060_010'}) {
        MinisterRight.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/HylianGeneralTalk:MinisterRightTalk060_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        MinisterRight.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        call GeneralSequence.ZeldaTalkMotion()

        MinisterRight.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MinisterRight.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterRightTalk060_020', 'getAttention': False})
        MinisterRight.TalkKeep({'message': 'scenario/HylianGeneralTalk:MinisterRightTalk060_030', 'getAttention': False})
        Event325:

        call GeneralTalkToBossQuestOrder_main()

    } else {
        Audio.PlayOneshotSystemSE({'label': 'VO_UGI_001', 'volume': 1.0, 'pitch': 1.0})
        MinisterRight.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/HylianGeneralTalk:MinisterRightTalk060_030', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        goto Event325
    }
}

void GeneralTalkToBossQuestOrder_main() {
    MinisterRight.SetInstanceVariableInt({'name': 'QuestCount', 'value': 0})
    MinisterRight.SetInstanceVariableInt({'name': 'TypeOfMission', 'value': 0})
    MinisterRight.SetInterestIkEnabled({'enable': False})
    goto Event370
}

void talk035() {
    MinisterRight.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/HylianGeneralTalk:MinisterRightTalk035_010', 'isExcludeLocked': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False})
}

void talk035_01() {
    MinisterRight.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/StoryAreaH:FoundMinisterRight_060', 'selfTalkAnimName': 'think', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    MinisterRight.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/StoryAreaH:FoundMinisterRight_060_02', 'aimToPlayer': True, 'selfTalkAnimName': '', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void _BossQuestLoopChecker() {
    MinisterRight.SetInstanceVariableInt({'name': 'QuestCount', 'value': 0})
    MinisterRight.SetInstanceVariableInt({'name': 'TypeOfMission', 'value': 0})

    call _BossQuest01Active()


    call _BossQuest02Active()


    call _BossQuest03Active()


    call _BossQuest04Active()


    call _BossQuest05Active()

    MinisterRight.SetFacialExpression({'expression': 'normal'})
    switch MinisterRight.GetInstanceVariableInt({'name': 'QuestCount', 'threshold': 1}) {
      case 4294967295:

        fork {
            MinisterRight.Talk({'message': 'scenario/HylianGeneralTalk:MinisterRightBossInfo_Q2_A_500', 'getAttention': False})
        } {
            MinisterRight.PlayAnimationNoWait({'name': 'salute,laugh', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MinisterRight.SetFacialExpression({'expression': 'smile'})
        }

      case 0:

        call _BossQuestSelect1()

      case 1:
        if !MinisterRight.GetInstanceVariableInt({'name': 'QuestCount', 'threshold': 2}) {

            call _BossQuestSelect2()

        } else
        if !MinisterRight.GetInstanceVariableInt({'name': 'QuestCount', 'threshold': 3}) {

            call _BossQuestSelect3()

        } else {

            call _BossQuestSelect4()

        }
    }
}

void MinisterRightTalk027() {
    MinisterRight.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'aimToPlayer': True, 'message': 'scenario/HylianGeneralTalk:MinisterRightTalk027_010', 'selfTalkAnimName': '', 'facial': '', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void MinisterRightTalk_mc032Clear() {
    MinisterRight.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'facial': '', 'message': 'scenario/HylianGeneralTalk:MinisterRightTalk025_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        MinisterRight.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MinisterRight.Talk({'message': 'scenario/HylianGeneralTalk:MinisterRightTalk025_020', 'getAttention': False})
    } {
        MinisterRight.SetFacialExpression({'expression': 'smile'})
    }

}
