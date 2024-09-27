-------- EventFlow: Copy --------

Actor: GameControl
entrypoint: None()
actions: ['RequestAutoSave', 'SetForcedResolution', 'ResetForcedResolution']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: []
queries: ['CompareCopyableActor']
params: None

Actor: Zelda
entrypoint: None()
actions: ['PreloadCopiedActor', 'DestroyCopiedActor', 'PlayAnimationEx', 'PlayAnimation', 'AimCompassPoint', 'LookAtItemGettingPlayer', 'EndCopiedActorsCopiedEffect', 'RequestInvincible', 'StartAbsorbAllPastedActors', 'EndAbsorbAllPastedActors', 'PlayTailorOtherChannelNoWait', 'SetFacialExpression', 'AddItem', 'SetEquipmentVisibility', 'ResetFacialExpression', 'CarryCopiedActor', 'LookAtTalker']
queries: ['GetCopyDictionaryCount', 'IsCopiedActorEnemy']
params: None

Actor: Dialog
entrypoint: None()
actions: ['Show', 'Signal', 'ShowCopyActorGetMessage']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayJingle']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Hud
entrypoint: None()
actions: ['PlayOutAnimLayout', 'PlayOutAnim', 'PlayInAnim', 'PlayInAnimLayout', 'RegisterPasteSlot', 'ShowOpenDictionaryGuide']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['LookAtTalker', 'AimPlayer', 'DisableAutoMovement', 'ResetAim']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimation', 'PlayAnimationNoWait', 'DisableAutoMovement', 'MoveToTargetActor', 'ResetAim', 'AimActor', 'SetInterestIkEnabled', 'WaitMoveDone']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: Camera
entrypoint: None()
actions: ['Reset']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AddPasteEnergy', 'StopCopiedActorCarryEffect', 'ResetCarriedActor', 'ResetFacialExpression', 'ResetVelocity', 'HideTimedAbilityEffect']
queries: ['CheckLife']
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: TutorialUI
entrypoint: None()
actions: ['ShowModal', 'HideInsert']
queries: []
params: None

Actor: BattleChallenge
entrypoint: None()
actions: []
queries: ['IsBattleChallenging']
params: None

Actor: Vibration
entrypoint: None()
actions: ['StopAllVibration']
queries: []
params: None

