-------- EventFlow: GatePhoton --------

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag']
params: None

Actor: GatePhoton
entrypoint: None()
actions: []
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'GenericTalkSequenceWithDialog', 'AimPlayer', 'AimActor', 'PlayAnimationNoWait', 'LookAtTalker', 'PlayAnimation']
queries: []
params: None

void forest() {
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_010'}) {

        call _1st()

    } else {
        Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_030', 'selfTalkAnimName': 'think', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        call _jump()

        GameControl.RequestLevelJump({'level': 'FieldBoundary001', 'locator': 'FB001_Start', 'offsetX': 0.0, 'offsetZ': 0.0})
    }
}

void FieldBoundary001() {
    Partner[companion].GenericTalkSequenceWithDialog({'selfTalkAnimName': 'think', 'playerTalkAnim': False, 'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_035', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        call _jump()

        GameControl.RequestLevelJump({'locator': 'F_SouthernVillage001_003', 'level': 'Field', 'offsetX': 0.0, 'offsetZ': 0.0})
    }
}

void _1st() {

    fork {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="GatePhoton"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Zelda.AimActor({'actor': ActorIdentifier(name="GatePhoton"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].Talk({'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_010', 'getAttention': False})
    }


    fork {
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Zelda.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    }

    Partner[companion].Talk({'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_020', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_030', 'getAttention': False})
}

void _jump() {
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_040', 'getAttention': False})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="GatePhoton"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].PlayAnimation({'name': 'appeal,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
}
