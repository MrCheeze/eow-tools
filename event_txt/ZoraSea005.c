-------- EventFlow: ZoraSea005 --------

Actor: ZoraSea005
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimation', 'SetFacialExpression', 'PlayAnimationNoWait', 'KeepAnimationAfterEvent', 'AimPlayer', 'Destroy', 'SetInterestIkEnabled', 'AimActor', 'WarpToActorLinkedPoint', 'SetInstanceVariableString', 'ActiveteLinkedActor']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
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

Actor: Player
entrypoint: None()
actions: ['AbsorbAllPastedActors', 'WarpToActorLinkedPoint', 'AimActor', 'PlayAnimationDetail']
queries: []
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

Actor: Partner
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AddItemAndGenericItemGetSequence']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt3ActorsCenterAsTalker', 'Reset']
queries: []
params: None

Actor: TreasureBox[Bring]
entrypoint: None()
actions: ['Destroy']
queries: []
params: None

Actor: TreasureBox[forDemo]
entrypoint: None()
actions: ['Destroy']
queries: []
params: None

Actor: PotHyruleCastle
entrypoint: None()
actions: []
queries: []
params: None

Actor: Pot
entrypoint: None()
actions: []
queries: []
params: None

Actor: BoxWooden
entrypoint: None()
actions: []
queries: []
params: None

