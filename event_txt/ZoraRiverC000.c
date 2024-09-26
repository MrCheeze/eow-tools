-------- EventFlow: ZoraRiverC000 --------

Actor: ZoraRiverC000
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SetFacialExpression', 'PlayAnimationNoWait', 'PlayAnimation', 'SetInterestIkEnabled', 'SetInstanceVariableString', 'SetDefaultFacialExpression']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag']
params: None

void talk() {
    ZoraRiverC000.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverC000Talk010_010', 'selfTalkAnimName': 'sad01', 'facial': 'sad', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk020() {
    ZoraRiverC000.SetFacialExpression({'expression': 'surprise'})
    ZoraRiverC000.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverC000Talk020_010', 'selfTalkAnimName': 'frightened01', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraRiverC000.SetDefaultFacialExpression({'expression': 'sad'})
    ZoraRiverC000.SetInstanceVariableString({'name': 'idleAnim', 'value': 'frightened01'})
}

void Bring_RiverCoast010_Talk010() {
    ZoraRiverC000.SetInterestIkEnabled({'enable': False})
    if !EventFlags.CheckMessgaeFlag({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Talk010_020'}) {
        ZoraRiverC000.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'quest/QuestAreaB:Bring_RiverCoast010_Talk010_010', 'facial': 'sad', 'selfTalkAnimName': 'think01', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

        fork {
            ZoraRiverC000.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Talk010_020', 'getAttention': False})
        } {
            ZoraRiverC000.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraRiverC000.SetFacialExpression({'expression': 'surprise'})
        }


        fork {
            ZoraRiverC000.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Talk010_030', 'getAttention': False})
        } {
            ZoraRiverC000.PlayAnimationNoWait({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            ZoraRiverC000.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Talk010_040', 'getAttention': False})
        } {
            ZoraRiverC000.PlayAnimationNoWait({'name': 'no01,sad02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraRiverC000.SetFacialExpression({'expression': 'sleep'})
        }

    } else {
        ZoraRiverC000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaB:Bring_RiverCoast010_Talk010_040', 'selfTalkAnimName': 'no01,sad02', 'facial': 'sleep', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
}

void Bring_RiverCoast010_Talk030() {
    ZoraRiverC000.SetFacialExpression({'expression': 'smile'})
    ZoraRiverC000.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'selfTalkAnimName': 'talk_swim01', 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiverC000Talk030_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraRiverC000.PlayAnimationNoWait({'name': 'wait_swim01', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void Bring_RiverCoast010_Start() {

    call EvResetCommon.AllReset()

    ZoraRiverC000.SetInterestIkEnabled({'enable': False})
    if !EventFlags.CheckMessgaeFlag({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Start_050'}) {
        ZoraRiverC000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaB:Bring_RiverCoast010_Start_010', 'selfTalkAnim': True, 'selfTalkAnimName': 'frightened02', 'facial': 'sad', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

        fork {
            ZoraRiverC000.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Start_020', 'getAttention': False})
        } {
            ZoraRiverC000.PlayAnimationNoWait({'name': 'frightened02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraRiverC000.SetFacialExpression({'expression': 'surprise'})
        }


        fork {
            ZoraRiverC000.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Start_030', 'getAttention': False})
        } {
            ZoraRiverC000.PlayAnimationNoWait({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraRiverC000.SetFacialExpression({'expression': 'sad'})
        }


        fork {
            ZoraRiverC000.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Start_040', 'getAttention': False})
        } {
            ZoraRiverC000.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraRiverC000.SetFacialExpression({'expression': 'surprise'})
        }


        fork {
            ZoraRiverC000.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Start_050', 'getAttention': False})
        } {
            ZoraRiverC000.PlayAnimation({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            ZoraRiverC000.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Start_060', 'getAttention': False})
        } {
            ZoraRiverC000.PlayAnimation({'name': 'no01,frightened02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            ZoraRiverC000.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Start_070', 'getAttention': False})
        } {
            ZoraRiverC000.PlayAnimation({'name': 'sad02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraRiverC000.SetFacialExpression({'expression': 'sleep'})
        }


        fork {
            ZoraRiverC000.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Start_080', 'getAttention': False})
        } {
            ZoraRiverC000.PlayAnimation({'name': 'wait14', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraRiverC000.SetFacialExpression({'expression': 'sad'})
        }

        QuestSystem.SetProgress({'symbol': 'Bring_RiverCoast010:3050363178', 'isShowTelopInEvent': False, 'isFrontFade': False})
        ZoraRiverC000.SetDefaultFacialExpression({'expression': 'surprise'})
        ZoraRiverC000.SetInstanceVariableString({'name': 'idleAnim', 'value': 'frightened01'})
    } else {
        ZoraRiverC000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'frightened01', 'selfTalkAnim': True, 'message': 'quest/QuestAreaB:Bring_RiverCoast010_Start_080', 'facial': 'surprise', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

        fork {
            ZoraRiverC000.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Start_030', 'getAttention': False})
        } {
            ZoraRiverC000.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraRiverC000.SetFacialExpression({'expression': 'sleep'})
        }

    }
}
