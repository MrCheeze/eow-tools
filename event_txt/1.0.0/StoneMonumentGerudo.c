-------- EventFlow: StoneMonumentGerudo --------

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

Actor: StoneMonumentGerudo
entrypoint: None()
actions: ['GenericGimmickSequence', 'SetVisibility', 'PlayTailorOtherChannelNoWait', 'DestroyCollisionHitActors', 'SetCollisionEnabled']
queries: ['CheckPlayerHit']
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayJingleTimeWait']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['MoveToCompassPoint', 'DestroyCollisionHitActors']
queries: []
params: None

void Appear() {
    StoneMonumentGerudo.GenericGimmickSequence({'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0})
    StoneMonumentGerudo.DestroyCollisionHitActors({'eventReset': True})
    if !StoneMonumentGerudo.CheckPlayerHit() {
        Event7:
        Timer.Wait({'time': 1.2000000476837158})
        StoneMonumentGerudo.SetCollisionEnabled({'enable': True})
        StoneMonumentGerudo.PlayTailorOtherChannelNoWait({'channel': 'Appear', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        StoneMonumentGerudo.SetVisibility({'visible': True})
        Timer.Wait({'time': 1.7000000476837158})
        Audio.PlayJingleTimeWait({'duration': 1.6799999475479126, 'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
    } else {

        call EvResetCommon.AllReset()

        Player.MoveToCompassPoint({'direction': 0, 'speed': 0, 'withoutTurn': False, 'distance': 3.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Player.DestroyCollisionHitActors({'eventReset': True})
        goto Event7
    }
}

void PuzzlePanelQuestionHintA() {
    Dialog.Show({'message': 'scenario/StoryAreaD:PuzzlePanelQuestionHintA_010'})
}

void PuzzlePanelQuestionHintB() {
    Dialog.Show({'message': 'scenario/StoryAreaD:PuzzlePanelQuestionHintB_010'})
}
