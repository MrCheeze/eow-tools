-------- EventFlow: ItemBomb --------

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

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

void Message() {
    Dialog.Show({'message': 'ItemGet:Bomb'})
}

void Get() {
    Zelda.GenericItemGetSequence({'itemKey': 'Bomb', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Zelda.AddItem({'itemKey': 'Bomb', 'autoEquip': False, 'count': 1, 'index': -1})
    EventFlags.SetFlag({'symbol': 'Ev_LinkBombGet', 'value': True})
}

void MessageLv2() {
    Dialog.Show({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_BombLv2'})
}

void MessageLv3() {
    Dialog.Show({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_BombLv3'})
}
