-------- EventFlow: ItemHeartContainer --------

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

Actor: Hud
entrypoint: None()
actions: ['PlayInAnimLayout', 'PlayInAnimLifeUp']
queries: ['IsHeartIncrease']
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['Heal']
queries: ['CheckDamage', 'CheckLife']
params: None

void Message() {
    Hud.PlayInAnimLayout({'ItemSlot': False, 'PasteSlot': False, 'Rupee': False, 'KeyItem': False, 'MiniMap': False, 'PasteGauge': False, 'Operate': False, 'TimedAbility': False, 'HeartGauge': True})
    Dialog.Show({'message': 'ItemGet:HeartContainer'})
    if !Player.CheckDamage({'amount': 1}) {
        Timer.Wait({'time': 0.10000000149011612})
        Event12:
        Hud.PlayInAnimLifeUp()
        Timer.Wait({'time': 1.0})
    } else {
        Player.Heal({'amount': 999})
        Event10:
        Timer.Wait({'time': 0.10000000149011612})
        if !Hud.IsHeartIncrease() {
            goto Event10
        } else {
            Timer.Wait({'time': 0.15000000596046448})
            goto Event12
        }
    }
}

void Get() {
    if Player.CheckLife({'amount': 1}) {
        Zelda.GenericItemGetSequence({'itemKey': 'HeartContainer', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
        Zelda.AddItem({'index': 'index', 'autoEquip': False, 'itemKey': 'HeartContainer', 'count': 1})
    }
}
