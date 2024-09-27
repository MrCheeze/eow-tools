-------- EventFlow: DekuMerchantBranch01 --------

Actor: QuestSystem
entrypoint: None()
actions: []
queries: ['GetStatus', 'CheckProgress']
params: None

Actor: DekuMerchantBranch
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'SetInstanceVariableBool', 'GenericTalkSequence', 'SetTalkerName']
queries: ['GetInstanceVariableBool']
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: Audio
entrypoint: None()
actions: ['StopSmoothieShopBGM']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

void _DekuMerchantBranchChat() {
    DekuMerchantBranch.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
    switch QuestSystem.GetStatus({'questKey': 'Animal_Coast010'}) {
      case [0, 2]:
        DekuMerchantBranch.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        DekuMerchantBranch.Talk({'message': 'scenario/DekuMerchantTalk:DesertBranchTalk010_010', 'getAttention': False})
        switch QuestSystem.CheckProgress({'symbol': 'Desert:3205882340'}) {
          case 4294967295:
            DekuMerchantBranch.Talk({'message': 'scenario/DekuMerchantTalk:DesertBranchTalk020_010', 'getAttention': False})
            Event36:
            if !EventFlags.CheckFlag({'symbol': 'DekuBrotherTalk'}) {

                call DekuMerchantBranchCommon._EndTalk()

            }
          case [0, 1]:
            goto Event36
        }
      case 1:
        DekuMerchantBranch.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        DekuMerchantBranch.Talk({'message': 'quest/QuestAreaB:Animal_Coast020_050', 'getAttention': False})

        call GeneralSequence.ZeldaTalkMotion()

        Timer.Wait({'time': 0.5})

        fork {
            DekuMerchantBranch.Talk({'message': 'quest/QuestAreaB:Animal_Coast020_060', 'getAttention': False})
        } {
            DekuMerchantBranch.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            DekuMerchantBranch.Talk({'message': 'quest/QuestAreaB:Animal_Coast020_070', 'getAttention': False})
        } {
            DekuMerchantBranch.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            DekuMerchantBranch.Talk({'message': 'quest/QuestAreaB:Animal_Coast020_080', 'getAttention': False})
        } {
            DekuMerchantBranch.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        goto Event36
    }
}

void FirstTalk() {
    if !EventFlags.CheckFlag({'symbol': 'MapIcon_31'}) {
        EventFlags.SetFlag({'symbol': 'MapIcon_31', 'value': True})
    }

    call DekuMerchantBranchCommon.FirstTalk()

    if !DekuMerchantBranch.GetInstanceVariableBool({'name': 'DekuMerchantBranchChat'}) {
        Event40:
        Audio.StopSmoothieShopBGM()
    } else {

        call _DekuMerchantBranchChat()


        call DekuMerchantBranchCommon._TakeOutSmoothie()

        goto Event40
    }
}

void talk010() {
    if !EventFlags.CheckFlag({'symbol': 'MapIcon_31'}) {
        EventFlags.SetFlag({'symbol': 'MapIcon_31', 'value': True})
    }
    DekuMerchantBranch.SetInstanceVariableBool({'name': 'DekuMerchantBranchChat', 'value': False})

    call DekuMerchantBranchCommon.talk010()

    if !DekuMerchantBranch.GetInstanceVariableBool({'name': 'DekuMerchantBranchChat'}) {
        Event41:
        Audio.StopSmoothieShopBGM()
    } else {

        call _DekuMerchantBranchChat()


        call DekuMerchantBranchCommon._TakeOutSmoothie()

        goto Event41
    }
}

void PulledOutTalk() {
    DekuMerchantBranch.GenericTalkSequence({'playerTalkAnim': False, 'keepPersonalSpace': False, 'aimFromPlayer': False, 'selfTalkAnim': False, 'selfTalkAnimName': '', 'aimToPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    DekuMerchantBranch.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
    DekuMerchantBranch.Talk({'message': 'scenario/DekuMerchantTalk:PulleOutTalk_010', 'getAttention': False})
}
