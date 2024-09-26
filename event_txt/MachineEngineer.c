-------- EventFlow: MachineEngineer --------

Actor: MachineEngineer
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'TalkKeep', 'PlayAnimation', 'SetFacialExpression', 'PlayAnimationNoWait', 'ResetFacialExpression', 'AimPlayer', 'LookAtTalkersLinkedPoint', 'Destroy', 'SetTalkerName', 'Reset', 'AimCompassPoint', 'WarpToLinkedPoint', 'LookAtTalker', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel', 'SetInterestIkEnabled', 'AimActorLinkedPoint', 'GenericTalkSequence', 'AimActor', 'AimToInitialAngle', 'SkipAutoTurn', 'SetInstanceVariableString']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['Show', 'ShowKeep', 'SetInt']
queries: ['GetConditionResult', 'GetLastResult']
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckMessgaeFlag', 'CheckFlag']
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress', 'Close', 'Open', 'AddProgress']
queries: ['CheckProgress', 'GetStatus']
params: None

Actor: Player
entrypoint: None()
actions: ['PreloadKarakuriActor', 'DestroyKarakuriActor', 'PlayAnimationEx', 'PlayAnimation', 'AimCompassPoint', 'LookAtItemGettingPlayer', 'SetFacialExpression', 'SetEquipmentVisibility', 'CarryKarakuriActor', 'StopKarakuriActorCarryEffect', 'AbsorbAllPastedActors', 'WarpToActorLinkedPoint', 'RemoveItem', 'GenericItemGetSequence', 'MoveToTargetActor', 'AimActor', 'SetInterestIkEnabled', 'AimActorLinkedPoint', 'AddItem', 'AddItemAndGenericItemGetSequence', 'ResetFacialExpression']
queries: ['HasItem']
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestAutoSave', 'SetForcedResolution', 'ResetForcedResolution']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: []
queries: ['Branch']
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: KarakuriUI
entrypoint: None()
actions: ['RepairSelectedKarakuri', 'RepairSelectedKarakuriSequence', 'PaySelectedRepairPrice', 'ShowRepairList']
queries: ['GetSelectedRepairMachine', 'IsRepairEnable', 'CheckSelectedRepairCost']
params: None

Actor: Zelda
entrypoint: None()
actions: ['GenericItemGetSequence', 'GetKarakuri']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayJingle', 'PlayOneshotSystemSE', 'StopAllBGM', 'PlayZoneBGM', 'StopRegionBgm', 'PlayBGM', 'SetBGMVolume', 'Prepare']
queries: []
params: None

Actor: Hud
entrypoint: None()
actions: ['ShowMachineCoupon', 'ShowRupee', 'ReflectCurrentNumKarakuriCoupon']
queries: []
params: None

Actor: TutorialUI
entrypoint: None()
actions: ['ShowModal']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Shake', 'Reset']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['AimCompassPoint', 'SetInterestIkEnabled', 'EnableAutoMovement', 'MoveToDefaultPosition', 'WarpToDefaultPosition', 'AimActor', 'PlayAnimationNoWait']
queries: []
params: None

Actor: Environment
entrypoint: None()
actions: ['StashSaveIntensity', 'StashPopIntensity']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor', 'SetInterestIkEnabled', 'EnableAutoMovement', 'ResetAim']
queries: []
params: None

