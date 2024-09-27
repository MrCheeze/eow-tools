-------- EventFlow: Cat001 --------

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult4']
params: None

Actor: Cat001
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimation', 'PlayOneshotSE', 'CatDoAcitonWait', 'GenericTalkSequence']
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

void talk() {
    Cat001.GenericTalkSequence({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': False, 'keepPersonalSpace': False, 'selfTalkAnimName': '', 'selfTalkAnim': False, 'cameraLookAt': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    Cat001.CatDoAcitonWait()
    Timer.Wait({'time': 1.5})
}

void Special_HyruleCastle010_020() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Cat001.GenericTalkSequenceWithDialog({'aimToPlayer': False, 'playerTalkAnim': False, 'message': 'quest/QuestAreaA:Special_HyruleCastle060_010', 'selfTalkAnimName': '', 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

        fork {
            Cat001.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle060_020', 'getAttention': False})
        } {
            Cat001.PlayAnimation({'name': 'reaction02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } else {

        call talk()

    }
}

void Animal_HyrulePlains010_talk003() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event139:
        Cat001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'message': 'quest/QuestAreaPlains:Animal_HyrulePlains070_Cat003_Q1', 'aimToPlayer': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        if !Dialog.GetLastResult4({'resultOnSkip': 3}) {

            fork {
                Cat001.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains070_Cat003_Q1_A1_010', 'getAttention': False})
            } {
                Cat001.PlayOneshotSE({'label': 'SE_NPC_CAT_REACTION1_01', 'volume': 1.0, 'pitch': 1.0})
            }

        } else {

            fork {
                Cat001.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains070_Cat003_Q1_A2_010', 'getAttention': False})
            } {
                Cat001.PlayOneshotSE({'label': 'SE_NPC_CAT_REACTION2_00', 'volume': 1.0, 'pitch': 1.0})
            }

        }
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event139
    } else {

        call talk()

    }
}

void CatTalk001_HyruleCastle_003() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event17:
        Cat001.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkAnimal:HyruleCastle000_010', 'playerTalkAnim': False, 'selfTalkAnimName': 'reaction01,wait01', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event17
    } else {

        call talk()

    }
}

void CatTalk004_Field_HyruleCastle_001ev() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event25:
        Cat001.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkAnimal:HyruleCastleTown002_010', 'playerTalkAnim': False, 'selfTalkAnimName': 'reaction01,wait01', 'aimToPlayer': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event25
    } else {

        call talk()

    }
}

void CatTalk020_Field_HyrulePlains_002ev() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event29:
        Cat001.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkAnimal:KakarikoVillage003_010', 'selfTalkAnimName': 'reaction02,wait02', 'playerTalkAnim': False, 'aimToPlayer': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event29
    } else {

        call talk()

    }
}

void CatTalk021_KakarikoHouse001_001() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event33:
        Cat001.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkAnimal:KakarikoVillage005_010', 'selfTalkAnimName': 'reaction02,wait02', 'playerTalkAnim': False, 'aimToPlayer': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event33
    } else {

        call talk()

    }
}

void CatTalk024_Church_001ev() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event37:
        Cat001.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkAnimal:Church000_010', 'selfTalkAnimName': 'reaction02,wait02', 'playerTalkAnim': False, 'aimToPlayer': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event37
    } else {

        call talk()

    }
}

void CatTalk003_HyruleHouse004_001() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event45:
        Cat001.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkAnimal:HyruleCastleTown001_010', 'playerTalkAnim': False, 'aimToPlayer': False, 'playerTalkAnimName': '', 'selfTalkAnimName': 'reaction01,wait01', 'aimFromPlayer': True, 'selfTalkAnim': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event45
    } else {

        call talk()

    }
}
