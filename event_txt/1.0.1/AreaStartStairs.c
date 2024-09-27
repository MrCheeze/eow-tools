-------- EventFlow: AreaStartStairs --------

Actor: Player
entrypoint: None()
actions: ['MoveToTargetActor']
queries: []
params: None

void StairDownIn() {

    fork {

        call AreaStartCommon._InCommon({'fadePreset': 4})

    } {
        Player.MoveToTargetActor({'speed': 0, 'distance': 1.5, 'actor': ActorIdentifier(name="Player"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

}
