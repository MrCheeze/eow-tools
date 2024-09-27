-------- EventFlow: HyruleSoldier019 --------

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

Actor: HyruleSoldier019
entrypoint: None()
actions: ['Talk', 'LookAtTalker', 'AimCompassPoint', 'AimPlayer', 'PlayAnimation', 'SetFacialExpression', 'GenericTalkSequenceWithDialog', 'TalkKeep', 'PlayAnimationNoWait', 'SetInterestIkEnabled', 'PlayAnimationEx']
queries: []
params: None

void DescendingFromRamparts_East() {

    fork {
        HyruleSoldier019.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        HyruleSoldier019.SetFacialExpression({'expression': 'surprise'})
        HyruleSoldier019.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier019.Talk({'message': 'scenario/StoryAreaA:DescendingFromRamparts_010', 'getAttention': False})
    }

    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    HyruleSoldier019.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Zelda.WarpToActor({'distance': 2.0, 'actor': ActorIdentifier(name="HyruleSoldier019"), 'offsetY': 0.0, 'offsetX': 0.0})
    Zelda.AimActor({'actor': ActorIdentifier(name="HyruleSoldier019"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HyruleSoldier019.SetFacialExpression({'expression': 'sad'})
    HyruleSoldier019.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier019.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    HyruleSoldier019.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    HyruleSoldier019.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier019.Talk({'message': 'scenario/StoryAreaA:DescendingFromRamparts_020', 'getAttention': False})
}

void talk() {
    HyruleSoldier019.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'scenario/HylianGeneralTalk:Soldier019Talk010_010', 'selfTalkAnimName': 'surprised_st', 'facial': 'surprise', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk020() {
    HyruleSoldier019.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'scenario/HylianGeneralTalk:Soldier019Talk020_010', 'selfTalkAnimName': 'wait', 'facial': 'angry', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk030() {
    HyruleSoldier019.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': 'surprised_st', 'message': 'scenario/HylianGeneralTalk:Soldier019Talk030_010', 'facial': 'surprise', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Mystery_Forest020_SoldierTalk065() {

    call EvResetCommon.AllReset()


    fork {
        HyruleSoldier019.GenericTalkSequenceWithDialog({'selfTalkAnimName': 'salute_st,salute_lp', 'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk065_Q1', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        HyruleSoldier019.SetInterestIkEnabled({'enable': False})
    }

    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        fork {
            HyruleSoldier019.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk065_Q1_A1_010', 'getAttention': False})
        } {
            HyruleSoldier019.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HyruleSoldier019.PlayAnimationEx({'name': 'search', 'time': 2.0, 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier019.SetInterestIkEnabled({'enable': False})
        }


        fork {
            HyruleSoldier019.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk065_Q1_A1_020', 'getAttention': False})
        } {
            HyruleSoldier019.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Event33:

        fork {
            HyruleSoldier019.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk065_Q1_A2_010', 'getAttention': False})
        } {
            HyruleSoldier019.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            HyruleSoldier019.PlayAnimationNoWait({'name': 'salute_st,salute_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier019.SetFacialExpression({'expression': 'smile'})
        }

    } else {
        goto Event33
    }
}
