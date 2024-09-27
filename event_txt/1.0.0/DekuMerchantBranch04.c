-------- EventFlow: DekuMerchantBranch04 --------

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AddItemAndGenericItemGetSequence']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['RemoveItem']
queries: ['HasItem']
params: None

Actor: DekuMerchantBranch
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'SetInstanceVariableBool', 'GenericTalkSequence', 'GenericTalkSequenceWithDialog', 'PlayAnimation', 'SetFacialExpression', 'KeepAnimationAfterEvent', 'SetComponentActive', 'AimCompassPoint', 'AimActor', 'SetTalkerName', 'FacialChange', 'SetInstanceVariableString']
queries: ['GetInstanceVariableBool']
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

Actor: Audio
entrypoint: None()
actions: ['StopSmoothieShopBGM']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

void _DekuMerchantBranchChat() {
    DekuMerchantBranch.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
    DekuMerchantBranch.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    DekuMerchantBranch.Talk({'message': 'scenario/DekuMerchantTalk:HebraMountainsBranchTalk010_010', 'getAttention': False})
    if !EventFlags.CheckFlag({'symbol': 'DekuBrotherTalk'}) {

        call DekuMerchantBranchCommon._EndTalk()

    }
}

void FirstTalk() {
    if !EventFlags.CheckFlag({'symbol': 'MapIcon_35'}) {
        EventFlags.SetFlag({'symbol': 'MapIcon_35', 'value': True})
    }

    call DekuMerchantBranchCommon.FirstTalk()

    if !DekuMerchantBranch.GetInstanceVariableBool({'name': 'DekuMerchantBranchChat'}) {
        Event47:
        Audio.StopSmoothieShopBGM()
    } else {

        call _DekuMerchantBranchChat()


        call DekuMerchantBranchCommon._TakeOutSmoothie()

        goto Event47
    }
}

void talk010() {
    if !EventFlags.CheckFlag({'symbol': 'MapIcon_35'}) {
        EventFlags.SetFlag({'symbol': 'MapIcon_35', 'value': True})
    }
    DekuMerchantBranch.SetInstanceVariableBool({'name': 'DekuMerchantBranchChat', 'value': False})

    call DekuMerchantBranchCommon.talk010()

    if !DekuMerchantBranch.GetInstanceVariableBool({'name': 'DekuMerchantBranchChat'}) {
        Event53:
        Audio.StopSmoothieShopBGM()
    } else {

        call _DekuMerchantBranchChat()


        call DekuMerchantBranchCommon._TakeOutSmoothie()

        goto Event53
    }
}

void PulledOutTalk() {
    DekuMerchantBranch.GenericTalkSequence({'playerTalkAnim': False, 'keepPersonalSpace': False, 'aimFromPlayer': False, 'selfTalkAnim': False, 'selfTalkAnimName': '', 'aimToPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    DekuMerchantBranch.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
    DekuMerchantBranch.Talk({'getAttention': False, 'message': 'scenario/DekuMerchantTalk:PulleOutTalk_010'})
}

void Special_Jungle050_010() {

    call EvResetCommon.AllReset()

    DekuMerchantBranch.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
    DekuMerchantBranch.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaF:Special_Jungle050_010', 'facial': 'sleep', 'selfTalkAnimName': 'sad', 'aimToPlayer': False, 'selfTalkAnim': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle050_020', 'getAttention': False})
    DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle050_030', 'getAttention': False})
    DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle050_040', 'getAttention': False})
    DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle050_050', 'getAttention': False})
    DekuMerchantBranch.KeepAnimationAfterEvent()
    QuestSystem.SetProgress({'symbol': 'Special_Jungle050:3274843345', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Special_Jungle050_020() {

    call EvResetCommon.AllReset()

    DekuMerchantBranch.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
    DekuMerchantBranch.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaF:Special_Jungle060_010', 'facial': 'sleep', 'selfTalkAnim': True, 'selfTalkAnimName': 'sad', 'aimToPlayer': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        call Special_Jungle50_Yes()

    } else {

        call Special_Jungle050_No()

    }
}

void Special_Jungle50_Yes() {
    DekuMerchantBranch.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
    if !Player.HasItem({'itemKey': 'SmoothieIngredient11', 'count': 1, 'index': -1}) {
        DekuMerchantBranch.SetComponentActive({'name': 'aimControlComp', 'active': True})
        DekuMerchantBranch.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle060_030', 'getAttention': False})
        DekuMerchantBranch.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        DekuMerchantBranch.SetComponentActive({'name': 'aimControlComp', 'active': False})
        DekuMerchantBranch.KeepAnimationAfterEvent()
    } else {
        Player.RemoveItem({'itemKey': 'SmoothieIngredient11', 'count': 1, 'index': -1})
        DekuMerchantBranch.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle070_010', 'getAttention': False})
        DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle070_020', 'getAttention': False})
        } {
            DekuMerchantBranch.PlayAnimation({'name': 'surprise_st,surprise_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            DekuMerchantBranch.SetFacialExpression({'expression': 'normal'})
        }

        DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle070_030', 'getAttention': False})
        } {
            DekuMerchantBranch.PlayAnimation({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle070_040', 'getAttention': False})
        } {
            DekuMerchantBranch.SetFacialExpression({'expression': 'sleep'})
        } {
            DekuMerchantBranch.PlayAnimation({'name': 'laugh', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle070_050', 'getAttention': False})
        } {
            DekuMerchantBranch.PlayAnimation({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle070_060', 'getAttention': False})
        } {
            DekuMerchantBranch.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            DekuMerchantBranch.SetFacialExpression({'expression': 'normal'})
        }

        DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'SmoothieIngredient04', 'count': 10, 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})

        fork {
            DekuMerchantBranch.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaF:Special_Jungle070_070', 'selfTalkAnimName': 'happy', 'facial': 'sleep', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Partner[companion].AimActor({'offsetX': -1.5, 'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="DekuMerchantBranch"), 'withoutTurn': False, 'boneName': '', 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            DekuMerchantBranch.PlayAnimation({'name': 'laugh', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle070_080', 'getAttention': False})
        } {
            DekuMerchantBranch.PlayAnimation({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            DekuMerchantBranch.SetFacialExpression({'expression': 'normal'})
        }


        fork {
            DekuMerchantBranch.PlayAnimation({'name': 'take_out,wait_smoothie', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 0.30000001192092896})

            fork {
                DekuMerchantBranch.SetComponentActive({'name': 'DekuSmoothie_R', 'active': True})
            } {
                DekuMerchantBranch.SetComponentActive({'name': 'DekuSmoothie_L', 'active': True})
            }

        }

        DekuMerchantBranch.FacialChange()
        DekuMerchantBranch.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait_smoothie'})
        QuestSystem.SetProgress({'symbol': 'Special_Jungle050:4167048444', 'isShowTelopInEvent': False, 'isFrontFade': False})
    }
}

void Special_Jungle050_No() {
    DekuMerchantBranch.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
    DekuMerchantBranch.SetComponentActive({'name': 'aimControlComp', 'active': True})
    DekuMerchantBranch.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle060_020', 'getAttention': False})

    fork {
        DekuMerchantBranch.PlayAnimation({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        DekuMerchantBranch.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        DekuMerchantBranch.SetFacialExpression({'expression': 'sleep'})
    }

    DekuMerchantBranch.SetComponentActive({'name': 'aimControlComp', 'active': False})
    DekuMerchantBranch.KeepAnimationAfterEvent()
}
