-------- EventFlow: FieldBoundary004 --------

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'PlayAnimation']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['UnforbidSave', 'EnableAutoSave', 'ForbidWarp']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['StopZoneBgm', 'PlayZoneBaseAmbience']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

void AfterReleasTriTalkAreaC() {
    Audio.StopZoneBgm()
    Audio.PlayZoneBaseAmbience()

    call GeneralSequence.LookReturnPartner()

    Timer.Wait({'time': 1.0})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvC_WorldGlobeActivate'})

    call GeneralSequence.PartnerLvelUp({'Key': 'L004'})


    call GeneralSequence.LD_WorldGlobePieceGet({'Idx': 95, 'Dungeon': 'L004'})

    Timer.Wait({'time': 1.0})

    call GeneralSequence.ReleaseofGoddess_Din()

    Timer.Wait({'time': 1.5})
    Partner[companion].PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:LetsGoBack_010', 'getAttention': False})

    fork {
        GameControl.UnforbidSave()
    } {
        GameControl.EnableAutoSave()
    }

    GameControl.ForbidWarp()
    QuestSystem.SetProgress({'symbol': 'Volcano:1816244391', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventVariables.SetVariable({'symbol': 'Volcano:1816244391'})
}
