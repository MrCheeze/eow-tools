-------- EventFlow: ZoraSea001 --------

Actor: ZoraSea001
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'SetFacialExpression', 'GenericTalkSequenceWithDialog', 'PlayAnimation', 'SetInterestIkEnabled', 'AimCompassPoint', 'AimPlayer']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult4']
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['GetStatus']
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['GenericItemGetSequence', 'RemoveDrink']
queries: ['HasDrink', 'HasSellableItems']
params: None

Actor: ShopUI
entrypoint: None()
actions: ['ShowSell']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AddItem']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['AimToInitialAngle']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['SetBGMVolume', 'PlayOneshotSystemSE']
queries: []
params: None

void talk() {
    ZoraSea001.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:ZoraSeaShop_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            ZoraSea001.SetFacialExpression({'expression': 'sad'})
            ZoraSea001.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            ZoraSea001.Talk({'message': 'ShopKeeperTalk:ZoraSeaShop_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:ZoraSeaShop_ChooseSell_010', 'howMany': 'ShopKeeperTalk:ZoraSeaShop_HowManySell_010', 'sold': 'ShopKeeperTalk:ZoraSeaShop_Sold_010', 'confirm': 'ShopKeeperTalk:ZoraSeaShop_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:ZoraSeaShop_SellConfirm_010'})
            ZoraSea001.Talk({'message': 'ShopKeeperTalk:ZoraSeaShop_SellComp_010', 'getAttention': False})
        }
      case 1:
        ZoraSea001.SetFacialExpression({'expression': 'normal'})
        ZoraSea001.PlayAnimationNoWait({'name': 'wait15', 'blendFrame': 15, 'layer': 0, 'restart': False})
        ZoraSea001.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea001Talk010_010', 'getAttention': False})
        ZoraSea001.SetFacialExpression({'expression': 'smile'})
        ZoraSea001.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSea001.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea001Talk010_020', 'getAttention': False})
      case 2:
        ZoraSea001.Talk({'message': 'ShopKeeperTalk:ZoraSeaShop_SellCheckBye_010', 'getAttention': False})
    }
}

void talk020() {
    ZoraSea001.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:ZoraSeaShop_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            ZoraSea001.SetFacialExpression({'expression': 'sad'})
            ZoraSea001.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            ZoraSea001.Talk({'message': 'ShopKeeperTalk:ZoraSeaShop_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:ZoraSeaShop_ChooseSell_010', 'howMany': 'ShopKeeperTalk:ZoraSeaShop_HowManySell_010', 'sold': 'ShopKeeperTalk:ZoraSeaShop_Sold_010', 'confirm': 'ShopKeeperTalk:ZoraSeaShop_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:ZoraSeaShop_SellConfirm_010'})
            ZoraSea001.Talk({'message': 'ShopKeeperTalk:ZoraSeaShop_SellComp_010', 'getAttention': False})
        }
      case 1:
        ZoraSea001.SetFacialExpression({'expression': 'normal'})
        ZoraSea001.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSea001.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea001Talk020_010', 'getAttention': False})
        ZoraSea001.SetFacialExpression({'expression': 'think'})
        ZoraSea001.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSea001.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea001Talk020_020', 'getAttention': False})
      case 2:
        ZoraSea001.Talk({'message': 'ShopKeeperTalk:ZoraSeaShop_SellCheckBye_010', 'getAttention': False})
    }
}

void talk030() {
    ZoraSea001.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:ZoraSeaShop_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            ZoraSea001.SetFacialExpression({'expression': 'sad'})
            ZoraSea001.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            ZoraSea001.Talk({'message': 'ShopKeeperTalk:ZoraSeaShop_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:ZoraSeaShop_ChooseSell_010', 'howMany': 'ShopKeeperTalk:ZoraSeaShop_HowManySell_010', 'sold': 'ShopKeeperTalk:ZoraSeaShop_Sold_010', 'confirm': 'ShopKeeperTalk:ZoraSeaShop_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:ZoraSeaShop_SellConfirm_010'})
            ZoraSea001.Talk({'message': 'ShopKeeperTalk:ZoraSeaShop_SellComp_010', 'getAttention': False})
        }
      case 1:
        ZoraSea001.SetFacialExpression({'expression': 'smile'})
        ZoraSea001.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea001Talk030_010', 'getAttention': False})
        ZoraSea001.SetFacialExpression({'expression': 'sad'})
        ZoraSea001.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSea001.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea001Talk030_020', 'getAttention': False})
      case 2:
        ZoraSea001.Talk({'message': 'ShopKeeperTalk:ZoraSeaShop_SellCheckBye_010', 'getAttention': False})
    }
}

