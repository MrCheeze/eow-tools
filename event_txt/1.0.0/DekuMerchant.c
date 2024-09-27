-------- EventFlow: DekuMerchant --------

Actor: DekuMerchant
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'PlayAnimation', 'SetInstanceVariableBool', 'Talk', 'SetComponentActive', 'PlayAnimationNoWait', 'LookAtTalker', 'SetFacialExpression', 'ResetFacialExpression', 'AimCompassPoint', 'SetTalkerName']
queries: ['GetInstanceVariableBool']
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult4']
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['GetStatus', 'CheckProgress']
params: None

Actor: Zelda
entrypoint: None()
actions: ['SmoothieGetSequence', 'SetSmoothieBottleContent', 'AimActor', 'WarpToActorLinkedPoint', 'ResetFacialExpression', 'WaitForReady', 'AddItemAndGenericItemGetSequence']
queries: ['HasEmptyDrink']
params: None

Actor: Player
entrypoint: None()
actions: ['AddItem', 'GenericItemGetSequence', 'SetInterestIkEnabled', 'AimActor', 'RemoveItem', 'ReplaceEquipedAccessory']
queries: ['HasSellableItems']
params: None

Actor: SmoothieUI
entrypoint: None()
actions: ['Destroy', 'Show', 'ShowPrevSmoothieMenu', 'SetMessageTagNewRecipeCount', 'WaitClose']
queries: ['GetResult', 'GetTotalIngredientCount', 'GetMadeRecipeCount']
params: None

Actor: FlowControl
entrypoint: None()
actions: ['SetCanSkip', 'CloseSkippableScope']
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
queries: ['CheckFlag']
params: None

Actor: ShopUI
entrypoint: None()
actions: ['ShowSell']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor', 'WarpToDefaultPosition', 'AimCompassPoint', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['EventFlowUiDucking']
queries: []
params: None

void FirstTalk() {

    call EvResetCommon.AllReset()


    fork {
        DekuMerchant.SetInstanceVariableBool({'name': 'DrinkSlot', 'value': False})
    } {
        DekuMerchant.SetInstanceVariableBool({'name': 'ReternMake', 'value': False})
    } {
        DekuMerchant.SetInstanceVariableBool({'value': False, 'name': 'NoIngredients'})
    }

    DekuMerchant.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
    DekuMerchant.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/DekuMerchantTalk:FirstTalk_Q1', 'selfTalkAnimName': 'happy', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:

        call _MakeFlow()

        if DekuMerchant.GetInstanceVariableBool({'name': 'DrinkSlot'}) {
            Event62:

            call talk010()

        }
      case 1:

        call _SellFlow()

        goto Event62
      case 2:

        call _DekuMerchantChat()

      case 3:

        call _Cancel()

    }
}

void _Finish() {
    SmoothieUI.Destroy()
    Timer.Wait({'time': 0.30000001192092896})
}

