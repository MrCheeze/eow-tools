-------- EventFlow: StoneMonumentNorthForest --------

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE', 'SetBGMVolume']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: NorthForestRelic
entrypoint: None()
actions: ['Show', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: StoneMonumentNorthForest
entrypoint: None()
actions: ['SetActorSwitch', 'PlayTailorOtherChannelNoWait', 'LookAtGimmick', 'StopTailorOtherChannel', 'PlayAnimation', 'on', 'SetAutoCalcBoundingVolumeEnabled']
queries: ['CheckActorSwitch']
params: None

Actor: Player
entrypoint: None()
actions: ['MoveToTargetActor', 'AimActor', 'SetInterestIkEnabled', 'DestroyCollisionHitActors']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Shake', 'Reset']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['MoveToBesideTargetActor', 'AimCompassPoint', 'AimActor', 'SetInterestIkEnabled', 'DestroyCollisionHitActors']
queries: []
params: None

Actor: TreeDisappear
entrypoint: None()
actions: ['SetVisibility', 'LookAtGimmick']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: MinisterRight
entrypoint: None()
actions: ['SkipAutoTurn', 'AimActor', 'PlayAnimationNoWait', 'SetFacialExpression']
queries: []
params: None

Actor: EvHyruleSoldier007
entrypoint: None()
actions: ['SkipAutoTurn', 'AimActor', 'PlayAnimationNoWait', 'SetFacialExpression']
queries: []
params: None

Actor: EvHyruleSoldier008
entrypoint: None()
actions: ['SkipAutoTurn', 'AimActor', 'PlayAnimationNoWait', 'SetFacialExpression']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['MoveToBesideTargetActor', 'AimActor']
queries: []
params: None

Actor: Vibration
entrypoint: None()
actions: ['PlayVibration', 'StopVibration']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['ForbidLaunchApplet', 'UnforbidLaunchApplet', 'ResetSensorEventResetContainsActors']
queries: []
params: None

void NorthForestTips() {
    if !StoneMonumentNorthForest.CheckActorSwitch({'switchIndex': 2}) {
        if !StoneMonumentNorthForest.CheckActorSwitch({'switchIndex': 0}) {
            Dialog.Show({'message': 'scenario/StoryAreaH:NorthForestTips_005'})
        } else {

            call NorthForest._AllResetnorthforest({'disappearHorse': True})

            Dialog.Show({'message': 'scenario/StoryAreaH:NorthForestTips_010'})
            Dialog.Show({'message': 'scenario/StoryAreaH:NorthForestTips_020'})
            Audio.SetBGMVolume({'duration': 2.0, 'volume': 0.20000000298023224})
            if !StoneMonumentNorthForest.CheckActorSwitch({'switchIndex': 1}) {

                fork {
                    StoneMonumentNorthForest.LookAtGimmick({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
                } {
                    GameControl.ResetSensorEventResetContainsActors({'eventReset': False, 'cemeteryRevive': False})
                }

                Timer.Wait({'time': 0.5})
                GameControl.ForbidLaunchApplet()

                fork {

                    fork {

                        fork {
                            MinisterRight.AimActor({'actor': ActorIdentifier(name="StoneMonumentNorthForest"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                        } {
                            MinisterRight.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
                            MinisterRight.SetFacialExpression({'expression': 'surprise'})
                        }

                    } {

                        fork {
                            EvHyruleSoldier007.AimActor({'actor': ActorIdentifier(name="StoneMonumentNorthForest"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                        } {
                            EvHyruleSoldier007.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
                            EvHyruleSoldier007.SetFacialExpression({'expression': 'surprise'})
                        }

                    } {

                        fork {
                            EvHyruleSoldier008.AimActor({'actor': ActorIdentifier(name="StoneMonumentNorthForest"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                        } {
                            EvHyruleSoldier008.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
                            EvHyruleSoldier008.SetFacialExpression({'expression': 'surprise'})
                        }

                    }

                } {
                    Camera.Shake({'duration': 10.0, 'power': 2})
                } {
                    Vibration.PlayVibration({'label': '39_L07_ThumpLoop2', 'pan': 0.5, 'ratio': 1.0})
                } {
                    Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="StoneMonumentNorthForest"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    Timer.Wait({'time': 1.0})
                    StoneMonumentNorthForest.PlayTailorOtherChannelNoWait({'channel': 'on_omen', 'restart': False, 'index': -1, 'stopOnSkipped': True})
                    Player.MoveToTargetActor({'distance': 2.25, 'withoutTurn': False, 'actor': ActorIdentifier(name="StoneMonumentNorthForest"), 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
                    Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="StoneMonumentNorthForest"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    StoneMonumentNorthForest.PlayAnimation({'name': 'on', 'layer': 0, 'blendFrame': -1, 'restart': False})

                    fork {
                        StoneMonumentNorthForest.on()
                    } {
                        Player.SetInterestIkEnabled({'enable': True})
                        Player.AimActor({'withoutTurn': True, 'offsetY': 2.0, 'actor': ActorIdentifier(name="StoneMonumentNorthForest"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    } {
                        Partner.SetInterestIkEnabled({'enable': True})
                        Partner.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="StoneMonumentNorthForest"), 'offsetY': 2.0, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    }

                } {
                    Audio.PlayOneshotSystemSE({'label': 'SE_EV_JAB_RETURN_RUMBLE', 'volume': 1.0, 'pitch': 1.0})
                }

                Vibration.StopVibration({'label': '39_L07_ThumpLoop2'})
                StoneMonumentNorthForest.SetAutoCalcBoundingVolumeEnabled({'enabled': True})
                StoneMonumentNorthForest.LookAtGimmick({'offsetZ': 6.0, 'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'keep': False})
                Timer.Wait({'time': 1.0})
                StoneMonumentNorthForest.StopTailorOtherChannel({'channel': 'GlowOn', 'index': -1})
                NorthForestRelic.PlayTailorOtherChannelNoWait({'channel': 'Appear', 'restart': False, 'index': -1, 'stopOnSkipped': True})
                NorthForestRelic.Show()
                Timer.Wait({'time': 0.20000000298023224})

                fork {

                    fork {
                        MinisterRight.AimActor({'actor': ActorIdentifier(name="NorthForestRelic"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    } {
                        MinisterRight.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
                        MinisterRight.SetFacialExpression({'expression': 'surprise'})
                    }

                } {

                    fork {
                        EvHyruleSoldier007.AimActor({'actor': ActorIdentifier(name="NorthForestRelic"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    } {
                        EvHyruleSoldier007.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
                        EvHyruleSoldier007.SetFacialExpression({'expression': 'surprise'})
                    }

                } {

                    fork {
                        EvHyruleSoldier008.AimActor({'actor': ActorIdentifier(name="NorthForestRelic"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    } {
                        EvHyruleSoldier008.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
                        EvHyruleSoldier008.SetFacialExpression({'expression': 'surprise'})
                    }

                } {

                    fork {
                        Partner.AimActor({'actor': ActorIdentifier(name="NorthForestRelic"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    } {
                        Player.AimActor({'actor': ActorIdentifier(name="NorthForestRelic"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    }

                }

                Timer.Wait({'time': 1.0})
                Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})

                fork {
                    MinisterRight.AimActor({'actor': ActorIdentifier(name="StoneMonumentNorthForest"), 'duration': 0.10000000149011612, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                } {
                    EvHyruleSoldier007.AimActor({'actor': ActorIdentifier(name="StoneMonumentNorthForest"), 'duration': 0.10000000149011612, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                } {
                    EvHyruleSoldier008.AimActor({'actor': ActorIdentifier(name="StoneMonumentNorthForest"), 'duration': 0.10000000149011612, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                }

                MinisterRight.SkipAutoTurn()
                EvHyruleSoldier007.SkipAutoTurn()
                EvHyruleSoldier008.SkipAutoTurn()
                StoneMonumentNorthForest.SetActorSwitch({'value': True, 'switchIndex': 1})
                QuestSystem.SetProgress({'symbol': 'LastDungeon:3262011794', 'isShowTelopInEvent': False, 'isFrontFade': False})
                GameControl.UnforbidLaunchApplet()
                Audio.SetBGMVolume({'duration': 2.0, 'volume': 1.0})
            }
        }
    } else {

        call EvResetCommon.AllReset()

        Audio.SetBGMVolume({'volume': 0.0, 'duration': 1.0})

        fork {
            StoneMonumentNorthForest.LookAtGimmick({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        } {
            Zelda.MoveToBesideTargetActor({'speed': 0, 'actor': ActorIdentifier(name="StoneMonumentNorthForest"), 'offsetZ': 2.0, 'offsetX': 0.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
            Player.DestroyCollisionHitActors({'eventReset': False})
            Zelda.AimActor({'actor': ActorIdentifier(name="StoneMonumentNorthForest"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        fork {
            StoneMonumentNorthForest.PlayTailorOtherChannelNoWait({'channel': 'Light', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            Timer.Wait({'time': 3.9000000953674316})
        } {
            Partner.MoveToBesideTargetActor({'offsetX': 1.0, 'offsetY': 1.0, 'offsetZ': 1.0, 'actor': ActorIdentifier(name="Zelda"), 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
            Partner.DestroyCollisionHitActors({'eventReset': False})
            Partner.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        }

        StoneMonumentNorthForest.SetActorSwitch({'switchIndex': 3, 'value': True})
        Timer.Wait({'time': 3.0})
        TreeDisappear.LookAtGimmick({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        TreeDisappear.SetVisibility({'visible': False})
        Timer.Wait({'time': 2.0})
        StoneMonumentNorthForest.LookAtGimmick({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})

        call NorthForest.SolvedGimmick()

    }
}
