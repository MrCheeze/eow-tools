-------- EventFlow: EvLink --------

Actor: EvLink
entrypoint: None()
actions: ['Destroy', 'AimCompassPoint', 'MoveToCompassPoint', 'SetComponentActive', 'SetInstanceVariableString', 'PlayAnimation', 'PlayTailorOtherChannelEx', 'AimActor', 'AimDegreeAngle', 'PlayAnimationNoWait', 'SetInterestIkEnabled', 'StopTailorOtherChannel', 'SetRestartPositionToLinkedPoint']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetLevelFlag', 'SetFlag']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['AimActor', 'MoveToCompassPoint', 'MoveToBesideTargetActor']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor', 'MoveToTargetActor', 'PlayAnimation', 'MoveToCompassPoint', 'PlayAnimationNoWait', 'SetInterestIkEnabled']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['ForbidSave', 'RequestLevelJump', 'RequestAutoSave', 'ResetSensorEventResetContainsActors']
queries: []
params: None

Actor: TagEvTailorPlayer
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: evAirWallcommon
entrypoint: None()
actions: ['Destroy']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE', 'StopAllBGM']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'MoveToBesideTargetActor', 'AimActor', 'PlayAnimationNoWait', 'PlayAnimation', 'AimCompassPoint']
queries: []
params: None

