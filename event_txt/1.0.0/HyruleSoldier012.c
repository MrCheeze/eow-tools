-------- EventFlow: HyruleSoldier012 --------

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

Actor: Player
entrypoint: None()
actions: ['PlayAnimationNoWait', 'AimActor']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['CheckProgress']
params: None

Actor: HyruleSoldier012
entrypoint: None()
actions: ['AimPlayer', 'PlayAnimation', 'SetFacialExpression', 'GenericTalkSequenceWithDialog', 'Talk', 'TalkKeep', 'SetInterestIkEnabled', 'PlayAnimationNoWait', 'AimCompassPoint', 'LookAtTalker']
queries: []
params: None

void DescendingFromRamparts_West() {

    fork {
        HyruleSoldier012.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        HyruleSoldier012.SetFacialExpression({'expression': 'surprise'})
        HyruleSoldier012.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HyruleSoldier012.Talk({'message': 'scenario/StoryAreaA:DescendingFromRamparts_010', 'getAttention': False})
    }

    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    HyruleSoldier012.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Zelda.WarpToActor({'actor': ActorIdentifier(name="HyruleSoldier012"), 'distance': 2.0, 'offsetX': 0.0, 'offsetY': 0.0})
    Zelda.AimActor({'offsetX': 0.0, 'actor': ActorIdentifier(name="HyruleSoldier012"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HyruleSoldier012.SetFacialExpression({'expression': 'sad'})
    HyruleSoldier012.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier012.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    HyruleSoldier012.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    HyruleSoldier012.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier012.Talk({'message': 'scenario/StoryAreaA:DescendingFromRamparts_020', 'getAttention': False})
}

void talk010() {
    HyruleSoldier012.SetFacialExpression({'expression': 'surprise'})
    HyruleSoldier012.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'scenario/HylianGeneralTalk:SoldierLTalk01_010', 'selfTalkAnimName': 'surprised_st', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk020() {
    HyruleSoldier012.SetFacialExpression({'expression': 'surprise'})
    HyruleSoldier012.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'scenario/HylianGeneralTalk:SoldierLTalk02_010', 'selfTalkAnimName': 'surprised_st', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk030() {
    HyruleSoldier012.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': 'surprised_st', 'message': 'scenario/HylianGeneralTalk:HylianSoldier012Talk030_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Mystery_Forest020_SoldierTalk050() {

    call EvResetCommon.AllReset()


    fork {
        HyruleSoldier012.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk050_Q1', 'selfTalkAnimName': 'salute_st,salute_lp', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        HyruleSoldier012.SetInterestIkEnabled({'enable': False})
    }

    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        fork {
            HyruleSoldier012.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk050_Q1_A1_010', 'getAttention': False})
            HyruleSoldier012.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk050_Q1_A1_020', 'getAttention': False})
        } {
            HyruleSoldier012.SetInterestIkEnabled({'enable': False})
            HyruleSoldier012.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HyruleSoldier012.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk050_Q1_A1_030', 'getAttention': False})
        } {
            HyruleSoldier012.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="HyruleSoldier012"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

            call GeneralSequence.ZeldaTalkMotion()

            Player.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier012.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HyruleSoldier012.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk050_Q1_A1_040', 'getAttention': False})
        } {
            HyruleSoldier012.PlayAnimationNoWait({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier012.SetFacialExpression({'expression': 'surprise'})
        }


        fork {
            HyruleSoldier012.TalkKeep({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk050_Q1_A1_050', 'getAttention': False})
        } {
            HyruleSoldier012.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier012.SetFacialExpression({'expression': 'normal'})
        }


        fork {
            HyruleSoldier012.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk050_Q1_A1_060', 'getAttention': False})
        } {
            HyruleSoldier012.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        if !QuestSystem.CheckProgress({'symbol': 'Mystery_Forest010:1272034993'}) {
            QuestSystem.SetProgress({'symbol': 'Mystery_Forest010:1002127934', 'isShowTelopInEvent': False, 'isFrontFade': False})
        }
    } else {

        fork {
            HyruleSoldier012.Talk({'message': 'quest/QuestAreaPlains:Mystery_Forest020_SoldierTalk050_Q1_A2_010', 'getAttention': False})
        } {
            HyruleSoldier012.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            HyruleSoldier012.PlayAnimationNoWait({'name': 'salute_st,salute_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }
}
