-------- EventFlow: L_DungeonCastle --------

Actor: Partner
entrypoint: None()
actions: ['AimActor', 'MoveToTargetActor', 'PlayAnimation']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Impa
entrypoint: None()
actions: ['LookAtTalker']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['SetShadowDecalEnable', 'AimActor', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'LookAt3ActorsCenterAsTalker']
queries: []
params: None

Actor: HyruleKing
entrypoint: None()
actions: []
queries: []
params: None

Actor: BookCommon
entrypoint: None()
actions: ['LookAtTalker']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: ['LookAtGimmicksLinkedPoint']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['StopZoneBgm', 'PlayOneshotSystemSE', 'Prepare', 'PlayBGMEx', 'StopAllBGM', 'PlayZoneBaseAmbience', 'DisablePlaySeFromTailor', 'EnablePlaySeFromTailor']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['UnforbidSave', 'EnableAutoSave', 'ForbidWarp']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'EnableAutoMovement', 'MoveToBesideTargetActor', 'PlayAnimation', 'AimPlayer', 'AimActor', 'GenericTalkSequence', 'PlayAnimationNoWait', 'PlayAnimationEx', 'AimCompassPoint', 'TalkKeep']
queries: []
params: None

void FindOutImpa() {

    call EvResetCommon.AllReset()

    Impa.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})

    fork {
        Zelda.AimActor({'actor': ActorIdentifier(name="Impa"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner.AimActor({'actor': ActorIdentifier(name="Impa"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner.PlayAnimation({'name': 'appeal02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.30000001192092896})
    Partner.MoveToTargetActor({'speed': 0, 'withoutTurn': True, 'offsetY': -0.5, 'distance': 1.5, 'actor': ActorIdentifier(name="Partner"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0})
    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Partner"), 'actor3': ActorIdentifier(name="Impa"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 0.5})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaHyruleCastle:FindOutImpa_010', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaHyruleCastle:FindOutImpa_020', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.5})

        call GeneralSequence.Look_at_Partner()

    }


    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaHyruleCastle:FindOutImpa_030', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.699999988079071})
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Impa"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.6000000238418579})
    Partner[companion].AimCompassPoint({'direction': 1, 'duration': 0.699999988079071, 'withoutTurn': False, 'immediateTurn': False})
    Timer.Wait({'time': 0.4000000059604645})
    Partner[companion].PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Audio.PlayOneshotSystemSE({'label': 'SE_PARTNER_LOOKAROUND', 'volume': 1.0, 'pitch': 1.0})
    Timer.Wait({'time': 1.7999999523162842})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].AimActor({'duration': 1.0, 'actor': ActorIdentifier(name="BookCommon"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.30000001192092896})

    fork {
        Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetX': -1.0, 'offsetY': 0.5, 'actor': ActorIdentifier(name="BookCommon"), 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    } {
        Timer.Wait({'time': 0.5})

        call GeneralSequence.Look_at_Partner()

    }

    BookCommon.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 0.6000000238418579})
    Partner[companion].PlayAnimationEx({'time': 1.0, 'name': 'ev_think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaHyruleCastle:FindOutImpa_040', 'getAttention': False})
    QuestSystem.SetProgress({'symbol': 'Midpoint:3289377397', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void AfterReleasTriTalk() {
    Audio.StopZoneBgm()
    Audio.PlayZoneBaseAmbience()

    call GeneralSequence.LookReturnPartner()

    Timer.Wait({'time': 1.0})
    Audio.Prepare({'label': 'BGM_EV_PARTNER_APPEAR', 'kind': 0, 'volume': 1.0})

    call GeneralSequence.PartnerLvelUp({'Key': 'LCastle'})


    call GeneralSequence.LD_WorldGlobePieceGet({'Idx': 90, 'Dungeon': 'LCastle'})

    Partner[companion].AimPlayer({'duration': 0.75, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Player.AimActor({'offsetY': -0.6000000238418579, 'duration': 0.4000000059604645, 'withoutTurn': False, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Audio.PlayBGMEx({'label': 'BGM_EV_PARTNER_APPEAR', 'ignoreSkip': False, 'volume': 1.0, 'sec': 0.4000000059604645})

    fork {
        Partner[companion].TalkKeep({'message': 'scenario/PartnerTalk:AfterReleasPartnerTalk040_030', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.5})
        Partner[companion].PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner[companion].PlayAnimation({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Partner[companion].TalkKeep({'message': 'scenario/PartnerTalk:AfterReleasPartnerTalk040_030_02', 'getAttention': False})
    Partner[companion].TalkKeep({'message': 'scenario/PartnerTalk:AfterReleasPartnerTalk040_040', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'no_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:AfterReleasPartnerTalk040_050', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 2.0})
    Partner[companion].PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Audio.DisablePlaySeFromTailor()

    fork {
        Partner[companion].Talk({'message': 'scenario/PartnerTalk:AfterReleasPartnerTalk040_060', 'getAttention': False})
    } {
        Partner[companion].PlayAnimation({'name': 'appeal_warp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Audio.EnablePlaySeFromTailor()
    Partner[companion].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].TalkKeep({'message': 'scenario/PartnerTalk:AfterReleasPartnerTalk040_070', 'getAttention': False})
    Audio.StopAllBGM({'duration': 2.0})
    Partner[companion].EnableAutoMovement()
    Player.SetShadowDecalEnable({'enable': True})

    fork {
        GameControl.UnforbidSave()
    } {
        GameControl.EnableAutoSave()
    }

    GameControl.ForbidWarp()
    QuestSystem.SetProgress({'symbol': 'Midpoint:2895641642', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void L_DungeonCastle() {

    call EvResetCommon.AllReset()

    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="HyruleKing"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetY': 0.0, 'offsetZ': 1.0, 'offsetX': -1.0, 'actor': ActorIdentifier(name="HyruleKing"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.20000000298023224})
    Player.SetInterestIkEnabled({'enable': True})
    Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HyruleKing"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.5})
    Partner[companion].Talk({'message': 'scenario/StoryAreaHyruleCastle:FindHyruleKing_010', 'getAttention': False})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaHyruleCastle:FindHyruleKing_010_02', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'offsetY': -0.6000000238418579, 'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    QuestSystem.SetProgress({'symbol': 'Midpoint:1038646991', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void LongPasteTutolial() {
    Area.LookAtGimmicksLinkedPoint({'pointIndex': 0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 1.5})
    Partner[companion].GenericTalkSequence({'selfTalkAnim': True, 'playerTalkAnim': False, 'cameraLookAt': True, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaHyruleCastle:LongPasteTutolial_010', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaHyruleCastle:LongPasteTutolial_020', 'getAttention': False})
}
