-------- EventFlow: DekuMerchantBranch02 --------

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['GetStatus', 'CheckProgress']
params: None

Actor: Player
entrypoint: None()
actions: ['AddItem', 'GenericItemGetSequence', 'RemoveItem']
queries: ['HasItem']
params: None

Actor: DekuMerchantBranch
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'SetInstanceVariableBool', 'GenericTalkSequenceWithDialog', 'GenericTalkSequence', 'AimPlayer', 'PlayAnimation', 'SetFacialExpression', 'KeepAnimationAfterEvent', 'SetComponentActive', 'AimCompassPoint', 'ResetAim', 'AimActor', 'SetTalkerName', 'FacialChange', 'SetInstanceVariableString']
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
    DekuMerchantBranch.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    DekuMerchantBranch.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
    DekuMerchantBranch.Talk({'message': 'scenario/DekuMerchantTalk:CoastBranchTalk010_010', 'getAttention': False})
    switch QuestSystem.CheckProgress({'symbol': 'Coast_River:4211698231'}) {
      case 4294967295:
        DekuMerchantBranch.Talk({'message': 'scenario/DekuMerchantTalk:CoastBranchTalk020_010', 'getAttention': False})
        Event123:
        if !EventFlags.CheckFlag({'symbol': 'DekuBrotherTalk'}) {

            call DekuMerchantBranchCommon._EndTalk()

        }
      case [0, 1]:
        goto Event123
    }
}

void FirstTalk() {
    if !EventFlags.CheckFlag({'symbol': 'MapIcon_30'}) {
        EventFlags.SetFlag({'symbol': 'MapIcon_30', 'value': True})
    }

    call DekuMerchantBranchCommon.FirstTalk()

    if !DekuMerchantBranch.GetInstanceVariableBool({'name': 'DekuMerchantBranchChat'}) {
        Event131:
        Audio.StopSmoothieShopBGM()
    } else {

        call _DekuMerchantBranchChat()


        call DekuMerchantBranchCommon._TakeOutSmoothie()

        goto Event131
    }
}

void talk010() {
    if !EventFlags.CheckFlag({'symbol': 'MapIcon_30'}) {
        EventFlags.SetFlag({'symbol': 'MapIcon_30', 'value': True})
    }
    DekuMerchantBranch.SetInstanceVariableBool({'name': 'DekuMerchantBranchChat', 'value': False})

    call DekuMerchantBranchCommon.talk010()

    if !DekuMerchantBranch.GetInstanceVariableBool({'name': 'DekuMerchantBranchChat'}) {
        Event132:
        Audio.StopSmoothieShopBGM()
    } else {

        call _DekuMerchantBranchChat()


        call DekuMerchantBranchCommon._TakeOutSmoothie()

        goto Event132
    }
}

