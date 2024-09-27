-------- EventFlow: ItemRupee --------

Actor: Zelda
entrypoint: None()
actions: ['GenericItemGetSequence', 'AddRupee']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

void Message_1Rupee() {
    Dialog.Show({'message': 'ItemGet:Rupee1'})
}

void Get_1Rupee() {
    Zelda.GenericItemGetSequence({'itemKey': 'RupeeGreen', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Zelda.AddRupee({'amount': 1})
}

void Message_5Rupee() {
    Dialog.Show({'message': 'ItemGet:Rupee5'})
}

void Get_5Rupee() {
    Zelda.GenericItemGetSequence({'itemKey': 'RupeeBlue', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Zelda.AddRupee({'amount': 5})
}

void Message_20Rupee() {
    Dialog.Show({'message': 'ItemGet:Rupee20'})
}

void Get_20Rupee() {
    Zelda.GenericItemGetSequence({'itemKey': 'RupeeRed', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Zelda.AddRupee({'amount': 20})
}

void Message_50Rupee() {
    Dialog.Show({'message': 'ItemGet:Rupee50'})
}

void Get_50Rupee() {
    Zelda.GenericItemGetSequence({'itemKey': 'RupeePurple', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Zelda.AddRupee({'amount': 50})
}

void Message_100Rupee() {
    Dialog.Show({'message': 'ItemGet:Rupee100'})
}

void Get_100Rupee() {
    Zelda.GenericItemGetSequence({'itemKey': 'RupeeSilver', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Zelda.AddRupee({'amount': 100})
}

void Message_300Rupee() {
    Dialog.Show({'message': 'ItemGet:Rupee300'})
}

void Get_300Rupee() {
    Zelda.GenericItemGetSequence({'itemKey': 'RupeeGold', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Zelda.AddRupee({'amount': 300})
}
