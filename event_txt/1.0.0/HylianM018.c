-------- EventFlow: HylianM018 --------

Actor: HylianM018
entrypoint: None()
actions: ['Talk', 'GenericTalkSequenceWithDialog', 'SetFacialExpression']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: []
queries: ['HasSellableItems']
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

void talk() {
    HylianM018.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianM018Talk01_010', 'facial': 'sad', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianM018.SetFacialExpression({'expression': 'normal'})
    HylianM018.Talk({'message': 'scenario/HylianGeneralTalk:HylianM018Talk01_020', 'getAttention': False})
}

void talk020() {
    HylianM018.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:Castletown_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            HylianM018.Talk({'message': 'ShopKeeperTalk:Castletown_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:Castletown_ChooseSell_010', 'howMany': 'ShopKeeperTalk:Castletown_HowManySell_010', 'sold': 'ShopKeeperTalk:Castletown_Sold_010', 'confirm': 'ShopKeeperTalk:Castletown_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:Castletown_SellConfirm_010'})
            HylianM018.Talk({'message': 'ShopKeeperTalk:Castletown_SellComp_010', 'getAttention': False})
        }
      case 1:
        HylianM018.SetFacialExpression({'expression': 'sad'})
        HylianM018.Talk({'message': 'scenario/HylianGeneralTalk:HylianM018Talk02_010', 'getAttention': False})
        HylianM018.SetFacialExpression({'expression': 'sleep'})
        HylianM018.Talk({'message': 'scenario/HylianGeneralTalk:HylianM018Talk02_020', 'getAttention': False})
      case 2:
        HylianM018.Talk({'message': 'ShopKeeperTalk:Castletown_SellCheckBye_010', 'getAttention': False})
    }
}

void talk030() {
    HylianM018.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:CastletownDress_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            HylianM018.Talk({'message': 'ShopKeeperTalk:CastletownDress_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:CastletownDress_ChooseSell_010', 'howMany': 'ShopKeeperTalk:CastletownDress_HowManySell_010', 'sold': 'ShopKeeperTalk:CastletownDress_Sold_010', 'confirm': 'ShopKeeperTalk:CastletownDress_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:CastletownDress_SellConfirm_010'})
            HylianM018.Talk({'message': 'ShopKeeperTalk:CastletownDress_SellComp_010', 'getAttention': False})
        }
      case 1:
        HylianM018.Talk({'message': 'scenario/HylianGeneralTalk:HylianM018Talk030_010', 'getAttention': False})
      case 2:
        HylianM018.Talk({'message': 'ShopKeeperTalk:CastletownDress_SellCheckBye_010', 'getAttention': False})
    }
}

void talk040() {
    HylianM018.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:CastletownDress_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            HylianM018.Talk({'message': 'ShopKeeperTalk:CastletownDress_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:CastletownDress_ChooseSell_010', 'howMany': 'ShopKeeperTalk:CastletownDress_HowManySell_010', 'sold': 'ShopKeeperTalk:CastletownDress_Sold_010', 'confirm': 'ShopKeeperTalk:CastletownDress_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:CastletownDress_SellConfirm_010'})
            HylianM018.Talk({'message': 'ShopKeeperTalk:CastletownDress_SellComp_010', 'getAttention': False})
        }
      case 1:
        HylianM018.Talk({'message': 'scenario/HylianGeneralTalk:HylianM018Talk040_010', 'getAttention': False})
      case 2:
        HylianM018.Talk({'message': 'ShopKeeperTalk:CastletownDress_SellCheckBye_010', 'getAttention': False})
    }
}

void talk050() {
    HylianM018.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:Castletown_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            HylianM018.Talk({'message': 'ShopKeeperTalk:Castletown_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:Castletown_ChooseSell_010', 'howMany': 'ShopKeeperTalk:Castletown_HowManySell_010', 'sold': 'ShopKeeperTalk:Castletown_Sold_010', 'confirm': 'ShopKeeperTalk:Castletown_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:Castletown_SellConfirm_010'})
            HylianM018.Talk({'message': 'ShopKeeperTalk:Castletown_SellComp_010', 'getAttention': False})
        }
      case 1:
        HylianM018.Talk({'message': 'scenario/HylianGeneralTalk:HylianM018TalkSecretlyClothes_010', 'getAttention': False})
      case 2:
        HylianM018.Talk({'message': 'ShopKeeperTalk:Castletown_SellCheckBye_010', 'getAttention': False})
    }
}
