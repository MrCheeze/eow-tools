-------- EventFlow: HylianF004 --------

Actor: HylianF004
entrypoint: None()
actions: ['OpenShopUI', 'CloseShopUI', 'PlayAnimationNoWait', 'GenericTalkSequenceWithDialog', 'Talk', 'LookAtTalker', 'AimPlayer', 'SetComponentActive', 'SetInstanceVariableString', 'AimActor', 'TalkKeep', 'SetFacialExpression', 'PlayAnimation']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['ShowKeep', 'Show']
queries: ['GetLastResult4']
params: None

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag']
params: None

Actor: Player
entrypoint: None()
actions: ['GenericItemGetSequence', 'AimActor']
queries: ['HasItem']
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

Actor: Hud
entrypoint: None()
actions: ['ShowRupee']
queries: []
params: None

Actor: ShopUI
entrypoint: None()
actions: ['ShowBuy', 'BuyMultiple', 'SetItemCount']
queries: ['GetBuyResult', 'CanBuy']
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: []
queries: ['Branch']
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

void Ranch() {
    HylianF004.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait01'})

    fork {
        HylianF004.GenericTalkSequenceWithDialog({'message': 'ShopKeeperTalk:RanchShop_BuyCheck_010', 'selfTalkAnim': True, 'aimToPlayer': True, 'playerTalkAnim': False, 'selfTalkAnimName': 'talk01', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        HylianF004.SetComponentActive({'active': False, 'name': 'Brush'})
    }

    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        HylianF004.OpenShopUI()
        ShopUI.ShowBuy({'itemKey': 'SmoothieIngredient06', 'price': 'price', 'confirm': 'ShopKeeperTalk:RanchShop_BuyConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:RanchShop_BuyConfirm_010', 'explanation': 'ShopKeeperTalk:RanchShop_Buying_Ranch_010'})
        Hud.ShowRupee({'visible': True})
        switch ShopUI.GetBuyResult() {
          case 0:

            call _CancelTalk({'TalkAnime': 'talk01', 'Message': 'ShopKeeperTalk:RanchShop_NotBuying_010'})

            HylianF004.CloseShopUI()

            call _talkFinish()

          case 1:

            call _purchase({'price': 'price', 'messasgeEntry': 'HylianF004:RanchSingle'})


            call _talkFinish()

          case 2:

            call _purchase({'price': 'price', 'messasgeEntry': 'HylianF004:RanchMulti'})


            call _talkFinish()

        }
      case 1:
        HylianF004.Talk({'message': 'scenario/HylianGeneralTalk:HylianF004Talk020_010', 'getAttention': False})
        Event83:

        call _talkFinish()

      case 2:
        HylianF004.Talk({'message': 'ShopKeeperTalk:RanchShop_BuyCheckBye_010', 'getAttention': False})
        goto Event83
    }
}

void _GeneralTalk() {

    fork {
        HylianF004.Talk({'message': 'Message', 'getAttention': False})
    } {
        HylianF004.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {
        Zelda.AimActor({'actor': ActorIdentifier(name="HylianF004"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HylianF004.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HylianF004.PlayAnimationNoWait({'name': 'TalkAnime', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void _CancelTalk() {

    fork {
        HylianF004.Talk({'message': 'Message', 'getAttention': False})
    } {
        Zelda.AimActor({'actor': ActorIdentifier(name="HylianF004"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HylianF004.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HylianF004.PlayAnimationNoWait({'name': 'TalkAnime', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void RanchSingle() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient06'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient06'}) {
        Dialog.ShowKeep({'message': 'ItemGet:Ingredient06'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:Ingredient06'})
    }
}

void RanchMulti() {
    ShopUI.SetItemCount()
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient06'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient06'}) {
        Dialog.ShowKeep({'message': 'ItemGet:ItemGet_Ingredient06'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:ItemGet_Ingredient06'})
    }
}

void _purchase() {
    if !Player.HasItem({'count': 99, 'itemKey': 'SmoothieIngredient06', 'index': -1}) {
        if !ShopUI.CanBuy({'price': 'price'}) {

            call _CancelTalk({'Message': 'ShopKeeperTalk:RanchShop_MoneyNotEnough_010', 'TalkAnime': 'talk01'})

            HylianF004.CloseShopUI()
        } else {
            ShopUI.BuyMultiple({'itemKey': 'SmoothieIngredient06', 'price': 'price'})
            HylianF004.CloseShopUI()
            HylianF004.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Player.GenericItemGetSequence({'itemKey': 'SmoothieIngredient06', 'messageEntry': 'messasgeEntry', 'count': 1, 'keepRaise': False, 'index': -1})

            call _GeneralTalk({'TalkAnime': 'talk01', 'Message': 'ShopKeeperTalk:RanchShop_ShoppingComp_010'})

        }
    } else {

        call _CancelTalk({'TalkAnime': 'talk01', 'Message': 'ShopKeeperTalk:RanchShop_InventryMax_010'})

        HylianF004.CloseShopUI()
    }
}

void MachineHint() {

    call EvResetCommon.AllReset()

    HylianF004.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait01'})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'actor2': ActorIdentifier(name="Player"), 'actor1': ActorIdentifier(name="HylianF004"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        HylianF004.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HylianF004.SetComponentActive({'active': False, 'name': 'Brush'})
    } {
        HylianF004.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    call _talkTemp({'anime': 'talk01', 'facial': 'normal', 'message': 'scenario/HylianGeneralTalk:HylianF004MachineHint_010', 'WindowContinue': False})


    fork {
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="HylianF004"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="HylianF004"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    call _talkTemp({'message': 'scenario/HylianGeneralTalk:HylianF004MachineHint_020', 'anime': 'yes01,wait01', 'WindowContinue': True, 'facial': 'sleep'})


    call _talkTemp({'anime': 'talk01', 'facial': 'normal', 'message': 'scenario/HylianGeneralTalk:HylianF004MachineHint_030', 'WindowContinue': True})


    call _talkTemp({'message': 'scenario/HylianGeneralTalk:HylianF004MachineHint_040', 'WindowContinue': True, 'facial': 'smile', 'anime': 'yes01,wait01'})


    call _talkFinish()

}

void _talkTemp() {

    fork {
        if !FlowControl.Branch({'value': 'WindowContinue'}) {
            HylianF004.Talk({'message': 'message', 'getAttention': False})
        } else {
            HylianF004.TalkKeep({'message': 'message', 'getAttention': False})
        }
    } {
        HylianF004.PlayAnimationNoWait({'name': 'anime', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianF004.SetFacialExpression({'expression': 'facial'})
    }

}

void _talkFinish() {
    HylianF004.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait14'})
}
