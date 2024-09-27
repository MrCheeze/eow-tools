-------- EventFlow: Goron012 --------

Actor: Partner
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

Actor: Goron012
entrypoint: None()
actions: ['Talk', 'SetFacialExpression', 'PlayAnimationNoWait', 'PlayAnimation', 'GenericTalkSequenceWithDialog', 'SkipAutoTurn', 'Activate', 'MoveToTargetActor', 'SetInterestIkEnabled', 'AimPlayer', 'Destroy']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['GetStatus']
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['GenericItemGetSequence', 'WarpToActorLinkedPoint', 'LookAtTalker', 'AimCompassPoint', 'AimActor', 'SetInterestIkEnabled']
queries: ['HasSellableItems']
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: ['GetLastResult4']
params: None

Actor: ShopUI
entrypoint: None()
actions: ['ShowSell']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AddItem']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayZoneBGM', 'SetBGMVolume', 'PlayOneshotSystemSE']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['WarpToDefaultPosition', 'EnableAutoMovement', 'AimActor']
queries: []
params: None

void talk() {
    Goron012.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:GoronShopR_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            Goron012.Talk({'message': 'ShopKeeperTalk:GoronShopR_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:GoronShopR_ChooseSell_010', 'howMany': 'ShopKeeperTalk:GoronShopR_HowManySell_010', 'sold': 'ShopKeeperTalk:GoronShopR_Sold_010', 'confirm': 'ShopKeeperTalk:GoronShopR_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:GoronShopR_SellConfirm_010'})
            Goron012.Talk({'message': 'ShopKeeperTalk:GoronShopR_SellComp_010', 'getAttention': False})
        }
      case 1:
        Goron012.SetFacialExpression({'expression': 'sad'})
        Goron012.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron012.Talk({'message': 'scenario/GeneralTalkGoron:Goron012Talk010_010', 'getAttention': False})
        Goron012.SetFacialExpression({'expression': 'smile'})
        Goron012.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron012.Talk({'message': 'scenario/GeneralTalkGoron:Goron012Talk010_020', 'getAttention': False})
        Goron012.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron012.Talk({'message': 'scenario/GeneralTalkGoron:Goron012Talk010_030', 'getAttention': False})
      case 2:
        Goron012.Talk({'message': 'ShopKeeperTalk:GoronShopR_SellCheckBye_010', 'getAttention': False})
    }
}

void talk020() {
    Goron012.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:GoronShopR_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            Goron012.Talk({'message': 'ShopKeeperTalk:GoronShopR_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:GoronShopR_ChooseSell_010', 'howMany': 'ShopKeeperTalk:GoronShopR_HowManySell_010', 'sold': 'ShopKeeperTalk:GoronShopR_Sold_010', 'confirm': 'ShopKeeperTalk:GoronShopR_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:GoronShopR_SellConfirm_010'})
            Goron012.Talk({'message': 'ShopKeeperTalk:GoronShopR_SellComp_010', 'getAttention': False})
        }
      case 1:
        Goron012.Talk({'message': 'scenario/GeneralTalkGoron:Goron012Talk020_010', 'getAttention': False})
        Goron012.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron012.SetFacialExpression({'expression': 'smile'})
        Goron012.Talk({'message': 'scenario/GeneralTalkGoron:Goron012Talk020_020', 'getAttention': False})
      case 2:
        Goron012.Talk({'message': 'ShopKeeperTalk:GoronShopR_SellCheckBye_010', 'getAttention': False})
    }
}

void talk030() {
    Goron012.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:GoronShopR_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            Goron012.Talk({'message': 'ShopKeeperTalk:GoronShopR_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:GoronShopR_ChooseSell_010', 'howMany': 'ShopKeeperTalk:GoronShopR_HowManySell_010', 'sold': 'ShopKeeperTalk:GoronShopR_Sold_010', 'confirm': 'ShopKeeperTalk:GoronShopR_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:GoronShopR_SellConfirm_010'})
            Goron012.Talk({'message': 'ShopKeeperTalk:GoronShopR_SellComp_010', 'getAttention': False})
        }
      case 1:
        Goron012.SetFacialExpression({'expression': 'smile'})
        Goron012.Talk({'message': 'scenario/GeneralTalkGoron:Goron012Talk030_010', 'getAttention': False})
        Goron012.SetFacialExpression({'expression': 'smile'})
        Goron012.PlayAnimationNoWait({'name': 'satisfied01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron012.Talk({'message': 'scenario/GeneralTalkGoron:Goron012Talk030_020', 'getAttention': False})
      case 2:
        Goron012.Talk({'message': 'ShopKeeperTalk:GoronShopR_SellCheckBye_010', 'getAttention': False})
    }
}

void talk0() {
    Goron012.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'message': 'ShopKeeperTalk:GoronShopR_SellCheck_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        if !Player.HasSellableItems() {
            Goron012.Talk({'message': 'ShopKeeperTalk:GoronShopR_NotHaveItem_010', 'getAttention': False})
        } else {
            ShopUI.ShowSell({'choose': 'ShopKeeperTalk:GoronShopR_ChooseSell_010', 'howMany': 'ShopKeeperTalk:GoronShopR_HowManySell_010', 'sold': 'ShopKeeperTalk:GoronShopR_Sold_010', 'confirm': 'ShopKeeperTalk:GoronShopR_SellConfirm_010', 'multipleConfirm': 'ShopKeeperTalk:GoronShopR_SellConfirm_010'})
            Goron012.Talk({'message': 'ShopKeeperTalk:GoronShopR_SellComp_010', 'getAttention': False})
        }
      case 1:
        Goron012.Talk({'message': 'scenario/GeneralTalkGoron:Goron012Talk010_011', 'getAttention': False})
      case 2:
        Goron012.Talk({'message': 'ShopKeeperTalk:GoronShopR_SellCheckBye_010', 'getAttention': False})
    }
}

