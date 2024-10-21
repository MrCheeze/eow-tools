-------- EventFlow: ItemBow --------

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['GenericItemGetSequence', 'AddItem']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AddPasteEnergy']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

void Message() {
    Dialog.Show({'message': 'ItemGet:Bow'})
}

void Get() {
    Zelda.GenericItemGetSequence({'itemKey': 'Arrow', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Zelda.AddItem({'autoEquip': True, 'itemKey': 'Arrow', 'count': 1, 'index': -1})
    Player.AddPasteEnergy({'amount': 50})
    EventFlags.SetFlag({'symbol': 'Ev_LinkBowGet', 'value': True})
}

void MessageLv2() {
    Dialog.Show({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_BowLv2'})
}

void MessageLv3() {
    Dialog.Show({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_BowLv3'})
}
