-------- EventFlow: Signboard --------

Actor: Signboard
entrypoint: None()
actions: ['LookAtGimmicksLinkedPoint']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActorLinkedPoint']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['WarpToActorLinkedPoint', 'ResetVelocity']
queries: []
params: None

Actor: Vibration
entrypoint: None()
actions: ['StopAllVibration']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'DisableAutoMovement', 'MoveToTargetLinkedPoint', 'AimActorLinkedPoint', 'GenericTalkSequenceWithDialog', 'AimDegreeAngle', 'AimPlayer', 'LookAtTalker']
queries: []
params: None

void F_Plains_001() {
    Dialog.Show({'message': 'Signboard:Plains001'})
}

void F_Plains_010() {
    Dialog.Show({'message': 'Signboard:Plains010'})
}

void F_Plains_020() {
    Dialog.Show({'message': 'Signboard:Plains020'})
}

void F_Plains_030() {
    Dialog.Show({'message': 'Signboard:Plains030'})
}

void F_Plains_040() {
    Dialog.Show({'message': 'Signboard:Plains040'})
}

void F_Plains_050() {
    Dialog.Show({'message': 'Signboard:Plains050'})
}

void F_Forest_010() {
    Dialog.Show({'message': 'Signboard:Forest010'})
}

void F_Forest_020() {
    Dialog.Show({'message': 'Signboard:Forest020'})
}

void F_Village_010() {
    Dialog.Show({'message': 'Signboard:Village010'})
}

void F_Volcano010() {
    Dialog.Show({'message': 'Signboard:Volcano010'})
}

void F_Volcano020() {
    Dialog.Show({'message': 'Signboard:Volcano020'})
}

void F_Volcano030() {
    Dialog.Show({'message': 'Signboard:Volcano030'})
}

void S007010() {
    Dialog.Show({'message': 'Signboard:S007_010'})
}

void S007020() {
    Dialog.Show({'message': 'Signboard:S007_020'})
}

void F_Jungle_010() {
    Dialog.Show({'message': 'Signboard:Jungle_010'})
}

void F_Jungle_020() {
    Dialog.Show({'message': 'Signboard:Jungle_020'})
}

void F_Plains_080() {
    Dialog.Show({'message': 'Signboard:Plains080'})
}

void PartnersPurpose_signboard() {
    Partner[companion].DisableAutoMovement()
    Zelda.AimActorLinkedPoint({'pointIndex': 2, 'actor': ActorIdentifier(name="Signboard"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Signboard.LookAtGimmicksLinkedPoint({'pointIndex': 2, 'duration': 0.10000000149011612, 'chaseRatio': 0.05000000074505806, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Partner[companion].MoveToTargetLinkedPoint({'index': 0, 'speed': 1, 'actor': ActorIdentifier(name="Signboard"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    Timer.Wait({'time': 0.10000000149011612})

    fork {
        Partner[companion].AimActorLinkedPoint({'pointIndex': 2, 'actor': ActorIdentifier(name="Signboard"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.WarpToActorLinkedPoint({'index': 3, 'actor': ActorIdentifier(name="Signboard"), 'offsetY': 0.0})
        Zelda.AimActorLinkedPoint({'pointIndex': 2, 'actor': ActorIdentifier(name="Signboard"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].Talk({'message': 'scenario/StoryAreaA:PartnersPurpose_010', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:PartnersPurpose_011', 'getAttention': False})
    Timer.Wait({'time': 1.0})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 1.0})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'message': 'scenario/StoryAreaA:PartnersPurpose_020', 'selfTalkAnimName': '', 'aimFromPlayer': True, 'aimToPlayer': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:PartnersPurpose_030', 'getAttention': False})
    Partner[companion].LookAtTalker({'keep': True, 'distanceOffset': 2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Partner[companion].AimActorLinkedPoint({'pointIndex': 2, 'actor': ActorIdentifier(name="Signboard"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:PartnersPurpose_040', 'getAttention': False})
    Partner[companion].MoveToTargetLinkedPoint({'speed': 0, 'index': 1, 'actor': ActorIdentifier(name="Signboard"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Partner[companion].AimDegreeAngle({'angle': 135.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:PartnersPurpose_050', 'getAttention': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvAreaA025'})
    QuestSystem.SetProgress({'symbol': 'HyruleCastle_LuberiHouse:2529992941', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventVariables.SetVariable({'symbol': 'HyruleCastle_LuberiHouse:361887586'})
}

void Jungle_021() {
    Dialog.Show({'message': 'Signboard:Jungle_021'})
}

void DisplayMessage() {
    Player.ResetVelocity()
    Vibration.StopAllVibration()
    Dialog.Show({'message': 'label'})
}
