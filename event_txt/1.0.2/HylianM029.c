-------- EventFlow: HylianM029 --------

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: HylianM029
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SkipAutoTurn', 'PlayAnimationNoWait', 'SetFacialExpression', 'PlayAnimation', 'KeepAnimationAfterEvent', 'SetInterestIkEnabled', 'GenericTalkSequence']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
params: None

Actor: Player
entrypoint: None()
actions: ['DisappearRidingHorse']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag', 'CheckFlag']
params: None

Actor: Zelda
entrypoint: None()
actions: ['AddItemAndGenericItemGetSequence']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor', 'MoveToTargetActor']
queries: []
params: None

void talk010() {
    HylianM029.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': 'think01', 'message': 'scenario/HylianGeneralTalk:HylianM029Talk010_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianM029.SkipAutoTurn()
}

void talk020() {
    HylianM029.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': 'think01', 'message': 'scenario/HylianGeneralTalk:HylianM029Talk020_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianM029.SkipAutoTurn()
}

void talk030() {
    HylianM029.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'scenario/HylianGeneralTalk:HylianM029Talk030_010', 'aimToPlayer': True, 'selfTalkAnimName': '', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianM029.SetFacialExpression({'expression': 'smile'})
    HylianM029.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianM029.Talk({'message': 'scenario/HylianGeneralTalk:HylianM029Talk030_020', 'getAttention': False})
    HylianM029.SkipAutoTurn()
}

