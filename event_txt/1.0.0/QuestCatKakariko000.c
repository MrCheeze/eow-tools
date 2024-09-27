-------- EventFlow: QuestCatKakariko000 --------

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult4']
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['WarpToActorLinkedPoint', 'AimActor']
queries: ['CheckOutfit']
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: QuestCatKakariko000
entrypoint: None()
actions: ['WarpToLinkedPoint', 'GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimation', 'GenericTalkSequence', 'CatDoAcitonWait', 'SetFacialExpression', 'LookAtTalker', 'PlayAnimationEx', 'KeepAnimationAfterEvent']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE']
queries: []
params: None

void talk() {
    QuestCatKakariko000.GenericTalkSequence({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': False, 'keepPersonalSpace': False, 'selfTalkAnimName': '', 'selfTalkAnim': False, 'cameraLookAt': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    QuestCatKakariko000.CatDoAcitonWait()
    Timer.Wait({'time': 1.5})
}

void Animal_HyrulePlains010_030() {
    Event23:

    call EvResetCommon.AllReset_SensorQuest()

    QuestCatKakariko000.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 1.0})
    QuestCatKakariko000.GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnimName': '', 'aimFromPlayer': True, 'cameraLookAt': True, 'absorbAllPastedActors': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event74:

        fork {
            Timer.Wait({'time': 2.5})
            QuestCatKakariko000.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains042_020', 'getAttention': False})
        } {
            QuestCatKakariko000.PlayAnimationEx({'name': 'reaction01', 'time': 3.0, 'layer': 0, 'blendFrame': -1, 'restart': False})
            QuestCatKakariko000.SetFacialExpression({'expression': 'normal'})
            QuestCatKakariko000.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Event6:
        Fade.StartPreset({'preset': 'FadeOutSlowB'})
        Timer.Wait({'time': 2.0})

        call EvResetCommon.AllReset()

        Player.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="QuestCatKakariko000"), 'offsetY': 0.0})
        Player.AimActor({'actor': ActorIdentifier(name="QuestCatKakariko000"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        QuestCatKakariko000.WarpToLinkedPoint({'index': 1, 'offsetY': 0.0})

        fork {
            QuestCatKakariko000.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains040_020', 'getAttention': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'SE_ANIM_CAT_EAT', 'volume': 1.0, 'pitch': 1.0})
        }

        Fade.StartPreset({'preset': 'FadeInSlow'})
        if Player.CheckOutfit({'outfit': 'Animal'}) {
            Event14:

            call _CatTalk2({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains042_030'})

            Event5:
            QuestSystem.SetProgress({'symbol': 'Animal_HyrulePlains010_Other:766612958', 'isShowTelopInEvent': False, 'isFrontFade': False})
            QuestCatKakariko000.KeepAnimationAfterEvent()
        } else
        if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
            goto Event14
        } else {

            call _CatTalk2({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains040_030'})

        }
        goto Event5
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event74
    } else {

        fork {
            Timer.Wait({'time': 2.5})
            QuestCatKakariko000.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains040_010', 'getAttention': False})
        } {
            QuestCatKakariko000.PlayAnimationEx({'name': 'reaction01', 'time': 3.0, 'layer': 0, 'blendFrame': -1, 'restart': False})
            QuestCatKakariko000.SetFacialExpression({'expression': 'normal'})
            QuestCatKakariko000.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }
    goto Event6
}

void Animal_HyrulePlains010_a() {
    goto Event23
}

void Animal_HyrulePlains010_talk000() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event20:
        QuestCatKakariko000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'quest/QuestAreaPlains:Animal_HyrulePlains070_Cat000_Q1', 'selfTalkAnimName': 'reaction02,wait02', 'aimToPlayer': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        if !Dialog.GetLastResult4({'resultOnSkip': 3}) {
            QuestCatKakariko000.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains070_Cat000_Q1_A1_010', 'getAttention': False})
        } else {
            QuestCatKakariko000.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains070_Cat000_Q1_A2_010', 'getAttention': False})
        }
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event20
    } else {

        call talk()

    }
}

void Animal_HyrulePlains010_talk() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event34:
        QuestCatKakariko000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'quest/QuestAreaPlains:Animal_HyrulePlains040_Cat000_010', 'selfTalkAnimName': 'reaction01,wait01', 'aimToPlayer': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event34
    } else {

        call talk()

    }
}

void _CatTalk() {

    fork {
        QuestCatKakariko000.Talk({'message': 'message', 'getAttention': False})
    } {
        QuestCatKakariko000.PlayAnimation({'name': 'reaction01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        QuestCatKakariko000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void _CatTalk2() {

    fork {
        QuestCatKakariko000.Talk({'message': 'message', 'getAttention': False})
    } {
        QuestCatKakariko000.PlayAnimation({'name': 'reaction02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        QuestCatKakariko000.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void CatTalk016_KakarikoVillage() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event11:
        QuestCatKakariko000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'scenario/GeneralTalkAnimal:KakarikoVillage000_010', 'aimToPlayer': False, 'selfTalkAnimName': 'reaction02,wait02', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event11
    } else {

        call talk()

    }
}

void Animal_HyrulePlains010_talk000_Other() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event82:
        QuestCatKakariko000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'quest/QuestAreaPlains:Animal_HyrulePlains070_Cat000_Q1_A2_010', 'selfTalkAnimName': 'reaction02,wait02', 'aimToPlayer': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event82
    } else {

        call talk()

    }
}
