-------- EventFlow: HylianM007 --------

Actor: HylianM007
entrypoint: None()
actions: ['Talk', 'GenericTalkSequenceWithDialog', 'SetInstanceVariableBool']
queries: ['GetInstanceVariableBool']
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult4']
params: None

Actor: Player
entrypoint: None()
actions: []
queries: ['HasItem', 'HasSellableItems']
params: None

Actor: ShopUI
entrypoint: None()
actions: ['ShowSell']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE']
queries: []
params: None

void talk() {
    if !HylianM007.GetInstanceVariableBool({'name': 'talkFinish'}) {
        HylianM007.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianM007Talk010_010', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        HylianM007.Talk({'message': 'scenario/HylianGeneralTalk:HylianM007Talk010_020', 'getAttention': False})
        HylianM007.SetInstanceVariableBool({'value': True, 'name': 'talkFinish'})
        HylianM007.Talk({'message': 'ShopKeeperTalk:SouthernVillage_SellCheck_010', 'getAttention': False})
        Event15:
        switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
          case 0:
            if !Player.HasSellableItems() {
                HylianM007.Talk({'message': 'ShopKeeperTalk:SouthernVillage_NotHaveItem_010', 'getAttention': False})
            } else {
                ShopUI.ShowSell({'howMany': 'ShopKeeperTalk:SouthernVillage_HowManySell_010', 'choose': 'ShopKeeperTalk:SouthernVillage_ChooseSell_010', 'sold': 'ShopKeeperTalk:SouthernVillage_Sold_010', 'confirm': 'ShopKeeperTalk:SouthernVillage_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:SouthernVillage_SellConfirm_010'})
                HylianM007.Talk({'message': 'ShopKeeperTalk:SouthernVillage_SellComp_010', 'getAttention': False})
            }
          case 1:
            if !Player.HasItem({'itemKey': 'Bottle', 'index': 0, 'count': 1}) {
                HylianM007.Talk({'message': 'scenario/HylianGeneralTalk:HylianM007Talk010_025', 'getAttention': False})
            } else {
                HylianM007.Talk({'message': 'scenario/HylianGeneralTalk:HylianM007Talk010_030', 'getAttention': False})
            }
          case 2:
            HylianM007.Talk({'message': 'ShopKeeperTalk:SouthernVillage_SellCheckBye_010', 'getAttention': False})
        }
    } else {

        fork {
            HylianM007.GenericTalkSequenceWithDialog({'message': 'ShopKeeperTalk:SouthernVillage_SellCheck_010', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_HYL_M004_2_001', 'volume': 1.0, 'pitch': 1.0})
        }

        goto Event15
    }
}

void talk020() {

    fork {
        HylianM007.GenericTalkSequenceWithDialog({'message': 'ShopKeeperTalk:SouthernVillage_SellCheck_010', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_HYL_M004_2_001', 'volume': 1.0, 'pitch': 1.0})
    }

    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            HylianM007.Talk({'message': 'ShopKeeperTalk:SouthernVillage_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:SouthernVillage_ChooseSell_010', 'howMany': 'ShopKeeperTalk:SouthernVillage_HowManySell_010', 'sold': 'ShopKeeperTalk:SouthernVillage_Sold_010', 'confirm': 'ShopKeeperTalk:SouthernVillage_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:SouthernVillage_SellConfirm_010'})
            HylianM007.Talk({'message': 'ShopKeeperTalk:SouthernVillage_SellComp_010', 'getAttention': False})
        }
      case 1:
        HylianM007.Talk({'message': 'scenario/HylianGeneralTalk:HylianM007Talk020_010', 'getAttention': False})
      case 2:
        HylianM007.Talk({'message': 'ShopKeeperTalk:SouthernVillage_SellCheckBye_010', 'getAttention': False})
    }
}

void talk030() {

    fork {
        HylianM007.GenericTalkSequenceWithDialog({'message': 'ShopKeeperTalk:SouthernVillage_SellCheck_010', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_HYL_M004_2_001', 'volume': 1.0, 'pitch': 1.0})
    }

    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            HylianM007.Talk({'message': 'ShopKeeperTalk:SouthernVillage_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:SouthernVillage_ChooseSell_010', 'howMany': 'ShopKeeperTalk:SouthernVillage_HowManySell_010', 'sold': 'ShopKeeperTalk:SouthernVillage_Sold_010', 'confirm': 'ShopKeeperTalk:SouthernVillage_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:SouthernVillage_SellConfirm_010'})
            HylianM007.Talk({'message': 'ShopKeeperTalk:SouthernVillage_SellComp_010', 'getAttention': False})
        }
      case 1:
        HylianM007.Talk({'message': 'scenario/HylianGeneralTalk:HylianM007Talk030_010', 'getAttention': False})
      case 2:
        HylianM007.Talk({'message': 'ShopKeeperTalk:SouthernVillage_SellCheckBye_010', 'getAttention': False})
    }
}

void talkSecretlyClothes() {

    fork {
        HylianM007.GenericTalkSequenceWithDialog({'message': 'ShopKeeperTalk:SouthernVillage_SellCheck_010', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_HYL_M004_2_001', 'volume': 1.0, 'pitch': 1.0})
    }

    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            HylianM007.Talk({'message': 'ShopKeeperTalk:SouthernVillage_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:SouthernVillage_ChooseSell_010', 'howMany': 'ShopKeeperTalk:SouthernVillage_HowManySell_010', 'sold': 'ShopKeeperTalk:SouthernVillage_Sold_010', 'confirm': 'ShopKeeperTalk:SouthernVillage_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:SouthernVillage_SellConfirm_010'})
            HylianM007.Talk({'message': 'ShopKeeperTalk:SouthernVillage_SellComp_010', 'getAttention': False})
        }
      case 1:
        HylianM007.GenericTalkSequenceWithDialog({'facial': 'normal', 'message': 'scenario/HylianGeneralTalk:HylianM007TalkSecretlyClothes_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
      case 2:
        HylianM007.Talk({'message': 'ShopKeeperTalk:SouthernVillage_SellCheckBye_010', 'getAttention': False})
    }
}
