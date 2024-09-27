-------- EventFlow: ItemKeySmall --------

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
    Dialog.Show({'message': 'ItemGet:KeySmall'})
}

void Get() {
    Zelda.GenericItemGetSequence({'itemKey': 'KeySmall', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Zelda.AddItem({'itemKey': 'KeySmall', 'autoEquip': False, 'count': 1, 'index': -1})
}
