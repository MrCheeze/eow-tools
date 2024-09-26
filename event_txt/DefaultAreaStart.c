-------- EventFlow: DefaultAreaStart --------

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['WarpToAdjustedStartupPosition']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: TutorialUI
entrypoint: None()
actions: ['ShowModal']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: []
queries: ['IsDirectStartup', 'NeedsAdjustDirectStartupTransform']
params: None

Actor: Camera
entrypoint: None()
actions: ['Reset']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['WarpToDefaultPosition']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['Yield_']
queries: []
params: None

void Default() {
    if !GameControl.IsDirectStartup() {
        Event0:
        Fade.StartPreset({'preset': 'FadeInNormal'})
        if EventFlags.CheckFlag({'symbol': 'Ev_ChangeLink'})
        && !EventFlags.CheckFlag({'symbol': 'AfterBreakBarricadeModal_Clear'}) {

            call _AfterBreakBarricadeModal()

        }
    } else
    if !GameControl.NeedsAdjustDirectStartupTransform() {
        Event10:
        Partner[companion].WarpToDefaultPosition({'position': 1, 'avoidWall': False, 'avoidPlayer': False})
        Camera.Reset({'resetPlayerCamera': True, 'chaseRatio': 1.0})
        goto Event0
    } else {
        FlowControl.Yield_()
        Player.WarpToAdjustedStartupPosition({'avoidWater': False})
        goto Event10
    }
}

void _AfterBreakBarricadeModal() {
    Timer.Wait({'time': 1.0})
    TutorialUI.ShowModal({'key': 'AfterBreakBarricadeModal'})
    EventFlags.SetFlag({'symbol': 'FastChangeLink', 'value': True})
}