void talk040() {
    ZoraSea001.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:ZoraSeaShop_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            ZoraSea001.SetFacialExpression({'expression': 'sad'})
            ZoraSea001.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            ZoraSea001.Talk({'message': 'ShopKeeperTalk:ZoraSeaShop_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:ZoraSeaShop_ChooseSell_010', 'howMany': 'ShopKeeperTalk:ZoraSeaShop_HowManySell_010', 'sold': 'ShopKeeperTalk:ZoraSeaShop_Sold_010', 'confirm': 'ShopKeeperTalk:ZoraSeaShop_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:ZoraSeaShop_SellConfirm_010'})
            ZoraSea001.Talk({'message': 'ShopKeeperTalk:ZoraSeaShop_SellComp_010', 'getAttention': False})
        }
      case 1:
        ZoraSea001.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea001Talk040_010', 'getAttention': False})
        ZoraSea001.SetFacialExpression({'expression': 'sleep'})
        ZoraSea001.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSea001.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea001Talk040_020', 'getAttention': False})
      case 2:
        ZoraSea001.Talk({'message': 'ShopKeeperTalk:ZoraSeaShop_SellCheckBye_010', 'getAttention': False})
    }
}

void Fairy_HyrulePlains010_Zora010() {

    call EvResetCommon.AllReset()

    ZoraSea001.SetInterestIkEnabled({'enable': False})
    ZoraSea001.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains040_010', 'facial': 'smile', 'selfTalkAnimName': 'think01', 'aimToPlayer': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        ZoraSea001.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains040_020', 'getAttention': False})
    } {
        ZoraSea001.SetFacialExpression({'expression': 'angry'})
    }

    ZoraSea001.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSea001.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        ZoraSea001.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains040_030', 'getAttention': False})
    } {
        ZoraSea001.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea001.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        ZoraSea001.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains040_040', 'getAttention': False})
    } {
        ZoraSea001.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea001.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        ZoraSea001.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains040_050', 'getAttention': False})
    } {
        ZoraSea001.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea001.SetFacialExpression({'expression': 'smile'})
    }

    ZoraSea001.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    call GeneralSequence.ZeldaTalkMotion()

    Timer.Wait({'time': 0.5})

    fork {
        ZoraSea001.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains040_060', 'getAttention': False})
    } {
        ZoraSea001.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea001.SetFacialExpression({'expression': 'angry'})
    }

    ZoraSea001.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 2.0})
    } {
        Timer.Wait({'time': 0.800000011920929})
        ZoraSea001.SetFacialExpression({'expression': 'sleep'})
        Timer.Wait({'time': 0.20000000298023224})
        ZoraSea001.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        ZoraSea001.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains040_070', 'getAttention': False})
    } {
        ZoraSea001.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea001.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        ZoraSea001.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains040_080', 'getAttention': False})
    } {
        ZoraSea001.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea001.SetFacialExpression({'expression': 'smile'})
    }

    QuestSystem.SetProgress({'symbol': 'Fairy_HyrulePlains010_Zora:3839382429', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Fairy_HyrulePlains010_Zora020() {

    call EvResetCommon.AllReset()

    ZoraSea001.SetInterestIkEnabled({'enable': False})
    if !Player.HasDrink({'symbol': 'Smoothie00'}) {
        ZoraSea001.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains040_090', 'facial': 'normal', 'selfTalkAnimName': 'wait02', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

        fork {
            ZoraSea001.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains040_100', 'getAttention': False})
        } {
            ZoraSea001.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraSea001.SetFacialExpression({'expression': 'smile'})
        }

    } else {
        Player.RemoveDrink({'symbol': 'Smoothie00'})
        ZoraSea001.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'facial': 'smile', 'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains040_110', 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

        fork {
            ZoraSea001.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains040_120', 'getAttention': False})
        } {
            ZoraSea001.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraSea001.SetFacialExpression({'expression': 'normal'})
        }

        ZoraSea001.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Audio.SetBGMVolume({'duration': 1.0, 'volume': 0.20000000298023224})
        Fade.StartPreset({'preset': 'FadeOutSlowB'})
        Audio.PlayOneshotSystemSE({'volume': 0.20000000298023224, 'label': 'SE_EV_ZORA_DRINK', 'pitch': 1.0})
        ZoraSea001.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains040_130', 'getAttention': False})
        ZoraSea001.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 2.0})
        Audio.SetBGMVolume({'volume': 1.0, 'duration': 2.0})
        Fade.StartPreset({'preset': 'FadeInSlow'})
        ZoraSea001.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

        fork {
            ZoraSea001.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains040_140', 'getAttention': False})
        } {
            ZoraSea001.SetFacialExpression({'expression': 'sleep'})
        }


        fork {
            ZoraSea001.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains040_150', 'getAttention': False})
        } {
            ZoraSea001.SetFacialExpression({'expression': 'angry'})
        }

        ZoraSea001.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            ZoraSea001.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains040_160', 'getAttention': False})
        } {
            ZoraSea001.PlayAnimation({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraSea001.SetFacialExpression({'expression': 'surprise'})
        }


        fork {
            ZoraSea001.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains040_170', 'getAttention': False})
        } {
            ZoraSea001.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraSea001.SetFacialExpression({'expression': 'smile'})
        }

        ZoraSea001.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Player.GenericItemGetSequence({'itemKey': 'ItemQuest01', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
        Zelda.AddItem({'autoEquip': False, 'index': 'index', 'itemKey': 'ItemQuest01', 'count': 1})

        fork {
            ZoraSea001.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains040_180', 'selfTalkAnimName': 'think01', 'facial': 'angry', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Partner.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        }


        fork {
            ZoraSea001.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains040_190', 'getAttention': False})
        } {
            ZoraSea001.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraSea001.SetFacialExpression({'expression': 'smile'})
        }

        QuestSystem.SetProgress({'symbol': 'Fairy_HyrulePlains010_Zora:4104599667', 'isShowTelopInEvent': False, 'isFrontFade': False})
        if QuestSystem.GetStatus({'questKey': 'Fairy_HyrulePlains010_Goron'}) == 2 {
            QuestSystem.SetProgress({'symbol': 'Fairy_HyrulePlains010:3772123059', 'isShowTelopInEvent': False, 'isFrontFade': False})
        }
    }
}

void talk050() {
    ZoraSea001.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:ZoraSeaShop_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            ZoraSea001.SetFacialExpression({'expression': 'sad'})
            ZoraSea001.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            ZoraSea001.Talk({'message': 'ShopKeeperTalk:ZoraSeaShop_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:ZoraSeaShop_ChooseSell_010', 'howMany': 'ShopKeeperTalk:ZoraSeaShop_HowManySell_010', 'sold': 'ShopKeeperTalk:ZoraSeaShop_Sold_010', 'confirm': 'ShopKeeperTalk:ZoraSeaShop_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:ZoraSeaShop_SellConfirm_010'})
            ZoraSea001.Talk({'message': 'ShopKeeperTalk:ZoraSeaShop_SellComp_010', 'getAttention': False})
        }
      case 1:
        ZoraSea001.SetFacialExpression({'expression': 'smile'})
        ZoraSea001.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea001Talk050_010', 'getAttention': False})
      case 2:
        ZoraSea001.Talk({'message': 'ShopKeeperTalk:ZoraSeaShop_SellCheckBye_010', 'getAttention': False})
    }
}

void Fairy_HyrulePlains010_Zora_FinishTalk() {
    ZoraSea001.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea001Talk060_010', 'selfTalkAnimName': 'talk01', 'facial': 'normal', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSea001.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSea001.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea001Talk060_020', 'getAttention': False})
    } {
        ZoraSea001.PlayAnimation({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea001.SetFacialExpression({'expression': 'sleep'})
    }

}
