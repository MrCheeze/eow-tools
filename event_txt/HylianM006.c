-------- EventFlow: HylianM006 --------

Actor: HylianM006
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimation', 'SetFacialExpression', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['AimToInitialAngle']
queries: []
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
actions: []
queries: ['CheckOutfit']
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult4']
params: None

Actor: Zelda
entrypoint: None()
actions: ['AddItemAndGenericItemGetSequence']
queries: []
params: None

void talk() {
    HylianM006.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'message': 'scenario/HylianGeneralTalk:HylianM006Talk010_010', 'selfTalkAnimName': 'talk01_R', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Animal_HyrulePlains010_010() {

    call EvResetCommon.AllReset()

    HylianM006.SetInterestIkEnabled({'enable': False})
    HylianM006.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaPlains:Animal_HyrulePlains010_010', 'selfTalkAnim': True, 'facial': 'sad', 'selfTalkAnimName': 'think01_R', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianM006.PlayAnimation({'name': 'wait01_R', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianM006.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains010_020', 'getAttention': False})
    } {
        HylianM006.PlayAnimation({'name': 'talk01_R', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM006.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        HylianM006.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains010_030', 'getAttention': False})
    } {
        HylianM006.PlayAnimation({'name': 'think01_R', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM006.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        HylianM006.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains010_040', 'getAttention': False})
    } {
        HylianM006.PlayAnimation({'name': 'talk01_R', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM006.SetFacialExpression({'expression': 'sleep'})
    }

    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event55:

        fork {
            HylianM006.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains010_045_AnimalClothes', 'getAttention': False})
        } {
            HylianM006.PlayAnimation({'name': 'think01_R', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HylianM006.SetFacialExpression({'expression': 'normal'})
        }


        call GeneralSequence.ZeldaTalkMotion()

        Timer.Wait({'time': 1.0})

        call Animal_HyrulePlains010_060()

    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event55
    } else {

        fork {
            HylianM006.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains010_Q1', 'getAttention': False})
        } {
            HylianM006.PlayAnimation({'name': 'think01_R', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HylianM006.SetFacialExpression({'expression': 'normal'})
        }

        if !Dialog.GetLastResult4({'resultOnSkip': 3}) {

            fork {
                HylianM006.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains010_Q1_A1_010', 'getAttention': False})
            } {
                HylianM006.PlayAnimation({'name': 'talk01_R', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HylianM006.SetFacialExpression({'expression': 'surprise'})
            }


            fork {
                HylianM006.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains010_Q1_A2_010', 'getAttention': False})
            } {
                HylianM006.PlayAnimation({'name': 'wait01_R', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HylianM006.SetFacialExpression({'expression': 'sleep'})
            }


            fork {
                HylianM006.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains010_050', 'getAttention': False})
            } {
                HylianM006.PlayAnimation({'name': 'talk01_R', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HylianM006.SetFacialExpression({'expression': 'normal'})
            }


            fork {
                HylianM006.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains010_060', 'getAttention': False})
            } {
                HylianM006.PlayAnimation({'name': 'think01_R', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HylianM006.SetFacialExpression({'expression': 'sad'})
            }


            fork {
                HylianM006.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains010_070', 'getAttention': False})
            } {
                HylianM006.PlayAnimation({'name': 'wait01_R', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HylianM006.SetFacialExpression({'expression': 'sleep'})
            }

            QuestSystem.SetProgress({'symbol': 'Animal_HyrulePlains010:2939692726', 'isShowTelopInEvent': False, 'isFrontFade': False})
        }
    }
}

void talk020() {
    HylianM006.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'message': 'scenario/HylianGeneralTalk:HylianM006Talk020_010', 'selfTalkAnimName': 'talk01_R', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk030() {
    HylianM006.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'message': 'scenario/HylianGeneralTalk:HylianM006Talk030_010', 'selfTalkAnimName': 'talk01_R', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Animal_HyrulePlains010_015() {

    call EvResetCommon.AllReset()

    HylianM006.SetInterestIkEnabled({'enable': False})
    HylianM006.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'quest/QuestAreaPlains:Animal_HyrulePlains010_080', 'facial': 'sleep', 'selfTalkAnimName': 'think01_R', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        HylianM006.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains010_090', 'getAttention': False})
    } {
        HylianM006.PlayAnimation({'name': 'talk01_R', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM006.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        HylianM006.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains010_091', 'getAttention': False})
    } {
        HylianM006.PlayAnimation({'name': 'think01_R', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM006.SetFacialExpression({'expression': 'sad'})
    }

}

void Animal_HyrulePlains010_end() {

    call EvResetCommon.AllReset()

    HylianM006.SetInterestIkEnabled({'enable': False})
    HylianM006.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'quest/QuestAreaPlains:Animal_HyrulePlains090_010', 'facial': 'smile', 'selfTalkAnimName': 'talk01_R', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        HylianM006.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains090_020', 'getAttention': False})
    } {
        HylianM006.PlayAnimation({'name': 'talk01_R', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianM006.SetFacialExpression({'expression': 'smile'})
    }

    HylianM006.PlayAnimation({'name': 'wait01_R', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'SmoothieIngredient02', 'count': 10, 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})

    fork {
        HylianM006.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains090_030', 'facial': 'smile', 'selfTalkAnimName': 'talk01_R', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    QuestSystem.SetProgress({'symbol': 'Animal_HyrulePlains010:2489982619', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Animal_HyrulePlains010_060() {

    call EvResetCommon.AllReset()

    HylianM006.SetInterestIkEnabled({'enable': False})
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event91:
        HylianM006.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'quest/QuestAreaPlains:Animal_HyrulePlains060_AnimalClothes', 'facial': 'surprise', 'selfTalkAnimName': 'surprised_st01', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        Event101:

        fork {
            HylianM006.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains060_030', 'getAttention': False})
        } {
            HylianM006.PlayAnimation({'name': 'think01_R', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HylianM006.SetFacialExpression({'expression': 'sad'})
        }


        fork {
            HylianM006.PlayAnimation({'name': 'talk01_R', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {

            fork {
                HylianM006.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains060_040', 'getAttention': False})
            } {
                HylianM006.SetFacialExpression({'expression': 'normal'})
            }

            QuestSystem.SetProgress({'symbol': 'Animal_HyrulePlains010:3982799035', 'isShowTelopInEvent': False, 'isFrontFade': False})
        }

    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event91
    } else {
        HylianM006.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'quest/QuestAreaPlains:Animal_HyrulePlains060_010', 'facial': 'normail', 'selfTalkAnimName': 'talk01_R', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

        fork {
            HylianM006.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains060_020', 'getAttention': False})
        } {
            HylianM006.PlayAnimation({'name': 'wait01_R', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HylianM006.SetFacialExpression({'expression': 'smile'})
        }

        goto Event101
    }
}

void Animal_HyrulePlains010_065() {

    call EvResetCommon.AllReset()

    HylianM006.SetInterestIkEnabled({'enable': False})
    HylianM006.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'quest/QuestAreaPlains:Animal_HyrulePlains060_050', 'facial': 'normal', 'selfTalkAnimName': 'talk01_R', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}
