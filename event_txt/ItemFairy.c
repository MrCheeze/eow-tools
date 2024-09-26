-------- EventFlow: ItemFairy --------

Actor: Zelda
entrypoint: None()
actions: ['GenericItemGetSequence']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

void Message_Fairy() {
    Dialog.Show({'message': 'ItemGet:Fairy'})
}

void Get_Fairy() {
    Zelda.GenericItemGetSequence({'itemKey': 'WeakenedFairy', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
}
