-------- EventFlow: Deku018 --------

Actor: Deku018
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimationNoWait', 'SetFacialExpression', 'PlayAnimation', 'SetInterestIkEnabled', 'AimCompassPoint', 'AimPlayer', 'AimActorLinkedPoint', 'AimActor']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['ShowTalker']
queries: ['GetLastResult4', 'GetLastResult']
params: None

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckFlag', 'CheckMessgaeFlag']
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

Actor: Player
entrypoint: None()
actions: ['AddItem', 'GenericItemGetSequence', 'RemoveItem', 'SetInterestIkEnabled', 'AimActor', 'PlayAnimationNoWait', 'AimActorLinkedPoint', 'ReplaceEquipedAccessory']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['AimActor', 'AimActorLinkedPoint', 'SetInterestIkEnabled', 'MoveToDefaultPosition']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['SetInterestIkEnabled', 'PlayAnimationNoWait', 'AimActor']
queries: []
params: None

void talk020() {
    Deku018.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkDeku:Deku018Talk020_010', 'selfTalkAnimName': 'panic', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !EventFlags.CheckFlag({'symbol': 'EvF_ApproachEntranceRuins_Clear'}) {
        Deku018.SetInterestIkEnabled({'enable': False})
        Deku018.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku018.Talk({'message': 'scenario/GeneralTalkDeku:Deku018Talk020_020', 'getAttention': False})
        Deku018.SetInterestIkEnabled({'enable': True})
    } else {
        Deku018.SetInterestIkEnabled({'enable': False})
        Deku018.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku018.Talk({'message': 'scenario/GeneralTalkDeku:Deku018Talk020_Q1', 'getAttention': False})
        if !Dialog.GetLastResult4({'resultOnSkip': 3}) {
            Deku018.PlayAnimationNoWait({'name': 'no01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Deku018.Talk({'message': 'scenario/GeneralTalkDeku:Deku018Talk020_Q1_A1_010', 'getAttention': False})
            Deku018.SetInterestIkEnabled({'enable': True})
        } else {
            Deku018.Talk({'message': 'scenario/GeneralTalkDeku:Deku018Talk020_Q1_A2_010', 'getAttention': False})
            Deku018.SetInterestIkEnabled({'enable': True})
        }
    }
}

void talk030() {
    Deku018.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkDeku:Deku018Talk030_010', 'selfTalkAnimName': 'no01,talk01', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Deku018.SetInterestIkEnabled({'enable': False})
    Deku018.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku018.Talk({'message': 'scenario/GeneralTalkDeku:Deku018Talk030_020', 'getAttention': False})
    Deku018.SetInterestIkEnabled({'enable': True})
}

void talk010() {
    Deku018.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkDeku:Deku018Talk010_010', 'selfTalkAnim': True, 'selfTalkAnimName': 'think01', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk040() {
    Deku018.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkDeku:Deku018Talk040_010', 'selfTalkAnimName': 'sad01', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Deku018.SetInterestIkEnabled({'enable': False})
    Deku018.PlayAnimationNoWait({'name': 'yes02,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku018.Talk({'message': 'scenario/GeneralTalkDeku:Deku018Talk040_020', 'getAttention': False})
    Deku018.SetInterestIkEnabled({'enable': True})
}

void Balom_Jungle010_010() {

    call EvResetCommon.AllReset()

    Deku018.SetInterestIkEnabled({'enable': False})
    Partner.MoveToDefaultPosition({'speed': 1, 'avoidWall': True, 'avoidPlayer': True, 'position': 1, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
    Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Deku018"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    if !EventFlags.CheckMessgaeFlag({'message': 'quest/QuestAreaF:Balom_Jungle010_010'}) {
        Deku018.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaF:Balom_Jungle010_010', 'playerTalkAnim': False, 'facial': 'smile', 'selfTalkAnimName': 'no01,happy01', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        Deku018.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaF:Balom_Jungle010_020', 'playerTalkAnim': False, 'selfTalkAnim': True, 'facial': '', 'selfTalkAnimName': 'think01', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        if !Dialog.GetLastResult({'resultOnSkip': 1}) {

            call Balom_Jungle010_Yes()

        } else {

            call Balom_Jungle010_No()

        }
    } else {
        Deku018.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaF:Balom_Jungle010_040', 'facial': '', 'selfTalkAnimName': 'think01', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        if !Dialog.GetLastResult({'resultOnSkip': 1}) {

            call Balom_Jungle010_Yes()

        } else {

            call Balom_Jungle010_No2()

        }
    }
}

void Balom_Jungle010_end() {

    call EvResetCommon.AllReset()

    Partner.MoveToDefaultPosition({'speed': 1, 'avoidWall': True, 'avoidPlayer': True, 'position': 1, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
    Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Deku018"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Deku018.SetInterestIkEnabled({'enable': False})
    Deku018.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaF:Balom_Jungle030_010', 'playerTalkAnim': False, 'selfTalkAnimName': 'surprised_st01,surprised_lp01', 'facial': 'surprise', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Deku018.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku018.Talk({'message': 'quest/QuestAreaF:Balom_Jungle030_020', 'getAttention': False})
    } {
        Deku018.PlayAnimationNoWait({'name': 'no01,panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Deku018.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    call GeneralSequence.ZeldaTalkMotion()

    Timer.Wait({'time': 0.5})

    fork {
        Deku018.Talk({'message': 'quest/QuestAreaF:Balom_Jungle030_030', 'getAttention': False})
    } {
        Deku018.PlayAnimation({'name': 'tiltyourhead_st,tiltyourhead_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku018.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        Deku018.Talk({'message': 'quest/QuestAreaF:Balom_Jungle030_040', 'getAttention': False})
    } {
        Deku018.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 2.0})

    fork {
        Deku018.Talk({'message': 'quest/QuestAreaF:Balom_Jungle030_050', 'getAttention': False})
    } {
        Deku018.PlayAnimationNoWait({'name': 'angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Deku018.Talk({'message': 'quest/QuestAreaF:Balom_Jungle030_060', 'getAttention': False})
    } {
        Deku018.PlayAnimation({'name': 'find,panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Deku018.Talk({'message': 'quest/QuestAreaF:Balom_Jungle030_070', 'getAttention': False})
    } {
        Deku018.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku018.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        Deku018.Talk({'message': 'quest/QuestAreaF:Balom_Jungle030_080', 'getAttention': False})
    } {
        Deku018.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku018.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        Deku018.Talk({'message': 'quest/QuestAreaF:Balom_Jungle030_085', 'getAttention': False})
    } {
        Deku018.PlayAnimation({'name': 'find,panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku018.SetFacialExpression({'expression': 'angry'})
    }

    Deku018.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku018.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        Deku018.Talk({'message': 'quest/QuestAreaF:Balom_Jungle030_090', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Deku018.PlayAnimationNoWait({'name': 'talk_sit01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Deku018.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku018.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Player.AddItem({'itemKey': 'Ornament14', 'count': 1, 'index': -1, 'autoEquip': False})
    Player.GenericItemGetSequence({'itemKey': 'Ornament14', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Player.ReplaceEquipedAccessory({'accessoryReplacement': 1})
    Player.RemoveItem({'itemKey': 'Ornament13', 'count': 1, 'index': -1})

    fork {
        Deku018.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaF:Balom_Jungle030_100', 'playerTalkAnim': False, 'selfTalkAnimName': 'laugh01', 'selfTalkAnim': True, 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Deku018"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 1.0})
    Deku018.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 3.0})

    fork {
        Deku018.Talk({'message': 'quest/QuestAreaF:Balom_Jungle030_110', 'getAttention': False})
    } {
        Deku018.PlayAnimation({'name': 'find,panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku018.SetFacialExpression({'expression': 'angry'})
    }

    QuestSystem.SetProgress({'symbol': 'Balom_Jungle010:4154295259', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Balom_Jungle010_Yes() {
    Deku018.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku018.Talk({'message': 'quest/QuestAreaF:Balom_Jungle010_060', 'getAttention': False})
    } {
        Deku018.PlayAnimationNoWait({'name': 'yes01,happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku018.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        Deku018.Talk({'message': 'quest/QuestAreaF:Balom_Jungle010_070', 'getAttention': False})
    } {
        Deku018.PlayAnimationNoWait({'name': 'no01,talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku018.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        Deku018.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku018.SetFacialExpression({'expression': 'normal'})
    }

    Timer.Wait({'time': 1.0})

    fork {
        Dialog.ShowTalker({'talker': 'glossary/Character:Unknown', 'message': 'quest/QuestAreaF:Balom_Jungle010_080'})
    } {
        Audio.PlayOneshotSystemSE({'label': 'STRM_SE_ENEMY_BALOM_LV1_EV_VOICE1', 'volume': 1.0, 'pitch': 1.0})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Deku018.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.SetInterestIkEnabled({'enable': False})
        Player.AimActorLinkedPoint({'pointIndex': 0, 'actor': ActorIdentifier(name="Deku018"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Player.PlayAnimationNoWait({'name': 'search', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Partner[companion].SetInterestIkEnabled({'enable': False})
        Partner.AimActorLinkedPoint({'pointIndex': 0, 'actor': ActorIdentifier(name="Deku018"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].PlayAnimationNoWait({'name': 'panic', 'restart': False, 'layer': 0, 'blendFrame': -1})
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].PlayAnimationNoWait({'restart': False, 'name': 'lookaround', 'layer': 0, 'blendFrame': -1})
    }

    Timer.Wait({'time': 1.0})

    fork {
        Player.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Player.SetInterestIkEnabled({'enable': True})
        Timer.Wait({'time': 0.10000000149011612})
        Player.AimActorLinkedPoint({'actor': ActorIdentifier(name="Deku018"), 'pointIndex': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].PlayAnimationNoWait({'restart': False, 'name': 'wait', 'layer': 0, 'blendFrame': -1})
        Partner.SetInterestIkEnabled({'enable': True})
        Timer.Wait({'time': 0.10000000149011612})
        Partner.AimActorLinkedPoint({'pointIndex': 0, 'actor': ActorIdentifier(name="Deku018"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        Deku018.Talk({'message': 'quest/QuestAreaF:Balom_Jungle010_090', 'getAttention': False})
    } {
        Deku018.PlayAnimationNoWait({'name': 'yes01,happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku018.SetFacialExpression({'expression': 'smile'})
    }

    Deku018.AimActorLinkedPoint({'actor': ActorIdentifier(name="Deku018"), 'pointIndex': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Deku018.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 2.0})
    Deku018.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku018.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Deku018.Talk({'message': 'quest/QuestAreaF:Balom_Jungle010_090_02', 'getAttention': False})
    } {
        Deku018.PlayAnimationNoWait({'name': 'yes01,happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku018.SetFacialExpression({'expression': 'smile'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="Deku018"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'actor': ActorIdentifier(name="Deku018"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Deku018.Talk({'message': 'quest/QuestAreaF:Balom_Jungle010_100', 'getAttention': False})
    } {
        Deku018.PlayAnimationNoWait({'name': 'angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku018.SetFacialExpression({'expression': 'angry'})
    }


    fork {
        Deku018.Talk({'message': 'quest/QuestAreaF:Balom_Jungle010_110', 'getAttention': False})
    } {
        Deku018.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku018.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        Deku018.Talk({'message': 'quest/QuestAreaF:Balom_Jungle010_120', 'getAttention': False})
    } {
        Deku018.PlayAnimationNoWait({'name': 'yes01,happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku018.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        Deku018.Talk({'message': 'quest/QuestAreaF:Balom_Jungle010_130', 'getAttention': False})
    } {
        Deku018.PlayAnimationNoWait({'name': 'no01,sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    QuestSystem.SetProgress({'symbol': 'Balom_Jungle010:3436166134', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Balom_Jungle010_No() {
    Deku018.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku018.Talk({'message': 'quest/QuestAreaF:Balom_Jungle010_030', 'getAttention': False})
    } {
        Deku018.PlayAnimationNoWait({'name': 'no01,sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku018.SetFacialExpression({'expression': 'sad'})
    }

}

void Balom_Jungle010_No2() {
    Deku018.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku018.Talk({'message': 'quest/QuestAreaF:Balom_Jungle010_050', 'getAttention': False})
    } {
        Deku018.PlayAnimation({'name': 'no01,sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku018.SetFacialExpression({'expression': 'sad'})
    }

}

void Balom_Jungle010_020() {
    Deku018.SetInterestIkEnabled({'enable': False})
    Deku018.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaF:Balom_Jungle020_010', 'playerTalkAnim': False, 'facial': '', 'selfTalkAnimName': 'yes01,talk01', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Deku018.Talk({'message': 'quest/QuestAreaF:Balom_Jungle020_020', 'getAttention': False})
    } {
        Deku018.PlayAnimation({'name': 'no01,sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku018.SetFacialExpression({'expression': 'sleep'})
    }

}

void Balom_Jungle010_after() {
    Deku018.SetInterestIkEnabled({'enable': False})
    Deku018.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkDeku:Deku018Talk050_010', 'selfTalkAnimName': 'no01,sad01', 'facial': 'sleep', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Deku018.Talk({'message': 'scenario/GeneralTalkDeku:Deku018Talk050_020', 'getAttention': False})
    } {
        Deku018.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku018.SetFacialExpression({'expression': 'normal'})
    }

}
