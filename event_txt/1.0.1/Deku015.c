-------- EventFlow: Deku015 --------

Actor: Deku015
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'AimPlayer', 'PlayAnimation', 'SetFacialExpression', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult4', 'GetLastResult']
params: None

Actor: Player
entrypoint: None()
actions: ['RemoveItem']
queries: ['HasItem']
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['AimToInitialAngle']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AddItemAndGenericItemGetSequence']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

void talk010() {
    Deku015.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkDeku:Deku015Talk010_Q1', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult4({'resultOnSkip': 3}) {
        Deku015.Talk({'message': 'scenario/GeneralTalkDeku:Deku015Talk010_Q1_A1_010', 'getAttention': False})
    } else {
        Deku015.Talk({'message': 'scenario/GeneralTalkDeku:Deku015Talk010_Q1_A2_010', 'getAttention': False})
    }
    Deku015.Talk({'message': 'scenario/GeneralTalkDeku:Deku015Talk010_010', 'getAttention': False})
    Deku015.Talk({'message': 'scenario/GeneralTalkDeku:Deku015Talk010_020', 'getAttention': False})
}

void talk020() {
    Deku015.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkDeku:Deku015Talk020_Q1', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult4({'resultOnSkip': 3}) {
        Deku015.Talk({'message': 'scenario/GeneralTalkDeku:Deku015Talk020_Q1_A1_010', 'getAttention': False})
    } else {
        Deku015.Talk({'message': 'scenario/GeneralTalkDeku:Deku015Talk020_Q1_A2_010', 'getAttention': False})
    }
    Deku015.Talk({'message': 'scenario/GeneralTalkDeku:Deku015Talk020_010', 'getAttention': False})
    Deku015.Talk({'message': 'scenario/GeneralTalkDeku:Deku015Talk020_020', 'getAttention': False})
}

void talk030() {
    Deku015.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkDeku:Deku015Talk030_010', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Deku015.Talk({'message': 'scenario/GeneralTalkDeku:Deku015Talk030_020', 'getAttention': False})
}

void talk040() {
    Deku015.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkDeku:Deku015Talk040_010', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Deku015.Talk({'message': 'scenario/GeneralTalkDeku:Deku015Talk040_020', 'getAttention': False})
}

void Deliver_Jungle010_010() {

    call EvResetCommon.AllReset()

    Deku015.SetInterestIkEnabled({'enable': False})
    Deku015.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': False, 'facial': 'sleep', 'message': 'quest/QuestAreaF:Deliver_Jungle010_010', 'aimFromPlayer': True, 'selfTalkAnimName': 'wait01', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Deku015.Talk({'message': 'quest/QuestAreaF:Deliver_Jungle010_020', 'getAttention': False})
    } {
        Deku015.PlayAnimation({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Deku015.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 2.0})
    Deku015.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Deku015.Talk({'message': 'quest/QuestAreaF:Deliver_Jungle010_030', 'getAttention': False})
    } {
        Deku015.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Deku015.Talk({'message': 'quest/QuestAreaF:Deliver_Jungle010_040', 'getAttention': False})
    } {
        Deku015.PlayAnimation({'name': 'angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Deku015.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku015.Talk({'message': 'quest/QuestAreaF:Deliver_Jungle010_050', 'getAttention': False})
    } {
        Deku015.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku015.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        Deku015.Talk({'message': 'quest/QuestAreaF:Deliver_Jungle010_060', 'getAttention': False})
    } {
        Deku015.PlayAnimation({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Deku015.Talk({'message': 'quest/QuestAreaF:Deliver_Jungle010_070', 'getAttention': False})
    } {
        Deku015.PlayAnimation({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku015.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        Deku015.Talk({'message': 'quest/QuestAreaF:Deliver_Jungle010_080', 'getAttention': False})
    } {
        Deku015.PlayAnimation({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku015.SetFacialExpression({'expression': 'normal'})
    }

    Deku015.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})

    fork {
        Deku015.Talk({'message': 'quest/QuestAreaF:Deliver_Jungle010_100', 'getAttention': False})
    } {
        Deku015.PlayAnimation({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    QuestSystem.SetProgress({'symbol': 'Deliver_Jungle010:3520704526', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Deliver_Jungle010_015() {

    call EvResetCommon.AllReset()

    Deku015.SetInterestIkEnabled({'enable': False})
    Deku015.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaF:Deliver_Jungle020_010', 'playerTalkAnim': False, 'selfTalkAnimName': 'happy02', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        call _Deliver_Jungle010_Yes()

    } else {

        call _Deliver_Jungle010_No()

    }
}

void _Deliver_Jungle010_Yes() {
    if !Player.HasItem({'count': 3, 'itemKey': 'SmoothieIngredient03', 'index': -1}) {
        Deku015.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaF:Deliver_Jungle020_020', 'selfTalkAnimName': 'think01', 'selfTalkAnim': True, 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

        fork {
            Deku015.Talk({'message': 'quest/QuestAreaF:Deliver_Jungle020_030', 'getAttention': False})
        } {
            Deku015.PlayAnimation({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } else {
        Player.RemoveItem({'count': 3, 'itemKey': 'SmoothieIngredient03', 'index': -1})
        Deku015.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaF:Deliver_Jungle030_010', 'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': 'talk01', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

        fork {
            Deku015.Talk({'message': 'quest/QuestAreaF:Deliver_Jungle030_020', 'getAttention': False})
        } {
            Deku015.PlayAnimation({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            Deku015.Talk({'message': 'quest/QuestAreaF:Deliver_Jungle030_030', 'getAttention': False})
        } {
            Deku015.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Deku015.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'ItemMachineCoupon', 'count': 2, 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})

        fork {
            Deku015.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': 'sleep', 'message': 'quest/QuestAreaF:Deliver_Jungle030_040', 'selfTalkAnimName': 'laugh01', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Partner.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        }


        fork {
            Deku015.Talk({'message': 'quest/QuestAreaF:Deliver_Jungle030_050', 'getAttention': False})
        } {
            Deku015.PlayAnimation({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            Deku015.Talk({'message': 'quest/QuestAreaF:Deliver_Jungle030_060', 'getAttention': False})
        } {
            Deku015.PlayAnimation({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            Deku015.Talk({'message': 'quest/QuestAreaF:Deliver_Jungle030_070', 'getAttention': False})
        } {
            Deku015.PlayAnimation({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            Deku015.Talk({'message': 'quest/QuestAreaF:Deliver_Jungle030_080', 'getAttention': False})
        } {
            Deku015.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            Deku015.Talk({'message': 'quest/QuestAreaF:Deliver_Jungle030_090', 'getAttention': False})
        } {
            Deku015.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        QuestSystem.SetProgress({'symbol': 'Deliver_Jungle010:3935012899', 'isShowTelopInEvent': False, 'isFrontFade': False})
    }
}

void _Deliver_Jungle010_No() {
    Deku015.Talk({'message': 'quest/QuestAreaF:Deliver_Jungle020_040', 'getAttention': False})
}

void Deliver_Jungle010_FinishTalk() {
    Deku015.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': 'sleep', 'aimFromPlayer': True, 'selfTalkAnimName': 'wait01', 'selfTalkAnim': True, 'message': 'scenario/GeneralTalkDeku:Deku015Talk015_010', 'aimToPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Deku015.Talk({'message': 'scenario/GeneralTalkDeku:Deku015Talk015_020', 'getAttention': False})
    } {
        Deku015.PlayAnimation({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}
