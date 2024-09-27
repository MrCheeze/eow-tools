-------- EventFlow: Cat000 --------

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult4']
params: None

Actor: Cat000
entrypoint: None()
actions: ['PlayOneshotSE', 'CatDoAcitonWait', 'GenericTalkSequenceWithDialog', 'Talk', 'GenericTalkSequence']
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

Actor: Cat000[Cat006]
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'CatDoAcitonWait']
queries: []
params: None

Actor: Cat000[Cat005]
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimationNoWait', 'LookAtTalker', 'CatDoAcitonWait']
queries: []
params: None

void talk() {
    Cat000.GenericTalkSequence({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': False, 'keepPersonalSpace': False, 'selfTalkAnimName': '', 'selfTalkAnim': False, 'cameraLookAt': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    Cat000.CatDoAcitonWait()
    Timer.Wait({'time': 1.5})
}

void Animal_HyrulePlains010_talk001() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event11:
        Cat000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'message': 'quest/QuestAreaPlains:Animal_HyrulePlains070_Cat001_Q1', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        if !Dialog.GetLastResult4({'resultOnSkip': 3}) {

            fork {
                Cat000.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains070_Cat001_Q1_A1_010', 'getAttention': False})
            } {
                Cat000.PlayOneshotSE({'label': 'SE_NPC_CAT_REACTION1_01', 'volume': 1.0, 'pitch': 1.0})
            }

        } else {

            fork {
                Cat000.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains070_Cat001_Q1_A2_010', 'getAttention': False})
            } {
                Cat000.PlayOneshotSE({'label': 'SE_NPC_CAT_REACTION2_00', 'volume': 1.0, 'pitch': 1.0})
            }

        }
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event11
    } else {

        call talk()

    }
}

void Animal_HyrulePlains010_talk002() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event21:
        Cat000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'message': 'quest/QuestAreaPlains:Animal_HyrulePlains070_Cat002_Q1', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        if !Dialog.GetLastResult4({'resultOnSkip': 3}) {

            fork {
                Cat000.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains070_Cat002_Q1_A1_010', 'getAttention': False})
            } {
                Cat000.PlayOneshotSE({'label': 'SE_NPC_CAT_REACTION1_01', 'volume': 1.0, 'pitch': 1.0})
            }

        } else {

            fork {
                Cat000.Talk({'message': 'quest/QuestAreaPlains:Animal_HyrulePlains070_Cat002_Q1_A2_010', 'getAttention': False})
            } {
                Cat000.PlayOneshotSE({'label': 'SE_NPC_CAT_REACTION2_00', 'volume': 1.0, 'pitch': 1.0})
            }

        }
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event21
    } else {

        call talk()

    }
}

void CatTalk012_Field_Wildernesst_004ev() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event53:
        Cat000.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkAnimal:GerudoVillage007_010', 'aimToPlayer': False, 'playerTalkAnim': False, 'selfTalkAnimName': 'reaction01,wait01', 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event53
    } else {

        call talk()

    }
}

void CatTalk007_GerudoHouse003_001ev() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event60:
        Cat000.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkAnimal:GerudoVillage002_010', 'selfTalkAnimName': 'reaction01,wait01', 'aimToPlayer': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event60
    } else {

        call talk()

    }
}

void CatTalk008_GerudoHouse003_001ev() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event65:
        Cat000.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkAnimal:GerudoVillage003_010', 'selfTalkAnimName': 'reaction01,wait01', 'aimToPlayer': False, 'selfTalkAnim': True, 'playerTalkAnim': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event65
    } else {

        call talk()

    }
}

void CatTalk009_GerudoHouse003_001ev() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event69:
        Cat000.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkAnimal:GerudoVillage004_010', 'aimToPlayer': False, 'selfTalkAnimName': 'reaction02,wait02', 'selfTalkAnim': True, 'playerTalkAnim': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event69
    } else {

        call talk()

    }
}

void CatTalk010_GerudoHouse003_001ev() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event74:
        Cat000.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkAnimal:GerudoVillage005_010', 'selfTalkAnimName': 'reaction01,wait01', 'aimToPlayer': False, 'selfTalkAnim': True, 'playerTalkAnim': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event74
    } else {

        call talk()

    }
}

void CatTalk011_Field_Wildernesst_004ev() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event79:
        Cat000.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkAnimal:GerudoVillage006_010', 'selfTalkAnimName': 'reaction01,wait01', 'aimToPlayer': False, 'playerTalkAnim': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event79
    } else {

        call talk()

    }
}

