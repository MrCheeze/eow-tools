-------- EventFlow: DoorPrison --------

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

Actor: DoorPrison
entrypoint: None()
actions: ['PlayAnimation', 'SetInstanceVariableString']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: []
queries: ['HasItem']
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

void DoorPrisonOpen() {
    if !Player.HasItem({'itemKey': 'JungleRuinsKey', 'count': 1, 'index': -1}) {
        Dialog.Show({'message': 'scenario/StoryAreaF:JungleJailMessage_010'})
    } else {
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_DOOR_PRISON_OPEN', 'volume': 1.0, 'pitch': 1.0})
        DoorPrison.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait_on'})
        DoorPrison.PlayAnimation({'name': 'on', 'layer': 0, 'blendFrame': -1, 'restart': False})
        DoorPrison.PlayAnimation({'name': 'wait_on', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EventFlags.SetFlag({'symbol': 'EvF_DoorPrisonOpen', 'value': True})
    }
}

void DoorPrisonOpenR() {
    if !Player.HasItem({'itemKey': 'JungleRuinsKey', 'count': 1, 'index': -1}) {
        Dialog.Show({'message': 'scenario/StoryAreaF:JungleJailMessage_010'})
    } else {
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_DOOR_PRISON_OPEN', 'volume': 1.0, 'pitch': 1.0})
        DoorPrison.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait_on'})
        DoorPrison.PlayAnimation({'name': 'on', 'layer': 0, 'blendFrame': -1, 'restart': False})
        DoorPrison.PlayAnimation({'name': 'wait_on', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EventFlags.SetFlag({'symbol': 'EvF_DoorPrisonOpen_R', 'value': True})
    }
}

void DoorPrisonOpenL2() {
    if !Player.HasItem({'itemKey': 'JungleRuinsKey', 'count': 1, 'index': -1}) {
        Dialog.Show({'message': 'scenario/StoryAreaF:JungleJailMessage_010'})
    } else {
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_DOOR_PRISON_OPEN', 'volume': 1.0, 'pitch': 1.0})
        DoorPrison.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait_on'})
        DoorPrison.PlayAnimation({'name': 'on', 'layer': 0, 'blendFrame': -1, 'restart': False})
        DoorPrison.PlayAnimation({'name': 'wait_on', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EventFlags.SetFlag({'symbol': 'DoorPrizonOpenL2', 'value': True})
    }
}

void DoorPrisonOpenR2() {
    if !Player.HasItem({'itemKey': 'JungleRuinsKey', 'count': 1, 'index': -1}) {
        Dialog.Show({'message': 'scenario/StoryAreaF:JungleJailMessage_010'})
    } else {
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_DOOR_PRISON_OPEN', 'volume': 1.0, 'pitch': 1.0})
        DoorPrison.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait_on'})
        DoorPrison.PlayAnimation({'name': 'on', 'layer': 0, 'blendFrame': -1, 'restart': False})
        DoorPrison.PlayAnimation({'name': 'wait_on', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EventFlags.SetFlag({'symbol': 'DoorPrizonOpenR2', 'value': True})
    }
}
