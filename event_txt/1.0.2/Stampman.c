-------- EventFlow: Stampman --------

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: ['GetLastResult']
params: None

Actor: StampRally
entrypoint: None()
actions: ['RegisterStamp', 'ShowUiRegisterStamp', 'PreloadUiArchive']
queries: ['IsRegisteredStamp', 'IsFullStamp', 'GetNumStampCard']
params: None

Actor: Player
entrypoint: None()
actions: ['AddItem', 'GenericItemGetSequence', 'AimActor', 'AddItemAndGenericItemGetSequence', 'PlayAnimation']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestAutoSave', 'ResetSensorEventResetContainsActors']
queries: []
params: None

Actor: Stampman
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimation', 'SetFacialExpression', 'AimPlayer', 'AimDegreeAngle', 'SetInterestIkEnabled', 'SetGravityEnable', 'Activate', 'ChangeSteeringAnimation', 'MoveToLinkedPoint', 'SetPoseAdjusterBlendRate', 'AimCompassPoint', 'PlayAnimationNoWait', 'KeepAnimationAfterEvent', 'ResetFacialExpression', 'Destroy', 'LookAtTalker', 'AimActor', 'SetTalkerName', 'GenericTalkSequence', 'SetComponentActive']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['ResetFacialExpression', 'SetFacialExpression', 'PlayAnimation', 'AimCompassPoint', 'SetVisibility', 'LookAtTalker', 'PlayTailorOtherChannelNoWait', 'SetInterestIkEnabled', 'AimActor']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['AimActor', 'EnableAutoMovement', 'MoveToDefaultPosition', 'WaitMoveDone']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Reset']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['Close', 'SetProgress']
queries: ['CheckProgress', 'GetStatus']
params: None

Actor: StampTable
entrypoint: None()
actions: ['PlayAnimation', 'LookAtGimmick', 'SetComponentActive', 'Activate']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['MoveToBesideTargetActor', 'PlayAnimation', 'AimCompassPoint', 'SetVisibility', 'EnableAutoMovement', 'MoveToDefaultPosition', 'SetInterestIkEnabled', 'AimActor', 'ResetAim']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['StopAllBGM', 'StartStampManBGM', 'StopStampManBGM', 'PlayOneshotSystemSE', 'StopRegionBgm', 'EventFlowUiDucking']
queries: []
params: None

Actor: TransitCounters
entrypoint: None()
actions: ['SetValue']
queries: []
params: None

