-------- EventFlow: HylianF018 --------

Actor: HylianF018
entrypoint: None()
actions: ['Talk', 'TalkKeep', 'SetInstanceVariableBool', 'GenericTalkSequenceWithDialog', 'PlayAnimationNoWait', 'SetFacialExpression']
queries: ['GetInstanceVariableBool']
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

void talk010() {
    HylianF018.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:SeasideVillage_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            HylianF018.SetFacialExpression({'expression': 'sad'})
            HylianF018.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            HylianF018.Talk({'message': 'ShopKeeperTalk:SeasideVillage_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:SeasideVillage_ChooseSell_010', 'howMany': 'ShopKeeperTalk:SeasideVillage_HowManySell_010', 'sold': 'ShopKeeperTalk:SeasideVillage_Sold_010', 'confirm': 'ShopKeeperTalk:SeasideVillage_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:SeasideVillage_SellConfirm_010'})
            HylianF018.Talk({'message': 'ShopKeeperTalk:SeasideVillage_SellComp_010', 'getAttention': False})
        }
      case 1:
        if !HylianF018.GetInstanceVariableBool({'name': 'talk010'}) {
            HylianF018.SetFacialExpression({'expression': 'smile'})
            HylianF018.Talk({'message': 'scenario/HylianGeneralTalk:HylianF018Talk010_010', 'getAttention': False})
            HylianF018.SetInstanceVariableBool({'name': 'talk010', 'value': True})
            HylianF018.SetFacialExpression({'expression': 'sad'})
            HylianF018.TalkKeep({'message': 'scenario/HylianGeneralTalk:HylianF018Talk010_020', 'getAttention': False})
        } else {
            HylianF018.SetFacialExpression({'expression': 'sad'})
            HylianF018.Talk({'message': 'scenario/HylianGeneralTalk:HylianF018Talk010_020', 'getAttention': False})
        }
      case 2:
        HylianF018.Talk({'message': 'ShopKeeperTalk:SeasideVillage_SellCheckBye_010', 'getAttention': False})
    }
}

void talk020() {
    HylianF018.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:SeasideVillage_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            HylianF018.SetFacialExpression({'expression': 'sad'})
            HylianF018.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            HylianF018.Talk({'message': 'ShopKeeperTalk:SeasideVillage_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:SeasideVillage_ChooseSell_010', 'howMany': 'ShopKeeperTalk:SeasideVillage_HowManySell_010', 'sold': 'ShopKeeperTalk:SeasideVillage_Sold_010', 'confirm': 'ShopKeeperTalk:SeasideVillage_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:SeasideVillage_SellConfirm_010'})
            HylianF018.Talk({'message': 'ShopKeeperTalk:SeasideVillage_SellComp_010', 'getAttention': False})
        }
      case 1:
        HylianF018.SetFacialExpression({'expression': 'sad'})
        HylianF018.PlayAnimationNoWait({'name': 'wait30', 'blendFrame': 15, 'layer': 0, 'restart': False})
        HylianF018.Talk({'message': 'scenario/HylianGeneralTalk:HylianF018Talk020_010', 'getAttention': False})
      case 2:
        HylianF018.Talk({'message': 'ShopKeeperTalk:SeasideVillage_SellCheckBye_010', 'getAttention': False})
    }
}

void talk030() {
    HylianF018.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:SeasideVillage_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            HylianF018.SetFacialExpression({'expression': 'sad'})
            HylianF018.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            HylianF018.Talk({'message': 'ShopKeeperTalk:SeasideVillage_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:SeasideVillage_ChooseSell_010', 'howMany': 'ShopKeeperTalk:SeasideVillage_HowManySell_010', 'sold': 'ShopKeeperTalk:SeasideVillage_Sold_010', 'confirm': 'ShopKeeperTalk:SeasideVillage_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:SeasideVillage_SellConfirm_010'})
            HylianF018.Talk({'message': 'ShopKeeperTalk:SeasideVillage_SellComp_010', 'getAttention': False})
        }
      case 1:
        HylianF018.Talk({'message': 'scenario/HylianGeneralTalk:HylianF018Talk030_010', 'getAttention': False})
      case 2:
        HylianF018.Talk({'message': 'ShopKeeperTalk:SeasideVillage_SellCheckBye_010', 'getAttention': False})
    }
}

void talk040() {
    HylianF018.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:SeasideVillage_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            HylianF018.SetFacialExpression({'expression': 'sad'})
            HylianF018.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            HylianF018.Talk({'message': 'ShopKeeperTalk:SeasideVillage_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:SeasideVillage_ChooseSell_010', 'howMany': 'ShopKeeperTalk:SeasideVillage_HowManySell_010', 'sold': 'ShopKeeperTalk:SeasideVillage_Sold_010', 'confirm': 'ShopKeeperTalk:SeasideVillage_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:SeasideVillage_SellConfirm_010'})
            HylianF018.Talk({'message': 'ShopKeeperTalk:SeasideVillage_SellComp_010', 'getAttention': False})
        }
      case 1:
        HylianF018.Talk({'message': 'scenario/HylianGeneralTalk:HylianF018Talk040_010', 'getAttention': False})
      case 2:
        HylianF018.Talk({'message': 'ShopKeeperTalk:SeasideVillage_SellCheckBye_010', 'getAttention': False})
    }
}
