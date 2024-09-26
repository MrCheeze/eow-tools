-------- EventFlow: ItemOrnament --------

Actor: Dialog
entrypoint: None()
actions: ['Show']
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

void Ornament00() {
    Dialog.Show({'message': 'ItemGet:Ornament00'})

    call _TutorialModal_Ornament()

}

void Ornament01() {
    Dialog.Show({'message': 'ItemGet:Ornament01'})

    call _TutorialModal_Ornament()

}

void Ornament02() {
    Dialog.Show({'message': 'ItemGet:Ornament02'})

    call _TutorialModal_Ornament()

}

void Ornament03() {
    Dialog.Show({'message': 'ItemGet:Ornament03'})

    call _TutorialModal_Ornament()

}

void Ornament04() {
    Dialog.Show({'message': 'ItemGet:Ornament04'})

    call _TutorialModal_Ornament()

}

void Ornament05() {
    Dialog.Show({'message': 'ItemGet:Ornament05'})

    call _TutorialModal_Ornament()

}

void Ornament06() {
    Dialog.Show({'message': 'ItemGet:Ornament06'})

    call _TutorialModal_Ornament()

}

void Ornament07() {
    Dialog.Show({'message': 'ItemGet:Ornament07'})

    call _TutorialModal_Ornament()

}

void Ornament08() {
    Dialog.Show({'message': 'ItemGet:Ornament08'})

    call _TutorialModal_Ornament()

}

void Ornament09() {
    Dialog.Show({'message': 'ItemGet:Ornament09'})

    call _TutorialModal_Ornament()

}

void Ornament10() {
    Dialog.Show({'message': 'ItemGet:Ornament10'})

    call _TutorialModal_Ornament()

}

void Ornament11() {
    Dialog.Show({'message': 'ItemGet:Ornament11'})

    call _TutorialModal_Ornament()

}

void Ornament12() {
    Dialog.Show({'message': 'ItemGet:Ornament12'})

    call _TutorialModal_Ornament()

}

void Ornament13() {
    Dialog.Show({'message': 'ItemGet:Ornament13'})

    call _TutorialModal_Ornament()

}

void Ornament14() {
    Dialog.Show({'message': 'ItemGet:Ornament14'})

    call _TutorialModal_Ornament()

}

void Ornament15() {
    Dialog.Show({'message': 'ItemGet:Ornament15'})

    call _TutorialModal_Ornament()

}

void Ornament16() {
    Dialog.Show({'message': 'ItemGet:Ornament16'})

    call _TutorialModal_Ornament()

}

void Ornament17() {
    Dialog.Show({'message': 'ItemGet:Ornament17'})

    call _TutorialModal_Ornament()

}

void Ornament18() {
    Dialog.Show({'message': 'ItemGet:Ornament18'})

    call _TutorialModal_Ornament()

}

void Ornament19() {
    Dialog.Show({'message': 'ItemGet:Ornament19'})

    call _TutorialModal_Ornament()

}

void Ornament20() {
    Dialog.Show({'message': 'ItemGet:Ornament20'})

    call _TutorialModal_Ornament()

}

void Ornament21() {
    Dialog.Show({'message': 'ItemGet:Ornament21'})

    call _TutorialModal_Ornament()

}

void _TutorialModal_Ornament() {
    if !EventFlags.CheckFlag({'symbol': 'TutorialModal_ItemOrnamentGet'}) {
        TutorialUI.ShowModal({'key': 'OrnamentModal'})
        EventFlags.SetFlag({'value': True, 'symbol': 'TutorialModal_ItemOrnamentGet'})
    }
}

void Ornament22() {
    Dialog.Show({'message': 'ItemGet:Ornament22'})

    call _TutorialModal_Ornament()

}

void Ornament23() {
    Dialog.Show({'message': 'ItemGet:Ornament23'})

    call _TutorialModal_Ornament()

}

void Ornament24() {
    Dialog.Show({'message': 'ItemGet:Ornament24'})

    call _TutorialModal_Ornament()

}

void Ornament25() {
    Dialog.Show({'message': 'ItemGet:Ornament25'})

    call _TutorialModal_Ornament()

}

void Ornament26() {
    Dialog.Show({'message': 'ItemGet:Ornament26'})

    call _TutorialModal_Ornament()

}

void Ornament27() {
    Dialog.Show({'message': 'ItemGet:Ornament27'})

    call _TutorialModal_Ornament()

}

void Ornament28() {
    Dialog.Show({'message': 'ItemGet:Ornament28'})

    call _TutorialModal_Ornament()

}

void Ornament31() {
    Dialog.Show({'message': 'ItemGet:Ornament31'})

    call _TutorialModal_Ornament()

}
