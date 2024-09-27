-------- EventFlow: ShopItem --------

Actor: Zelda
entrypoint: None()
actions: []
queries: ['GetHeartPieces']
params: None

Actor: Player
entrypoint: None()
actions: ['GenericItemGetSequence', 'AddDrink', 'AddItem', 'AimActor', 'PayPrice']
queries: ['HasEmptyDrink', 'CheckOutfit', 'CheckRupee', 'HasItem']
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag', 'CheckMessgaeFlag']
params: None

Actor: Dialog
entrypoint: None()
actions: ['Show', 'SetInt', 'ShowKeep']
queries: ['GetLastResult']
params: None

Actor: ShopItem
entrypoint: None()
actions: ['LookAtTalker', 'CloseShopUI', 'SellOut', 'OpenShopUI']
queries: []
params: None

Actor: Hud
entrypoint: None()
actions: ['ShowRupee', 'WaitRupeeCount']
queries: []
params: None

Actor: HylianF018
entrypoint: None()
actions: []
queries: []
params: None

Actor: ZoraRiver005
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog']
queries: []
params: None

Actor: ZoraSea001
entrypoint: None()
actions: []
queries: []
params: None

Actor: Gerudo003
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog']
queries: []
params: None

Actor: HylianM007
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog']
queries: []
params: None

Actor: Goron012
entrypoint: None()
actions: []
queries: []
params: None

Actor: Goron000
entrypoint: None()
actions: []
queries: []
params: None

Actor: HylianM018
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SetFacialExpression', 'ResetFacialExpression']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: []
queries: ['CheckProgress']
params: None

Actor: HylianF008
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: []
queries: ['Branch']
params: None

Actor: ShopUI
entrypoint: None()
actions: ['ShowBuy', 'SetItemCount', 'BuyMultiple']
queries: ['GetBuyResult', 'CanBuy']
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

Actor: Character[_ItemSelect(shopKeeper)]
entrypoint: _ItemSelect(shopKeeper)
actions: ['GenericTalkSequence', 'SetInterestIkEnabled', 'Talk']
queries: []
params: None

Actor: Character[_ItemBuy(shopKeeper)]
entrypoint: _ItemBuy(shopKeeper)
actions: ['PlayAnimationNoWait']
queries: []
params: None

Actor: Character[_GeneralTalk(shopKeeper)]
entrypoint: _GeneralTalk(shopKeeper)
actions: ['Talk', 'AimPlayer', 'PlayAnimationNoWait', 'SetFacialExpression']
queries: []
params: None

Actor: Character[_ItemBuyMultiple(shopKeeper)]
entrypoint: _ItemBuyMultiple(shopKeeper)
actions: ['PlayAnimationNoWait']
queries: []
params: None

Actor: Character[_CancelTalk(shopKeeper)]
entrypoint: _CancelTalk(shopKeeper)
actions: ['Talk', 'AimPlayer', 'PlayAnimationNoWait', 'SetFacialExpression']
queries: []
params: None

void BuyItemGeneralShop01() {
    Dialog.Show({'message': 'ShopKeeperTalk:BuyItemGeneralShop01'})
}

void BuyItemGeneralShop02() {
    Dialog.Show({'message': 'ShopKeeperTalk:BuyItemGeneralShop02'})
}

void BuyItemGeneralShop03() {
    Dialog.Show({'message': 'ShopKeeperTalk:BuyItemGeneralShop03'})
}

void Village01() {
    Dialog.SetInt({'index': 0, 'value': 'price'})

    call _VillageMessageSelect({'price': 'price', 'message': 'ShopKeeperTalk:SouthernVillage_Buying_Village01_010', 'isOneOff': False, 'isBottle': False, 'isHeartPiece': False, 'Index': -1, 'BottleContent': 'MedicineRed', 'isIngredients': True, 'itemKey': 'SmoothieIngredient05', 'TakeOutEntryName': 'ShopItem:SouthSingle', 'MultiMessage': 'ShopItem:SouthMulti'})

}

void Village04() {
    Dialog.SetInt({'index': 0, 'value': 'price'})

    call _VillageMessageSelect({'isOneOff': False, 'isBottle': False, 'isHeartPiece': False, 'Index': -1, 'isIngredients': False, 'price': 'price', 'itemKey': 'MedicineYellow', 'BottleContent': 'MedicineYellow', 'message': 'ShopKeeperTalk:SouthernVillage_Buying_Village04_010', 'TakeOutEntryName': 'ShopItem:BuyItemGeneralShop02', 'MultiMessage': 'ShopItem:BuyItemGeneralShop02'})

}

void Village03() {
    Dialog.SetInt({'index': 0, 'value': 'price'})

    call _VillageMessageSelect({'price': 'price', 'itemKey': 'MedicineRed', 'TakeOutEntryName': 'ShopItem:BuyItemGeneralShop01', 'message': 'ShopKeeperTalk:SouthernVillage_Buying_Village03_010', 'isOneOff': False, 'isBottle': False, 'isHeartPiece': False, 'Index': -1, 'isIngredients': False, 'BottleContent': 'MedicineRed', 'MultiMessage': 'ShopItem:BuyItemGeneralShop01'})

}

void Village02() {
    Dialog.SetInt({'index': 0, 'value': 'price'})

    call _VillageMessageSelect({'isOneOff': False, 'isBottle': False, 'isHeartPiece': False, 'Index': -1, 'isIngredients': False, 'price': 'price', 'itemKey': 'MedicineBlue', 'BottleContent': 'MedicineBlue', 'message': 'ShopKeeperTalk:SouthernVillage_Buying_Village02_010', 'TakeOutEntryName': 'ShopItem:BuyItemGeneralShop03', 'MultiMessage': 'ShopItem:BuyItemGeneralShop03'})

}

void Seaside01() {
    Dialog.SetInt({'index': 0, 'value': 'price'})

    call _SeasideMessageSelect({'price': 'price', 'message': 'ShopKeeperTalk:SeasideVillage_Buying_Seaside01_010', 'isBottle': False, 'isOneOff': False, 'isHeartPiece': False, 'Index': -1, 'isIngredients': False, 'itemKey': 'MedicineBlue', 'BottleContent': 'MedicineBlue', 'ItemNameEntryName': 'ShopItem:BuyItemGeneralShop03', 'MultiMessage': 'ShopItem:BuyItemGeneralShop03'})

}

void Seaside02() {
    Dialog.SetInt({'index': 0, 'value': 'price'})

    call _SeasideMessageSelect({'price': 'price', 'itemKey': 'MedicineRed', 'ItemNameEntryName': 'ShopItem:BuyItemGeneralShop01', 'message': 'ShopKeeperTalk:SeasideVillage_Buying_Seaside02_010', 'isBottle': False, 'isOneOff': False, 'isHeartPiece': False, 'Index': -1, 'isIngredients': False, 'BottleContent': 'MedicineRed', 'MultiMessage': 'ShopItem:BuyItemGeneralShop01'})

}

void Seaside03() {
    Dialog.SetInt({'index': 0, 'value': 'price'})

    call _SeasideMessageSelect({'price': 'price', 'itemKey': 'MedicineYellow', 'ItemNameEntryName': 'ShopItem:BuyItemGeneralShop02', 'message': 'ShopKeeperTalk:SeasideVillage_Buying_Seaside03_010', 'isBottle': False, 'isOneOff': False, 'isHeartPiece': False, 'Index': -1, 'isIngredients': False, 'BottleContent': 'MedicineYellow', 'MultiMessage': 'ShopItem:BuyItemGeneralShop02'})

}

