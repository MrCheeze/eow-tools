-------- EventFlow: DekuMerchantBranchCommon --------

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult4']
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['CheckProgress']
params: None

Actor: Zelda
entrypoint: None()
actions: ['SmoothieGetSequence', 'SetSmoothieBottleContent', 'AimActor', 'WarpToActorLinkedPoint', 'ResetFacialExpression', 'WaitForReady', 'AddItemAndGenericItemGetSequence']
queries: ['HasEmptyDrink']
params: None

Actor: Player
entrypoint: None()
actions: ['AddItem', 'GenericItemGetSequence', 'RemoveItem', 'ReplaceEquipedAccessory']
queries: ['HasSellableItems']
params: None

Actor: SmoothieUI
entrypoint: None()
actions: ['Destroy', 'Show', 'ShowPrevSmoothieMenu', 'WaitClose']
queries: ['GetResult', 'GetTotalIngredientCount', 'GetMadeRecipeCount']
params: None

Actor: FlowControl
entrypoint: None()
actions: ['SetCanSkip', 'CloseSkippableScope']
queries: []
params: None

Actor: DekuMerchantBranch
entrypoint: None()
actions: ['PlayAnimation', 'Talk', 'SetComponentActive', 'GenericTalkSequenceWithDialog', 'PlayAnimationNoWait', 'LookAtTalker', 'SetInstanceVariableBool', 'KeepAnimationAfterEvent', 'ResetFacialExpression', 'SetFacialExpression', 'AimCompassPoint', 'SetTalkerName']
queries: ['GetInstanceVariableBool']
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: ShopUI
entrypoint: None()
actions: ['ShowSell']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['StartSmoothieShopBGM', 'EventFlowUiDucking']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor', 'WarpToDefaultPosition', 'AimCompassPoint']
queries: []
params: None