void BigBari_Coast010_010() {
    Player.DisappearRidingHorse()

    call EvResetCommon.AllReset()

    HylianM029.SetInterestIkEnabled({'enable': False})
    if !EventFlags.CheckMessgaeFlag({'message': 'quest/QuestAreaB:BigBari_Coast010_010'}) {

        fork {
            HylianM029.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': 'talk13', 'message': 'quest/QuestAreaB:BigBari_Coast010_010', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="HylianM029"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        if !Dialog.GetLastResult({'resultOnSkip': 1}) {

            fork {
                HylianM029.Talk({'message': 'quest/QuestAreaB:BigBari_Coast010_020', 'getAttention': False})
            } {
                HylianM029.SetFacialExpression({'expression': 'sleep'})
            } {
                HylianM029.PlayAnimationNoWait({'name': 'yes01,wait04', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

        } else {

            fork {
                HylianM029.Talk({'message': 'quest/QuestAreaB:BigBari_Coast010_030', 'getAttention': False})
            } {
                HylianM029.SetFacialExpression({'expression': 'sleep'})
            } {
                HylianM029.PlayAnimationNoWait({'name': 'yes01,wait04', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

        }

        fork {
            HylianM029.Talk({'message': 'quest/QuestAreaB:BigBari_Coast010_040', 'getAttention': False})
        } {
            HylianM029.SetFacialExpression({'expression': 'normal'})
        } {
            HylianM029.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HylianM029.Talk({'message': 'quest/QuestAreaB:BigBari_Coast010_050', 'getAttention': False})
        } {
            HylianM029.SetFacialExpression({'expression': 'sad'})
        } {
            HylianM029.PlayAnimationNoWait({'name': 'sad_st02,sad_lp02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HylianM029.Talk({'message': 'quest/QuestAreaB:BigBari_Coast010_060', 'getAttention': False})
        } {
            HylianM029.PlayAnimationNoWait({'name': 'wait04', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HylianM029.SetFacialExpression({'expression': 'sleep'})
        }


        fork {
            HylianM029.Talk({'message': 'quest/QuestAreaB:BigBari_Coast010_070', 'getAttention': False})
        } {
            HylianM029.PlayAnimation({'name': 'angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HylianM029.SetFacialExpression({'expression': 'surprise'})
        }


        fork {
            HylianM029.Talk({'message': 'quest/QuestAreaB:BigBari_Coast010_080', 'getAttention': False})
        } {
            HylianM029.PlayAnimationNoWait({'name': 'sad_st01,sad_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HylianM029.SetFacialExpression({'expression': 'sad'})
        }

        if !EventFlags.CheckFlag({'symbol': 'EvB_BigBariDead'}) {
            HylianM029.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': 'angry', 'message': 'quest/QuestAreaB:BigBari_Coast010_090', 'selfTalkAnimName': 'yes01,wait02', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
            if !Dialog.GetLastResult({'resultOnSkip': 1}) {
                Event43:

                fork {
                    HylianM029.Talk({'message': 'quest/QuestAreaB:BigBari_Coast010_110', 'getAttention': False})
                } {
                    HylianM029.PlayAnimation({'name': 'yes01,happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
                } {
                    HylianM029.SetFacialExpression({'expression': 'smile'})
                }


                fork {
                    HylianM029.Talk({'message': 'quest/QuestAreaB:BigBari_Coast010_120', 'getAttention': False})
                } {
                    HylianM029.PlayAnimation({'name': 'no01,wait04', 'layer': 0, 'blendFrame': -1, 'restart': False})
                } {
                    HylianM029.SetFacialExpression({'expression': 'sleep'})
                }


                fork {
                    HylianM029.Talk({'message': 'quest/QuestAreaB:BigBari_Coast010_130', 'getAttention': False})
                } {
                    HylianM029.PlayAnimation({'name': 'talk03', 'layer': 0, 'blendFrame': -1, 'restart': False})
                } {
                    HylianM029.SetFacialExpression({'expression': 'angry'})
                }

                QuestSystem.SetProgress({'symbol': 'BigBari_Coast010:890541211', 'isShowTelopInEvent': False, 'isFrontFade': False})
            } else {

                fork {
                    HylianM029.Talk({'message': 'quest/QuestAreaB:BigBari_Coast020_030', 'getAttention': False})
                } {
                    HylianM029.PlayAnimation({'name': 'look', 'layer': 0, 'blendFrame': -1, 'restart': False})
                } {
                    HylianM029.SetFacialExpression({'expression': 'surprise'})
                }

            }
        } else {
            HylianM029.GenericTalkSequenceWithDialog({'selfTalkAnimName': 'wait02', 'playerTalkAnim': False, 'facial': 'angry', 'message': 'quest/QuestAreaB:BigBari_Coast010_092', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
            Event170:

            call GeneralSequence.ZeldaTalkMotion()

            Timer.Wait({'time': 0.5})

            fork {
                HylianM029.Talk({'message': 'quest/QuestAreaB:BigBari_Coast030_032', 'getAttention': False})
            } {
                HylianM029.PlayAnimation({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HylianM029.SetFacialExpression({'expression': 'surprise'})
            }

            QuestSystem.SetProgress({'symbol': 'BigBari_Coast010:890541211', 'isShowTelopInEvent': False, 'isFrontFade': False})
            Event77:

            fork {
                HylianM029.Talk({'message': 'quest/QuestAreaB:BigBari_Coast030_040', 'getAttention': False})
            } {
                HylianM029.PlayAnimationNoWait({'name': 'no01,laugh01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HylianM029.SetFacialExpression({'expression': 'smile'})
            }


            fork {
                HylianM029.Talk({'message': 'quest/QuestAreaB:BigBari_Coast030_050', 'getAttention': False})
            } {
                HylianM029.PlayAnimation({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HylianM029.SetFacialExpression({'expression': 'surprise'})
            }


            fork {
                HylianM029.Talk({'message': 'quest/QuestAreaB:BigBari_Coast030_060', 'getAttention': False})
            } {
                HylianM029.PlayAnimation({'name': 'angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }


            fork {
                HylianM029.Talk({'message': 'quest/QuestAreaB:BigBari_Coast030_090', 'getAttention': False})
            } {
                HylianM029.PlayAnimation({'name': 'yes01,talk03', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HylianM029.SetFacialExpression({'expression': 'smile'})
            }

            HylianM029.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Zelda.AddItemAndGenericItemGetSequence({'count': 1, 'itemKey': 'Bottle', 'index': 3, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})
            HylianM029.GenericTalkSequence({'playerTalkAnim': False, 'aimToPlayer': False, 'selfTalkAnimName': '', 'selfTalkAnim': False, 'keepPersonalSpace': False, 'facial': '', 'unmorph': False, 'disableSyncRodBallFollow': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
            Partner[companion].MoveToTargetActor({'offsetY': 1.0, 'speed': 1, 'distance': 0.0, 'actor': ActorIdentifier(name="Player"), 'offsetX': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})

            fork {
                HylianM029.Talk({'message': 'quest/QuestAreaB:BigBari_Coast030_100', 'getAttention': False})
            } {
                Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="HylianM029"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                HylianM029.PlayAnimationNoWait({'name': 'angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HylianM029.SetFacialExpression({'expression': 'surprise'})
            }

            HylianM029.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            HylianM029.KeepAnimationAfterEvent()
            QuestSystem.SetProgress({'symbol': 'BigBari_Coast010:239512758', 'isShowTelopInEvent': False, 'isFrontFade': False})
        }
    } else
    if !EventFlags.CheckFlag({'symbol': 'EvB_BigBariDead'}) {

        fork {
            HylianM029.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'message': 'quest/QuestAreaB:BigBari_Coast010_100', 'facial': 'smile', 'selfTalkAnimName': 'yes01,wait02', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="HylianM029"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        if !Dialog.GetLastResult({'resultOnSkip': 1}) {
            goto Event43
        } else {

            fork {
                HylianM029.Talk({'message': 'quest/QuestAreaB:BigBari_Coast020_040', 'getAttention': False})
            } {
                HylianM029.PlayAnimationNoWait({'name': 'look', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HylianM029.SetFacialExpression({'expression': 'surprise'})
            }

        }
    } else {

        fork {
            HylianM029.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaB:BigBari_Coast010_140', 'selfTalkAnimName': 'yes01,wait02', 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="HylianM029"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        goto Event170
    }
}

void BigBari_Coast010_015() {
    HylianM029.SetInterestIkEnabled({'enable': False})
    HylianM029.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'message': 'quest/QuestAreaB:BigBari_Coast020_010', 'facial': 'angry', 'selfTalkAnimName': 'no01,wait04', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        HylianM029.PlayAnimationNoWait({'name': 'talk03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM029.Talk({'message': 'quest/QuestAreaB:BigBari_Coast020_020', 'getAttention': False})
    }

}

void BigBari_Coast010_end() {
    Player.DisappearRidingHorse()

    call EvResetCommon.AllReset()


    fork {
        HylianM029.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'facial': 'sad', 'message': 'quest/QuestAreaB:BigBari_Coast030_020', 'selfTalkAnimName': 'talk13', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="HylianM029"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        HylianM029.Talk({'message': 'quest/QuestAreaB:BigBari_Coast030_030', 'getAttention': False})
    } {
        HylianM029.PlayAnimation({'name': 'look', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM029.SetFacialExpression({'expression': 'surprise'})
    }


    call GeneralSequence.ZeldaTalkMotion()

    goto Event77
}

void BigBari_Coast010_Complete() {
    HylianM029.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'message': 'scenario/HylianGeneralTalk:HylianM029Talk040_010', 'selfTalkAnimName': 'yes01,talk03', 'facial': 'smile', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        HylianM029.Talk({'message': 'scenario/HylianGeneralTalk:HylianM029Talk040_020', 'getAttention': False})
    } {
        HylianM029.PlayAnimation({'name': 'angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM029.SetFacialExpression({'expression': 'surprise'})
    }

    HylianM029.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianM029.KeepAnimationAfterEvent()
}

void talk040() {
    HylianM029.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': 'think01', 'aimToPlayer': True, 'message': 'scenario/HylianGeneralTalk:HylianM029Talk040_010', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianM029.Talk({'message': 'scenario/HylianGeneralTalk:HylianM029Talk040_020', 'getAttention': False})
    HylianM029.SkipAutoTurn()
}
