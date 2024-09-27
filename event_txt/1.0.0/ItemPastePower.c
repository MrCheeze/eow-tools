-------- EventFlow: ItemPastePower --------

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

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

void Message() {
    Dialog.Show({'message': 'ItemGet:Ener'})
}

void Get_PastePowerLow() {
    Zelda.GenericItemGetSequence({'itemKey': 'PastePowerLow', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Zelda.AddItem({'autoEquip': False, 'itemKey': 'PastePowerLow', 'count': 1, 'index': -1})

    call FirstPasetPowerCheck()

}

void FirstPasetPowerCheck() {
    if !EventFlags.CheckFlag({'symbol': 'EvPastePowerGet'}) {
        EventFlags.SetFlag({'symbol': 'EvPastePowerGet', 'value': True})
    }
}
