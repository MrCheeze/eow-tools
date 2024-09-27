-------- EventFlow: Door --------

Actor: Door
entrypoint: None()
actions: ['DoorOpen', 'DoorClose', 'GenericGimmickSequence']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

void Open() {
    Door.GenericGimmickSequence({'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0})
    Door.DoorOpen()
    Timer.Wait({'time': 0.5})
}

void Close() {
    Door.DoorClose()
}

void LockedDoorLock() {
    Dialog.Show({'message': 'System:Locked_DoorLock'})
}

void LockedDoorBoss() {
    Dialog.Show({'message': 'System:Locked_DoorBoss'})
}
