-------- EventFlow: S_Dungeon001 --------

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['PlayAnimation', 'SetFacialExpression', 'Heal', 'AimCompassPoint', 'AimActor']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartParam']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Environment
entrypoint: None()
actions: ['ChangeTime']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayZoneBaseAmbience', 'PlayOneshotSystemSE']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['MoveToBesideTargetActor', 'PlayAnimation', 'AimPlayer', 'Talk', 'PlayAnimationNoWait']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: []
queries: []
params: None

void PartnerTalk() {
    Environment.ChangeTime({'hour': 10, 'min': 0, 'sec': 0})
    Zelda.Heal({'amount': 20})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Partner", sub_name="companion"), 'actor2': ActorIdentifier(name="Player"), 'distanceOffset': 1.0, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Audio.PlayZoneBaseAmbience()

    fork {
        Zelda.SetFacialExpression({'expression': 'sleep'})
        Zelda.PlayAnimation({'name': 'down_reverse_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].MoveToBesideTargetActor({'offsetX': 0.0, 'offsetZ': -1.0, 'speed': 1, 'withoutTurn': False, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 0.25, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0})
    }

    Partner[companion].AimPlayer({'duration': 0.20000000298023224, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 3.5})

    fork {
        Partner[companion].PlayAnimation({'name': 'wakeup', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 4.5})
        Zelda.SetFacialExpression({'expression': 'normal'})
        Audio.PlayOneshotSystemSE({'label': 'VO_ZELDA_EV_105_2', 'volume': 1.0, 'pitch': 1.0})
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Fade.StartParam({'time': 3.5, 'mode': 0, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0})
        Timer.Wait({'time': 2.0})
    }


    fork {
        Timer.Wait({'time': 0.5})
        Zelda.PlayAnimation({'name': 'ev_down_reverse_ed', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Zelda.PlayAnimation({'name': 'ev_no,$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.0})
        Partner[companion].MoveToBesideTargetActor({'offsetZ': -1.0, 'speed': 1, 'offsetY': 1.0, 'offsetX': 1.0, 'withoutTurn': True, 'actor': ActorIdentifier(name="Zelda"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0})
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 1.0})

    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:PartnerTalk_010', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Zelda.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 1.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Zelda.AimCompassPoint({'direction': 0, 'duration': 0.5, 'withoutTurn': False, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})
    QuestSystem.SetProgress({'symbol': 'HyruleCastle_LuberiHouse:3398887262', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventFlags.SetFlag({'symbol': 'EvAreaA001', 'value': True})
}
