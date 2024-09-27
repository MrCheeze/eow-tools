-------- EventFlow: HylianF027 --------

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

Actor: HylianF027
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimation', 'SetFacialExpression', 'SetInterestIkEnabled', 'Deactivate', 'GenericTalkSequence']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['CheckProgress']
params: None

Actor: Player
entrypoint: None()
actions: ['AddItem']
queries: ['CheckOutfit']
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestWarp']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['GenericItemGetSequence']
queries: []
params: None

Actor: QuestCatKakariko000
entrypoint: None()
actions: ['LookAtGimmick', 'WarpToActorLinkedPointWithCompassPoint']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: Partner
entrypoint: None()
actions: ['MoveToDefaultPosition', 'AimCompassPoint']
queries: []
params: None

void talk010() {
    HylianF027.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianF027Talk010_010', 'playerTalkAnim': False, 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk020() {
    HylianF027.GenericTalkSequenceWithDialog({'facial': 'smile', 'message': 'scenario/HylianGeneralTalk:HylianF027Talk020_010', 'aimToPlayer': True, 'playerTalkAnim': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk030() {
    HylianF027.GenericTalkSequenceWithDialog({'facial': 'smile', 'message': 'scenario/HylianGeneralTalk:HylianF027Talk030_010', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Animal_HyrulePlains010_020() {

    call EvResetCommon.AllReset()

    HylianF027.SetInterestIkEnabled({'enable': False})
    HylianF027.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'quest/QuestAreaPlains:Animal_HyrulePlains020_010', 'facial': 'normal', 'selfTalkAnimName': 'yes01,wait01', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        HylianF027.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains020_020', 'getAttention': False})
    } {
        HylianF027.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianF027.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        HylianF027.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains020_030', 'getAttention': False})
    } {
        HylianF027.PlayAnimation({'name': 'sad_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianF027.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        HylianF027.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains020_040', 'getAttention': False})
    } {
        HylianF027.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianF027.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        HylianF027.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains020_050', 'getAttention': False})
    } {
        HylianF027.PlayAnimation({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianF027.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        HylianF027.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains020_056', 'getAttention': False})
    } {
        HylianF027.PlayAnimation({'name': 'talk03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianF027.SetFacialExpression({'expression': 'normail'})
    }

    QuestCatKakariko000.LookAtGimmick({'duration': 3.0, 'chaseRatio': 0.05000000074505806, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})

    fork {
        HylianF027.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains020_055', 'getAttention': False})
    } {
        HylianF027.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianF027.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        Timer.Wait({'time': 2.0})
    } {
        HylianF027.GenericTalkSequence({'selfTalkAnimName': 'think01', 'selfTalkAnim': True, 'playerTalkAnim': False, 'facial': 'normal', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    }


    fork {
        HylianF027.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains020_054', 'getAttention': False})
    } {
        HylianF027.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianF027.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        HylianF027.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains020_053', 'getAttention': False})
    } {
        HylianF027.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianF027.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        HylianF027.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains020_052', 'getAttention': False})
    } {
        HylianF027.PlayAnimation({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianF027.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        HylianF027.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains020_051', 'getAttention': False})
    } {
        HylianF027.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianF027.SetFacialExpression({'expression': 'normal'})
    }

    EventFlags.SetFlag({'symbol': 'F_MC034_CatClothStart', 'value': True})
    QuestSystem.SetProgress({'symbol': 'Animal_HyrulePlains010_Other:110937629', 'isShowTelopInEvent': False, 'isFrontFade': False})
    if !QuestSystem.CheckProgress({'symbol': 'Animal_HyrulePlains010:2939692726'}) {
        QuestSystem.SetProgress({'symbol': 'Animal_HyrulePlains010:2215998837', 'isShowTelopInEvent': False, 'isFrontFade': False})
    }
}

void Animal_HyrulePlains010_40() {

    call EvResetCommon.AllReset()

    HylianF027.SetInterestIkEnabled({'enable': False})
    QuestCatKakariko000.WarpToActorLinkedPointWithCompassPoint({'offsetY': 0.0, 'index': 2, 'actor': ActorIdentifier(name="QuestCatKakariko000"), 'direction': 0})
    Timer.Wait({'time': 2.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    if !EventFlags.CheckFlag({'symbol': 'F_MC034_CatClothStart'}) {
        HylianF027.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains047_010', 'facial': 'surprise', 'selfTalkAnimName': 'surprised_st01', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

        fork {
            HylianF027.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains047_020', 'getAttention': False})
        } {
            HylianF027.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HylianF027.SetFacialExpression({'expression': 'sad'})
        }


        fork {
            HylianF027.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains047_030', 'getAttention': False})
        } {
            HylianF027.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HylianF027.SetFacialExpression({'expression': 'normal'})
        }


        fork {
            HylianF027.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains047_040', 'getAttention': False})
        } {
            HylianF027.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HylianF027.SetFacialExpression({'expression': 'normal'})
        }


        fork {
            HylianF027.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains047_050', 'getAttention': False})
        } {
            HylianF027.PlayAnimation({'name': 'sad_st01,sad_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HylianF027.SetFacialExpression({'expression': 'sad'})
        }


        fork {
            HylianF027.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains047_060', 'getAttention': False})
        } {
            HylianF027.PlayAnimation({'name': 'talk03', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HylianF027.SetFacialExpression({'expression': 'normal'})
        }

        HylianF027.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Event110:
        Zelda.GenericItemGetSequence({'itemKey': 'ZeldaClothes03', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
        Player.AddItem({'itemKey': 'ZeldaClothes03', 'count': 1, 'index': -1, 'autoEquip': False})
        Partner.MoveToDefaultPosition({'speed': 1, 'avoidPlayer': True, 'position': 1, 'tolerance': 0.0, 'avoidWall': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Partner.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Fade.StartPreset({'preset': 'FadeOutSlowB'})
        QuestSystem.SetProgress({'symbol': 'Animal_HyrulePlains010_Other:1036975664', 'isShowTelopInEvent': False, 'isFrontFade': False})
        HylianF027.Deactivate()
        Timer.Wait({'time': 2.0})
        Fade.StartPreset({'preset': 'FadeInSlow'})
    } else {
        HylianF027.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'quest/QuestAreaPlains:Animal_HyrulePlains045_020', 'facial': 'smile', 'selfTalkAnimName': 'happy02', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

        fork {
            HylianF027.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains045_030', 'getAttention': False})
        } {
            HylianF027.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HylianF027.SetFacialExpression({'expression': 'smile'})
        }

        HylianF027.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        switch QuestSystem.CheckProgress({'symbol': 'Animal_HyrulePlains010:2215998837'}) {
          case [4294967295, 1]:
            goto Event110
          case 0:
            QuestSystem.SetProgress({'symbol': 'Animal_HyrulePlains010:2634957876', 'isShowTelopInEvent': False, 'isFrontFade': False})
            goto Event110
        }
    }
}

void Animal_HyrulePlains010_40_Start() {
    if !EventFlags.CheckFlag({'symbol': 'F_MC034_CatClothStart'}) {
        Dialog.Show({'message': 'ItemGet:ItemQuest06'})
    } else {
        Dialog.Show({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains045_010'})
    }
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    QuestSystem.SetProgress({'symbol': 'Animal_HyrulePlains010_Other:883598495', 'isShowTelopInEvent': False, 'isFrontFade': False})
    GameControl.RequestWarp({'locator': 'Animal_HyrulePlains010_40_Start', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void Animal_HyrulePlains010_030() {

    call EvResetCommon.AllReset()

    HylianF027.SetInterestIkEnabled({'enable': False})
    HylianF027.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'quest/QuestAreaPlains:Animal_HyrulePlains030_010', 'facial': 'normal', 'selfTalkAnimName': 'talk03', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    QuestCatKakariko000.LookAtGimmick({'duration': 3.0, 'chaseRatio': 0.05000000074505806, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})

    fork {
        HylianF027.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains030_020', 'getAttention': False})
    } {
        HylianF027.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianF027.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        Timer.Wait({'time': 2.0})
    } {
        HylianF027.GenericTalkSequence({'selfTalkAnimName': 'think01', 'selfTalkAnim': True, 'playerTalkAnim': False, 'facial': 'normal', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    }


    fork {
        HylianF027.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains030_030', 'getAttention': False})
    } {
        HylianF027.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianF027.SetFacialExpression({'expression': 'normal'})
    }

}

void Animal_HyrulePlains010_end() {

    call EvResetCommon.AllReset()

    HylianF027.SetInterestIkEnabled({'enable': False})
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        HylianF027.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'facial': 'normal', 'selfTalkAnimName': 'talk03', 'message': 'quest/QuestAreaPlains:Animal_HyrulePlains050_AnimalClothes', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else {
        HylianF027.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'facial': 'normal', 'selfTalkAnimName': 'talk03', 'message': 'quest/QuestAreaPlains:Animal_HyrulePlains050_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
}