void CatTalk013_Field_Wildernesst_004ev() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event93:
        Cat000.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkAnimal:GerudoVillage008_010', 'aimToPlayer': False, 'playerTalkAnim': False, 'selfTalkAnimName': 'reaction02,wait02', 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event93
    } else {

        call talk()

    }
}

void CatTalk014_OasisTent_001() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event97:
        Cat000.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkAnimal:Oasis000_010', 'selfTalkAnimName': 'reaction01,wait01', 'aimToPlayer': False, 'playerTalkAnim': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event97
    } else {

        call talk()

    }
}

void CatTalk016_Field_Coast_001ev() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event104:
        Cat000.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkAnimal:SeaVillage001_010', 'aimToPlayer': False, 'selfTalkAnim': True, 'playerTalkAnim': False, 'selfTalkAnimName': 'reaction01,wait01', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event104
    } else {

        call talk()

    }
}

void CatTalk018_Field_HyrulePlains_002ev() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event108:
        Cat000.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkAnimal:KakarikoVillage001_010', 'aimToPlayer': False, 'playerTalkAnim': False, 'selfTalkAnimName': 'reaction02,wait02', 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event108
    } else {

        call talk()

    }
}

void CatTalk019_Field_HyrulePlains_002ev() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event112:
        Cat000.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkAnimal:KakarikoVillage002_010', 'selfTalkAnimName': 'reaction01,wait01', 'aimToPlayer': False, 'playerTalkAnim': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event112
    } else {

        call talk()

    }
}

void CatTalk021_Field_HyrulePlains_002ev() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event116:
        Cat000.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkAnimal:KakarikoVillage004_010', 'selfTalkAnimName': 'reaction01,wait01', 'aimToPlayer': False, 'playerTalkAnim': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event116
    } else {

        call talk()

    }
}

void CatTalk023_Field_SouthernVillage_002() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event120:
        Cat000.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkAnimal:SouthernVillage000_010', 'playerTalkAnim': False, 'aimToPlayer': False, 'selfTalkAnimName': 'reaction01,wait01', 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event120
    } else {

        call talk()

    }
}

void CatTalk025_Ranch_001() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event124:
        Cat000.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkAnimal:Ranch000_010', 'selfTalkAnimName': 'reaction01,wait01', 'aimToPlayer': False, 'selfTalkAnim': True, 'playerTalkAnim': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event124
    } else {

        call talk()

    }
}

void CatTalk026_Ranch_001() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event128:
        Cat000.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkAnimal:Ranch001_010', 'aimToPlayer': False, 'playerTalkAnim': False, 'selfTalkAnimName': 'reaction02,wait02', 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event128
    } else {

        call talk()

    }
}

void CatTalk002_HyruleHouse002_001() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event131:
        Cat000.GenericTalkSequenceWithDialog({'aimToPlayer': False, 'playerTalkAnim': False, 'selfTalkAnimName': 'reaction02,wait02', 'message': 'scenario/GeneralTalkAnimal:HyruleCastleTown000_010', 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event131
    } else {

        call talk()

    }
}

void CatTalk005_GerudoHouse003_001ev() {
    if Player.CheckOutfit({'outfit': 'Animal'}) {
        Event135:
        Cat000[Cat005].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': False, 'message': 'scenario/GeneralTalkAnimal:GerudoVillage000_010', 'selfTalkAnimName': 'reaction01,wait01', 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

        fork {
            Cat000[Cat006].Talk({'message': 'scenario/GeneralTalkAnimal:GerudoVillage000_020', 'getAttention': False})
        } {
            Cat000[Cat006].PlayAnimationNoWait({'name': 'reaction02,wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            Cat000[Cat005].Talk({'message': 'scenario/GeneralTalkAnimal:GerudoVillage000_030', 'getAttention': False})
        } {
            Cat000[Cat005].PlayAnimationNoWait({'name': 'reaction01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            Cat000[Cat006].Talk({'message': 'scenario/GeneralTalkAnimal:GerudoVillage000_040', 'getAttention': False})
        } {
            Cat000[Cat006].PlayAnimationNoWait({'name': 'reaction02,wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } else
    if Player.CheckOutfit({'outfit': 'AnimalAnother'}) {
        goto Event135
    } else {

        fork {
            Cat000[Cat005].CatDoAcitonWait()
            Timer.Wait({'time': 1.0})
        } {
            Cat000[Cat005].LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        }

        Cat000[Cat006].CatDoAcitonWait()
        Timer.Wait({'time': 2.5})
    }
}
