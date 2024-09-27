-------- EventFlow: ItemJungleRuinsKey --------

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

Actor: JungleRuinsKey
entrypoint: None()
actions: ['Destroy']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['GenericItemGetSequence', 'AddItem', 'HideTimedAbilityEffect']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'MoveToBesideTargetActor', 'PlayAnimationNoWait', 'AimPlayer']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

void Message() {
    Dialog.Show({'message': 'ItemGet:ItemJungleJailKey'})
}

void GetJungleRuinsKey() {
    JungleRuinsKey.Destroy()
    Player.HideTimedAbilityEffect()
    Player.GenericItemGetSequence({'itemKey': 'JungleRuinsKey', 'messageEntry': 'ItemJungleRuinsKey:Message', 'count': 1, 'keepRaise': False, 'index': -1})
    Player.AddItem({'itemKey': 'JungleRuinsKey', 'count': 1, 'index': -1, 'autoEquip': False})
    Partner[companion].MoveToBesideTargetActor({'offsetY': 1.0, 'actor': ActorIdentifier(name="Player"), 'offsetX': 1.5, 'speed': 0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})

    fork {
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {

        call GeneralSequence.Look_at_Partner()

    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor2': ActorIdentifier(name="Player"), 'actor1': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:GetKeyTheJail_020', 'getAttention': False})
    EventFlags.SetFlag({'symbol': 'Get_JRKey', 'value': True})
}
