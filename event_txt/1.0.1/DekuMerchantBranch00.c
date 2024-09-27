-------- EventFlow: DekuMerchantBranch00 --------

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

void _DekuMerchantBranchChat() {
    DekuMerchantBranch.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    DekuMerchantBranch.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
    DekuMerchantBranch.Talk({'message': 'scenario/DekuMerchantTalk:HyrulePlainsBranchTalk010_010', 'getAttention': False})
    if !EventFlags.CheckFlag({'symbol': 'DekuBrotherTalk'}) {

        call DekuMerchantBranchCommon._EndTalk()

    }
}

void FirstTalk() {
    if !EventFlags.CheckFlag({'symbol': 'MapIcon_32'}) {
        EventFlags.SetFlag({'symbol': 'MapIcon_32', 'value': True})
    }
    Event0:

    call DekuMerchantBranchCommon.FirstTalk()

    if !DekuMerchantBranch.GetInstanceVariableBool({'name': 'DekuMerchantBranchChat'}) {
        Event13:
        Audio.StopSmoothieShopBGM()
    } else {

        call _DekuMerchantBranchChat()


        call DekuMerchantBranchCommon._TakeOutSmoothie()

        goto Event13
    }
}

void talk010() {
    if !EventFlags.CheckFlag({'symbol': 'MapIcon_32'}) {
        EventFlags.SetFlag({'symbol': 'MapIcon_32', 'value': True})
    }
    Event5:
    DekuMerchantBranch.SetInstanceVariableBool({'name': 'DekuMerchantBranchChat', 'value': False})

    call DekuMerchantBranchCommon.talk010()

    if !DekuMerchantBranch.GetInstanceVariableBool({'name': 'DekuMerchantBranchChat'}) {
        Event14:
        Audio.StopSmoothieShopBGM()
    } else {

        call _DekuMerchantBranchChat()


        call DekuMerchantBranchCommon._TakeOutSmoothie()

        goto Event14
    }
}

void PulledOutTalk() {
    DekuMerchantBranch.GenericTalkSequence({'playerTalkAnim': False, 'keepPersonalSpace': False, 'aimFromPlayer': False, 'selfTalkAnim': False, 'selfTalkAnimName': '', 'aimToPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    DekuMerchantBranch.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
    DekuMerchantBranch.Talk({'message': 'scenario/DekuMerchantTalk:PulleOutTalk_010', 'getAttention': False})
}

void FirstTalk2() {
    if !EventFlags.CheckFlag({'symbol': 'MapIcon_33'}) {
        EventFlags.SetFlag({'symbol': 'MapIcon_33', 'value': True})
    }
    goto Event0
}

void talk011() {
    if !EventFlags.CheckFlag({'symbol': 'MapIcon_33'}) {
        EventFlags.SetFlag({'symbol': 'MapIcon_33', 'value': True})
    }
    goto Event5
}