void River01() {
    Dialog.SetInt({'index': 0, 'value': 'price'})

    call _RiverMessageSelect({'price': 'price', 'message': 'ShopKeeperTalk:ZoraRiverShop_Buying_River01_010', 'isBottle': False, 'isOneOff': False, 'isHeartPiece': False, 'Index': -1, 'isIngredients': True, 'BottleContent': 'MedicineRed', 'EatInEntryName': 'ShopKeeperTalk:UseItemGeneralShop01', 'itemKey': 'SmoothieIngredient01', 'ItemNameEntryName': 'ShopItem:ZoraRiverSingle', 'MultiMessage': 'ShopItem:ZoraRiverMulti'})

}

void River02() {
    Dialog.SetInt({'index': 0, 'value': 'price'})

    call _RiverMessageSelect({'price': 'price', 'message': 'ShopKeeperTalk:ZoraRiverShop_Buying_River02_010', 'isBottle': False, 'isOneOff': False, 'isHeartPiece': False, 'Index': -1, 'isIngredients': False, 'itemKey': 'MedicineBlue', 'BottleContent': 'MedicineBlue', 'ItemNameEntryName': 'ShopItem:BuyItemGeneralShop03', 'EatInEntryName': 'ShopKeeperTalk:UseItemGeneralShop03', 'MultiMessage': 'ShopItem:BuyItemGeneralShop03'})

}

void River03() {
    Dialog.SetInt({'index': 0, 'value': 'price'})

    call _RiverMessageSelect({'price': 'price', 'itemKey': 'MedicineYellow', 'ItemNameEntryName': 'ShopItem:BuyItemGeneralShop02', 'message': 'ShopKeeperTalk:ZoraRiverShop_Buying_River04_010', 'isBottle': False, 'isOneOff': False, 'isHeartPiece': False, 'Index': -1, 'isIngredients': False, 'BottleContent': 'MedicineYellow', 'EatInEntryName': 'ShopKeeperTalk:UseItemGeneralShop02', 'MultiMessage': 'ShopItem:BuyItemGeneralShop02'})

}

void River04() {
    Dialog.SetInt({'index': 0, 'value': 'price'})

    call _RiverMessageSelect({'price': 'price', 'itemKey': 'MedicineRed', 'ItemNameEntryName': 'ShopItem:BuyItemGeneralShop01', 'message': 'ShopKeeperTalk:ZoraRiverShop_Buying_River03_010', 'isOneOff': False, 'isBottle': False, 'isHeartPiece': False, 'Index': -1, 'isIngredients': False, 'BottleContent': 'MedicineRed', 'EatInEntryName': 'ShopKeeperTalk:UseItemGeneralShop01', 'MultiMessage': 'ShopItem:BuyItemGeneralShop01'})

}

void Sea01() {
    Dialog.SetInt({'index': 0, 'value': 'price'})

    call _SeaMessageSelect({'price': 'price', 'message': 'ShopKeeperTalk:ZoraSeaShop_Buying_Sea01_010', 'isBottle': False, 'isOneOff': False, 'isHeartPiece': False, 'Index': -1, 'BottleContent': 'MedicineRed', 'isIngredients': True, 'itemKey': 'SmoothieIngredient00', 'ItemNameEntryName': 'ShopItem:ZoraSeaSingle', 'MultiMessage': 'ShopItem:ZoraSeaMulti'})

}

void Sea02() {
    Dialog.SetInt({'index': 0, 'value': 'price'})

    call _SeaMessageSelect({'price': 'price', 'message': 'ShopKeeperTalk:ZoraSeaShop_Buying_Sea02_010', 'isBottle': False, 'isOneOff': False, 'isHeartPiece': False, 'Index': -1, 'isIngredients': False, 'itemKey': 'MedicineRed', 'BottleContent': 'MedicineRed', 'ItemNameEntryName': 'ShopItem:BuyItemGeneralShop01', 'MultiMessage': 'ShopItem:BuyItemGeneralShop01'})

}

void Sea03() {
    Dialog.SetInt({'index': 0, 'value': 'price'})

    call _SeaMessageSelect({'price': 'price', 'message': 'ShopKeeperTalk:ZoraSeaShop_Buying_Sea03_010', 'isBottle': False, 'isOneOff': False, 'isHeartPiece': False, 'Index': -1, 'isIngredients': False, 'itemKey': 'MedicineBlue', 'BottleContent': 'MedicineBlue', 'ItemNameEntryName': 'ShopItem:BuyItemGeneralShop03', 'MultiMessage': 'ShopItem:BuyItemGeneralShop03'})

}

void Gerudo01() {
    Dialog.SetInt({'index': 0, 'value': 'price'})

    call _GerudoMessageSelect({'price': 'price', 'message': 'ShopKeeperTalk:GerudoShop_Buying_Gerudo01_010', 'isBottle': False, 'isOneOff': False, 'isHeartPiece': False, 'Index': -1, 'BottleContent': 'MedicineRed', 'isIngredients': True, 'itemKey': 'SmoothieIngredient04', 'ItemNameEntryName': 'ShopItem:Gerudo1Single', 'MultiMessage': 'ShopItem:Gerudo1Multi'})

}

void Gerudo02() {
    Dialog.SetInt({'index': 0, 'value': 'price'})

    call _GerudoMessageSelect({'price': 'price', 'message': 'ShopKeeperTalk:GerudoShop_Buying_Gerudo02_010', 'isBottle': False, 'isOneOff': False, 'isHeartPiece': False, 'Index': -1, 'BottleContent': 'MedicineRed', 'isIngredients': True, 'itemKey': 'SmoothieIngredient07', 'ItemNameEntryName': 'ShopItem:Gerudo2Single', 'MultiMessage': 'ShopItem:Gerudo2Multi'})

}

void Gerudo03() {
    Dialog.SetInt({'index': 0, 'value': 'price'})

    call _GerudoMessageSelect({'price': 'price', 'itemKey': 'MedicineRed', 'message': 'ShopKeeperTalk:GerudoShop_Buying_Gerudo03_010', 'isBottle': False, 'isOneOff': False, 'isHeartPiece': False, 'Index': -1, 'ItemNameEntryName': 'ShopItem:BuyItemGeneralShop01', 'isIngredients': False, 'BottleContent': 'MedicineRed', 'MultiMessage': 'ShopItem:BuyItemGeneralShop01'})

}

void Gerudo04() {
    Dialog.SetInt({'index': 0, 'value': 'price'})

    call _GerudoMessageSelect({'price': 'price', 'message': 'ShopKeeperTalk:GerudoShop_Buying_Gerudo04_010', 'isBottle': False, 'isOneOff': False, 'isHeartPiece': False, 'Index': -1, 'isIngredients': False, 'itemKey': 'MedicineBlue', 'BottleContent': 'MedicineBlue', 'ItemNameEntryName': 'ShopItem:BuyItemGeneralShop03', 'MultiMessage': 'ShopItem:BuyItemGeneralShop03'})

}