void Fairy_HyrulePlains010_Goron020() {

    call EvResetCommon.AllReset()

    Goron012.SetInterestIkEnabled({'enable': False})
    Goron012.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains030_080', 'selfTalkAnimName': 'talk02', 'facial': 'normal', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Goron012.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains030_090', 'getAttention': False})
    } {
        Goron012.PlayAnimation({'name': 'no01,wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void Fairy_HyrulePlains010_Goron030() {
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Goron012.Activate()

    call EvResetCommon.AllReset()

    Goron012.SetInterestIkEnabled({'enable': False})
    Player.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="Goron012"), 'offsetY': 0.0})
    Player.LookAtTalker({'duration': 0.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Player.AimCompassPoint({'direction': 1, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    Partner[companion].WarpToDefaultPosition({'position': 1, 'avoidWall': False, 'avoidPlayer': False})
    Partner[companion].EnableAutoMovement()
    Goron012.SetFacialExpression({'expression': 'smile'})
    Timer.Wait({'time': 1.5})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    Audio.PlayZoneBGM({'stopbgm': False})

    fork {
        Goron012.MoveToTargetActor({'speed': 1, 'distance': 2.0, 'tolerance': 1.0, 'actor': ActorIdentifier(name="Player"), 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'withoutTurn': True, 'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Goron012"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Goron012"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Goron012.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains030_100', 'selfTalkAnimName': 'happy01', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Goron012.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron012.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains030_110', 'getAttention': False})
    } {
        Goron012.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron012.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        Goron012.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains030_120', 'getAttention': False})
    } {
        Goron012.PlayAnimation({'name': 'laugh01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron012.SetFacialExpression({'expression': 'smile'})
    }

    Goron012.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron012.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains030_130', 'getAttention': False})
    } {
        Goron012.PlayAnimation({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Goron012.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains030_140', 'getAttention': False})
    } {
        Goron012.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Goron012.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains030_150', 'getAttention': False})
    } {
        Goron012.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron012.SetFacialExpression({'expression': 'angry'})
    }

    Audio.SetBGMVolume({'volume': 0.20000000298023224, 'duration': 1.5})
    Goron012.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    Audio.PlayOneshotSystemSE({'volume': 0.20000000298023224, 'label': 'SE_EV_GORON_MINING', 'pitch': 1.0})
    Goron012.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains030_160', 'getAttention': False})
    Goron012.AimPlayer({'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Goron012.SetFacialExpression({'expression': 'smile'})
    Goron012.PlayAnimation({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 2.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    Audio.SetBGMVolume({'volume': 1.0, 'duration': 1.0})
    Goron012.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains030_170', 'getAttention': False})
    Player.GenericItemGetSequence({'itemKey': 'ItemQuest02', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Zelda.AddItem({'autoEquip': False, 'itemKey': 'ItemQuest02', 'index': 'index', 'count': 1})
    Goron012.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron012.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains030_180', 'facial': '', 'selfTalkAnim': True, 'selfTalkAnimName': 'talk02', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner.AimActor({'actor': ActorIdentifier(name="Goron012"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Goron012.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Goron012.Destroy()
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    QuestSystem.SetProgress({'symbol': 'Fairy_HyrulePlains010_Goron:3285026748', 'isShowTelopInEvent': False, 'isFrontFade': False})
    if QuestSystem.GetStatus({'questKey': 'Fairy_HyrulePlains010_Zora'}) == 2 {
        QuestSystem.SetProgress({'symbol': 'Fairy_HyrulePlains010:3772123059', 'isShowTelopInEvent': False, 'isFrontFade': False})
    }
}

void talkBoundary() {
    Dialog.Show({'message': 'scenario/StoryAreaC:BoundaryGoronTalk_010'})
    Goron012.SkipAutoTurn()
}

void Fairy_HyrulePlains010_Goron010() {

    call EvResetCommon.AllReset()

    Goron012.SetInterestIkEnabled({'enable': False})
    Goron012.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains030_010', 'facial': 'smile', 'aimToPlayer': False, 'selfTalkAnimName': 'yes01,wait01', 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Goron012.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Goron012.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains030_020', 'getAttention': False})
    } {
        Goron012.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Goron012.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    call GeneralSequence.ZeldaTalkMotion()

    Timer.Wait({'time': 0.5})

    fork {
        Goron012.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains030_030', 'getAttention': False})
    } {
        Goron012.PlayAnimation({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron012.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        Goron012.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains030_040', 'getAttention': False})
    } {
        Goron012.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron012.SetFacialExpression({'expression': 'normal'})
    }

    Goron012.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron012.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains030_050', 'getAttention': False})
    } {
        Goron012.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron012.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        Goron012.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains030_060', 'getAttention': False})
    } {
        Goron012.PlayAnimation({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron012.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        Goron012.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains030_070', 'getAttention': False})
    } {
        Goron012.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron012.SetFacialExpression({'expression': 'sad'})
    }

    QuestSystem.SetProgress({'symbol': 'Fairy_HyrulePlains010_Goron:3551718482', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Fairy_HyrulePlains010_Goron_FinishTalk() {
    Goron012.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'talk02', 'facial': 'normal', 'message': 'scenario/GeneralTalkGoron:Goron012Talk040_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Goron012.Talk({'message': 'scenario/GeneralTalkGoron:Goron012Talk040_020', 'getAttention': False})
    } {
        Goron012.PlayAnimation({'name': 'yes01,wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron012.SetFacialExpression({'expression': 'smile'})
    }

}
