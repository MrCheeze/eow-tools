-------- EventFlow: Goron000 --------

Actor: Goron000
entrypoint: None()
actions: ['Talk', 'SetFacialExpression', 'PlayAnimationNoWait', 'ResetFacialExpression', 'GenericTalkSequenceWithDialog']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult4']
params: None

Actor: ShopUI
entrypoint: None()
actions: ['ShowSell']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: []
queries: ['HasSellableItems']
params: None

void talk() {
    Goron000.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:GoronShopL_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            Goron000.Talk({'message': 'ShopKeeperTalk:GoronShopL_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:GoronShopL_ChooseSell_010', 'howMany': 'ShopKeeperTalk:GoronShopL_HowManySell_010', 'sold': 'ShopKeeperTalk:GoronShopL_Sold_010', 'confirm': 'ShopKeeperTalk:GoronShopL_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:GoronShopL_SellConfirm_010'})
            Goron000.Talk({'message': 'ShopKeeperTalk:GoronShopL_SellComp_010', 'getAttention': False})
        }
      case 1:
        Goron000.SetFacialExpression({'expression': 'sad'})
        Goron000.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron000.Talk({'message': 'scenario/GeneralTalkGoron:Goron000Talk010_010', 'getAttention': False})
        Goron000.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron000.Talk({'message': 'scenario/GeneralTalkGoron:Goron000Talk010_020', 'getAttention': False})
      case 2:
        Goron000.Talk({'message': 'ShopKeeperTalk:GoronShopL_SellCheckBye_010', 'getAttention': False})
    }
}

void talk020() {
    Goron000.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:GoronShopL_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            Goron000.Talk({'message': 'ShopKeeperTalk:GoronShopL_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:GoronShopL_ChooseSell_010', 'howMany': 'ShopKeeperTalk:GoronShopL_HowManySell_010', 'sold': 'ShopKeeperTalk:GoronShopL_Sold_010', 'confirm': 'ShopKeeperTalk:GoronShopL_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:GoronShopL_SellConfirm_010'})
            Goron000.Talk({'message': 'ShopKeeperTalk:GoronShopL_SellComp_010', 'getAttention': False})
        }
      case 1:
        Goron000.SetFacialExpression({'expression': 'smile'})
        Goron000.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron000.Talk({'message': 'scenario/GeneralTalkGoron:Goron000Talk020_010', 'getAttention': False})
        Goron000.ResetFacialExpression()
        Goron000.Talk({'message': 'scenario/GeneralTalkGoron:Goron000Talk020_020', 'getAttention': False})
      case 2:
        Goron000.Talk({'message': 'ShopKeeperTalk:GoronShopL_SellCheckBye_010', 'getAttention': False})
    }
}

void talk030() {
    Goron000.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:GoronShopL_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            Goron000.Talk({'message': 'ShopKeeperTalk:GoronShopL_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:GoronShopL_ChooseSell_010', 'howMany': 'ShopKeeperTalk:GoronShopL_HowManySell_010', 'sold': 'ShopKeeperTalk:GoronShopL_Sold_010', 'confirm': 'ShopKeeperTalk:GoronShopL_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:GoronShopL_SellConfirm_010'})
            Goron000.Talk({'message': 'ShopKeeperTalk:GoronShopL_SellComp_010', 'getAttention': False})
        }
      case 1:
        Goron000.Talk({'message': 'scenario/GeneralTalkGoron:Goron000Talk030_010', 'getAttention': False})
        Goron000.SetFacialExpression({'expression': 'smile'})
        Goron000.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron000.Talk({'message': 'scenario/GeneralTalkGoron:Goron000Talk030_020', 'getAttention': False})
      case 2:
        Goron000.Talk({'message': 'ShopKeeperTalk:GoronShopL_SellCheckBye_010', 'getAttention': False})
    }
}

void talk040() {
    Goron000.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:GoronShopL_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            Goron000.Talk({'message': 'ShopKeeperTalk:GoronShopL_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:GoronShopL_ChooseSell_010', 'howMany': 'ShopKeeperTalk:GoronShopL_HowManySell_010', 'sold': 'ShopKeeperTalk:GoronShopL_Sold_010', 'confirm': 'ShopKeeperTalk:GoronShopL_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:GoronShopL_SellConfirm_010'})
            Goron000.Talk({'message': 'ShopKeeperTalk:GoronShopL_SellComp_010', 'getAttention': False})
        }
      case 1:
        Goron000.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron000.Talk({'message': 'scenario/GeneralTalkGoron:Goron000Talk040_010', 'getAttention': False})
        Goron000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron000.SetFacialExpression({'expression': 'smile'})
        Goron000.Talk({'message': 'scenario/GeneralTalkGoron:Goron000Talk040_020', 'getAttention': False})
      case 2:
        Goron000.Talk({'message': 'ShopKeeperTalk:GoronShopL_SellCheckBye_010', 'getAttention': False})
    }
}

void talk0() {
    Goron000.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:GoronShopL_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            Goron000.Talk({'message': 'ShopKeeperTalk:GoronShopL_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:GoronShopL_ChooseSell_010', 'howMany': 'ShopKeeperTalk:GoronShopL_HowManySell_010', 'sold': 'ShopKeeperTalk:GoronShopL_Sold_010', 'confirm': 'ShopKeeperTalk:GoronShopL_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:GoronShopL_SellConfirm_010'})
            Goron000.Talk({'message': 'ShopKeeperTalk:GoronShopL_SellComp_010', 'getAttention': False})
        }
      case 1:
        Goron000.Talk({'message': 'scenario/GeneralTalkGoron:Goron000Talk005_010', 'getAttention': False})
      case 2:
        Goron000.Talk({'message': 'ShopKeeperTalk:GoronShopL_SellCheckBye_010', 'getAttention': False})
    }
}
