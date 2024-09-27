-------- EventFlow: ItemDungeonMap --------

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

Actor: TutorialUI
entrypoint: None()
actions: ['ShowModal']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

void Message() {
    Dialog.Show({'message': 'ItemGet:DungeonMap'})
    if !EventFlags.CheckFlag({'symbol': 'DungeonMapModal_Clear'}) {
        TutorialUI.ShowModal({'key': 'DungeonMapModal'})
        EventFlags.SetFlag({'value': True, 'symbol': 'DungeonMapModal_Clear'})
    }
}

void Get() {
    Zelda.GenericItemGetSequence({'itemKey': 'DungeonMap', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Zelda.AddItem({'autoEquip': False, 'index': 'index', 'itemKey': 'DungeonMap', 'count': 1})
}
