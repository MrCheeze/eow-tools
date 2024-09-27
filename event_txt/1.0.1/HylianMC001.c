-------- EventFlow: HylianMC001 --------

Actor: HylianMC001
entrypoint: None()
actions: ['Talk', 'GenericTalkSequenceWithDialog', 'SetFacialExpression', 'PlayAnimationNoWait', 'AimPlayer', 'PlayAnimation', 'ResetFacialExpression', 'SetInterestIkEnabled', 'AimActor']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AddItem', 'GenericItemGetSequence', 'AbsorbAllPastedActors', 'PlayAnimation', 'PlayAnimationNoWait']
queries: ['CheckOutfit']
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: TransitCounters
entrypoint: None()
actions: ['SetValue']
queries: []
params: None

Actor: ZolFire
entrypoint: None()
actions: []
queries: []
params: None

Actor: ZolWater
entrypoint: None()
actions: []
queries: []
params: None

Actor: ZolMachine
entrypoint: None()
actions: []
queries: []
params: None

Actor: ZolBoundary
entrypoint: None()
actions: []
queries: []
params: None

Actor: Zol
entrypoint: None()
actions: []
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

void talk() {
    HylianMC001.SetFacialExpression({'expression': 'surprise'})
    HylianMC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianMC001Talk01_010', 'selfTalkAnimName': '', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianMC001.SetFacialExpression({'expression': 'sad'})
    HylianMC001.Talk({'message': 'scenario/HylianGeneralTalk:HylianMC001Talk01_020', 'getAttention': False})
}