void Goron03() {
    Dialog.SetInt({'index': 0, 'value': 'price'})
    if !EventFlags.CheckFlag({'symbol': 'EvE_WorldGlobeActivate'}) {
        Event69:

        call _GoronLMessageSelect({'price': 'price', 'itemKey': 'MedicineRed', 'ItemNameEntryName': 'ShopItem:BuyItemGeneralShop01', 'isBottle': False, 'isOneOff': False, 'isHeartPiece': False, 'Index': -1, 'message': 'ShopKeeperTalk:GoronShopL_Buying_Goron03_010', 'isIngredients': False, 'BottleContent': 'MedicineRed'})

        if EventFlags.CheckFlag({'symbol': 'EvE_WorldGlobeActivate'})
        && !EventFlags.CheckFlag({'symbol': 'WorldGlobeSmallActive_003'})
        && !EventFlags.CheckMessgaeFlag({'message': 'ShopKeeperTalk:GoronShopL_CrackTalkEnd'}) {

            call _GeneralTalk({'shopKeeper': ActorIdentifier(name="Goron000"), 'Message': 'ShopKeeperTalk:GoronShopL_CrackTalkEnd', 'TalkAnime': 'talk01'})

        }
    } else
    if !EventFlags.CheckFlag({'symbol': 'WorldGlobeSmallActive_003'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ShopKeeperTalk:GoronShopL_CrackTalkEnd'}) {

        call _GeneralTalk({'TalkAnime': 'talk01', 'shopKeeper': ActorIdentifier(name="Goron000"), 'Message': 'ShopKeeperTalk:GoronShopL_CrackTalk'})

    }
    goto Event69
}

void Goron04() {
    Dialog.SetInt({'index': 0, 'value': 'price'})
    if !EventFlags.CheckFlag({'symbol': 'EvE_WorldGlobeActivate'}) {
        Event68:

        call _GoronLMessageSelect({'price': 'price', 'isBottle': False, 'isOneOff': False, 'isHeartPiece': False, 'Index': -1, 'message': 'ShopKeeperTalk:GoronShopL_Buying_Goron04_010', 'isIngredients': False, 'itemKey': 'MedicineBlue', 'BottleContent': 'MedicineBlue', 'ItemNameEntryName': 'ShopItem:BuyItemGeneralShop03'})

        if EventFlags.CheckFlag({'symbol': 'EvE_WorldGlobeActivate'})
        && !EventFlags.CheckFlag({'symbol': 'WorldGlobeSmallActive_003'})
        && !EventFlags.CheckMessgaeFlag({'message': 'ShopKeeperTalk:GoronShopL_CrackTalkEnd'}) {

            call _GeneralTalk({'shopKeeper': ActorIdentifier(name="Goron000"), 'Message': 'ShopKeeperTalk:GoronShopL_CrackTalkEnd', 'TalkAnime': 'talk01'})

        }
    } else
    if !EventFlags.CheckFlag({'symbol': 'WorldGlobeSmallActive_003'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ShopKeeperTalk:GoronShopL_CrackTalkEnd'}) {

        call _GeneralTalk({'TalkAnime': 'talk01', 'shopKeeper': ActorIdentifier(name="Goron000"), 'Message': 'ShopKeeperTalk:GoronShopL_CrackTalk'})

    }
    goto Event68
}

void Goron02() {
    Dialog.SetInt({'index': 0, 'value': 'price'})

    call _GoronRMessageSelect({'price': 'price', 'isBottle': False, 'isOneOff': False, 'isHeartPiece': False, 'Index': -1, 'message': 'ShopKeeperTalk:GoronShopR_Buying_Goron02_010', 'BottleContent': 'MedicineRed', 'isIngredients': True, 'itemKey': 'SmoothieIngredient09', 'ItemNameEntryName': 'ShopItem:Goron2Single', 'MultiMessage': 'ShopItem:Goron2Multi'})

}

void Goron01() {
    Dialog.SetInt({'index': 0, 'value': 'price'})

    call _GoronRMessageSelect({'price': 'price', 'isBottle': False, 'isOneOff': False, 'isHeartPiece': False, 'Index': -1, 'message': 'ShopKeeperTalk:GoronShopR_Buying_Goron01_010', 'BottleContent': 'MedicineRed', 'isIngredients': True, 'itemKey': 'SmoothieIngredient08', 'ItemNameEntryName': 'ShopItem:Goron1Single', 'MultiMessage': 'ShopItem:Goron1Multi'})

}

void _ZeldaWelcomeBack() {
    HylianM018.SetFacialExpression({'expression': 'smile'})
    HylianM018.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'keepPersonalSpace': False, 'message': 'ShopKeeperTalk:Castletown_ZeldaRuturnSequence_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianM018.ResetFacialExpression()
    HylianM018.Talk({'message': 'ShopKeeperTalk:Castletown_ZeldaRuturnSequence_020', 'getAttention': False})
}

void _ItemSelect() {

    fork {
        Character[_ItemSelect(shopKeeper)].GenericTalkSequence({'playerTalkAnim': False, 'keepPersonalSpace': False, 'cameraLookAt': False, 'aimFromPlayer': False, 'selfTalkAnimName': 'TalkAnime', 'aimToPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    } {
        Hud.ShowRupee({'visible': True})
    } {
        ShopItem.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {
        ShopItem.OpenShopUI()
    } {
        Character[_ItemSelect(shopKeeper)].SetInterestIkEnabled({'enable': False})
    }

    if !FlowControl.Branch({'value': 'isOneOff'}) {
        if !FlowControl.Branch({'value': 'isIngredients'}) {
            Character[_ItemSelect(shopKeeper)].Talk({'message': 'message', 'getAttention': False})
            if !Dialog.GetLastResult({'resultOnSkip': 1}) {
                if !Player.HasEmptyDrink() {

                    call _CancelTalk({'shopKeeper': 'shopKeeper', 'TalkAnime': 'TalkAnime', 'Message': 'InventryMax', 'cancelFace': 'cancelFace'})

                } else {

                    call _ItemBuy({'price': 'price', 'itemKey': 'itemKey', 'ItemMessageEntryName': 'TakeOutEntryName', 'BottleContent': 'BottleContent', 'MoneyNotEnough': 'MoneyNotEnough', 'ShoppingComp': 'ShoppingComp', 'isBottle': 'isBottle', 'isOneOff': 'isOneOff', 'shopKeeper': 'shopKeeper', 'isHeartPiece': 'isHeartPiece', 'Index': 'Index', 'TalkAnime': 'TalkAnime', 'WaitAnime': 'WaitAnime', 'isIngredients': 'isIngredients', 'InventryMax': 'InventryMax', 'facial': 'facial', 'cancelFace': 'cancelFace'})

                }
            } else {
                Event188:

                call _CancelTalk({'shopKeeper': 'shopKeeper', 'Message': 'NotBuying', 'TalkAnime': 'TalkAnime', 'cancelFace': 'cancelFace'})

            }
        } else {
            ShopUI.ShowBuy({'explanation': 'message', 'price': 'price', 'itemKey': 'itemKey', 'confirm': 'BuyConfirm', 'multipleConfirm': 'BuyConfirm'})
            switch ShopUI.GetBuyResult() {
              case 0:
                goto Event188
              case 1:

                call _ItemBuyMultiple({'price': 'price', 'itemKey': 'itemKey', 'BottleContent': 'BottleContent', 'MoneyNotEnough': 'MoneyNotEnough', 'ShoppingComp': 'ShoppingComp', 'isBottle': 'isBottle', 'isOneOff': 'isOneOff', 'shopKeeper': 'shopKeeper', 'isHeartPiece': 'isHeartPiece', 'Index': 'Index', 'TalkAnime': 'TalkAnime', 'WaitAnime': 'WaitAnime', 'isIngredients': 'isIngredients', 'InventryMax': 'InventryMax', 'facial': 'facial', 'cancelFace': 'cancelFace', 'ItemMessageEntryName': 'TakeOutEntryName'})

              case 2:

                call _ItemBuyMultiple({'price': 'price', 'itemKey': 'itemKey', 'BottleContent': 'BottleContent', 'MoneyNotEnough': 'MoneyNotEnough', 'ShoppingComp': 'ShoppingComp', 'isBottle': 'isBottle', 'isOneOff': 'isOneOff', 'shopKeeper': 'shopKeeper', 'isHeartPiece': 'isHeartPiece', 'Index': 'Index', 'TalkAnime': 'TalkAnime', 'WaitAnime': 'WaitAnime', 'isIngredients': 'isIngredients', 'InventryMax': 'InventryMax', 'facial': 'facial', 'cancelFace': 'cancelFace', 'ItemMessageEntryName': 'MultiMessage'})

            }
        }
    } else {
        Character[_ItemSelect(shopKeeper)].Talk({'message': 'message', 'getAttention': False})
        if !Dialog.GetLastResult({'resultOnSkip': 1}) {

            call _ItemBuy({'price': 'price', 'itemKey': 'itemKey', 'ItemMessageEntryName': 'TakeOutEntryName', 'BottleContent': 'BottleContent', 'MoneyNotEnough': 'MoneyNotEnough', 'ShoppingComp': 'ShoppingComp', 'isBottle': 'isBottle', 'isOneOff': 'isOneOff', 'shopKeeper': 'shopKeeper', 'isHeartPiece': 'isHeartPiece', 'Index': 'Index', 'TalkAnime': 'TalkAnime', 'WaitAnime': 'WaitAnime', 'isIngredients': 'isIngredients', 'InventryMax': 'InventryMax', 'facial': 'facial', 'cancelFace': 'cancelFace'})

        } else {

            call _CancelTalk({'shopKeeper': 'shopKeeper', 'Message': 'NotBuying', 'TalkAnime': 'TalkAnime', 'cancelFace': 'cancelFace'})

        }
    }
}

void Castle01() {
    Dialog.SetInt({'index': 0, 'value': 'price'})
    switch QuestSystem.CheckProgress({'symbol': 'HyruleCastle_LuberiHouse:1055863140'}) {
      case [4294967295, 0]:

        call _ZeldaWelcomeBack()

      case 1:
        if Player.CheckOutfit({'outfit': 'Adventure1'}) {

            call _CastleMessageSelect({'price': 'price', 'message': 'ShopKeeperTalk:Castletown_Buying_Castle01_010', 'isOneOff': False, 'isBottle': False, 'isHeartPiece': False, 'Index': -1, 'isIngredients': True, 'BottleContent': 'MedicineRed', 'itemKey': 'SmoothieIngredient10', 'ItemNameEntryName': 'ShopItem:Castle2Single', 'MultiMessage': 'ShopItem:Castle2Multi'})

        } else {

            call _CastleMessageSelect({'price': 'price', 'message': 'ShopKeeperTalk:CastletownDress_Buying_Castle01_010', 'isBottle': False, 'isOneOff': False, 'isHeartPiece': False, 'Index': -1, 'BottleContent': 'MedicineRed', 'isIngredients': True, 'itemKey': 'SmoothieIngredient10', 'ItemNameEntryName': 'ShopItem:Castle2Single', 'MultiMessage': 'ShopItem:Castle2Multi'})

        }
    }
}

void Castle02() {
    Dialog.SetInt({'index': 0, 'value': 'price'})
    switch QuestSystem.CheckProgress({'symbol': 'HyruleCastle_LuberiHouse:1055863140'}) {
      case [4294967295, 0]:

        call _ZeldaWelcomeBack()

      case 1:
        if Player.CheckOutfit({'outfit': 'Adventure1'}) {

            call _CastleMessageSelect({'price': 'price', 'message': 'ShopKeeperTalk:Castletown_Buying_Castle02_010', 'isBottle': False, 'isOneOff': False, 'isHeartPiece': False, 'Index': -1, 'BottleContent': 'MedicineRed', 'isIngredients': True, 'itemKey': 'SmoothieIngredient03', 'MultiMessage': 'ShopItem:Castle1Multi', 'ItemNameEntryName': 'ShopItem:Castle1Single'})

        } else {

            call _CastleMessageSelect({'price': 'price', 'message': 'ShopKeeperTalk:CastletownDress_Buying_Castle02_010', 'isBottle': False, 'isOneOff': False, 'isHeartPiece': False, 'Index': -1, 'BottleContent': 'MedicineRed', 'isIngredients': True, 'itemKey': 'SmoothieIngredient03', 'ItemNameEntryName': 'ShopItem:Castle1Single', 'MultiMessage': 'ShopItem:Castle1Multi'})

        }
    }
}

void Castle03() {
    Dialog.SetInt({'index': 0, 'value': 'price'})
    switch QuestSystem.CheckProgress({'symbol': 'HyruleCastle_LuberiHouse:1055863140'}) {
      case [4294967295, 0]:

        call _ZeldaWelcomeBack()

      case 1:
        if Player.CheckOutfit({'outfit': 'Adventure1'}) {

            call _CastleMessageSelect({'price': 'price', 'itemKey': 'MedicineRed', 'ItemNameEntryName': 'ShopItem:BuyItemGeneralShop01', 'message': 'ShopKeeperTalk:Castletown_Buying_Castle03_010', 'isBottle': False, 'isOneOff': False, 'isHeartPiece': False, 'Index': -1, 'isIngredients': False, 'BottleContent': 'MedicineRed', 'MultiMessage': 'ShopItem:BuyItemGeneralShop01'})

        } else {

            call _CastleMessageSelect({'price': 'price', 'itemKey': 'MedicineRed', 'ItemNameEntryName': 'ShopItem:BuyItemGeneralShop01', 'message': 'ShopKeeperTalk:CastletownDress_Buying_Castle03_010', 'isBottle': False, 'isOneOff': False, 'isHeartPiece': False, 'Index': -1, 'isIngredients': False, 'BottleContent': 'MedicineRed', 'MultiMessage': 'ShopItem:BuyItemGeneralShop01'})

        }
    }
}

void CastleOrnament() {
    Dialog.SetInt({'index': 0, 'value': 'price'})
    switch QuestSystem.CheckProgress({'symbol': 'HyruleCastle_LuberiHouse:1055863140'}) {
      case [4294967295, 0]:

        call _ZeldaWelcomeBack()

      case 1:
        if Player.CheckOutfit({'outfit': 'Adventure1'}) {

            call _CastleMessageSelect({'ItemNameEntryName': 'ShopItem:BuyItemCastleShopCloth', 'message': 'ShopKeeperTalk:Castletown_Buying_Castle04_010', 'isBottle': False, 'isOneOff': True, 'isHeartPiece': False, 'Index': -1, 'isIngredients': False, 'BottleContent': 'MedicineRed', 'price': 'price', 'itemKey': 'Ornament19', 'MultiMessage': 'ShopItem:BuyItemCastleShopCloth'})

        } else {

            call _CastleMessageSelect({'ItemNameEntryName': 'ShopItem:BuyItemCastleShopCloth', 'message': 'ShopKeeperTalk:CastletownDress_Buying_Castle04_010', 'isBottle': False, 'isOneOff': True, 'isHeartPiece': False, 'Index': -1, 'isIngredients': False, 'BottleContent': 'MedicineRed', 'price': 'price', 'itemKey': 'Ornament19', 'MultiMessage': 'ShopItem:BuyItemCastleShopCloth'})

        }
    }
}

void Kakariko01() {
    Dialog.SetInt({'index': 0, 'value': 'price'})

    call _KakarikoMessageSelect({'price': 'price', 'message': 'ShopKeeperTalk:KakarikoVillage_Buying_Kakariko01_010', 'isBottle': False, 'isOneOff': False, 'isHeartPiece': False, 'Index': -1, 'BottleContent': 'MedicineRed', 'isIngredients': True, 'itemKey': 'SmoothieIngredient02', 'ItemNameEntryName': 'ShopItem:KakarikoSingle', 'MultiMessage': 'ShopItem:KakarikoMulti'})

}

void Kakariko02() {
    Dialog.SetInt({'index': 0, 'value': 'price'})

    call _KakarikoMessageSelect({'price': 'price', 'message': 'ShopKeeperTalk:KakarikoVillage_Buying_Kakariko02_010', 'isBottle': False, 'isOneOff': False, 'isHeartPiece': False, 'Index': -1, 'isIngredients': False, 'itemKey': 'MedicineBlue', 'BottleContent': 'MedicineBlue', 'ItemNameEntryName': 'ShopItem:BuyItemGeneralShop03', 'MultiMessage': 'ShopItem:BuyItemGeneralShop03'})

}

void Kakariko03() {
    Dialog.SetInt({'index': 0, 'value': 'price'})

    call _KakarikoMessageSelect({'price': 'price', 'itemKey': 'MedicineRed', 'ItemNameEntryName': 'ShopItem:BuyItemGeneralShop01', 'message': 'ShopKeeperTalk:KakarikoVillage_Buying_Kakariko03_010', 'isBottle': False, 'isOneOff': False, 'isHeartPiece': False, 'Index': -1, 'isIngredients': False, 'BottleContent': 'MedicineRed', 'MultiMessage': 'ShopItem:BuyItemGeneralShop01'})

}

void Kakariko04() {
    Dialog.SetInt({'index': 0, 'value': 'price'})

    call _KakarikoMessageSelect({'price': 'price', 'itemKey': 'MedicineYellow', 'message': 'ShopKeeperTalk:KakarikoVillage_Buying_Kakariko04_010', 'isBottle': False, 'isOneOff': False, 'isHeartPiece': False, 'Index': -1, 'ItemNameEntryName': 'ShopItem:BuyItemGeneralShop02', 'isIngredients': False, 'BottleContent': 'MedicineYellow', 'MultiMessage': 'ShopItem:BuyItemGeneralShop02'})

}

void _ItemBuy() {
    if !Player.CheckRupee({'amount': 'price'}) {
        Event103:

        call _CancelTalk({'shopKeeper': 'shopKeeper', 'Message': 'MoneyNotEnough', 'TalkAnime': 'TalkAnime', 'cancelFace': 'cancelFace'})

    } else {
        Event274:
        ShopItem.CloseShopUI()
        Character[_ItemBuyMultiple(shopKeeper)].PlayAnimationNoWait({'name': 'yes01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Character[_ItemBuyMultiple(shopKeeper)].PlayAnimationNoWait({'name': 'WaitAnime', 'layer': 0, 'blendFrame': -1, 'restart': False})
        if !FlowControl.Branch({'value': 'isOneOff'}) {
            if !FlowControl.Branch({'value': 'isIngredients'}) {
                Player.GenericItemGetSequence({'itemKey': 'itemKey', 'messageEntry': 'ItemMessageEntryName', 'count': 1, 'keepRaise': False, 'index': -1})
                Player.AddDrink({'symbol': 'BottleContent'})
                Player.PayPrice({'price': 'price'})

                call _GeneralTalk({'facial': 'smile', 'shopKeeper': 'shopKeeper', 'Message': 'ShoppingComp', 'TalkAnime': 'TalkAnime'})

                EventFlags.SetFlag({'symbol': 'DrinkMenu_Open', 'value': True})
            } else {
                Player.GenericItemGetSequence({'itemKey': 'itemKey', 'messageEntry': 'ItemMessageEntryName', 'count': 1, 'keepRaise': False, 'index': -1})
                ShopUI.BuyMultiple({'price': 'price', 'itemKey': 'itemKey'})

                call _GeneralTalk({'facial': 'smile', 'shopKeeper': 'shopKeeper', 'Message': 'ShoppingComp', 'TalkAnime': 'TalkAnime'})

            }
        } else
        if !FlowControl.Branch({'value': 'isHeartPiece'}) {
            ShopItem.SellOut()
            Player.GenericItemGetSequence({'itemKey': 'itemKey', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
            Player.AddItem({'itemKey': 'itemKey', 'index': 'Index', 'count': 1, 'autoEquip': False})
            Player.PayPrice({'price': 'price'})

            call _GeneralTalk({'facial': 'smile', 'shopKeeper': 'shopKeeper', 'Message': 'ShoppingComp', 'TalkAnime': 'TalkAnime'})

        } else
        switch Zelda.GetHeartPieces() {
          case [0, 1, 2]:
            ShopItem.SellOut()
            Player.GenericItemGetSequence({'messageEntry': '', 'itemKey': 'itemKey', 'count': 1, 'keepRaise': False, 'index': -1})
            Player.AddItem({'itemKey': 'itemKey', 'index': 'Index', 'count': 1, 'autoEquip': False})
            Player.PayPrice({'price': 'price'})

            call _GeneralTalk({'facial': 'smile', 'shopKeeper': 'shopKeeper', 'Message': 'ShoppingComp', 'TalkAnime': 'TalkAnime'})

          case 3:
            ShopItem.SellOut()
            Player.GenericItemGetSequence({'messageEntry': '', 'itemKey': 'itemKey', 'count': 1, 'keepRaise': False, 'index': -1})
            Player.AddItem({'itemKey': 'itemKey', 'index': 'Index', 'count': 1, 'autoEquip': False})
            Player.PayPrice({'price': 'price'})

            call _GeneralTalk({'facial': 'smile', 'shopKeeper': 'shopKeeper', 'Message': 'ShoppingComp', 'TalkAnime': 'TalkAnime'})

        }
    }
}

void _VillageMessageSelect() {

    call _ItemSelect({'NotBuying': 'ShopKeeperTalk:SouthernVillage_NotBuying_010', 'MoneyNotEnough': 'ShopKeeperTalk:SouthernVillage_MoneyNotEnough_010', 'ShoppingComp': 'ShopKeeperTalk:SouthernVillage_ShoppingComp_010', 'WaitAnime': 'wait03', 'TalkAnime': 'talk_seller', 'InventryMax': 'ShopKeeperTalk:SouthernVillage_InventryMax_010', 'BuyConfirm': 'ShopKeeperTalk:SouthernVillage_BuyConfirm_010', 'facial': 'smile', 'cancelFace': 'sad', 'message': 'message', 'price': 'price', 'itemKey': 'itemKey', 'BottleContent': 'BottleContent', 'TakeOutEntryName': 'TakeOutEntryName', 'isOneOff': 'isOneOff', 'isBottle': 'isBottle', 'isHeartPiece': 'isHeartPiece', 'Index': 'Index', 'isIngredients': 'isIngredients', 'shopKeeper': ActorIdentifier(name="HylianM007"), 'MultiMessage': 'MultiMessage'})

}

void _SeasideMessageSelect() {

    call _ItemSelect({'NotBuying': 'ShopKeeperTalk:SeasideVillage_NotBuying_010', 'MoneyNotEnough': 'ShopKeeperTalk:SeasideVillage_MoneyNotEnough_010', 'ShoppingComp': 'ShopKeeperTalk:SeasideVillage_ShoppingComp_010', 'TalkAnime': 'talk01', 'facial': 'smile', 'cancelFace': 'sad', 'WaitAnime': 'wait03', 'price': 'price', 'message': 'message', 'itemKey': 'itemKey', 'BottleContent': 'BottleContent', 'TakeOutEntryName': 'ItemNameEntryName', 'isHeartPiece': 'isHeartPiece', 'Index': 'Index', 'isBottle': 'isBottle', 'isOneOff': 'isOneOff', 'isIngredients': 'isIngredients', 'MultiMessage': 'MultiMessage', 'InventryMax': 'ShopKeeperTalk:SeasideVillage_InventryMax_010', 'BuyConfirm': 'ShopKeeperTalk:SouthernVillage_BuyConfirm_010', 'shopKeeper': ActorIdentifier(name="HylianF018")})

}

void _RiverMessageSelect() {

    call _ItemSelect({'NotBuying': 'ShopKeeperTalk:ZoraRiverShop_NotBuying_010', 'MoneyNotEnough': 'ShopKeeperTalk:ZoraRiverShop_MoneyNotEnough_010', 'ShoppingComp': 'ShopKeeperTalk:ZoraRiverShop_ShoppingComp_010', 'WaitAnime': 'wait01', 'InventryMax': 'ShopKeeperTalk:ZoraRiverShop_InventryMax_010', 'BuyConfirm': 'ShopKeeperTalk:ZoraRiverShop_BuyConfirm_010', 'facial': 'smile', 'cancelFace': 'sad', 'TalkAnime': 'talk01', 'message': 'message', 'price': 'price', 'itemKey': 'itemKey', 'BottleContent': 'BottleContent', 'TakeOutEntryName': 'ItemNameEntryName', 'isBottle': 'isBottle', 'isOneOff': 'isOneOff', 'isHeartPiece': 'isHeartPiece', 'Index': 'Index', 'isIngredients': 'isIngredients', 'shopKeeper': ActorIdentifier(name="ZoraRiver005"), 'MultiMessage': 'MultiMessage'})

}

void _SeaMessageSelect() {

    call _ItemSelect({'NotBuying': 'ShopKeeperTalk:ZoraSeaShop_NotBuying_010', 'MoneyNotEnough': 'ShopKeeperTalk:ZoraSeaShop_MoneyNotEnough_010', 'ShoppingComp': 'ShopKeeperTalk:ZoraSeaShop_ShoppingComp_010', 'TalkAnime': 'talk01', 'WaitAnime': 'wait01', 'InventryMax': 'ShopKeeperTalk:ZoraSeaShop_InventryMax_010', 'BuyConfirm': 'ShopKeeperTalk:ZoraSeaShop_BuyConfirm_010', 'facial': 'smile', 'cancelFace': 'sad', 'price': 'price', 'message': 'message', 'itemKey': 'itemKey', 'BottleContent': 'BottleContent', 'TakeOutEntryName': 'ItemNameEntryName', 'isHeartPiece': 'isHeartPiece', 'Index': 'Index', 'isBottle': 'isBottle', 'isOneOff': 'isOneOff', 'isIngredients': 'isIngredients', 'shopKeeper': ActorIdentifier(name="ZoraSea001"), 'MultiMessage': 'MultiMessage'})

}

void _GerudoMessageSelect() {

    call _ItemSelect({'NotBuying': 'ShopKeeperTalk:GerudoShop_NotBuying_010', 'MoneyNotEnough': 'ShopKeeperTalk:GerudoShop_MoneyNotEnough_010', 'ShoppingComp': 'ShopKeeperTalk:GerudoShop_ShoppingComp_010', 'InventryMax': 'ShopKeeperTalk:GerudoShop_InventryMax_010', 'BuyConfirm': 'ShopKeeperTalk:GerudoShop_BuyConfirm_010', 'TalkAnime': 'talk04', 'facial': 'smile', 'cancelFace': 'sad', 'WaitAnime': 'wait02', 'price': 'price', 'message': 'message', 'itemKey': 'itemKey', 'BottleContent': 'BottleContent', 'TakeOutEntryName': 'ItemNameEntryName', 'isBottle': 'isBottle', 'isOneOff': 'isOneOff', 'isHeartPiece': 'isHeartPiece', 'Index': 'Index', 'isIngredients': 'isIngredients', 'shopKeeper': ActorIdentifier(name="Gerudo003"), 'MultiMessage': 'MultiMessage'})

}

void _GoronLMessageSelect() {

    call _ItemSelect({'NotBuying': 'ShopKeeperTalk:GoronShopL_NotBuying_010', 'MoneyNotEnough': 'ShopKeeperTalk:GoronShopL_MoneyNotEnough_010', 'ShoppingComp': 'ShopKeeperTalk:GoronShopL_ShoppingComp_010', 'TalkAnime': 'talk01', 'WaitAnime': 'wait01', 'BuyConfirm': 'ShopKeeperTalk:GoronShopR_BuyConfirm_010', 'price': 'price', 'message': 'message', 'itemKey': 'itemKey', 'BottleContent': 'BottleContent', 'TakeOutEntryName': 'ItemNameEntryName', 'isBottle': 'isBottle', 'isOneOff': 'isOneOff', 'isHeartPiece': 'isHeartPiece', 'Index': 'Index', 'isIngredients': 'isIngredients', 'facial': 'smile', 'cancelFace': 'sad', 'MultiMessage': 'ItemNameEntryName', 'InventryMax': 'ShopKeeperTalk:GoronShopL_InventoryMax_010', 'shopKeeper': ActorIdentifier(name="Goron000")})

}

void _GoronRMessageSelect() {

    call _ItemSelect({'NotBuying': 'ShopKeeperTalk:GoronShopR_NotBuying_010', 'MoneyNotEnough': 'ShopKeeperTalk:GoronShopR_MoneyNotEnough_010', 'ShoppingComp': 'ShopKeeperTalk:GoronShopR_ShoppingComp_010', 'TalkAnime': 'talk01', 'WaitAnime': 'wait01', 'InventryMax': 'ShopKeeperTalk:GoronShopR_InventryMax_010', 'BuyConfirm': 'ShopKeeperTalk:GoronShopR_BuyConfirm_010', 'facial': 'smile', 'cancelFace': 'sad', 'price': 'price', 'message': 'message', 'itemKey': 'itemKey', 'BottleContent': 'BottleContent', 'TakeOutEntryName': 'ItemNameEntryName', 'isBottle': 'isBottle', 'isOneOff': 'isOneOff', 'isHeartPiece': 'isHeartPiece', 'Index': 'Index', 'isIngredients': 'isIngredients', 'shopKeeper': ActorIdentifier(name="Goron012"), 'MultiMessage': 'MultiMessage'})

}

void _CastleMessageSelect() {
    if Player.CheckOutfit({'outfit': 'Adventure1'}) {

        call _ItemSelect({'NotBuying': 'ShopKeeperTalk:Castletown_NotBuying_010', 'MoneyNotEnough': 'ShopKeeperTalk:Castletown_MoneyNotEnough_010', 'ShoppingComp': 'ShopKeeperTalk:Castletown_ShoppingComp_010', 'InventryMax': 'ShopKeeperTalk:Castletown_InventryMax_010', 'BuyConfirm': 'ShopKeeperTalk:Castletown_BuyConfirm_010', 'TalkAnime': 'talk_seller', 'WaitAnime': 'wait03', 'facial': 'smile', 'cancelFace': 'sad', 'price': 'price', 'itemKey': 'itemKey', 'BottleContent': 'BottleContent', 'message': 'message', 'TakeOutEntryName': 'ItemNameEntryName', 'isBottle': 'isBottle', 'isOneOff': 'isOneOff', 'isHeartPiece': 'isHeartPiece', 'Index': 'Index', 'isIngredients': 'isIngredients', 'shopKeeper': ActorIdentifier(name="HylianM018"), 'MultiMessage': 'MultiMessage'})

    } else {

        call _ItemSelect({'NotBuying': 'ShopKeeperTalk:CastletownDress_NotBuying_010', 'MoneyNotEnough': 'ShopKeeperTalk:CastletownDress_MoneyNotEnough_010', 'ShoppingComp': 'ShopKeeperTalk:CastletownDress_ShoppingComp_010', 'InventryMax': 'ShopKeeperTalk:CastletownDress_InventryMax_010', 'BuyConfirm': 'ShopKeeperTalk:CastletownDress_BuyConfirm_010', 'TalkAnime': 'talk_seller', 'WaitAnime': 'wait03', 'facial': 'smile', 'cancelFace': 'sad', 'price': 'price', 'itemKey': 'itemKey', 'BottleContent': 'BottleContent', 'message': 'message', 'TakeOutEntryName': 'ItemNameEntryName', 'isBottle': 'isBottle', 'isOneOff': 'isOneOff', 'isHeartPiece': 'isHeartPiece', 'Index': 'Index', 'isIngredients': 'isIngredients', 'shopKeeper': ActorIdentifier(name="HylianM018"), 'MultiMessage': 'MultiMessage'})

    }
}

void _KakarikoMessageSelect() {

    call _ItemSelect({'NotBuying': 'ShopKeeperTalk:KakarikoVillage_NotBuying_010', 'MoneyNotEnough': 'ShopKeeperTalk:KakarikoVillage_MoneyNotEnough_010', 'ShoppingComp': 'ShopKeeperTalk:KakarikoVillage_ShoppingComp_010', 'TalkAnime': 'talk01', 'WaitAnime': 'wait01', 'InventryMax': 'ShopKeeperTalk:KakarikoVillage_InventryMax_010', 'BuyConfirm': 'ShopKeeperTalk:KakarikoVillage_BuyConfirm_010', 'facial': 'smile', 'cancelFace': 'sad', 'price': 'price', 'message': 'message', 'itemKey': 'itemKey', 'BottleContent': 'BottleContent', 'TakeOutEntryName': 'ItemNameEntryName', 'isBottle': 'isBottle', 'isOneOff': 'isOneOff', 'isHeartPiece': 'isHeartPiece', 'Index': 'Index', 'isIngredients': 'isIngredients', 'shopKeeper': ActorIdentifier(name="HylianF008"), 'MultiMessage': 'MultiMessage'})

}

void SoldOutVillage() {
    HylianM007.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'keepPersonalSpace': False, 'message': 'ShopKeeperTalk:SouthernVillage_SoldOut_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void _GeneralTalk() {
    Hud.WaitRupeeCount()

    fork {
        Character[_GeneralTalk(shopKeeper)].Talk({'message': 'Message', 'getAttention': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor2': ActorIdentifier(name="Player"), 'actor1': 'shopKeeper', 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Player.AimActor({'actor': 'shopKeeper', 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Character[_GeneralTalk(shopKeeper)].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Character[_GeneralTalk(shopKeeper)].PlayAnimationNoWait({'name': 'TalkAnime', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner.AimActor({'actor': 'shopKeeper', 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Character[_GeneralTalk(shopKeeper)].SetFacialExpression({'expression': 'facial'})
    }

}

void VillageHeartPiece() {
    Dialog.SetInt({'index': 0, 'value': 'price'})

    call _VillageMessageSelect({'BottleContent': 'General01', 'price': 'price', 'itemKey': 'HeartPiece', 'isBottle': False, 'isHeartPiece': True, 'Index': 3, 'isOneOff': True, 'TakeOutEntryName': 'ShopItem:BuyItemHeartPiece', 'message': 'ShopKeeperTalk:SouthernVillage_Buying_Village05_010', 'isIngredients': False, 'MultiMessage': 'ShopItem:BuyItemHeartPiece'})

}

void Castle04() {
    Dialog.SetInt({'index': 0, 'value': 'price'})
    switch QuestSystem.CheckProgress({'symbol': 'HyruleCastle_LuberiHouse:1055863140'}) {
      case [4294967295, 0]:

        call _ZeldaWelcomeBack()

      case 1:
        if Player.CheckOutfit({'outfit': 'Adventure1'}) {

            call _CastleMessageSelect({'isBottle': False, 'isHeartPiece': False, 'Index': -1, 'itemKey': 'MedicineYellow', 'isOneOff': False, 'ItemNameEntryName': 'ShopItem:BuyItemGeneralShop02', 'message': 'ShopKeeperTalk:Castletown_Buying_Castle05_010', 'isIngredients': False, 'BottleContent': 'MedicineYellow', 'price': 'price', 'MultiMessage': 'ShopItem:BuyItemGeneralShop02'})

        } else {

            call _CastleMessageSelect({'isBottle': False, 'isHeartPiece': False, 'Index': -1, 'itemKey': 'MedicineYellow', 'isOneOff': False, 'ItemNameEntryName': 'ShopItem:BuyItemGeneralShop02', 'message': 'ShopKeeperTalk:CastletownDress_Buying_Castle05_010', 'isIngredients': False, 'BottleContent': 'MedicineYellow', 'price': 'price', 'MultiMessage': 'ShopItem:BuyItemGeneralShop02'})

        }
    }
}

void RiverOrnament() {
    Dialog.SetInt({'index': 0, 'value': 'price'})

    call _RiverMessageSelect({'price': 'price', 'isBottle': False, 'isHeartPiece': False, 'Index': -1, 'isIngredients': False, 'message': 'ShopKeeperTalk:ZoraRiverShop_Buying_River05_010', 'itemKey': 'Ornament20', 'BottleContent': 'MedicineRed', 'isOneOff': True, 'ItemNameEntryName': 'ShopItem:BuyItemZoraRiverShopOrnament', 'EatInEntryName': 'ShopKeeperTalk:UseItemGeneralShop01', 'MultiMessage': 'ShopItem:BuyItemZoraRiverShopOrnament'})

}

void SoldOutRiver() {
    ZoraRiver005.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'keepPersonalSpace': False, 'message': 'ShopKeeperTalk:ZoraRiverShop_SoldOut_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void GerudoOrnament() {
    Dialog.SetInt({'index': 0, 'value': 'price'})

    call _GerudoMessageSelect({'price': 'price', 'isBottle': False, 'isHeartPiece': False, 'Index': -1, 'isIngredients': False, 'message': 'ShopKeeperTalk:GerudoShop_Buying_Gerudo04_011', 'itemKey': 'Ornament17', 'isOneOff': True, 'BottleContent': 'MedicineRed', 'ItemNameEntryName': 'ShopItem:BuyItemGerudoShopOrnament', 'MultiMessage': 'ShopItem:BuyItemGerudoShopOrnament'})

}

void SoldOutGerudo() {
    Gerudo003.GenericTalkSequenceWithDialog({'message': 'ShopKeeperTalk:GerudoShop_SoldOut_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void KakarikoOrnament() {
    Dialog.SetInt({'index': 0, 'value': 'price'})

    call _KakarikoMessageSelect({'price': 'price', 'isBottle': False, 'isHeartPiece': False, 'Index': -1, 'isIngredients': False, 'message': 'ShopKeeperTalk:KakarikoVillage_Buying_Kakariko06_010', 'itemKey': 'Ornament21', 'BottleContent': 'MedicineRed', 'isOneOff': True, 'ItemNameEntryName': 'ShopItem:BuyItemKakarikoShopOrnament', 'MultiMessage': 'ShopItem:BuyItemKakarikoShopOrnament'})

}

void SoldOutKakariko() {
    HylianF008.GenericTalkSequenceWithDialog({'message': 'ShopKeeperTalk:KakarikoVillage_SoldOut_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void SoldOutCastleOrnament() {
    if Player.CheckOutfit({'outfit': 'Adventure1'}) {
        HylianM018.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'keepPersonalSpace': False, 'message': 'ShopKeeperTalk:Castletown_SoldOut_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else {
        HylianM018.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'keepPersonalSpace': False, 'message': 'ShopKeeperTalk:CastletownDress_SoldOut_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
}

void _ItemBuyMultiple() {
    if !Player.HasItem({'count': 99, 'itemKey': 'itemKey', 'index': -1}) {
        if !ShopUI.CanBuy({'price': 'price'}) {
            goto Event103
        } else {
            goto Event274
        }
    } else {

        call _CancelTalk({'shopKeeper': 'shopKeeper', 'TalkAnime': 'TalkAnime', 'Message': 'InventryMax', 'cancelFace': 'cancelFace'})

    }
}

void _CancelTalk() {

    fork {
        Character[_CancelTalk(shopKeeper)].Talk({'message': 'Message', 'getAttention': False})
    } {
        Player.AimActor({'actor': 'shopKeeper', 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Character[_CancelTalk(shopKeeper)].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Character[_CancelTalk(shopKeeper)].PlayAnimationNoWait({'name': 'TalkAnime', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner.AimActor({'actor': 'shopKeeper', 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Character[_CancelTalk(shopKeeper)].SetFacialExpression({'expression': 'cancelFace'})
    }

}

void ZoraSeaSingle() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient00'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient00'}) {
        Dialog.ShowKeep({'message': 'ItemGet:Ingredient00'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:Ingredient00'})
    }
}

void ZoraRiverSingle() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient01'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient01'}) {
        Dialog.ShowKeep({'message': 'ItemGet:Ingredient01'})
        Dialog.Show({'message': 'ItemGet:Ingredient01_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:Ingredient01'})
    }
}

void KakarikoSingle() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient02'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient02'}) {
        Dialog.ShowKeep({'message': 'ItemGet:Ingredient02'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:Ingredient02'})
    }
}

void Castle1Single() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient03'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient03'}) {
        Dialog.ShowKeep({'message': 'ItemGet:Ingredient03'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:Ingredient03'})
    }
}

void Gerudo1Single() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient04'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient04'}) {
        Dialog.ShowKeep({'message': 'ItemGet:Ingredient04'})
        Dialog.Show({'message': 'ItemGet:Ingredient04_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:Ingredient04'})
    }
}

void SouthSingle() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient05'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient05'}) {
        Dialog.ShowKeep({'message': 'ItemGet:Ingredient05'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:Ingredient05'})
    }
}

void Gerudo2Single() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient07'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient07'}) {
        Dialog.ShowKeep({'message': 'ItemGet:Ingredient07'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:Ingredient07'})
    }
}

void Goron1Single() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient08'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient08'}) {
        Dialog.ShowKeep({'message': 'ItemGet:Ingredient08'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:Ingredient08'})
    }
}

void Goron2Single() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient09'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient09'}) {
        Dialog.ShowKeep({'message': 'ItemGet:Ingredient09'})
        Dialog.Show({'message': 'ItemGet:Ingredient09_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:Ingredient09'})
    }
}

void Castle2Single() {
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient10'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient10'}) {
        Dialog.ShowKeep({'message': 'ItemGet:Ingredient10'})
        Dialog.Show({'message': 'ItemGet:Ingredient10_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:Ingredient10'})
    }
}

void ZoraSeaMulti() {
    ShopUI.SetItemCount()
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient00'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient00'}) {
        Dialog.ShowKeep({'message': 'ItemGet:ItemGet_Ingredient00'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:ItemGet_Ingredient00'})
    }
}

void ZoraRiverMulti() {
    ShopUI.SetItemCount()
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient01'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient01'}) {
        Dialog.ShowKeep({'message': 'ItemGet:ItemGet_Ingredient01'})
        Dialog.Show({'message': 'ItemGet:Ingredient01_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:ItemGet_Ingredient01'})
    }
}

void KakarikoMulti() {
    ShopUI.SetItemCount()
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient02'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient02'}) {
        Dialog.ShowKeep({'message': 'ItemGet:ItemGet_Ingredient02'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:ItemGet_Ingredient02'})
    }
}

void Castle1Multi() {
    ShopUI.SetItemCount()
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient03'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient03'}) {
        Dialog.ShowKeep({'message': 'ItemGet:ItemGet_Ingredient03'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:ItemGet_Ingredient03'})
    }
}

void Gerudo1Multi() {
    ShopUI.SetItemCount()
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient04'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient04'}) {
        Dialog.ShowKeep({'message': 'ItemGet:ItemGet_Ingredient04'})
        Dialog.Show({'message': 'ItemGet:Ingredient04_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:ItemGet_Ingredient04'})
    }
}

void SouthMulti() {
    ShopUI.SetItemCount()
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient05'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient05'}) {
        Dialog.ShowKeep({'message': 'ItemGet:ItemGet_Ingredient05'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:ItemGet_Ingredient05'})
    }
}

void Gerudo2Multi() {
    ShopUI.SetItemCount()
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient07'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient07'}) {
        Dialog.ShowKeep({'message': 'ItemGet:ItemGet_Ingredient07'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:ItemGet_Ingredient07'})
    }
}

void Goron1Multi() {
    ShopUI.SetItemCount()
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient08'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient08'}) {
        Dialog.ShowKeep({'message': 'ItemGet:ItemGet_Ingredient08'})
        Dialog.Show({'message': 'ItemGet:Ingredient_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:ItemGet_Ingredient08'})
    }
}

void Goron2Multi() {
    ShopUI.SetItemCount()
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient09'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient09'}) {
        Dialog.ShowKeep({'message': 'ItemGet:ItemGet_Ingredient09'})
        Dialog.Show({'message': 'ItemGet:Ingredient09_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:ItemGet_Ingredient09'})
    }
}

void Castle2Multi() {
    ShopUI.SetItemCount()
    if !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:Ingredient10'})
    && !EventFlags.CheckMessgaeFlag({'message': 'ItemGet:ItemGet_Ingredient10'}) {
        Dialog.ShowKeep({'message': 'ItemGet:ItemGet_Ingredient10'})
        Dialog.Show({'message': 'ItemGet:Ingredient10_Explanation'})
    } else {
        Dialog.Show({'message': 'ItemGet:ItemGet_Ingredient10'})
    }
}
