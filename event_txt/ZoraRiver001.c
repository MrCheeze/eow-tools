-------- EventFlow: ZoraRiver001 --------

Actor: ZoraRiver001
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SetInstanceVariableBool', 'PlayAnimation', 'SetFacialExpression', 'SetTalkerName', 'SkipAutoTurn']
queries: ['GetInstanceVariableBool']
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckMessgaeFlag']
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE']
queries: []
params: None

void talk() {
    ZoraRiver001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver001Talk010_010', 'selfTalkAnimName': '', 'keepTalk': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    ZoraRiver001.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver001Talk010_020', 'getAttention': False})
}

void talk020() {
    if !ZoraRiver001.GetInstanceVariableBool({'name': 'talkFinish'}) {
        ZoraRiver001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver001Talk020_010', 'keepTalk': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        ZoraRiver001.SetInstanceVariableBool({'value': True, 'name': 'talkFinish'})
        ZoraRiver001.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver001Talk020_020', 'getAttention': False})
    } else {
        Audio.PlayOneshotSystemSE({'label': 'VO_ZORA_M11_1_001_004', 'volume': 1.0, 'pitch': 1.0})
        ZoraRiver001.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver001Talk020_020', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
}

void talk030() {
    ZoraRiver001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver001Talk030_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk040() {
    ZoraRiver001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver001Talk040_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Special_Coast010_030() {
    ZoraRiver001.SetTalkerName({'message': 'glossary/Character:ZoraRiver001', 'keep': False})
    if !EventFlags.CheckMessgaeFlag({'message': 'quest/QuestAreaB:Special_Coast050_070'}) {

        call EvResetCommon.AllReset()

        ZoraRiver001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'message': 'quest/QuestAreaB:Special_Coast050_070', 'selfTalkAnimName': 'surprised_st01,surprised_lp01', 'selfTalkAnim': True, 'facial': 'surprise', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        ZoraRiver001.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            ZoraRiver001.Talk({'message': 'quest/QuestAreaB:Special_Coast050_080', 'getAttention': False})
        } {
            ZoraRiver001.PlayAnimation({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraRiver001.SetFacialExpression({'expression': 'sad'})
        }

        ZoraRiver001.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            ZoraRiver001.Talk({'message': 'quest/QuestAreaB:Special_Coast050_090', 'getAttention': False})
        } {
            ZoraRiver001.SetFacialExpression({'expression': 'surprise'})
        }

        Timer.Wait({'time': 1.0})

        fork {
            ZoraRiver001.SetFacialExpression({'expression': 'sleep'})
        } {
            ZoraRiver001.PlayAnimation({'name': 'no01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            Timer.Wait({'time': 0.5})
        } {
            ZoraRiver001.SetFacialExpression({'expression': 'normal'})
        }


        fork {
            ZoraRiver001.Talk({'message': 'quest/QuestAreaB:Special_Coast050_100', 'getAttention': False})
        } {
            ZoraRiver001.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            ZoraRiver001.Talk({'message': 'quest/QuestAreaB:Special_Coast050_110', 'getAttention': False})
        } {
            ZoraRiver001.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraRiver001.SetFacialExpression({'expression': 'sleep'})
        }


        fork {
            ZoraRiver001.Talk({'message': 'quest/QuestAreaB:Special_Coast050_120', 'getAttention': False})
        } {
            ZoraRiver001.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraRiver001.SetFacialExpression({'expression': 'normal'})
        }


        fork {
            ZoraRiver001.Talk({'message': 'quest/QuestAreaB:Special_Coast050_130', 'getAttention': False})
        } {
            ZoraRiver001.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraRiver001.SetFacialExpression({'expression': 'sleep'})
        }


        fork {
            ZoraRiver001.Talk({'message': 'quest/QuestAreaB:Special_Coast050_130_02', 'getAttention': False})
        } {
            ZoraRiver001.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraRiver001.SetFacialExpression({'expression': 'normal'})
        }

        ZoraRiver001.SkipAutoTurn()
        EventFlags.SetFlag({'value': True, 'symbol': 'ZoraRiver001_Talk'})
        QuestSystem.SetProgress({'symbol': 'Special_Coast010:1107056259', 'isShowTelopInEvent': False, 'isFrontFade': False})
    } else {
        ZoraRiver001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'message': 'quest/QuestAreaB:Special_Coast050_120', 'selfTalkAnimName': 'talk02', 'facial': '', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        ZoraRiver001.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            ZoraRiver001.Talk({'message': 'quest/QuestAreaB:Special_Coast050_130', 'getAttention': False})
        } {
            ZoraRiver001.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraRiver001.SetFacialExpression({'expression': 'sleep'})
        }


        fork {
            ZoraRiver001.Talk({'message': 'quest/QuestAreaB:Special_Coast050_130_02', 'getAttention': False})
        } {
            ZoraRiver001.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraRiver001.SetFacialExpression({'expression': 'normal'})
        }

        ZoraRiver001.SkipAutoTurn()
    }
}

void talk050() {
    ZoraRiver001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver001Talk050_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}
