-------- EventFlow: ItemQuest --------

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

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

void Message00() {
    Dialog.Show({'message': 'ItemGet:ItemQuest00'})
}

void Get00() {
    Zelda.GenericItemGetSequence({'itemKey': 'ItemQuest00', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Zelda.AddItem({'autoEquip': False, 'itemKey': 'ItemQuest00', 'index': 'index', 'count': 1})
}

void Message01() {
    Dialog.Show({'message': 'ItemGet:ItemQuest01'})
}

void Get01() {
    Zelda.GenericItemGetSequence({'itemKey': 'ItemQuest01', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Zelda.AddItem({'autoEquip': False, 'index': 'index', 'itemKey': 'ItemQuest01', 'count': 1})
}

void Message02() {
    Dialog.Show({'message': 'ItemGet:ItemQuest02'})
}

void Get02() {
    Zelda.GenericItemGetSequence({'itemKey': 'ItemQuest02', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Zelda.AddItem({'autoEquip': False, 'index': 'index', 'itemKey': 'ItemQuest02', 'count': 1})
}

void Message04() {
    Dialog.Show({'message': 'ItemGet:ItemQuest04'})
    QuestSystem.SetProgress({'symbol': 'Firework_Valcano010:1704983646', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Get04() {
    Zelda.GenericItemGetSequence({'itemKey': 'ItemQuest04', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Zelda.AddItem({'autoEquip': False, 'index': 'index', 'itemKey': 'ItemQuest04', 'count': 1})
}

void Message05() {
    Dialog.Show({'message': 'ItemGet:ItemQuest05'})
}

void Get05() {
    Zelda.GenericItemGetSequence({'itemKey': 'ItemQuest05', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Zelda.AddItem({'autoEquip': False, 'index': 'index', 'itemKey': 'ItemQuest05', 'count': 1})
}

void Message06() {

    call HylianF027.Animal_HyrulePlains010_40_Start()

}

void Get06() {
    Zelda.GenericItemGetSequence({'itemKey': 'ItemQuest06', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Zelda.AddItem({'autoEquip': False, 'index': 'index', 'itemKey': 'ItemQuest06', 'count': 1})
}

void Message07() {
    Dialog.Show({'message': 'ItemGet:ItemQuest07'})
}

void Get07() {
    Zelda.GenericItemGetSequence({'itemKey': 'ItemQuest07', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Zelda.AddItem({'autoEquip': False, 'index': 'index', 'itemKey': 'ItemQuest07', 'count': 1})
}
