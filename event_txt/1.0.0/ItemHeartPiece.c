-------- EventFlow: ItemHeartPiece --------

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['GenericItemGetSequence', 'AddItem']
queries: ['GetHeartPieces']
params: None

Actor: Hud
entrypoint: None()
actions: ['PlayInAnimLayout', 'PlayInAnimLifeUp']
queries: ['IsHeartIncrease']
params: None

Actor: Player
entrypoint: None()
actions: ['Heal']
queries: ['CheckDamage', 'CheckLife']
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

void Message() {
    switch Zelda.GetHeartPieces() {
      case [0, 1, 2]:
        Hud.PlayInAnimLayout({'ItemSlot': False, 'PasteSlot': False, 'Rupee': False, 'KeyItem': False, 'PasteGauge': False, 'MiniMap': False, 'Operate': False, 'TimedAbility': False, 'HeartGauge': True})
        Dialog.Show({'message': 'ItemGet:HeartPiece'})
        if Player.CheckDamage({'amount': 1}) {
            Player.Heal({'amount': 999})
            Event21:
            Timer.Wait({'time': 0.10000000149011612})
            if !Hud.IsHeartIncrease() {
                goto Event21
            } else {
                Timer.Wait({'time': 0.15000000596046448})
            }
        }
      case 3:
        Hud.PlayInAnimLayout({'ItemSlot': False, 'PasteSlot': False, 'Rupee': False, 'KeyItem': False, 'PasteGauge': False, 'MiniMap': False, 'Operate': False, 'TimedAbility': False, 'HeartGauge': True})
        Dialog.Show({'message': 'ItemGet:HeartPieceFull'})
        if !Player.CheckDamage({'amount': 1}) {
            Timer.Wait({'time': 0.10000000149011612})
            Event6:
            Hud.PlayInAnimLifeUp()
            Timer.Wait({'time': 1.0})
        } else {
            Player.Heal({'amount': 999})
            Event17:
            Timer.Wait({'time': 0.10000000149011612})
            if !Hud.IsHeartIncrease() {
                goto Event17
            } else {
                Timer.Wait({'time': 0.15000000596046448})
                goto Event6
            }
        }
    }
}

void Get() {
    if Player.CheckLife({'amount': 1}) {
        Zelda.GenericItemGetSequence({'itemKey': 'HeartPiece', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
        Zelda.AddItem({'itemKey': 'HeartPiece', 'index': 'index', 'autoEquip': False, 'count': 1})
    }
}
