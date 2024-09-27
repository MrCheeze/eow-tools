-------- EventFlow: ZoraSea002 --------

Actor: ZoraSea002
entrypoint: None()
actions: ['Talk', 'GenericTalkSequenceWithDialog', 'PlayAnimationNoWait', 'SetFacialExpression', 'PlayAnimation', 'SetTalkerName', 'AimPlayer', 'AimToInitialAngle', 'ResetFacialExpression', 'SetInstanceVariableString', 'SetDefaultFacialExpression']
queries: []
params: None

Actor: ZoraRiver002
entrypoint: None()
actions: ['AimActor', 'AimToInitialAngle', 'SetInterestIkEnabled', 'PlayAnimation']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: []
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

void talk020() {
    ZoraSea002.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea002Talk010_010', 'playerTalkAnim': False, 'selfTalkAnimName': 'yes01,wait01', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSea002.SetFacialExpression({'expression': 'sleep'})
    ZoraSea002.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSea002.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea002Talk010_020', 'getAttention': False})
}

void talk030() {
    ZoraSea002.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea002Talk020_010', 'playerTalkAnim': False, 'selfTalkAnimName': 'talk01', 'facial': 'sad', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSea002.SetFacialExpression({'expression': 'smile'})
    ZoraSea002.PlayAnimationNoWait({'name': 'happy01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSea002.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea002Talk020_020', 'getAttention': False})
}

void talk() {
    ZoraSea002.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea002Talk005_010', 'aimToPlayer': False, 'selfTalkAnimName': 'think01', 'facial': 'sad', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSea002.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea002Talk005_020', 'getAttention': False})
}

void Special_Coast010_010() {

    call EvResetCommon.AllReset()

    ZoraSea002.SetTalkerName({'message': 'glossary/Character:ZoraSea002', 'keep': False})
    ZoraSea002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaB:Special_Coast010_010', 'selfTalkAnimName': '', 'selfTalkAnim': False, 'aimToPlayer': False, 'facial': 'sleep', 'playerTalkAnimName': 'think01', 'aimFromPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSea002.Talk({'message': 'quest/QuestAreaB:Special_Coast010_020', 'getAttention': False})
    ZoraSea002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSea002.SetFacialExpression({'expression': 'normal'})
    ZoraSea002.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        ZoraSea002.Talk({'message': 'quest/QuestAreaB:Special_Coast010_030', 'getAttention': False})
    } {
        ZoraSea002.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        ZoraSea002.Talk({'message': 'quest/QuestAreaB:Special_Coast010_040', 'getAttention': False})
    } {
        ZoraSea002.SetFacialExpression({'expression': 'sad'})
    }

    ZoraSea002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSea002.Talk({'message': 'quest/QuestAreaB:Special_Coast010_050', 'getAttention': False})
    } {
        ZoraSea002.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea002.SetFacialExpression({'expression': 'sleep'})
    }

    ZoraSea002.Talk({'message': 'quest/QuestAreaB:Special_Coast010_060', 'getAttention': False})
    ZoraSea002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSea002.Talk({'message': 'quest/QuestAreaB:Special_Coast010_070', 'getAttention': False})
    } {
        ZoraSea002.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea002.SetFacialExpression({'expression': 'normal'})
    }

    ZoraSea002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSea002.Talk({'message': 'quest/QuestAreaB:Special_Coast010_080', 'getAttention': False})
    } {
        ZoraSea002.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        ZoraSea002.Talk({'message': 'quest/QuestAreaB:Special_Coast010_090', 'getAttention': False})
    } {
        ZoraSea002.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        ZoraSea002.Talk({'message': 'quest/QuestAreaB:Special_Coast010_100', 'getAttention': False})
    } {
        ZoraSea002.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea002.SetFacialExpression({'expression': 'normal'})
    }

    ZoraSea002.Talk({'message': 'quest/QuestAreaB:Special_Coast010_110', 'getAttention': False})
    ZoraSea002.Talk({'message': 'quest/QuestAreaB:Special_Coast010_120', 'getAttention': False})
    ZoraSea002.Talk({'message': 'quest/QuestAreaB:Special_Coast010_130', 'getAttention': False})
    QuestSystem.SetProgress({'symbol': 'Special_Coast010:1942631425', 'isShowTelopInEvent': False, 'isFrontFade': False})
    ZoraSea002.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait01'})
    ZoraSea002.SetDefaultFacialExpression({'expression': 'normal'})
}

void Special_Coast010_015() {
    ZoraSea002.SetTalkerName({'message': 'glossary/Character:ZoraSea002', 'keep': False})
    ZoraSea002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaB:Special_Coast020_010', 'selfTalkAnimName': '', 'selfTalkAnim': False, 'facial': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSea002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSea002.Talk({'message': 'quest/QuestAreaB:Special_Coast020_020', 'getAttention': False})
    } {
        ZoraSea002.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void Special_Coast010_030() {
    ZoraSea002.SetTalkerName({'message': 'glossary/Character:ZoraSea002', 'keep': False})
    ZoraSea002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'facial': 'sad', 'aimToPlayer': True, 'selfTalkAnim': True, 'message': 'quest/QuestAreaB:Special_Coast060_060', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        ZoraSea002.Talk({'message': 'quest/QuestAreaB:Special_Coast060_070', 'getAttention': False})
    } {
        ZoraSea002.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    ZoraSea002.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
}

void Special_Coast010_020() {

    call EvResetCommon.AllReset()

    ZoraSea002.SetTalkerName({'message': 'glossary/Character:ZoraSea002', 'keep': False})

    fork {
        ZoraSea002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'quest/QuestAreaB:Special_Coast060_010', 'aimToPlayer': True, 'selfTalkAnim': True, 'facial': '', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Timer.Wait({'time': 1.0})
        ZoraRiver002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver002.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    ZoraSea002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSea002.Talk({'message': 'quest/QuestAreaB:Special_Coast060_020', 'getAttention': False})
    } {
        ZoraSea002.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea002.SetFacialExpression({'expression': 'sad'})
    }

    ZoraSea002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSea002.Talk({'message': 'quest/QuestAreaB:Special_Coast060_030', 'getAttention': False})
    } {
        Timer.Wait({'time': 1.0})
        ZoraRiver002.SetInterestIkEnabled({'enable': True})
        ZoraRiver002.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 1.0})
        ZoraRiver002.AimActor({'actor': ActorIdentifier(name="Player"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        ZoraSea002.Talk({'message': 'quest/QuestAreaB:Special_Coast060_040', 'getAttention': False})
    } {
        ZoraSea002.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea002.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        ZoraSea002.Talk({'message': 'quest/QuestAreaB:Special_Coast060_050', 'getAttention': False})
    } {
        ZoraSea002.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea002.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        ZoraSea002.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        ZoraRiver002.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }


    fork {
        ZoraSea002.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.0})

        fork {
            ZoraRiver002.PlayAnimation({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraRiver002.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        }

    }

    EventFlags.SetFlag({'value': True, 'symbol': 'S_Dungeon009_ZoraSea002_Talk'})
}

void talk040() {
    ZoraSea002.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea002Talk030_010', 'facial': 'smile', 'selfTalkAnimName': 'happy01,wait01', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSea002.ResetFacialExpression()
    ZoraSea002.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSea002.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea002Talk030_020', 'getAttention': False})
}
