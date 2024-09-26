-------- EventFlow: Gerudo003 --------

Actor: Gerudo003
entrypoint: None()
actions: ['Talk', 'GenericTalkSequenceWithDialog', 'PlayAnimation', 'SetFacialExpression', 'PlayAnimationNoWait', 'SetInterestIkEnabled', 'AimPlayer', 'AimCompassPoint', 'ResetFacialExpression']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag']
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult4']
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['GenericItemGetSequence', 'RemoveItem']
queries: ['HasSellableItems']
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: ShopUI
entrypoint: None()
actions: ['ShowSell']
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

void talk010() {
    Gerudo003.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:GerudoShop_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            Gerudo003.Talk({'message': 'ShopKeeperTalk:GerudoShop_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:GerudoShop_ChooseSell_010', 'howMany': 'ShopKeeperTalk:GerudoShop_HowManySell_010', 'sold': 'ShopKeeperTalk:GerudoShop_Sold_010', 'confirm': 'ShopKeeperTalk:GerudoShop_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:GerudoShop_SellConfirm_010'})
            Gerudo003.Talk({'message': 'ShopKeeperTalk:GerudoShop_SellComp_010', 'getAttention': False})
        }
      case 1:
        if !EventFlags.CheckMessgaeFlag({'message': 'scenario/GeneralTalkGerudo:Gerudo003Talk010_010'}) {
            Gerudo003.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo003Talk010_010', 'getAttention': False})
            Gerudo003.SetFacialExpression({'expression': 'smile'})
            Gerudo003.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo003Talk010_020', 'getAttention': False})
        } else {
            Gerudo003.SetFacialExpression({'expression': 'smile'})
            Gerudo003.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo003Talk010_020', 'getAttention': False})
        }
      case 2:
        Gerudo003.Talk({'message': 'ShopKeeperTalk:GerudoShop_SellCheckBye_010', 'getAttention': False})
    }
}

void talk020() {
    Gerudo003.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:GerudoShop_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            Gerudo003.Talk({'message': 'ShopKeeperTalk:GerudoShop_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:GerudoShop_ChooseSell_010', 'howMany': 'ShopKeeperTalk:GerudoShop_HowManySell_010', 'sold': 'ShopKeeperTalk:GerudoShop_Sold_010', 'confirm': 'ShopKeeperTalk:GerudoShop_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:GerudoShop_SellConfirm_010'})
            Gerudo003.Talk({'message': 'ShopKeeperTalk:GerudoShop_SellComp_010', 'getAttention': False})
        }
      case 1:
        Gerudo003.SetFacialExpression({'expression': 'sad'})
        Gerudo003.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Gerudo003.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo003Talk020_010', 'getAttention': False})
        Gerudo003.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Gerudo003.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo003Talk020_020', 'getAttention': False})
      case 2:
        Gerudo003.Talk({'message': 'ShopKeeperTalk:GerudoShop_SellCheckBye_010', 'getAttention': False})
    }
}

void talk030() {
    Gerudo003.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:GerudoShop_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            Gerudo003.Talk({'message': 'ShopKeeperTalk:GerudoShop_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:GerudoShop_ChooseSell_010', 'howMany': 'ShopKeeperTalk:GerudoShop_HowManySell_010', 'sold': 'ShopKeeperTalk:GerudoShop_Sold_010', 'confirm': 'ShopKeeperTalk:GerudoShop_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:GerudoShop_SellConfirm_010'})
            Gerudo003.Talk({'message': 'ShopKeeperTalk:GerudoShop_SellComp_010', 'getAttention': False})
        }
      case 1:
        Gerudo003.SetFacialExpression({'expression': 'sad'})
        Gerudo003.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Gerudo003.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo003Talk030_010', 'getAttention': False})
        Gerudo003.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Gerudo003.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo003Talk030_020', 'getAttention': False})
      case 2:
        Gerudo003.Talk({'message': 'ShopKeeperTalk:GerudoShop_SellCheckBye_010', 'getAttention': False})
    }
}

void talk040() {
    Gerudo003.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:GerudoShop_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            Gerudo003.Talk({'message': 'ShopKeeperTalk:GerudoShop_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:GerudoShop_ChooseSell_010', 'howMany': 'ShopKeeperTalk:GerudoShop_HowManySell_010', 'sold': 'ShopKeeperTalk:GerudoShop_Sold_010', 'confirm': 'ShopKeeperTalk:GerudoShop_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:GerudoShop_SellConfirm_010'})
            Gerudo003.Talk({'message': 'ShopKeeperTalk:GerudoShop_SellComp_010', 'getAttention': False})
        }
      case 1:
        Gerudo003.SetFacialExpression({'expression': 'angry'})
        Gerudo003.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo003Talk040_010', 'getAttention': False})
        Gerudo003.PlayAnimationNoWait({'name': 'happy01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Gerudo003.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo003Talk040_020', 'getAttention': False})
      case 2:
        Gerudo003.Talk({'message': 'ShopKeeperTalk:GerudoShop_SellCheckBye_010', 'getAttention': False})
    }
}

