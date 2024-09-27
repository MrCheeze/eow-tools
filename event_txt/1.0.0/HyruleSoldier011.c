-------- EventFlow: HyruleSoldier011 --------

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

Actor: HyruleSoldier011
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'LookAtTalker', 'AimCompassPoint', 'AimPlayer', 'PlayAnimation', 'SetFacialExpression', 'Talk', 'TalkKeep', 'SetInterestIkEnabled', 'PlayAnimationNoWait']
queries: []
params: None

void talk() {
    HyruleSoldier011.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': 'salute,wait', 'message': 'scenario/HylianGeneralTalk:SoldierKTalk01_010', 'facial': 'angry', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void DescendingFromRamparts_NorthEast() {

    fork {
        HyruleSoldier011.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        HyruleSoldier011.SetFacialExpression({'expression': 'surprise'})
        HyruleSoldier011.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier011.Talk({'message': 'scenario/StoryAreaA:DescendingFromRamparts_010', 'getAttention': False})
    }

    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    HyruleSoldier011.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Zelda.WarpToActor({'distance': 2.0, 'actor': ActorIdentifier(name="HyruleSoldier011"), 'offsetY': 0.0, 'offsetX': 0.0})
    Zelda.AimActor({'actor': ActorIdentifier(name="HyruleSoldier011"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HyruleSoldier011.SetFacialExpression({'expression': 'sad'})
    HyruleSoldier011.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier011.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    HyruleSoldier011.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    HyruleSoldier011.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier011.Talk({'message': 'scenario/StoryAreaA:DescendingFromRamparts_020', 'getAttention': False})
}

void talk020() {
    HyruleSoldier011.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': 'salute,wait', 'message': 'scenario/HylianGeneralTalk:SoldierKTalk02_010', 'facial': 'angry', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk030() {
    HyruleSoldier011.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': 'salute,wait', 'message': 'scenario/HylianGeneralTalk:HylianSoldier011Talk030_010', 'facial': 'angry', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Mystery_Forest020_SoldierTalk040() {

    call EvResetCommon.AllReset()


    fork {
        HyruleSoldier011.GenericTalkSequenceWithDialog({'selfTalkAnimName': 'salute_st,salute_lp', 'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk040_Q1', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        HyruleSoldier011.SetInterestIkEnabled({'enable': False})
    }

    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        fork {
            HyruleSoldier011.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk040_Q1_A1_010', 'getAttention': False})
        } {
            HyruleSoldier011.PlayAnimationNoWait({'name': 'think,no', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HyruleSoldier011.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk040_Q1_A1_020', 'getAttention': False})
        } {
            HyruleSoldier011.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HyruleSoldier011.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk040_Q1_A1_030', 'getAttention': False})
        } {
            HyruleSoldier011.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Event33:

        fork {
            HyruleSoldier011.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk040_Q1_A2_010', 'getAttention': False})
        } {
            HyruleSoldier011.PlayAnimationNoWait({'name': 'salute_st,salute_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } else {
        goto Event33
    }
}
