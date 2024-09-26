-------- EventFlow: HylianM000 --------

Actor: HylianM000
entrypoint: None()
actions: ['Talk', 'SetFacialExpression', 'GenericTalkSequenceWithDialog', 'LookAtTalker', 'AimPlayer', 'Destroy', 'PlayAnimationNoWait', 'PlayAnimation', 'SetTalkerName', 'SetInterestIkEnabled']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: Zelda
entrypoint: None()
actions: []
queries: ['CheckOutfit']
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['GenericItemGetSequence', 'AddItem', 'WarpToActorLinkedPoint', 'AimActor', 'PlayAnimationNoWait']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['MoveToDefaultPosition', 'WarpToDefaultPosition']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['GetStatus']
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'Reset']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor', 'MoveToTargetLinkedPoint']
queries: []
params: None

void talk() {
    HylianM000.SetInterestIkEnabled({'enable': False})
    HylianM000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': 'talk02', 'message': 'scenario/HylianGeneralTalk:HylianM000Talk01_010', 'facial': 'surprise', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianM000.SetFacialExpression({'expression': 'sad'})
    HylianM000.Talk({'message': 'scenario/HylianGeneralTalk:HylianM000Talk01_020', 'getAttention': False})
}

void talk020() {
    HylianM000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'scenario/HylianGeneralTalk:HylianM000Talk02_010', 'facial': 'smile', 'selfTalkAnimName': 'yes01,talk01', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        HylianM000.Talk({'message': 'scenario/HylianGeneralTalk:HylianM000Talk02_020', 'getAttention': False})
    } {
        HylianM000.PlayAnimationNoWait({'blendFrame': -1, 'name': 'talk03_F', 'layer': 0, 'restart': False})
    } {
        HylianM000.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        HylianM000.Talk({'message': 'scenario/HylianGeneralTalk:HylianM000Talk02_030', 'getAttention': False})
    } {
        HylianM000.PlayAnimationNoWait({'blendFrame': -1, 'name': 'yes01_F,talk02_F', 'layer': 0, 'restart': False})
    } {
        HylianM000.SetFacialExpression({'expression': 'smile'})
    }

}

