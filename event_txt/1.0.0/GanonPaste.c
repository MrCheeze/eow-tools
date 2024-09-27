-------- EventFlow: GanonPaste --------

Actor: Player
entrypoint: None()
actions: ['WarpToActorLinkedPointWithCompassPoint', 'PlayAnimation', 'AimActor', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['MoveToBesideTargetActor', 'AimCompassPoint', 'WarpToActorLinkedPointWithCompassPoint', 'EnableAutoMovement', 'SetVisibility', 'AimActor', 'GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimation']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayBGM', 'SetBGMVolume', 'StopAllBGM', 'PlayOneshotSystemSE', 'StopSE', 'Prepare', 'StopZoneBgm', 'WaitNextBeatSamplePositionAndStopAndPlayBossGanonBgm', 'StopZoneBaseAmbience']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Reset', 'LookAt3ActorsCenterAsTalker', 'SetShadowMapSettings', 'PlayActorOriginCameraAnimation', 'Shake']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['SetCanSkip', 'InvokeTimeline', 'PreloadTimeline']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestAutoSave', 'ForbidSave', 'RequestLevelJump', 'ForbidLaunchApplet', 'UnforbidLaunchApplet']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['MoveToCompassPoint', 'AimCompassPoint', 'PlayAnimation', 'MorphTo', 'SetShadowDecalEnable', 'SetRestartPositionToActor', 'SetVisibility', 'AimActor']
queries: ['CheckMorph']
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: GanonPaste
entrypoint: None()
actions: ['LookAtTalker', 'CameraLockon', 'RoomDoorClose', 'SetCullMode', 'CameraLockoff', 'PlayAnimation', 'PlayTailorOtherChannelNoWait', 'Talk', 'SetVisibilityTrident', 'Activate', 'WarpToActorWithCompassPoint', 'PlayAnimationNoWait', 'PlayMaterialAnimationNoWait', 'ItemDropToActor', 'Destroy', 'SetVisibility', 'ResetActiveAndPesteActors', 'SetTalkerName']
queries: ['IsDownPose', 'GetCurrentTrident']
params: None