void talk050() {
    Gerudo003.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:GerudoShop_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            Gerudo003.Talk({'message': 'ShopKeeperTalk:GerudoShop_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:GerudoShop_ChooseSell_010', 'howMany': 'ShopKeeperTalk:GerudoShop_HowManySell_010', 'sold': 'ShopKeeperTalk:GerudoShop_Sold_010', 'confirm': 'ShopKeeperTalk:GerudoShop_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:GerudoShop_SellConfirm_010'})
            Gerudo003.Talk({'message': 'ShopKeeperTalk:GerudoShop_SellComp_010', 'getAttention': False})
        }
      case 1:
        Gerudo003.SetFacialExpression({'expression': 'smile'})
        Gerudo003.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo003Talk050_010', 'getAttention': False})
        Gerudo003.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo003Talk050_020', 'getAttention': False})
      case 2:
        Gerudo003.Talk({'message': 'ShopKeeperTalk:GerudoShop_SellCheckBye_010', 'getAttention': False})
    }
}

void Fairy_HyrulePlains010_010() {

    call EvResetCommon.AllReset()

    Gerudo003.SetInterestIkEnabled({'enable': False})
    Gerudo003.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains020_010', 'selfTalkAnimName': 'wait02', 'facial': 'normal', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    call GeneralSequence.ZeldaTalkMotion()

    Timer.Wait({'time': 0.5})

    fork {
        Gerudo003.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains020_020', 'getAttention': False})
    } {
        Gerudo003.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo003.SetFacialExpression({'expression': 'smile'})
    }

    Gerudo003.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Gerudo003.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains020_030', 'getAttention': False})
    } {
        Gerudo003.PlayAnimation({'name': 'happy01,wait03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo003.SetFacialExpression({'expression': 'smile'})
    }

    Gerudo003.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Gerudo003.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains020_040', 'getAttention': False})
    } {
        Gerudo003.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo003.SetFacialExpression({'expression': 'normal'})
    }

    QuestSystem.SetProgress({'symbol': 'Fairy_HyrulePlains010:4190975730', 'isShowTelopInEvent': False, 'isFrontFade': False})
    QuestSystem.SetProgress({'symbol': 'Fairy_HyrulePlains010_Zora:3488940126', 'isShowTelopInEvent': False, 'isFrontFade': False})
    QuestSystem.SetProgress({'symbol': 'Fairy_HyrulePlains010_Goron:4171218833', 'isShowTelopInEvent': False, 'isFrontFade': False})
    QuestSystem.SetProgress({'symbol': 'Fairy_HyrulePlains010_Gerudo:1586335121', 'isShowTelopInEvent': False, 'isFrontFade': False})

    fork {
        Gerudo003.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains020_Q1', 'getAttention': False})
    } {
        Gerudo003.PlayAnimationNoWait({'name': 'talk04', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo003.SetFacialExpression({'expression': 'normal'})
    }

    Event147:
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:

        fork {
            Gerudo003.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains020_Q1_A1_010', 'getAttention': False})
        } {
            Gerudo003.PlayAnimationNoWait({'name': 'talk05', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Gerudo003.SetFacialExpression({'expression': 'normal'})
        }

        Event83:
        Gerudo003.GenericTalkSequenceWithDialog({'keepPersonalSpace': True, 'playerTalkAnim': False, 'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains020_080', 'selfTalkAnimName': 'wait03', 'facial': 'normal', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        goto Event147
      case 1:

        fork {
            Gerudo003.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains020_Q1_A1_020', 'getAttention': False})
        } {
            Gerudo003.PlayAnimationNoWait({'name': 'talk05', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Gerudo003.SetFacialExpression({'expression': 'normal'})
        }

        goto Event83
      case 2:

        fork {
            Gerudo003.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains020_070', 'getAttention': False})
        } {
            Gerudo003.PlayAnimation({'name': 'talk04', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Gerudo003.SetFacialExpression({'expression': 'smile'})
        }

    }
}

void Fairy_HyrulePlains010_020() {

    call EvResetCommon.AllReset()

    Gerudo003.SetInterestIkEnabled({'enable': False})
    goto Event83
}

void talk060() {
    Gerudo003.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:GerudoShop_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            Gerudo003.Talk({'message': 'ShopKeeperTalk:GerudoShop_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:GerudoShop_ChooseSell_010', 'howMany': 'ShopKeeperTalk:GerudoShop_HowManySell_010', 'sold': 'ShopKeeperTalk:GerudoShop_Sold_010', 'confirm': 'ShopKeeperTalk:GerudoShop_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:GerudoShop_SellConfirm_010'})
            Gerudo003.Talk({'message': 'ShopKeeperTalk:GerudoShop_SellComp_010', 'getAttention': False})
        }
      case 1:
        Gerudo003.SetFacialExpression({'expression': 'smile'})
        Gerudo003.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Gerudo003.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'aimToPlayer': True, 'message': 'scenario/GeneralTalkGerudo:Gerudo003Talk060_010', 'selfTalkAnim': False, 'facial': '', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        Gerudo003.ResetFacialExpression()
        Gerudo003.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Gerudo003.Talk({'message': 'scenario/GeneralTalkGerudo:Gerudo003Talk050_020', 'getAttention': False})
      case 2:
        Gerudo003.Talk({'message': 'ShopKeeperTalk:GerudoShop_SellCheckBye_010', 'getAttention': False})
    }
}

void Fairy_HyrulePlains010_030() {

    call EvResetCommon.AllReset()

    Gerudo003.SetInterestIkEnabled({'enable': False})
    Player.RemoveItem({'itemKey': 'ItemQuest01', 'index': 'index', 'count': 1})
    Player.RemoveItem({'itemKey': 'ItemQuest02', 'index': 'index', 'count': 1})
    Gerudo003.GenericTalkSequenceWithDialog({'keepPersonalSpace': True, 'playerTalkAnim': False, 'facial': 'smile', 'selfTalkAnimName': '', 'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains050_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Gerudo003.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Gerudo003.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains050_020', 'getAttention': False})
    } {
        Gerudo003.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo003.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        Gerudo003.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains050_030', 'getAttention': False})
    } {
        Gerudo003.SetFacialExpression({'expression': 'normal'})
    }

    Gerudo003.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Gerudo003.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains050_040', 'getAttention': False})
    } {
        Gerudo003.PlayAnimationNoWait({'name': 'talk05', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo003.SetFacialExpression({'expression': 'smile'})
    }

    Gerudo003.PlayAnimation({'name': 'wait03', 'layer': 0, 'blendFrame': -1, 'restart': False})

    call GeneralSequence.ZeldaTalkMotion()

    Timer.Wait({'time': 1.5})
    Gerudo003.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Gerudo003.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        Gerudo003.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains050_070', 'getAttention': False})
    } {
        Gerudo003.PlayAnimation({'name': 'talk05', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo003.SetFacialExpression({'expression': 'angry'})
    }

    Audio.SetBGMVolume({'duration': 1.0, 'volume': 0.20000000298023224})
    Gerudo003.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Gerudo003.SetInterestIkEnabled({'enable': False})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    Audio.PlayOneshotSystemSE({'volume': 0.20000000298023224, 'label': 'SE_EV_GERUDO_MAKE_ITEM', 'pitch': 1.0})
    Gerudo003.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains050_080', 'getAttention': False})
    Gerudo003.SetFacialExpression({'expression': 'smile'})
    Timer.Wait({'time': 2.0})
    Audio.SetBGMVolume({'volume': 1.0, 'duration': 2.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    Gerudo003.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Gerudo003.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains050_090', 'getAttention': False})
    } {
        Gerudo003.PlayAnimation({'name': 'happy01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Gerudo003.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains050_100', 'getAttention': False})
    } {
        Gerudo003.PlayAnimation({'name': 'talk05', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Gerudo003.SetFacialExpression({'expression': 'normal'})
    }

    Gerudo003.PlayAnimation({'name': 'talk03,wait03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.GenericItemGetSequence({'itemKey': 'ItemQuest00', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})

    fork {
        Gerudo003.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains050_110', 'playerTalkAnim': False, 'facial': 'smile', 'selfTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    QuestSystem.SetProgress({'symbol': 'Fairy_HyrulePlains010:2428302140', 'isShowTelopInEvent': False, 'isFrontFade': False})
    QuestSystem.SetProgress({'symbol': 'Fairy_HyrulePlains010_Gerudo:1709159868', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Fairy_HyrulePlains010_FinishTalk() {
    Gerudo003.GenericTalkSequenceWithDialog({'keepPersonalSpace': True, 'playerTalkAnim': False, 'facial': 'smile', 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkGerudo:Gerudo003Talk070_010', 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}