void _talkLink() {
    HylianM000.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianM000TalkLink_010', 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Quest_Link_HyrulePlains010_010() {

    call EvResetCommon.AllReset()

    Player.PlayAnimationNoWait({'blendFrame': -2, 'name': 'wait', 'layer': 0, 'restart': False})
    HylianM000.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    if Zelda.CheckOutfit({'outfit': 'Adventure1'}) {
        HylianM000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'cameraLookAt': False, 'message': 'quest/QuestAreaA:Link_HyrulePlains010_012', 'selfTalkAnim': False, 'selfTalkAnimName': '', 'keepPersonalSpace': False, 'aimToPlayer': False, 'facial': 'sleep', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else {
        HylianM000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'cameraLookAt': False, 'message': 'quest/QuestAreaA:Link_HyrulePlains010_010', 'selfTalkAnimName': '', 'selfTalkAnim': False, 'keepPersonalSpace': False, 'aimToPlayer': False, 'facial': 'sleep', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
    HylianM000.Talk({'message': 'quest/QuestAreaA:Link_HyrulePlains010_100', 'getAttention': False})
    if !EventFlags.CheckFlag({'symbol': 'Mc001EnemyDead'}) {
        QuestSystem.SetProgress({'symbol': 'Link_HyrulePlains010:1876263853', 'isShowTelopInEvent': False, 'isFrontFade': False})
    } else {

        call Quest_Link_HyrulePlains010_030()

    }
}

void Quest_Link_HyrulePlains010_020() {
    HylianM000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaA:Link_HyrulePlains020_010', 'selfTalkAnimName': '', 'selfTalkAnim': False, 'aimToPlayer': False, 'facial': '', 'cameraLookAt': True, 'absorbAllPastedActors': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Quest_Link_HyrulePlains010_030() {
    Fade.StartPreset({'preset': 'FadeOutSlowB'})

    call EvResetCommon.AllReset()

    Player.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="HylianM000"), 'offsetY': 0.0})
    Camera.LookAt2ActorsCenterAsTalker({'duration': 0.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetY': 0.0, 'actor1': ActorIdentifier(name="HylianM000"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'offsetX': 0.0, 'offsetZ': 0.0})
    Player.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="HylianM000"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Player.PlayAnimationNoWait({'blendFrame': -2, 'name': 'wait', 'layer': 0, 'restart': False})
    Timer.Wait({'time': 0.10000000149011612})
    Partner.WarpToDefaultPosition({'position': 2, 'avoidPlayer': False, 'avoidWall': False})
    Partner[companion].MoveToTargetLinkedPoint({'index': 0, 'offsetY': 1.0, 'speed': 1, 'offsetZ': 0.30000001192092896, 'actor': ActorIdentifier(name="HylianM000"), 'offsetX': 0.699999988079071, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="HylianM000"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    Timer.Wait({'time': 0.5})

    fork {
        HylianM000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM000.SetFacialExpression({'expression': 'normal'})
    }

    Timer.Wait({'time': 0.5})
    HylianM000.PlayAnimation({'name': 'no01_F', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianM000.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianM000.SetInterestIkEnabled({'enable': True})
    HylianM000.SetFacialExpression({'expression': 'smile'})
    HylianM000.PlayAnimation({'name': 'yes01_F', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianM000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'cameraLookAt': False, 'selfTalkAnim': True, 'message': 'quest/QuestAreaA:Link_HyrulePlains030_010', 'keepPersonalSpace': False, 'facial': 'normal', 'selfTalkAnimName': 'look', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if Zelda.CheckOutfit({'outfit': 'Adventure1'}) {

        fork {
            HylianM000.Talk({'message': 'quest/QuestAreaA:Link_HyrulePlains030_022', 'getAttention': False})
        } {
            HylianM000.PlayAnimationNoWait({'blendFrame': -1, 'name': 'surprised_st01_F,surprised_lp01_F', 'layer': 0, 'restart': False})
        } {
            HylianM000.SetFacialExpression({'expression': 'surprise'})
        }

    } else {

        fork {
            HylianM000.Talk({'message': 'quest/QuestAreaA:Link_HyrulePlains030_020', 'getAttention': False})
        } {
            HylianM000.PlayAnimationNoWait({'blendFrame': -1, 'name': 'surprised_st01_F,surprised_lp01_F', 'layer': 0, 'restart': False})
        } {
            HylianM000.SetFacialExpression({'expression': 'surprise'})
        }

    }
    HylianM000.PlayAnimation({'blendFrame': -1, 'name': 'wait01_F', 'layer': 0, 'restart': False})

    fork {
        HylianM000.SetFacialExpression({'expression': 'sad'})
    } {
        HylianM000.PlayAnimationNoWait({'blendFrame': -2, 'name': 'no01_F,talk01_F', 'layer': 0, 'restart': False})
    } {
        HylianM000.Talk({'message': 'quest/QuestAreaA:Link_HyrulePlains030_030', 'getAttention': False})
    }


    fork {
        HylianM000.Talk({'message': 'quest/QuestAreaA:Link_HyrulePlains030_040', 'getAttention': False})
    } {
        HylianM000.PlayAnimationNoWait({'name': 'talk03_F', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM000.SetFacialExpression({'expression': 'normal'})
    }

    HylianM000.SetTalkerName({'message': 'glossary/Character:HylianM000', 'keep': False})

    fork {
        HylianM000.Talk({'message': 'quest/QuestAreaA:Link_HyrulePlains030_050', 'getAttention': False})
    } {
        HylianM000.PlayAnimationNoWait({'name': 'think02_F', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM000.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        HylianM000.Talk({'message': 'quest/QuestAreaA:Link_HyrulePlains030_060', 'getAttention': False})
    } {
        HylianM000.PlayAnimationNoWait({'name': 'no01_F,happy02_F', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM000.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        HylianM000.Talk({'message': 'quest/QuestAreaA:Link_HyrulePlains030_070', 'getAttention': False})
    } {
        HylianM000.PlayAnimationNoWait({'name': 'sad_st01_F,sad_lp01_F', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM000.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        HylianM000.Talk({'message': 'quest/QuestAreaA:Link_HyrulePlains030_080', 'getAttention': False})
    } {
        HylianM000.PlayAnimationNoWait({'name': 'yes01_F,talk03_F', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM000.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        HylianM000.PlayAnimationNoWait({'name': 'wait01_F', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM000.SetFacialExpression({'expression': 'normal'})
    }

    Player.GenericItemGetSequence({'itemKey': 'RupeeRed', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Player.AddItem({'index': -1, 'itemKey': 'RupeeRed', 'count': 1, 'autoEquip': False})

    fork {
        Partner.MoveToDefaultPosition({'speed': 1, 'position': 3, 'tolerance': 0.0, 'avoidWall': False, 'avoidPlayer': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="HylianM000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HylianM000.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'quest/QuestAreaA:Link_HyrulePlains030_090', 'facial': 'normal', 'selfTalkAnimName': 'talk01_F', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }


    fork {
        HylianM000.Talk({'message': 'quest/QuestAreaA:Link_HyrulePlains030_100', 'getAttention': False})
    } {
        HylianM000.PlayAnimation({'name': 'talk03_F', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM000.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        HylianM000.Talk({'message': 'quest/QuestAreaA:Link_HyrulePlains030_110', 'getAttention': False})
    } {
        HylianM000.PlayAnimation({'name': 'no01_F,wait04_F', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM000.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        HylianM000.Talk({'message': 'quest/QuestAreaA:Link_HyrulePlains030_120', 'getAttention': False})
    } {
        HylianM000.PlayAnimation({'name': 'think01_F', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM000.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        HylianM000.Talk({'message': 'quest/QuestAreaA:Link_HyrulePlains030_130', 'getAttention': False})
    } {
        HylianM000.PlayAnimation({'name': 'talk02_F', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM000.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        HylianM000.Talk({'message': 'quest/QuestAreaA:Link_HyrulePlains030_140', 'getAttention': False})
    } {
        HylianM000.PlayAnimation({'name': 'yes01_F,talk03_F', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM000.SetFacialExpression({'expression': 'smile'})
    }

    HylianM000.PlayAnimation({'name': 'wait01_F', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    if EventFlags.CheckFlag({'symbol': 'Mc001EnemyDead'}) {
        QuestSystem.SetProgress({'symbol': 'Link_HyrulePlains010:1876263853', 'isShowTelopInEvent': False, 'isFrontFade': False})
    }
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    HylianM000.Destroy()
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    QuestSystem.SetProgress({'symbol': 'Link_HyrulePlains010:1418181504', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Quest_Liin_HyrulePlains010_EnemyDead() {
    if !QuestSystem.GetStatus({'questKey': 'Link_HyrulePlains010'}) {
        EventFlags.SetFlag({'symbol': 'Mc001EnemyDead', 'value': True})
    } else {

        call Quest_Link_HyrulePlains010_030()

    }
}