void talk() {
    ZoraSea005.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea005Talk010_010', 'playerTalkAnim': False, 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk015() {
    ZoraSea005.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': False, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea005Talk015_010', 'selfTalkAnimName': '', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk020() {
    ZoraSea005.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea005Talk020_010', 'selfTalkAnimName': 'talk_swim01', 'facial': 'sad', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSea005.PlayAnimationNoWait({'name': 'wait_swim01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSea005.KeepAnimationAfterEvent()
}

void talk030() {
    ZoraSea005.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea005Talk030_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Quest_1() {

    call EvResetCommon.AllReset()

    ZoraSea005.SetInterestIkEnabled({'enable': False})
    if !EventFlags.CheckMessgaeFlag({'message': 'quest/QuestAreaB:Treasure_RiverCoast010_010'}) {
        ZoraSea005.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'quest/QuestAreaB:Treasure_RiverCoast010_010', 'selfTalkAnimName': 'think01', 'aimToPlayer': False, 'facial': 'sleep', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

        fork {
            ZoraSea005.Talk({'message': 'quest/QuestAreaB:Treasure_RiverCoast010_020', 'getAttention': False})
        } {
            ZoraSea005.SetFacialExpression({'expression': 'sleep'})
        }


        fork {
            ZoraSea005.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraSea005.SetFacialExpression({'expression': 'normal'})
        }

        ZoraSea005.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

        fork {
            ZoraSea005.Talk({'message': 'quest/QuestAreaB:Treasure_RiverCoast010_030', 'getAttention': False})
        } {
            ZoraSea005.PlayAnimation({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraSea005.SetFacialExpression({'expression': 'surprise'})
        }


        fork {
            ZoraSea005.Talk({'message': 'quest/QuestAreaB:Treasure_RiverCoast010_040', 'getAttention': False})
        } {
            ZoraSea005.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraSea005.SetFacialExpression({'expression': 'sad'})
        }


        fork {
            ZoraSea005.Talk({'message': 'quest/QuestAreaB:Treasure_RiverCoast010_050', 'getAttention': False})
        } {
            ZoraSea005.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraSea005.SetFacialExpression({'expression': 'smile'})
        }


        fork {
            ZoraSea005.Talk({'message': 'quest/QuestAreaB:Treasure_RiverCoast010_060', 'getAttention': False})
        } {
            ZoraSea005.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraSea005.SetFacialExpression({'expression': 'normal'})
        }


        fork {
            ZoraSea005.Talk({'message': 'quest/QuestAreaB:Treasure_RiverCoast010_070', 'getAttention': False})
        } {
            ZoraSea005.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraSea005.SetFacialExpression({'expression': 'sad'})
        }

        Event43:
        if !Dialog.GetLastResult({'resultOnSkip': 1}) {

            fork {
                ZoraSea005.Talk({'message': 'quest/QuestAreaB:Treasure_RiverCoast010_090', 'getAttention': False})
            } {
                ZoraSea005.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                ZoraSea005.SetFacialExpression({'expression': 'smile'})
            }


            fork {
                ZoraSea005.Talk({'message': 'quest/QuestAreaB:Treasure_RiverCoast010_100', 'getAttention': False})
            } {
                ZoraSea005.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

            Fade.StartPreset({'preset': 'FadeOutNormalB'})
            ZoraSea005.Destroy()
            Timer.Wait({'time': 1.0})
            Fade.StartPreset({'preset': 'FadeInNormal'})
            QuestSystem.SetProgress({'symbol': 'Treasure_RiverCoast010:2270698499', 'isShowTelopInEvent': False, 'isFrontFade': False})
        } else {

            fork {
                ZoraSea005.Talk({'message': 'quest/QuestAreaB:Treasure_RiverCoast010_110', 'getAttention': False})
            } {
                ZoraSea005.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                ZoraSea005.SetFacialExpression({'expression': 'sleep'})
            }

        }
    } else {
        ZoraSea005.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'facial': 'sad', 'selfTalkAnimName': 'think01', 'message': 'quest/QuestAreaB:Treasure_RiverCoast010_080', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        goto Event43
    }
}

void Quest_2() {

    call EvResetCommon.AllReset()

    ZoraSea005.SetInterestIkEnabled({'enable': False})
    ZoraSea005.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'quest/QuestAreaB:Treasure_RiverCoast020_010', 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSea005.SetInstanceVariableString({'name': 'idleAnim', 'value': 'think01'})
}

void Quest_3() {

    call EvResetCommon.AllReset_SensorQuest()

    ZoraSea005.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="TreasureBox", sub_name="Bring"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraSea005.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'quest/QuestAreaB:Treasure_RiverCoast020_015', 'facial': 'normal', 'selfTalkAnimName': '', 'aimToPlayer': False, 'absorbAllPastedActors': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Timer.Wait({'time': 1.0})
    ZoraSea005.SetInterestIkEnabled({'enable': False})

    fork {
        ZoraSea005.Talk({'message': 'quest/QuestAreaB:Treasure_RiverCoast020_020', 'getAttention': False})
    } {
        ZoraSea005.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea005.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        ZoraSea005.Talk({'message': 'quest/QuestAreaB:Treasure_RiverCoast020_025', 'getAttention': False})
    } {
        ZoraSea005.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea005.SetFacialExpression({'expression': 'sad'})
    } {
        ZoraSea005.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    ZoraSea005.SetInstanceVariableString({'name': 'idleAnim', 'value': 'think01'})
}

void Quest_4() {

    call EvResetCommon.AllReset_InPot()

    ZoraSea005.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Pot"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraSea005.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'absorbAllPastedActors': False, 'message': 'quest/QuestAreaB:Treasure_RiverCoast020_015', 'facial': 'normal', 'selfTalkAnimName': '', 'aimToPlayer': False, 'unburrow': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Timer.Wait({'time': 2.0})
    ZoraSea005.SetInterestIkEnabled({'enable': False})

    fork {
        ZoraSea005.Talk({'message': 'quest/QuestAreaB:Treasure_RiverCoast020_030', 'getAttention': False})
    } {
        ZoraSea005.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea005.SetFacialExpression({'expression': 'sad'})
    }

    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    ZoraSea005.SetInstanceVariableString({'name': 'idleAnim', 'value': 'think01'})
}

void Quest_5() {

    call EvResetCommon.AllReset_SensorQuest()

    ZoraSea005.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="TreasureBox", sub_name="Bring"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    TreasureBox[Bring].Destroy()
    ZoraSea005.ActiveteLinkedActor({'index': 0})
    ZoraSea005.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="ZoraSea005"), 'index': 1, 'offsetY': 0.0})
    Player.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="ZoraSea005"), 'index': 0, 'offsetY': 0.0})
    Player.AimActor({'actor': ActorIdentifier(name="ZoraSea005"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Player.PlayAnimationDetail({'name': 'wait', 'priority': 0, 'layer': 0})
    Camera.LookAt3ActorsCenterAsTalker({'duration': 0.0, 'actor1': ActorIdentifier(name="ZoraSea005"), 'actor2': ActorIdentifier(name="Player"), 'actor3': ActorIdentifier(name="TreasureBox", sub_name="forDemo"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    ZoraSea005.AimActor({'withoutTurn': True, 'duration': 0.0, 'actor': ActorIdentifier(name="TreasureBox", sub_name="forDemo"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    ZoraSea005.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'quest/QuestAreaB:Treasure_RiverCoast030_010', 'selfTalkAnimName': 'happy01,wait01', 'facial': 'smile', 'aimToPlayer': False, 'absorbAllPastedActors': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSea005.SetInterestIkEnabled({'enable': False})

    fork {
        ZoraSea005.Talk({'message': 'quest/QuestAreaB:Treasure_RiverCoast030_020', 'getAttention': False})
    } {
        ZoraSea005.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea005.SetFacialExpression({'expression': 'sad'})
    } {
        ZoraSea005.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        ZoraSea005.Talk({'message': 'quest/QuestAreaB:Treasure_RiverCoast030_030', 'getAttention': False})
    } {
        ZoraSea005.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea005.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        ZoraSea005.Talk({'message': 'quest/QuestAreaB:Treasure_RiverCoast030_040', 'getAttention': False})
    } {
        ZoraSea005.PlayAnimation({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea005.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        ZoraSea005.Talk({'message': 'quest/QuestAreaB:Treasure_RiverCoast030_045', 'getAttention': False})
    } {
        ZoraSea005.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea005.SetFacialExpression({'expression': 'normal'})
    }

    ZoraSea005.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'ItemMachineCoupon', 'count': 3, 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})

    fork {
        ZoraSea005.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaB:Treasure_RiverCoast030_050', 'playerTalkAnim': False, 'selfTalkAnimName': 'think01', 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner.AimActor({'actor': ActorIdentifier(name="ZoraSea005"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        ZoraSea005.Talk({'message': 'quest/QuestAreaB:Treasure_RiverCoast030_060', 'getAttention': False})
    } {
        ZoraSea005.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea005.SetFacialExpression({'expression': 'normal'})
    }

    QuestSystem.SetProgress({'symbol': 'Treasure_RiverCoast010:3154781230', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventFlags.SetFlag({'symbol': 'TreasureBox_ZoraQuest', 'value': True})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    ZoraSea005.Destroy()
    TreasureBox[forDemo].Destroy()
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
}

void Treasure_RiverCoast010_FinishTalk() {
    ZoraSea005.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'quest/QuestAreaB:Treasure_RiverCoast030_070', 'selfTalkAnimName': '', 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Quest_4_3() {

    call EvResetCommon.AllReset_InPot()

    ZoraSea005.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="PotHyruleCastle"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraSea005.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'quest/QuestAreaB:Treasure_RiverCoast020_015', 'facial': 'normal', 'selfTalkAnimName': '', 'aimToPlayer': False, 'absorbAllPastedActors': False, 'unburrow': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Timer.Wait({'time': 2.0})
    ZoraSea005.SetInterestIkEnabled({'enable': False})

    fork {
        ZoraSea005.Talk({'message': 'quest/QuestAreaB:Treasure_RiverCoast020_040', 'getAttention': False})
    } {
        ZoraSea005.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea005.SetFacialExpression({'expression': 'sad'})
    }

    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    ZoraSea005.SetInstanceVariableString({'name': 'idleAnim', 'value': 'think01'})
}

void Quest_4_5() {

    call EvResetCommon.AllReset_SensorQuest()

    ZoraSea005.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="BoxWooden"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraSea005.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'quest/QuestAreaB:Treasure_RiverCoast020_015', 'facial': 'normal', 'selfTalkAnimName': '', 'aimToPlayer': False, 'absorbAllPastedActors': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Timer.Wait({'time': 2.0})
    ZoraSea005.SetInterestIkEnabled({'enable': False})

    fork {
        ZoraSea005.Talk({'message': 'quest/QuestAreaB:Treasure_RiverCoast020_050', 'getAttention': False})
    } {
        ZoraSea005.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea005.SetFacialExpression({'expression': 'sad'})
    }

    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    ZoraSea005.SetInstanceVariableString({'name': 'idleAnim', 'value': 'think01'})
}

void talk040() {
    ZoraSea005.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea005Talk040_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk017() {
    ZoraSea005.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'message': 'scenario/GeneralTalkZoraSea:ZoraSea005Talk017_010', 'selfTalkAnimName': 'talk_swim01', 'aimToPlayer': True, 'facial': 'sad', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraSea005.Talk({'message': 'scenario/GeneralTalkZoraSea:ZoraSea005Talk017_020', 'getAttention': False})
}
