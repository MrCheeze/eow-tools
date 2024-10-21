-------- EventFlow: QuestCatSeaside000 --------

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['RemoveDrink', 'AimDegreeAngle', 'WarpToActorLinkedPointWithCompassPoint', 'WarpToActorLinkedPoint', 'AimCompassPoint', 'AimActor', 'SetInterestIkEnabled']
queries: ['CheckOutfit', 'HasDrink']
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

Actor: QuestCatSeaside000
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimation', 'PlayAnimationEx', 'PlayAnimationNoWait', 'PlayOneshotSE', 'CatDoAcitonWait', 'LookAtTalker', 'GenericTalkSequence']
queries: []
params: None

Actor: HylianF011
entrypoint: None()
actions: ['Talk', 'SetFacialExpression', 'AimPlayer', 'PlayAnimation', 'AimActor', 'SetComponentActive', 'AimCompassPoint', 'SetInterestIkEnabled', 'ResetAim', 'LookAtTalker', 'PlayAnimationNoWait']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AddItemAndGenericItemGetSequence']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['AimCompassPoint']
queries: []
params: None

void talk() {
    QuestCatSeaside000.GenericTalkSequence({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': False, 'keepPersonalSpace': False, 'selfTalkAnimName': '', 'selfTalkAnim': False, 'cameraLookAt': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    QuestCatSeaside000.CatDoAcitonWait()
    Timer.Wait({'time': 1.5})
}

void Animal_Coast010_010() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event21:

        call EvResetCommon.AllReset()

        QuestCatSeaside000.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaB:Animal_Coast010_010', 'aimToPlayer': False, 'selfTalkAnim': True, 'playerTalkAnim': False, 'selfTalkAnimName': 'reaction02', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

        fork {
            QuestCatSeaside000.Talk({'message': 'quest/QuestAreaB:Animal_Coast010_020', 'getAttention': False})
        } {
            QuestCatSeaside000.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            QuestCatSeaside000.Talk({'message': 'quest/QuestAreaB:Animal_Coast010_030', 'getAttention': False})
        } {
            QuestCatSeaside000.PlayAnimation({'name': 'reaction02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HylianF011.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        } {
            Player.SetInterestIkEnabled({'enable': True})
            Player.AimActor({'actor': ActorIdentifier(name="HylianF011"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        fork {
            QuestCatSeaside000.Talk({'message': 'quest/QuestAreaB:Animal_Coast010_040', 'getAttention': False})
        } {
            QuestCatSeaside000.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 2.0})
        }

        QuestCatSeaside000.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        Timer.Wait({'time': 1.0})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="QuestCatSeaside000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 1.0})

        fork {
            QuestCatSeaside000.Talk({'message': 'quest/QuestAreaB:Animal_Coast010_050', 'getAttention': False})
        } {
            QuestCatSeaside000.PlayAnimation({'name': 'reaction02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            QuestCatSeaside000.Talk({'message': 'quest/QuestAreaB:Animal_Coast010_060', 'getAttention': False})
        } {
            QuestCatSeaside000.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            QuestCatSeaside000.Talk({'message': 'quest/QuestAreaB:Animal_Coast010_070', 'getAttention': False})
        } {
            QuestCatSeaside000.PlayAnimation({'name': 'reaction02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            QuestCatSeaside000.Talk({'message': 'quest/QuestAreaB:Animal_Coast010_080', 'getAttention': False})
        } {
            QuestCatSeaside000.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            QuestCatSeaside000.Talk({'message': 'quest/QuestAreaB:Animal_Coast010_090', 'getAttention': False})
        } {
            QuestCatSeaside000.PlayAnimation({'name': 'reaction02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        QuestCatSeaside000.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        QuestSystem.SetProgress({'symbol': 'Animal_Coast010:627969516', 'isShowTelopInEvent': False, 'isFrontFade': False})
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event21
    } else {

        call talk()

    }
}

void Animal_Coast010_015() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event113:
        if !Player.HasDrink({'symbol': 'Smoothie39'}) {
            QuestCatSeaside000.GenericTalkSequenceWithDialog({'aimToPlayer': False, 'playerTalkAnim': False, 'message': 'quest/QuestAreaB:Animal_Coast020_010', 'selfTalkAnimName': 'reaction02', 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

            fork {
                QuestCatSeaside000.Talk({'message': 'quest/QuestAreaB:Animal_Coast020_020', 'getAttention': False})
            } {
                QuestCatSeaside000.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

        } else {

            call EvResetCommon.AllReset()

            QuestCatSeaside000.GenericTalkSequenceWithDialog({'aimToPlayer': False, 'playerTalkAnim': False, 'message': 'quest/QuestAreaB:Animal_Coast030_005', 'selfTalkAnimName': 'reaction02', 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

            fork {
                QuestCatSeaside000.Talk({'message': 'quest/QuestAreaB:Animal_Coast030_007', 'getAttention': False})
            } {
                QuestCatSeaside000.PlayAnimation({'name': 'reaction02', 'layer': 0, 'blendFrame': -1, 'restart': False})
                QuestCatSeaside000.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                QuestCatSeaside000.PlayOneshotSE({'label': 'SE_NPC_CAT_REACTION1_01', 'volume': 1.0, 'pitch': 1.0})
            }

            Fade.StartPreset({'preset': 'FadeOutSlowB'})
            Timer.Wait({'time': 1.0})
            Player.RemoveDrink({'symbol': 'Smoothie39'})
            Player.WarpToActorLinkedPointWithCompassPoint({'offsetY': 0.0, 'index': 0, 'direction': 1, 'actor': ActorIdentifier(name="QuestCatSeaside000")})
            Player.AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
            Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HylianF011"), 'actor2': ActorIdentifier(name="Player"), 'duration': 0.0, 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
            Timer.Wait({'time': 2.0})
            Fade.StartPreset({'preset': 'FadeInSlow'})
            HylianF011.Talk({'message': 'quest/QuestAreaB:Animal_Coast030_010', 'getAttention': False})

            fork {
                HylianF011.Talk({'message': 'quest/QuestAreaB:Animal_Coast030_020', 'getAttention': False})
            } {
                HylianF011.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                HylianF011.SetFacialExpression({'expression': 'smile'})
            }

            Fade.StartPreset({'preset': 'FadeOutSlowB'})
            HylianF011.SetComponentActive({'name': 'FishingRod', 'active': False})
            HylianF011.Talk({'message': 'quest/QuestAreaB:Animal_Coast030_030', 'getAttention': False})
            HylianF011.Talk({'message': 'quest/QuestAreaB:Animal_Coast030_040', 'getAttention': False})
            HylianF011.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            HylianF011.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            HylianF011.SetInterestIkEnabled({'enable': False})
            HylianF011.ResetAim()
            Fade.StartPreset({'preset': 'FadeInSlow'})

            fork {
                HylianF011.Talk({'message': 'quest/QuestAreaB:Animal_Coast030_050', 'getAttention': False})
            } {
                HylianF011.PlayAnimation({'name': 'frightened02', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HylianF011.SetFacialExpression({'expression': 'smile'})
            }

            HylianF011.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

            fork {
                HylianF011.Talk({'message': 'quest/QuestAreaB:Animal_Coast030_060', 'getAttention': False})
            } {
                HylianF011.PlayAnimation({'name': 'happy03,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HylianF011.SetFacialExpression({'expression': 'smile'})
            }


            fork {
                HylianF011.Talk({'message': 'quest/QuestAreaB:Animal_Coast030_070', 'getAttention': False})
            } {
                HylianF011.PlayAnimation({'name': 'talk03', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HylianF011.SetFacialExpression({'expression': 'smile'})
            }

            HylianF011.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

            fork {
                QuestCatSeaside000.PlayAnimationEx({'name': 'reaction02', 'time': 3.0, 'layer': 0, 'blendFrame': -1, 'restart': False})
                QuestCatSeaside000.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Timer.Wait({'time': 3.0})

                fork {
                    HylianF011.SetInterestIkEnabled({'enable': True})
                    HylianF011.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="QuestCatSeaside000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                } {
                    Player.SetInterestIkEnabled({'enable': True})
                    Player.AimActor({'actor': ActorIdentifier(name="QuestCatSeaside000"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                }

            }


            fork {
                HylianF011.Talk({'message': 'quest/QuestAreaB:Animal_Coast030_080', 'getAttention': False})
            } {
                HylianF011.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HylianF011.SetFacialExpression({'expression': 'smile'})
            }

            HylianF011.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Player.AimActor({'actor': ActorIdentifier(name="HylianF011"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

            fork {
                HylianF011.Talk({'message': 'quest/QuestAreaB:Animal_Coast030_090', 'getAttention': False})
            } {
                HylianF011.PlayAnimation({'name': 'wait15', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HylianF011.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
            } {
                HylianF011.SetComponentActive({'name': 'FishingRod', 'active': True})
            }

            Timer.Wait({'time': 1.0})

            call _Animal_Coast010_end()

        }
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event113
    } else {

        call talk()

    }
}

void Animal_Coast010_end() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event15:
        QuestCatSeaside000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkAnimal:Cat_Quest010', 'selfTalkAnim': True, 'selfTalkAnimName': '', 'aimToPlayer': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event15
    } else {

        call talk()

    }
}

void _Animal_Coast010_end() {
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    Player.WarpToActorLinkedPoint({'offsetY': 0.0, 'actor': ActorIdentifier(name="QuestCatSeaside000"), 'index': 1})
    Player.AimDegreeAngle({'angle': 135.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor2': ActorIdentifier(name="Player"), 'actor1': ActorIdentifier(name="QuestCatSeaside000"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    QuestCatSeaside000.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 2.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})

    fork {
        QuestCatSeaside000.Talk({'message': 'quest/QuestAreaB:Animal_Coast030_140', 'getAttention': False})
    } {
        QuestCatSeaside000.PlayAnimation({'name': 'reaction02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        QuestCatSeaside000.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'WorldGlobePiece', 'count': 1, 'index': 70, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})

    fork {
        QuestCatSeaside000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'quest/QuestAreaB:Animal_Coast030_150', 'facial': 'normal', 'selfTalkAnimName': 'reaction02', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        QuestCatSeaside000.PlayAnimationNoWait({'name': 'reaction02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner.AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    QuestCatSeaside000.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    QuestSystem.SetProgress({'symbol': 'Animal_Coast010:507262401', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Animal_Coast010_010_Other() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event63:
        QuestCatSeaside000.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaB:Animal_Coast010_010', 'aimToPlayer': False, 'selfTalkAnim': True, 'playerTalkAnim': False, 'selfTalkAnimName': 'reaction02,wait02', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event63
    } else {

        call talk()

    }
}
