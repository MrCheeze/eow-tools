-------- EventFlow: HyruleSoldier020 --------

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['WarpToActor', 'AimActor']
queries: []
params: None

Actor: HyruleSoldier020
entrypoint: None()
actions: ['LookAtTalker', 'AimCompassPoint', 'AimPlayer', 'PlayAnimation', 'SetFacialExpression', 'Talk', 'GenericTalkSequenceWithDialog', 'PlayAnimationNoWait']
queries: []
params: None

void DescendingFromRamparts_NorthWest() {

    fork {
        HyruleSoldier020.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        HyruleSoldier020.SetFacialExpression({'expression': 'surprise'})
        HyruleSoldier020.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier020.Talk({'message': 'scenario/StoryAreaA:DescendingFromRamparts_010', 'getAttention': False})
    }

    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    HyruleSoldier020.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Zelda.WarpToActor({'distance': 2.0, 'actor': ActorIdentifier(name="HyruleSoldier020"), 'offsetY': 0.0, 'offsetX': 0.0})
    Zelda.AimActor({'actor': ActorIdentifier(name="HyruleSoldier020"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HyruleSoldier020.SetFacialExpression({'expression': 'sad'})
    HyruleSoldier020.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier020.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    HyruleSoldier020.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    HyruleSoldier020.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier020.Talk({'message': 'scenario/StoryAreaA:DescendingFromRamparts_020', 'getAttention': False})
}

void talk010() {
    HyruleSoldier020.SetFacialExpression({'expression': 'sad'})
    HyruleSoldier020.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:Soldier020Talk010_010', 'selfTalkAnimName': '', 'aimToPlayer': True, 'selfTalkAnim': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk020() {
    HyruleSoldier020.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:Soldier020Talk020_010', 'aimToPlayer': True, 'facial': 'sad', 'selfTalkAnim': True, 'selfTalkAnimName': 'no,wait', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Mystery_Forest020_SoldierTalk070() {
    HyruleSoldier020.GenericTalkSequenceWithDialog({'facial': '', 'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk030_Q1', 'aimToPlayer': True, 'selfTalkAnim': True, 'playerTalkAnim': False, 'selfTalkAnimName': 'salute,wait', 'keepTalk': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        fork {
            HyruleSoldier020.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk063_Q1_A1_010', 'getAttention': False})
        } {
            HyruleSoldier020.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
            HyruleSoldier020.SetFacialExpression({'expression': 'smile'})
            HyruleSoldier020.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } else {

        fork {
            HyruleSoldier020.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk030_Q1_A2_010', 'getAttention': False})
        } {
            HyruleSoldier020.PlayAnimation({'name': 'salute,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier020.SetFacialExpression({'expression': 'smile'})
        }

    }
}

void talk030() {
    HyruleSoldier020.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/HylianGeneralTalk:Soldier020Talk030_010', 'facial': 'sad', 'aimToPlayer': True, 'selfTalkAnim': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}
