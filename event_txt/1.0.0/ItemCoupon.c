-------- EventFlow: ItemCoupon --------

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

void Machine() {
    Dialog.Show({'message': 'ItemGet:MachineCoupon'})
}

void GetMachine() {
    Zelda.GenericItemGetSequence({'itemKey': 'ItemMachineCoupon', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Zelda.AddItem({'autoEquip': False, 'index': 'index', 'itemKey': 'ItemMachineCoupon', 'count': 1})
}

void Machine_many() {
    Dialog.Show({'message': 'ItemGet:ItemGet_MachineCoupon'})
}
