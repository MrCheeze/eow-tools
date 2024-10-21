-------- EventFlow: PuzzlePanel --------

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayJingle']
queries: []
params: None

Actor: DoorCloseGerudo
entrypoint: None()
actions: ['DoorOpen', 'GenericGimmickSequence']
queries: []
params: None

Actor: FloorPuzzlePanel
entrypoint: None()
actions: ['PlayMaterialAnimation', 'PlayOneshotSE']
queries: []
params: None

void SuccessEvent() {
    Timer.Wait({'time': 0.5})

    fork {
        FloorPuzzlePanel.PlayMaterialAnimation({'name': 'on', 'layer': 0})
        Timer.Wait({'time': 0.5})
        DoorCloseGerudo.GenericGimmickSequence({'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0})
        DoorCloseGerudo.DoorOpen()
        Timer.Wait({'time': 1.5})
        Audio.PlayJingle({'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
    } {
        FloorPuzzlePanel.PlayOneshotSE({'label': 'SE_OBJ_ORB_PANEL_ON', 'volume': 1.0, 'pitch': 1.0})
    }

}
