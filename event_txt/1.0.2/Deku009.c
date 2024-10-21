-------- EventFlow: Deku009 --------

Actor: Deku009
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimationNoWait', 'AimPlayer', 'AimActor', 'SetTalkerName', 'SetInterestIkEnabled', 'GenericTalkSequence', 'SetComponentActive', 'SetInstanceVariableString']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
params: None

Actor: Deku024
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'AimPlayer', 'AimActor', 'SetFacialExpression', 'SetInterestIkEnabled', 'SetInstanceVariableBool', 'SetComponentActive']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckFlag', 'CheckMessgaeFlag']
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['CheckProgress']
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt3ActorsCenterAsTalker', 'LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE']
queries: []
params: None

void talk010() {

    fork {
        Deku009.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkDeku:Deku009Talk010_010', 'selfTalkAnim': False, 'aimToPlayer': False, 'cameraLookAt': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Deku009.PlayAnimationNoWait({'name': 'talk_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku009"), 'actor2': ActorIdentifier(name="Deku024"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Player.SetInterestIkEnabled({'enable': True})
    }

    Deku009.PlayAnimationNoWait({'name': 'eat_lp_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku024.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    if !EventFlags.CheckFlag({'symbol': 'EvF_ApproachEntranceRuins_Clear'}) {
        Deku024.PlayAnimationNoWait({'name': 'talk_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            Deku024.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Deku009.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Deku024.Talk({'message': 'scenario/GeneralTalkDeku:Deku009Talk010_020', 'getAttention': True})
    } else {
        Deku024.PlayAnimationNoWait({'name': 'talk_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku024.Talk({'message': 'scenario/GeneralTalkDeku:Deku009Talk010_Q1', 'getAttention': True})
        if !Dialog.GetLastResult({'resultOnSkip': 1}) {

            fork {
                Deku024.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Deku009.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }

            Deku024.PlayAnimationNoWait({'name': 'talk_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Deku024.Talk({'message': 'scenario/GeneralTalkDeku:Deku009Talk010_Q2', 'getAttention': True})
            if !Dialog.GetLastResult({'resultOnSkip': 1}) {
                Deku024.PlayAnimationNoWait({'name': 'eat_lp_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
                Deku009.PlayAnimationNoWait({'name': 'talk_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
                Deku009.Talk({'message': 'scenario/GeneralTalkDeku:Deku009Talk010_Q2_A1_010', 'getAttention': True})
                if QuestSystem.CheckProgress({'symbol': 'Jungle:143546590'}) == 4294967295 {
                    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/GeneralTalkDeku:Deku014Talk010_Q1_A1_030'}) {
                        if QuestSystem.CheckProgress({'symbol': 'Jungle:2139711560'}) == 4294967295 {
                            QuestSystem.SetProgress({'symbol': 'Jungle:2139711560', 'isShowTelopInEvent': False, 'isFrontFade': False})
                        }
                    } else {
                        QuestSystem.SetProgress({'symbol': 'Jungle:143546590', 'isShowTelopInEvent': False, 'isFrontFade': False})
                    }
                }
            } else {
                Event116:
                Deku024.PlayAnimationNoWait({'name': 'eat_lp_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
                Deku009.PlayAnimationNoWait({'name': 'talk_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
                Deku009.Talk({'message': 'scenario/GeneralTalkDeku:Deku009Talk010_Q1_A2_010', 'getAttention': True})
            }
        } else {
            goto Event116
        }
    }
}

void talk020() {

    fork {
        Deku009.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku024"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku009.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'selfTalkAnim': False, 'message': 'scenario/GeneralTalkDeku:Deku009Talk020_010', 'aimToPlayer': False, 'cameraLookAt': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Deku009.PlayAnimationNoWait({'name': 'talk_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku009"), 'actor2': ActorIdentifier(name="Deku024"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Player.SetInterestIkEnabled({'enable': True})
    }

    Deku009.PlayAnimationNoWait({'name': 'eat_lp_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku024.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Deku024.PlayAnimationNoWait({'name': 'talk_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku024.Talk({'message': 'scenario/GeneralTalkDeku:Deku009Talk020_020', 'getAttention': True})
    Deku024.PlayAnimationNoWait({'name': 'eat_lp_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku009.PlayAnimationNoWait({'name': 'talk_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku009.Talk({'message': 'scenario/GeneralTalkDeku:Deku009Talk020_030', 'getAttention': True})
    Deku009.PlayAnimationNoWait({'name': 'eat_lp_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku024.PlayAnimationNoWait({'name': 'talk_lod', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku024.Talk({'message': 'scenario/GeneralTalkDeku:Deku009Talk020_040', 'getAttention': True})
}

void talk030() {

    fork {
        Deku009.AimActor({'actor': ActorIdentifier(name="Deku024"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku009.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkDeku:Deku009Talk030_010', 'cameraLookAt': False, 'aimToPlayer': False, 'selfTalkAnim': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku009"), 'actor2': ActorIdentifier(name="Deku024"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Player.SetInterestIkEnabled({'enable': True})
    }

    Deku024.AimActor({'actor': ActorIdentifier(name="Deku009"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Deku024.Talk({'message': 'scenario/GeneralTalkDeku:Deku009Talk030_020', 'getAttention': True})
    Deku009.Talk({'message': 'scenario/GeneralTalkDeku:Deku009Talk030_030', 'getAttention': True})
    Deku009.Talk({'message': 'scenario/GeneralTalkDeku:Deku009Talk030_040', 'getAttention': True})

    fork {
        Deku024.Talk({'message': 'scenario/GeneralTalkDeku:Deku009Talk030_050', 'getAttention': True})
    } {
        Timer.Wait({'time': 1.600000023841858})
        Audio.PlayOneshotSystemSE({'label': 'VO_DKN_1_3_001_004', 'volume': 1.0, 'pitch': 1.0})
    }

}

void HideAndSeek_Jungle010_010() {
    Deku009.SetTalkerName({'message': 'glossary/Character:Deku010', 'keep': False})
    Deku009.SetInterestIkEnabled({'enable': False})
    Deku009.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaF:HideAndSeek_Jungle015_030', 'selfTalkAnim': True, 'selfTalkAnimName': 'find,panic', 'facial': 'angry', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Deku009.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle015_040', 'getAttention': False})
    } {
        Deku009.PlayAnimationNoWait({'name': 'angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Deku009.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait01'})
}

void Quest_HideAndSeek_After009() {
    Deku024.SetInterestIkEnabled({'enable': False})
    Deku009.SetInterestIkEnabled({'enable': False})
    Deku024.AimActor({'actor': ActorIdentifier(name="Deku009"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Deku009.GenericTalkSequence({'aimToPlayer': False, 'selfTalkAnim': False, 'playerTalkAnim': False, 'cameraLookAt': False, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    } {
        Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku009"), 'actor2': ActorIdentifier(name="Deku024"), 'actor3': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    Deku024.SetComponentActive({'active': False, 'name': 'DekuSmoothie'})

    fork {
        Deku024.Talk({'message': 'scenario/GeneralTalkDeku:Deku009Talk040_010', 'getAttention': False})
    } {
        Deku024.PlayAnimationNoWait({'name': 'find,panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku024.SetFacialExpression({'expression': 'sad'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Deku009.AimActor({'actor': ActorIdentifier(name="Deku024"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku024"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku024"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku024.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku009.SetComponentActive({'active': False, 'name': 'DekuSmoothie'})

    fork {
        Deku009.Talk({'message': 'scenario/GeneralTalkDeku:Deku009Talk040_020', 'getAttention': False})
    } {
        Deku009.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku024.SetFacialExpression({'expression': 'sad'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="Deku009"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'actor': ActorIdentifier(name="Deku009"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku009.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku024.Talk({'message': 'scenario/GeneralTalkDeku:Deku009Talk040_030', 'getAttention': False})
    } {
        Deku024.PlayAnimationNoWait({'name': 'find,happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku024.SetFacialExpression({'expression': 'smile'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku024"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku024"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Deku009.Talk({'message': 'scenario/GeneralTalkDeku:Deku009Talk040_040', 'getAttention': False})
    } {
        Deku009.PlayAnimationNoWait({'name': 'no01,think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku024.SetFacialExpression({'expression': 'sad'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="Deku009"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'actor': ActorIdentifier(name="Deku009"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku024.SetInstanceVariableBool({'name': 'questFinishTalk', 'value': True})
    Deku024.SetComponentActive({'name': 'DekuSmoothie', 'active': True})
    Deku009.SetComponentActive({'name': 'DekuSmoothie', 'active': True})
}
