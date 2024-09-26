-------- EventFlow: ItemCopyRod --------

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: []
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['UnforbidSave']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'SetFacialExpression', 'GenericItemGetSequence', 'AddItem', 'ResetAim', 'SetInterestIkEnabled']
queries: []
params: None

Actor: TutorialUI
entrypoint: None()
actions: ['ShowInsert']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'SetCullMode', 'PlayAnimation', 'AimPlayer', 'AimActor', 'SetInterestIkEnabled', 'MoveToBesideTargetActor']
queries: []
params: None

void Message() {
    Dialog.Show({'message': 'ItemGet:CopyRod'})
    Dialog.Show({'message': 'scenario/StoryAreaA:MeetPartner_110'})
}

void Get() {
    GameControl.UnforbidSave()

    fork {
        Partner[companion].SetInterestIkEnabled({'enable': True})
        Partner[companion].MoveToBesideTargetActor({'offsetY': 1.0, 'offsetX': -1.0, 'speed': 1, 'actor': ActorIdentifier(name="Player"), 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].AimActor({'boneName': 'attach_object', 'duration': 0.30000001192092896, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.GenericItemGetSequence({'itemKey': 'CopyRod', 'keepRaise': False, 'count': 1, 'messageEntry': '', 'index': -1})
    }

    Player.AddItem({'autoEquip': True, 'itemKey': 'CopyRod', 'count': 1, 'index': -1})

    fork {
        Player.SetFacialExpression({'expression': 'normal'})
        Player.ResetAim()
        Player.SetInterestIkEnabled({'enable': True})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].SetCullMode({'cullMode': 0, 'enabled': False})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:MeetPartner_120', 'getAttention': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:MeetPartner_130', 'getAttention': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:MeetPartner_140', 'getAttention': False})
    } {
        Partner[companion].PlayAnimation({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'withoutTurn': False, 'boneName': '', 'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Player.SetInterestIkEnabled({'enable': False})
    Timer.Wait({'time': 0.5})
    EventFlags.SetFlag({'symbol': 'EvPrologue009', 'value': True})
    TutorialUI.ShowInsert({'key': 'RememberInsert'})
}