void Quest_1() {

    call EvResetCommon.AllReset()

    HylianMC001.SetInterestIkEnabled({'enable': False})
    if Player.CheckOutfit({'outfit': 'Adventure1'}) {
        HylianMC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'quest/QuestAreaA:Bring_Forest040_010', 'selfTalkAnimName': 'yes01,wait01', 'facial': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else {
        HylianMC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'quest/QuestAreaA:Bring_Forest040_020', 'selfTalkAnimName': 'yes01,wait01', 'facial': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
    HylianMC001.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest040_030', 'getAttention': False})
    HylianMC001.PlayAnimationNoWait({'name': 'talk06', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianMC001.SetFacialExpression({'expression': 'normal'})
    HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest040_040', 'getAttention': False})
    HylianMC001.PlayAnimationNoWait({'name': 'sad_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianMC001.SetFacialExpression({'expression': 'sleep'})
    } {
        HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest040_050', 'getAttention': False})
    }

    HylianMC001.SetFacialExpression({'expression': 'sad'})
    HylianMC001.PlayAnimationNoWait({'name': 'no01,wait05', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest040_060', 'getAttention': False})
    QuestSystem.SetProgress({'symbol': 'Bring_Forest040:2047487350', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Quest_2() {
    HylianMC001.SetInterestIkEnabled({'enable': False})
    HylianMC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'quest/QuestAreaA:Bring_Forest040_060', 'facial': 'sad', 'selfTalkAnimName': 'wait05', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Quest_3() {
    HylianMC001.SetInterestIkEnabled({'enable': False})
    HylianMC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'quest/QuestAreaA:Bring_Forest060_070', 'facial': 'sad', 'selfTalkAnimName': 'talk06', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Quest_4() {
    HylianMC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': 'talk03', 'facial': '', 'message': 'quest/QuestAreaA:Bring_Forest050_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianMC001.SetFacialExpression({'expression': 'smile'})
    HylianMC001.PlayAnimationNoWait({'name': 'happy01,talk06', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest050_020', 'getAttention': False})
    HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest050_030', 'getAttention': False})

    fork {
        HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_130', 'getAttention': False})
    } {
        HylianMC001.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC001.SetFacialExpression({'expression': 'sleep'})
    }

}

void Quest_5_Zol() {

    call EvResetCommon.AllReset_SensorQuest()

    HylianMC001.AimActor({'actor': ActorIdentifier(name="Zol"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianMC001.SetInterestIkEnabled({'enable': False})
    Event83:
    HylianMC001.GenericTalkSequenceWithDialog({'aimToPlayer': False, 'playerTalkAnim': False, 'selfTalkAnim': False, 'absorbAllPastedActors': False, 'cameraLookAt': True, 'selfTalkAnimName': 'surprised_st01,surprised_lp01', 'facial': 'surprise', 'message': 'quest/QuestAreaA:Bring_Forest050_006', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Timer.Wait({'time': 1.0})
    HylianMC001.SetFacialExpression({'expression': 'sad'})
    HylianMC001.PlayAnimation({'name': 'no01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianMC001.GenericTalkSequenceWithDialog({'aimToPlayer': False, 'playerTalkAnim': False, 'cameraLookAt': False, 'message': 'quest/QuestAreaA:Bring_Forest050_040', 'selfTalkAnimName': 'sad_st01,sad_lp01', 'facial': 'sleep', 'absorbAllPastedActors': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
}

void Quest_7_1() {

    call EvResetCommon.AllReset_SensorQuest()

    HylianMC001.AimActor({'actor': ActorIdentifier(name="ZolFire"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianMC001.SetInterestIkEnabled({'enable': False})
    HylianMC001.GenericTalkSequenceWithDialog({'aimToPlayer': False, 'playerTalkAnim': False, 'selfTalkAnim': False, 'absorbAllPastedActors': False, 'message': 'quest/QuestAreaA:Bring_Forest050_005', 'cameraLookAt': True, 'selfTalkAnimName': 'surprised_st01,surprised_lp01', 'facial': 'surprise', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Timer.Wait({'time': 1.0})
    HylianMC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'aimToPlayer': False, 'facial': 'smile', 'cameraLookAt': False, 'message': 'quest/QuestAreaA:Bring_Forest065_010', 'selfTalkAnimName': 'happy01,happy02', 'absorbAllPastedActors': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianMC001.SetFacialExpression({'expression': 'surprise'})
    HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_020', 'getAttention': False})

    fork {
        HylianMC001.SetFacialExpression({'expression': 'sad'})
    } {
        HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_030', 'getAttention': False})
    }

    HylianMC001.SetFacialExpression({'expression': 'sleep'})

    fork {
        HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_040', 'getAttention': False})
    } {
        HylianMC001.PlayAnimation({'name': 'sad_st01,sad_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_050', 'getAttention': False})
    } {
        HylianMC001.PlayAnimation({'name': 'frightened02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC001.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_060', 'getAttention': False})
    } {
        HylianMC001.PlayAnimation({'name': 'yes01,think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC001.SetFacialExpression({'expression': 'sleep'})
    }

    HylianMC001.ResetFacialExpression()
    HylianMC001.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HylianMC001"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        HylianMC001.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HylianMC001.SetFacialExpression({'expression': 'smile'})
    HylianMC001.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    if Player.CheckOutfit({'outfit': 'Adventure1'}) {
        HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_070', 'getAttention': False})
    } else {
        HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_080', 'getAttention': False})
    }
    HylianMC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'cameraLookAt': False, 'message': 'quest/QuestAreaA:Bring_Forest065_090', 'selfTalkAnimName': 'sad_st01,sad_lp01', 'facial': 'sleep', 'absorbAllPastedActors': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_100', 'getAttention': False})
    } {
        HylianMC001.PlayAnimationNoWait({'name': 'wait07', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC001.SetFacialExpression({'expression': 'surprise'})
    }


    fork {
        HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_110', 'getAttention': False})
    } {
        HylianMC001.PlayAnimation({'name': 'talk06', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC001.SetFacialExpression({'expression': 'smile'})
    }

    HylianMC001.PlayAnimationNoWait({'name': 'happy01,talk06', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_120', 'getAttention': False})

    fork {
        HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_130', 'getAttention': False})
    } {
        HylianMC001.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC001.SetFacialExpression({'expression': 'sleep'})
    }

    QuestSystem.SetProgress({'symbol': 'Bring_Forest040:935496829', 'isShowTelopInEvent': False, 'isFrontFade': False})
    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
}

void Quest_8() {

    call EvResetCommon.AllReset_SensorQuest()

    HylianMC001.AimActor({'actor': ActorIdentifier(name="ZolWater"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianMC001.SetInterestIkEnabled({'enable': False})
    HylianMC001.GenericTalkSequenceWithDialog({'aimToPlayer': False, 'playerTalkAnim': False, 'selfTalkAnim': False, 'absorbAllPastedActors': False, 'message': 'quest/QuestAreaA:Bring_Forest050_005', 'cameraLookAt': True, 'selfTalkAnimName': 'surprised_st01,surprised_lp01', 'facial': 'surprise', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Timer.Wait({'time': 1.0})
    HylianMC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'quest/QuestAreaA:Bring_Forest070_010', 'aimToPlayer': False, 'selfTalkAnimName': 'happy01,happy03', 'facial': 'smile', 'absorbAllPastedActors': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianMC001.PlayAnimationNoWait({'name': 'wait07', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest070_020', 'getAttention': False})
    HylianMC001.SetFacialExpression({'expression': 'sleep'})
    HylianMC001.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest070_030', 'getAttention': False})

    fork {
        HylianMC001.SetFacialExpression({'expression': 'normal'})
    } {
        HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest070_040', 'getAttention': False})
    } {
        HylianMC001.PlayAnimationNoWait({'name': 'yes01,talk06', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HylianMC001"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        HylianMC001.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HylianMC001.SetFacialExpression({'expression': 'smile'})
    HylianMC001.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    if Player.CheckOutfit({'outfit': 'Adventure1'}) {
        HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest070_050', 'getAttention': False})
    } else {
        HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest070_060', 'getAttention': False})
    }
    Player.AddItem({'itemKey': 'WorldGlobePiece', 'autoEquip': False, 'index': 68, 'count': 1})
    Player.GenericItemGetSequence({'itemKey': 'WorldGlobePiece', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HylianMC001"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        HylianMC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': 'normal', 'aimToPlayer': False, 'cameraLookAt': False, 'message': 'quest/QuestAreaA:Bring_Forest070_070', 'selfTalkAnimName': 'think01', 'absorbAllPastedActors': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner[companion].AimActor({'offsetX': -1.5, 'actor': ActorIdentifier(name="HylianMC001"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest070_080', 'getAttention': False})
    } {
        HylianMC001.PlayAnimationNoWait({'name': 'talk03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC001.SetFacialExpression({'expression': 'angry'})
    }

    HylianMC001.SetFacialExpression({'expression': 'smile'})
    HylianMC001.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianMC001.SetFacialExpression({'expression': 'angry'})
    HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest070_090', 'getAttention': False})
    HylianMC001.PlayAnimationNoWait({'name': 'wait07', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianMC001.SetFacialExpression({'expression': 'smile'})
    HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest070_100', 'getAttention': False})
    TransitCounters.SetValue({'key': 'mc008Clear', 'value': 1})
    QuestSystem.SetProgress({'symbol': 'Bring_Forest040:1096291675', 'isShowTelopInEvent': False, 'isFrontFade': False})
    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
}

void Quest_6() {

    call EvResetCommon.AllReset_SensorQuest()

    HylianMC001.AimActor({'actor': ActorIdentifier(name="Zol"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianMC001.SetInterestIkEnabled({'enable': False})
    HylianMC001.GenericTalkSequenceWithDialog({'aimToPlayer': False, 'playerTalkAnim': False, 'selfTalkAnim': False, 'absorbAllPastedActors': False, 'message': 'quest/QuestAreaA:Bring_Forest050_005', 'cameraLookAt': True, 'selfTalkAnimName': 'surprised_st01,surprised_lp01', 'facial': 'surprise', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Timer.Wait({'time': 1.0})
    HylianMC001.PlayAnimationNoWait({'name': 'look', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianMC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'quest/QuestAreaA:Bring_Forest060_010', 'aimFromPlayer': True, 'aimToPlayer': False, 'cameraLookAt': False, 'selfTalkAnimName': 'happy01,happy02', 'facial': 'smile', 'absorbAllPastedActors': False, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianMC001.ResetFacialExpression()
    HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest060_020', 'getAttention': False})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HylianMC001"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        HylianMC001.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest060_030', 'getAttention': False})
    }

    HylianMC001.SetFacialExpression({'expression': 'smile'})
    HylianMC001.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    if Player.CheckOutfit({'outfit': 'Adventure1'}) {
        HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest060_040', 'getAttention': False})
    } else {
        HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest060_050', 'getAttention': False})
    }
    HylianMC001.GenericTalkSequenceWithDialog({'aimToPlayer': False, 'playerTalkAnim': False, 'cameraLookAt': False, 'message': 'quest/QuestAreaA:Bring_Forest060_060', 'facial': 'smile', 'selfTalkAnimName': 'talk06', 'absorbAllPastedActors': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest060_070', 'getAttention': False})
    } {
        HylianMC001.PlayAnimationNoWait({'name': 'wait07', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC001.SetFacialExpression({'expression': 'smile'})
    }

    QuestSystem.SetProgress({'symbol': 'Bring_Forest040:2975268563', 'isShowTelopInEvent': False, 'isFrontFade': False})
    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
}

void Quest_9() {
    HylianMC001.SetInterestIkEnabled({'enable': False})
    HylianMC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'think01', 'facial': 'smile', 'message': 'scenario/HylianGeneralTalk:HylianMC001Talk040_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianMC001.SetFacialExpression({'expression': 'sleep'})
    HylianMC001.PlayAnimationNoWait({'name': 'wait05', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianMC001.Talk({'message': 'scenario/HylianGeneralTalk:HylianMC001Talk040_020', 'getAttention': False})
}

void Quest_4_1() {

    call EvResetCommon.AllReset_SensorQuest()

    HylianMC001.AimActor({'actor': ActorIdentifier(name="ZolWater"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianMC001.SetInterestIkEnabled({'enable': False})
    HylianMC001.GenericTalkSequenceWithDialog({'aimToPlayer': False, 'playerTalkAnim': False, 'selfTalkAnim': False, 'absorbAllPastedActors': False, 'cameraLookAt': True, 'selfTalkAnimName': 'surprised_st01,surprised_lp01', 'facial': 'surprise', 'message': 'quest/QuestAreaA:Bring_Forest050_006', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Timer.Wait({'time': 1.0})
    HylianMC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': 'smile', 'cameraLookAt': False, 'message': 'quest/QuestAreaA:Bring_Forest050_050', 'selfTalkAnimName': 'happy01,happy02', 'aimToPlayer': False, 'absorbAllPastedActors': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianMC001.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    HylianMC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'cameraLookAt': False, 'message': 'quest/QuestAreaA:Bring_Forest050_060', 'selfTalkAnimName': 'sad_st02,sad_lp02', 'facial': 'sad', 'aimToPlayer': False, 'absorbAllPastedActors': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianMC001.PlayAnimationNoWait({'name': 'wait07', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HylianMC001"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        HylianMC001.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    if Player.CheckOutfit({'outfit': 'Adventure1'}) {
        HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest050_070', 'getAttention': False})
    } else {
        HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest050_080', 'getAttention': False})
    }
    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
}

void talk030() {
    HylianMC001.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianMC001Talk030_010', 'selfTalkAnimName': 'yes01,wait05', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Quest_10() {
    HylianMC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'facial': 'smile', 'message': 'quest/QuestAreaA:Bring_Forest050_090', 'selfTalkAnimName': 'happy01,talk06', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianMC001.SetFacialExpression({'expression': 'smile'})
    HylianMC001.PlayAnimationNoWait({'name': 'wait07', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest050_100', 'getAttention': False})
}

void Quest_11() {

    call EvResetCommon.AllReset_SensorQuestForKarakuri()

    HylianMC001.AimActor({'actor': ActorIdentifier(name="ZolMachine"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianMC001.SetInterestIkEnabled({'enable': False})
    HylianMC001.GenericTalkSequenceWithDialog({'aimToPlayer': False, 'playerTalkAnim': False, 'selfTalkAnim': False, 'absorbAllPastedActors': False, 'message': 'quest/QuestAreaA:Bring_Forest050_005', 'cameraLookAt': True, 'selfTalkAnimName': 'surprised_st01,surprised_lp01', 'facial': 'surprise', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Timer.Wait({'time': 1.0})
    HylianMC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'aimToPlayer': False, 'message': 'quest/QuestAreaA:Bring_Forest080_010', 'facial': 'smile', 'cameraLookAt': False, 'selfTalkAnimName': 'happy03', 'absorbAllPastedActors': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianMC001.PlayAnimationNoWait({'name': 'talk07,wait07', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HylianMC001"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        HylianMC001.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest080_020', 'getAttention': False})
    }

    Player.PlayAnimation({'name': 'talk_hand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 2.0})
    Player.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    HylianMC001.SetFacialExpression({'expression': 'surprise'})
    HylianMC001.PlayAnimation({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest080_030', 'getAttention': False})
    HylianMC001.SetFacialExpression({'expression': 'sleep'})

    fork {
        HylianMC001.PlayAnimationNoWait({'name': 'yes01,think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest080_040', 'getAttention': False})
    }

    HylianMC001.SetFacialExpression({'expression': 'smile'})
    if Player.CheckOutfit({'outfit': 'Adventure1'}) {
        HylianMC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaA:Bring_Forest080_050', 'aimToPlayer': True, 'facial': '', 'cameraLookAt': False, 'selfTalkAnimName': 'yes01,wait07', 'absorbAllPastedActors': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else {
        HylianMC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': 'smile', 'aimToPlayer': True, 'cameraLookAt': False, 'message': 'quest/QuestAreaA:Bring_Forest080_060', 'selfTalkAnimName': 'yes01,wait07', 'absorbAllPastedActors': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
    Player.GenericItemGetSequence({'itemKey': 'HeartPiece', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Player.AddItem({'autoEquip': False, 'itemKey': 'HeartPiece', 'index': 38, 'count': 1})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HylianMC001"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        HylianMC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': False, 'facial': 'angry', 'cameraLookAt': False, 'message': 'quest/QuestAreaA:Bring_Forest080_070', 'selfTalkAnimName': 'happy02,wait05', 'absorbAllPastedActors': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner[companion].AimActor({'offsetX': -1.5, 'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="HylianMC001"), 'withoutTurn': False, 'boneName': '', 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HylianMC001.SetFacialExpression({'expression': 'smile'})
    HylianMC001.PlayAnimationNoWait({'name': 'happy03,yes01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest080_080', 'getAttention': False})
    QuestSystem.SetProgress({'symbol': 'ZolMachine_Forest010:2673143305', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Quest_12() {

    call EvResetCommon.AllReset_SensorQuest()

    HylianMC001.AimActor({'actor': ActorIdentifier(name="ZolBoundary"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianMC001.SetInterestIkEnabled({'enable': False})
    HylianMC001.GenericTalkSequenceWithDialog({'aimToPlayer': False, 'playerTalkAnim': False, 'selfTalkAnim': False, 'absorbAllPastedActors': False, 'cameraLookAt': True, 'selfTalkAnimName': 'surprised_st01,surprised_lp01', 'facial': 'surprise', 'message': 'quest/QuestAreaA:Bring_Forest050_006', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianMC001.SetFacialExpression({'expression': 'sad'})
    Timer.Wait({'time': 1.0})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HylianMC001"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        HylianMC001.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HylianMC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'cameraLookAt': False, 'aimToPlayer': False, 'message': 'quest/QuestAreaA:Bring_Forest050_046', 'facial': 'sleep', 'selfTalkAnimName': 'sad_st01,sad_lp01', 'absorbAllPastedActors': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
}

void Quest_7_2() {

    call EvResetCommon.AllReset_SensorQuest()

    HylianMC001.AimActor({'actor': ActorIdentifier(name="ZolFire"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianMC001.SetInterestIkEnabled({'enable': False})
    HylianMC001.GenericTalkSequenceWithDialog({'aimToPlayer': False, 'playerTalkAnim': False, 'selfTalkAnim': False, 'absorbAllPastedActors': False, 'message': 'quest/QuestAreaA:Bring_Forest050_005', 'cameraLookAt': True, 'selfTalkAnimName': 'surprised_st01,surprised_lp01', 'facial': 'surprise', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Timer.Wait({'time': 1.0})
    HylianMC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'aimToPlayer': False, 'facial': 'smile', 'cameraLookAt': False, 'message': 'quest/QuestAreaA:Bring_Forest065_010', 'selfTalkAnimName': 'happy01,happy02', 'absorbAllPastedActors': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianMC001.SetFacialExpression({'expression': 'surprise'})
    HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_020', 'getAttention': False})

    fork {
        HylianMC001.SetFacialExpression({'expression': 'sad'})
    } {
        HylianMC001.PlayAnimation({'name': 'wait07', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_035', 'getAttention': False})
    }

    HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_045', 'getAttention': False})

    fork {
        HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_055', 'getAttention': False})
    } {
        HylianMC001.PlayAnimation({'name': 'no01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC001.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_060', 'getAttention': False})
    } {
        HylianMC001.PlayAnimation({'name': 'yes01,think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC001.SetFacialExpression({'expression': 'sleep'})
    }

    HylianMC001.ResetFacialExpression()
    HylianMC001.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HylianMC001"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        HylianMC001.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HylianMC001.SetFacialExpression({'expression': 'smile'})
    HylianMC001.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    if Player.CheckOutfit({'outfit': 'Adventure1'}) {
        HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_070', 'getAttention': False})
    } else {
        HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_080', 'getAttention': False})
    }
    HylianMC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'cameraLookAt': False, 'message': 'quest/QuestAreaA:Bring_Forest065_090', 'selfTalkAnimName': 'sad_st01,sad_lp01', 'facial': 'sleep', 'absorbAllPastedActors': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_100', 'getAttention': False})
    } {
        HylianMC001.PlayAnimationNoWait({'name': 'wait07', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC001.SetFacialExpression({'expression': 'surprise'})
    }


    fork {
        HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_110', 'getAttention': False})
    } {
        HylianMC001.PlayAnimation({'name': 'talk06', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC001.SetFacialExpression({'expression': 'smile'})
    }

    HylianMC001.PlayAnimationNoWait({'name': 'happy01,talk06', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_120', 'getAttention': False})

    fork {
        HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_130', 'getAttention': False})
    } {
        HylianMC001.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianMC001.SetFacialExpression({'expression': 'sleep'})
    }

    QuestSystem.SetProgress({'symbol': 'Bring_Forest040:935496829', 'isShowTelopInEvent': False, 'isFrontFade': False})
    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
}

void Quest_13() {

    call EvResetCommon.AllReset()

    HylianMC001.SetInterestIkEnabled({'enable': False})
    HylianMC001.SetFacialExpression({'expression': 'smile'})
    if Player.CheckOutfit({'outfit': 'Adventure1'}) {
        HylianMC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': 'yes01,wait01', 'facial': '', 'message': 'quest/QuestAreaA:Bring_Forest075_010a', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else {
        HylianMC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': 'yes01,wait01', 'facial': '', 'message': 'quest/QuestAreaA:Bring_Forest075_010b', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
    HylianMC001.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest075_020', 'getAttention': False})
    HylianMC001.PlayAnimationNoWait({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianMC001.SetFacialExpression({'expression': 'smile'})
    HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest075_030', 'getAttention': False})
    HylianMC001.SetFacialExpression({'expression': 'smile'})
    HylianMC001.PlayAnimationNoWait({'name': 'wait07', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianMC001.Talk({'message': 'quest/QuestAreaA:Bring_Forest075_040', 'getAttention': False})
    HylianMC001.PlayAnimationNoWait({'name': 'no01,wait05', 'layer': 0, 'blendFrame': -1, 'restart': False})
    QuestSystem.SetProgress({'symbol': 'ZolMachine_Forest010:2751911460', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Quest_5_ZolFire() {

    call EvResetCommon.AllReset_SensorQuest()

    HylianMC001.AimActor({'actor': ActorIdentifier(name="ZolFire"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianMC001.SetInterestIkEnabled({'enable': False})
    goto Event83
}

void Quest_5_ZolWater() {

    call EvResetCommon.AllReset_SensorQuest()

    HylianMC001.AimActor({'actor': ActorIdentifier(name="ZolWater"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianMC001.SetInterestIkEnabled({'enable': False})
    goto Event83
}
