-------- EventFlow: ItemSmoothie --------

Actor: SmoothieUI
entrypoint: None()
actions: ['ShowSmoothieGainDialog']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Hud
entrypoint: None()
actions: ['ShowOpenDrinkMenuGuide', 'PlayOutAnim']
queries: []
params: None

void Message00() {

    fork {
        SmoothieUI.ShowSmoothieGainDialog()
    } {
        Timer.Wait({'time': 0.032999999821186066})
        Hud.ShowOpenDrinkMenuGuide()
        Hud.PlayOutAnim()
    }

}
