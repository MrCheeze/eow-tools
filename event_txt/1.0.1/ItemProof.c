-------- EventFlow: ItemProof --------

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

void MessageDin() {
    Dialog.Show({'message': 'ItemGet:ItemProofOfDin'})
}

void MessageNayru() {
    Dialog.Show({'message': 'ItemGet:ItemProofOfNayru'})
}

void MessageFarore() {
    Dialog.Show({'message': 'ItemGet:ItemProofOfFarore'})
}
