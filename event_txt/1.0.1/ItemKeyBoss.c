-------- EventFlow: ItemKeyBoss --------

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

void Message() {
    Dialog.Show({'message': 'ItemGet:KeyBoss'})
}

void Get() {
    Zelda.GenericItemGetSequence({'itemKey': 'KeyBoss', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Zelda.AddItem({'itemKey': 'KeyBoss', 'autoEquip': False, 'index': 'index', 'count': 1})
}
