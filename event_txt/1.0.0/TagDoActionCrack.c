-------- EventFlow: TagDoActionCrack --------

Actor: Player
entrypoint: None()
actions: ['PlayAnimation', 'Damage', 'PlayOneshotSE', 'PlayDamageBlink']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

void Touch() {

    fork {
        Player.PlayAnimation({'name': 'ev_touch_damagewall', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.0})

        fork {
            Player.Damage({'amount': 1})
        } {
            Player.PlayOneshotSE({'label': 'SE_PLAYER_HIT_NORM', 'volume': 1.0, 'pitch': 1.0})
        } {
            Player.PlayOneshotSE({'label': 'VO_ZELDA_DAMAGE', 'volume': 1.0, 'pitch': 1.0})
        } {
            Player.PlayDamageBlink({'kind': 'PlayerDamage'})
        }

    }

}
