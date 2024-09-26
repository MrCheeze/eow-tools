-------- EventFlow: ItemWorldGlobe --------

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AddItemAndGenericItemGetSequence']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckFlag']
params: None

Actor: Hud
entrypoint: None()
actions: ['SetEnabledUpdateEnergyGaugeInEvent', 'PlayInAnimLayout', 'PlayOutAnimLayout']
queries: ['IsEnergyGaugeIncrease', 'IsEnergyGaugeMax']
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AddPasteEnergy']
queries: []
params: None

void GetPiece() {
    Hud.SetEnabledUpdateEnergyGaugeInEvent({'enableUpdateInEvent': False})
    Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'WorldGlobePiece', 'index': 'index', 'count': 'count', 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})
}

void MessagePiece() {
    Player.AddPasteEnergy({'amount': 999})
    if !EventFlags.CheckFlag({'symbol': 'EventLuberiLvUpTalk'}) {
        Dialog.Show({'message': 'ItemGet:WorldGlobePieceBefore'})

        call PlayGetAnimation()

    } else {
        Dialog.Show({'message': 'ItemGet:WorldGlobePiece'})

        call PlayGetAnimation()

    }
}

void MessagePieceCrack() {
    Player.AddPasteEnergy({'amount': 999})
    if !EventFlags.CheckFlag({'symbol': 'EventLuberiLvUpTalk'}) {
        Dialog.Show({'message': 'ItemGet:WorldGlobePieceCrackBefore'})

        call PlayGetAnimation()

    } else {
        Dialog.Show({'message': 'ItemGet:WorldGlobePieceCrack'})

        call PlayGetAnimation()

    }
}

void MessagePiece_many() {
    Player.AddPasteEnergy({'amount': 999})
    if !EventFlags.CheckFlag({'symbol': 'EventLuberiLvUpTalk'}) {
        Dialog.Show({'message': 'ItemGet:WorldGlobePiecesBefore'})

        call PlayGetAnimation()

    } else {
        Dialog.Show({'message': 'ItemGet:WorldGlobePieces'})

        call PlayGetAnimation()

    }
}

void PlayGetAnimation() {
    if Hud.IsEnergyGaugeMax() {
        Hud.PlayInAnimLayout({'MiniMap': False, 'KeyItem': False, 'Rupee': False, 'PasteSlot': False, 'ItemSlot': False, 'HeartGauge': False, 'Operate': False, 'TimedAbility': False, 'PasteGauge': True})
        Timer.Wait({'time': 1.0})
        Hud.SetEnabledUpdateEnergyGaugeInEvent({'enableUpdateInEvent': True})
        Event25:
        Timer.Wait({'time': 0.5})
        if !Hud.IsEnergyGaugeIncrease() {
            goto Event25
        } else {
            Timer.Wait({'time': 1.0})

            fork {
                Hud.SetEnabledUpdateEnergyGaugeInEvent({'enableUpdateInEvent': False})
                Hud.PlayOutAnimLayout({'HeartGauge': False, 'ItemSlot': False, 'PasteSlot': False, 'Rupee': False, 'KeyItem': False, 'MiniMap': False, 'PasteGauge': True, 'Operate': False, 'TimedAbility': False})
            }

        }
    }
}