void talk() {
    Stampman.SetInterestIkEnabled({'enable': False})

    call StampGenBGM_On()

    Stampman.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/StampmanTalk:StampmanTalk010_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Stampman.PlayAnimation({'name': 'appeal,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Stampman.Talk({'message': 'scenario/StampmanTalk:StampmanTalk010_020', 'getAttention': False})
    Stampman.SetInterestIkEnabled({'enable': True})

    call RegionBGM_ReStart()

}

void talk_snow010() {

    call EvResetCommon.AllReset()


    call StampGenBGM_On()

    Stampman.SetInterestIkEnabled({'enable': False})
    switch QuestSystem.GetStatus({'questKey': 'StampRally'}) {
      case 0:
        Stampman.SetTalkerName({'message': 'glossary/Character:Unknown', 'keep': False})
        Event481:
        Stampman.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaG:Stamp_SnowMountain010_010', 'playerTalkAnim': False, 'facial': 'angry', 'selfTalkAnimName': 'wait', 'aimFromPlayer': True, 'aimToPlayer': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

        fork {
            Stampman.Talk({'message': 'quest/QuestAreaG:Stamp_SnowMountain010_020', 'getAttention': False})
        } {
            Stampman.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            Stampman.Talk({'message': 'quest/QuestAreaG:Stamp_SnowMountain010_040', 'getAttention': False})
        } {
            Stampman.PlayAnimation({'name': 'laugh', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Stampman.SetFacialExpression({'expression': 'sleep'})
        }

        Timer.Wait({'time': 2.0})

        fork {
            Stampman.Talk({'message': 'quest/QuestAreaG:Stamp_SnowMountain010_050', 'getAttention': False})
        } {
            Stampman.PlayAnimation({'name': 'clap', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Stampman.SetFacialExpression({'expression': 'smile'})
        }

        switch QuestSystem.CheckProgress({'symbol': 'StampRally:1289245387'}) {
          case 4294967295:

            call talk_snow_1stStamp()

            Event514:

            fork {
                Stampman.Talk({'message': 'quest/QuestAreaG:Stamp_SnowMountain010_060', 'getAttention': False})
            } {
                Stampman.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Stampman.SetFacialExpression({'expression': 'sleep'})
            }

            Stampman.SetFacialExpression({'expression': 'sad'})

            fork {
                Stampman.Talk({'message': 'quest/QuestAreaG:Stamp_SnowMountain010_070', 'getAttention': False})
            } {
                Stampman.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Stampman.AimDegreeAngle({'withoutTurn': False, 'angle': 150.0, 'duration': 0.4000000059604645, 'immediateTurn': False})
            }


            fork {
                Stampman.Talk({'message': 'quest/QuestAreaG:Stamp_SnowMountain010_080', 'getAttention': False})
            } {
                Stampman.SetFacialExpression({'expression': 'angry'})
            }

            Stampman.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

            fork {
                Stampman.Talk({'message': 'quest/QuestAreaG:Stamp_SnowMountain010_090', 'getAttention': False})
            } {
                Stampman.PlayAnimation({'name': 'laugh', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Stampman.SetFacialExpression({'expression': 'sad'})
            }

            QuestSystem.SetProgress({'symbol': 'Stamp_SnowMountain010:2529711788', 'isShowTelopInEvent': False, 'isFrontFade': False})

            call RegionBGM_ReStart()

          case [0, 1]:
            goto Event514
        }
      case [1, 2]:
        goto Event481
    }
}

void talk_snow020() {

    call EvResetCommon.AllReset()


    call StampGenBGM_On()

    Stampman.SetInterestIkEnabled({'enable': False})
    Stampman.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaG:Stamp_SnowMountain020_010', 'facial': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Stampman.Talk({'message': 'quest/QuestAreaG:Stamp_SnowMountain020_020', 'getAttention': False})
    } {
        Stampman.SetFacialExpression({'expression': 'sleep'})
    }

    Stampman.SetInterestIkEnabled({'enable': True})

    call RegionBGM_ReStart()

}

void _StampmanFirstAppear_snow() {
    Stampman.SetInterestIkEnabled({'enable': False})
    Player.AimActor({'actor': ActorIdentifier(name="Stampman"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Stampman.Talk({'message': 'quest/QuestAreaG:Stamp_SnowMountain030_070', 'getAttention': False})
    } {
        Stampman.PlayAnimation({'name': 'surprise_st,surprise_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.SetFacialExpression({'expression': 'surprise'})
    }


    fork {
        Stampman.Talk({'message': 'quest/QuestAreaG:Stamp_SnowMountain030_080', 'getAttention': False})
    } {
        Stampman.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.SetFacialExpression({'expression': 'smile'})
    }

    Player.AddItem({'itemKey': 'StampCard1st', 'index': 0, 'autoEquip': True, 'count': 1})
    Player.GenericItemGetSequence({'itemKey': 'StampCard1st', 'keepRaise': False, 'messageEntry': 'Stampman:GetStampCard', 'count': 1, 'index': -1})
    Partner.MoveToDefaultPosition({'speed': 1, 'position': 1, 'avoidPlayer': True, 'tolerance': 0.0, 'avoidWall': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
    Partner.EnableAutoMovement()
    Stampman.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaG:Stamp_SnowMountain030_090', 'playerTalkAnim': False, 'selfTalkAnimName': 'appeal,wait', 'facial': 'normal', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        StampRally.ShowUiRegisterStamp({'key': 'Stamp_08', 'wait': 0.10000000149011612})
    } {
        Timer.Wait({'time': 2.5})
        StampTable.PlayAnimation({'name': 'wait_done', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.EventFlowUiDucking({'label': 'BGM_STAMPMAN_WITHOUTINTRO', 'isEnable': True})
    }

    StampRally.RegisterStamp({'key': 'Stamp_08'})
    Audio.EventFlowUiDucking({'label': 'BGM_STAMPMAN_WITHOUTINTRO', 'isEnable': False})
}

void Stamp() {

    call EvResetCommon.AllReset()

    StampTable.SetComponentActive({'name': 'StampcollisionComp', 'active': False})
    StampRally.PreloadUiArchive()
    switch QuestSystem.CheckProgress({'symbol': 'StampRally:1289245387'}) {
      case 4294967295:
        GameControl.ResetSensorEventResetContainsActors({'eventReset': False, 'cemeteryRevive': False})

        call _StampManAppear()


        call _StampmanFirstAppear({'stampName': 'stampName'})


        call _StampManTalkFinish()

        Event632:

        call RegionBGM_ReStart()

      case [0, 1]:
        if !StampRally.IsRegisteredStamp({'key': 'stampName'}) {

            fork {
                StampRally.ShowUiRegisterStamp({'key': 'stampName', 'wait': 0.10000000149011612})
            } {
                Timer.Wait({'time': 0.5})
                StampTable.PlayAnimation({'name': 'wait_done', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Audio.EventFlowUiDucking({'label': 'BGM_STAMPMAN_WITHOUTINTRO', 'isEnable': True})
            } {
                GameControl.ResetSensorEventResetContainsActors({'eventReset': False, 'cemeteryRevive': False})
            }

            StampRally.RegisterStamp({'key': 'stampName'})
            Audio.EventFlowUiDucking({'label': 'BGM_STAMPMAN_WITHOUTINTRO', 'isEnable': False})
            GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
            if StampRally.IsFullStamp() {
                switch StampRally.GetNumStampCard() {
                  case 1:

                    call _StampManAppear()


                    call CompFirst()

                    goto Event632
                  case 2:

                    call _StampManAppear()


                    call CompSecond()

                    goto Event632
                  case 3:

                    call _StampManAppear()


                    call CompThird()

                    goto Event632
                  case 4:

                    call _StampManAppear()


                    call CompFourth()

                    goto Event632
                  case 5:

                    call _StampManAppear_fifth()


                    call CompFifth()

                    goto Event632
                }
            }
        } else {
            Stampman.Talk({'message': 'scenario/StampmanTalk:AlreadyStamped_010', 'getAttention': False})
        }
    }
}

void GetStampCard() {
    Dialog.Show({'message': 'ItemGet:StampCard1st'})
    QuestSystem.SetProgress({'symbol': 'StampRally:1289245387', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void _StampManAppear() {

    call EvResetCommon.AllReset()

    switch QuestSystem.GetStatus({'questKey': 'StampRally'}) {
      case 0:
        Stampman.SetTalkerName({'message': 'glossary/Character:Unknown', 'keep': False})
        Event16:
        Stampman.SetInterestIkEnabled({'enable': False})
        Stampman.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        StampTable.LookAtGimmick({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        switch QuestSystem.GetStatus({'questKey': 'StampRally'}) {
          case 0:

            fork {
                Stampman.Talk({'message': 'scenario/StampmanTalk:StampmanAppear_010', 'getAttention': False})
                Timer.Wait({'time': 0.5})

                fork {
                    Player.PlayAnimation({'name': 'search,$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                } {
                    Partner[companion].PlayAnimation({'name': 'lookaround02,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                }


                call StampBGM_On()

            } {

                call BGM_Off()

            }

            Event224:

            fork {
                Stampman.SetGravityEnable({'enable': False})
            } {
                Stampman.Activate()
            } {
                Stampman.SetPoseAdjusterBlendRate({'rate': 0.0, 'duration': 0.4000000059604645})
            } {
                Stampman.PlayAnimation({'name': 'fall_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }


            fork {
                Timer.Wait({'time': 0.30000001192092896})
                Zelda.SetInterestIkEnabled({'enable': True})
                Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Stampman"), 'offsetY': 0.0, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Partner[companion].SetInterestIkEnabled({'enable': True})
                Partner[companion].AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Stampman"), 'offsetY': 0.0, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }

            Stampman.ChangeSteeringAnimation({'walk': 'fall_lp', 'run': 'fall_lp', 'idle': '', 'layer': 0})
            Stampman.MoveToLinkedPoint({'index': 0, 'speed': 0, 'customSpeed': -4.0, 'timeOut': 10.0, 'withoutTurn': True, 'tolerance': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

            fork {
                Stampman.PlayAnimation({'name': 'land,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Stampman.SetPoseAdjusterBlendRate({'rate': 1.0, 'duration': 0.4000000059604645})
            } {
                Partner[companion].ResetAim()
                Partner[companion].AimActor({'actor': ActorIdentifier(name="Stampman"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Stampman.GenericTalkSequence({'aimToPlayer': False, 'selfTalkAnim': False, 'playerTalkAnim': False, 'cameraLookAt': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
            }

            Stampman.SetGravityEnable({'enable': True})
          case [1, 2]:

            fork {
                Stampman.Talk({'message': 'scenario/StampmanTalk:StampmanAppear_010', 'getAttention': False})

                call StampBGM_On()

                Timer.Wait({'time': 0.5})
            } {

                call BGM_Off()

            }

            goto Event224
        }
      case [1, 2]:
        goto Event16
    }
}

void _StampManTalkFinish() {
    Stampman.SetFacialExpression({'expression': 'normal'})

    fork {
        Player.AimActor({'actor': ActorIdentifier(name="Stampman"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Stampman.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }


    fork {
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Stampman"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].SetInterestIkEnabled({'enable': True})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Stampman"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Stampman.GenericTalkSequenceWithDialog({'message': 'scenario/StampmanTalk:StampmanTalkFinish_010', 'selfTalkAnim': True, 'selfTalkAnimName': 'talk', 'playerTalkAnim': False, 'aimToPlayer': False, 'facial': 'normal', 'aimFromPlayer': True, 'keepTalk': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})

    fork {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampmanTalkFinish_020', 'getAttention': False})
    } {
        Stampman.PlayAnimation({'name': 'appeal,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        if QuestSystem.CheckProgress({'symbol': 'StampRally:1289245387'}) {
            switch QuestSystem.CheckProgress({'symbol': 'StampRally:1274062720'}) {
              case [4294967295, 0]:
                Timer.Wait({'time': 1.0})
                Partner[companion].PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
              case 1:
                switch QuestSystem.CheckProgress({'symbol': 'StampRally:290675368'}) {
                  case [4294967295, 0]:
                    Timer.Wait({'time': 1.0})
                    Partner[companion].PlayAnimation({'name': 'appeal02', 'layer': 0, 'blendFrame': -1, 'restart': False})
                  case 1:
                    Timer.Wait({'time': 1.0})
                    Partner[companion].PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
                }
            }
        }
    } {
        Timer.Wait({'time': 1.2699999809265137})
        Audio.PlayOneshotSystemSE({'label': 'VO_STAMPMAN_008_7', 'volume': 1.0, 'pitch': 1.0})
    }

    StampTable.SetComponentActive({'active': False, 'name': 'doActionComp'})
    Stampman.KeepAnimationAfterEvent()
}

void _StampmanFirstAppear() {
    Stampman.SetInterestIkEnabled({'enable': False})

    fork {
        Stampman.GenericTalkSequenceWithDialog({'message': 'scenario/StampmanTalk:StampmanFirstAppear_010', 'aimToPlayer': False, 'aimFromPlayer': True, 'playerTalkAnim': False, 'selfTalkAnimName': 'appeal,wait', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner.WaitMoveDone({'timeout': 3.0})
        Partner.MoveToDefaultPosition({'speed': 1, 'position': 1, 'avoidPlayer': True, 'tolerance': 0.0, 'avoidWall': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Partner.EnableAutoMovement()
    }

    switch QuestSystem.GetStatus({'questKey': 'StampRally'}) {
      case 0:
        Stampman.SetTalkerName({'message': 'glossary/Character:Stampman', 'keep': False})
        Event197:
        Stampman.GenericTalkSequenceWithDialog({'message': 'scenario/StampmanTalk:StampmanFirstAppear_020', 'aimToPlayer': False, 'selfTalkAnim': False, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

        fork {
            Stampman.Talk({'message': 'scenario/StampmanTalk:StampmanFirstAppear_030', 'getAttention': False})
        } {
            Stampman.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            Stampman.Talk({'message': 'scenario/StampmanTalk:StampmanFirstAppear_040', 'getAttention': False})
        } {
            Stampman.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            Stampman.Talk({'message': 'scenario/StampmanTalk:StampmanFirstAppear_050', 'getAttention': False})
        } {
            Stampman.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Stampman.SetFacialExpression({'expression': 'smile'})
        }


        fork {
            Stampman.Talk({'message': 'scenario/StampmanTalk:StampmanFirstAppear_Q1_010', 'getAttention': False})
        } {
            Stampman.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Stampman.SetFacialExpression({'expression': 'wink'})
        }

        if !Dialog.GetLastResult({'resultOnSkip': 0}) {
            Event560:

            fork {
                Stampman.Talk({'message': 'scenario/StampmanTalk:StampmanFirstAppear_Q1_A1_0', 'getAttention': False})
            } {
                Stampman.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Stampman.SetFacialExpression({'expression': 'smile'})
            }

            Stampman.PlayAnimationNoWait({'blendFrame': -1, 'name': 'wait', 'layer': 0, 'restart': False})
            Partner.EnableAutoMovement()
            Player.GenericItemGetSequence({'itemKey': 'StampCard1st', 'keepRaise': False, 'messageEntry': 'Stampman:GetStampCard', 'count': 1, 'index': -1})
            Zelda.ResetFacialExpression()
            Zelda.SetInterestIkEnabled({'enable': True})
            Zelda.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Stampman"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Partner.MoveToDefaultPosition({'speed': 1, 'position': 1, 'avoidPlayer': True, 'tolerance': 0.0, 'avoidWall': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
            Partner.EnableAutoMovement()

            fork {
                Stampman.GenericTalkSequenceWithDialog({'message': 'scenario/StampmanTalk:StampmanFirstAppear_070', 'aimToPlayer': False, 'playerTalkAnim': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
            } {
                Stampman.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }


            fork {
                Stampman.Talk({'message': 'scenario/StampmanTalk:StampmanFirstAppear_080', 'getAttention': False})
            } {
                Stampman.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

            Audio.EventFlowUiDucking({'label': 'BGM_STAMPMAN_WITHINTRO', 'isEnable': True})
            StampRally.ShowUiRegisterStamp({'key': 'stampName', 'wait': 0.10000000149011612})
            StampRally.RegisterStamp({'key': 'stampName'})
            Audio.EventFlowUiDucking({'label': 'BGM_STAMPMAN_WITHINTRO', 'isEnable': False})

            fork {
                Stampman.Talk({'message': 'scenario/StampmanTalk:StampmanFirstAppear_090', 'getAttention': False})
            } {
                Stampman.PlayAnimation({'name': 'clap', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Stampman.SetFacialExpression({'expression': 'smile'})
            }


            fork {
                Stampman.Talk({'message': 'scenario/StampmanTalk:StampmanFirstAppear_091', 'getAttention': False})
            } {
                Stampman.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Stampman.ResetFacialExpression()
            }


            fork {
                Stampman.Talk({'message': 'scenario/StampmanTalk:StampmanFirstAppear_095', 'getAttention': False})
            } {
                Stampman.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }


            fork {
                Stampman.Talk({'message': 'scenario/StampmanTalk:StampmanFirstAppear_100', 'getAttention': False})
            } {
                Stampman.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Stampman.SetFacialExpression({'expression': 'smile'})
            }

            Stampman.SetInterestIkEnabled({'enable': True})
        } else {
            Zelda.SetFacialExpression({'expression': 'sad'})
            Event556:

            fork {
                Stampman.Talk({'message': 'scenario/StampmanTalk:StampmanFirstAppear_Q1_020', 'getAttention': False})
            } {
                Stampman.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Stampman.SetFacialExpression({'expression': 'smile'})
            }

            if !Dialog.GetLastResult({'resultOnSkip': 0}) {
                goto Event560
            } else {
                goto Event556
            }
        }
      case [1, 2]:
        goto Event197
    }
}

void GetStampCard2nd() {
    Dialog.Show({'message': 'ItemGet:StampCard2nd'})
    QuestSystem.SetProgress({'symbol': 'StampRally:2890240234', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void GetStampCard3rd() {
    Dialog.Show({'message': 'ItemGet:StampCard3rd'})
    QuestSystem.SetProgress({'symbol': 'StampRally:1274062720', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void GetStampCard4th() {
    Dialog.Show({'message': 'ItemGet:StampCard4th'})
    QuestSystem.SetProgress({'symbol': 'StampRally:290675368', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void GetStampCard5th() {
    Dialog.Show({'message': 'ItemGet:StampCard5th'})
    QuestSystem.SetProgress({'symbol': 'StampRally:277950623', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void CompFirst() {

    fork {
        Stampman.GenericTalkSequenceWithDialog({'aimToPlayer': False, 'message': 'scenario/StampmanTalk:StampCompFirst_010', 'selfTalkAnimName': 'appeal,wait', 'playerTalkAnim': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner.WaitMoveDone({'timeout': 3.0})
        Partner.MoveToDefaultPosition({'speed': 1, 'position': 1, 'avoidPlayer': True, 'tolerance': 0.0, 'avoidWall': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Partner.EnableAutoMovement()
    }


    fork {
        Stampman.SetFacialExpression({'expression': 'smile'})
    } {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFirst_015', 'getAttention': False})
    } {
        Stampman.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Stampman.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.AddItemAndGenericItemGetSequence({'itemKey': 'SmoothieIngredient06', 'count': 10, 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})
    Zelda.ResetFacialExpression()
    Zelda.SetInterestIkEnabled({'enable': True})
    Zelda.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Stampman"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Stampman.GenericTalkSequenceWithDialog({'message': 'scenario/StampmanTalk:StampCompFirst_Q1', 'aimToPlayer': True, 'playerTalkAnim': False, 'facial': 'normal', 'selfTalkAnim': True, 'aimFromPlayer': False, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner.MoveToDefaultPosition({'speed': 1, 'position': 1, 'avoidPlayer': True, 'tolerance': 0.0, 'avoidWall': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Partner.EnableAutoMovement()
    }

    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        fork {
            Stampman.SetFacialExpression({'expression': 'smile'})
        } {
            Stampman.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFirst_Q1_A1_010', 'getAttention': False})
        }

    } else {

        fork {
            Stampman.SetFacialExpression({'expression': 'smile'})
        } {
            Stampman.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFirst_Q1_A2_010', 'getAttention': False})
        }

    }

    fork {
        Stampman.ResetFacialExpression()
    } {
        Stampman.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFirst_030', 'getAttention': False})
    }


    fork {
        Stampman.SetFacialExpression({'expression': 'sad'})
    } {
        Stampman.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFirst_035', 'getAttention': False})
    }

    Stampman.ResetFacialExpression()
    Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFirst_040', 'getAttention': False})
    Stampman.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.AddItem({'index': 0, 'autoEquip': True, 'itemKey': 'StampCard2nd', 'count': 1})
    Player.GenericItemGetSequence({'keepRaise': False, 'itemKey': 'StampCard2nd', 'messageEntry': 'Stampman:GetStampCard2nd', 'count': 1, 'index': -1})
    Zelda.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Stampman"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].MoveToDefaultPosition({'speed': 1, 'position': 1, 'avoidPlayer': True, 'tolerance': 0.0, 'avoidWall': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
    Partner[companion].EnableAutoMovement()
    Stampman.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})

    call _StampManTalkFinish()

    Stampman.GenericTalkSequenceWithDialog({'aimFromPlayer': False, 'aimToPlayer': False, 'message': 'scenario/StampmanTalk:StampCompFirst_050', 'playerTalkAnim': False, 'facial': 'smile', 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Stampman.ResetFacialExpression()
    Stampman.KeepAnimationAfterEvent()
}

void CompSecond() {

    fork {
        Stampman.GenericTalkSequenceWithDialog({'message': 'scenario/StampmanTalk:StampCompSecond_010', 'aimToPlayer': False, 'selfTalkAnimName': 'appeal,wait', 'playerTalkAnim': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner.WaitMoveDone({'timeout': 3.0})
        Partner.MoveToDefaultPosition({'speed': 1, 'position': 1, 'avoidPlayer': True, 'tolerance': 0.0, 'avoidWall': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Partner.EnableAutoMovement()
    }


    fork {
        Stampman.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompSecond_015', 'getAttention': False})
    } {
        Stampman.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompSecond_020', 'getAttention': False})
    } {
        Stampman.PlayAnimationNoWait({'name': 'clap', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.SetFacialExpression({'expression': 'smile'})
    }

    Stampman.ResetFacialExpression()
    Stampman.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.AddItemAndGenericItemGetSequence({'messageEntry': '', 'itemKey': 'SmoothieIngredient15', 'count': 3, 'index': -1, 'autoEquip': False, 'keepRaise': False})
    Zelda.ResetFacialExpression()
    Zelda.SetInterestIkEnabled({'enable': True})
    Zelda.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Stampman"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Stampman.GenericTalkSequenceWithDialog({'message': 'scenario/StampmanTalk:StampCompSecond_030', 'selfTalkAnim': True, 'selfTalkAnimName': 'talk', 'facial': 'smile', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner.MoveToDefaultPosition({'speed': 1, 'position': 1, 'avoidPlayer': True, 'tolerance': 0.0, 'avoidWall': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Partner.EnableAutoMovement()
    }


    fork {
        Stampman.ResetFacialExpression()
    } {
        Stampman.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompSecond_040', 'getAttention': False})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="Stampman"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Player.AddItem({'index': 0, 'autoEquip': True, 'itemKey': 'StampCard3rd', 'count': 1})
    Player.GenericItemGetSequence({'keepRaise': False, 'itemKey': 'StampCard3rd', 'messageEntry': 'Stampman:GetStampCard3rd', 'count': 1, 'index': -1})
    Zelda.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Stampman"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner.MoveToDefaultPosition({'speed': 1, 'position': 1, 'avoidPlayer': True, 'tolerance': 0.0, 'avoidWall': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
    Partner.EnableAutoMovement()
    Stampman.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})

    call _StampManTalkFinish()

    Stampman.GenericTalkSequenceWithDialog({'aimToPlayer': False, 'message': 'scenario/StampmanTalk:StampCompSecond_050', 'selfTalkAnim': False, 'playerTalkAnim': False, 'facial': 'smile', 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Stampman.ResetFacialExpression()
    Stampman.KeepAnimationAfterEvent()
}

void CompThird() {

    fork {
        Stampman.GenericTalkSequenceWithDialog({'aimToPlayer': False, 'message': 'scenario/StampmanTalk:StampCompThird_010', 'selfTalkAnimName': 'appeal,wait', 'playerTalkAnim': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner.WaitMoveDone({'timeout': 3.0})
        Partner.MoveToDefaultPosition({'speed': 1, 'position': 1, 'avoidPlayer': True, 'tolerance': 0.0, 'avoidWall': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Partner.EnableAutoMovement()
    }


    fork {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompThird_015', 'getAttention': False})
    } {
        Stampman.SetFacialExpression({'expression': 'smile'})
    } {
        Stampman.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Stampman.ResetFacialExpression()
    Stampman.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.AddItem({'itemKey': 'Bottle', 'index': 1, 'count': 1, 'autoEquip': False})
    Player.GenericItemGetSequence({'itemKey': 'Bottle', 'messageEntry': '', 'count': 1, 'keepRaise': False, 'index': -1})
    Zelda.ResetFacialExpression()
    Zelda.SetInterestIkEnabled({'enable': True})
    Zelda.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Stampman"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Stampman.GenericTalkSequenceWithDialog({'message': 'scenario/StampmanTalk:StampCompThird_020', 'selfTalkAnimName': 'wait', 'facial': 'smile', 'aimFromPlayer': True, 'aimToPlayer': True, 'playerTalkAnim': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner.MoveToDefaultPosition({'speed': 1, 'position': 1, 'avoidPlayer': True, 'tolerance': 0.0, 'avoidWall': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Partner.EnableAutoMovement()
    }


    fork {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompThird_030', 'getAttention': False})
    } {
        Stampman.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.SetFacialExpression({'expression': 'sad'})
    }

    Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompThird_040', 'getAttention': False})

    fork {
        Stampman.GenericTalkSequenceWithDialog({'aimFromPlayer': False, 'aimToPlayer': False, 'message': 'scenario/StampmanTalk:StampCompThird_050', 'selfTalkAnim': True, 'selfTalkAnimName': 'wait', 'facial': 'smile', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Stampman.SetFacialExpression({'expression': 'normal'})
    } {
        Stampman.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompThird_060', 'getAttention': False})
    } {
        Stampman.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Stampman.GenericTalkSequenceWithDialog({'aimToPlayer': False, 'facial': 'normal', 'message': 'scenario/StampmanTalk:StampCompThird_Q1', 'playerTalkAnim': False, 'selfTalkAnimName': 'wait', 'selfTalkAnim': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Stampman.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        fork {
            Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompThird_Q1_A1_010', 'getAttention': False})
        } {
            Stampman.PlayAnimation({'name': 'appeal,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 1.0})
            Partner[companion].PlayAnimation({'name': 'appeal02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Event322:
        Stampman.GenericTalkSequenceWithDialog({'aimFromPlayer': False, 'aimToPlayer': False, 'message': 'scenario/StampmanTalk:StampCompThird_070', 'playerTalkAnim': False, 'selfTalkAnimName': 'talk', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        Stampman.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Player.AddItem({'index': 0, 'autoEquip': True, 'itemKey': 'StampCard4th', 'count': 1})
        Player.GenericItemGetSequence({'keepRaise': False, 'itemKey': 'StampCard4th', 'messageEntry': 'Stampman:GetStampCard4th', 'count': 1, 'index': -1})
        Zelda.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Stampman"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner.MoveToDefaultPosition({'speed': 1, 'position': 1, 'avoidPlayer': True, 'tolerance': 0.0, 'avoidWall': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Partner.EnableAutoMovement()

        fork {
            Zelda.SetInterestIkEnabled({'enable': True})
            Zelda.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Stampman"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].SetInterestIkEnabled({'enable': True})
            Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Stampman"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Stampman.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        Stampman.GenericTalkSequenceWithDialog({'message': 'scenario/StampmanTalk:StampCompThird_080', 'aimToPlayer': False, 'playerTalkAnim': False, 'facial': 'smile', 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': 'talk', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        Stampman.ResetFacialExpression()
        StampTable.SetComponentActive({'active': False, 'name': 'doActionComp'})
        Stampman.KeepAnimationAfterEvent()
    } else {

        fork {
            Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompThird_Q1_A1_010', 'getAttention': False})
        } {
            Stampman.PlayAnimation({'name': 'appeal,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 1.0})
            Partner[companion].PlayAnimation({'name': 'appeal02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            Stampman.GenericTalkSequenceWithDialog({'aimFromPlayer': False, 'aimToPlayer': False, 'message': 'scenario/StampmanTalk:StampCompThird_Q1_A1_020', 'selfTalkAnim': True, 'selfTalkAnimName': 'talk', 'facial': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Stampman.SetFacialExpression({'expression': 'smile'})
        } {
            Stampman.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        goto Event322
    }
}

void CompFourth() {

    fork {
        Stampman.GenericTalkSequenceWithDialog({'aimFromPlayer': True, 'message': 'scenario/StampmanTalk:StampCompFourth_010', 'selfTalkAnimName': 'appeal,wait', 'facial': '', 'playerTalkAnim': False, 'aimToPlayer': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner.WaitMoveDone({'timeout': 3.0})
        Partner.MoveToDefaultPosition({'speed': 1, 'position': 1, 'avoidPlayer': True, 'tolerance': 0.0, 'avoidWall': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Partner.EnableAutoMovement()
    }


    fork {
        Stampman.SetFacialExpression({'expression': 'smile'})
    } {
        Stampman.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFourth_030', 'getAttention': False})
    } {
        Stampman.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Stampman.ResetFacialExpression()
    Stampman.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.AddItemAndGenericItemGetSequence({'itemKey': 'ItemMachineCoupon', 'count': 5, 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})
    Zelda.ResetFacialExpression()
    Zelda.SetInterestIkEnabled({'enable': True})
    Zelda.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Stampman"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Stampman.GenericTalkSequenceWithDialog({'message': 'scenario/StampmanTalk:StampCompFourth_020', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': 'clap', 'facial': 'smile', 'playerTalkAnim': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner.MoveToDefaultPosition({'speed': 1, 'position': 1, 'avoidPlayer': True, 'tolerance': 0.0, 'avoidWall': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Partner.EnableAutoMovement()
    }


    fork {
        Stampman.ResetFacialExpression()
    } {
        Stampman.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFourth_040', 'getAttention': False})
    }


    fork {
        Stampman.SetFacialExpression({'expression': 'sleep'})
    } {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFourth_051', 'getAttention': False})
    }


    fork {
        Stampman.SetFacialExpression({'expression': 'smile'})
    } {
        Stampman.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFourth_052', 'getAttention': False})
    }


    fork {
        Stampman.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFourth_053', 'getAttention': False})
    }


    fork {
        Stampman.ResetFacialExpression()
    } {
        Stampman.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFourth_070', 'getAttention': False})
    }

    Stampman.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.AddItem({'index': 0, 'autoEquip': True, 'itemKey': 'StampCard5th', 'count': 1})
    Player.GenericItemGetSequence({'keepRaise': False, 'itemKey': 'StampCard5th', 'messageEntry': 'Stampman:GetStampCard5th', 'count': 1, 'index': -1})
    Zelda.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Stampman"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner.MoveToDefaultPosition({'speed': 1, 'position': 1, 'avoidPlayer': True, 'tolerance': 0.0, 'avoidWall': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
    Partner.EnableAutoMovement()
    Stampman.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})

    call _StampManTalkFinish()


    fork {
        Stampman.SetFacialExpression({'expression': 'smile'})
    } {
        Stampman.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFourth_080', 'getAttention': False})
    }

    Stampman.ResetFacialExpression()
    Stampman.KeepAnimationAfterEvent()
}

void CompFifth() {

    fork {
        Stampman.GenericTalkSequenceWithDialog({'message': 'scenario/StampmanTalk:StampCompFinal_011', 'selfTalkAnimName': 'appeal,wait', 'facial': 'smile', 'playerTalkAnim': False, 'aimToPlayer': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner.WaitMoveDone({'timeout': 3.0})
        Partner.MoveToDefaultPosition({'speed': 1, 'position': 1, 'avoidPlayer': True, 'tolerance': 0.0, 'avoidWall': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Partner.EnableAutoMovement()
    }


    fork {
        Stampman.SetFacialExpression({'expression': 'surprise'})
    } {
        Stampman.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFinal_020', 'getAttention': False})
    } {
        Stampman.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Stampman.SetFacialExpression({'expression': 'smile'})
    } {
        Stampman.PlayAnimationNoWait({'name': 'clap', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFinal_030', 'getAttention': False})
    }


    fork {
        Stampman.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFinal_040', 'getAttention': False})
    }


    fork {
        Stampman.SetFacialExpression({'expression': 'sleep'})
    } {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFinal_050', 'getAttention': False})
    }


    fork {
        Stampman.SetFacialExpression({'expression': 'smile'})
    } {
        Stampman.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFinal_060', 'getAttention': False})
    }


    fork {
        Stampman.SetFacialExpression({'expression': 'sleep'})
    } {
        Stampman.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFinal_070', 'getAttention': False})
    }


    fork {
        Stampman.SetFacialExpression({'expression': 'sleep'})
    } {
        Stampman.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFinal_080', 'getAttention': False})
    }


    fork {
        Stampman.ResetFacialExpression()
    } {
        Stampman.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFinal_090', 'getAttention': False})
    }


    fork {
        Stampman.SetFacialExpression({'expression': 'smile'})
    } {
        Stampman.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFinal_100', 'getAttention': False})
    }


    fork {
        Stampman.ResetFacialExpression()
    } {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFinal_110', 'getAttention': False})
    }


    fork {
        Stampman.SetFacialExpression({'expression': 'smile'})
    } {
        Stampman.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFinal_120', 'getAttention': False})
    }


    fork {
        Stampman.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFinal_130', 'getAttention': False})
    }

    Stampman.ResetFacialExpression()
    Stampman.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.AddItem({'itemKey': 'ZeldaClothes07', 'count': 1, 'index': -1, 'autoEquip': False})
    Player.GenericItemGetSequence({'itemKey': 'ZeldaClothes07', 'messageEntry': '', 'count': 1, 'keepRaise': False, 'index': -1})
    Zelda.ResetFacialExpression()
    Zelda.SetInterestIkEnabled({'enable': True})
    Zelda.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Stampman"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner.MoveToDefaultPosition({'speed': 1, 'position': 1, 'avoidPlayer': True, 'tolerance': 0.0, 'avoidWall': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
    Partner.EnableAutoMovement()
    Stampman.GenericTalkSequenceWithDialog({'message': 'scenario/StampmanTalk:StampCompFinal_140', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFinal_150', 'getAttention': False})
    Stampman.SetInterestIkEnabled({'enable': False})
    Stampman.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        Stampman.ResetFacialExpression()
    } {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFinal_160', 'getAttention': False})
    }

    Partner[companion].SetInterestIkEnabled({'enable': False})

    fork {
        Stampman.ResetFacialExpression()
    } {
        Stampman.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFinal_Q1', 'getAttention': False})
    }

    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        fork {
            Stampman.SetFacialExpression({'expression': 'smile'})
        } {
            Stampman.PlayAnimationNoWait({'name': 'appeal,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFinal_Q1_A1_010', 'getAttention': False})
        } {
            Timer.Wait({'time': 1.0})
            Partner[companion].PlayAnimation({'name': 'appeal', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Stampman.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Stampman.SetInterestIkEnabled({'enable': False})
        Event464:

        fork {
            Stampman.SetFacialExpression({'expression': 'smile'})
        } {
            Stampman.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFinal_170', 'getAttention': False})
        }

        Stampman.SetFacialExpression({'expression': 'smile'})
        Stampman.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        StampTable.SetComponentActive({'active': False, 'name': 'doActionComp'})
        Stampman.KeepAnimationAfterEvent()
        QuestSystem.Close({'questKey': 'StampRally', 'isShowTelopInEvent': False, 'isFrontFade': False})
        TransitCounters.SetValue({'value': 1, 'key': 'StampmanCleared'})
    } else {

        fork {
            Stampman.PlayAnimationNoWait({'name': 'appeal,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFinal_Q1_A1_010', 'getAttention': False})
        } {
            Timer.Wait({'time': 1.0})
            Partner[companion].PlayAnimation({'name': 'appeal', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Stampman.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Stampman.SetInterestIkEnabled({'enable': False})

        fork {
            Stampman.SetFacialExpression({'expression': 'smile'})
        } {
            Stampman.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFinal_Q1_A2_010', 'getAttention': False})
        }

        goto Event464
    }
}

void _StampManAppear_fifth() {

    call EvResetCommon.AllReset()

    Stampman.SetInterestIkEnabled({'enable': False})
    Stampman.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    StampTable.LookAtGimmick({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Stampman.SetFacialExpression({'expression': 'smile'})

    fork {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampCompFinal_010', 'getAttention': False})
    } {

        call BGM_Off()

    }


    call StampBGM_On()


    fork {
        Stampman.SetGravityEnable({'enable': False})
    } {
        Stampman.Activate()
    } {
        Stampman.SetPoseAdjusterBlendRate({'rate': 0.0, 'duration': 0.4000000059604645})
    } {
        Stampman.PlayAnimation({'name': 'fall_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Timer.Wait({'time': 0.30000001192092896})
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'withoutTurn': True, 'offsetY': 0.0, 'actor': ActorIdentifier(name="Stampman"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].SetInterestIkEnabled({'enable': True})
        Partner[companion].AimActor({'withoutTurn': True, 'offsetY': 0.0, 'actor': ActorIdentifier(name="Stampman"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Stampman.ChangeSteeringAnimation({'walk': 'fall_lp', 'run': 'fall_lp', 'idle': '', 'layer': 0})
    Stampman.MoveToLinkedPoint({'index': 0, 'speed': 0, 'customSpeed': -4.0, 'timeOut': 10.0, 'withoutTurn': True, 'tolerance': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        Stampman.ResetFacialExpression()
    } {
        Stampman.PlayAnimation({'name': 'land,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.SetPoseAdjusterBlendRate({'rate': 1.0, 'duration': 0.4000000059604645})
    }

    Stampman.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Stampman.SetGravityEnable({'enable': True})
}

void _StampManTalkFinishSnow() {

    fork {
        Stampman.Talk({'message': 'quest/QuestAreaG:Stamp_SnowMountain030_100', 'getAttention': False})
    } {
        Stampman.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        Stampman.Talk({'message': 'quest/QuestAreaG:Stamp_SnowMountain030_140', 'getAttention': False})
    } {
        Stampman.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.SetFacialExpression({'expression': 'normal'})
    } {
        Stampman.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }


    fork {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampmanTalkFinish_020', 'getAttention': False})
    } {
        Stampman.PlayAnimation({'name': 'appeal,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.2699999809265137})
        Audio.PlayOneshotSystemSE({'label': 'VO_STAMPMAN_008_7', 'volume': 1.0, 'pitch': 1.0})
    }

}

void StampChallengeClear() {
    Audio.StopRegionBgm({'fadeSec': 0.0})
    StampTable.Activate()
    Stampman.SetInterestIkEnabled({'enable': False})

    call WarpIn_Stamp()


    call EvResetCommon.AllReset()

    Timer.Wait({'time': 1.0})

    fork {
        Stampman.AimDegreeAngle({'angle': 150.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner.WaitMoveDone({'timeout': 3.0})
        Partner.MoveToDefaultPosition({'speed': 1, 'position': 1, 'avoidPlayer': True, 'tolerance': 0.0, 'avoidWall': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Partner.EnableAutoMovement()
    }


    call StampGenBGM_On()

    Stampman.SetComponentActive({'name': 'aimBlockerComp', 'active': True})
    Stampman.SetInterestIkEnabled({'enable': False})

    fork {
        Stampman.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaG:Stamp_SnowMountain030_010', 'aimToPlayer': False, 'playerTalkAnim': False, 'facial': 'sad', 'cameraLookAt': True, 'lookAtOffsetX': 1.0, 'selfTalkAnimName': 'laugh', 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner.AimActor({'actor': ActorIdentifier(name="Stampman"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Stampman.Talk({'message': 'quest/QuestAreaG:Stamp_SnowMountain030_020', 'getAttention': False})
    } {
        Stampman.SetFacialExpression({'expression': 'sleep'})
    }

    Stampman.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Stampman.Talk({'message': 'quest/QuestAreaG:Stamp_SnowMountain030_030', 'getAttention': False})
    } {
        Stampman.SetFacialExpression({'expression': 'sad'})
    }

    Stampman.AimDegreeAngle({'withoutTurn': False, 'angle': 150.0, 'duration': 0.4000000059604645, 'immediateTurn': False})
    Timer.Wait({'time': 1.5})

    fork {
        Stampman.Talk({'message': 'quest/QuestAreaG:Stamp_SnowMountain030_040', 'getAttention': False})
    } {
        Stampman.PlayAnimation({'name': 'surprise_st,surprise_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.SetFacialExpression({'expression': 'surprise'})
    }


    fork {
        Stampman.Talk({'message': 'quest/QuestAreaG:Stamp_SnowMountain030_050', 'getAttention': False})
    } {
        Stampman.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Stampman.SetFacialExpression({'expression': 'normal'})
    } {
        Stampman.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Stampman.Talk({'message': 'quest/QuestAreaG:Stamp_SnowMountain030_060', 'getAttention': False})
    } {
        Stampman.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        Stampman.Talk({'message': 'quest/QuestAreaG:Stamp_SnowMountain030_065', 'getAttention': False})
    } {
        Stampman.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Stampman.SetFacialExpression({'expression': 'normal'})
    switch QuestSystem.CheckProgress({'symbol': 'StampRally:1289245387'}) {
      case 4294967295:
        StampRally.PreloadUiArchive()

        call _StampmanFirstAppear_snow({'stampName': 'Stamp_08'})

        Event0:

        call _StampManTalkFinishSnow()

        Fade.StartPreset({'preset': 'FadeOutNormalB'})
        Stampman.Destroy()
        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
        Timer.Wait({'time': 1.0})
        Fade.StartPreset({'preset': 'FadeInNormal'})
        QuestSystem.Close({'questKey': 'Stamp_SnowMountain010', 'isShowTelopInEvent': False, 'isFrontFade': False})

        call RegionBGM_ReStart()

      case [0, 1]:
        goto Event0
    }
}

void talk010() {

    call StampGenBGM_On()

    Stampman.GenericTalkSequenceWithDialog({'message': 'scenario/StampmanTalk:StampmanTalk020_010', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    call RegionBGM_ReStart()

}

void talk030() {

    call StampGenBGM_On()

    Stampman.GenericTalkSequenceWithDialog({'message': 'scenario/StampmanTalk:StampmanTalk040_010', 'playerTalkAnim': False, 'facial': '', 'selfTalkAnimName': 'appeal,wait', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    call RegionBGM_ReStart()

}

void talk040() {

    call StampGenBGM_On()

    Stampman.GenericTalkSequenceWithDialog({'message': 'scenario/StampmanTalk:StampmanTalk050_010', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampmanTalk050_Q1', 'getAttention': False})
    } {
        Stampman.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        fork {
            Stampman.SetFacialExpression({'expression': 'smile'})
        } {
            Stampman.Talk({'message': 'scenario/StampmanTalk:StampmanTalk050_Q1_A1_010', 'getAttention': False})
        } {
            Stampman.PlayAnimation({'name': 'appeal,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        call RegionBGM_ReStart()

    } else {

        fork {
            Stampman.Talk({'message': 'scenario/StampmanTalk:StampmanTalk050_Q1_A1_010', 'getAttention': False})
        } {
            Stampman.PlayAnimation({'name': 'appeal,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            Stampman.Talk({'message': 'scenario/StampmanTalk:StampmanTalk050_Q1_A2_010', 'getAttention': False})
        } {
            Stampman.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            Stampman.Talk({'message': 'scenario/StampmanTalk:StampmanTalk050_Q2', 'getAttention': False})
        } {
            Stampman.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        if !Dialog.GetLastResult({'resultOnSkip': 1}) {

            fork {
                Stampman.Talk({'message': 'scenario/StampmanTalk:StampmanTalk050_Q1_A1_010', 'getAttention': False})
            } {
                Stampman.PlayAnimation({'name': 'appeal,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }


            call RegionBGM_ReStart()

        } else {

            fork {
                Stampman.Talk({'message': 'scenario/StampmanTalk:StampmanTalk050_Q1_A1_010', 'getAttention': False})
            } {
                Stampman.PlayAnimation({'name': 'appeal,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

            Stampman.Talk({'message': 'scenario/StampmanTalk:StampmanTalk050_Q2_A2_010', 'getAttention': False})

            call RegionBGM_ReStart()

        }
    }
}

void talk050() {

    call StampGenBGM_On()


    fork {
        Stampman.GenericTalkSequenceWithDialog({'message': 'scenario/StampmanTalk:StampmanTalk060_010', 'playerTalkAnim': False, 'selfTalkAnim': False, 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Stampman.PlayAnimation({'name': 'appeal,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.2699999809265137})
        Audio.PlayOneshotSystemSE({'label': 'VO_STAMPMAN_008_7', 'volume': 1.0, 'pitch': 1.0})
    }


    call RegionBGM_ReStart()

}

void talk_Stampsuit() {

    call StampGenBGM_On()

    Stampman.GenericTalkSequenceWithDialog({'message': 'scenario/StampmanTalk:StampmanTalkStampClothes_010', 'playerTalkAnim': False, 'facial': 'smile', 'selfTalkAnimName': 'clap', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampmanTalkStampClothes_020', 'getAttention': False})
    } {
        Stampman.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.ResetFacialExpression()
    }


    fork {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampmanTalkStampClothes_030', 'getAttention': False})
    } {
        Stampman.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.SetFacialExpression({'expression': 'smile'})
    }


    call RegionBGM_ReStart()

}

void talk060() {

    call StampGenBGM_On()


    fork {
        Stampman.GenericTalkSequenceWithDialog({'message': 'scenario/StampmanTalk:StampmanTalk070_010', 'playerTalkAnim': False, 'facial': 'smile', 'selfTalkAnim': False, 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Stampman.PlayAnimation({'name': 'appeal,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.2699999809265137})
        Audio.PlayOneshotSystemSE({'label': 'VO_STAMPMAN_008_7', 'volume': 1.0, 'pitch': 1.0})
    }


    call RegionBGM_ReStart()

}

void talk070() {

    call StampGenBGM_On()

    Stampman.GenericTalkSequenceWithDialog({'message': 'scenario/StampmanTalk:StampmanTalk080_010', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    call RegionBGM_ReStart()

}

void talk080() {

    call StampGenBGM_On()

    Stampman.GenericTalkSequenceWithDialog({'message': 'scenario/StampmanTalk:StampmanTalk090_010', 'playerTalkAnim': False, 'selfTalkAnimName': 'talk', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampmanTalk090_010_02', 'getAttention': False})
    } {
        Stampman.PlayAnimation({'name': 'appeal,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.2699999809265137})
        Audio.PlayOneshotSystemSE({'label': 'VO_STAMPMAN_008_7', 'volume': 1.0, 'pitch': 1.0})
    }


    call RegionBGM_ReStart()

}

void talk020() {

    call StampGenBGM_On()

    Stampman.GenericTalkSequenceWithDialog({'message': 'scenario/StampmanTalk:StampmanTalk030_010', 'facial': 'sleep', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    call RegionBGM_ReStart()

}

void talk_snow_1stStamp() {
    Stampman.GenericTalkSequenceWithDialog({'message': 'scenario/StampmanTalk:StampmanFirstAppear_010', 'aimFromPlayer': True, 'playerTalkAnim': False, 'selfTalkAnimName': 'appeal,wait', 'aimToPlayer': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Stampman.SetTalkerName({'message': 'glossary/Character:Stampman', 'keep': False})

    fork {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampmanFirstAppear_020', 'getAttention': False})
    } {
        Stampman.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Stampman.Talk({'message': 'scenario/StampmanTalk:StampmanFirstAppear_050', 'getAttention': False})
    } {
        Stampman.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Stampman.SetFacialExpression({'expression': 'smile'})
    } {
        Stampman.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Stampman.Talk({'message': 'quest/QuestAreaG:Stamp_SnowMountain010_052', 'getAttention': False})
    } {
        Stampman.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Stampman.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
}

void WarpIn_Stamp() {
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

    Stampman.SetComponentActive({'name': 'aimBlockerComp', 'active': False})

    fork {
        Timer.Wait({'time': 0.5})
    } {
        Stampman.SetInterestIkEnabled({'enable': True})
        Stampman.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void BGM_Off() {
    Audio.StopAllBGM({'duration': 1.0})
}

void StampBGM_On() {
    Audio.StartStampManBGM({'label': 'BGM_STAMPMAN_WITHINTRO'})
}

void RegionBGM_ReStart() {
    Audio.StopStampManBGM()
}

void StampGenBGM_On() {
    Audio.StopAllBGM({'duration': 1.0})
    Audio.StartStampManBGM({'label': 'BGM_STAMPMAN_WITHOUTINTRO'})
}
