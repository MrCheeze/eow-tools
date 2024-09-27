-------- EventFlow: ItemMachine --------

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

void Message00() {
    Dialog.Show({'message': 'ItemGet:MachineUnlock00'})
    EventFlags.SetFlag({'symbol': 'GetMachineUnlock00', 'value': True})
}

void Message01() {
    Dialog.Show({'message': 'ItemGet:MachineUnlock01'})
}

void Message02() {
    Dialog.Show({'message': 'ItemGet:MachineUnlock02'})
}

void Message03() {
    Dialog.Show({'message': 'ItemGet:MachineUnlock03'})
}

void MainspringGetMessage() {
    Dialog.Show({'message': 'ItemGet:Mainspring'})
}
