-------- EventFlow: BoundaryGateSign --------

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['MoveToTargetActor', 'AimActor', 'AbsorbAllPastedActors', 'LookAtTalker', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['AimPlayer']
queries: []
params: None

Actor: BoundaryGate
entrypoint: None()
actions: ['LookAtTalker', 'Appear', 'Activate']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Reset', 'LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: GoronChief
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'AimCompassPoint', 'Activate', 'AimActor']
queries: []
params: None

Actor: BoundaryGateSign
entrypoint: None()
actions: ['Destroy', 'StopTailorOtherChannel']
queries: []
params: None

Actor: GerudoChiefsDaughter
entrypoint: None()
actions: ['Talk', 'AimActor', 'PlayAnimationNoWait', 'AimPlayer', 'SkipAutoTurn']
queries: []
params: None

Actor: ZoraRiverC001
entrypoint: None()
actions: ['AimActor', 'PlayAnimationNoWait', 'AimPlayer', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Deku017
entrypoint: None()
actions: ['AimPlayer', 'Talk', 'Destroy', 'PlayAnimationNoWait', 'MoveToBesideTargetActor', 'SetCollisionEnabled', 'AimActor', 'SetInterestIkEnabled', 'SetGravityEnable', 'ChangeSteeringAnimation']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['PlayAnimationNoWait', 'Talk', 'AimActor', 'LookAtTalker', 'AimPlayer', 'MoveToTargetActor', 'PlayAnimation', 'MoveToBesideTargetActor', 'EnableAutoMovement', 'DisableAutoMovement']
queries: []
params: None

Actor: ZoraSeaChief
entrypoint: None()
actions: ['AimActor', 'PlayAnimationNoWait', 'AimPlayer', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE', 'SetBGMVolume']
queries: []
params: None

Actor: Goron003
entrypoint: None()
actions: ['AimActor', 'PlayAnimationNoWait', 'SkipAutoTurn', 'SetFacialExpression']
queries: []
params: None

Actor: Goron008
entrypoint: None()
actions: ['AimActor', 'PlayAnimationNoWait', 'SkipAutoTurn', 'SetFacialExpression']
queries: []
params: None

Actor: Deku002
entrypoint: None()
actions: ['AimActor', 'PlayAnimationNoWait', 'SkipAutoTurn']
queries: []
params: None

Actor: Deku013
entrypoint: None()
actions: ['AimActor', 'PlayAnimationNoWait', 'SkipAutoTurn']
queries: []
params: None

Actor: HyruleSoldier_SpecialHyruleCastle
entrypoint: None()
actions: ['AimActor', 'PlayAnimationNoWait', 'SkipAutoTurn']
queries: []
params: None

Actor: HylianF006
entrypoint: None()
actions: ['PlayAnimationNoWait', 'AimActor']
queries: []
params: None

Actor: HylianMC005
entrypoint: None()
actions: ['PlayAnimationNoWait', 'AimActor']
queries: []
params: None

Actor: GerudoSoldier019
entrypoint: None()
actions: ['AimActor', 'PlayAnimationNoWait', 'AimPlayer', 'SkipAutoTurn']
queries: []
params: None

Actor: GerudoSoldier017
entrypoint: None()
actions: ['AimPlayer', 'PlayAnimationNoWait', 'AimActor', 'SkipAutoTurn', 'SetInstanceVariableString']
queries: []
params: None

Actor: GerudoSoldier012
entrypoint: None()
actions: ['AimPlayer', 'PlayAnimationNoWait', 'AimActor', 'SkipAutoTurn']
queries: []
params: None

void BoundaryGateDesert() {

    call EvResetCommon.AllReset()

    Partner[companion].AimActor({'actor': ActorIdentifier(name="BoundaryGate"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:OpenEntrance_010', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:OpenEntrance_020', 'getAttention': False})
    Audio.SetBGMVolume({'volume': 0.0, 'duration': 2.0})
    Player.MoveToTargetActor({'speed': 0, 'withoutTurn': True, 'actor': ActorIdentifier(name="BoundaryGate"), 'distance': 2.75, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="BoundaryGate"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    call BoundaryGateOpen()

    Timer.Wait({'time': 0.10000000149011612})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Audio.SetBGMVolume({'duration': 2.0, 'volume': 1.0})
    BoundaryGateSign.Destroy()
    EventFlags.SetFlag({'symbol': 'Desert_boundary_open', 'value': True})
    EventVariables.SetVariable({'symbol': 'Desert:3890968399'})
    BoundaryGateSign.Destroy()
    QuestSystem.SetProgress({'symbol': 'Desert:2606873053', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void BoundaryGateCoastRiver() {

    call GateOpen()

    EventFlags.SetFlag({'value': True, 'symbol': 'EvB_ImitationJabuJabuDead_2'})
    QuestSystem.SetProgress({'symbol': 'Coast_River:138066480', 'isShowTelopInEvent': False, 'isFrontFade': False})
    BoundaryGateSign.Destroy()
}

void BoundaryGateHyruleCastle() {

    call GateOpen()

    QuestSystem.SetProgress({'symbol': 'Midpoint:2930961825', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvE_gateopen'})
    BoundaryGateSign.Destroy()
}

void BoundaryGateVolcano() {

    call EvResetCommon.AllReset()


    call _GateOpenVolcano()

    EventFlags.SetFlag({'value': True, 'symbol': 'volcano_boundary_open'})
}

void BoundaryGateJungle() {

    call GateOpen()

    QuestSystem.SetProgress({'symbol': 'Jungle:4209006452', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'SmallBoundaryWorldOpen_009'})
}

void GateOpen() {

    call EvResetCommon.AllReset()

    Partner[companion].AimActor({'actor': ActorIdentifier(name="BoundaryGate"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:OpenEntrance_010', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:OpenEntrance_020', 'getAttention': False})
    Audio.SetBGMVolume({'volume': 0.0, 'duration': 2.0})
    Player.MoveToTargetActor({'speed': 0, 'withoutTurn': True, 'actor': ActorIdentifier(name="BoundaryGate"), 'distance': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="BoundaryGate"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    call BoundaryGateOpen()

    Timer.Wait({'time': 0.10000000149011612})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Audio.SetBGMVolume({'duration': 2.0, 'volume': 1.0})
    BoundaryGateSign.Destroy()
}

void SmallBoundaryWorldOpen_013() {

    call GateOpen()

    EventFlags.SetFlag({'value': True, 'symbol': 'SmallBoundaryWorldOpen_013'})
}

void SmallBoundaryWorldOpen_005() {

    call GateOpen2()

    EventFlags.SetFlag({'value': True, 'symbol': 'SmallBoundaryWorldOpen_005'})
}

void SmallBoundaryWorldOpen_006() {

    call GateOpen()

    EventFlags.SetFlag({'value': True, 'symbol': 'SmallBoundaryWorldOpen_006'})
}

void SmallBoundaryWorldOpen_010() {

    call GateOpen()

    EventFlags.SetFlag({'value': True, 'symbol': 'SmallBoundaryWorldOpen_010'})
}

void SmallBoundaryWorldOpen_014() {

    call GateOpen()

    EventFlags.SetFlag({'value': True, 'symbol': 'SmallBoundaryWorldOpen_014'})
}

void SmallBoundaryWorldOpen_015() {

    call GateOpen2()

    EventFlags.SetFlag({'value': True, 'symbol': 'SmallBoundaryWorldOpen_015'})
}

void SmallBoundaryWorldOpen_007() {

    call EvResetCommon.AllReset()

    Partner[companion].AimActor({'actor': ActorIdentifier(name="BoundaryGate"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:OpenEntrance_010', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:OpenEntrance_020', 'getAttention': False})
    Audio.SetBGMVolume({'duration': 2.0, 'volume': 0.0})
    Player.MoveToTargetActor({'speed': 0, 'withoutTurn': True, 'actor': ActorIdentifier(name="BoundaryGate"), 'distance': 1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})

    fork {
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="BoundaryGate"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    }


    fork {
        HylianF006.AimActor({'actor': ActorIdentifier(name="BoundaryGate"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HylianMC005.AimActor({'actor': ActorIdentifier(name="BoundaryGate"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {

        call BoundaryGateOpen()

    } {
        Timer.Wait({'time': 2.200000047683716})

        fork {
            HylianF006.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_HYL_W003_2_006_12', 'volume': 1.0, 'pitch': 1.0})
        }

    } {
        Timer.Wait({'time': 2.4000000953674316})

        fork {
            HylianMC005.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_HYL_M001_1_006_4', 'volume': 1.0, 'pitch': 1.0})
        }

    }

    Timer.Wait({'time': 0.10000000149011612})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Audio.SetBGMVolume({'duration': 2.0, 'volume': 1.0})
    BoundaryGateSign.Destroy()
    EventFlags.SetFlag({'value': True, 'symbol': 'SmallBoundaryWorldOpen_007'})
}

void SmallBoundaryWorldOpen_16() {

    call GateOpen_m()


    fork {

        call BoundaryGateOpen()

    } {
        Timer.Wait({'time': 0.4000000059604645})
        HyruleSoldier_SpecialHyruleCastle.AimActor({'actor': ActorIdentifier(name="BoundaryGateSign"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 1.25})
        HyruleSoldier_SpecialHyruleCastle.PlayAnimationNoWait({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HyruleSoldier_SpecialHyruleCastle.SkipAutoTurn()

    call GateOpen_m2()

    EventFlags.SetFlag({'value': True, 'symbol': 'SmallBoundaryWorldOpen_016'})
}

void SmallBoundaryWorldOpen_003() {
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="BoundaryGateSign"), 'actor2': ActorIdentifier(name="Goron003"), 'distanceOffset': 5.0, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    call GateOpen_m()


    fork {

        call BoundaryGateOpen()

    } {
        Timer.Wait({'time': 0.20000000298023224})
        Goron003.AimActor({'actor': ActorIdentifier(name="BoundaryGateSign"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 1.25})

        fork {
            Goron003.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron003.SetFacialExpression({'expression': 'surprise'})
        }

    } {
        Timer.Wait({'time': 0.4000000059604645})
        Goron008.AimActor({'actor': ActorIdentifier(name="BoundaryGateSign"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 1.25})

        fork {
            Goron008.PlayAnimationNoWait({'name': 'surprised_st02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron008.SetFacialExpression({'expression': 'surprise'})
        }

    }

    Goron003.SkipAutoTurn()
    Goron008.SkipAutoTurn()

    call GateOpen_m2()

    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    QuestSystem.SetProgress({'symbol': 'Volcano:1354458768', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'SmallBoundaryWorldOpen_003'})
}

void GateOpen2() {

    call EvResetCommon.AllReset()

    Partner[companion].AimActor({'actor': ActorIdentifier(name="BoundaryGate"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:OpenEntrance_010', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:OpenEntrance_020', 'getAttention': False})
    Audio.SetBGMVolume({'duration': 2.0, 'volume': 0.0})
    Player.MoveToTargetActor({'speed': 0, 'distance': 2.0, 'withoutTurn': True, 'actor': ActorIdentifier(name="BoundaryGate"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="BoundaryGate"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    call BoundaryGateOpen()

    Timer.Wait({'time': 0.10000000149011612})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Audio.SetBGMVolume({'duration': 2.0, 'volume': 1.0})
    BoundaryGateSign.Destroy()
}

void SmallBoundaryWorldOpen_011() {

    call GateOpen()

    QuestSystem.SetProgress({'symbol': 'Snowmountain:1115904312', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'SmallBoundaryWorldOpen_011'})
}

void SmallBoundaryWorldOpen_008() {

    call GateOpenJungle()


    call _DekuDivesIntoBoundary()

    EventFlags.SetFlag({'value': True, 'symbol': 'SmallBoundaryWorldOpen_008'})
}

void SmallBoundaryWorldOpen_012() {

    call GateOpen()

    EventFlags.SetFlag({'value': True, 'symbol': 'SmallBoundaryWorldOpen_012'})
}

void SmallBoundaryWorldOpen_002() {
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    call EvResetCommon.AllReset()


    call GateOpenDesert()

    EventFlags.SetFlag({'value': True, 'symbol': 'SmallBoundaryWorldOpen_002'})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvD_Miniboundary'})

    fork {
        GerudoChiefsDaughter.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        GerudoSoldier019.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoSoldier019.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        GerudoSoldier017.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoSoldier017.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        GerudoSoldier012.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoSoldier012.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="GerudoChiefsDaughter"), 'offsetZ': -2.0, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0})

    fork {
        GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:DesertMiniBoundary_020', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Player.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Audio.SetBGMVolume({'duration': 2.0, 'volume': 1.0})
    }

    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    call GeneralSequence.ZeldaTalkMotion()

    GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:DesertMiniBoundary_030', 'getAttention': False})
    QuestSystem.SetProgress({'symbol': 'Desert:699522087', 'isShowTelopInEvent': False, 'isFrontFade': False})
    GerudoChiefsDaughter.SkipAutoTurn()
    GerudoSoldier019.SkipAutoTurn()
    GerudoSoldier017.SkipAutoTurn()
    GerudoSoldier012.SkipAutoTurn()
    GerudoSoldier017.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait01'})
}

void GateOpenDesert() {
    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="BoundaryGate"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaD:DesertMiniBoundary_010', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:OpenEntrance_020', 'getAttention': False})
    Audio.SetBGMVolume({'volume': 0.0, 'duration': 2.0})
    Player.MoveToTargetActor({'speed': 0, 'distance': 3.0, 'actor': ActorIdentifier(name="BoundaryGate"), 'withoutTurn': True, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="BoundaryGate"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {

        call BoundaryGateOpen()

    } {
        Timer.Wait({'time': 2.700000047683716})
        GerudoChiefsDaughter.AimActor({'actor': ActorIdentifier(name="BoundaryGateSign"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.30000001192092896})
        GerudoChiefsDaughter.PlayAnimationNoWait({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 2.700000047683716})
        GerudoSoldier019.AimActor({'actor': ActorIdentifier(name="BoundaryGateSign"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.4000000059604645})
        GerudoSoldier019.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 2.9000000953674316})
        GerudoSoldier017.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoSoldier017.AimActor({'actor': ActorIdentifier(name="BoundaryGateSign"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.4000000059604645})
        GerudoSoldier017.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 3.0})
        GerudoSoldier012.AimActor({'actor': ActorIdentifier(name="BoundaryGateSign"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.4000000059604645})
        GerudoSoldier012.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.10000000149011612})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    BoundaryGateSign.Destroy()
}

void SmallBoundaryWorldOpen_001() {

    fork {

        call EvResetCommon.AllReset()

    } {
        Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetY': 1.0, 'actor': ActorIdentifier(name="Player"), 'offsetX': -0.800000011920929, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    } {
        Partner[companion].DisableAutoMovement()
    }


    fork {

        call GateOpenRiver()

    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraSeaChief.SetInterestIkEnabled({'enable': True})
        ZoraSeaChief.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        ZoraRiverC001.SetInterestIkEnabled({'enable': True})
        ZoraRiverC001.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    EventFlags.SetFlag({'value': True, 'symbol': 'SmallBoundaryWorldOpen_001'})
}

void GateOpenRiver() {
    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    ZoraSeaChief.SetInterestIkEnabled({'enable': False})
    Partner[companion].MoveToTargetActor({'speed': 0, 'distance': 1.0, 'offsetY': 1.0, 'actor': ActorIdentifier(name="Player"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Timer.Wait({'time': 0.4000000059604645})

        call GeneralSequence.Look_at_Partner()

    } {
        Partner[companion].PlayAnimationNoWait({'name': 'appeal02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].Talk({'message': 'scenario/PartnerTalk:OpenEntrance_010', 'getAttention': False})
    }


    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].Talk({'message': 'scenario/PartnerTalk:OpenEntrance_020', 'getAttention': False})
        Audio.SetBGMVolume({'volume': 0.0, 'duration': 2.0})
    }


    fork {
        Player.SetInterestIkEnabled({'enable': False})
        Player.MoveToTargetActor({'speed': 0, 'withoutTurn': False, 'distance': 3.0, 'actor': ActorIdentifier(name="BoundaryGateSign"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        ZoraRiverC001.SetInterestIkEnabled({'enable': True})
        ZoraRiverC001.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraSeaChief.SetInterestIkEnabled({'enable': True})
        ZoraSeaChief.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].EnableAutoMovement()
    Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="BoundaryGateSign"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {

        call BoundaryGateOpen()

    } {
        Timer.Wait({'time': 0.20000000298023224})
        ZoraRiverC001.AimActor({'actor': ActorIdentifier(name="BoundaryGateSign"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 1.25})

        fork {
            ZoraRiverC001.PlayAnimationNoWait({'name': 'jump_to_ground,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'SEQ_VO_ZORA_C1_1_006_003', 'volume': 1.0, 'pitch': 1.0})
        }

    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="BoundaryGateSign"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 1.25})

        fork {
            ZoraSeaChief.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_ZORA_SEA_CHIEF_006_3', 'volume': 1.0, 'pitch': 1.0})
        }

    }

    Timer.Wait({'time': 0.10000000149011612})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.6000000238418579})
    Partner[companion].PlayAnimationNoWait({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.4000000059604645})
    BoundaryGateSign.Destroy()
    QuestSystem.SetProgress({'symbol': 'Calamity_River:3137783147', 'isShowTelopInEvent': False, 'isFrontFade': False})
    Audio.SetBGMVolume({'duration': 2.0, 'volume': 1.0})
}

void _DekuDivesIntoBoundary() {
    Partner[companion].AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].MoveToBesideTargetActor({'offsetX': -1.0, 'withoutTurn': True, 'speed': 1, 'offsetZ': -1.0, 'actor': ActorIdentifier(name="Player"), 'offsetY': 0.800000011920929, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0})
    Timer.Wait({'time': 0.30000001192092896})

    fork {
        Deku017.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'offsetY': 0.0, 'distanceOffset': 6.5, 'offsetZ': -0.699999988079071, 'actor1': ActorIdentifier(name="Deku017"), 'actor2': ActorIdentifier(name="Player"), 'offsetX': -1.5, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612})
    }


    fork {
        Timer.Wait({'time': 0.30000001192092896})
        Player.AimActor({'actor': ActorIdentifier(name="Deku017"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku017"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku017.PlayAnimationNoWait({'name': 'surprised_st01,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku017.Talk({'message': 'scenario/StoryAreaF:DekuDivesIntoBoundary_010', 'getAttention': False})
    } {
        Audio.SetBGMVolume({'duration': 2.0, 'volume': 1.0})
    }

    Deku017.AimActor({'actor': ActorIdentifier(name="BoundaryGate"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Deku017.Talk({'message': 'scenario/StoryAreaF:DekuDivesIntoBoundary_020', 'getAttention': False})
    Deku017.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Deku017.SetInterestIkEnabled({'enable': False})
    Deku017.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku017.Talk({'message': 'scenario/StoryAreaF:DekuDivesIntoBoundary_030', 'getAttention': False})
    Timer.Wait({'time': 0.5})
    Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:DekuDivesIntoBoundary_040', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku017.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku017.Talk({'message': 'scenario/StoryAreaF:DekuDivesIntoBoundary_050', 'getAttention': False})
    Deku017.PlayAnimationNoWait({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku017.Talk({'message': 'scenario/StoryAreaF:DekuDivesIntoBoundary_060', 'getAttention': False})

    fork {
        Deku017.MoveToBesideTargetActor({'speed': 1, 'offsetX': 2.5, 'actor': ActorIdentifier(name="BoundaryGate"), 'offsetZ': 0.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="Deku017"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Deku017"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Deku017.AimActor({'actor': ActorIdentifier(name="BoundaryGate"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku017.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    }

    Deku017.Talk({'message': 'scenario/StoryAreaF:DekuDivesIntoBoundary_070', 'getAttention': False})
    Deku017.MoveToBesideTargetActor({'speed': 1, 'offsetX': 1.0, 'actor': ActorIdentifier(name="BoundaryGate"), 'offsetZ': -0.5, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Deku017.ChangeSteeringAnimation({'idle': 'frightened_st01', 'walk': 'frightened_st01', 'run': 'frightened_st01', 'layer': 0})
    Deku017.MoveToBesideTargetActor({'speed': 1, 'offsetX': 0.800000011920929, 'customSpeed': 2.0, 'offsetZ': -0.5, 'actor': ActorIdentifier(name="BoundaryGate"), 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0})
    Deku017.SetGravityEnable({'enable': False})
    Deku017.SetCollisionEnabled({'enable': False})
    Deku017.MoveToBesideTargetActor({'speed': 1, 'offsetZ': -0.5, 'actor': ActorIdentifier(name="BoundaryGate"), 'offsetX': 0.0, 'customSpeed': 0.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0})

    fork {
        Deku017.SetGravityEnable({'enable': True})
    } {
        Deku017.MoveToBesideTargetActor({'speed': 1, 'offsetY': -2.0, 'offsetX': -1.0, 'offsetZ': -0.5, 'actor': ActorIdentifier(name="BoundaryGate"), 'customSpeed': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0})
    }

    Timer.Wait({'time': 0.30000001192092896})
    Deku017.Destroy()
    Partner[companion].LookAtTalker({'distanceOffset': 2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:DekuDivesIntoBoundary_080', 'getAttention': False})
    Timer.Wait({'time': 1.0})

    fork {
        Timer.Wait({'time': 0.10000000149011612})
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})

        call GeneralSequence.Look_at_Partner()

    }

    Timer.Wait({'time': 1.0})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaF:DekuDivesIntoBoundary_090', 'getAttention': False})
    EventFlags.SetFlag({'symbol': 'Deku017GoToCrack', 'value': True})
}

void _GateOpenVolcano() {
    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    BoundaryGate.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    GoronChief.Activate()
    GoronChief.AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:ReachedCrater_010', 'getAttention': False})

    fork {
        Zelda.AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GoronChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    GoronChief.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="GoronChief"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    GoronChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:ReachedCrater_020', 'getAttention': False})
    GoronChief.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:ReachedCrater_030', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaC:ReachedCrater_040', 'getAttention': False})
    GoronChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:ReachedCrater_050', 'getAttention': False})
    Player.AimActor({'actor': ActorIdentifier(name="BoundaryGate"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="BoundaryGate"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    BoundaryGate.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaC:ReachedCrater_060', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:OpenEntrance_020', 'getAttention': False})
    Audio.SetBGMVolume({'volume': 0.0, 'duration': 2.0})
    Player.MoveToTargetActor({'speed': 0, 'withoutTurn': False, 'distance': 3.0, 'actor': ActorIdentifier(name="BoundaryGate"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="BoundaryGate"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    call BoundaryGateOpen()

    Timer.Wait({'time': 0.10000000149011612})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    BoundaryGateSign.Destroy()
    QuestSystem.SetProgress({'symbol': 'Volcano:2724487074', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventVariables.SetVariable({'symbol': 'Volcano:2724487074'})
    Audio.SetBGMVolume({'duration': 2.0, 'volume': 1.0})
}

void BoundaryGateS_Dungeon034() {
    EventFlags.SetFlag({'value': True, 'symbol': 'EvF_gateopen'})
    Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 5.0, 'actor1': ActorIdentifier(name="BoundaryGateSign"), 'actor2': ActorIdentifier(name="Deku013"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    call GateOpen_m()


    fork {

        call BoundaryGateOpen()

    } {
        Timer.Wait({'time': 0.20000000298023224})
        Deku002.AimActor({'actor': ActorIdentifier(name="BoundaryGateSign"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 1.25})

        fork {
            Deku002.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } {
        Timer.Wait({'time': 0.4000000059604645})
        Deku013.AimActor({'actor': ActorIdentifier(name="BoundaryGateSign"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 1.25})

        fork {
            Deku013.PlayAnimationNoWait({'name': 'surprised_st_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }

    Deku002.SkipAutoTurn()
    Deku013.SkipAutoTurn()

    call GateOpen_m2()

    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    QuestSystem.SetProgress({'symbol': 'Jungle:3392534741', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void AreaG_BoundaryGateOpen() {
    EventFlags.SetFlag({'value': True, 'symbol': 'Snowmountain_gateopen'})

    call GateOpen()

    QuestSystem.SetProgress({'symbol': 'Snowmountain:2222532772', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void BoundaryGateOpen() {
    Partner[companion].MoveToTargetActor({'speed': 0, 'distance': -1.0, 'offsetY': 1.5, 'actor': ActorIdentifier(name="BoundaryGateSign"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0})

    fork {
        Partner[companion].PlayAnimation({'name': 'create_a_rift', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        BoundaryGate.Activate()
        BoundaryGate.Appear()
        BoundaryGateSign.StopTailorOtherChannel({'channel': 'BoundaryGateSign', 'index': -1})
        Timer.Wait({'time': 5.0})
    }

}

void GateOpenJungle() {

    call EvResetCommon.AllReset()

    Partner[companion].AimActor({'actor': ActorIdentifier(name="BoundaryGate"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:OpenEntrance_010', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:OpenEntrance_020', 'getAttention': False})
    Audio.SetBGMVolume({'volume': 0.0, 'duration': 2.0})
    Player.MoveToTargetActor({'speed': 0, 'distance': 3.0, 'actor': ActorIdentifier(name="BoundaryGate"), 'withoutTurn': False, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="BoundaryGate"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {

        call BoundaryGateOpen()

    } {
        Timer.Wait({'time': 0.4000000059604645})
        Deku017.AimActor({'actor': ActorIdentifier(name="BoundaryGate"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Deku017.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.5})
        Deku017.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.10000000149011612})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    BoundaryGateSign.Destroy()
}

void GateOpen_m() {

    call EvResetCommon.AllReset()

    Partner[companion].AimActor({'actor': ActorIdentifier(name="BoundaryGate"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:OpenEntrance_010', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:OpenEntrance_020', 'getAttention': False})
    Audio.SetBGMVolume({'volume': 0.0, 'duration': 2.0})
    Player.MoveToTargetActor({'speed': 0, 'withoutTurn': True, 'actor': ActorIdentifier(name="BoundaryGate"), 'distance': 1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="BoundaryGate"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
}

void GateOpen_m2() {
    Timer.Wait({'time': 0.10000000149011612})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Audio.SetBGMVolume({'duration': 2.0, 'volume': 1.0})
    BoundaryGateSign.Destroy()
}
