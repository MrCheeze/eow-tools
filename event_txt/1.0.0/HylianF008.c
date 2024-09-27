-------- EventFlow: HylianF008 --------

Actor: HylianF008
entrypoint: None()
actions: ['Talk', 'GenericTalkSequenceWithDialog']
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
    HylianF008.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'ShopKeeperTalk:KakarikoVillage_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            HylianF008.Talk({'message': 'ShopKeeperTalk:KakarikoVillage_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:KakarikoVillage_ChooseSell_010', 'howMany': 'ShopKeeperTalk:KakarikoVillage_HowManySell_010', 'sold': 'ShopKeeperTalk:KakarikoVillage_Sold_010', 'confirm': 'ShopKeeperTalk:KakarikoVillage_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:KakarikoVillage_SellConfirm_010'})
            HylianF008.Talk({'message': 'ShopKeeperTalk:KakarikoVillage_SellComp_010', 'getAttention': False})
        }
      case 1:
        HylianF008.Talk({'message': 'scenario/HylianGeneralTalk:HylianF008Talk010_010', 'getAttention': False})
      case 2:
        HylianF008.Talk({'message': 'ShopKeeperTalk:KakarikoVillage_SellCheckBye_010', 'getAttention': False})
    }
}

void talk020() {
    HylianF008.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'ShopKeeperTalk:KakarikoVillage_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            HylianF008.Talk({'message': 'ShopKeeperTalk:KakarikoVillage_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:KakarikoVillage_ChooseSell_010', 'howMany': 'ShopKeeperTalk:KakarikoVillage_HowManySell_010', 'sold': 'ShopKeeperTalk:KakarikoVillage_Sold_010', 'confirm': 'ShopKeeperTalk:KakarikoVillage_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:KakarikoVillage_SellConfirm_010'})
            HylianF008.Talk({'message': 'ShopKeeperTalk:KakarikoVillage_SellComp_010', 'getAttention': False})
        }
      case 1:
        HylianF008.Talk({'message': 'scenario/HylianGeneralTalk:HylianF008Talk020_010', 'getAttention': False})
      case 2:
        HylianF008.Talk({'message': 'ShopKeeperTalk:KakarikoVillage_SellCheckBye_010', 'getAttention': False})
    }
}

void talk030() {
    HylianF008.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'ShopKeeperTalk:KakarikoVillage_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            HylianF008.Talk({'message': 'ShopKeeperTalk:KakarikoVillage_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:KakarikoVillage_ChooseSell_010', 'howMany': 'ShopKeeperTalk:KakarikoVillage_HowManySell_010', 'sold': 'ShopKeeperTalk:KakarikoVillage_Sold_010', 'confirm': 'ShopKeeperTalk:KakarikoVillage_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:KakarikoVillage_SellConfirm_010'})
            HylianF008.Talk({'message': 'ShopKeeperTalk:KakarikoVillage_SellComp_010', 'getAttention': False})
        }
      case 1:
        HylianF008.Talk({'message': 'scenario/HylianGeneralTalk:HylianF008Talk030_010', 'getAttention': False})
      case 2:
        HylianF008.Talk({'message': 'ShopKeeperTalk:KakarikoVillage_SellCheckBye_010', 'getAttention': False})
    }
}
