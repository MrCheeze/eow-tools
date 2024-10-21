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

Actor: Hud
entrypoint: None()
actions: ['PlayOutAnimLayout']
queries: []
params: None

void Message_Fairy() {
    Dialog.Show({'message': 'ItemGet:Fairy'})
}

void Get_Fairy() {
    Hud.PlayOutAnimLayout({'HeartGauge': False, 'ItemSlot': True, 'PasteSlot': True, 'Rupee': True, 'KeyItem': True, 'MiniMap': True, 'PasteGauge': True, 'Operate': True, 'TimedAbility': True})
    Zelda.GenericItemGetSequence({'itemKey': 'WeakenedFairy', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
}