void FirstTalk() {

    call EvResetCommon.AllReset()


    fork {
        DekuMerchantBranch.SetInstanceVariableBool({'name': 'DrinkSlot', 'value': False})
    } {
        DekuMerchantBranch.SetInstanceVariableBool({'name': 'ReternMake', 'value': False})
    } {
        DekuMerchantBranch.SetInstanceVariableBool({'value': False, 'name': 'NoIngredients'})
    } {
        DekuMerchantBranch.SetInstanceVariableBool({'value': False, 'name': 'QuestTalk'})
    }

    Audio.StartSmoothieShopBGM({'label': 'BGM_SHOP_SMOOTHIE'})

    fork {

        call _PutAwaySmoothie()

    } {
        DekuMerchantBranch.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
        DekuMerchantBranch.GenericTalkSequenceWithDialog({'message': 'scenario/DekuMerchantTalk:BranchFirstTalk_Q1', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }

    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:

        call _MakeFlow()

        if !DekuMerchantBranch.GetInstanceVariableBool({'name': 'DrinkSlot'}) {
            Event119:
            if !EventFlags.CheckFlag({'symbol': 'DekuBrotherTalk'}) {

                call _EndTalk()

            }
        } else {
            Event63:

            call talk010_loop()

        }
      case 1:

        call _SellFlow()

        goto Event63
      case 2:
        goto Event119
    }
}

void _Finish() {
    SmoothieUI.Destroy()
    Timer.Wait({'time': 0.30000001192092896})
}

void _SmoothieMake() {
    FlowControl.SetCanSkip({'enable': True})
    DekuMerchantBranch.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    DekuMerchantBranch.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
    DekuMerchantBranch.Talk({'message': 'scenario/DekuMerchantTalk:MakeSmoothie_010', 'getAttention': False})
    DekuMerchantBranch.SetComponentActive({'name': 'aimControlComp', 'active': False})
    DekuMerchantBranch.SetInstanceVariableBool({'name': 'MakeSmoothie', 'value': False})
    DekuMerchantBranch.PlayAnimation({'name': 'make02_st', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Event7:
        DekuMerchantBranch.PlayAnimation({'name': 'make02_lp', 'restart': True, 'layer': 0, 'blendFrame': -1})
        if !DekuMerchantBranch.GetInstanceVariableBool({'name': 'MakeSmoothie'}) {
            goto Event7
        } else {
            DekuMerchantBranch.PlayAnimation({'name': 'make02_ed', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }
    } {
        DekuMerchantBranch.Talk({'message': 'scenario/DekuMerchantTalk:MakeSmoothie_020', 'getAttention': False})
        DekuMerchantBranch.SetInstanceVariableBool({'name': 'MakeSmoothie', 'value': True})
    }

    DekuMerchantBranch.SetComponentActive({'name': 'aimControlComp', 'active': True})
    DekuMerchantBranch.Talk({'message': 'scenario/DekuMerchantTalk:MakeSmoothie_030', 'getAttention': False})
    EventFlags.SetFlag({'symbol': 'DrinkMenu_Open', 'value': True})
    FlowControl.CloseSkippableScope()
}

void _Cancel() {
    DekuMerchantBranch.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    DekuMerchantBranch.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
    DekuMerchantBranch.Talk({'message': 'scenario/DekuMerchantTalk:BranchSmoothieMakeCancel_010', 'getAttention': False})

    call _TakeOutSmoothie()

}

void talk010() {

    call EvResetCommon.AllReset()

    Audio.StartSmoothieShopBGM({'label': 'BGM_SHOP_SMOOTHIE'})

    fork {
        DekuMerchantBranch.SetInstanceVariableBool({'name': 'DrinkSlot', 'value': False})
    } {
        DekuMerchantBranch.SetInstanceVariableBool({'name': 'ReternMake', 'value': False})
    } {
        DekuMerchantBranch.SetInstanceVariableBool({'value': False, 'name': 'NoIngredients'})
    } {
        DekuMerchantBranch.SetInstanceVariableBool({'value': False, 'name': 'QuestTalk'})
    }


    fork {

        call _PutAwaySmoothie()

    } {
        DekuMerchantBranch.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
        DekuMerchantBranch.GenericTalkSequenceWithDialog({'message': 'scenario/DekuMerchantTalk:SmoothieQuestion_Q1', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }

    Event31:
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:

        call _MakeFlow()

        if !DekuMerchantBranch.GetInstanceVariableBool({'name': 'DrinkSlot'}) {
            if !EventFlags.CheckFlag({'symbol': 'DekuBrotherTalk'}) {

                call _EndTalk()

                Event101:

                call _TakeOutSmoothie()

            } else
            switch QuestSystem.CheckProgress({'symbol': 'Special_Jungle100:898154198'}) {
              case 4294967295:
                Event124:

                call _Cancel()

                goto Event101
              case 0:
                if !DekuMerchantBranch.GetInstanceVariableBool({'name': 'QuestTalk'}) {
                    goto Event124
                }
                goto Event101
              case 1:
                switch QuestSystem.CheckProgress({'symbol': 'Special_Jungle100:514190613'}) {
                  case 4294967295:
                    goto Event124
                  case 0:
                    if !DekuMerchantBranch.GetInstanceVariableBool({'name': 'QuestTalk'}) {
                        goto Event124
                    }
                    goto Event101
                  case 1:
                    switch QuestSystem.CheckProgress({'symbol': 'Special_Jungle100:249202427'}) {
                      case 4294967295:
                        goto Event124
                      case 0:
                        if !DekuMerchantBranch.GetInstanceVariableBool({'name': 'QuestTalk'}) {
                            Event315:
                            if !EventFlags.CheckFlag({'symbol': 'SmoothieComplete'}) {
                                goto Event124
                            } else
                            if !EventFlags.CheckFlag({'symbol': 'SmoothieCompleteTalkEnd'}) {
                                EventFlags.SetFlag({'symbol': 'SmoothieCompleteTalkEnd', 'value': True})
                            } else {
                                goto Event124
                            }
                            goto Event101
                        } else {
                            goto Event101
                        }
                      case 1:
                        goto Event315
                    }
                }
            }
        } else {
            Event104:

            call talk010_loop()

        }
      case 1:

        call _SellFlow()

        goto Event104
      case 2:
        DekuMerchantBranch.SetInstanceVariableBool({'value': True, 'name': 'DekuMerchantBranchChat'})
      case 3:
        if !EventFlags.CheckFlag({'symbol': 'DekuBrotherTalk'}) {

            call _EndTalk()

        } else {

            call _Cancel()

        }
    }
}

void _SmoothieFlow() {
    Audio.EventFlowUiDucking({'label': 'BGM_SHOP_SMOOTHIE', 'isEnable': True})
    if !DekuMerchantBranch.GetInstanceVariableBool({'name': 'ReternMake'}) {
        SmoothieUI.Show({'symbol': 0})
    } else {
        SmoothieUI.ShowPrevSmoothieMenu()
    }

    fork {
        Zelda.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="DekuMerchantBranch"), 'index': 0, 'offsetY': 0.0})
        Zelda.WaitForReady()
        Partner[companion].WarpToDefaultPosition({'avoidPlayer': True, 'avoidWall': True, 'position': 2})
        Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Zelda.AimActor({'actor': ActorIdentifier(name="DekuMerchantBranch"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        DekuMerchantBranch.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    SmoothieUI.WaitClose()
    Audio.EventFlowUiDucking({'label': 'BGM_SHOP_SMOOTHIE', 'isEnable': False})
    if SmoothieUI.GetResult() {

        call _SmoothieMake()

        Zelda.SetSmoothieBottleContent()
        Zelda.SmoothieGetSequence()

        fork {
            DekuMerchantBranch.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        } {
            DekuMerchantBranch.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            Zelda.AimActor({'actor': ActorIdentifier(name="DekuMerchantBranch"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner.AimActor({'actor': ActorIdentifier(name="DekuMerchantBranch"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Zelda.ResetFacialExpression()

        call _Finish()

        DekuMerchantBranch.SetInstanceVariableBool({'value': True, 'name': 'ReternMake'})

        call _MakeFlow()

    }
}

void _PutAwaySmoothie() {
    DekuMerchantBranch.ResetFacialExpression()

    fork {

        fork {
            DekuMerchantBranch.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        } {
            Zelda.AimActor({'actor': ActorIdentifier(name="DekuMerchantBranch"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    } {

        fork {
            DekuMerchantBranch.PlayAnimation({'name': 'put_away,happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            DekuMerchantBranch.SetComponentActive({'name': 'DekuSmoothie_R', 'active': False})
        } {
            DekuMerchantBranch.SetComponentActive({'name': 'DekuSmoothie_L', 'active': False})
        }

    }

}

void _TakeOutSmoothie() {
    DekuMerchantBranch.ResetFacialExpression()

    fork {
        DekuMerchantBranch.PlayAnimation({'name': 'take_out,wait_smoothie', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})

        fork {
            DekuMerchantBranch.SetComponentActive({'name': 'DekuSmoothie_R', 'active': True})
        } {
            DekuMerchantBranch.SetComponentActive({'name': 'DekuSmoothie_L', 'active': True})
        }

    }

    DekuMerchantBranch.KeepAnimationAfterEvent()
}

void _MakeFlow() {
    DekuMerchantBranch.ResetFacialExpression()
    if !SmoothieUI.GetMadeRecipeCount({'recipeNum': 1}) {
        Event88:
        if !SmoothieUI.GetTotalIngredientCount({'num': 2}) {
            if !SmoothieUI.GetMadeRecipeCount({'recipeNum': 1}) {
                DekuMerchantBranch.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
                DekuMerchantBranch.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
                DekuMerchantBranch.Talk({'message': 'scenario/DekuMerchantTalk:NoRecipe_010', 'getAttention': False})
            } else {
                Event125:
                DekuMerchantBranch.SetInstanceVariableBool({'name': 'ReternMake', 'value': False})
                DekuMerchantBranch.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
                if !Zelda.HasEmptyDrink() {
                    DekuMerchantBranch.SetFacialExpression({'expression': 'sleep'})
                    DekuMerchantBranch.PlayAnimationNoWait({'name': 'surprise_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    DekuMerchantBranch.Talk({'message': 'scenario/DekuMerchantTalk:SmoothieQuestion_Q1_A2_030', 'getAttention': False})
                    DekuMerchantBranch.SetInstanceVariableBool({'name': 'DrinkSlot', 'value': True})
                } else
                if !DekuMerchantBranch.GetInstanceVariableBool({'name': 'NoIngredients'}) {
                    DekuMerchantBranch.Talk({'message': 'scenario/DekuMerchantTalk:NoMaterials_010', 'getAttention': False})
                    DekuMerchantBranch.SetInstanceVariableBool({'name': 'NoIngredients', 'value': True})
                    Event108:

                    call _SmoothieFlow()

                } else {
                    goto Event108
                }
            }
        } else
        if !Zelda.HasEmptyDrink() {
            goto Event125
        } else {
            goto Event108
        }
    } else
    switch QuestSystem.CheckProgress({'symbol': 'Special_Jungle100:898154198'}) {
      case 4294967295:

        call Special_Jungle100_010()

      case [0, 1]:
        if !SmoothieUI.GetMadeRecipeCount({'recipeNum': 10}) {
            goto Event88
        } else
        switch QuestSystem.CheckProgress({'symbol': 'Special_Jungle100:514190613'}) {
          case 4294967295:

            call Special_Jungle100_020()

          case [0, 1]:
            if !SmoothieUI.GetMadeRecipeCount({'recipeNum': 30}) {
                goto Event88
            } else
            switch QuestSystem.CheckProgress({'symbol': 'Special_Jungle100:249202427'}) {
              case 4294967295:

                call Special_Jungle0100_030()

              case [0, 1]:
                if !SmoothieUI.GetMadeRecipeCount({'recipeNum': 69}) {
                    goto Event88
                } else
                if !EventFlags.CheckFlag({'symbol': 'SmoothieComplete'}) {

                    call SmoothieComplete()

                } else
                goto Event88
            }
        }
    }
}

void _SellFlow() {
    if !Player.HasSellableItems() {
        DekuMerchantBranch.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
        DekuMerchantBranch.Talk({'message': 'scenario/DekuMerchantTalk:DekuMerchant_NotHaveItem_010', 'getAttention': False})
    } else {
        DekuMerchantBranch.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
        ShopUI.ShowSell({'choose': 'scenario/DekuMerchantTalk:DekuMerchant_ChooseSell_010', 'howMany': 'scenario/DekuMerchantTalk:DekuMerchant_HowManySell_010', 'confirm': 'scenario/DekuMerchantTalk:DekuMerchantTalk_SellConfirm_010', 'multipleConfirm': 'scenario/DekuMerchantTalk:DekuMerchantTalk_SellConfirm_010', 'sold': 'scenario/DekuMerchantTalk:MakeSmoothie_040'})
    }
}

void _EndTalk() {
    DekuMerchantBranch.ResetFacialExpression()
    DekuMerchantBranch.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    DekuMerchantBranch.Talk({'message': 'scenario/DekuMerchantTalk:BranchFirstTalk_010', 'getAttention': False})
    EventFlags.SetFlag({'symbol': 'DekuBrotherTalk', 'value': True})

    call _TakeOutSmoothie()

}

void talk010_loop() {
    DekuMerchantBranch.SetInstanceVariableBool({'name': 'DrinkSlot', 'value': False})

    fork {
        DekuMerchantBranch.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
        DekuMerchantBranch.GenericTalkSequenceWithDialog({'message': 'scenario/DekuMerchantTalk:SmoothieQuestion_Q1', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        DekuMerchantBranch.ResetFacialExpression()
    }

    goto Event31
}

void Special_Jungle100_010() {
    DekuMerchantBranch.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
    DekuMerchantBranch.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaF:Special_Jungle100_010', 'aimToPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': 'talk', 'facial': '', 'keepPersonalSpace': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle100_030', 'getAttention': False})
    } {
        DekuMerchantBranch.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle100_040', 'getAttention': False})
    } {
        DekuMerchantBranch.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        DekuMerchantBranch.SetFacialExpression({'expression': 'sleep'})
    }

    DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle100_050', 'getAttention': False})
    } {
        DekuMerchantBranch.PlayAnimation({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle100_060', 'getAttention': False})
    } {
        DekuMerchantBranch.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        DekuMerchantBranch.SetFacialExpression({'expression': 'normal'})
    }

    DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle100_070', 'getAttention': False})
    } {
        DekuMerchantBranch.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    EventFlags.SetFlag({'symbol': 'Smoothie001', 'value': True})
    DekuMerchantBranch.SetInstanceVariableBool({'name': 'QuestTalk', 'value': True})
    QuestSystem.SetProgress({'symbol': 'Special_Jungle100:898154198', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Special_Jungle100_020() {
    DekuMerchantBranch.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
    DekuMerchantBranch.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaF:Special_Jungle120_010', 'playerTalkAnim': False, 'facial': '', 'selfTalkAnimName': 'talk', 'keepPersonalSpace': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle120_030', 'getAttention': False})
    } {
        DekuMerchantBranch.SetFacialExpression({'expression': 'sleep'})
    }

    DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle120_050', 'getAttention': False})
    } {
        DekuMerchantBranch.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle120_060', 'getAttention': False})
    } {
        DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Player.AddItem({'itemKey': 'Ornament09', 'count': 1, 'index': -1, 'autoEquip': False})
    Player.GenericItemGetSequence({'itemKey': 'Ornament09', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})

    fork {
        DekuMerchantBranch.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaF:Special_Jungle120_070', 'facial': 'sleep', 'selfTalkAnimName': 'laugh', 'keepPersonalSpace': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner[companion].AimActor({'offsetX': -1.5, 'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="DekuMerchantBranch"), 'withoutTurn': False, 'boneName': '', 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle120_080', 'getAttention': False})
    DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle120_090', 'getAttention': False})
    } {
        DekuMerchantBranch.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        DekuMerchantBranch.SetFacialExpression({'expression': 'normal'})
    }

    DekuMerchantBranch.SetInstanceVariableBool({'name': 'QuestTalk', 'value': True})
    QuestSystem.SetProgress({'symbol': 'Special_Jungle100:514190613', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Special_Jungle0100_030() {
    DekuMerchantBranch.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
    DekuMerchantBranch.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': '', 'message': 'quest/QuestAreaF:Special_Jungle140_010', 'selfTalkAnimName': 'talk', 'keepPersonalSpace': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle140_030', 'getAttention': False})
    } {
        DekuMerchantBranch.SetFacialExpression({'expression': 'sleep'})
    }

    DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle140_040', 'getAttention': False})
    } {
        DekuMerchantBranch.PlayAnimation({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        DekuMerchantBranch.SetFacialExpression({'expression': 'normal'})
    }

    DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle140_050', 'getAttention': False})
    } {
        DekuMerchantBranch.PlayAnimation({'name': 'laugh', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle140_060', 'getAttention': False})
    } {
        DekuMerchantBranch.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.AddItem({'itemKey': 'Ornament10', 'count': 1, 'index': -1, 'autoEquip': False})
    Player.GenericItemGetSequence({'itemKey': 'Ornament10', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Player.ReplaceEquipedAccessory({'accessoryReplacement': 0})
    Player.RemoveItem({'itemKey': 'Ornament09', 'count': 1, 'index': -1})

    fork {
        DekuMerchantBranch.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaF:Special_Jungle140_070', 'selfTalkAnimName': 'talk', 'keepPersonalSpace': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner[companion].AimActor({'offsetX': -1.5, 'actor': ActorIdentifier(name="DekuMerchantBranch"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle140_080', 'getAttention': False})
    } {
        DekuMerchantBranch.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle140_090', 'getAttention': False})
    } {
        DekuMerchantBranch.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    DekuMerchantBranch.SetInstanceVariableBool({'name': 'QuestTalk', 'value': True})
    QuestSystem.SetProgress({'symbol': 'Special_Jungle100:249202427', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void SmoothieComplete() {
    DekuMerchantBranch.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})

    fork {
        DekuMerchantBranch.PlayAnimation({'name': 'surprise_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        DekuMerchantBranch.Talk({'message': 'scenario/DekuMerchantTalk:SmoothieCompTalk_010', 'getAttention': False})
    }


    fork {
        DekuMerchantBranch.PlayAnimation({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        DekuMerchantBranch.Talk({'message': 'scenario/DekuMerchantTalk:SmoothieCompTalk_020', 'getAttention': False})
    }

    DekuMerchantBranch.PlayAnimation({'name': 'laugh', 'layer': 0, 'blendFrame': -1, 'restart': False})
    DekuMerchantBranch.Talk({'message': 'scenario/DekuMerchantTalk:SmoothieCompTalk_030', 'getAttention': False})
    DekuMerchantBranch.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'SmoothieIngredient15', 'count': 10, 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})

    fork {
        DekuMerchantBranch.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'talk', 'message': 'scenario/DekuMerchantTalk:SmoothieCompTalk_040', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="DekuMerchantBranch"), 'offsetX': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        DekuMerchantBranch.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        DekuMerchantBranch.Talk({'message': 'scenario/DekuMerchantTalk:SmoothieCompTalk_050', 'getAttention': False})
    }

    DekuMerchantBranch.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchantBranch.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        DekuMerchantBranch.Talk({'message': 'scenario/DekuMerchantTalk:SmoothieCompTalk_060', 'getAttention': False})
    }

    EventFlags.SetFlag({'symbol': 'SmoothieComplete', 'value': True})
}
