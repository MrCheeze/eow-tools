-------- EventFlow: ItemBottle --------

Actor: Zelda
entrypoint: None()
actions: ['GenericItemGetSequence', 'AddItem']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

void Message() {
    Dialog.Show({'message': 'ItemGet:Bottle'})
}

void Get() {
    Zelda.GenericItemGetSequence({'itemKey': 'Bottle', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Zelda.AddItem({'index': 'index', 'autoEquip': False, 'itemKey': 'Bottle', 'count': 1})
}