void Quest_1() {

    fork {
        Fade.StartPreset({'preset': 'FadeInNormal'})
    } {
        Player.MoveToTargetActor({'speed': 0, 'distance': 3.0, 'actor': ActorIdentifier(name="Player"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    MachineEngineer.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains040_010', 'facial': 'smile', 'keepTalk': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    MachineEngineer.SetInterestIkEnabled({'enable': False})

    fork {
        MachineEngineer.SetFacialExpression({'expression': 'smile'})
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains040_020', 'getAttention': False})
    }


    fork {
        MachineEngineer.ResetFacialExpression()
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains040_025', 'getAttention': False})
    }

    MachineEngineer.PlayAnimationNoWait({'name': 'give', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.AddItemAndGenericItemGetSequence({'itemKey': 'SmoothieIngredient11', 'count': 5, 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})
    MachineEngineer.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MachineEngineer.GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})

    fork {

        fork {
            MachineEngineer.SetFacialExpression({'expression': 'smile'})
        } {
            MachineEngineer.PlayAnimationNoWait({'name': 'happy,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains040_030', 'getAttention': False})
        }


        fork {
            MachineEngineer.ResetFacialExpression()
        } {
            MachineEngineer.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains040_040', 'getAttention': False})
        }


        fork {
            MachineEngineer.SetFacialExpression({'expression': 'smile'})
        } {
            MachineEngineer.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains040_050', 'getAttention': False})
        }

    } {
        Partner.MoveToDefaultPosition({'speed': 1, 'position': 1, 'avoidPlayer': True, 'tolerance': 0.0, 'avoidWall': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Partner.EnableAutoMovement()
    }


    fork {
        MachineEngineer.SetFacialExpression({'expression': 'sleep'})
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    Timer.Wait({'time': 1.0})

    fork {
        MachineEngineer.SetFacialExpression({'expression': 'angry'})
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains040_060', 'getAttention': False})
        Timer.Wait({'time': 1.0})
        MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains040_070', 'getAttention': False})
    }

    MachineEngineer.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MachineEngineer.SetInterestIkEnabled({'enable': False})
    MachineEngineer.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        MachineEngineer.ResetFacialExpression()
    } {
        MachineEngineer.PlayAnimation({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains040_080', 'getAttention': False})
    }


    fork {
        MachineEngineer.SetFacialExpression({'expression': 'smile'})
    } {
        MachineEngineer.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains040_090', 'getAttention': False})
    }


    fork {
        MachineEngineer.ResetFacialExpression()
    } {
        MachineEngineer.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains040_095', 'getAttention': False})
    }

    Timer.Wait({'time': 1.0})

    fork {
        MachineEngineer.SetFacialExpression({'expression': 'sad'})
    } {
        MachineEngineer.PlayAnimation({'name': 'sad_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains040_100', 'getAttention': False})
    }


    fork {
        MachineEngineer.SetFacialExpression({'expression': 'sad'})
    } {
        MachineEngineer.PlayAnimation({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains040_110', 'getAttention': False})
    }


    fork {
        MachineEngineer.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains040_120', 'getAttention': False})
    }


    fork {
        MachineEngineer.ResetFacialExpression()
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains040_140', 'getAttention': False})
    }


    fork {
        MachineEngineer.SetFacialExpression({'expression': 'sleep'})
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains040_130', 'getAttention': False})
    }


    fork {
        MachineEngineer.SetFacialExpression({'expression': 'sad'})
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains040_150', 'getAttention': False})
    }

    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        call TekMachineHint()

    } else {

        fork {
            MachineEngineer.SetFacialExpression({'expression': 'sad'})
        } {
            MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains050_040', 'getAttention': False})
        }

        QuestSystem.SetProgress({'symbol': 'Machine_HyrulePlains010:874958607', 'isShowTelopInEvent': False, 'isFrontFade': False})
    }
}

void _MachineEngineerChat() {
    MachineEngineer.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'selfTalkAnimName': 'talk', 'facial': 'smile', 'message': 'scenario/MachineEngineerTalk:MachineEngineerTalk_Q1_A5_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void _MachineEngineerBye() {
    MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineEngineerTalk_Q1_A6_010', 'getAttention': False})
}

void _PriceCheck() {
    MachineEngineer.ResetFacialExpression()
    MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineRepairing_020', 'getAttention': False})
}

void Quest_0_1() {
    MachineEngineer.SetInterestIkEnabled({'enable': False})
    MachineEngineer.GenericTalkSequenceWithDialog({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains020_010', 'playerTalkAnim': False, 'facial': 'sad', 'selfTalkAnimName': 'no,wait', 'keepTalk': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})

    fork {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains020_020', 'getAttention': False})
    } {
        MachineEngineer.PlayAnimation({'name': 'sad_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    MachineEngineer.AimToInitialAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
}

void KarakuriGetSequence() {

    fork {
        Player.PreloadKarakuriActor({'karakuriId': 'karakuriId'})
        Timer.Wait({'time': 0.05000000074505806})

        fork {
            Player.AimCompassPoint({'direction': 0, 'withoutTurn': False, 'duration': 0.4000000059604645, 'immediateTurn': False})
        } {
            Player.PlayAnimationEx({'layer': 0, 'name': '$item_get_st', 'time': 0.4000000059604645, 'blendFrame': -1, 'restart': False})
        } {
            Player.SetEquipmentVisibility({'visibility': False})
        } {
            Timer.Wait({'time': 0.10000000149011612})
            Player.SetFacialExpression({'expression': 'get'})
        }

    } {
        Player.LookAtItemGettingPlayer({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }


    fork {
        Partner[companion].SetInterestIkEnabled({'enable': True})
        Partner[companion].AimActor({'boneName': 'attach_object', 'duration': 0.30000001192092896, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.CarryKarakuriActor()
        GameControl.SetForcedResolution({'console': 19201080, 'handheld': 12800720})
    }

}

void Quest_0_1_1() {
    QuestSystem.SetProgress({'symbol': 'Machine_HyrulePlains010:1868654659', 'isShowTelopInEvent': False, 'isFrontFade': False})

    call DanpeiFirstDemo()

}

void Quest_0_2() {
    Audio.StopAllBGM({'duration': 1.0})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})

    call EvResetCommon.AllReset()

    MachineEngineer.SetInterestIkEnabled({'enable': False})

    fork {
        MachineEngineer.LookAtTalker({'duration': 0.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {
        MachineEngineer.AimPlayer({'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="MachineEngineer"), 'offsetY': 0.0})
    } {
        Player.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="MachineEngineer"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner.WarpToDefaultPosition({'avoidPlayer': True, 'position': 1, 'avoidWall': False})
    Partner.AimActor({'actor': ActorIdentifier(name="MachineEngineer"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner.EnableAutoMovement()
    Player.PlayAnimation({'name': '', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.10000000149011612})
    Player.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    MachineEngineer.SetTalkerName({'message': 'glossary/Character:MachineEngineer', 'keep': False})
    MachineEngineer.SetInterestIkEnabled({'enable': False})

    fork {
        MachineEngineer.SetFacialExpression({'expression': 'smile'})
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'happy,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains030_010', 'getAttention': False})
    } {
        Audio.PlayBGM({'label': 'BGM_KARAKURI_HOUSE', 'ignoreSkip': False, 'volume': 1.0})
    }


    fork {
        MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains030_050', 'getAttention': False})
    } {
        MachineEngineer.ResetFacialExpression()
    }


    fork {
        MachineEngineer.SetFacialExpression({'expression': 'sleep'})
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'happy,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains030_060', 'getAttention': False})
    }


    fork {
        MachineEngineer.SetFacialExpression({'expression': 'smile'})
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'laugh', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains030_070', 'getAttention': False})
    }


    fork {
        MachineEngineer.ResetFacialExpression()
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains030_080', 'getAttention': False})
    }


    fork {
        MachineEngineer.SetFacialExpression({'expression': 'sleep'})
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains030_090', 'getAttention': False})
    }


    fork {
        MachineEngineer.SetFacialExpression({'expression': 'smile'})
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains030_100', 'getAttention': False})
    } {
        MachineEngineer.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains030_105', 'getAttention': False})
    }

    MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains030_110', 'getAttention': False})

    fork {
        MachineEngineer.SetFacialExpression({'expression': 'normal'})
    } {
        MachineEngineer.PlayAnimation({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains030_120', 'getAttention': False})
    }

    Audio.StopAllBGM({'duration': 1.0})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    MachineEngineer.Destroy()
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    QuestSystem.SetProgress({'symbol': 'Machine_HyrulePlains010:1145846656', 'isShowTelopInEvent': False, 'isFrontFade': False})
    Audio.PlayZoneBGM({'stopbgm': False})
}

void OctMachine_A() {

    call QuestACommon({'isDekMachine': False, 'MainQuest': 'OctMachine_HyrulePlains010', 'MachineMaking00': 'scenario/MachineEngineerTalk:MachineMaking_Create_Oct_010', 'MachineMaking01': 'scenario/MachineEngineerTalk:MachineMaking_Create_Oct_020', 'NameMachine': 'scenario/MachineEngineerTalk:MachineCreated_Oct_010', 'karakuriId': 'Octorok', 'GetMachine': 'ItemGet:MachineActor00', 'isOctMachineA': True, 'MachineExplain00': 'scenario/MachineEngineerTalk:MachineCreated_Oct_020', 'QuestA': 'OctMachine_A', 'isCroMachineA': False, 'Main_is020': 'OctMachine_HyrulePlains010:2293669442'})

}

void OctMachine_B() {

    call QuestACommon({'isDekMachine': False, 'MainQuest': 'OctMachine_HyrulePlains010', 'QuestA': 'OctMachine_B', 'MachineMaking00': 'scenario/MachineEngineerTalk:MachineMaking_Create_Oct_010', 'MachineMaking01': 'scenario/MachineEngineerTalk:MachineMaking_Create_Oct_020', 'NameMachine': 'scenario/MachineEngineerTalk:MachineCreated_Oct_010', 'karakuriId': 'Octorok', 'GetMachine': 'ItemGet:MachineActor00', 'isOctMachineA': True, 'MachineExplain00': 'scenario/MachineEngineerTalk:MachineCreated_Oct_020', 'isCroMachineA': False, 'Main_is020': 'OctMachine_HyrulePlains010:2293669442'})

}

void TekMachine_A() {

    call ShowActor()

    switch QuestSystem.CheckProgress({'symbol': 'Machine_HyrulePlains010:303471622'}) {
      case 4294967295:

        fork {
            QuestSystem.Close({'questKey': 'TekMachine_A', 'isShowTelopInEvent': False, 'isFrontFade': False})
        } {
            QuestSystem.AddProgress({'questKey': 'Machine_HyrulePlains010', 'isForceShowTelop': True, 'value': 1, 'isShowTelopInEvent': False, 'isFrontFade': False})
        }


        call onemore()

      case [0, 1]:
        QuestSystem.Close({'questKey': 'TekMachine_A', 'isShowTelopInEvent': False, 'isFrontFade': False})

        call ReadyMakeMachine()


        call MakeTektightMachine()

    }
}

void TekMachine_B() {

    call ShowActor()

    switch QuestSystem.CheckProgress({'symbol': 'Machine_HyrulePlains010:303471622'}) {
      case 4294967295:

        fork {
            QuestSystem.AddProgress({'questKey': 'Machine_HyrulePlains010', 'isForceShowTelop': True, 'value': 1, 'isShowTelopInEvent': False, 'isFrontFade': False})
        } {
            QuestSystem.Close({'questKey': 'TekMachine_B', 'isShowTelopInEvent': False, 'isFrontFade': False})
        }


        call onemore()

      case [0, 1]:
        QuestSystem.Close({'questKey': 'TekMachine_B', 'isShowTelopInEvent': False, 'isFrontFade': False})

        call ReadyMakeMachine()


        call MakeTektightMachine()

    }
}

void KarakuriGetSequence_ed() {

    fork {
        Player.StopKarakuriActorCarryEffect()
    } {
        Timer.Wait({'time': 0.08299999684095383})
    }

    GameControl.ResetForcedResolution()
    Player.DestroyKarakuriActor()

    fork {
        Player.PlayAnimation({'layer': 0, 'name': '$item_get_ed', 'blendFrame': -1, 'restart': False})
    } {
        Partner.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Player.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner.SetInterestIkEnabled({'enable': True})
    } {
        Player.SetInterestIkEnabled({'enable': True})
    }

    Partner[companion].SetInterestIkEnabled({'enable': False})

    fork {
        Player.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].ResetAim()
        Partner[companion].EnableAutoMovement()
    } {
        Player.ResetFacialExpression()
    }

    Timer.Wait({'time': 0.10000000149011612})
}

void KarakuriGetSequence_00() {

    fork {
        Audio.PlayJingle({'label': 'BGM_FANFARE_ITEM_GET_SMALL', 'volume': 1.0, 'ignoreSkip': True})
    } {
        Timer.Wait({'time': 1.0})
        Dialog.Show({'message': 'ItemGet:MachineActor00'})
    }


    call KarakuriGetSequence_ed()

}

void KarakuriGetSequence_01() {

    fork {
        Audio.PlayJingle({'label': 'BGM_FANFARE_ITEM_GET_SMALL', 'volume': 1.0, 'ignoreSkip': True})
    } {
        Timer.Wait({'time': 1.0})
        Dialog.Show({'message': 'ItemGet:MachineActor01'})
    }


    call KarakuriGetSequence_ed()

}

void KarakuriGetSequence_02() {

    fork {
        Audio.PlayJingle({'label': 'BGM_FANFARE_ITEM_GET_SMALL', 'volume': 1.0, 'ignoreSkip': True})
    } {
        Timer.Wait({'time': 1.0})
        Dialog.Show({'message': 'ItemGet:MachineActor02'})
    }


    call KarakuriGetSequence_ed()

}

void KarakuriGetSequence_03() {

    fork {
        Audio.PlayJingle({'label': 'BGM_FANFARE_ITEM_GET_SMALL', 'volume': 1.0, 'ignoreSkip': True})
    } {
        Timer.Wait({'time': 1.0})
        Dialog.Show({'message': 'ItemGet:MachineActor03'})
    }


    call KarakuriGetSequence_ed()

}

void KarakuriGetSequence_04() {

    fork {
        Audio.PlayJingle({'label': 'BGM_FANFARE_ITEM_GET_SMALL', 'volume': 1.0, 'ignoreSkip': True})
    } {
        Timer.Wait({'time': 1.0})
        Dialog.Show({'message': 'ItemGet:MachineActor04'})
    }


    call KarakuriGetSequence_ed()

}

void KarakuriGetSequence_05() {

    fork {
        Audio.PlayJingle({'label': 'BGM_FANFARE_ITEM_GET_SMALL', 'volume': 1.0, 'ignoreSkip': True})
    } {
        Timer.Wait({'time': 1.0})
        Dialog.Show({'message': 'ItemGet:MachineActor05'})
    }


    call KarakuriGetSequence_ed()

}

void MachineEngineerTalk_Create() {

    call EvResetCommon.AllReset()

    MachineEngineer.GenericTalkSequenceWithDialog({'selfTalkAnimName': 'talk', 'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/MachineEngineerTalk:MachineEngineerTalk_Q2_010', 'facial': 'normal', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetConditionResult({'resultOnSkip': 0}) {
      case 0:

        call Lack_00()

      case 1:

        call QuestBCommon({'MainQuest': 'ZolMachine_HyrulePlains010', 'QuestA': 'ZolMachine_A', 'GetMachineUnlock': 'GetMachineUnlock03', 'giveItemCheck': 'scenario/MachineEngineerTalk:MachineUnlockCheck_Zol_010', 'QuestB': 'ZolMachine_B', 'MachineMaking00': 'scenario/MachineEngineerTalk:MachineMaking_Create_Zol_010', 'MachineMaking01': 'scenario/MachineEngineerTalk:MachineMaking_Create_Zol_020', 'NameMachine': 'scenario/MachineEngineerTalk:MachineCreated_Zol_010', 'karakuriId': 'Zol', 'GetMachine': 'ItemGet:MachineActor02', 'MachineExplain': 'scenario/MachineEngineerTalk:MachineCreated_Zol_020', 'isCroMachine': False, 'Main_is020': 'ZolMachine_HyrulePlains010:3673903907', 'isDekMachine': False})

      case 2:

        call QuestBCommon({'MainQuest': 'DekMachine_HyrulePlains010', 'QuestA': 'DekMachine_A', 'GetMachineUnlock': 'GetMachineUnlock01', 'giveItemCheck': 'scenario/MachineEngineerTalk:MachineUnlockCheck_Dek_010', 'QuestB': 'DekMachine_B', 'MachineMaking00': 'scenario/MachineEngineerTalk:MachineMaking_Create_Dek_010', 'MachineMaking01': 'scenario/MachineEngineerTalk:MachineMaking_Create_Dek_020', 'NameMachine': 'scenario/MachineEngineerTalk:MachineCreated_Dek_010', 'karakuriId': 'Dekubaba', 'GetMachine': 'ItemGet:MachineActor03', 'MachineExplain': 'scenario/MachineEngineerTalk:MachineCreated_Dek_020', 'isCroMachine': False, 'Main_is020': 'DekMachine_HyrulePlains010:2012856233', 'isDekMachine': True})

      case 3:

        call QuestBCommon({'MainQuest': 'MorMachine_HyrulePlains010', 'QuestA': 'MorMachine_A', 'GetMachineUnlock': 'GetMachineUnlock00', 'giveItemCheck': 'scenario/MachineEngineerTalk:MachineUnlockCheck_Mor_010', 'QuestB': 'MorMachine_B', 'MachineMaking00': 'scenario/MachineEngineerTalk:MachineMaking_Create_Mor_010', 'MachineMaking01': 'scenario/MachineEngineerTalk:MachineMaking_Create_Mor_020', 'NameMachine': 'scenario/MachineEngineerTalk:MachineCreated_Mor_010', 'karakuriId': 'Moriblin', 'GetMachine': 'ItemGet:MachineActor04', 'MachineExplain': 'scenario/MachineEngineerTalk:MachineCreated_Mor_020', 'isCroMachine': False, 'Main_is020': 'MorMachine_HyrulePlains010:209318255', 'isDekMachine': False})

      case 4:

        call QuestBCommon({'MainQuest': 'CroMachine_HyrulePlains010', 'QuestA': 'CroMachine_A', 'GetMachineUnlock': 'GetMachineUnlock02', 'giveItemCheck': 'scenario/MachineEngineerTalk:MachineUnlockCheck_Cro_010', 'QuestB': 'CroMachine_B', 'MachineMaking00': 'scenario/MachineEngineerTalk:MachineMaking_Create_Cro_010', 'MachineMaking01': 'scenario/MachineEngineerTalk:MachineMaking_Create_Cro_020', 'NameMachine': 'scenario/MachineEngineerTalk:MachineCreated_Cro_010', 'karakuriId': 'Crowly', 'GetMachine': 'ItemGet:MachineActor05', 'MachineExplain': 'scenario/MachineEngineerTalk:MachineCreated_Cro_020', 'isCroMachine': True, 'Main_is020': 'CroMachine_HyrulePlains010:2963433053', 'isDekMachine': False})

      case 5:
        MachineEngineer.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/MachineEngineerTalk:MachineEngineerTalk_Q1_A6_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
}

void ZolMachine_A() {

    call QuestACommon({'MainQuest': 'ZolMachine_HyrulePlains010', 'QuestA': 'ZolMachine_A', 'MachineMaking00': 'scenario/MachineEngineerTalk:MachineMaking_Create_Zol_010', 'MachineMaking01': 'scenario/MachineEngineerTalk:MachineMaking_Create_Zol_020', 'NameMachine': 'scenario/MachineEngineerTalk:MachineCreated_Zol_010', 'karakuriId': 'Zol', 'GetMachine': 'ItemGet:MachineActor02', 'MachineExplain00': 'scenario/MachineEngineerTalk:MachineCreated_Zol_020', 'isDekMachine': False, 'isOctMachineA': False, 'isCroMachineA': False, 'Main_is020': 'ZolMachine_HyrulePlains010:3673903907'})

}

void DekMachine_A() {

    call QuestACommon({'MainQuest': 'DekMachine_HyrulePlains010', 'QuestA': 'DekMachine_A', 'MachineMaking00': 'scenario/MachineEngineerTalk:MachineMaking_Create_Dek_010', 'MachineMaking01': 'scenario/MachineEngineerTalk:MachineMaking_Create_Dek_020', 'NameMachine': 'scenario/MachineEngineerTalk:MachineCreated_Dek_010', 'karakuriId': 'Dekubaba', 'GetMachine': 'ItemGet:MachineActor03', 'MachineExplain00': 'scenario/MachineEngineerTalk:MachineCreated_Dek_020', 'isDekMachine': True, 'isOctMachineA': False, 'isCroMachineA': False, 'Main_is020': 'DekMachine_HyrulePlains010:2012856233'})

}

void MorMachine_A() {

    call QuestACommon({'MainQuest': 'MorMachine_HyrulePlains010', 'QuestA': 'MorMachine_A', 'MachineMaking00': 'scenario/MachineEngineerTalk:MachineMaking_Create_Mor_010', 'MachineMaking01': 'scenario/MachineEngineerTalk:MachineMaking_Create_Mor_020', 'NameMachine': 'scenario/MachineEngineerTalk:MachineCreated_Mor_010', 'karakuriId': 'Moriblin', 'GetMachine': 'ItemGet:MachineActor04', 'MachineExplain00': 'scenario/MachineEngineerTalk:MachineCreated_Mor_020', 'isDekMachine': False, 'isOctMachineA': False, 'isCroMachineA': False, 'Main_is020': 'MorMachine_HyrulePlains010:209318255'})

}

void CroMachine_A() {

    call QuestACommon({'isDekMachine': False, 'isOctMachineA': False, 'MainQuest': 'CroMachine_HyrulePlains010', 'QuestA': 'CroMachine_A', 'MachineMaking00': 'scenario/MachineEngineerTalk:MachineMaking_Create_Cro_010', 'MachineMaking01': 'scenario/MachineEngineerTalk:MachineMaking_Create_Cro_020', 'NameMachine': 'scenario/MachineEngineerTalk:MachineCreated_Cro_010', 'karakuriId': 'Crowly', 'GetMachine': 'ItemGet:MachineActor05', 'MachineExplain00': 'scenario/MachineEngineerTalk:MachineCreated_Cro_020', 'isCroMachineA': True, 'Main_is020': 'CroMachine_HyrulePlains010:2963433053'})

}

void GiveItem() {

    fork {
        MachineEngineer.ResetFacialExpression()
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:MachineUnlockCheck_010', 'getAttention': False})
    }


    fork {
        MachineEngineer.SetFacialExpression({'expression': 'surprise'})
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'surprise_st,surprise_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:MachineUnlockCheck_020', 'getAttention': False})
    }

}

void _KarakuriMake01() {

    call _KarakuriMake01_01()


    call _KarakuriMake01_02()

}

void MachineHouseDoor() {
    Dialog.Show({'message': 'scenario/MachineEngineerTalk:MachineHouseDoor_010'})
}

void karakurimake_ed() {
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    MachineEngineer.Reset()
    MachineEngineer.WarpToLinkedPoint({'index': 2, 'offsetY': 0.0})
    MachineEngineer.AimPlayer({'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    MachineEngineer.LookAtTalker({'duration': 0.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    MachineEngineer.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    MachineEngineer.AimToInitialAngle({'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    MachineEngineer.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    Audio.PlayZoneBGM({'stopbgm': False})
}

void onemore() {

    fork {
        MachineEngineer.ResetFacialExpression()
    } {
        MachineEngineer.GenericTalkSequenceWithDialog({'message': 'scenario/MachineEngineerTalk:MachineShowActor010_040', 'playerTalkAnim': False, 'keepTalk': True, 'absorbAllPastedActors': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    }


    fork {
        MachineEngineer.SetFacialExpression({'expression': 'smile'})
    } {
        MachineEngineer.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineShowActor010_050', 'getAttention': False})
    }

    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    MachineEngineer.AimToInitialAngle({'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    MachineEngineer.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.5})
    Fade.StartPreset({'preset': 'FadeInNormal'})
}

void MachineBlackout() {
    Audio.StopAllBGM({'duration': 1.0})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    MachineEngineer.WarpToLinkedPoint({'index': 0, 'offsetY': 0.0})
    Player.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="MachineEngineer"), 'index': 1, 'offsetY': 0.0})
    MachineEngineer.AimCompassPoint({'direction': 0, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    Environment.StashSaveIntensity({'attenuation': 0.550000011920929, 'duration': 0.0})
    MachineEngineer.PlayAnimation({'name': 'create_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MachineEngineer.PlayTailorOtherChannelNoWait({'channel': 'callCore', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    MachineEngineer.LookAtTalker({'duration': 0.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 2.0})
    MachineEngineer.SetInterestIkEnabled({'enable': False})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    MachineEngineer.Talk({'message': 'MachineMaking00', 'getAttention': False})
    Timer.Wait({'time': 1.0})
    MachineEngineer.Talk({'message': 'MachineMaking01', 'getAttention': False})
    Timer.Wait({'time': 1.0})
}

void MachineBangle() {
    if !Player.HasItem({'itemKey': 'ItemMachineCoupon', 'count': 5, 'index': -1}) {
        MachineEngineer.ResetFacialExpression()
        MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineBangle_050', 'getAttention': False})
    } else {
        Timer.Wait({'time': 0.5})
        Player.PlayAnimation({'name': 'ev_hand_over', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.5})
        Player.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MachineEngineer.SetFacialExpression({'expression': 'smile'})
        MachineEngineer.PlayAnimationNoWait({'name': 'happy,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:MachineBangle_070', 'getAttention': False})
        Player.RemoveItem({'itemKey': 'ItemMachineCoupon', 'count': 5, 'index': -1})

        fork {
            MachineEngineer.SetFacialExpression({'expression': 'smile'})
        } {
            MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineBangle_080', 'getAttention': False})
        }

        MachineEngineer.PlayAnimationNoWait({'name': 'give', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Player.GenericItemGetSequence({'itemKey': 'Ornament22', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
        Player.AddItem({'itemKey': 'Ornament22', 'count': 1, 'index': -1, 'autoEquip': False})
        Partner.MoveToDefaultPosition({'speed': 1, 'position': 1, 'avoidPlayer': True, 'tolerance': 0.0, 'avoidWall': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Partner.EnableAutoMovement()
        MachineEngineer.GenericTalkSequenceWithDialog({'message': 'scenario/MachineEngineerTalk:MachineBangle_090', 'selfTalkAnimName': 'happy,wait', 'facial': 'smile', 'selfTalkAnim': True, 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
}

void MakeTektightMachine() {

    call MachineBlackout({'MachineMaking00': 'scenario/MachineEngineerTalk:MachineMaking_Create_Tek_010', 'MachineMaking01': 'scenario/MachineEngineerTalk:MachineMaking_Create_Tek_020'})


    call _KarakuriMake01()

    MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineCreated_Tek_010', 'getAttention': False})

    call KarakuriGetSequence({'isRepair': False, 'karakuriId': 'Tektight'})


    call KarakuriGetSequence_01()

    Zelda.GetKarakuri({'karakuriId': 'Tektight'})
    Audio.PlayZoneBGM({'stopbgm': False})
    MachineEngineer.GenericTalkSequenceWithDialog({'message': 'scenario/MachineEngineerTalk:MachineCreated_Tek_011', 'playerTalkAnim': False, 'keepTalk': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:GiveMachine_010', 'getAttention': False})
    MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineMainspring_010', 'getAttention': False})
    MachineEngineer.PlayAnimationNoWait({'name': 'give', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.GenericItemGetSequence({'itemKey': 'ItemMainspring', 'keepRaise': False, 'count': 1, 'messageEntry': '', 'index': -1})
    MachineEngineer.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MachineEngineer.GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})

    fork {
        Partner.MoveToDefaultPosition({'speed': 1, 'position': 1, 'avoidPlayer': True, 'tolerance': 0.0, 'avoidWall': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Partner.EnableAutoMovement()
    } {

        fork {
            MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineMainspring_020', 'getAttention': False})
        } {
            MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }

    TutorialUI.ShowModal({'key': 'MachineModal'})

    fork {
        MachineEngineer.ResetFacialExpression()
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:MachineExplain_Repair_010', 'getAttention': False})
    }


    fork {
        MachineEngineer.PlayAnimationNoWait({'name': 'happy,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:MachineExplain_Repair_020', 'getAttention': False})
    }


    fork {
        MachineEngineer.SetFacialExpression({'expression': 'smile'})
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:NewMachineIdea_010', 'getAttention': False})
    }


    call karakurimake_ed()

    QuestSystem.Close({'questKey': 'Machine_HyrulePlains010', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Quest_2() {

    call EvResetCommon.AllReset()


    fork {
        MachineEngineer.SetFacialExpression({'expression': 'sleep'})
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.GenericTalkSequenceWithDialog({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains050_010', 'selfTalkAnimName': 'think', 'playerTalkAnim': False, 'keepTalk': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    }

    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        call TekMachineHint()

    } else {

        fork {
            MachineEngineer.SetFacialExpression({'expression': 'sad'})
        } {
            MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains050_040', 'getAttention': False})
        }

    }
}

void ShowActor() {

    call EvResetCommon.AllReset_SensorQuest()

    MachineEngineer.AimCompassPoint({'direction': 3, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    MachineEngineer.SetInterestIkEnabled({'enable': False})

    fork {
        MachineEngineer.SetFacialExpression({'expression': 'surprise'})
    } {
        MachineEngineer.PlayAnimation({'name': 'surprise_st,surprise_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.GenericTalkSequenceWithDialog({'message': 'scenario/MachineEngineerTalk:MachineShowActor010_010', 'selfTalkAnimName': 'surprise_st,surprise_lp', 'facial': 'surprise', 'playerTalkAnim': False, 'aimToPlayer': False, 'aimFromPlayer': False, 'absorbAllPastedActors': False, 'keepTalk': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    } {
        Timer.Wait({'time': 0.5})
        Player.AimActor({'duration': 0.800000011920929, 'actor': ActorIdentifier(name="MachineEngineer"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        MachineEngineer.ResetFacialExpression()
    } {
        MachineEngineer.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineShowActor010_020', 'getAttention': False})
    }

    MachineEngineer.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    MachineEngineer.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    MachineEngineer.SetInterestIkEnabled({'enable': False})

    fork {
        MachineEngineer.SetFacialExpression({'expression': 'smile'})
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'happy,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineShowActor010_030', 'getAttention': False})
    }

    MachineEngineer.SetInterestIkEnabled({'enable': True})
}

void TekMachineHint() {
    MachineEngineer.SetInterestIkEnabled({'enable': False})

    fork {
        MachineEngineer.SetFacialExpression({'expression': 'surprise'})
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'surprise_st,surprise_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains050_020', 'getAttention': False})
    }


    fork {
        MachineEngineer.SetFacialExpression({'expression': 'smile'})
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains050_030', 'getAttention': False})
    }


    fork {
        MachineEngineer.SetFacialExpression({'expression': 'sleep'})
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:MachineHintAll_010', 'getAttention': False})
    }


    fork {
        MachineEngineer.ResetFacialExpression()
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:TekMachine010_010', 'getAttention': False})
    }


    fork {
        MachineEngineer.SetFacialExpression({'expression': 'sleep'})
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:MachineHintAll_020', 'getAttention': False})
    }


    fork {
        MachineEngineer.ResetFacialExpression()
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'happy,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:TekMachine010_020', 'getAttention': False})
    }

    MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:TekMachine010_030', 'getAttention': False})

    fork {
        MachineEngineer.AimActorLinkedPoint({'pointIndex': 0, 'actor': ActorIdentifier(name="MachineEngineer"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MachineEngineer.LookAtTalkersLinkedPoint({'pointIndex': 0, 'offsetZ': -2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains060_005', 'getAttention': False})
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'happy,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.800000011920929})
        Player.AimActorLinkedPoint({'pointIndex': 0, 'withoutTurn': False, 'actor': ActorIdentifier(name="MachineEngineer"), 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        MachineEngineer.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {
        MachineEngineer.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="MachineEngineer"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        MachineEngineer.SetFacialExpression({'expression': 'smile'})
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains060_010', 'getAttention': False})
    }

    MachineEngineer.SetInterestIkEnabled({'enable': True})

    fork {
        QuestSystem.SetProgress({'symbol': 'Machine_HyrulePlains010:1565985473', 'isShowTelopInEvent': False, 'isFrontFade': False})
    } {
        QuestSystem.Open({'questKey': 'TekMachine_A', 'isShowTelopInEvent': False, 'isFrontFade': False})
    } {
        QuestSystem.Open({'questKey': 'TekMachine_B', 'isShowTelopInEvent': False, 'isFrontFade': False})
    }

}

void MachineNotepad_01() {

    call QuestOrder({'NoteBook00': 'scenario/MachineEngineerTalk:MachineNotepad_Oct_010', 'NoteBook01': 'scenario/MachineEngineerTalk:MachineNotepad_Oct_020', 'NoteBook02': 'scenario/MachineEngineerTalk:MachineNotepad_Oct_030', 'MachineBase': 'scenario/MachineEngineerTalk:OctMachine010_010', 'MachineItem': 'scenario/MachineEngineerTalk:OctMachine010_020', 'MachineItemHint': 'scenario/MachineEngineerTalk:OctMachine010_030', 'MainQuest': 'OctMachine_HyrulePlains010', 'OtherA': 'OctMachine_A', 'OtherB': 'OctMachine_B', 'isOctMachine': True})

}

void ReadyMakeMachine() {
    MachineEngineer.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        MachineEngineer.SetFacialExpression({'expression': 'surprise'})
    } {
        MachineEngineer.PlayAnimation({'name': 'surprise_st,surprise_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:MachineShowActor020_010', 'getAttention': False})
    }


    fork {
        MachineEngineer.SetFacialExpression({'expression': 'surprise'})
    } {
        MachineEngineer.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:MachineShowActor020_011', 'getAttention': False})
    }


    fork {
        MachineEngineer.SetFacialExpression({'expression': 'angry'})
    } {
        MachineEngineer.PlayAnimation({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineShowActor020_012', 'getAttention': False})
    }

}

void DanpeiFirstDemo() {

    call EvResetCommon.AllReset()

    MachineEngineer.SetInterestIkEnabled({'enable': False})
    MachineEngineer.SetTalkerName({'message': 'glossary/Character:Unknown', 'keep': False})
    Audio.StopRegionBgm({'fadeSec': 1.0})
    Audio.Prepare({'label': 'BGM_KARAKURI_HOUSE', 'kind': 0, 'volume': 1.0})
    MachineEngineer.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'facial': 'smile', 'selfTalkAnimName': 'talk', 'aimToPlayer': False, 'aimFromPlayer': True, 'cameraLookAt': False, 'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains010_010', 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    MachineEngineer.SetFacialExpression({'expression': 'smile'})
    MachineEngineer.LookAtTalkersLinkedPoint({'pointIndex': 1, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Audio.PlayBGM({'label': 'BGM_KARAKURI_HOUSE', 'ignoreSkip': False, 'volume': 1.0})
    MachineEngineer.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'facial': 'smile', 'selfTalkAnimName': 'talk', 'aimToPlayer': False, 'aimFromPlayer': True, 'cameraLookAt': False, 'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains010_020', 'keepTalk': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})

    fork {
        MachineEngineer.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains010_030', 'getAttention': False})
    }


    fork {
        MachineEngineer.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains010_040', 'getAttention': False})
    }


    fork {
        MachineEngineer.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains010_050', 'getAttention': False})
    }


    fork {
        MachineEngineer.SetFacialExpression({'expression': 'angry'})
    } {
        MachineEngineer.PlayAnimation({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains010_060', 'getAttention': False})
    }


    fork {
        MachineEngineer.SetFacialExpression({'expression': 'angry'})
    } {
        MachineEngineer.PlayAnimation({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains010_070', 'getAttention': False})
    }

    MachineEngineer.SetTalkerName({'message': 'glossary/Character:MachineEngineer', 'keep': False})

    fork {
        MachineEngineer.SetFacialExpression({'expression': 'angry'})
    } {
        MachineEngineer.PlayAnimation({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains010_080', 'getAttention': False})
    }

    Timer.Wait({'time': 0.5})
    MachineEngineer.ResetFacialExpression()
    MachineEngineer.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains010_090', 'getAttention': False})
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'sad_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.SetFacialExpression({'expression': 'sad'})
    }

    Audio.StopAllBGM({'duration': 1.0})
    MachineEngineer.SkipAutoTurn()
    MachineEngineer.SetInstanceVariableString({'name': 'idleAnim', 'value': 'sad_lp'})
    Audio.PlayZoneBGM({'stopbgm': False})
}

void MachineNotepad_02() {
    Dialog.Show({'message': 'scenario/MachineEngineerTalk:MachineNotepad_Dialog010'})
    switch Dialog.GetConditionResult({'resultOnSkip': 0}) {
      case 0:

        call QuestOrder({'NoteBook00': 'scenario/MachineEngineerTalk:MachineNotepad_Zol_010', 'NoteBook01': 'scenario/MachineEngineerTalk:MachineNotepad_Zol_020', 'NoteBook02': 'scenario/MachineEngineerTalk:MachineNotepad_Zol_030', 'MachineBase': 'scenario/MachineEngineerTalk:ZolMachine010_010', 'MachineItem': 'scenario/MachineEngineerTalk:ZolMachine010_020', 'MachineItemHint': 'scenario/MachineEngineerTalk:ZolMachine010_030', 'MainQuest': 'ZolMachine_HyrulePlains010', 'OtherA': 'ZolMachine_A', 'OtherB': 'ZolMachine_B', 'isOctMachine': False})

      case 1:

        call QuestOrder({'NoteBook00': 'scenario/MachineEngineerTalk:MachineNotepad_Dek_010', 'NoteBook01': 'scenario/MachineEngineerTalk:MachineNotepad_Dek_020', 'NoteBook02': 'scenario/MachineEngineerTalk:MachineNotepad_Dek_021', 'MachineBase': 'scenario/MachineEngineerTalk:DekMachine010_010', 'MachineItem': 'scenario/MachineEngineerTalk:DekMachine010_020', 'MachineItemHint': 'scenario/MachineEngineerTalk:DekMachine010_030', 'MainQuest': 'DekMachine_HyrulePlains010', 'OtherA': 'DekMachine_A', 'OtherB': 'DekMachine_B', 'isOctMachine': False})

      case 2:

        call QuestOrder({'NoteBook00': 'scenario/MachineEngineerTalk:MachineNotepad_Mor_010', 'NoteBook01': 'scenario/MachineEngineerTalk:MachineNotepad_Mor_020', 'NoteBook02': 'scenario/MachineEngineerTalk:MachineNotepad_Mor_021', 'MachineBase': 'scenario/MachineEngineerTalk:MorMachine010_010', 'MachineItem': 'scenario/MachineEngineerTalk:MorMachine010_020', 'MachineItemHint': 'scenario/MachineEngineerTalk:MorMachine010_021', 'MainQuest': 'MorMachine_HyrulePlains010', 'OtherA': 'MorMachine_A', 'OtherB': 'MorMachine_B', 'isOctMachine': False})

    }
}

void MachineEngineerTalk_00() {
    switch QuestSystem.CheckProgress({'symbol': 'CroMachine_HyrulePlains010:2698841523'}) {
      case 4294967295:
        Event1399:
        if !EventFlags.CheckMessgaeFlag({'message': 'scenario/MachineEngineerTalk:MachineRepairing_Coupon_010'}) {
            if !Player.HasItem({'itemKey': 'ItemMachineCoupon', 'count': 1, 'index': -1}) {
                Event372:
                if !EventFlags.CheckFlag({'symbol': 'RepairCoupon'}) {
                    Hud.ShowRupee({'visible': True})
                    Event1381:
                    MachineEngineer.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'scenario/MachineEngineerTalk:MachineEngineerTalk_Q1_020', 'selfTalkAnimName': 'wait', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
                    MachineEngineer.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    switch Dialog.GetConditionResult({'resultOnSkip': 0}) {
                      case 0:
                        Dialog.SetInt({'value': 5, 'index': 0})

                        fork {
                            MachineEngineer.SetFacialExpression({'expression': 'smile'})
                        } {
                            MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
                        } {
                            MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineBangle_040', 'getAttention': False})
                        }

                        if !Dialog.GetLastResult({'resultOnSkip': 1}) {

                            call MachineBangle()

                        } else {

                            fork {
                                MachineEngineer.ResetFacialExpression()
                            } {
                                MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
                            } {
                                MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineBangle_060', 'getAttention': False})
                            }

                        }
                      case 1:

                        call MachineEngineerTalk_Create()

                      case 2:
                        if !KarakuriUI.IsRepairEnable() {
                            MachineEngineer.GenericTalkSequenceWithDialog({'message': 'scenario/MachineEngineerTalk:MachineRepairing_010', 'facial': 'smile', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
                            MachineEngineer.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

                            call RepairStart()

                        } else {
                            MachineEngineer.GenericTalkSequenceWithDialog({'message': 'scenario/MachineEngineerTalk:MachineRepairing_Nothing_010', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
                        }
                      case 3:

                        call _MachineEngineerChat()

                      case 4:

                        call _MachineEngineerBye()

                    }
                } else {
                    Hud.ShowRupee({'visible': True})
                    Hud.ReflectCurrentNumKarakuriCoupon()
                    Hud.ShowMachineCoupon({'visible': True})
                    goto Event1381
                }
            } else {
                MachineEngineer.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'message': 'scenario/MachineEngineerTalk:MachineRepairing_Coupon_010', 'selfTalkAnimName': 'surprise_st,surprise_lp', 'facial': 'surprise', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

                fork {
                    MachineEngineer.SetFacialExpression({'expression': 'smile'})
                } {
                    MachineEngineer.PlayAnimationNoWait({'name': 'happy,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                } {
                    MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineRepairing_Coupon_020', 'getAttention': False})
                }


                fork {
                    MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
                } {
                    MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineRepairing_Coupon_025', 'getAttention': False})
                }

                EventFlags.SetFlag({'symbol': 'RepairCoupon', 'value': True})
            }
        } else
        goto Event372
      case [0, 1]:
        if !EventFlags.CheckMessgaeFlag({'message': 'scenario/MachineEngineerTalk:MachineBangle_010'}) {
            MachineEngineer.GenericTalkSequenceWithDialog({'message': 'scenario/MachineEngineerTalk:MachineBangle_010', 'playerTalkAnim': False, 'selfTalkAnimName': 'happy,wait', 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

            fork {
                MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineBangle_020', 'getAttention': False})
            }


            fork {
                MachineEngineer.ResetFacialExpression()
            } {
                MachineEngineer.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineBangle_025', 'getAttention': False})
            }

            Dialog.SetInt({'value': 5, 'index': 0})

            fork {
                MachineEngineer.SetFacialExpression({'expression': 'smile'})
            } {
                MachineEngineer.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineBangle_030', 'getAttention': False})
            } {
                Hud.ReflectCurrentNumKarakuriCoupon()
                Hud.ShowMachineCoupon({'visible': True})
            }

            if !Dialog.GetLastResult({'resultOnSkip': 1}) {

                call MachineBangle()

            } else {

                fork {
                    MachineEngineer.ResetFacialExpression()
                } {
                    MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
                } {
                    MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineBangle_060', 'getAttention': False})
                }

            }
        } else
        goto Event1399
    }
}

void Quest_0_1_2() {
    QuestSystem.SetProgress({'symbol': 'Machine_HyrulePlains010:2171537775', 'isShowTelopInEvent': False, 'isFrontFade': False})

    call DanpeiFirstDemo()

}

void Quest_0_1_3() {
    QuestSystem.SetProgress({'symbol': 'Machine_HyrulePlains010:1745661018', 'isShowTelopInEvent': False, 'isFrontFade': False})

    call DanpeiFirstDemo()

}

void MachineEngineerTalk_Tek() {
    MachineEngineer.GenericTalkSequenceWithDialog({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains070_ 010', 'playerTalkAnim': False, 'keepTalk': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})

    fork {
        MachineEngineer.SetFacialExpression({'expression': 'sleep'})
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:MachineHintAll_010', 'getAttention': False})
    }


    fork {
        MachineEngineer.ResetFacialExpression()
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:TekMachine010_010', 'getAttention': False})
    }


    fork {
        MachineEngineer.SetFacialExpression({'expression': 'sleep'})
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:MachineHintAll_020', 'getAttention': False})
    }


    fork {
        MachineEngineer.ResetFacialExpression()
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'happy,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:TekMachine010_020', 'getAttention': False})
    }

    MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:TekMachine010_030', 'getAttention': False})

    fork {
        MachineEngineer.AimActorLinkedPoint({'pointIndex': 0, 'actor': ActorIdentifier(name="MachineEngineer"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        MachineEngineer.LookAtTalkersLinkedPoint({'pointIndex': 0, 'offsetZ': -2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains060_005', 'getAttention': False})
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'happy,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.800000011920929})
        Player.AimActorLinkedPoint({'pointIndex': 0, 'withoutTurn': False, 'actor': ActorIdentifier(name="MachineEngineer"), 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        MachineEngineer.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {
        MachineEngineer.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="MachineEngineer"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        MachineEngineer.SetFacialExpression({'expression': 'smile'})
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:Machine_HyrulePlains060_010', 'getAttention': False})
    }

}

void MachineNotepad_03() {

    call EvResetCommon.AllReset()

    Dialog.ShowKeep({'message': 'scenario/MachineEngineerTalk:MachineNotepad_Cro_010'})
    switch QuestSystem.GetStatus({'questKey': 'CroMachine_HyrulePlains010'}) {
      case 0:
        Dialog.Show({'message': 'scenario/MachineEngineerTalk:MachineNotepad_Cro_020'})

        fork {
            MachineEngineer.SetFacialExpression({'expression': 'smile'})
        } {
            MachineEngineer.PlayAnimationNoWait({'name': 'laugh', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MachineEngineer.GenericTalkSequenceWithDialog({'message': 'scenario/MachineEngineerTalk:CroMachine010_010', 'playerTalkAnim': False, 'selfTalkAnimName': 'laugh', 'facial': 'smile', 'keepTalk': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        }


        fork {
            MachineEngineer.SetFacialExpression({'expression': 'smile'})
        } {
            MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:CroMachine010_020', 'getAttention': False})
        }


        fork {
            MachineEngineer.ResetFacialExpression()
        } {
            MachineEngineer.PlayAnimationNoWait({'name': 'happy,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:CroMachine010_030', 'getAttention': False})
        }


        fork {
            MachineEngineer.SetFacialExpression({'expression': 'smile'})
        } {
            MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:CroMachine010_040', 'getAttention': False})
        }


        fork {
            MachineEngineer.SetFacialExpression({'expression': 'sleep'})
        } {
            MachineEngineer.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:CroMachine010_060', 'getAttention': False})
        }


        fork {
            MachineEngineer.SetFacialExpression({'expression': 'smile'})
        } {
            MachineEngineer.PlayAnimationNoWait({'name': 'happy,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:OctMachine010_050', 'getAttention': False})
        }


        fork {
            MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineEngineerTalk_Lack_040', 'getAttention': False})
        }


        fork {
            QuestSystem.Open({'questKey': 'CroMachine_HyrulePlains010', 'isShowTelopInEvent': False, 'isFrontFade': False})
        } {
            QuestSystem.Open({'questKey': 'CroMachine_A', 'isShowTelopInEvent': False, 'isFrontFade': False})
        } {
            QuestSystem.Open({'questKey': 'CroMachine_B', 'isShowTelopInEvent': False, 'isFrontFade': False})
        }

      case [1, 2]:
        Dialog.ShowKeep({'message': 'scenario/MachineEngineerTalk:MachineNotepad_Cro_020'})
        Dialog.Show({'message': 'scenario/MachineEngineerTalk:MachineNotepad_Cro_030'})
    }
}

void MachineNotepad() {
    Dialog.Show({'message': 'scenario/MachineEngineerTalk:MachineNotepad_Dialog000'})
}

void Lack_00() {
    MachineEngineer.SetInterestIkEnabled({'enable': False})

    fork {
        MachineEngineer.ResetFacialExpression()
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:MachineEngineerTalk_Lack_010', 'getAttention': False})
    }


    fork {
        MachineEngineer.SetFacialExpression({'expression': 'smile'})
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineEngineerTalk_Lack_040', 'getAttention': False})
    }

    MachineEngineer.SetInterestIkEnabled({'enable': True})
}

void Lack_01() {
    MachineEngineer.SetInterestIkEnabled({'enable': False})

    fork {
        MachineEngineer.ResetFacialExpression()
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:MachineEngineerTalk_Lack_030', 'getAttention': False})
    }


    fork {
        MachineEngineer.SetFacialExpression({'expression': 'smile'})
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineEngineerTalk_Lack_040', 'getAttention': False})
    }

    MachineEngineer.SetInterestIkEnabled({'enable': True})
}

void Lack_02() {
    MachineEngineer.SetInterestIkEnabled({'enable': False})

    fork {
        MachineEngineer.ResetFacialExpression()
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:MachineEngineerTalk_Lack_010', 'getAttention': False})
    }


    fork {
        MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:MachineEngineerTalk_Lack_020', 'getAttention': False})
    }


    fork {
        MachineEngineer.ResetFacialExpression()
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'happy,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:MachineEngineerTalk_Lack_030', 'getAttention': False})
    }


    fork {
        MachineEngineer.SetFacialExpression({'expression': 'smile'})
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineEngineerTalk_Lack_040', 'getAttention': False})
    }

    MachineEngineer.SetInterestIkEnabled({'enable': True})
}

void RejectGiveItem() {
    MachineEngineer.SetInterestIkEnabled({'enable': False})

    fork {
        MachineEngineer.ResetFacialExpression()
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:MachineUnlock_Reject_010', 'getAttention': False})
    }


    fork {
        MachineEngineer.SetFacialExpression({'expression': 'smile'})
    } {
        MachineEngineer.PlayAnimationNoWait({'name': 'happy,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineUnlock_Reject_020', 'getAttention': False})
    }

}

void DekMachine_A_no() {

    call EvResetCommon.AllReset_SensorQuest()

    MachineEngineer.AimCompassPoint({'direction': 3, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        MachineEngineer.SetFacialExpression({'expression': 'surprise'})
    } {
        MachineEngineer.PlayAnimation({'name': 'surprise_st,surprise_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.GenericTalkSequenceWithDialog({'message': 'scenario/MachineEngineerTalk:MachineShowActor010_010', 'selfTalkAnimName': 'surprise_st,surprise_lp', 'facial': 'surprise', 'playerTalkAnim': False, 'absorbAllPastedActors': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }


    fork {
        MachineEngineer.ResetFacialExpression()
    } {
        MachineEngineer.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineShowActor010_020', 'getAttention': False})
    }

    MachineEngineer.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    MachineEngineer.SetInterestIkEnabled({'enable': False})

    fork {
        MachineEngineer.PlayAnimationNoWait({'name': 'no,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineShowActor010_060', 'getAttention': False})
    }


    fork {
        MachineEngineer.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineShowActor010_070', 'getAttention': False})
    }

    MachineEngineer.SetInterestIkEnabled({'enable': True})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
}

void _KarakuriMake01_02() {
    MachineEngineer.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        MachineEngineer.SetFacialExpression({'expression': 'smile'})
    } {
        MachineEngineer.PlayAnimation({'name': 'laugh', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineMaking_Create_030', 'getAttention': False})
    }

    MachineEngineer.PlayAnimationNoWait({'name': 'give', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void _KarakuriMake01_01() {

    fork {
        Timer.Wait({'time': 0.8500000238418579})
        MachineEngineer.StopTailorOtherChannel({'channel': 'callCore', 'index': -1})
        Timer.Wait({'time': 0.699999988079071})
        Environment.StashPopIntensity({'duration': 1.25})
    } {
        MachineEngineer.PlayAnimation({'name': 'create_ed,create_finish_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineMaking_Create_010', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.8500000238418579})
        Camera.Shake({'power': 2, 'duration': 1.0})
    } {
        Timer.Wait({'time': 0.8500000238418579})
        Partner.PlayAnimationNoWait({'name': 'appeal02,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    MachineEngineer.PlayAnimation({'name': 'create_finish_ed', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
}

void RepairCommon() {
    if !KarakuriUI.CheckSelectedRepairCost({'isUseCoupon': 'isCoupon'}) {
        KarakuriUI.PaySelectedRepairPrice({'isUseCoupon': 'isCoupon'})
        MachineEngineer.GenericTalkSequenceWithDialog({'message': 'scenario/MachineEngineerTalk:MachineRepairing_030', 'facial': 'smile', 'playerTalkAnimName': '', 'selfTalkAnimName': 'yes,wait', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        Audio.SetBGMVolume({'volume': 0.20000000298023224, 'duration': 1.0})
        Fade.StartPreset({'preset': 'FadeOutSlowB'})
        Timer.Wait({'time': 1.0})

        fork {
            MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineMaking_Create_010', 'getAttention': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'SE_NPC_DANPEI_CREATE_LP', 'volume': 1.0, 'pitch': 1.0})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_ENGINEER_008_1', 'volume': 1.0, 'pitch': 1.0})
        }

        MachineEngineer.AimPlayer({'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 2.0})
        Audio.SetBGMVolume({'duration': 1.0, 'volume': 1.0})
        Fade.StartPreset({'preset': 'FadeInSlow'})
        Timer.Wait({'time': 0.5})

        fork {
            MachineEngineer.SetFacialExpression({'expression': 'smile'})
        } {
            MachineEngineer.PlayAnimationNoWait({'name': 'happy,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineRepairing_060', 'getAttention': False})
        }

        MachineEngineer.PlayAnimationNoWait({'name': 'give', 'layer': 0, 'blendFrame': -1, 'restart': False})
        KarakuriUI.RepairSelectedKarakuriSequence()
        KarakuriUI.RepairSelectedKarakuri()

        fork {
            Audio.PlayJingle({'label': 'BGM_FANFARE_ITEM_GET_SMALL', 'volume': 1.0, 'ignoreSkip': True})
        } {
            Timer.Wait({'time': 1.0})
            Dialog.Show({'message': 'scenario/MachineEngineerTalk:MachineRepairing_Get_010'})
        }


        call KarakuriGetSequence_ed()

        MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        MachineEngineer.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
        if !KarakuriUI.IsRepairEnable() {
            MachineEngineer.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/MachineEngineerTalk:MachineEngineerTalk_Q1_030', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
            if !Dialog.GetLastResult({'resultOnSkip': 1}) {
                Timer.Wait({'time': 0.5})

                call RepairStart()

            } else {
                Event1480:
                MachineEngineer.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/MachineEngineerTalk:MachineExplain_RepairAll_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
            }
        } else {
            goto Event1480
        }
    } else {
        MachineEngineer.Talk({'message': 'RupeeOrCoupon', 'getAttention': False})
    }
}

void RepairStart() {
    KarakuriUI.ShowRepairList()
    switch KarakuriUI.GetSelectedRepairMachine() {
      case [0, 1, 2, 3, 4, 5]:

        call _PriceCheck()

        switch Dialog.GetConditionResult({'resultOnSkip': 0}) {
          case [0, 1]:

            call RepairCommon({'isCoupon': False, 'RupeeOrCoupon': 'scenario/MachineEngineerTalk:MachineRepairing_040'})

          case 2:

            call RepairCommon({'isCoupon': True, 'RupeeOrCoupon': 'scenario/MachineEngineerTalk:MachineRepairing_045'})

          case 3:

            call RepairStart()

        }
      case 4294967295:
        MachineEngineer.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/MachineEngineerTalk:MachineEngineerTalk_Q1_A6_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
}

void QuestOrder() {

    call EvResetCommon.AllReset()

    Dialog.ShowKeep({'message': 'NoteBook00'})
    switch QuestSystem.GetStatus({'questKey': 'MainQuest'}) {
      case 0:
        Dialog.Show({'message': 'NoteBook01'})
        MachineEngineer.SetInterestIkEnabled({'enable': False})
        if !FlowControl.Branch({'value': 'isOctMachine'}) {
            MachineEngineer.GenericTalkSequenceWithDialog({'message': 'scenario/MachineEngineerTalk:MachineQuestStart_010', 'playerTalkAnim': False, 'keepTalk': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        } else {
            MachineEngineer.GenericTalkSequenceWithDialog({'message': 'scenario/MachineEngineerTalk:OctMachine_HyrulePlains010_010', 'selfTalkAnimName': 'happy,wait', 'facial': 'smile', 'playerTalkAnim': False, 'keepTalk': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        }
        MachineEngineer.SetInterestIkEnabled({'enable': False})
        if !FlowControl.Branch({'value': 'isOctMachine'}) {

            fork {
                MachineEngineer.SetFacialExpression({'expression': 'smile'})
            } {
                MachineEngineer.PlayAnimationNoWait({'name': 'happy,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:MachineQuestStart_020', 'getAttention': False})
            }

        } else {

            fork {
                MachineEngineer.ResetFacialExpression()
            } {
                MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:OctMachine_HyrulePlains010_020', 'getAttention': False})
            }

        }

        fork {
            MachineEngineer.ResetFacialExpression()
        } {
            MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:OctMachine_HyrulePlains010_030', 'getAttention': False})
        }


        fork {
            MachineEngineer.SetFacialExpression({'expression': 'sleep'})
        } {
            MachineEngineer.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:MachineHintAll_010', 'getAttention': False})
        }


        fork {
            MachineEngineer.ResetFacialExpression()
        } {
            MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MachineEngineer.TalkKeep({'message': 'MachineBase', 'getAttention': False})
        }


        fork {
            MachineEngineer.SetFacialExpression({'expression': 'sleep'})
        } {
            MachineEngineer.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:MachineHintAll_020', 'getAttention': False})
        }


        fork {
            MachineEngineer.ResetFacialExpression()
        } {
            MachineEngineer.PlayAnimationNoWait({'name': 'happy,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MachineEngineer.TalkKeep({'message': 'MachineItem', 'getAttention': False})
        }


        fork {
            MachineEngineer.PlayAnimationNoWait({'name': 'yes,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MachineEngineer.TalkKeep({'message': 'MachineItemHint', 'getAttention': False})
        }

        if FlowControl.Branch({'value': 'isOctMachine'}) {

            fork {
                MachineEngineer.SetFacialExpression({'expression': 'sleep'})
            } {
                MachineEngineer.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:OctMachine010_040', 'getAttention': False})
            }

        }

        fork {
            MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:MachineEngineerTalk_Lack_040', 'getAttention': False})
        } {
            MachineEngineer.ResetFacialExpression()
        }


        fork {
            MachineEngineer.SetFacialExpression({'expression': 'smile'})
        } {
            MachineEngineer.PlayAnimationNoWait({'name': 'happy,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:OctMachine010_050', 'getAttention': False})
        }

        MachineEngineer.SetInterestIkEnabled({'enable': True})

        fork {
            QuestSystem.Open({'questKey': 'MainQuest', 'isShowTelopInEvent': False, 'isFrontFade': False})
        } {
            QuestSystem.Open({'questKey': 'OtherA', 'isShowTelopInEvent': False, 'isFrontFade': False})
        } {
            QuestSystem.Open({'questKey': 'OtherB', 'isShowTelopInEvent': False, 'isFrontFade': False})
        }

      case [1, 2]:
        Dialog.ShowKeep({'message': 'NoteBook01'})
        Dialog.Show({'message': 'NoteBook02'})
    }
}

void QuestACommon() {

    call ShowActor()

    QuestSystem.Close({'questKey': 'QuestA', 'isShowTelopInEvent': False, 'isFrontFade': False})
    switch QuestSystem.CheckProgress({'symbol': 'Main_is020'}) {
      case 4294967295:
        QuestSystem.AddProgress({'questKey': 'MainQuest', 'isForceShowTelop': True, 'value': 1, 'isShowTelopInEvent': False, 'isFrontFade': False})

        call onemore()

      case [0, 1]:
        QuestSystem.Close({'questKey': 'MainQuest', 'isShowTelopInEvent': False, 'isFrontFade': False})

        call ReadyMakeMachine()


        call MachineBlackout({'MachineMaking00': 'MachineMaking00', 'MachineMaking01': 'MachineMaking01'})


        call _KarakuriMake01()

        MachineEngineer.Talk({'message': 'NameMachine', 'getAttention': False})

        call KarakuriGetSequence({'isRepair': False, 'karakuriId': 'karakuriId'})


        call KarakuriGetCommon({'GetMachine': 'GetMachine'})

        Zelda.GetKarakuri({'karakuriId': 'karakuriId'})
        Audio.PlayZoneBGM({'stopbgm': False})
        MachineEngineer.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'keepTalk': True, 'message': 'MachineExplain00', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        if FlowControl.Branch({'value': 'isDekMachine'}) {
            MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:MachineCreated_Dek_030', 'getAttention': False})
        }
        if !FlowControl.Branch({'value': 'isCroMachineA'}) {
            MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:GiveMachine_010', 'getAttention': False})
            MachineEngineer.SetInterestIkEnabled({'enable': False})

            fork {
                MachineEngineer.ResetFacialExpression()
            } {
                MachineEngineer.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineExplain_RepairAll_010', 'getAttention': False})
            }

            MachineEngineer.SetInterestIkEnabled({'enable': True})
            if !FlowControl.Branch({'value': 'isOctMachineA'}) {
                QuestSystem.AddProgress({'questKey': 'CroMachine_Open', 'value': 1, 'isShowTelopInEvent': False, 'isFrontFade': False, 'isForceShowTelop': False})

                call karakurimake_ed()

            } else {
                EventFlags.SetFlag({'symbol': 'MachineCreateFirst', 'value': True})
                QuestSystem.Open({'questKey': 'CroMachine_Open', 'isShowTelopInEvent': False, 'isFrontFade': False})

                call karakurimake_ed()

            }
        } else {
            MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:GiveMachine_010', 'getAttention': False})
            MachineEngineer.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            MachineEngineer.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

            fork {
                MachineEngineer.SetFacialExpression({'expression': 'sleep'})
            } {
                MachineEngineer.PlayAnimationNoWait({'name': 'happy,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineCreated_Cro_030', 'getAttention': False})
            }

            MachineEngineer.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

            fork {
                MachineEngineer.SetFacialExpression({'expression': 'smile'})
            } {
                MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineCreated_Cro_040', 'getAttention': False})
            }


            call karakurimake_ed()

        }
    }
}

void KarakuriGetCommon() {

    fork {
        Audio.PlayJingle({'label': 'BGM_FANFARE_ITEM_GET_SMALL', 'volume': 1.0, 'ignoreSkip': True})
    } {
        Timer.Wait({'time': 1.0})
        Dialog.Show({'message': 'GetMachine'})
    }


    call KarakuriGetSequence_ed()

}

void QuestBCommon() {
    if !EventFlags.CheckFlag({'symbol': 'GetMachineUnlock'}) {
        switch QuestSystem.GetStatus({'questKey': 'QuestB'}) {
          case [0, 1]:
            switch QuestSystem.GetStatus({'questKey': 'QuestA'}) {
              case [0, 1]:

                call Lack_02()

              case 2:

                call Lack_01()

            }
          case 2:

            call Lack_00()

        }
    } else
    switch QuestSystem.GetStatus({'questKey': 'QuestB'}) {
      case [0, 1]:

        call GiveItem()


        fork {
            MachineEngineer.SetFacialExpression({'expression': 'smile'})
        } {
            MachineEngineer.PlayAnimationNoWait({'name': 'happy,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MachineEngineer.TalkKeep({'message': 'giveItemCheck', 'getAttention': False})
        }

        if !Dialog.GetLastResult({'resultOnSkip': 1}) {

            fork {
                MachineEngineer.SetFacialExpression({'expression': 'smile'})
            } {
                MachineEngineer.PlayAnimationNoWait({'name': 'happy,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineUnlockGive_010', 'getAttention': False})
            }

            QuestSystem.Close({'questKey': 'QuestB', 'isShowTelopInEvent': False, 'isFrontFade': False})
            switch QuestSystem.CheckProgress({'symbol': 'Main_is020'}) {
              case 4294967295:
                QuestSystem.AddProgress({'isForceShowTelop': True, 'questKey': 'MainQuest', 'value': 1, 'isShowTelopInEvent': False, 'isFrontFade': False})

                call onemore()

              case [0, 1]:
                QuestSystem.Close({'questKey': 'MainQuest', 'isShowTelopInEvent': False, 'isFrontFade': False})

                call ReadyMakeMachine()


                call MachineBlackout({'MachineMaking00': 'MachineMaking00', 'MachineMaking01': 'MachineMaking01'})


                call _KarakuriMake01()

                MachineEngineer.Talk({'message': 'NameMachine', 'getAttention': False})

                call KarakuriGetSequence({'isRepair': False, 'karakuriId': 'karakuriId'})


                call KarakuriGetCommon({'GetMachine': 'GetMachine'})

                Zelda.GetKarakuri({'karakuriId': 'karakuriId'})
                Audio.PlayZoneBGM({'stopbgm': False})
                MachineEngineer.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'keepTalk': True, 'message': 'MachineExplain', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
                if FlowControl.Branch({'value': 'isDekMachine'}) {
                    MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:MachineCreated_Dek_030', 'getAttention': False})
                }
                if !FlowControl.Branch({'value': 'isCroMachine'}) {
                    MachineEngineer.TalkKeep({'message': 'scenario/MachineEngineerTalk:GiveMachine_010', 'getAttention': False})

                    fork {
                        MachineEngineer.ResetFacialExpression()
                    } {
                        MachineEngineer.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    } {
                        MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineExplain_RepairAll_010', 'getAttention': False})
                    }


                    call karakurimake_ed()

                    QuestSystem.AddProgress({'questKey': 'CroMachine_Open', 'value': 1, 'isShowTelopInEvent': False, 'isFrontFade': False, 'isForceShowTelop': False})
                } else {
                    MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:GiveMachine_010', 'getAttention': False})
                    MachineEngineer.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    MachineEngineer.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

                    fork {
                        MachineEngineer.SetFacialExpression({'expression': 'sleep'})
                    } {
                        MachineEngineer.PlayAnimationNoWait({'name': 'happy,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    } {
                        MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineCreated_Cro_030', 'getAttention': False})
                    }

                    MachineEngineer.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

                    fork {
                        MachineEngineer.SetFacialExpression({'expression': 'smile'})
                    } {
                        MachineEngineer.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    } {
                        MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineCreated_Cro_040', 'getAttention': False})
                    }


                    call karakurimake_ed()

                }
            }
        } else {

            call RejectGiveItem()

        }
      case 2:

        call Lack_00()

    }
}

void MachineNotepad_04() {
    Dialog.Show({'message': 'scenario/MachineEngineerTalk:MachineNotepad_Created_010'})
}

void OctMachine_A_no() {

    call EvResetCommon.AllReset_SensorQuest()

    MachineEngineer.AimCompassPoint({'direction': 3, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        MachineEngineer.SetFacialExpression({'expression': 'surprise'})
    } {
        MachineEngineer.PlayAnimation({'name': 'surprise_st,surprise_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.GenericTalkSequenceWithDialog({'message': 'scenario/MachineEngineerTalk:MachineShowActor010_010', 'selfTalkAnimName': 'surprise_st,surprise_lp', 'facial': 'surprise', 'playerTalkAnim': False, 'absorbAllPastedActors': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }


    fork {
        MachineEngineer.ResetFacialExpression()
    } {
        MachineEngineer.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineShowActor010_020', 'getAttention': False})
    }

    MachineEngineer.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    MachineEngineer.SetInterestIkEnabled({'enable': False})

    fork {
        MachineEngineer.PlayAnimationNoWait({'name': 'no,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineShowActor010_065', 'getAttention': False})
    }


    fork {
        MachineEngineer.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        MachineEngineer.Talk({'message': 'scenario/MachineEngineerTalk:MachineShowActor010_070', 'getAttention': False})
    }

    MachineEngineer.SetInterestIkEnabled({'enable': True})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
}