void _SmoothieMake() {
    FlowControl.SetCanSkip({'enable': True})
    DekuMerchant.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    DekuMerchant.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
    DekuMerchant.Talk({'message': 'scenario/DekuMerchantTalk:MakeSmoothie_010', 'getAttention': False})
    DekuMerchant.SetComponentActive({'name': 'aimControlComp', 'active': False})
    DekuMerchant.SetInstanceVariableBool({'name': 'MakeSmoothie', 'value': False})

    fork {
        DekuMerchant.PlayAnimation({'name': 'make_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            Player.SetInterestIkEnabled({'enable': True})
            Player.AimActor({'withoutTurn': True, 'offsetY': 0.0, 'actor': ActorIdentifier(name="DekuMerchant"), 'boneName': 'n_hara', 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].SetInterestIkEnabled({'enable': True})
            Partner[companion].AimActor({'withoutTurn': True, 'offsetY': 0.0, 'actor': ActorIdentifier(name="DekuMerchant"), 'boneName': 'n_hara', 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }


    fork {
        Event7:
        DekuMerchant.PlayAnimation({'name': 'make_lp', 'restart': True, 'layer': 0, 'blendFrame': -1})
        if !DekuMerchant.GetInstanceVariableBool({'name': 'MakeSmoothie'}) {
            goto Event7
        } else {

            fork {
                Player.SetInterestIkEnabled({'enable': False})
            } {
                Partner[companion].SetInterestIkEnabled({'enable': False})
            }

            DekuMerchant.PlayAnimation({'name': 'make_ed', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }
    } {
        DekuMerchant.Talk({'message': 'scenario/DekuMerchantTalk:MakeSmoothie_020', 'getAttention': False})
        DekuMerchant.SetInstanceVariableBool({'name': 'MakeSmoothie', 'value': True})
    }

    DekuMerchant.SetComponentActive({'name': 'aimControlComp', 'active': True})
    DekuMerchant.Talk({'message': 'scenario/DekuMerchantTalk:MakeSmoothie_030', 'getAttention': False})
    EventFlags.SetFlag({'symbol': 'DrinkMenu_Open', 'value': True})
    FlowControl.CloseSkippableScope()
}

void _Cancel() {
    DekuMerchant.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
    switch QuestSystem.GetStatus({'questKey': 'Jungle'}) {
      case [0, 1]:
        if !DekuMerchant.GetInstanceVariableBool({'name': 'ReternMake'}) {
            DekuMerchant.PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
            DekuMerchant.Talk({'message': 'scenario/DekuMerchantTalk:SmoothieMakeCancel_020', 'getAttention': False})
            Event25:

            call _Finish()

        } else {
            Event34:
            DekuMerchant.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
            DekuMerchant.Talk({'message': 'scenario/DekuMerchantTalk:SmoothieMakeCancel_010', 'getAttention': False})
            goto Event25
        }
      case 2:
        goto Event34
    }
}

void talk010() {

    call EvResetCommon.AllReset()

    DekuMerchant.ResetFacialExpression()

    fork {
        DekuMerchant.SetInstanceVariableBool({'name': 'DrinkSlot', 'value': False})
    } {
        DekuMerchant.SetInstanceVariableBool({'name': 'ReternMake', 'value': False})
    } {
        DekuMerchant.SetInstanceVariableBool({'value': False, 'name': 'NoIngredients'})
    }

    DekuMerchant.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})

    fork {
        DekuMerchant.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/DekuMerchantTalk:SmoothieQuestion_Q1', 'selfTalkAnimName': 'happy', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Zelda.AimActor({'actor': ActorIdentifier(name="DekuMerchant"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Event216:
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:

        call _MakeFlow()

        if DekuMerchant.GetInstanceVariableBool({'name': 'DrinkSlot'}) {
            Event226:

            call talk010_loop()

        }
      case 1:

        call _SellFlow()

        goto Event226
      case 2:

        call _DekuMerchantChat()

      case 3:

        call _Cancel()

    }
}

void _SmoothieFlow() {
    Audio.EventFlowUiDucking({'label': 'BGM_SHOP_SMOOTHIE', 'isEnable': True})
    if !DekuMerchant.GetInstanceVariableBool({'name': 'ReternMake'}) {
        SmoothieUI.Show({'symbol': 0})
    } else {
        SmoothieUI.ShowPrevSmoothieMenu()
    }

    fork {
        Zelda.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="DekuMerchant"), 'index': 0, 'offsetY': 0.0})
        Zelda.WaitForReady()
        Partner[companion].WarpToDefaultPosition({'avoidPlayer': True, 'avoidWall': True, 'position': 2})
        Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Zelda.AimActor({'actor': ActorIdentifier(name="DekuMerchant"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        DekuMerchant.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        DekuMerchant.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    SmoothieUI.WaitClose()
    Audio.EventFlowUiDucking({'label': 'BGM_SHOP_SMOOTHIE', 'isEnable': False})
    if !SmoothieUI.GetResult() {

        call _Cancel()

    } else {

        call _SmoothieMake()

        Zelda.SetSmoothieBottleContent()
        Zelda.SmoothieGetSequence()

        fork {
            DekuMerchant.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        } {
            DekuMerchant.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            Zelda.AimActor({'actor': ActorIdentifier(name="DekuMerchant"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner.AimActor({'actor': ActorIdentifier(name="DekuMerchant"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Zelda.ResetFacialExpression()

        call _Finish()

        DekuMerchant.SetInstanceVariableBool({'value': True, 'name': 'ReternMake'})

        call _MakeFlow()

    }
}

void _DekuMerchantChat() {
    switch QuestSystem.GetStatus({'questKey': 'Special_Jungle100'}) {
      case [0, 2]:
        DekuMerchant.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
        switch QuestSystem.GetStatus({'questKey': 'Jungle'}) {
          case 0:
            DekuMerchant.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            DekuMerchant.Talk({'message': 'scenario/DekuMerchantTalk:DekuMerchantTalk010_010', 'getAttention': False})
          case 1:
            DekuMerchant.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            DekuMerchant.Talk({'message': 'scenario/DekuMerchantTalk:DekuMerchantTalk020_010', 'getAttention': False})
          case 2:
            DekuMerchant.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            DekuMerchant.Talk({'message': 'scenario/DekuMerchantTalk:DekuMerchantTalk030_010', 'getAttention': False})
        }
      case 1:
        switch QuestSystem.CheckProgress({'symbol': 'Special_Jungle100:898154198'}) {
          case [4294967295, 0]:

            call Special_Jungle100_040()

          case 1:
            if QuestSystem.CheckProgress({'symbol': 'Special_Jungle100:514190613'}) in [4294967295, 0] {

                call Special_Jungle100_050()

            }
        }
    }
}

void Special_Jungle100_010() {
    DekuMerchant.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
    DekuMerchant.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaF:Special_Jungle100_010', 'aimToPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': 'talk', 'facial': '', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    DekuMerchant.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchant.Talk({'message': 'quest/QuestAreaF:Special_Jungle100_030', 'getAttention': False})
    } {
        DekuMerchant.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    DekuMerchant.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchant.Talk({'message': 'quest/QuestAreaF:Special_Jungle100_040', 'getAttention': False})
    } {
        DekuMerchant.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        DekuMerchant.SetFacialExpression({'expression': 'sleep'})
    }

    DekuMerchant.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchant.Talk({'message': 'quest/QuestAreaF:Special_Jungle100_050', 'getAttention': False})
    } {
        DekuMerchant.PlayAnimation({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    DekuMerchant.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchant.Talk({'message': 'quest/QuestAreaF:Special_Jungle100_060', 'getAttention': False})
    } {
        DekuMerchant.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        DekuMerchant.SetFacialExpression({'expression': 'normal'})
    }

    DekuMerchant.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchant.Talk({'message': 'quest/QuestAreaF:Special_Jungle100_070', 'getAttention': False})
    } {
        DekuMerchant.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    QuestSystem.SetProgress({'symbol': 'Special_Jungle100:898154198', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Special_Jungle100_020() {
    DekuMerchant.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
    DekuMerchant.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaF:Special_Jungle120_010', 'playerTalkAnim': False, 'facial': '', 'selfTalkAnimName': 'talk', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    DekuMerchant.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchant.Talk({'message': 'quest/QuestAreaF:Special_Jungle120_030', 'getAttention': False})
    } {
        DekuMerchant.SetFacialExpression({'expression': 'sleep'})
    }

    DekuMerchant.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    DekuMerchant.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchant.Talk({'message': 'quest/QuestAreaF:Special_Jungle120_050', 'getAttention': False})
    } {
        DekuMerchant.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        DekuMerchant.Talk({'message': 'quest/QuestAreaF:Special_Jungle120_060', 'getAttention': False})
    } {
        DekuMerchant.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Player.AddItem({'itemKey': 'Ornament09', 'count': 1, 'index': -1, 'autoEquip': False})
    Player.GenericItemGetSequence({'itemKey': 'Ornament09', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})

    fork {
        DekuMerchant.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaF:Special_Jungle120_070', 'facial': 'sleep', 'selfTalkAnimName': 'laugh', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner[companion].AimActor({'offsetX': -1.5, 'duration': 0.0, 'actor': ActorIdentifier(name="DekuMerchant"), 'withoutTurn': False, 'boneName': '', 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    DekuMerchant.Talk({'message': 'quest/QuestAreaF:Special_Jungle120_080', 'getAttention': False})
    DekuMerchant.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchant.Talk({'message': 'quest/QuestAreaF:Special_Jungle120_090', 'getAttention': False})
    } {
        DekuMerchant.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        DekuMerchant.SetFacialExpression({'expression': 'normal'})
    }

    QuestSystem.SetProgress({'symbol': 'Special_Jungle100:514190613', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Special_Jungle0100_030() {
    DekuMerchant.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
    DekuMerchant.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': '', 'message': 'quest/QuestAreaF:Special_Jungle140_010', 'selfTalkAnimName': 'talk', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    DekuMerchant.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchant.Talk({'message': 'quest/QuestAreaF:Special_Jungle140_030', 'getAttention': False})
    } {
        DekuMerchant.SetFacialExpression({'expression': 'sleep'})
    }

    DekuMerchant.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchant.Talk({'message': 'quest/QuestAreaF:Special_Jungle140_040', 'getAttention': False})
    } {
        DekuMerchant.PlayAnimation({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        DekuMerchant.SetFacialExpression({'expression': 'normal'})
    }

    DekuMerchant.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchant.Talk({'message': 'quest/QuestAreaF:Special_Jungle140_050', 'getAttention': False})
    } {
        DekuMerchant.PlayAnimation({'name': 'laugh', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    DekuMerchant.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchant.Talk({'message': 'quest/QuestAreaF:Special_Jungle140_060', 'getAttention': False})
    } {
        DekuMerchant.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    DekuMerchant.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.AddItem({'itemKey': 'Ornament10', 'count': 1, 'index': -1, 'autoEquip': False})
    Player.GenericItemGetSequence({'itemKey': 'Ornament10', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Player.ReplaceEquipedAccessory({'accessoryReplacement': 0})
    Player.RemoveItem({'itemKey': 'Ornament09', 'count': 1, 'index': -1})

    fork {
        DekuMerchant.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaF:Special_Jungle140_070', 'selfTalkAnimName': 'talk', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner[companion].AimActor({'offsetX': -1.5, 'duration': 0.0, 'actor': ActorIdentifier(name="DekuMerchant"), 'withoutTurn': False, 'boneName': '', 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    DekuMerchant.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchant.Talk({'message': 'quest/QuestAreaF:Special_Jungle140_080', 'getAttention': False})
    } {
        DekuMerchant.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    DekuMerchant.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchant.Talk({'message': 'quest/QuestAreaF:Special_Jungle140_090', 'getAttention': False})
    } {
        DekuMerchant.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    QuestSystem.SetProgress({'symbol': 'Special_Jungle100:249202427', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void _MakeFlow() {
    DekuMerchant.ResetFacialExpression()
    if !SmoothieUI.GetMadeRecipeCount({'recipeNum': 1}) {
        Event73:
        if !SmoothieUI.GetTotalIngredientCount({'num': 2}) {
            if !SmoothieUI.GetMadeRecipeCount({'recipeNum': 1}) {
                DekuMerchant.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
                DekuMerchant.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
                DekuMerchant.Talk({'message': 'scenario/DekuMerchantTalk:NoRecipe_010', 'getAttention': False})
            } else {
                Event234:
                DekuMerchant.SetInstanceVariableBool({'name': 'ReternMake', 'value': False})
                if !Zelda.HasEmptyDrink() {
                    DekuMerchant.SetFacialExpression({'expression': 'sleep'})
                    DekuMerchant.PlayAnimationNoWait({'name': 'surprise_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    DekuMerchant.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
                    DekuMerchant.Talk({'message': 'scenario/DekuMerchantTalk:SmoothieQuestion_Q1_A2_030', 'getAttention': False})
                    DekuMerchant.SetInstanceVariableBool({'name': 'DrinkSlot', 'value': True})
                } else {
                    DekuMerchant.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
                    if !DekuMerchant.GetInstanceVariableBool({'name': 'NoIngredients'}) {
                        DekuMerchant.Talk({'message': 'scenario/DekuMerchantTalk:NoMaterials_010', 'getAttention': False})
                        DekuMerchant.SetInstanceVariableBool({'name': 'NoIngredients', 'value': True})
                        Event204:

                        call _SmoothieFlow()

                    } else {
                        goto Event204
                    }
                }
            }
        } else
        if !Zelda.HasEmptyDrink() {
            goto Event234
        } else {
            goto Event204
        }
    } else
    switch QuestSystem.CheckProgress({'symbol': 'Special_Jungle100:898154198'}) {
      case 4294967295:

        call Special_Jungle100_010()

      case [0, 1]:
        if !SmoothieUI.GetMadeRecipeCount({'recipeNum': 10}) {
            goto Event73
        } else
        switch QuestSystem.CheckProgress({'symbol': 'Special_Jungle100:514190613'}) {
          case 4294967295:

            call Special_Jungle100_020()

          case [0, 1]:
            if !SmoothieUI.GetMadeRecipeCount({'recipeNum': 30}) {
                goto Event73
            } else
            switch QuestSystem.CheckProgress({'symbol': 'Special_Jungle100:249202427'}) {
              case 4294967295:

                call Special_Jungle0100_030()

              case [0, 1]:
                if !SmoothieUI.GetMadeRecipeCount({'recipeNum': 69}) {
                    goto Event73
                } else
                if !EventFlags.CheckFlag({'symbol': 'SmoothieComplete'}) {

                    call SmoothieComplete()

                } else
                goto Event73
            }
        }
    }
}

void _SellFlow() {
    if !Player.HasSellableItems() {
        DekuMerchant.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
        DekuMerchant.Talk({'message': 'scenario/DekuMerchantTalk:DekuMerchant_NotHaveItem_010', 'getAttention': False})
    } else {
        DekuMerchant.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
        ShopUI.ShowSell({'choose': 'scenario/DekuMerchantTalk:DekuMerchant_ChooseSell_010', 'howMany': 'scenario/DekuMerchantTalk:DekuMerchant_HowManySell_010', 'confirm': 'scenario/DekuMerchantTalk:DekuMerchantTalk_SellConfirm_010', 'multipleConfirm': 'scenario/DekuMerchantTalk:DekuMerchantTalk_SellConfirm_010', 'sold': 'scenario/DekuMerchantTalk:MakeSmoothie_040'})
    }
}

void talk010_loop() {
    DekuMerchant.SetInstanceVariableBool({'name': 'DrinkSlot', 'value': False})
    DekuMerchant.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})

    fork {
        DekuMerchant.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/DekuMerchantTalk:SmoothieQuestion_Q1', 'selfTalkAnimName': 'happy', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        DekuMerchant.ResetFacialExpression()
    }

    goto Event216
}

void Special_Jungle100_040() {
    DekuMerchant.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
    DekuMerchant.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaF:Special_Jungle110_010', 'aimToPlayer': True, 'selfTalkAnim': True, 'facial': '', 'selfTalkAnimName': 'talk', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    DekuMerchant.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchant.Talk({'message': 'quest/QuestAreaF:Special_Jungle110_020', 'getAttention': False})
    } {
        DekuMerchant.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void Special_Jungle100_050() {
    SmoothieUI.SetMessageTagNewRecipeCount({'targetCount': 20, 'offset': 10})
    DekuMerchant.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
    DekuMerchant.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaF:Special_Jungle130_010', 'aimToPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': 'talk', 'facial': '', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    DekuMerchant.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchant.Talk({'message': 'quest/QuestAreaF:Special_Jungle130_020', 'getAttention': False})
    } {
        DekuMerchant.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void SmoothieComplete() {
    DekuMerchant.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})

    fork {
        DekuMerchant.PlayAnimation({'name': 'surprise_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        DekuMerchant.Talk({'message': 'scenario/DekuMerchantTalk:SmoothieCompTalk_010', 'getAttention': False})
    }


    fork {
        DekuMerchant.PlayAnimation({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        DekuMerchant.Talk({'message': 'scenario/DekuMerchantTalk:SmoothieCompTalk_020', 'getAttention': False})
    }

    DekuMerchant.PlayAnimation({'name': 'laugh', 'layer': 0, 'blendFrame': -1, 'restart': False})
    DekuMerchant.Talk({'message': 'scenario/DekuMerchantTalk:SmoothieCompTalk_030', 'getAttention': False})
    DekuMerchant.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'SmoothieIngredient15', 'count': 10, 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})

    fork {
        DekuMerchant.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'talk', 'message': 'scenario/DekuMerchantTalk:SmoothieCompTalk_040', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="DekuMerchant"), 'offsetX': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        DekuMerchant.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        DekuMerchant.Talk({'message': 'scenario/DekuMerchantTalk:SmoothieCompTalk_050', 'getAttention': False})
    }

    DekuMerchant.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchant.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        DekuMerchant.Talk({'message': 'scenario/DekuMerchantTalk:SmoothieCompTalk_060', 'getAttention': False})
    }

    EventFlags.SetFlag({'symbol': 'SmoothieComplete', 'value': True})
}
