-------- EventFlow: QuestCatKakariko001 --------

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: []
queries: ['CheckOutfit']
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: QuestCatKakariko001
entrypoint: None()
actions: ['GenericTalkSequence', 'Talk', 'Destroy', 'GenericTalkSequenceWithDialog', 'CatDoAcitonWait', 'SetFacialExpression', 'PlayAnimation', 'PlayAnimationEx']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

void talk() {
    QuestCatKakariko001.GenericTalkSequence({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': False, 'keepPersonalSpace': False, 'selfTalkAnimName': '', 'selfTalkAnim': False, 'cameraLookAt': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    QuestCatKakariko001.CatDoAcitonWait()
    Timer.Wait({'time': 1.5})
}

void Animal_HyrulePlains010_080() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event4:
        QuestCatKakariko001.GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnim': True, 'aimToPlayer': False, 'selfTalkAnimName': 'wait02', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})

        fork {
            Timer.Wait({'time': 1.5})
            QuestCatKakariko001.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains080_010', 'getAttention': False})
        } {
            QuestCatKakariko001.PlayAnimationEx({'time': 3.0, 'name': 'reaction02', 'layer': 0, 'blendFrame': -1, 'restart': False})
            QuestCatKakariko001.SetFacialExpression({'expression': 'normal'})
            QuestCatKakariko001.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        QuestCatKakariko001.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains080_020', 'getAttention': False})

        fork {
            Timer.Wait({'time': 1.5})
            QuestCatKakariko001.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains080_030', 'getAttention': False})
        } {
            QuestCatKakariko001.PlayAnimationEx({'time': 3.0, 'name': 'reaction02', 'layer': 0, 'blendFrame': -1, 'restart': False})
            QuestCatKakariko001.PlayAnimation({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        QuestCatKakariko001.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains080_040', 'getAttention': False})
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
        QuestCatKakariko001.Destroy()
        Timer.Wait({'time': 1.0})
        Fade.StartPreset({'preset': 'FadeInNormal'})
        QuestSystem.SetProgress({'symbol': 'Animal_HyrulePlains010:3528446707', 'isShowTelopInEvent': False, 'isFrontFade': False})
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event4
    } else {

        call talk()

    }
}

void Animal_HyrulePlains010_end() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event0:
        QuestCatKakariko001.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkAnimal:KakarikoVillage004_010', 'aimToPlayer': False, 'playerTalkAnim': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event0
    } else {

        call talk()

    }
}