void OpenedLastDungeon() {

    call EvResetCommon.AllReset()

    GameControl.ResetSensorEventResetContainsActors({'eventReset': False, 'cemeteryRevive': False})

    fork {
        EvLink.SetComponentActive({'name': 'PropplayerSword', 'active': False})
    } {
        EvLink.SetComponentActive({'name': 'PropplayerShield', 'active': False})
    }

    EventFlags.SetLevelFlag({'value': False, 'index': 190})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="EvLink"), 'actor2': ActorIdentifier(name="Zelda"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    EvLink.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        Zelda.MoveToTargetActor({'speed': 0, 'distance': 2.0, 'actor': ActorIdentifier(name="EvLink"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Zelda.AimActor({'actor': ActorIdentifier(name="EvLink"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].MoveToBesideTargetActor({'offsetZ': 0.75, 'offsetY': 1.0, 'speed': 0, 'actor': ActorIdentifier(name="EvLink"), 'offsetX': -1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    }


    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaH:FinalConfirmation_Q1', 'getAttention': False})
    } {
        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="EvLink"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.5})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.5})
        Partner[companion].PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Partner"), 'offsetY': -0.6000000238418579, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        Partner[companion].Talk({'message': 'scenario/StoryAreaH:FinalConfirmation_Q1_A1_010', 'getAttention': False})
        Partner[companion].AimActor({'offsetZ': -3.0, 'duration': 0.699999988079071, 'actor': ActorIdentifier(name="EvLink"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 1.2000000476837158})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.5})

        fork {
            Partner[companion].Talk({'message': 'scenario/StoryAreaH:FinalConfirmation_Q2', 'getAttention': False})
        } {
            Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        if !Dialog.GetLastResult({'resultOnSkip': 1}) {
            Audio.StopAllBGM({'duration': 5.0})
            EvLink.SetRestartPositionToLinkedPoint({'direction': 2, 'pointIndex': 0, 'stance': 'Ground'})
            GameControl.RequestAutoSave({'immediate': True, 'name': 'ReturnWeapon', 'needsStartupEvent': False, 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})

            fork {
                Partner[companion].Talk({'message': 'scenario/StoryAreaH:FinalConfirmation_Q2_A1_010', 'getAttention': False})
            } {
                Partner[companion].PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Timer.Wait({'time': 0.5})
                Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="EvLink"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }

            Timer.Wait({'time': 0.20000000298023224})
            Zelda.MoveToCompassPoint({'direction': 2, 'speed': 0, 'distance': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
            Zelda.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

            fork {
                Zelda.PlayAnimation({'name': 'ev_hand_over,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                EventFlags.SetFlag({'symbol': 'LastDungeon_ReturnWeaponToLink', 'value': True})
                EvLink.AimCompassPoint({'duration': 0.0, 'direction': 0, 'withoutTurn': False, 'immediateTurn': False})
            } {

                fork {
                    EvLink.SetComponentActive({'name': 'PropplayerSword', 'active': True})
                } {
                    EvLink.SetComponentActive({'name': 'PropplayerShield', 'active': True})
                } {
                    EvLink.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                }

            } {
                Audio.PlayOneshotSystemSE({'label': 'SE_EV_PD234_LINK_SWISH_1', 'volume': 1.0, 'pitch': 1.0})
            }

            Zelda.SetInterestIkEnabled({'enable': False})
            Zelda.MoveToCompassPoint({'speed': 0, 'direction': 0, 'withoutTurn': True, 'distance': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
            Timer.Wait({'time': 0.5})

            fork {
                Partner[companion].AimActor({'actor': ActorIdentifier(name="EvLink"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                EvLink.PlayAnimation({'name': 'ev_GoLastBossSecondStep_stance_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Audio.PlayOneshotSystemSE({'label': 'SE_EV_PD234_LINK_SWISH_2', 'volume': 1.0, 'pitch': 1.0})
            }

            EvLink.PlayAnimationNoWait({'name': 'ev_GoLastBossSecondStep_stance_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 1.0})
            EvLink.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 1.0})

            fork {
                Partner[companion].AimActor({'actor': ActorIdentifier(name="EvLink"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                EvLink.AimActor({'actor': ActorIdentifier(name="Partner"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }

            Timer.Wait({'time': 0.5})

            fork {
                Timer.Wait({'time': 0.5})
                Partner[companion].AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Zelda.AimActor({'offsetY': -0.6000000238418579, 'actor': ActorIdentifier(name="Partner"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.5})
                Audio.PlayOneshotSystemSE({'label': 'SE_EV_PD234_LINK_SWISH_AFTER_TRI', 'volume': 1.0, 'pitch': 1.0})
            }

            Timer.Wait({'time': 0.5})
            Partner[companion].AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

            fork {
                Partner[companion].Talk({'message': 'scenario/StoryAreaH:FinalConfirmation_Q2_A1_020', 'getAttention': False})
            } {
                Partner[companion].PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

            Timer.Wait({'time': 1.0})
            EvLink.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
            Timer.Wait({'time': 0.20000000298023224})

            fork {
                Partner.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="EvLink"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Zelda.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="EvLink"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }


            fork {
                EvLink.PlayTailorOtherChannelEx({'channel': 'ChargeStart', 'time': 0.30000001192092896, 'restart': False, 'index': -1, 'stopOnSkipped': True})
            } {
                EvLink.PlayAnimation({'name': 'attack_slash_hold_d_lp_S', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

            Timer.Wait({'time': 1.5})
            EvLink.PlayTailorOtherChannelEx({'channel': 'ChargeEnd', 'time': 1.0, 'restart': False, 'index': -1, 'stopOnSkipped': True})

            fork {
                EvLink.PlayAnimation({'name': 'attack_slash_hold_sword_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                TagEvTailorPlayer.PlayTailorOtherChannelNoWait({'channel': 'Entrance_Appear', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            } {
                Timer.Wait({'time': 0.20000000298023224})
                EvLink.StopTailorOtherChannel({'channel': 'ChargeEnd', 'index': -1})
            } {
                Audio.PlayOneshotSystemSE({'label': 'SE_EV_PD234_HOLE_APPEAR', 'volume': 1.0, 'pitch': 1.0})
            }

            Timer.Wait({'time': 1.5})
            EvLink.SetComponentActive({'name': 'simulationStopperComp', 'active': False})
            evAirWallcommon.Destroy()
            EvLink.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 1.0})
            EvLink.SetInterestIkEnabled({'enable': True})
            EvLink.AimDegreeAngle({'angle': -125.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
            EvLink.AimActor({'actor': ActorIdentifier(name="Zelda"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Timer.Wait({'time': 1.0})
            EvLink.SetInterestIkEnabled({'enable': False})
            EvLink.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
            Timer.Wait({'time': 1.0})
            EvLink.MoveToCompassPoint({'direction': 2, 'speed': 0, 'distance': 4.0, 'timeOut': 3.0, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
            EvLink.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait'})
            EvLink.Destroy()
            Timer.Wait({'time': 1.0})

            fork {
                Zelda.MoveToCompassPoint({'direction': 2, 'speed': 0, 'distance': 6.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
            } {
                Partner.AimActor({'actor': ActorIdentifier(name="Zelda"), 'offsetX': 0.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                Timer.Wait({'time': 1.600000023841858})
                Partner.MoveToBesideTargetActor({'speed': 0, 'offsetX': 1.0, 'actor': ActorIdentifier(name="Partner"), 'offsetZ': -1.5, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
                Partner.MoveToCompassPoint({'direction': 2, 'speed': 0, 'distance': 6.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
            }

            Fade.StartPreset({'preset': 'FadeOutNormalB'})
            GameControl.ForbidSave()
            GameControl.RequestLevelJump({'locator': 'Last_R001_Start', 'level': 'L_DungeonLast', 'offsetX': 0.0, 'offsetZ': 0.0})
        } else {
            Event7:
            Partner[companion].Talk({'message': 'scenario/StoryAreaH:FinalConfirmation_Q1_A2_010', 'getAttention': False})
        }
    } else {
        goto Event7
    }
}
