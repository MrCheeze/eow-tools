-------- EventFlow: HylianF012 --------

Actor: HylianF012
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimationNoWait', 'SetFacialExpression', 'AimPlayer', 'PlayAnimation', 'ActiveteLinkedActor', 'ResetLinkedActor', 'SetInterestIkEnabled', 'AimToInitialAngle', 'SetInstanceVariableString']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['PlayAnimation', 'WarpToActorLinkedPoint']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['ResetFacialExpression', 'AddItemAndGenericItemGetSequence']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['MoveToDefaultPosition', 'EnableAutoMovement']
queries: []
params: None

void Carry_RiverCoast010_Start() {

    call EvResetCommon.AllReset()

    HylianF012.SetFacialExpression({'expression': 'sad'})
    HylianF012.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF012.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': False, 'aimToPlayer': False, 'message': 'quest/QuestAreaB:Carry_RiverCoast010_Start_010', 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianF012.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianF012.SetFacialExpression({'expression': 'normal'})
    HylianF012.PlayAnimationNoWait({'name': 'talk11', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF012.Talk({'message': 'quest/QuestAreaB:Carry_RiverCoast010_Start_020', 'getAttention': False})
    HylianF012.SetFacialExpression({'expression': 'angry'})
    HylianF012.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF012.Talk({'message': 'quest/QuestAreaB:Carry_RiverCoast010_Start_030', 'getAttention': False})
    HylianF012.SetFacialExpression({'expression': 'smile'})
    HylianF012.PlayAnimation({'name': 'talk11', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF012.Talk({'message': 'quest/QuestAreaB:Carry_RiverCoast010_Start_040', 'getAttention': False})
    HylianF012.Talk({'message': 'quest/QuestAreaB:Carry_RiverCoast010_Start_050', 'getAttention': False})
    HylianF012.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    Player.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="HylianF012"), 'offsetY': 0.0})
    HylianF012.ActiveteLinkedActor({'index': 0})
    HylianF012.SetFacialExpression({'expression': 'normal'})
    Player.PlayAnimation({'name': '', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.10000000149011612})
    Player.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 2.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    Timer.Wait({'time': 0.5})
    HylianF012.PlayAnimationNoWait({'name': 'talk11', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF012.Talk({'message': 'quest/QuestAreaB:Carry_RiverCoast010_Start_060', 'getAttention': False})
    HylianF012.SetFacialExpression({'expression': 'surprise'})
    HylianF012.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF012.Talk({'message': 'quest/QuestAreaB:Carry_RiverCoast010_Start_065', 'getAttention': False})
    HylianF012.SetFacialExpression({'expression': 'sad'})
    HylianF012.PlayAnimationNoWait({'name': 'wait03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF012.Talk({'message': 'quest/QuestAreaB:Carry_RiverCoast010_Start_067', 'getAttention': False})
    HylianF012.SetFacialExpression({'expression': 'normal'})
    HylianF012.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF012.Talk({'message': 'quest/QuestAreaB:Carry_RiverCoast010_Start_070', 'getAttention': False})
    QuestSystem.SetProgress({'symbol': 'Carry_RiverCoast010:535557844', 'isShowTelopInEvent': False, 'isFrontFade': False})
    HylianF012.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF012.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    HylianF012.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait01'})
}

void Carry_RiverCoast010_Talk010() {

    call EvResetCommon.AllReset()

    HylianF012.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'quest/QuestAreaB:Carry_RiverCoast010_Talk010_Q1', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        HylianF012.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianF012.SetFacialExpression({'expression': 'smile'})
    } {
        HylianF012.Talk({'message': 'quest/QuestAreaB:Carry_RiverCoast010_Talk010_Q1_A1_010', 'getAttention': False})
    }

    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    HylianF012.ResetLinkedActor({'index': 0, 'resetWait': True, 'cemeteryRevive': False})
    HylianF012.ActiveteLinkedActor({'index': 0})
    Player.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="HylianF012"), 'offsetY': 0.0})
    Player.PlayAnimation({'name': '', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.10000000149011612})
    Player.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 2.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    Timer.Wait({'time': 0.5})
    HylianF012.PlayAnimationNoWait({'name': 'yes01,talk11', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF012.SetFacialExpression({'expression': 'smile'})
    HylianF012.Talk({'message': 'quest/QuestAreaB:Carry_RiverCoast010_Talk010_Q1_A1_020', 'getAttention': False})
    HylianF012.Talk({'message': 'quest/QuestAreaB:Carry_RiverCoast010_Talk010_Q1_A2_010', 'getAttention': False})
    HylianF012.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
}

void Carry_RiverCoast010_Complete() {

    call EvResetCommon.AllReset()

    HylianF012.SetInterestIkEnabled({'enable': False})
    HylianF012.SetFacialExpression({'expression': 'smile'})
    HylianF012.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'quest/QuestAreaB:Carry_RiverCoast010_Complete_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianF012.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    call GeneralSequence.ZeldaTalkMotion_1.5s()

    Timer.Wait({'time': 0.5})
    HylianF012.SetFacialExpression({'expression': 'surprise'})
    HylianF012.Talk({'message': 'quest/QuestAreaB:Carry_RiverCoast010_Complete_020', 'getAttention': False})
    HylianF012.SetFacialExpression({'expression': 'sad'})
    HylianF012.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF012.Talk({'message': 'quest/QuestAreaB:Carry_RiverCoast010_Complete_025', 'getAttention': False})
    HylianF012.SetFacialExpression({'expression': 'smile'})
    HylianF012.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF012.Talk({'message': 'quest/QuestAreaB:Carry_RiverCoast010_Complete_030', 'getAttention': False})
    HylianF012.PlayAnimationNoWait({'name': 'talk11', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF012.Talk({'message': 'quest/QuestAreaB:Carry_RiverCoast010_Complete_040', 'getAttention': False})
    HylianF012.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'SmoothieIngredient00', 'count': 10, 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})

    fork {
        Zelda.ResetFacialExpression()
    } {
        Partner.MoveToDefaultPosition({'speed': 1, 'position': 1, 'avoidPlayer': True, 'tolerance': 0.0, 'avoidWall': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
    }

    Partner.EnableAutoMovement()
    HylianF012.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaB:Carry_RiverCoast010_Complete_050', 'playerTalkAnim': False, 'facial': 'normal', 'selfTalkAnimName': 'wait02', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianF012.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    QuestSystem.SetProgress({'symbol': 'Carry_RiverCoast010:616156921', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Carry_RiverCoast010_Talk030() {
    HylianF012.SetFacialExpression({'expression': 'smile'})
    HylianF012.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'scenario/HylianGeneralTalk:HylianF012Talk010_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianF012.SetFacialExpression({'expression': 'sad'})
    HylianF012.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF012.Talk({'message': 'scenario/HylianGeneralTalk:HylianF012Talk010_020', 'getAttention': False})
}