void Copied() {
    Timer.Wait({'time': 0.5})
    Zelda.EndCopiedActorsCopiedEffect()
    Zelda.PlayTailorOtherChannelNoWait({'channel': 'EneRecovery', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    Zelda.RequestInvincible()
}

void _FirstCopyGetSequence() {
    Hud.PlayOutAnimLayout({'ItemSlot': True, 'HeartGauge': True, 'PasteGauge': True, 'PasteSlot': False, 'Rupee': True, 'KeyItem': True, 'MiniMap': True, 'Operate': True, 'TimedAbility': True})

    fork {
        Zelda.PreloadCopiedActor()
        Player.ResetCarriedActor()
        Timer.Wait({'time': 0.05000000074505806})

        fork {
            Zelda.AimCompassPoint({'direction': 0, 'withoutTurn': False, 'duration': 0.4000000059604645, 'immediateTurn': False})
        } {
            Zelda.PlayAnimationEx({'layer': 0, 'name': '$item_get_st', 'time': 0.4000000059604645, 'blendFrame': -1, 'restart': False})
        } {
            Zelda.SetEquipmentVisibility({'visibility': False})
        } {
            Timer.Wait({'time': 0.10000000149011612})
            Zelda.SetFacialExpression({'expression': 'get'})
        }

    } {
        Zelda.LookAtItemGettingPlayer({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    switch Zelda.GetCopyDictionaryCount({'amount': 2}) {
      case 4294967295:
        Hud.RegisterPasteSlot()
        Event97:

        fork {
            Partner[companion].WaitMoveDone({'timeout': 3.0})
            Partner[companion].SetInterestIkEnabled({'enable': True})
            Partner[companion].AimActor({'boneName': 'attach_object', 'duration': 0.30000001192092896, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Zelda.CarryCopiedActor()
            GameControl.SetForcedResolution({'console': 16000900, 'handheld': 11520648})

            fork {
                Audio.PlayJingle({'label': 'BGM_FANFARE_ITEM_GET_SMALL', 'volume': 1.0, 'ignoreSkip': True})
            } {
                Timer.Wait({'time': 1.0})

                fork {

                    call _showCopyGetMessage()

                } {
                    Timer.Wait({'time': 0.032999999821186066})

                    call _showCopySetGuide()

                }

            }

        }


        fork {
            Player.StopCopiedActorCarryEffect()
        } {
            Timer.Wait({'time': 0.08299999684095383})
        }

        Zelda.DestroyCopiedActor()
        GameControl.ResetForcedResolution()
        Zelda.PlayAnimation({'layer': 0, 'name': '$item_get_ed', 'blendFrame': -1, 'restart': False})
        Zelda.SetEquipmentVisibility({'visibility': True})
        Zelda.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.10000000149011612})
        GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
      case [0, 1]:
        goto Event97
    }
}

void Absorbed() {
    Partner[companion].DisableAutoMovement()

    fork {
        Zelda.EndCopiedActorsCopiedEffect()
    } {
        Zelda.PlayAnimation({'layer': 1, 'name': '$wand_absorb_ed', 'blendFrame': -1, 'restart': False})
    }

}

void AllAbsorb() {
    Partner[companion].DisableAutoMovement()

    fork {
        Zelda.PlayAnimationEx({'time': 0.699999988079071, 'name': '$wand_all_absorb_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})
        Zelda.StartAbsorbAllPastedActors()
    }

    Zelda.EndAbsorbAllPastedActors()
    Zelda.PlayAnimation({'name': '$wand_all_absorb_ed', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void FirstPaste() {
    EventFlags.SetFlag({'symbol': 'TutorialInsert_PutOut_Clear', 'value': True})
    Partner.DisableAutoMovement()
    Timer.Wait({'time': 0.5})
    Partner.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Zelda.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {
        Timer.Wait({'time': 0.5})
        Partner.ResetAim()
        Partner[companion].PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.5})
    Hud.PlayOutAnim()

    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:PasteTuto_010', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.5})

        call GeneralSequence.Look_at_Partner()

    }

    Hud.PlayInAnim()
    TutorialUI.ShowModal({'key': 'FirstPasteModal'})
}

void CopyGet() {
    if Player.CheckLife({'amount': 1}) {

        fork {
            Player.ResetVelocity()
        } {
            Player.HideTimedAbilityEffect()
        } {
            Vibration.StopAllVibration()
        }


        call _FirstCopyGetSequence({'copidActor': 'copiedActor'})

        Hud.PlayOutAnimLayout({'HeartGauge': True, 'ItemSlot': True, 'PasteSlot': True, 'Rupee': True, 'KeyItem': True, 'MiniMap': True, 'PasteGauge': True, 'Operate': True, 'TimedAbility': True})
        if !BattleChallenge.IsBattleChallenging() {
            switch Zelda.GetCopyDictionaryCount({'amount': 2}) {
              case 4294967295:
                TutorialUI.HideInsert()
                Zelda.ResetFacialExpression()

                fork {
                    Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:CopyTuto_010', 'selfTalkAnimName': 'yes,talk', 'playerTalkAnim': False, 'keepPersonalSpace': True, 'aimFromPlayer': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
                } {
                    Timer.Wait({'time': 0.4000000059604645})

                    call GeneralSequence.Look_at_Partner()

                }

                Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                EventFlags.SetFlag({'symbol': 'TutorialInsert_PutOut', 'value': True})
                Event115:
                Hud.PlayInAnimLayout({'HeartGauge': True, 'ItemSlot': True, 'PasteSlot': True, 'Rupee': True, 'KeyItem': True, 'MiniMap': True, 'PasteGauge': True, 'Operate': True, 'TimedAbility': True})
                Event28:
                if !FlowControl.CompareCopyableActor({'value2': 'ChangeLinkSword', 'value1': 'copiedActor'}) {

                    call PasteLinkGet()

                } else
                if !EventFlags.CheckFlag({'symbol': 'CopyRod_Enemy_Comp'})
                && Zelda.IsCopiedActorEnemy() {

                    call EnemyCopySuccess()

                }
              case [0, 1]:
                if !EventFlags.CheckFlag({'symbol': 'Tutorial_CopyDictionary'}) {
                    Zelda.ResetFacialExpression()

                    fork {
                        Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/PartnerTalk:PasteList_010', 'playerTalkAnim': False, 'aimFromPlayer': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
                    } {
                        Timer.Wait({'time': 0.4000000059604645})

                        call GeneralSequence.Look_at_Partner()

                    }

                    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    EventFlags.SetFlag({'symbol': 'Tutorial_CopyDictionary', 'value': True})
                    goto Event115
                } else
                goto Event28
            }
        }
    }
}

void PasteLinkGet() {
    EventFlags.SetFlag({'symbol': 'PasteLinkUnLock', 'value': True})
    Zelda.SetFacialExpression({'expression': 'normal'})
    Zelda.AddItem({'itemKey': 'Sword', 'count': 1, 'index': -1, 'autoEquip': False})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Dialog.Show({'message': 'scenario/StoryAreaA:PasteLinkGet_E030'})
    Player.AddPasteEnergy({'amount': 60})
    EventVariables.SetVariable({'symbol': 'HyruleCastle_LuberiHouse:35784108'})
}

void FirstPasteLink() {
    Dialog.Show({'message': 'scenario/StoryAreaA:FirstUsePasteLink_E010'})
}

void EnemyCopySuccess() {
    if !EventFlags.CheckFlag({'symbol': 'EvEnemyCopySuccess'}) {

        fork {
            Player.ResetFacialExpression()
        } {
            Partner.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].MoveToTargetActor({'withoutTurn': True, 'distance': -0.5, 'speed': 0, 'customSpeed': 1.0, 'actor': ActorIdentifier(name="Partner"), 'tolerance': 0.0, 'timeOut': 7.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        } {
            Partner.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        }


        fork {
            Timer.Wait({'time': 0.20000000298023224})

            call GeneralSequence.Look_at_Partner()

        } {
            Partner[companion].PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Partner[companion].Talk({'message': 'scenario/StoryAreaA:EnemyCopySuccess_010', 'getAttention': False})
        }

        Partner[companion].ResetAim()
        Partner[companion].PlayAnimationNoWait({'name': 'yes,talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:EnemyCopySuccess_020', 'getAttention': False})
        Event54:

        call FirstPasteEnemy()

        EventFlags.SetFlag({'symbol': 'EvEnemyCopySuccess', 'value': True})
        EventFlags.SetFlag({'symbol': 'CopyRod_Enemy_Comp', 'value': True})
    } else {
        goto Event54
    }
}

void _showCopyGetMessage() {
    Dialog.ShowCopyActorGetMessage()
}

void _showCopySetGuide() {
    switch Zelda.GetCopyDictionaryCount({'amount': 2}) {
      case 4294967295:
        Dialog.Signal()
      case [0, 1]:
        Hud.ShowOpenDictionaryGuide()
    }
}

void FirstPasteEnemy() {
    TutorialUI.ShowModal({'key': 'CopyRod_Enemy'})
    EventFlags.SetFlag({'symbol': 'TutorialModal_Title_CopyRod_Enemy', 'value': True})
}
