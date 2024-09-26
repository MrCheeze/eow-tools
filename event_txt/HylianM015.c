-------- EventFlow: HylianM015 --------

Actor: HylianM015
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SetFacialExpression', 'SetTalkerName', 'SetInterestIkEnabled', 'AimPlayer', 'AimActor', 'ResetFacialExpression', 'AimCompassPoint']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AbsorbAllPastedActors']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Reset']
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

Actor: SensorQuestActor
entrypoint: None()
actions: ['TargetActorInactive']
queries: []
params: None

Actor: CharmBase
entrypoint: None()
actions: []
queries: ['IsConsumedFirst']
params: None

Actor: CharmFish
entrypoint: None()
actions: []
queries: []
params: None

void talk() {
    HylianM015.SetTalkerName({'message': 'glossary/Character:HylianM015', 'keep': False})
    HylianM015.GenericTalkSequenceWithDialog({'aimToPlayer': False, 'selfTalkAnim': False, 'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianM015Talk010_010', 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianM015.Talk({'message': 'scenario/HylianGeneralTalk:HylianM015Talk010_020', 'getAttention': False})
}

void Carry_RiverCoast010_Talk020() {
    HylianM015.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': False, 'message': 'quest/QuestAreaB:Carry_RiverCoast010_Talk020_010', 'aimToPlayer': False, 'facial': '', 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianM015.Talk({'message': 'quest/QuestAreaB:Carry_RiverCoast010_Talk020_020', 'getAttention': False})
}

void Carry_RiverCoast010_False() {

    call EvResetCommon.AllReset_SensorQuest()

    HylianM015.SetTalkerName({'message': 'glossary/Character:HylianM015', 'keep': False})
    HylianM015.GenericTalkSequenceWithDialog({'aimToPlayer': False, 'selfTalkAnim': False, 'playerTalkAnim': False, 'message': 'quest/QuestAreaB:Carry_RiverCoast010_False_010', 'absorbAllPastedActors': False, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !CharmBase.IsConsumedFirst() {
        HylianM015.Talk({'message': 'quest/QuestAreaB:Carry_RiverCoast010_False_020', 'getAttention': False})
    } else {
        HylianM015.Talk({'message': 'quest/QuestAreaB:Carry_RiverCoast010_False_030', 'getAttention': False})
    }
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
}

void Carry_RiverCoast010_Carry() {

    call EvResetCommon.AllReset_SensorQuest()

    HylianM015.SetTalkerName({'message': 'glossary/Character:HylianM015', 'keep': False})
    HylianM015.GenericTalkSequenceWithDialog({'aimToPlayer': False, 'selfTalkAnim': False, 'playerTalkAnim': False, 'message': 'quest/QuestAreaB:Carry_RiverCoast010_Carry_010', 'absorbAllPastedActors': False, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !CharmBase.IsConsumedFirst() {
        HylianM015.Talk({'message': 'quest/QuestAreaB:Carry_RiverCoast010_Carry_020', 'getAttention': False})
        HylianM015.SetInterestIkEnabled({'enable': True})
        HylianM015.ResetFacialExpression()
        HylianM015.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="CharmFish"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        HylianM015.SetFacialExpression({'expression': 'surprise'})
        HylianM015.Talk({'message': 'quest/QuestAreaB:Carry_RiverCoast010_Carry_030', 'getAttention': False})
        HylianM015.SetFacialExpression({'expression': 'smile'})
        HylianM015.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        HylianM015.Talk({'message': 'quest/QuestAreaB:Carry_RiverCoast010_Carry_040', 'getAttention': False})
        HylianM015.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="CharmFish"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        HylianM015.Talk({'message': 'quest/QuestAreaB:Carry_RiverCoast010_Carry_050', 'getAttention': False})
        Fade.StartPreset({'preset': 'FadeOutSlowB'})
        HylianM015.Talk({'message': 'quest/QuestAreaB:Carry_RiverCoast010_Carry_060', 'getAttention': False})
        HylianM015.Talk({'message': 'quest/QuestAreaB:Carry_RiverCoast010_Carry_070', 'getAttention': False})
        EventFlags.SetFlag({'symbol': 'Carry_HyrulePlains010_Clear', 'value': True})
        SensorQuestActor.TargetActorInactive()
        HylianM015.AimCompassPoint({'withoutTurn': False, 'direction': 0, 'duration': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 1.0})
        Fade.StartPreset({'preset': 'FadeInSlow'})
        HylianM015.Talk({'message': 'quest/QuestAreaB:Carry_RiverCoast010_Carry_080', 'getAttention': False})

        fork {
            HylianM015.SetFacialExpression({'expression': 'sleep'})
        } {
            HylianM015.Talk({'message': 'quest/QuestAreaB:Carry_RiverCoast010_Carry_090', 'getAttention': False})
        }

        HylianM015.SetInterestIkEnabled({'enable': False})
        QuestSystem.SetProgress({'symbol': 'Carry_RiverCoast010:885433623', 'isShowTelopInEvent': False, 'isFrontFade': False})
    } else {
        HylianM015.Talk({'message': 'quest/QuestAreaB:Carry_RiverCoast010_False_030', 'getAttention': False})
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
        SensorQuestActor.TargetActorInactive()
        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
        Timer.Wait({'time': 1.0})
        Fade.StartPreset({'preset': 'FadeInNormal'})
    }
}
