-------- EventFlow: Ev_PartnerSeparate --------

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['Signal']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartParam', 'StartPreset']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: EvLink
entrypoint: None()
actions: ['SetCullMode', 'SetVisibility', 'PlayAnimation']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump', 'UnforbidLaunchApplet', 'ForbidLaunchApplet']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: []
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'SetCullMode', 'SetVisibility', 'PlayAnimation', 'AimDegreeAngle', 'WarpToActor']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['StopBGM', 'StopRegionBgm', 'DisableRegionBgmAutoPlay', 'PlayBGM', 'PlayOneshotSystemSE', 'StopZoneBaseAmbience']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['PlayActorOriginCameraAnimation']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['SetCullMode', 'SetVisibility', 'PlayAnimation', 'LookAtStage', 'PlayAnimUpperBodyOneshot', 'PlayAnimationNoWait', 'SetFacialExpression']
queries: []
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: EvPartnerPhotonLargeQuantity
entrypoint: None()
actions: ['Activate', 'WarpToActor', 'Deactivate', 'PlayAnimationNoWait']
queries: []
params: None

Actor: Movie
entrypoint: None()
actions: ['Play', 'Close', 'Prepare']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

void PartnerIsLeaving() {

    call EvResetCommon.AllResetNowait()

    GameControl.ForbidLaunchApplet()
    Audio.StopZoneBaseAmbience()
    Audio.StopRegionBgm({'fadeSec': 0.0})
    Audio.DisableRegionBgmAutoPlay()
    Audio.PlayBGM({'label': 'BGM_EV_PARTNER_DIPARTURE_A', 'volume': 1.0, 'ignoreSkip': True})

    fork {
        Zelda.PlayAnimationNoWait({'layer': 0, 'name': 'ev_PartnerIsLeaving_wait', 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayAnimation({'name': 'ev_PartnerIsLeaving_wait_upper', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].SetCullMode({'cullMode': 0, 'enabled': True})
        Partner[companion].WarpToActor({'offsetY': 0.4000000059604645, 'offsetX': 0.0, 'distance': 1.5, 'actor': ActorIdentifier(name="Player")})
        Partner[companion].AimDegreeAngle({'angle': 0.0, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    } {
        EvPartnerPhotonLargeQuantity.Activate()
        EvPartnerPhotonLargeQuantity.WarpToActor({'distance': 0.75, 'actor': ActorIdentifier(name="Player"), 'offsetY': 0.0, 'offsetX': 0.0})
    }


    fork {
        Fade.StartParam({'colorR': 1.0, 'colorG': 1.0, 'colorB': 1.0, 'time': 0.0, 'mode': 1})
        Timer.Wait({'time': 3.0})
        Fade.StartParam({'colorR': 1.0, 'colorG': 1.0, 'colorB': 1.0, 'time': 7.0, 'mode': 0})
    } {
        Camera.PlayActorOriginCameraAnimation({'offsetX': 0.0, 'offsetY': 0.0, 'path': 'map/Ev_PartnerSeparate.bfres', 'farClipDistanceCtrl': True, 'name': 'PartnerIsLeaving00_cam', 'target': ActorIdentifier(name="Zelda"), 'chaseRatio': 1.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        EvPartnerPhotonLargeQuantity.PlayAnimationNoWait({'name': 'PartnerIsLeaving_cam01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Zelda.PlayAnimation({'layer': 0, 'name': 'ev_PartnerIsLeaving_wakeup', 'blendFrame': -1, 'restart': False})
    } {
        Zelda.SetFacialExpression({'expression': 'sleep'})
        Timer.Wait({'time': 7.0})
        Zelda.SetFacialExpression({'expression': 'serious_few'})
        Timer.Wait({'time': 4.0})
        Zelda.SetFacialExpression({'expression': 'slightly_om'})
    }


    fork {

        fork {
            Partner[companion].PlayAnimation({'name': 'ev_PartnerIsLeaving_appear', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Partner[companion].PlayAnimation({'name': 'ev_PartnerIsLeaving_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Zelda.PlayAnimation({'layer': 0, 'name': 'ev_PartnerIsLeaving_lookaround', 'blendFrame': -1, 'restart': False})
            Zelda.PlayAnimation({'layer': 0, 'name': 'ev_PartnerIsLeaving_wait', 'blendFrame': 0, 'restart': False})
        }


        fork {
            Timer.Wait({'time': 8.0})
            Timer.Wait({'time': 0.5})
            Timer.Wait({'time': 9.300000190734863})

            fork {
                Zelda.PlayAnimUpperBodyOneshot({'blendSecPer60': 24, 'name': 'ev_PartnerIsLeaving_yes'})
            } {
                Timer.Wait({'time': 3.0})
            }

            Timer.Wait({'time': 1.7000000476837158})
            Timer.Wait({'time': 1.0})

            fork {
                Partner[companion].PlayAnimation({'name': 'ev_PartnerIsLeaving_yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Timer.Wait({'time': 6.0})
            }

            Timer.Wait({'time': 0.5})
            Timer.Wait({'time': 5.0})
            Timer.Wait({'time': 1.0})

            fork {
                Timer.Wait({'time': 1.5})
                Partner[companion].PlayAnimation({'name': 'ev_PartnerIsLeaving_think', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Zelda.PlayAnimation({'layer': 1, 'name': 'ev_PartnerIsLeaving_wait_down_st', 'blendFrame': -1, 'restart': False})
                Timer.Wait({'time': 10.0})
                Zelda.PlayAnimUpperBodyOneshot({'name': 'ev_PartnerIsLeaving_wait_st', 'blendSecPer60': 24})
            } {
                Timer.Wait({'time': 12.0})
            }

            Timer.Wait({'time': 0.5})

            fork {
                Partner[companion].PlayAnimation({'name': 'ev_PartnerIsLeaving_lookside', 'blendFrame': 21, 'layer': 0, 'restart': False})
                Partner[companion].PlayAnimation({'name': 'ev_PartnerIsLeaving_think', 'blendFrame': 0, 'layer': 0, 'restart': False})
            } {
                Timer.Wait({'time': 7.0})
            }

            Timer.Wait({'time': 0.5})

            fork {
                Timer.Wait({'time': 1.5})
                Partner[companion].PlayAnimation({'name': 'ev_PartnerIsLeaving_wait', 'blendFrame': 30, 'layer': 0, 'restart': False})
                Timer.Wait({'time': 7.0})
                Partner[companion].PlayAnimation({'name': 'ev_PartnerIsLeaving_sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Zelda.PlayAnimation({'layer': 1, 'name': 'ev_PartnerIsLeaving_wait_down_st', 'blendFrame': -1, 'restart': False})
            } {
                Timer.Wait({'time': 12.0})
            }

            Timer.Wait({'time': 1.0})
            Timer.Wait({'time': 3.0})
            Timer.Wait({'time': 4.0})

            fork {
                Timer.Wait({'time': 0.5})
                Partner[companion].PlayAnimation({'name': 'ev_PartnerIsLeaving_understand', 'blendFrame': 36, 'layer': 0, 'restart': False})
            } {
                Timer.Wait({'time': 2.0})
                Zelda.PlayAnimUpperBodyOneshot({'name': 'ev_PartnerIsLeaving_wait_st', 'blendSecPer60': 24})
            } {
                Timer.Wait({'time': 4.5})
            }

            Timer.Wait({'time': 4.199999809265137})

            fork {
                Partner[companion].PlayAnimation({'name': 'ev_PartnerIsLeaving_appeal', 'layer': 0, 'blendFrame': -1, 'restart': False})
                Timer.Wait({'time': 4.099999904632568})
                Partner[companion].PlayAnimation({'name': 'ev_PartnerIsLeaving_yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
                Timer.Wait({'time': 2.9000000953674316})
            } {
                Timer.Wait({'time': 13.0})
            }

            Timer.Wait({'time': 1.0})

            fork {
                Timer.Wait({'time': 0.20000000298023224})
                Partner[companion].PlayAnimation({'name': 'ev_PartnerIsLeaving_yes02', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Timer.Wait({'time': 6.0})
            }

            Timer.Wait({'time': 1.0})
            Timer.Wait({'time': 7.0})
            Timer.Wait({'time': 2.0})

            fork {
                Timer.Wait({'time': 0.20000000298023224})
                Partner[companion].PlayAnimation({'name': 'ev_PartnerIsLeaving_sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Timer.Wait({'time': 5.0})
            }

            Timer.Wait({'time': 1.0})

            fork {
                Partner[companion].PlayAnimation({'name': 'ev_PartnerIsLeaving_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Timer.Wait({'time': 3.0})
            }

            Timer.Wait({'time': 0.5})

            fork {
                Partner[companion].PlayAnimation({'name': 'ev_PartnerIsLeaving_appeal', 'layer': 0, 'blendFrame': -1, 'restart': False})
                Partner[companion].PlayAnimation({'name': 'ev_PartnerIsLeaving_yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Timer.Wait({'time': 7.0})
            }

        } {

            fork {
                Partner[companion].Talk({'message': 'scenario/StoryAreaH:RevivingWorld_010', 'getAttention': False})
            } {
                Timer.Wait({'time': 8.0})
                Dialog.Signal()
            }

            EvPartnerPhotonLargeQuantity.Deactivate()
            Timer.Wait({'time': 0.5})

            fork {
                Partner[companion].Talk({'message': 'scenario/StoryAreaH:RevivingWorld_020', 'getAttention': False})
            } {
                Timer.Wait({'time': 7.0})
                Dialog.Signal()
                Timer.Wait({'time': 7.0})
                Dialog.Signal()
            }

            Timer.Wait({'time': 0.5})

            fork {
                Partner[companion].Talk({'message': 'scenario/StoryAreaH:RevivingWorld_025', 'getAttention': False})
            } {
                Timer.Wait({'time': 6.0})
                Dialog.Signal()
            }

            Timer.Wait({'time': 0.5})

            fork {
                Partner[companion].Talk({'message': 'scenario/StoryAreaH:RevivingWorld_030', 'getAttention': False})
            } {
                Timer.Wait({'time': 5.0})
                Dialog.Signal()
            }

            Timer.Wait({'time': 1.5})

            fork {
                Partner[companion].Talk({'message': 'scenario/StoryAreaH:RevivingWorld_050', 'getAttention': False})
            } {
                Timer.Wait({'time': 5.0})
                Dialog.Signal()
                Timer.Wait({'time': 7.0})
                Dialog.Signal()
            }

            Timer.Wait({'time': 0.5})

            fork {
                Partner[companion].Talk({'message': 'scenario/StoryAreaH:RevivingWorld_060', 'getAttention': False})
            } {
                Timer.Wait({'time': 7.0})
                Dialog.Signal()
            }

            Timer.Wait({'time': 2.0})

            fork {
                Partner[companion].Talk({'message': 'scenario/StoryAreaH:RevivingWorld_070', 'getAttention': False})
            } {
                Timer.Wait({'time': 5.0})
                Dialog.Signal()
                Timer.Wait({'time': 7.0})
                Dialog.Signal()
            }

            Timer.Wait({'time': 1.0})

            fork {
                Partner[companion].Talk({'message': 'scenario/StoryAreaH:RevivingWorld_080', 'getAttention': False})
            } {
                Timer.Wait({'time': 3.0})
                Dialog.Signal()
            }

            Timer.Wait({'time': 1.0})

            fork {

                fork {
                    Partner[companion].Talk({'message': 'scenario/StoryAreaH:RevivingWorld_090', 'getAttention': False})
                } {
                    Timer.Wait({'time': 3.0})
                    Dialog.Signal()
                }

            } {
                Timer.Wait({'time': 1.0})
                Timer.Wait({'time': 3.5})
            }

            Timer.Wait({'time': 4.0})

            fork {
                Partner[companion].Talk({'message': 'scenario/StoryAreaH:RevivingWorld_100', 'getAttention': False})
            } {
                Timer.Wait({'time': 6.0})
                Dialog.Signal()
                Timer.Wait({'time': 7.0})
                Dialog.Signal()
            }

            Timer.Wait({'time': 1.0})

            fork {
                Partner[companion].Talk({'message': 'scenario/StoryAreaH:RevivingWorld_110', 'getAttention': False})
            } {
                Timer.Wait({'time': 6.0})
                Dialog.Signal()
            }

            Timer.Wait({'time': 1.0})

            fork {
                Partner[companion].Talk({'message': 'scenario/StoryAreaH:RevivingWorld_120', 'getAttention': False})
            } {
                Timer.Wait({'time': 7.0})
                Dialog.Signal()
            }

            Timer.Wait({'time': 2.0})

            fork {
                Partner[companion].Talk({'message': 'scenario/StoryAreaH:RevivingWorld_130', 'getAttention': False})
            } {
                Timer.Wait({'time': 5.0})
                Dialog.Signal()
            }

            Timer.Wait({'time': 1.0})

            fork {
                Partner[companion].Talk({'message': 'scenario/StoryAreaH:RevivingWorld_140', 'getAttention': False})
            } {
                Timer.Wait({'time': 3.0})
                Dialog.Signal()
            }

            Timer.Wait({'time': 0.5})

            fork {
                Partner[companion].Talk({'message': 'scenario/StoryAreaH:RevivingWorld_150', 'getAttention': False})
            } {
                Timer.Wait({'time': 7.0})
                Dialog.Signal()
            }

        }

    } {
        Timer.Wait({'time': 1.5})
        Zelda.SetFacialExpression({'expression': 'serious_few'})
        Timer.Wait({'time': 8.0})
        Zelda.SetFacialExpression({'expression': 'smile_noOpen'})
        Timer.Wait({'time': 31.0})
        Zelda.SetFacialExpression({'expression': 'surprise'})
        Timer.Wait({'time': 2.0})
        Zelda.SetFacialExpression({'expression': 'normal'})
        Timer.Wait({'time': 2.0})
        Zelda.SetFacialExpression({'expression': 'sad'})
        Timer.Wait({'time': 19.5})
        Timer.Wait({'time': 38.5})
        Zelda.SetFacialExpression({'expression': 'sadsmile'})
        Timer.Wait({'time': 14.0})
        Timer.Wait({'time': 1.0})
        Zelda.SetFacialExpression({'expression': 'smile_noOpen'})
        Timer.Wait({'time': 15.600000381469727})
        Zelda.SetFacialExpression({'expression': 'sadsmile'})
        Timer.Wait({'time': 7.699999809265137})
    } {
        Camera.PlayActorOriginCameraAnimation({'name': 'PartnerIsLeaving01_cam', 'offsetX': 0.0, 'offsetY': 0.0, 'path': 'map/Ev_PartnerSeparate.bfres', 'farClipDistanceCtrl': True, 'target': ActorIdentifier(name="Zelda"), 'chaseRatio': 1.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    }


    fork {
        Timer.Wait({'time': 4.165999889373779})
        Partner[companion].PlayAnimation({'name': 'ev_PartnerIsLeaving_touch_st', 'blendFrame': 24, 'layer': 0, 'restart': False})
        Partner[companion].PlayAnimation({'name': 'ev_PartnerIsLeaving_touch_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 4.665999889373779})
        Zelda.PlayAnimation({'name': 'ev_PartnerIsLeaving_touch_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Zelda.PlayAnimation({'name': 'ev_PartnerIsLeaving_touch_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].Talk({'message': 'scenario/StoryAreaH:RevivingWorld_160', 'getAttention': False})
    } {
        Timer.Wait({'time': 9.300000190734863})
    } {
        Camera.PlayActorOriginCameraAnimation({'offsetX': 0.0, 'offsetY': 0.0, 'path': 'map/Ev_PartnerSeparate.bfres', 'name': 'PartnerIsLeaving02_cam', 'farClipDistanceCtrl': True, 'target': ActorIdentifier(name="Zelda"), 'chaseRatio': 1.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Timer.Wait({'time': 3.0})
        Dialog.Signal()
    } {
        Timer.Wait({'time': 4.550000190734863})
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_PARTNER_SEPARATE2', 'volume': 1.0, 'pitch': 1.0})
    }


    fork {
        Partner[companion].PlayAnimation({'name': 'ev_PartnerIsLeaving_seeyou', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Zelda.PlayAnimation({'name': 'ev_PartnerIsLeaving_seeyou_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Zelda.PlayAnimation({'name': 'ev_PartnerIsLeaving_seeyou_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Camera.PlayActorOriginCameraAnimation({'offsetX': 0.0, 'offsetY': 0.0, 'path': 'map/Ev_PartnerSeparate.bfres', 'name': 'PartnerIsLeaving03_cam', 'farClipDistanceCtrl': True, 'target': ActorIdentifier(name="Zelda"), 'chaseRatio': 1.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Audio.StopBGM({'duration': 13.0, 'label': 'BGM_EV_PARTNER_DIPARTURE_A'})
    } {
        Timer.Wait({'time': 4.5})
        Fade.StartParam({'mode': 1, 'colorR': 1.0, 'colorG': 1.0, 'colorB': 1.0, 'time': 4.0})
    } {
        Timer.Wait({'time': 1.2000000476837158})
        Zelda.SetFacialExpression({'expression': 'farewell_om'})
    } {
        Timer.Wait({'time': 1.9500000476837158})
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_PARTNER_SEPARATE3', 'volume': 1.0, 'pitch': 1.0})
    }

    EventFlags.SetFlag({'symbol': 'LastDungeon_ReturnWeaponToLink', 'value': True})
    EventVariables.SetVariable({'symbol': 'LastDungeon:1388816485'})
    GameControl.UnforbidLaunchApplet()
    GameControl.RequestLevelJump({'level': 'EV_WorldRepairCastle', 'locator': 'ZeldaAndLinkReturn', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void GoToRevivingWorld() {

    fork {
        Zelda.SetCullMode({'cullMode': 0, 'enabled': True})
        Zelda.SetVisibility({'visible': True})
    } {
        Partner[companion].SetCullMode({'enabled': True, 'cullMode': 0})
        Partner[companion].SetVisibility({'visible': True})
    } {
        EvLink.SetCullMode({'cullMode': 0, 'enabled': True})
        EvLink.SetVisibility({'visible': True})
    }

    Zelda.LookAtStage({'distanceOffset': 5.0, 'offsetY': 0.0, 'duration': 0.4000000059604645, 'offsetZ': 2.0, 'offsetX': 2.0, 'panMode': 1, 'chaseRatio': 0.08500000089406967, 'keep': False})
    Timer.Wait({'time': 1.0})

    fork {
        Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EvLink.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Fade.StartPreset({'preset': 'FadeInSlow'})
    }

    QuestSystem.SetProgress({'symbol': 'LastDungeon:1388816485', 'isShowTelopInEvent': False, 'isFrontFade': False})

    call RevivingWorld()

}

void RevivingWorld() {

    fork {
        Movie.Prepare({'filename': 'rd055_RevivingWorld'})
    } {
        GameControl.ForbidLaunchApplet()
    }


    fork {
        Movie.Play({'autoClose': False})
    } {
        Audio.PlayBGM({'ignoreSkip': False, 'label': 'BGM_EV_REVIVING_WORLD', 'volume': 1.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_RD055_REVIVING_WORLD1', 'volume': 1.0, 'pitch': 1.0})
    }

    Fade.StartPreset({'preset': 'CutOutW'})
    Movie.Close()
    Timer.Wait({'time': 5.0})
    GameControl.UnforbidLaunchApplet()
    GameControl.RequestLevelJump({'level': 'Ev_PartnerSeparate', 'locator': 'PartnerIsLeaving', 'offsetX': 0.0, 'offsetZ': 0.0})
}
