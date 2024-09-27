-------- EventFlow: ZoraRiver005 --------

Actor: ZoraRiver005
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'SetFacialExpression', 'GenericTalkSequenceWithDialog']
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
    ZoraRiver005.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:ZoraRiverShop_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            ZoraRiver005.Talk({'message': 'ShopKeeperTalk:ZoraRiverShop_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:ZoraRiverShop_ChooseSell_010', 'howMany': 'ShopKeeperTalk:ZoraRiverShop_HowManySell_010', 'sold': 'ShopKeeperTalk:ZoraRiverShop_Sold_010', 'confirm': 'ShopKeeperTalk:ZoraRiverShop_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:ZoraRiverShop_SellConfirm_010'})
            ZoraRiver005.Talk({'message': 'ShopKeeperTalk:ZoraRiverShop_SellComp_010', 'getAttention': False})
        }
      case 1:
        ZoraRiver005.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver005Talk010_010', 'getAttention': False})
        ZoraRiver005.SetFacialExpression({'expression': 'sleep'})
        ZoraRiver005.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver005.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver005Talk010_020', 'getAttention': False})
      case 2:
        ZoraRiver005.Talk({'message': 'ShopKeeperTalk:ZoraRiverShop_SellCheckBye_010', 'getAttention': False})
    }
}

void talk020() {
    ZoraRiver005.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:ZoraRiverShop_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            ZoraRiver005.Talk({'message': 'ShopKeeperTalk:ZoraRiverShop_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:ZoraRiverShop_ChooseSell_010', 'howMany': 'ShopKeeperTalk:ZoraRiverShop_HowManySell_010', 'sold': 'ShopKeeperTalk:ZoraRiverShop_Sold_010', 'confirm': 'ShopKeeperTalk:ZoraRiverShop_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:ZoraRiverShop_SellConfirm_010'})
            ZoraRiver005.Talk({'message': 'ShopKeeperTalk:ZoraRiverShop_SellComp_010', 'getAttention': False})
        }
      case 1:
        ZoraRiver005.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver005Talk020_010', 'getAttention': False})
        ZoraRiver005.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver005.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver005Talk020_020', 'getAttention': False})
      case 2:
        ZoraRiver005.Talk({'message': 'ShopKeeperTalk:ZoraRiverShop_SellCheckBye_010', 'getAttention': False})
    }
}

void talk030() {
    ZoraRiver005.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:ZoraRiverShop_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            ZoraRiver005.Talk({'message': 'ShopKeeperTalk:ZoraRiverShop_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:ZoraRiverShop_ChooseSell_010', 'howMany': 'ShopKeeperTalk:ZoraRiverShop_HowManySell_010', 'sold': 'ShopKeeperTalk:ZoraRiverShop_Sold_010', 'confirm': 'ShopKeeperTalk:ZoraRiverShop_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:ZoraRiverShop_SellConfirm_010'})
            ZoraRiver005.Talk({'message': 'ShopKeeperTalk:ZoraRiverShop_SellComp_010', 'getAttention': False})
        }
      case 1:
        ZoraRiver005.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver005Talk030_010', 'getAttention': False})
        ZoraRiver005.SetFacialExpression({'expression': 'sleep'})
        ZoraRiver005.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver005.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver005Talk030_020', 'getAttention': False})
      case 2:
        ZoraRiver005.Talk({'message': 'ShopKeeperTalk:ZoraRiverShop_SellCheckBye_010', 'getAttention': False})
    }
}

void talk040() {
    ZoraRiver005.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:ZoraRiverShop_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            ZoraRiver005.Talk({'message': 'ShopKeeperTalk:ZoraRiverShop_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:ZoraRiverShop_ChooseSell_010', 'howMany': 'ShopKeeperTalk:ZoraRiverShop_HowManySell_010', 'sold': 'ShopKeeperTalk:ZoraRiverShop_Sold_010', 'confirm': 'ShopKeeperTalk:ZoraRiverShop_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:ZoraRiverShop_SellConfirm_010'})
            ZoraRiver005.Talk({'message': 'ShopKeeperTalk:ZoraRiverShop_SellComp_010', 'getAttention': False})
        }
      case 1:
        ZoraRiver005.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver005Talk040_010', 'getAttention': False})
        ZoraRiver005.SetFacialExpression({'expression': 'surprise'})
        ZoraRiver005.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver005.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver005Talk040_020', 'getAttention': False})
      case 2:
        ZoraRiver005.Talk({'message': 'ShopKeeperTalk:ZoraRiverShop_SellCheckBye_010', 'getAttention': False})
    }
}

void talk050() {
    ZoraRiver005.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:ZoraRiverShop_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            ZoraRiver005.Talk({'message': 'ShopKeeperTalk:ZoraRiverShop_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:ZoraRiverShop_ChooseSell_010', 'howMany': 'ShopKeeperTalk:ZoraRiverShop_HowManySell_010', 'sold': 'ShopKeeperTalk:ZoraRiverShop_Sold_010', 'confirm': 'ShopKeeperTalk:ZoraRiverShop_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:ZoraRiverShop_SellConfirm_010'})
            ZoraRiver005.Talk({'message': 'ShopKeeperTalk:ZoraRiverShop_SellComp_010', 'getAttention': False})
        }
      case 1:
        ZoraRiver005.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver005Talk050_010', 'getAttention': False})
        ZoraRiver005.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver005Talk050_020', 'getAttention': False})
      case 2:
        ZoraRiver005.Talk({'message': 'ShopKeeperTalk:ZoraRiverShop_SellCheckBye_010', 'getAttention': False})
    }
}
