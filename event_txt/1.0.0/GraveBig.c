-------- EventFlow: GraveBig --------

Actor: Audio
entrypoint: None()
actions: ['PlayJingle']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'MoveToBesideTargetActor']
queries: []
params: None

Actor: GraveBig
entrypoint: None()
actions: ['MoveToTargetActor', 'LookAtGimmick', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel']
queries: ['CheckActorSwitch']
params: None

Actor: GameControl
entrypoint: None()
actions: ['ResetSensorEventResetContainsActors']
queries: []
params: None

void GraveBigMove() {
    Timer.Wait({'time': 0.800000011920929})
    GameControl.ResetSensorEventResetContainsActors({'cemeteryRevive': False, 'eventReset': True})
    if !GraveBig.CheckActorSwitch({'switchIndex': 1}) {
        if !GraveBig.CheckActorSwitch({'switchIndex': 2}) {
            Event6:
            GraveBig.LookAtGimmick({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
            Player.AimActor({'actor': ActorIdentifier(name="GraveBig"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Timer.Wait({'time': 0.5})

            fork {
                GraveBig.MoveToTargetActor({'speed': 1, 'withoutTurn': True, 'actor': ActorIdentifier(name="GraveBig"), 'distance': -2.25, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
            } {
                GraveBig.PlayTailorOtherChannelNoWait({'channel': 'Move', 'restart': False, 'index': -1, 'stopOnSkipped': True})
                Timer.Wait({'time': 0.8999999761581421})
                GraveBig.StopTailorOtherChannel({'channel': 'Move', 'index': -1})
            }

            Audio.PlayJingle({'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
        } else {

            call EvResetCommon.AllReset()

            Player.MoveToBesideTargetActor({'speed': 0, 'tolerance': 0.1875, 'offsetZ': -0.75, 'actor': ActorIdentifier(name="GraveBig"), 'offsetX': -2.25, 'offsetY': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
            goto Event6
        }
    } else {

        call EvResetCommon.AllReset()

        Player.MoveToBesideTargetActor({'speed': 0, 'tolerance': 0.1875, 'offsetZ': -0.75, 'offsetX': 2.25, 'actor': ActorIdentifier(name="GraveBig"), 'offsetY': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        goto Event6
    }
}