Actor: ImpostorMinisterLeft
entrypoint: None()
actions: ['Deactivate', 'SetInterestIkEnabled', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: ImpostorMinisterRight
entrypoint: None()
actions: ['Deactivate', 'SetInterestIkEnabled', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: ItemHeartContainer
entrypoint: None()
actions: ['SetVisibility']
queries: []
params: None

Actor: ImpostorHyruleKing
entrypoint: None()
actions: ['Talk', 'PlayAnimation', 'Deactivate', 'PlayTailorOtherChannelNoWait', 'PlayAnimationNoWait', 'SetFacialExpression']
queries: []
params: None

Actor: Door
entrypoint: None()
actions: ['SetVisibility']
queries: []
params: None

Actor: EvTecuum[5]
entrypoint: None()
actions: ['PlayAnimation', 'Activate', 'Deactivate', 'WarpToActor']
queries: []
params: None

Actor: EvTecuum[4]
entrypoint: None()
actions: ['PlayAnimation', 'Activate', 'Deactivate', 'WarpToActor']
queries: []
params: None

Actor: EvTecuum[3]
entrypoint: None()
actions: ['PlayAnimation', 'Activate', 'Deactivate', 'WarpToActor']
queries: []
params: None

Actor: EvTecuum[2]
entrypoint: None()
actions: ['PlayAnimation', 'Activate', 'Deactivate', 'WarpToActor']
queries: []
params: None

Actor: EvTecuum[1]
entrypoint: None()
actions: ['PlayAnimation', 'Activate', 'Deactivate', 'WarpToActor']
queries: []
params: None

Actor: EvTecuum[Right]
entrypoint: None()
actions: ['PlayAnimation', 'Activate', 'Deactivate', 'WarpToActor']
queries: []
params: None

Actor: EvTecuum[Left]
entrypoint: None()
actions: ['PlayAnimation', 'Activate', 'Deactivate', 'WarpToActor']
queries: []
params: None

Actor: EvTecuum[King]
entrypoint: None()
actions: ['PlayAnimation', 'Activate', 'Deactivate', 'WarpToActor']
queries: []
params: None

Actor: BattleChallenge
entrypoint: None()
actions: ['ShowTimer']
queries: ['GetConditionNumber']
params: None

Actor: GanonTrident
entrypoint: None()
actions: ['PlayMaterialAnimationNoWait', 'EnableEffectWearHaze']
queries: []
params: None

Actor: GanonTridentDetached
entrypoint: None()
actions: ['PlayMaterialAnimationNoWait']
queries: []
params: None

Actor: GanonTridentPorori
entrypoint: None()
actions: ['PlayMaterialAnimationNoWait']
queries: []
params: None

Actor: Movie
entrypoint: None()
actions: ['Play', 'Close', 'Prepare']
queries: []
params: None

Actor: EvBackWallGanon
entrypoint: None()
actions: ['SetComponentActive']
queries: []
params: None

Actor: PartnerPhotonLiberation[a]
entrypoint: None()
actions: ['WarpToActorLinkedPoint']
queries: []
params: None

Actor: PartnerPhotonLiberation[b]
entrypoint: None()
actions: ['WarpToActorLinkedPoint']
queries: []
params: None

Actor: PartnerPhoton[a]
entrypoint: None()
actions: ['WarpToActorLinkedPoint']
queries: []
params: None

Actor: PartnerPhoton[b]
entrypoint: None()
actions: ['WarpToActorLinkedPoint']
queries: []
params: None

Actor: PartnerPhoton[c]
entrypoint: None()
actions: ['WarpToActorLinkedPoint']
queries: []
params: None

Actor: PartnerPhoton[d]
entrypoint: None()
actions: ['WarpToActorLinkedPoint']
queries: []
params: None

Actor: PartnerPhoton[e]
entrypoint: None()
actions: ['WarpToActorLinkedPoint']
queries: []
params: None

Actor: PartnerPhoton[f]
entrypoint: None()
actions: ['WarpToActorLinkedPoint']
queries: []
params: None

void Appear() {
    Zelda.SetRestartPositionToActor({'direction': 2, 'distance': -9.0, 'stance': 'Ground'})
    GameControl.RequestAutoSave({'immediate': True, 'name': 'GanonPaste', 'needsStartupEvent': False, 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})

    call AppearCommon1()


    call FindOutHyruleKing()


    call AppearCommon2()

    GameControl.ForbidSave()
}

void Dead() {

    fork {
        if !GanonPaste.IsDownPose() {
            GanonPaste.PlayAnimationNoWait({'name': 'ev_dead_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } else {
            GanonPaste.PlayAnimationNoWait({'name': 'ev_dead_down_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }
    } {

        call BossCommon.HitStop({'enemy': ActorIdentifier(name="GanonPaste")})

    }

    GanonPaste.PlayTailorOtherChannelNoWait({'channel': 'PartnerPhoton_Release', 'restart': False, 'index': -1, 'stopOnSkipped': True})

    fork {
        Timer.Wait({'time': 1.6670000553131104})

        fork {
            switch GanonPaste.GetCurrentTrident() {
              case 0:

                call Dissolve.Dissolve({'actor': ActorIdentifier(name="GanonTrident")})

                GanonTrident.PlayMaterialAnimationNoWait({'name': 'dead_dissolve_Trident', 'layer': 0})
              case 1:

                call Dissolve.Dissolve({'actor': ActorIdentifier(name="GanonTridentDetached")})

                GanonTridentDetached.PlayMaterialAnimationNoWait({'name': 'dead_dissolve_Trident', 'layer': 0})
              case 2:

                call Dissolve.Dissolve({'actor': ActorIdentifier(name="GanonTridentPorori")})

                GanonTridentPorori.PlayMaterialAnimationNoWait({'name': 'dead_dissolve_Trident', 'layer': 0})
            }
        } {

            call Dissolve.Dissolve({'actor': ActorIdentifier(name="GanonPaste")})

            GanonPaste.PlayMaterialAnimationNoWait({'name': 'dead_dissolve', 'layer': 0})
        }

        GanonTrident.EnableEffectWearHaze({'enable': False})
    } {
        Timer.Wait({'time': 3.3329999446868896})
    }

    EventVariables.SetVariable({'symbol': 'Midpoint:3613805900'})
    Timer.Wait({'time': 1.1670000553131104})

    fork {

        call BossCommon.BossExtinction({'enemy': ActorIdentifier(name="GanonPaste")})

    } {
        Timer.Wait({'time': 1.6670000553131104})
        GanonPaste.ItemDropToActor({'displacementY': 0.0, 'displacementX': 0.0, 'displacementZ': 0.0, 'linkedItemScatter': False})
    }

    GanonPaste.CameraLockoff()
    EventFlags.SetFlag({'value': True, 'symbol': 'EvE_GanonPasteDead'})
    EventVariables.SetVariable({'symbol': 'Midpoint:2895641642'})
    QuestSystem.SetProgress({'symbol': 'Midpoint:2223612379', 'isShowTelopInEvent': False, 'isFrontFade': False})

    call TouchWorldGlobe_HyruleCastle()

}

void Angry() {

    fork {
        Audio.WaitNextBeatSamplePositionAndStopAndPlayBossGanonBgm({'label': 'BGM_BATTLE_GANON_OP2', 'stoplabel': 'BGM_BATTLE_GANON_OP'})

        fork {
            GanonPaste.LookAtTalker({'duration': 0.5, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 10.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        } {
            if !GanonPaste.IsDownPose() {
                GanonPaste.PlayAnimation({'name': 'ev_angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } else {
                GanonPaste.PlayAnimation({'name': 'ev_angry_Down', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }
        } {
            GanonPaste.PlayTailorOtherChannelNoWait({'channel': 'Aura_Anger', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        }

        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
        GanonPaste.CameraLockon({'maxSpeed': 100.0})
    } {

        call EvResetCommon.AngryReset()

    }

}

void FindOutHyruleKing() {

    fork {
        Camera.LookAt3ActorsCenterAsTalker({'offsetZ': 0.0, 'duration': 1.0, 'chaseRatio': 0.05000000074505806, 'actor1': ActorIdentifier(name="ImpostorHyruleKing"), 'actor2': ActorIdentifier(name="ImpostorMinisterRight"), 'actor3': ActorIdentifier(name="ImpostorMinisterLeft"), 'distanceOffset': 1.0, 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Zelda.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        ImpostorMinisterLeft.SetInterestIkEnabled({'enable': False})
    } {
        ImpostorMinisterRight.SetInterestIkEnabled({'enable': False})
    }

    if !Zelda.CheckMorph({'morphKind': 0}) {
        Zelda.MorphTo({'kind': 0})
    }
    Zelda.SetShadowDecalEnable({'enable': False})
    Zelda.PlayAnimation({'name': 'ev_BossApear_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ImpostorHyruleKing.SetFacialExpression({'expression': 'imposter_smile'})
        ImpostorHyruleKing.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ImpostorHyruleKing.Talk({'message': 'scenario/StoryAreaHyruleCastle:FindOutHyruleKing_010', 'getAttention': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_GANON_APPEAR2', 'volume': 1.0, 'pitch': 1.0})
    }

    ImpostorHyruleKing.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ImpostorHyruleKing.Talk({'message': 'scenario/StoryAreaHyruleCastle:FindOutHyruleKing_030', 'getAttention': False})

    fork {
        ImpostorHyruleKing.PlayAnimation({'name': 'no', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        ImpostorHyruleKing.SetFacialExpression({'expression': 'imposter_angry'})
    }

    ImpostorHyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ImpostorHyruleKing.Talk({'message': 'scenario/StoryAreaHyruleCastle:FindOutHyruleKing_030_02', 'getAttention': False})

    fork {
        ImpostorHyruleKing.SetFacialExpression({'expression': 'imposter_normal'})
        ImpostorHyruleKing.Talk({'message': 'scenario/StoryAreaHyruleCastle:FindOutHyruleKing_040', 'getAttention': False})
    } {
        ImpostorHyruleKing.PlayAnimation({'name': 'order_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Audio.PlayOneshotSystemSE({'label': 'SE_EV_GANON_APPEAR_TRIDENT', 'volume': 1.0, 'pitch': 1.0})
    ImpostorHyruleKing.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        GanonPaste.SetVisibilityTrident({'visibility': 1})
    } {
        GanonPaste.PlayAnimation({'name': 'ev_appear_trident_fall', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Camera.Shake({'power': 3, 'duration': 0.699999988079071})
        Timer.Wait({'time': 0.30000001192092896})
    }

    Timer.Wait({'time': 1.0})

    fork {
        Camera.SetShadowMapSettings({'ShadowMapSettings': 'DemoStageCamera'})

        fork {
            GanonPaste.PlayTailorOtherChannelNoWait({'channel': 'ev_appear_demo', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        } {
            ImpostorHyruleKing.PlayTailorOtherChannelNoWait({'channel': 'ev_ganon_appear_demo', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        } {
            ImpostorMinisterLeft.PlayTailorOtherChannelNoWait({'channel': 'ev_ganon_appear_demo', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        } {
            ImpostorMinisterRight.PlayTailorOtherChannelNoWait({'channel': 'ev_ganon_appear_demo', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        }


        fork {
            Camera.PlayActorOriginCameraAnimation({'path': 'actor/GanonPaste.bfres', 'name': 'PasteGanonAppear01_cam', 'offsetZ': 2.0, 'target': ActorIdentifier(name="ImpostorHyruleKing"), 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
        } {
            Audio.Prepare({'label': 'BGM_OP_GANON_APPEAR', 'kind': 0, 'volume': 1.0})
            Timer.Wait({'time': 13.533329963684082})
            Audio.PlayBGM({'label': 'BGM_OP_GANON_APPEAR', 'ignoreSkip': False, 'volume': 1.0})
        }

    } {
        Door.SetVisibility({'visible': False})
    } {
        Zelda.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    } {
        EvBackWallGanon.SetComponentActive({'name': 'skeletalModelComp', 'active': False})
    } {

        fork {
            Timer.Wait({'time': 0.5})
            ImpostorHyruleKing.Deactivate()
            EvTecuum[King].WarpToActor({'offsetX': 0.0, 'actor': ActorIdentifier(name="ImpostorHyruleKing"), 'distance': 2.0, 'offsetY': 0.0})
            EvTecuum[King].Activate()
            EvTecuum[King].PlayAnimation({'name': 'ev_PasteGanonAppear_King', 'layer': 0, 'blendFrame': -1, 'restart': False})
            EvTecuum[King].Deactivate()
        } {
            Timer.Wait({'time': 1.2000000476837158})
            ImpostorMinisterLeft.Deactivate()
            EvTecuum[Left].WarpToActor({'offsetX': 0.0, 'actor': ActorIdentifier(name="ImpostorHyruleKing"), 'distance': 2.0, 'offsetY': 0.0})
            EvTecuum[Left].Activate()
            EvTecuum[Left].PlayAnimation({'name': 'ev_PasteGanonAppear_Left', 'layer': 0, 'blendFrame': -1, 'restart': False})
            EvTecuum[Left].Deactivate()
        } {
            Timer.Wait({'time': 1.600000023841858})
            ImpostorMinisterRight.Deactivate()
            EvTecuum[Right].WarpToActor({'offsetX': 0.0, 'actor': ActorIdentifier(name="ImpostorHyruleKing"), 'distance': 2.0, 'offsetY': 0.0})
            EvTecuum[Right].Activate()
            EvTecuum[Right].PlayAnimation({'name': 'ev_PasteGanonAppear_Right', 'layer': 0, 'blendFrame': -1, 'restart': False})
            EvTecuum[Right].Deactivate()
        } {
            Timer.Wait({'time': 3.5})
            EvTecuum[1].WarpToActor({'distance': 2.0, 'offsetY': 0.25, 'actor': ActorIdentifier(name="ImpostorHyruleKing"), 'offsetX': 0.0})
            EvTecuum[1].Activate()
            EvTecuum[1].PlayAnimation({'name': 'ev_PasteGanonAppear_1', 'layer': 0, 'blendFrame': -1, 'restart': False})
            EvTecuum[1].Deactivate()
        } {
            Timer.Wait({'time': 4.300000190734863})
            EvTecuum[2].WarpToActor({'distance': 2.0, 'offsetY': 0.25, 'actor': ActorIdentifier(name="ImpostorHyruleKing"), 'offsetX': 0.0})
            EvTecuum[2].Activate()
            EvTecuum[2].PlayAnimation({'name': 'ev_PasteGanonAppear_2', 'layer': 0, 'blendFrame': -1, 'restart': False})
            EvTecuum[2].Deactivate()
        } {
            Timer.Wait({'time': 4.0})
            EvTecuum[3].WarpToActor({'distance': 2.0, 'offsetY': 0.5, 'actor': ActorIdentifier(name="ImpostorHyruleKing"), 'offsetX': 0.0})
            EvTecuum[3].Activate()
            EvTecuum[3].PlayAnimation({'name': 'ev_PasteGanonAppear_3', 'layer': 0, 'blendFrame': -1, 'restart': False})
            EvTecuum[3].Deactivate()
        } {
            Timer.Wait({'time': 3.0})
            EvTecuum[4].WarpToActor({'distance': 2.0, 'actor': ActorIdentifier(name="ImpostorHyruleKing"), 'offsetY': -0.25, 'offsetX': 0.0})
            EvTecuum[4].Activate()
            EvTecuum[4].PlayAnimation({'name': 'ev_PasteGanonAppear_4', 'layer': 0, 'blendFrame': -1, 'restart': False})
            EvTecuum[4].Deactivate()
        } {
            Timer.Wait({'time': 3.799999952316284})
            EvTecuum[5].WarpToActor({'distance': 2.0, 'actor': ActorIdentifier(name="ImpostorHyruleKing"), 'offsetY': -0.5, 'offsetX': 0.0})
            EvTecuum[5].Activate()
            EvTecuum[5].PlayAnimation({'name': 'ev_PasteGanonAppear_5', 'layer': 0, 'blendFrame': -1, 'restart': False})
            EvTecuum[5].Deactivate()
        }

        Timer.Wait({'time': 1.0})

        fork {
            GanonPaste.PlayAnimation({'name': 'ev_appear_fall_land', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GanonPaste.SetVisibility({'visible': True})
        }


        fork {
            GanonPaste.PlayAnimation({'name': 'ev_appear_before_talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GanonPaste.SetTalkerName({'message': 'glossary/Character:Unknown', 'keep': False})
        } {
            Zelda.AimActor({'actor': ActorIdentifier(name="GanonPaste"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].AimActor({'actor': ActorIdentifier(name="GanonPaste"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }


    fork {
        Camera.PlayActorOriginCameraAnimation({'path': 'actor/GanonPaste.bfres', 'name': 'PasteGanonAppear02_cam', 'offsetY': 0.0, 'offsetZ': 1.0, 'target': ActorIdentifier(name="ImpostorHyruleKing"), 'chaseRatio': 1.0, 'offsetX': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Door.SetVisibility({'visible': True})
    } {
        Zelda.SetVisibility({'visible': True})
    } {
        Partner[companion].SetVisibility({'visible': True})
        Timer.Wait({'time': 0.5})
        Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaHyruleCastle:FindOutHyruleKing_050', 'aimToPlayer': False, 'aimFromPlayer': False, 'playerTalkAnim': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

        fork {
            Partner[companion].Talk({'message': 'scenario/StoryAreaHyruleCastle:FindOutHyruleKing_080', 'getAttention': False})
        } {
            Timer.Wait({'time': 0.6000000238418579})
            Player.SetInterestIkEnabled({'enable': True})
            Player.AimActor({'withoutTurn': True, 'duration': 0.0, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetY': -1.0, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Timer.Wait({'time': 0.5})
    } {
        GanonPaste.WarpToActorWithCompassPoint({'direction': 0, 'actor': ActorIdentifier(name="ImpostorHyruleKing"), 'distance': 1.0, 'offsetY': 0.0, 'offsetX': 0.0})
    } {
        GanonPaste.SetVisibility({'visible': False})
    } {
        EvBackWallGanon.SetComponentActive({'name': 'skeletalModelComp', 'active': True})
    }


    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaHyruleCastle:FindOutHyruleKing_080_02', 'getAttention': False})
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})

        fork {
            Camera.PlayActorOriginCameraAnimation({'path': 'actor/GanonPaste.bfres', 'offsetY': 0.0, 'offsetZ': 1.0, 'name': 'PasteGanonAppear02_2_cam', 'target': ActorIdentifier(name="ImpostorHyruleKing"), 'chaseRatio': 1.0, 'offsetX': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
        } {
            Door.SetVisibility({'visible': False})
        } {
            GanonPaste.SetVisibility({'visible': True})
        } {
            Zelda.SetVisibility({'visible': False})
        } {
            Partner[companion].SetVisibility({'visible': False})
        } {
            EvBackWallGanon.SetComponentActive({'name': 'skeletalModelComp', 'active': False})
        }

    } {
        Zelda.AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': True, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})
    GanonPaste.SetTalkerName({'message': 'glossary/Character:Ganon', 'keep': False})
    GanonPaste.PlayAnimationNoWait({'name': 'ev_appear_before_talk_talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GanonPaste.Talk({'message': 'scenario/StoryAreaHyruleCastle:FindOutHyruleKing_100', 'getAttention': False})
    GanonPaste.PlayAnimationNoWait({'name': 'ev_appear_before_talk_talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GanonPaste.Talk({'message': 'scenario/StoryAreaHyruleCastle:FindOutHyruleKing_100_02', 'getAttention': False})
    Timer.Wait({'time': 1.0})
    GanonPaste.PlayAnimationNoWait({'name': 'ev_appear_before_talk_talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GanonPaste.Talk({'message': 'scenario/StoryAreaHyruleCastle:FindOutHyruleKing_120', 'getAttention': False})
    Audio.StopSE({'label': 'SE_EV_GANON_APPEAR2', 'duration': 2.0})
    Audio.StopAllBGM({'duration': 4.5})
    GanonPaste.Activate()
}

void TouchWorldGlobe_HyruleCastle() {
    Audio.SetBGMVolume({'volume': 0.0, 'duration': 1.0})
    GameControl.ForbidLaunchApplet()

    fork {
        PartnerPhotonLiberation[a].WarpToActorLinkedPoint({'actor': ActorIdentifier(name="GanonPaste"), 'index': 0, 'offsetY': 0.0})
    } {
        PartnerPhotonLiberation[b].WarpToActorLinkedPoint({'actor': ActorIdentifier(name="GanonPaste"), 'index': 0, 'offsetY': 0.0})
    } {
        PartnerPhoton[a].WarpToActorLinkedPoint({'actor': ActorIdentifier(name="GanonPaste"), 'index': 0, 'offsetY': 0.0})
    } {
        PartnerPhoton[b].WarpToActorLinkedPoint({'actor': ActorIdentifier(name="GanonPaste"), 'index': 0, 'offsetY': 0.0})
    } {
        PartnerPhoton[c].WarpToActorLinkedPoint({'actor': ActorIdentifier(name="GanonPaste"), 'index': 0, 'offsetY': 0.0})
    } {
        PartnerPhoton[d].WarpToActorLinkedPoint({'actor': ActorIdentifier(name="GanonPaste"), 'index': 0, 'offsetY': 0.0})
    } {
        PartnerPhoton[e].WarpToActorLinkedPoint({'actor': ActorIdentifier(name="GanonPaste"), 'index': 0, 'offsetY': 0.0})
    } {
        PartnerPhoton[f].WarpToActorLinkedPoint({'actor': ActorIdentifier(name="GanonPaste"), 'index': 0, 'offsetY': 0.0})
    }


    fork {

        call GeneralSequence.TriRelease()

    } {
        Timer.Wait({'time': 29.299999237060547})
        Fade.StartPreset({'preset': 'FadeOutNormalW'})
        Audio.StopZoneBaseAmbience()
    } {

        fork {
            Player.WarpToActorLinkedPointWithCompassPoint({'index': 0, 'direction': 2, 'actor': ActorIdentifier(name="GanonPaste"), 'offsetY': 0.0})
        } {
            Partner[companion].WarpToActorLinkedPointWithCompassPoint({'index': 0, 'direction': 2, 'actor': ActorIdentifier(name="GanonPaste"), 'offsetY': 0.0})
        } {
            ItemHeartContainer.SetVisibility({'visible': False})
        } {
            GanonPaste.ResetActiveAndPesteActors({'child': True, 'cemeteryRevive': False, 'defeatedThrough': False, 'aliveCemeteryRevive': False})
        } {

            call EvResetCommon.AllReset()

            Player.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }


    fork {
        Movie.Prepare({'filename': 'rd031_HyruleCastle_WorldGlobe'})
    } {
        Audio.StopZoneBgm()
    }


    fork {
        Movie.Play({'autoClose': False})
    } {
        Timer.Wait({'time': 1.0166699886322021})
        Audio.PlayBGM({'ignoreSkip': True, 'label': 'BGM_EV_REVIVING_AREA', 'volume': 1.0})
    } {
        Timer.Wait({'time': 1.8300000429153442})
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_WORLD_REPAIR_OTHER', 'volume': 1.0, 'pitch': 1.0})
    }

    Fade.StartPreset({'preset': 'CutOutW'})

    fork {
        Movie.Close()
    } {
        GameControl.UnforbidLaunchApplet()
    }

    GameControl.RequestLevelJump({'locator': 'WorldRepair_after', 'level': 'L_DungeonCastle', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void Roar() {

    fork {

        fork {
            GanonPaste.LookAtTalker({'duration': 0.5, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 10.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        } {
            GanonPaste.PlayAnimation({'name': 'roar', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GanonPaste.PlayTailorOtherChannelNoWait({'channel': 'Aura_Anger', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        }

        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
        GanonPaste.CameraLockon({'maxSpeed': 100.0})
    } {

        call EvResetCommon.AngryReset()

    }

}

void BC_Dead() {

    fork {
        if !GanonPaste.IsDownPose() {
            GanonPaste.PlayAnimationNoWait({'name': 'ev_dead_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } else {
            GanonPaste.PlayAnimationNoWait({'name': 'ev_dead_down_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }
    } {

        call BossCommon.HitStop({'enemy': ActorIdentifier(name="GanonPaste")})

    }


    fork {
        Timer.Wait({'time': 1.6670000553131104})

        fork {
            switch GanonPaste.GetCurrentTrident() {
              case 0:

                call Dissolve.Dissolve({'actor': ActorIdentifier(name="GanonTrident")})

                GanonTrident.PlayMaterialAnimationNoWait({'name': 'dead_dissolve_Trident', 'layer': 0})
              case 1:

                call Dissolve.Dissolve({'actor': ActorIdentifier(name="GanonTridentDetached")})

                GanonTridentDetached.PlayMaterialAnimationNoWait({'name': 'dead_dissolve_Trident', 'layer': 0})
              case 2:

                call Dissolve.Dissolve({'actor': ActorIdentifier(name="GanonTridentPorori")})

                GanonTridentPorori.PlayMaterialAnimationNoWait({'name': 'dead_dissolve_Trident', 'layer': 0})
            }
        } {

            call Dissolve.Dissolve({'actor': ActorIdentifier(name="GanonPaste")})

            GanonPaste.PlayMaterialAnimationNoWait({'name': 'dead_dissolve', 'layer': 0})
        }

        GanonTrident.EnableEffectWearHaze({'enable': False})
    } {
        Timer.Wait({'time': 3.3329999446868896})
    }

    Timer.Wait({'time': 1.1670000553131104})

    call BossCommon.BossExtinction({'enemy': ActorIdentifier(name="GanonPaste")})

    GanonPaste.CameraLockoff()
    GanonPaste.Destroy()
    ;
}

void BC_Appear() {
    BattleChallenge.ShowTimer()
    GanonPaste.PlayAnimation({'name': 'ev_appear_before_talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GanonPaste.Activate()
    GanonPaste.SetVisibility({'visible': True})

    call AppearCommon1()


    call AppearCommon2()

}

void AppearCommon1() {
    Audio.StopAllBGM({'duration': 2.0})

    call EvResetCommon.AllReset_02()

    Fade.StartPreset({'preset': 'FadeInSlow'})
    FlowControl.SetCanSkip({'enable': True})
    Zelda.MoveToCompassPoint({'direction': 2, 'speed': 0, 'timeOut': 7.0, 'distance': 2.5, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetZ': 0.0, 'offsetY': 1.2000000476837158, 'customSpeed': -50.0, 'timeOut': 50.0, 'actor': ActorIdentifier(name="Player"), 'offsetX': -1.2000000476837158, 'tolerance': 0.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].AimCompassPoint({'direction': 2, 'duration': 1.0, 'withoutTurn': False, 'immediateTurn': False})
    GanonPaste.RoomDoorClose()
    Zelda.PlayAnimation({'name': 'ev_lookback,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
}

void AppearCommon2() {

    fork {
        FlowControl.PreloadTimeline({'filename': 'PasteGanonAppear'})
    } {
        Timer.Wait({'time': 0.5})
    }


    fork {
        FlowControl.InvokeTimeline({'filename': 'PasteGanonAppear', 'rate': 1.0})
    } {
        Door.SetVisibility({'visible': False})
    } {
        Zelda.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    } {
        GanonPaste.WarpToActorWithCompassPoint({'direction': 0, 'distance': 1.0, 'actor': ActorIdentifier(name="ImpostorHyruleKing"), 'offsetY': 0.0, 'offsetX': 0.0})
    } {
        EvBackWallGanon.SetComponentActive({'name': 'skeletalModelComp', 'active': False})
    }

    GanonPaste.SetCullMode({'cullMode': 1, 'enabled': True})
    Audio.PlayBGM({'label': 'BGM_BATTLE_GANON_OP', 'volume': 1.0, 'ignoreSkip': True})
    Zelda.SetShadowDecalEnable({'enable': True})
    Partner[companion].EnableAutoMovement()

    fork {
        Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})
        Camera.SetShadowMapSettings({'ShadowMapSettings': 'Default'})
    } {
        Door.SetVisibility({'visible': True})
    } {
        Zelda.SetVisibility({'visible': True})
    } {
        Partner[companion].SetVisibility({'visible': True})
    } {
        GanonPaste.PlayAnimation({'blendFrame': 0, 'name': 'wait', 'layer': 0, 'restart': False})
    } {
        GanonPaste.WarpToActorWithCompassPoint({'direction': 0, 'actor': ActorIdentifier(name="ImpostorHyruleKing"), 'distance': 4.0, 'offsetY': 0.0, 'offsetX': 0.0})
    }

    Timer.Wait({'time': 0.25})
    GanonPaste.CameraLockon({'maxSpeed': 100.0})
}