void Special_Jungle010_010() {

    call EvResetCommon.AllReset()

    DekuMerchantBranch.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})

    fork {
        DekuMerchantBranch.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaF:Special_Jungle010_010', 'aimToPlayer': False, 'facial': 'sleep', 'selfTalkAnim': False, 'selfTalkAnimName': '', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        DekuMerchantBranch.PlayAnimation({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle010_020', 'getAttention': False})
    DekuMerchantBranch.SetComponentActive({'name': 'aimControlComp', 'active': True})
    DekuMerchantBranch.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Timer.Wait({'time': 0.5})
        DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle010_030', 'getAttention': False})
    } {
        DekuMerchantBranch.SetFacialExpression({'expression': 'normal'})
    } {
        DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle010_040', 'getAttention': False})
    } {
        DekuMerchantBranch.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        DekuMerchantBranch.SetFacialExpression({'expression': 'sleep'})
    }

    DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle010_050', 'getAttention': False})
    } {
        DekuMerchantBranch.PlayAnimation({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle010_060', 'getAttention': False})
    DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    DekuMerchantBranch.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'talk', 'facial': '', 'message': 'quest/QuestAreaF:Special_Jungle010_070', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        call Special_Jungle010_Yes()

    } else {

        call Special_Jungle010_No()

        QuestSystem.SetProgress({'symbol': 'Special_Jungle010:1487103687', 'isShowTelopInEvent': False, 'isFrontFade': False})
    }
}

void PulledOutTalk() {
    DekuMerchantBranch.GenericTalkSequence({'playerTalkAnim': False, 'keepPersonalSpace': False, 'aimFromPlayer': False, 'selfTalkAnim': False, 'selfTalkAnimName': '', 'aimToPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    DekuMerchantBranch.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
    DekuMerchantBranch.Talk({'message': 'scenario/DekuMerchantTalk:PulleOutTalk_010', 'getAttention': False})
}

void Special_Jungle010_020() {

    call EvResetCommon.AllReset()

    DekuMerchantBranch.SetComponentActive({'name': 'aimControlComp', 'active': True})
    DekuMerchantBranch.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    DekuMerchantBranch.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
    DekuMerchantBranch.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaF:Special_Jungle020_010', 'playerTalkAnim': False, 'facial': 'sleep', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        call Special_Jungle010_Yes()

    } else {

        call Special_Jungle010_No()

    }
}

void Special_Jungle010_Yes() {
    DekuMerchantBranch.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
    if !Player.HasItem({'itemKey': 'SmoothieIngredient00', 'count': 3, 'index': -1}) {
        DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle020_040', 'getAttention': False})
        } {
            DekuMerchantBranch.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            DekuMerchantBranch.SetFacialExpression({'expression': 'sleep'})
        }

        DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle020_050', 'getAttention': False})
        } {
            DekuMerchantBranch.PlayAnimation({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            DekuMerchantBranch.SetFacialExpression({'expression': 'normal'})
        }

        DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle020_060', 'getAttention': False})
        } {
            DekuMerchantBranch.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            DekuMerchantBranch.SetFacialExpression({'expression': 'sleep'})
        }


        fork {
            DekuMerchantBranch.PlayAnimation({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 0.5})
        }

        DekuMerchantBranch.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        DekuMerchantBranch.ResetAim()
        Timer.Wait({'time': 0.699999988079071})
        DekuMerchantBranch.SetComponentActive({'name': 'aimControlComp', 'active': False})
        DekuMerchantBranch.KeepAnimationAfterEvent()
        if !QuestSystem.GetStatus({'questKey': 'Special_Jungle010'}) {
            QuestSystem.SetProgress({'symbol': 'Special_Jungle010:1487103687', 'isShowTelopInEvent': False, 'isFrontFade': False})
        }
    } else {
        DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Player.RemoveItem({'count': 3, 'itemKey': 'SmoothieIngredient00', 'index': -1})

        fork {
            DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle030_010', 'getAttention': False})
        } {
            DekuMerchantBranch.PlayAnimation({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            DekuMerchantBranch.SetFacialExpression({'expression': 'normal'})
        }

        DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle030_020', 'getAttention': False})
        } {
            DekuMerchantBranch.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            DekuMerchantBranch.SetFacialExpression({'expression': 'sleep'})
        }


        fork {
            DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle030_030', 'getAttention': False})
        } {
            DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle030_040', 'getAttention': False})
        } {
            DekuMerchantBranch.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            DekuMerchantBranch.SetFacialExpression({'expression': 'normal'})
        }

        DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle030_050', 'getAttention': False})
        } {
            DekuMerchantBranch.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Player.AddItem({'itemKey': 'RupeeRed', 'count': 1, 'index': -1, 'autoEquip': False})
        Player.GenericItemGetSequence({'itemKey': 'RupeeRed', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})

        fork {
            DekuMerchantBranch.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaF:Special_Jungle030_060', 'facial': '', 'selfTalkAnimName': 'happy', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Partner[companion].AimActor({'actor': ActorIdentifier(name="DekuMerchantBranch"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
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

        } {
            DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle030_070', 'getAttention': False})
        }

        DekuMerchantBranch.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait_smoothie'})
        DekuMerchantBranch.FacialChange()
        QuestSystem.SetProgress({'symbol': 'Special_Jungle010:1676762858', 'isShowTelopInEvent': False, 'isFrontFade': False})
    }
}

void Special_Jungle010_No() {
    DekuMerchantBranch.SetTalkerName({'message': 'glossary/Character:DekuMerchant', 'keep': False})
    DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle020_020', 'getAttention': False})
    } {
        DekuMerchantBranch.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        DekuMerchantBranch.SetFacialExpression({'expression': 'sleep'})
    }

    DekuMerchantBranch.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        DekuMerchantBranch.Talk({'message': 'quest/QuestAreaF:Special_Jungle020_030', 'getAttention': False})
    } {
        DekuMerchantBranch.PlayAnimation({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    DekuMerchantBranch.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    DekuMerchantBranch.ResetAim()
    Timer.Wait({'time': 0.699999988079071})
    DekuMerchantBranch.SetComponentActive({'name': 'aimControlComp', 'active': False})
    DekuMerchantBranch.KeepAnimationAfterEvent()
}
