-------- EventFlow: GeneralSequence --------

Actor: PartnerPhotons
entrypoint: None()
actions: ['UpdatePartnerLearnedSkill', 'ReleaseImprisonedPartnerPhotons']
queries: ['IsChangedPartnerLevelIfReleasePartnerPhotonsFirstTime', 'CalcChangedPartnerLevelIfReleasePartnerPhotonsFirstTime', 'IsInprisonedPartnerPhotonsByBoss']
params: None

Actor: Dialog
entrypoint: None()
actions: ['Show', 'ShowTalker', 'Signal']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['SetInterestIkEnabled', 'AimCompassPoint']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['PlayAnimation', 'SetZeldaHood', 'AimCompassPoint', 'AimCompanion', 'SetInterestIkEnabled', 'WarpToActor', 'PlayTailorOtherChannelNoWait', 'PlayAnimationEx', 'AimActor', 'SetFacialExpression', 'StopTailorOtherChannel', 'ResetAim', 'GenericItemGetSequence', 'SetVisibility', 'AimDegreeAngle', 'PlayAnimationNoWait', 'LookAtTalker']
queries: []
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

Actor: Camera
entrypoint: None()
actions: ['PlayLocationOriginCameraAnimation', 'PlayActorOriginCameraAnimation', 'LerpDofSettings', 'LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['PlayAnimation', 'AimActor', 'SetInterestIkEnabled', 'LookAtTalker', 'AddItemAndGenericItemGetSequence']
queries: ['IsInSideView']
params: None

Actor: Hud
entrypoint: None()
actions: ['ShowPartnerPointGaugeByKey', 'HidePartnerPointGauge', 'ResumePartnerPointGauge']
queries: ['IsLvUpPartnerPointGauge']
params: None

Actor: FlowControl
entrypoint: None()
actions: []
queries: ['CompareString', 'CompareInt']
params: None

Actor: PartnerPhoton[d]
entrypoint: None()
actions: ['PlayAnimation', 'PlayAnimationNoWait', 'Activate', 'SetCullMode', 'SetVisibility']
queries: []
params: None

Actor: PartnerPhoton[e]
entrypoint: None()
actions: ['PlayAnimation', 'PlayAnimationNoWait', 'Activate', 'SetCullMode', 'SetVisibility']
queries: []
params: None

Actor: PartnerPhoton[c]
entrypoint: None()
actions: ['PlayAnimation', 'PlayAnimationNoWait', 'Activate', 'SetCullMode', 'SetVisibility']
queries: []
params: None

Actor: PartnerPhoton[f]
entrypoint: None()
actions: ['PlayAnimation', 'PlayAnimationNoWait', 'Activate', 'SetCullMode', 'SetVisibility']
queries: []
params: None

Actor: ActorCostDownUI
entrypoint: None()
actions: ['Show', 'PlayAnimation', 'Hide']
queries: ['IsCopiedTargetActor']
params: None

Actor: EvEnemyZelda
entrypoint: None()
actions: ['Talk', 'PlayAnimation', 'PlayAnimationNoWait', 'Activate', 'PlayAnimationEx', 'WarpToActorWithCompassPoint', 'SetCullMode', 'SetComponentActive', 'SetCastShadow', 'PlayMaterialAnimationNoWait']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset', 'StartParam']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump', 'ForbidLaunchApplet', 'UnforbidLaunchApplet']
queries: []
params: None

Actor: Mu
entrypoint: None()
actions: ['SetCollisionEnabled', 'SetGravityEnable', 'Activate', 'SetVisibility', 'SetCullMode', 'Deactivate', 'PlayAnimationNoWait', 'PlayMaterialAnimationNoWait', 'StopTailorOtherChannel', 'PlayTailorOtherChannelNoWait', 'SetCastShadow', 'SetShapeVisibility', 'WarpToActor']
queries: []
params: None

Actor: GatePartnerPhoton
entrypoint: None()
actions: ['SetCollisionEnabled', 'SetGravityEnable', 'Deactivate']
queries: []
params: None

Actor: ItemHeartContainer
entrypoint: None()
actions: ['SetVisibility']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE', 'StopRegionBgm', 'PlayBGM', 'SetBGMTrackVolume', 'StopBGM', 'SetBGMMainTrackVolume', 'Prepare', 'PlayBGMEx', 'StopAllBGM', 'StopSE', 'EnablePlaySeFromTailor', 'DisablePlaySeFromTailor', 'SetPlayerVolume', 'StopZoneBaseAmbience', 'PlayZoneBaseAmbience']
queries: []
params: None

Actor: EvWhiteFade
entrypoint: None()
actions: ['PlayMaterialAnimationNoWait', 'Activate', 'Deactivate']
queries: []
params: None

Actor: ItemProofOfDin
entrypoint: None()
actions: ['Activate', 'PlayAnimation', 'SetVisibility', 'SetCullMode', 'Destroy', 'WarpToActor']
queries: []
params: None

Actor: ItemProofOfFarore
entrypoint: None()
actions: ['Activate', 'PlayAnimation', 'SetVisibility', 'SetCullMode', 'WarpToActor', 'Destroy']
queries: []
params: None

Actor: ItemProofOfNayru
entrypoint: None()
actions: ['Activate', 'PlayAnimation', 'SetVisibility', 'SetCullMode', 'Destroy', 'WarpToActor']
queries: []
params: None

Actor: TutorialUI
entrypoint: None()
actions: ['ShowModal']
queries: []
params: None

Actor: Movie
entrypoint: None()
actions: ['Play', 'Prepare', 'Close']
queries: []
params: None

Actor: Door
entrypoint: None()
actions: ['SetVisibility']
queries: []
params: None

Actor: Environment
entrypoint: None()
actions: ['LockCurrentRegion', 'UnlockCurrentRegion']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'PlayAnimation', 'AimPlayer', 'PlayTailorOtherChannelNoWait', 'Talk', 'TalkKeep', 'MoveToBesideTargetActor', 'DisableAutoMovement', 'AimCompassPoint', 'SetInterestIkEnabled', 'PlayAnimationNoWait', 'StopTailorOtherChannel', 'ResetAim', 'SetVisibility', 'WarpToActor', 'AimActor', 'WarpToActorWithCompassPoint']
queries: []
params: None

Actor: FormerDungeonMarker
entrypoint: None()
actions: ['Activate', 'Deactivate']
queries: []
params: None

Actor: PartnerPhotonLiberation[a]
entrypoint: None()
actions: ['PlayAnimation', 'StopTailorOtherChannel', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: PartnerPhotonLiberation[b]
entrypoint: None()
actions: ['PlayAnimation']
queries: []
params: None

Actor: PartnerPhoton[a]
entrypoint: None()
actions: ['PlayAnimation', 'PlayAnimationNoWait', 'Activate', 'SetCullMode', 'SetVisibility']
queries: []
params: None

Actor: PartnerPhoton[b]
entrypoint: None()
actions: ['PlayAnimation', 'PlayAnimationNoWait', 'Activate', 'SetCullMode', 'SetVisibility']
queries: []
params: None

void PartnerLvelUp() {
    Partner.SetInterestIkEnabled({'enable': False})
    if PartnerPhotons.IsInprisonedPartnerPhotonsByBoss({'key': 'Key'}) {
        PartnerPhotons.ReleaseImprisonedPartnerPhotons({'key': 'Key'})
    }
    if PartnerPhotons.IsChangedPartnerLevelIfReleasePartnerPhotonsFirstTime({'key': 'Key'}) in [0, 1] {
        switch PartnerPhotons.CalcChangedPartnerLevelIfReleasePartnerPhotonsFirstTime({'key': 'Key'}) {
          case 0:

            call PartnerLvelUpGage({'Key': 'Key'})

            Event2:
            PartnerPhotons.UpdatePartnerLearnedSkill({'key': 'Key'})
          case 1:

            call PartnerLvelUpGage({'Key': 'Key'})

            Dialog.Show({'message': 'scenario/PartnerTalk:PartnerLvUpTalk_020'})
          case 2:

            call PartnerLvelUpGage({'Key': 'Key'})

            Dialog.Show({'message': 'scenario/PartnerTalk:PartnerLvUpTalk_030'})
            TutorialUI.ShowModal({'key': 'FarAwayPaste'})
            goto Event2
          case [3, 4, 6, 7, 9, 10]:

            call PartnerLvelUpGage({'Key': 'Key'})

            if !ActorCostDownUI.IsCopiedTargetActor() {
                Audio.SetPlayerVolume({'label': 'PLAYER_SE_BASE_AMBIENCE', 'duration': 0.5, 'volume': 0.0})
                ActorCostDownUI.Show()
                Timer.Wait({'time': 1.0})
                ActorCostDownUI.PlayAnimation()
                Timer.Wait({'time': 2.0})
                switch PartnerPhotons.CalcChangedPartnerLevelIfReleasePartnerPhotonsFirstTime({'key': 'Key'}) {
                  case 3:
                    Dialog.Show({'message': 'scenario/PartnerTalk:PartnerLvUpTalk_040'})
                    Event157:
                    ActorCostDownUI.Hide()
                    Audio.SetPlayerVolume({'label': 'PLAYER_SE_BASE_AMBIENCE', 'volume': 1.0, 'duration': 0.5})
                    goto Event2
                  case [4, 6, 7, 9, 10]:
                    Dialog.Show({'message': 'scenario/PartnerTalk:PartnerLvUpTalk_070'})
                    goto Event157
                }
            } else {
                Dialog.Show({'message': 'scenario/PartnerTalk:PartnerLvUpTalk_040_NotHave'})
                goto Event2
            }
          case 5:

            call PartnerLvelUpGage({'Key': 'Key'})

            Dialog.Show({'message': 'scenario/PartnerTalk:PartnerLvUpTalk_050'})
          case 8:

            call PartnerLvelUpGage({'Key': 'Key'})

            Dialog.Show({'message': 'scenario/PartnerTalk:PartnerLvUpTalk_060'})
        }
    }
}

void ZeldaTalkMotion() {
    Zelda.PlayAnimation({'name': '$talk_hand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Zelda.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void ReleaseofGoddess_Nayru() {
    Audio.StopZoneBaseAmbience()
    Audio.DisablePlaySeFromTailor()

    fork {
        Camera.PlayActorOriginCameraAnimation({'path': 'actor/EvLastBossMu_1st_form.bfres', 'ignoreRotation': True, 'offsetX': 0.0, 'offsetZ': 0.0, 'offsetY': 0.0, 'target': ActorIdentifier(name="Zelda"), 'name': 'ReleaseofGoddess01FIX_cam', 'chaseRatio': 1.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {

        fork {
            Zelda.PlayTailorOtherChannelNoWait({'channel': 'NayruLight', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        } {
            Timer.Wait({'time': 3.0})

            fork {
                EvWhiteFade.Activate()
                EvWhiteFade.PlayMaterialAnimationNoWait({'name': 'Fade_st', 'layer': 0})
            } {
                Timer.Wait({'time': 0.5})
                Zelda.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
                Zelda.PlayAnimation({'name': 'search', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
                Partner[companion].PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Timer.Wait({'time': 0.5})

                fork {
                    ItemHeartContainer.SetVisibility({'visible': False})
                } {
                    Door.SetVisibility({'visible': False})
                } {
                    FormerDungeonMarker.Deactivate()
                }

            } {
                Environment.LockCurrentRegion({'regionName': 'EV_Goddess', 'enableBlend': True})
            }

            Timer.Wait({'time': 2.0})

            fork {
                Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

        }

        Timer.Wait({'time': 2.0})
        Dialog.Show({'message': 'scenario/StoryAreaH:ReleaseofGoddess_010_Nayru'})
        Dialog.Show({'message': 'scenario/StoryAreaH:ReleaseofGoddess_Nayru_010'})
        Dialog.ShowTalker({'message': 'scenario/StoryAreaH:ReleaseofGoddess_Nayru_020', 'talker': 'glossary/Character:Nayru'})

        fork {
            Timer.Wait({'time': 0.5})
            Zelda.AimCompassPoint({'direction': 2, 'duration': 0.6000000238418579, 'withoutTurn': False, 'immediateTurn': False})
            Zelda.PlayAnimationEx({'name': 'search', 'time': 1.850000023841858, 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
            Partner[companion].PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            Zelda.PlayAnimation({'name': 'ev_wait_u', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner[companion].PlayAnimation({'name': 'ev_wait_u', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 0.5})
        }

    } {
        Audio.PlayBGM({'label': 'BGM_EV_GODDESS', 'ignoreSkip': False, 'volume': 1.0})
        Audio.SetBGMTrackVolume({'label': 'BGM_EV_GODDESS', 'track': 1, 'volume': 0.0, 'duration': 0.0})
    }

    Audio.StopZoneBaseAmbience()

    call Get_Nayru({'index': 0})

    Camera.PlayActorOriginCameraAnimation({'path': 'actor/EvLastBossMu_1st_form.bfres', 'ignoreRotation': True, 'offsetX': 0.0, 'offsetZ': 0.0, 'offsetY': 0.0, 'target': ActorIdentifier(name="Zelda"), 'name': 'ReleaseofGoddess01FIX_cam', 'chaseRatio': 1.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    Audio.EnablePlaySeFromTailor()
    Timer.Wait({'time': 1.0})
    if !EventFlags.CheckFlag({'symbol': 'ReleaseofGoddess1'}) {

        call ReleaseofGoddessFirstStep_Nayru()

        Dialog.ShowTalker({'message': 'scenario/StoryAreaH:ReleaseofGoddess_Nayru_030', 'talker': 'glossary/Character:Nayru'})
        Timer.Wait({'time': 2.0})

        call End_Nayru()


        call AfterHearingWordsOfGoddessFirstStep()

    } else
    if !EventFlags.CheckFlag({'symbol': 'ReleaseofGoddess2'}) {

        call ReleaseofGoddessSecondStep1_Nayru()


        call ReleaseofGoddessSecondStep2_Nayru()

        Dialog.ShowTalker({'message': 'scenario/StoryAreaH:ReleaseofGoddess_Nayru_030', 'talker': 'glossary/Character:Nayru'})
        Timer.Wait({'time': 2.0})

        call End_Nayru()


        call AfterHearingWordsOfGoddessSecondStep()

    } else {

        call ReleaseofGoddessThirdStep_Nayru()

        Dialog.ShowTalker({'message': 'scenario/StoryAreaH:ReleaseofGoddess_Nayru_030', 'talker': 'glossary/Character:Nayru'})
        Timer.Wait({'time': 2.0})

        call End_Nayru()


        call AfterHearingWordsOfGoddessThirdStep()

    }
}

void ReleaseofGoddess_Farore() {
    Audio.StopZoneBaseAmbience()
    Audio.DisablePlaySeFromTailor()

    fork {
        Camera.PlayActorOriginCameraAnimation({'path': 'actor/EvLastBossMu_1st_form.bfres', 'ignoreRotation': True, 'offsetX': 0.0, 'offsetZ': 0.0, 'offsetY': 0.0, 'target': ActorIdentifier(name="Zelda"), 'name': 'ReleaseofGoddess01FIX_cam', 'chaseRatio': 1.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {

        fork {
            Zelda.PlayTailorOtherChannelNoWait({'channel': 'FaroreLight', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        } {
            Timer.Wait({'time': 3.0})

            fork {
                EvWhiteFade.Activate()
                EvWhiteFade.PlayMaterialAnimationNoWait({'name': 'Fade_st', 'layer': 0})
            } {
                Timer.Wait({'time': 0.5})
                Zelda.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
                Zelda.PlayAnimation({'name': 'search', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
                Partner[companion].PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Timer.Wait({'time': 0.5})

                fork {
                    ItemHeartContainer.SetVisibility({'visible': False})
                } {
                    Door.SetVisibility({'visible': False})
                } {
                    FormerDungeonMarker.Deactivate()
                }

            } {
                Environment.LockCurrentRegion({'regionName': 'EV_Goddess', 'enableBlend': True})
            }

            Timer.Wait({'time': 2.0})

            fork {
                Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

        }

        Timer.Wait({'time': 2.0})
        Dialog.Show({'message': 'scenario/StoryAreaH:ReleaseofGoddess_010_Farore'})
        Dialog.Show({'message': 'scenario/StoryAreaH:ReleaseofGoddess_Farore_010'})
        Dialog.ShowTalker({'message': 'scenario/StoryAreaH:ReleaseofGoddess_Farore_020', 'talker': 'glossary/Character:Frore'})

        fork {
            Timer.Wait({'time': 0.5})
            Zelda.AimCompassPoint({'direction': 2, 'duration': 0.6000000238418579, 'withoutTurn': False, 'immediateTurn': False})
            Zelda.PlayAnimationEx({'name': 'search', 'time': 1.850000023841858, 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
            Partner[companion].PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Audio.EnablePlaySeFromTailor()

        fork {
            Zelda.PlayAnimation({'name': 'ev_wait_u', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner[companion].PlayAnimation({'name': 'ev_wait_u', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 0.5})
        }

    } {
        Audio.PlayBGM({'label': 'BGM_EV_GODDESS', 'ignoreSkip': False, 'volume': 1.0})
        Audio.SetBGMTrackVolume({'label': 'BGM_EV_GODDESS', 'track': 1, 'volume': 0.0, 'duration': 0.0})
    }


    call Get_Farore({'index': 0})

    Camera.PlayActorOriginCameraAnimation({'path': 'actor/EvLastBossMu_1st_form.bfres', 'ignoreRotation': True, 'offsetX': 0.0, 'offsetZ': 0.0, 'offsetY': 0.0, 'target': ActorIdentifier(name="Zelda"), 'name': 'ReleaseofGoddess01FIX_cam', 'chaseRatio': 1.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    Timer.Wait({'time': 1.0})
    if !EventFlags.CheckFlag({'symbol': 'ReleaseofGoddess1'}) {

        call ReleaseofGoddessFirstStep_Frore()

        Dialog.ShowTalker({'message': 'scenario/StoryAreaH:ReleaseofGoddess_Farore_030', 'talker': 'glossary/Character:Frore'})
        Timer.Wait({'time': 2.0})

        call End_Farore()


        call AfterHearingWordsOfGoddessFirstStep()

    } else
    if !EventFlags.CheckFlag({'symbol': 'ReleaseofGoddess2'}) {

        call ReleaseofGoddessSecondStep1_Frore()


        call ReleaseofGoddessSecondStep2_Frore()

        Dialog.ShowTalker({'message': 'scenario/StoryAreaH:ReleaseofGoddess_Farore_030', 'talker': 'glossary/Character:Frore'})
        Timer.Wait({'time': 2.0})

        call End_Farore()


        call AfterHearingWordsOfGoddessSecondStep()

    } else {

        call ReleaseofGoddessThirdStep_Frore()

        Dialog.ShowTalker({'message': 'scenario/StoryAreaH:ReleaseofGoddess_Farore_030', 'talker': 'glossary/Character:Frore'})
        Timer.Wait({'time': 2.0})

        call End_Farore()


        call AfterHearingWordsOfGoddessThirdStep()

    }
}

void ReleaseofGoddess_Din() {
    Audio.StopZoneBaseAmbience()
    Audio.DisablePlaySeFromTailor()

    fork {
        Camera.PlayActorOriginCameraAnimation({'path': 'actor/EvLastBossMu_1st_form.bfres', 'ignoreRotation': True, 'offsetX': 0.0, 'offsetZ': 0.0, 'offsetY': 0.0, 'target': ActorIdentifier(name="Zelda"), 'name': 'ReleaseofGoddess01FIX_cam', 'chaseRatio': 1.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {

        fork {
            Zelda.PlayTailorOtherChannelNoWait({'channel': 'DinLight', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        } {
            Timer.Wait({'time': 3.0})

            fork {
                EvWhiteFade.Activate()
                EvWhiteFade.PlayMaterialAnimationNoWait({'name': 'Fade_st', 'layer': 0})
            } {
                Timer.Wait({'time': 0.5})
                Zelda.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
                Zelda.PlayAnimation({'name': 'search', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
                Partner[companion].PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Timer.Wait({'time': 0.5})

                fork {
                    ItemHeartContainer.SetVisibility({'visible': False})
                } {
                    FormerDungeonMarker.Deactivate()
                }

            } {
                Environment.LockCurrentRegion({'regionName': 'EV_Goddess', 'enableBlend': True})
            }

            Timer.Wait({'time': 2.0})

            fork {
                Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

        }

        Timer.Wait({'time': 2.0})
        Dialog.Show({'message': 'scenario/StoryAreaH:ReleaseofGoddess_010_Din'})
        Dialog.Show({'message': 'scenario/StoryAreaH:ReleaseofGoddess_Din_010'})
        Dialog.ShowTalker({'message': 'scenario/StoryAreaH:ReleaseofGoddess_Din_020', 'talker': 'glossary/Character:Din'})

        fork {
            Timer.Wait({'time': 0.5})
            Zelda.AimCompassPoint({'direction': 2, 'duration': 0.6000000238418579, 'withoutTurn': False, 'immediateTurn': False})
            Zelda.PlayAnimationEx({'name': 'search', 'time': 1.850000023841858, 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
            Partner[companion].PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Audio.EnablePlaySeFromTailor()

        fork {
            Zelda.PlayAnimation({'name': 'ev_wait_u', 'blendFrame': 21, 'layer': 0, 'restart': False})
        } {
            Partner[companion].PlayAnimation({'name': 'ev_wait_u', 'blendFrame': 21, 'layer': 0, 'restart': False})
        } {
            Timer.Wait({'time': 0.5})
        }

    } {
        Audio.PlayBGM({'label': 'BGM_EV_GODDESS', 'ignoreSkip': False, 'volume': 1.0})
        Audio.SetBGMTrackVolume({'label': 'BGM_EV_GODDESS', 'track': 1, 'volume': 0.0, 'duration': 0.0})
    }


    call Get_Din({'index': 0})

    Camera.PlayActorOriginCameraAnimation({'path': 'actor/EvLastBossMu_1st_form.bfres', 'ignoreRotation': True, 'offsetX': 0.0, 'offsetZ': 0.0, 'offsetY': 0.0, 'name': 'ReleaseofGoddess01FIX_cam', 'target': ActorIdentifier(name="Zelda"), 'chaseRatio': 1.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    Timer.Wait({'time': 1.0})
    if !EventFlags.CheckFlag({'symbol': 'ReleaseofGoddess1'}) {

        call ReleaseofGoddessFirstStep_Din()

        Dialog.ShowTalker({'message': 'scenario/StoryAreaH:ReleaseofGoddess_Din_030', 'talker': 'glossary/Character:Din'})
        Timer.Wait({'time': 2.0})

        call End__Din()


        call AfterHearingWordsOfGoddessFirstStep()

    } else
    if !EventFlags.CheckFlag({'symbol': 'ReleaseofGoddess2'}) {

        call ReleaseofGoddessSecondStep1_Din()


        call ReleaseofGoddessSecondStep2_Din()

        Dialog.ShowTalker({'message': 'scenario/StoryAreaH:ReleaseofGoddess_Din_030', 'talker': 'glossary/Character:Din'})
        Timer.Wait({'time': 2.0})

        call End__Din()


        call AfterHearingWordsOfGoddessSecondStep()

    } else {

        call ReleaseofGoddessThirdStep_Din()

        Dialog.ShowTalker({'message': 'scenario/StoryAreaH:ReleaseofGoddess_Din_030', 'talker': 'glossary/Character:Din'})
        Timer.Wait({'time': 2.0})

        call End__Din()


        call AfterHearingWordsOfGoddessThirdStep()

    }
}

void ReleaseofGoddessFirstStep_Din() {
    Dialog.ShowTalker({'talker': 'glossary/Character:Din', 'message': 'scenario/StoryAreaH:ReleaseofGoddessFirstStep_010_Din'})
    Dialog.ShowTalker({'talker': 'glossary/Character:Din', 'message': 'scenario/StoryAreaH:ReleaseofGoddessFirstStep_020_Din'})
    EventFlags.SetFlag({'value': True, 'symbol': 'ReleaseofGoddess1'})
    Timer.Wait({'time': 1.0})
}

void ReleaseofGoddessSecondStep1_Din() {
    Dialog.ShowTalker({'talker': 'glossary/Character:Din', 'message': 'scenario/StoryAreaH:ReleaseofGoddessSecondStep_005_Din'})
    Event694:
    Timer.Wait({'time': 2.0})

    fork {
        Movie.Prepare({'filename': 'Vcon240513'})
    } {
        GameControl.ForbidLaunchApplet()
    }

    Fade.StartPreset({'preset': 'FadeOutNormalW'})

    fork {
        Fade.StartPreset({'preset': 'FadeInNormal'})
        Timer.Wait({'time': 76.5})
        Fade.StartPreset({'preset': 'FadeOutNormalW'})
    } {
        Movie.Play({'autoClose': True})
    } {
        Audio.SetBGMMainTrackVolume({'label': 'BGM_EV_GODDESS', 'duration': 4.0, 'track': 1})
        Timer.Wait({'time': 4.0})
        Dialog.Show({'message': 'scenario/StoryAreaH:ReleaseofGoddessSecondStep_010'})
        Timer.Wait({'time': 3.0})
        Dialog.Show({'message': 'scenario/StoryAreaH:ReleaseofGoddessSecondStep_010_02'})
        Timer.Wait({'time': 7.0})
        Dialog.Show({'message': 'scenario/StoryAreaH:ReleaseofGoddessSecondStep_010_03'})
        Dialog.Show({'message': 'scenario/StoryAreaH:ReleaseofGoddessSecondStep_010_04'})
        Timer.Wait({'time': 1.0})
        Dialog.Show({'message': 'scenario/StoryAreaH:ReleaseofGoddessSecondStep_010_05'})
        Timer.Wait({'time': 3.0})
        Dialog.Show({'message': 'scenario/StoryAreaH:ReleaseofGoddessSecondStep_010_06'})
        Dialog.Show({'message': 'scenario/StoryAreaH:ReleaseofGoddessSecondStep_010_07'})
    }

    Timer.Wait({'time': 1.0})
    Audio.SetBGMMainTrackVolume({'label': 'BGM_EV_GODDESS', 'duration': 4.0, 'track': 0})
    Fade.StartPreset({'preset': 'FadeInNormal'})

    fork {
        Movie.Close()
    } {
        GameControl.UnforbidLaunchApplet()
    }

    Timer.Wait({'time': 1.0})
}

void ReleaseofGoddessThirdStep_Din() {
    Dialog.ShowTalker({'talker': 'glossary/Character:Din', 'message': 'scenario/StoryAreaH:ReleaseofGoddessThirdStep_010_Din'})
    EventFlags.SetFlag({'value': True, 'symbol': 'ReleaseofGoddess3'})
    Timer.Wait({'time': 1.0})
}

void AfterHearingWordsOfGoddessFirstStep() {
    Timer.Wait({'time': 1.0})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 1.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaH:AfterHearingWordsOfGoddessFirstStep_010', 'keepTalk': True, 'aimToPlayer': False, 'playerTalkAnim': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'aimFromPlayer': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        Partner[companion].TalkKeep({'message': 'scenario/StoryAreaH:AfterHearingWordsOfGoddessFirstStep_010_02', 'getAttention': False})
        Partner[companion].PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaH:AfterHearingWordsOfGoddessFirstStep_010_03', 'getAttention': False})
        Timer.Wait({'time': 1.0})
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].TalkKeep({'message': 'scenario/StoryAreaH:AfterHearingWordsOfGoddessFirstStep_010_04', 'getAttention': False})
        Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaH:AfterHearingWordsOfGoddessFirstStep_010_05', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.5})
        Zelda.AimActor({'offsetY': -1.0, 'withoutTurn': False, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 1.0, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void AfterHearingWordsOfGoddessSecondStep() {
    Timer.Wait({'time': 1.0})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 1.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Partner[companion].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/StoryAreaH:AfterHearingWordsOfGoddessSecondStep_010', 'aimFromPlayer': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'selfTalkAnim': True, 'aimToPlayer': False, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Timer.Wait({'time': 0.5})
        Zelda.AimActor({'offsetY': -1.0, 'withoutTurn': False, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 1.0, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void AfterHearingWordsOfGoddessThirdStep() {
    Timer.Wait({'time': 1.0})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 1.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Partner[companion].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/StoryAreaH:AfterHearingWordsOfGoddessThirdStep_010', 'aimFromPlayer': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'aimToPlayer': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Timer.Wait({'time': 0.5})
        Zelda.AimActor({'offsetY': -1.0, 'withoutTurn': False, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 1.0, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    QuestSystem.SetProgress({'symbol': 'LinkQuest:54337350', 'isShowTelopInEvent': False, 'isFrontFade': False})
    QuestSystem.SetProgress({'symbol': 'Link_Rescue:2042642046', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Zelda_hood_off() {

    fork {
        Zelda.PlayAnimation({'name': 'hood_off', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.38999998569488525})
        Zelda.SetZeldaHood({'isOn': False})
    }

    Zelda.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void Zelda_hood_on() {

    fork {
        Zelda.PlayAnimation({'name': 'hood_on', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.38999998569488525})
        Zelda.SetZeldaHood({'isOn': True})
    }

    Zelda.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void TriRelease() {

    fork {
        Camera.PlayLocationOriginCameraAnimation({'location': 'EvA_TriRelease01_cam', 'path': 'actor/PartnerPhotonLiberation.bfres', 'name': 'Ev_TriRelease_cam', 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})

        fork {
            PartnerPhotonLiberation[a].PlayTailorOtherChannelNoWait({'channel': 'Down', 'index': -1, 'restart': False, 'stopOnSkipped': True})
        } {
            PartnerPhoton[a].Activate()
            PartnerPhoton[a].SetVisibility({'visible': False})
            PartnerPhoton[a].SetCullMode({'cullMode': 0, 'enabled': True})
            PartnerPhoton[a].PlayAnimationNoWait({'name': 'ev_A_TriRelease_fall_1', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 3.1670000553131104})
            PartnerPhoton[a].SetVisibility({'visible': True})
        } {
            PartnerPhoton[b].Activate()
            PartnerPhoton[b].SetVisibility({'visible': False})
            PartnerPhoton[b].SetCullMode({'cullMode': 0, 'enabled': True})
            PartnerPhoton[b].PlayAnimationNoWait({'name': 'ev_A_TriRelease_fall_2', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 5.833000183105469})
            PartnerPhoton[b].SetVisibility({'visible': True})
        } {
            PartnerPhoton[c].Activate()
            PartnerPhoton[c].SetVisibility({'visible': False})
            PartnerPhoton[c].SetCullMode({'cullMode': 0, 'enabled': True})
            PartnerPhoton[c].PlayAnimationNoWait({'name': 'ev_A_TriRelease_fall_3', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 2.6670000553131104})
            PartnerPhoton[c].SetVisibility({'visible': True})
        } {
            PartnerPhoton[d].Activate()
            PartnerPhoton[d].SetVisibility({'visible': False})
            PartnerPhoton[d].SetCullMode({'cullMode': 0, 'enabled': True})
            PartnerPhoton[d].PlayAnimationNoWait({'name': 'ev_A_TriRelease_fall_4', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 3.8329999446868896})
            PartnerPhoton[d].SetVisibility({'visible': True})
        } {
            PartnerPhoton[e].Activate()
            PartnerPhoton[e].SetVisibility({'visible': False})
            PartnerPhoton[e].SetCullMode({'cullMode': 0, 'enabled': True})
            PartnerPhoton[e].PlayAnimationNoWait({'name': 'ev_A_TriRelease_fall_5', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 4.833000183105469})
            PartnerPhoton[e].SetVisibility({'visible': True})
        } {
            PartnerPhoton[f].Activate()
            PartnerPhoton[f].SetVisibility({'visible': False})
            PartnerPhoton[f].SetCullMode({'cullMode': 0, 'enabled': True})
            PartnerPhoton[f].PlayAnimationNoWait({'name': 'ev_A_TriRelease_fall_6', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 4.5})
            PartnerPhoton[f].SetVisibility({'visible': True})
        } {
            Player.PlayAnimation({'name': 'ev_A_TriRelease_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner[companion].SetVisibility({'visible': False})
            Partner[companion].PlayAnimation({'name': 'ev_A_TriRelease_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } {
        Timer.Wait({'time': 8.0})
        PartnerPhotonLiberation[a].StopTailorOtherChannel({'channel': 'Down', 'index': -1})
        PartnerPhotonLiberation[a].PlayTailorOtherChannelNoWait({'index': -1, 'channel': 'move_up', 'restart': False, 'stopOnSkipped': True})

        fork {
            PartnerPhotonLiberation[a].PlayAnimation({'name': 'move_up_00', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            PartnerPhotonLiberation[b].PlayAnimation({'name': 'move_up_00', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            PartnerPhoton[a].PlayAnimation({'name': 'ev_A_TriRelease_wait_1', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            PartnerPhoton[b].PlayAnimation({'name': 'ev_A_TriRelease_wait_2', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            PartnerPhoton[c].PlayAnimation({'name': 'ev_A_TriRelease_wait_3', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            PartnerPhoton[d].PlayAnimation({'name': 'ev_A_TriRelease_wait_4', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            PartnerPhoton[e].PlayAnimation({'name': 'ev_A_TriRelease_wait_5', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            PartnerPhoton[f].PlayAnimation({'name': 'ev_A_TriRelease_wait_6', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Player.PlayAnimation({'name': 'ev_A_TriRelease', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner[companion].SetVisibility({'visible': True})
            Partner[companion].PlayAnimation({'name': 'ev_A_TriRelease', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }

}

void PartnerLvelUpGage() {
    if !PartnerPhotons.IsInprisonedPartnerPhotonsByBoss({'key': 'Key'}) {
        Partner[companion].AimPlayer({'duration': 0.75, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].GenericTalkSequenceWithDialog({'aimFromPlayer': False, 'playerTalkAnim': False, 'cameraLookAt': True, 'message': 'scenario/PartnerTalk:PartnerLvUpTalk_005', 'aimToPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            Hud.ShowPartnerPointGaugeByKey({'key': 'Key'})
        } {
            Timer.Wait({'time': 1.8329999446868896})
            Partner[companion].StopTailorOtherChannel({'channel': 'GaugeUp_glow_1', 'index': -1})
            Partner[companion].PlayTailorOtherChannelNoWait({'channel': 'GaugeUp_glow_2', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        }

        Event588:
        Partner[companion].StopTailorOtherChannel({'channel': 'GaugeUp_glow_2', 'index': -1})
        if !Hud.IsLvUpPartnerPointGauge() {
            switch PartnerPhotons.CalcChangedPartnerLevelIfReleasePartnerPhotonsFirstTime({'key': 'Key'}) {
              case 1:

                call PartnerLvelUpPerformanceSlotUp({'Key': 'Key'})

                Event119:
                Timer.Wait({'time': 0.0})

                fork {
                    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                } {
                    Timer.Wait({'time': 0.20000000298023224})
                    Player.SetInterestIkEnabled({'enable': False})
                }

                Timer.Wait({'time': 0.25})
                Hud.ResumePartnerPointGauge()
                Timer.Wait({'time': 1.5})
                Hud.HidePartnerPointGauge()
                Timer.Wait({'time': 1.0})
                if !Player.IsInSideView() {
                    Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/PartnerTalk:PartnerLvUpTalk_010', 'aimFromPlayer': False, 'playerTalkAnim': False, 'unmorph': False, 'disableSyncRodBallFollow': False, 'absorbAllPastedActors': False, 'unsync': False, 'unburrow': False, 'destroyCarriedActor': False, 'stopBurnEffect': False, 'destroyProjectiles': False, 'keepPersonalSpace': False, 'cameraLookAt': True, 'aimToPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'stopBuffEffect': True, 'hideItems': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
                } else {
                    Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/PartnerTalk:PartnerLvUpTalk_010', 'aimFromPlayer': False, 'playerTalkAnim': False, 'lookAtOffsetY': -0.75, 'keepPersonalSpace': False, 'unmorph': False, 'disableSyncRodBallFollow': False, 'absorbAllPastedActors': False, 'unsync': False, 'unburrow': False, 'destroyCarriedActor': False, 'stopBurnEffect': False, 'destroyProjectiles': False, 'cameraLookAt': True, 'aimToPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'stopBuffEffect': True, 'hideItems': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
                }
                Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
              case 2:

                call PartnerLvelUpPerformance({'Key': 'Key'})

                goto Event119
              case [3, 4, 6, 7, 9, 10]:

                call PartnerLvelUpPerformance({'Key': 'Key'})

                goto Event119
              case 5:

                call PartnerLvelUpPerformanceSlotUp({'Key': 'Key'})

                goto Event119
              case 8:

                call PartnerLvelUpPerformanceSlotUp({'Key': 'Key'})

                goto Event119
            }
        } else {
            Timer.Wait({'time': 1.0})
            Hud.HidePartnerPointGauge()
        }
    } else {
        Partner[companion].AimPlayer({'duration': 0.75, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        if !Player.IsInSideView() {
            Partner[companion].GenericTalkSequenceWithDialog({'aimFromPlayer': False, 'playerTalkAnim': False, 'cameraLookAt': True, 'message': 'scenario/PartnerTalk:PartnerLvUpTalk_005', 'aimToPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } else {
            Partner[companion].GenericTalkSequenceWithDialog({'aimFromPlayer': False, 'playerTalkAnim': False, 'cameraLookAt': True, 'message': 'scenario/PartnerTalk:PartnerLvUpTalk_005', 'lookAtOffsetY': -0.75, 'aimToPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        }
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            Hud.ShowPartnerPointGaugeByKey({'key': 'Key'})
        } {
            Timer.Wait({'time': 1.8329999446868896})
            Partner[companion].StopTailorOtherChannel({'channel': 'GaugeUp_glow_1', 'index': -1})
            Partner[companion].PlayTailorOtherChannelNoWait({'channel': 'GaugeUp_glow_2', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        }

        goto Event588
    }
}

void PartnerLvelUpPerformance() {

    fork {
        Timer.Wait({'time': 1.399999976158142})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'withoutTurn': True, 'boneName': '', 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetY': 0.0, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].PlayAnimation({'name': 'ev_levelup_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner[companion].PlayAnimation({'name': 'ev_levelup_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
}

void PartnerLvelUpPerformanceSlotUp() {

    fork {
        Timer.Wait({'time': 1.399999976158142})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'withoutTurn': True, 'boneName': '', 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetY': 0.0, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].PlayAnimation({'name': 'ev_levelup_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner[companion].PlayAnimation({'name': 'ev_levelup_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    switch PartnerPhotons.CalcChangedPartnerLevelIfReleasePartnerPhotonsFirstTime({'key': 'Key'}) {
      case 1:
        Partner[companion].PlayTailorOtherChannelNoWait({'channel': 'LvUP_Triangle_4', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Event144:
        Timer.Wait({'time': 1.0})
        PartnerPhotons.UpdatePartnerLearnedSkill({'key': 'Key'})
        Timer.Wait({'time': 1.5})
      case 5:
        Partner[companion].PlayTailorOtherChannelNoWait({'channel': 'LvUP_Triangle_5', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        goto Event144
      case 8:
        Partner[companion].PlayTailorOtherChannelNoWait({'channel': 'LvUP_Triangle_6', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        goto Event144
    }
}

void Look_at_Partner() {
    Player.SetInterestIkEnabled({'enable': True})
    Player.AimActor({'offsetY': -0.6000000238418579, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
}

void CopiedZelda() {
    switch FlowControl.CompareInt({'value1': 'region', 'value2': 1}) {
      case [4294967295, 1]:
        Event322:
        Fade.StartParam({'time': 3.0, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0, 'mode': 1})
        GatePartnerPhoton.SetGravityEnable({'enable': False})
        GatePartnerPhoton.SetCollisionEnabled({'enable': False})
        GatePartnerPhoton.Deactivate()
        Zelda.SetFacialExpression({'expression': 'serious_few'})
        Zelda.WarpToActor({'distance': 0.0, 'offsetX': 0.0, 'actor': ActorIdentifier(name="GatePartnerPhoton"), 'offsetY': 0.0})
        Zelda.ResetAim()
        Zelda.AimDegreeAngle({'duration': 0.0, 'angle': -90.0, 'withoutTurn': False, 'immediateTurn': False})
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].WarpToActor({'offsetY': 1.5, 'offsetX': 0.0, 'actor': ActorIdentifier(name="Zelda"), 'distance': 1.0})
        Timer.Wait({'time': 0.20000000298023224})
        Mu.SetGravityEnable({'enable': False})
        Mu.SetCollisionEnabled({'enable': False})
        Mu.WarpToActor({'distance': 0.0, 'offsetY': 0.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': 0.0})
        Mu.Activate()
        Mu.SetVisibility({'visible': False})
        Mu.SetCullMode({'cullMode': 0, 'enabled': True})
        Mu.StopTailorOtherChannel({'channel': 'ac_Keep', 'index': -1})
        Mu.SetCastShadow({'cast': False})
        Camera.LerpDofSettings({'kind': 7, 'TiltShiftCenterX': 0.0, 'BlurRatio': 1.0, 'BlurSizeScale': 1.0, 'FocusRange': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftGamma': 2.0, 'duration': 0.0, 'TiltShiftDofBackBlurFadeWidth': 0.05000000074505806, 'FocalDistance': 45.0, 'TiltShiftDofBackCurve': 0.5, 'TiltShiftCenterY': 0.36000001430511475, 'TiltShiftBlurSizeScale': 0.5, 'TiltShiftDofFocalDistance': 65.0, 'TiltShiftDofBackRange': 30.0, 'TiltShiftRange': 0.46000000834465027, 'TiltShiftBlurRatio': 0.6000000238418579, 'TiltShiftDofBlurRatio': 0.6000000238418579, 'noWait': False})
        Timer.Wait({'time': 0.5})

        fork {
            Camera.PlayActorOriginCameraAnimation({'ignoreRotation': True, 'path': 'actor/EvLastBossMu_1st_form.bfres', 'offsetZ': 1.0, 'offsetY': 0.25, 'name': 'CopiedZelda01_cam', 'target': ActorIdentifier(name="GatePartnerPhoton"), 'chaseRatio': 1.0, 'offsetX': 0.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
        } {
            Fade.StartPreset({'preset': 'FadeInSlow'})
            Timer.Wait({'time': 0.5})
            Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Partner[companion].TalkKeep({'message': 'scenario/StoryAreaH:CopiedZelda_005', 'getAttention': False})
            Partner[companion].TalkKeep({'message': 'scenario/StoryAreaH:CopiedZelda_006', 'getAttention': False})
            Audio.Prepare({'label': 'BGM_EV_ATTACK_OF_MU2_A ', 'kind': 0, 'volume': 1.0})
            Partner[companion].Talk({'message': 'scenario/StoryAreaH:CopiedZelda_007', 'getAttention': False})
            Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 1.0})
            Audio.StopRegionBgm({'fadeSec': 1.5})
            Audio.StopZoneBaseAmbience()

            fork {
                Dialog.Show({'message': 'scenario/StoryAreaH:CopiedZelda_030'})
            } {
                Audio.PlayOneshotSystemSE({'label': 'SE_EV_NULL_COPIED_ZELDA', 'volume': 1.0, 'pitch': 1.0})
            }

            Audio.PlayBGMEx({'label': 'BGM_EV_ATTACK_OF_MU2_A', 'volume': 1.0, 'sec': 0.4000000059604645, 'ignoreSkip': False})
            Audio.Prepare({'kind': 0, 'label': 'BGM_EV_ATTACK_OF_MU2_B', 'volume': 1.0})
            Zelda.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
            Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
            Partner[companion].SetInterestIkEnabled({'enable': False})
            Zelda.SetInterestIkEnabled({'enable': False})
        } {

            fork {

                call Look_at_Partner()

            } {
                Partner[companion].SetInterestIkEnabled({'enable': True})
                Partner[companion].AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }

        }

        GameControl.ForbidLaunchApplet()

        fork {
            Camera.PlayActorOriginCameraAnimation({'ignoreRotation': True, 'path': 'actor/EvLastBossMu_1st_form.bfres', 'offsetZ': 1.0, 'offsetY': 0.25, 'name': 'CopiedZelda02_cam', 'target': ActorIdentifier(name="GatePartnerPhoton"), 'chaseRatio': 1.0, 'offsetX': 0.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
        } {
            Zelda.ResetAim()
            Zelda.PlayAnimation({'name': 'ev_CopiedZelda_lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner[companion].ResetAim()
            Partner[companion].PlayAnimation({'name': 'ev_CopiedZelda_lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 12.0})
            EvEnemyZelda.WarpToActorWithCompassPoint({'direction': 0, 'offsetY': 0.0, 'distance': 0.0, 'actor': ActorIdentifier(name="Mu"), 'offsetX': 0.0})
            EvEnemyZelda.Activate()
            EvEnemyZelda.SetCastShadow({'cast': False})
            EvEnemyZelda.SetComponentActive({'active': True, 'name': 'PropplayerCopyRod'})
            EvEnemyZelda.SetCullMode({'enabled': True, 'cullMode': 0})
            EvEnemyZelda.PlayMaterialAnimationNoWait({'name': 'ev_enemyZelda_appear', 'layer': 0})
            EvEnemyZelda.PlayAnimationEx({'name': 'ev_CopiedZelda_CZ_land', 'time': 0.0, 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 4.0})
            Zelda.SetFacialExpression({'expression': 'sleep'})
            Timer.Wait({'time': 1.75})

            fork {
                Partner[companion].Talk({'message': 'scenario/StoryAreaH:CopiedZelda_010', 'getAttention': False})
            } {
                Timer.Wait({'time': 3.2166645526885986})
                Dialog.Signal()
            }

        } {
            Timer.Wait({'time': 3.0})
            Zelda.SetVisibility({'visible': False})
            Timer.Wait({'time': 8.0})
            Zelda.SetVisibility({'visible': True})
        } {
            Timer.Wait({'time': 1.5})
            Audio.PlayOneshotSystemSE({'label': 'SE_EV_COPIED_ZELDA_00', 'volume': 1.0, 'pitch': 1.0})
        } {
            Timer.Wait({'time': 7.900000095367432})
            Audio.PlayOneshotSystemSE({'label': 'SE_EV_COPIED_ZELDA_01', 'volume': 1.0, 'pitch': 1.0})
        } {
            Timer.Wait({'time': 11.0})
            Audio.PlayOneshotSystemSE({'label': 'SE_EV_COPIED_ZELDA_02', 'volume': 1.0, 'pitch': 1.0})
        } {
            Timer.Wait({'time': 1.5})
            Mu.PlayAnimationNoWait({'name': 'ev_CopiedZelda', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Mu.PlayTailorOtherChannelNoWait({'channel': 'Ev_CopiedZelda', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            Mu.SetShapeVisibility({'shapeName': 'arm_low__MI_body', 'visible': False})

            call Dissolve.Dissolve({'actor': ActorIdentifier(name="Mu")})

            Mu.PlayMaterialAnimationNoWait({'layer': 1, 'name': 'CopiedZelda_Dissolve'})
            Mu.SetVisibility({'visible': True})
            switch FlowControl.CompareInt({'value1': 'region', 'value2': 1}) {
              case 4294967295:
                Environment.LockCurrentRegion({'regionName': 'EV_FieldVolcano_CopiedZelda_01', 'enableBlend': True})
              case 0:
                Environment.LockCurrentRegion({'regionName': 'EV_FieldJungle_CopiedZelda_01', 'enableBlend': True})
              case 1:
                Mu.PlayTailorOtherChannelNoWait({'channel': 'Hebra_dark', 'restart': False, 'index': -1, 'stopOnSkipped': True})
                Environment.LockCurrentRegion({'regionName': 'EV_FieldHebraMountainsTop_CopiedZelda_01', 'enableBlend': True})
            }
        }


        fork {
            Camera.PlayActorOriginCameraAnimation({'ignoreRotation': True, 'path': 'actor/EvLastBossMu_1st_form.bfres', 'offsetZ': 1.0, 'offsetY': 0.25, 'name': 'CopiedZelda03_cam', 'target': ActorIdentifier(name="GatePartnerPhoton"), 'chaseRatio': 1.0, 'offsetX': 0.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
        } {
            EvEnemyZelda.SetCastShadow({'cast': True})
            Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'SE_EV_COPIED_ZELDA_03', 'volume': 1.0, 'pitch': 1.0})
            Audio.StopSE({'label': 'SE_EV_COPIED_ZELDA_00', 'duration': 1.0})
        } {
            Timer.Wait({'time': 11.5})
            Audio.PlayOneshotSystemSE({'label': 'SE_EV_COPIED_ZELDA_04', 'volume': 1.0, 'pitch': 1.0})
        } {
            Timer.Wait({'time': 6.0})
            switch FlowControl.CompareInt({'value1': 'region', 'value2': 1}) {
              case 4294967295:
                Environment.UnlockCurrentRegion({'regionName': 'EV_FieldVolcano_CopiedZelda_01', 'enableBlend': True})
              case 0:
                Environment.LockCurrentRegion({'regionName': 'EV_FieldJungle_CopiedZelda_02', 'enableBlend': True})
              case 1:
                Environment.UnlockCurrentRegion({'regionName': 'EV_FieldHebraMountainsTop_CopiedZelda_01', 'enableBlend': True})
            }
        }

        GameControl.UnforbidLaunchApplet()

        fork {
            Camera.PlayActorOriginCameraAnimation({'ignoreRotation': True, 'path': 'actor/EvLastBossMu_1st_form.bfres', 'offsetZ': 1.0, 'offsetY': 0.25, 'name': 'CopiedZelda04_cam', 'target': ActorIdentifier(name="GatePartnerPhoton"), 'chaseRatio': 1.0, 'offsetX': 0.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
        } {
            Mu.Deactivate()
            Timer.Wait({'time': 1.0})
            EvEnemyZelda.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            EvEnemyZelda.Talk({'message': 'scenario/StoryAreaH:CopiedZelda_040', 'getAttention': False})
            EvEnemyZelda.Talk({'message': 'scenario/StoryAreaH:CopiedZelda_032', 'getAttention': False})
        } {
            Audio.PlayBGMEx({'volume': 1.0, 'label': 'BGM_EV_ATTACK_OF_MU2_B', 'sec': 2.4000000953674316, 'ignoreSkip': False})
        }

        GameControl.ForbidLaunchApplet()

        fork {
            Camera.PlayActorOriginCameraAnimation({'ignoreRotation': True, 'path': 'actor/EvLastBossMu_1st_form.bfres', 'offsetZ': 1.0, 'offsetY': 0.25, 'name': 'CopiedZelda05_cam', 'target': ActorIdentifier(name="GatePartnerPhoton"), 'chaseRatio': 1.0, 'offsetX': 0.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
        } {
            EvEnemyZelda.PlayAnimation({'name': 'ev_CopiedZelda_CZ_move', 'restart': True, 'layer': 0, 'blendFrame': -1})

            fork {
                EvEnemyZelda.PlayAnimation({'name': 'ev_CopiedZelda_CZ_warp', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Timer.Wait({'time': 1.0})
                Fade.StartPreset({'preset': 'FadeOutSlowB'})
            } {
                Audio.StopAllBGM({'duration': 2.0})
            }

        } {
            Timer.Wait({'time': 0.30000001192092896})
            Partner[companion].SetInterestIkEnabled({'enable': False})

            fork {
                Timer.Wait({'time': 5.583000183105469})
                Zelda.PlayAnimation({'name': 'ev_CopiedZelda_warp', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Partner[companion].PlayAnimation({'name': 'ev_CopiedZelda_warp', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {

                fork {
                    Partner[companion].Talk({'message': 'scenario/StoryAreaH:CopiedZelda_060', 'getAttention': False})
                } {
                    Timer.Wait({'time': 3.3333306312561035})
                    Dialog.Signal()
                }

            } {
                Timer.Wait({'time': 4.5})
                Audio.PlayOneshotSystemSE({'label': 'SE_SYS_WARP_START_00B', 'volume': 1.0, 'pitch': 1.0})
            } {
                Timer.Wait({'time': 4.800000190734863})
                Partner[companion].PlayTailorOtherChannelNoWait({'channel': 'WarpStart_00', 'restart': False, 'index': -1, 'stopOnSkipped': True})
                Timer.Wait({'time': 0.3330000042915344})
                Zelda.PlayTailorOtherChannelNoWait({'channel': 'WarpStart_00', 'restart': False, 'index': -1, 'stopOnSkipped': True})
                Timer.Wait({'time': 0.8330000042915344})

                fork {
                    Timer.Wait({'time': 0.6669999957084656})
                    Zelda.StopTailorOtherChannel({'channel': 'WarpStart_00', 'index': -1})
                    Partner[companion].StopTailorOtherChannel({'channel': 'WarpStart_00', 'index': -1})
                    Zelda.SetVisibility({'visible': False})
                    Partner[companion].SetVisibility({'visible': False})
                } {
                    Zelda.PlayTailorOtherChannelNoWait({'channel': 'CopiedZelda_WarpStart_01', 'restart': False, 'index': -1, 'stopOnSkipped': True})
                    Timer.Wait({'time': 3.8329999446868896})
                } {
                    Timer.Wait({'time': 1.0})
                    Audio.PlayOneshotSystemSE({'label': 'SE_SYS_WARP_START_01', 'volume': 1.0, 'pitch': 1.0})
                }

            }

        }

        GameControl.UnforbidLaunchApplet()
        GameControl.RequestLevelJump({'level': 'HyruleCastle', 'locator': 'EV_HyruleCastle_003', 'offsetX': 0.0, 'offsetZ': 0.0})
      case 0:
        Environment.LockCurrentRegion({'enableBlend': False, 'regionName': 'EV_FieldJungle_CopiedZelda_02'})
        goto Event322
    }
}

void ZeldaTalkMotion_1.5s() {
    Zelda.PlayAnimation({'name': '$talk_hand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.5})
    Zelda.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void ZeldaTalkMotion_2.0s() {
    Zelda.PlayAnimation({'name': '$talk_hand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 2.0})
    Zelda.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void LD_WorldGlobePieceGet() {
    Timer.Wait({'time': 1.0})
    if !FlowControl.CompareString({'value1': 'Dungeon', 'value2': 'L001'}) {
        Audio.Prepare({'label': 'BGM_EV_PARTNER_APPEAR', 'kind': 0, 'volume': 1.0})
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Partner[companion].PlayAnimation({'name': 'no_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.4000000059604645})
        Audio.PlayBGM({'label': 'BGM_EV_PARTNER_APPEAR', 'ignoreSkip': False, 'volume': 1.0})
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].TalkKeep({'message': 'scenario/PartnerTalk:AfterReleasPartnerTalk010_010', 'getAttention': False})
        Partner[companion].PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].TalkKeep({'message': 'scenario/PartnerTalk:AfterReleasPartnerTalk010_020', 'getAttention': False})
        Partner[companion].Talk({'message': 'scenario/PartnerTalk:AfterReleasPartnerTalk010_030', 'getAttention': False})
        Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.2000000476837158})
        Partner[companion].PlayAnimation({'name': 'yes02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].TalkKeep({'message': 'scenario/PartnerTalk:AfterReleasPartnerTalk010_040', 'getAttention': False})
        Partner[companion].Talk({'message': 'scenario/PartnerTalk:AfterReleasPartnerTalk010_050', 'getAttention': False})
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Event234:
        Player.AddItemAndGenericItemGetSequence({'itemKey': 'WorldGlobePiece', 'count': 1, 'index': 'Idx', 'messageEntry': 'ItemWorldGlobe:MessagePieceCrack', 'autoEquip': False, 'keepRaise': False})
        if !Player.IsInSideView() {
            Player.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        } else {
            Player.LookAtTalker({'offsetY': 1.5, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetZ': 0.0, 'keep': False})
        }
        Timer.Wait({'time': 0.5})
    } else {
        goto Event234
    }
}

void LookReturnPartner() {

    call EvResetCommon.AllResetNowait()

    FormerDungeonMarker.Activate()
    Partner[companion].PlayTailorOtherChannelNoWait({'channel': 'GaugeUp_glow_1', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    Partner[companion].DisableAutoMovement()
    Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetZ': 0.0, 'offsetY': 10.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': 2.25, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.3999999761581421, 'withoutTurn': False, 'immediateTurn': False})
    Zelda.AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    Zelda.AimCompanion({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    call Look_at_Partner()

    Fade.StartPreset({'preset': 'FadeInNormal'})
    Audio.PlayOneshotSystemSE({'label': 'SE_EV_MINI_TRI_MOVE_SHORT', 'volume': 1.0, 'pitch': 1.0})
    Partner[companion].MoveToBesideTargetActor({'offsetY': 1.0, 'actor': ActorIdentifier(name="Player"), 'offsetX': 2.25, 'speed': 0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
}

void Look_at_Partner_neck() {
    Player.SetInterestIkEnabled({'enable': True})
    Player.AimActor({'offsetY': -0.6000000238418579, 'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
}

void Get_Din() {

    fork {
        Camera.PlayActorOriginCameraAnimation({'path': 'actor/EvLastBossMu_1st_form.bfres', 'ignoreRotation': True, 'offsetX': 0.0, 'offsetZ': 0.0, 'offsetY': 0.0, 'name': 'ReleaseofGoddess02_cam', 'target': ActorIdentifier(name="Zelda"), 'chaseRatio': 1.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        ItemProofOfDin.Activate()
        ItemProofOfDin.SetVisibility({'visible': True})
        ItemProofOfDin.SetCullMode({'enabled': True, 'cullMode': 0})
        ItemProofOfDin.PlayAnimation({'name': 'ev_ReleaseofGoddess_c2', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {

        fork {
            Zelda.SetInterestIkEnabled({'enable': True})
        } {
            Partner[companion].SetInterestIkEnabled({'enable': True})
        }

    }


    fork {
        Camera.PlayActorOriginCameraAnimation({'path': 'actor/EvLastBossMu_1st_form.bfres', 'ignoreRotation': True, 'offsetX': 0.0, 'offsetZ': 0.0, 'offsetY': 0.0, 'target': ActorIdentifier(name="EvWhiteFade"), 'name': 'ReleaseofGoddess03_cam', 'chaseRatio': 1.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        ItemProofOfDin.WarpToActor({'distance': 0.0, 'offsetY': 0.25, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': 0.0})
        ItemProofOfDin.PlayAnimation({'name': 'ev_ReleaseofGoddess_c3', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Zelda.SetInterestIkEnabled({'enable': False})
    } {
        Partner[companion].SetInterestIkEnabled({'enable': False})
    }


    fork {
        Zelda.GenericItemGetSequence({'itemKey': 'ItemProofOfDin', 'count': 1, 'messageEntry': '', 'keepRaise': False, 'index': -1})
    } {
        Timer.Wait({'time': 0.5})
        ItemProofOfDin.WarpToActor({'distance': 0.0, 'offsetY': 20.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': 0.0})
    } {
        Timer.Wait({'time': 0.25})
        Audio.PlayOneshotSystemSE({'label': 'SE_PLAYER_ITEM_GET_LIGHT', 'volume': 1.0, 'pitch': 1.0})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Audio.DisablePlaySeFromTailor()
    }

    Timer.Wait({'time': 0.5})

    fork {
        Zelda.AimCompassPoint({'direction': 2, 'duration': 1.0, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimCompassPoint({'direction': 2, 'duration': 0.6000000238418579, 'withoutTurn': False, 'immediateTurn': False})
    }

    Audio.EnablePlaySeFromTailor()
    ItemProofOfDin.Destroy()
}

void Get_Nayru() {

    fork {
        Camera.PlayActorOriginCameraAnimation({'path': 'actor/EvLastBossMu_1st_form.bfres', 'ignoreRotation': True, 'offsetX': 0.0, 'offsetZ': 0.0, 'offsetY': 0.0, 'name': 'ReleaseofGoddess02_cam', 'target': ActorIdentifier(name="Zelda"), 'chaseRatio': 1.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        ItemProofOfNayru.Activate()
        ItemProofOfNayru.SetVisibility({'visible': True})
        ItemProofOfNayru.SetCullMode({'enabled': True, 'cullMode': 0})
        ItemProofOfNayru.PlayAnimation({'name': 'ev_ReleaseofGoddess_c2', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {

        fork {
            Zelda.SetInterestIkEnabled({'enable': True})
        } {
            Partner[companion].SetInterestIkEnabled({'enable': True})
        }

    }


    fork {
        Camera.PlayActorOriginCameraAnimation({'path': 'actor/EvLastBossMu_1st_form.bfres', 'ignoreRotation': True, 'offsetX': 0.0, 'offsetZ': 0.0, 'offsetY': 0.0, 'target': ActorIdentifier(name="EvWhiteFade"), 'name': 'ReleaseofGoddess03_cam', 'chaseRatio': 1.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        ItemProofOfNayru.WarpToActor({'distance': 0.0, 'offsetY': -1.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': 0.0})
        ItemProofOfNayru.PlayAnimation({'name': 'ev_ReleaseofGoddess_c3', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Zelda.SetInterestIkEnabled({'enable': False})
    } {
        Partner[companion].SetInterestIkEnabled({'enable': False})
    }


    fork {
        Zelda.GenericItemGetSequence({'count': 1, 'itemKey': 'ItemProofOfNayru', 'messageEntry': '', 'keepRaise': False, 'index': -1})
    } {
        Timer.Wait({'time': 0.5})
        ItemProofOfNayru.WarpToActor({'distance': 0.0, 'offsetY': 20.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': 0.0})
    } {
        Timer.Wait({'time': 0.25})
        Audio.PlayOneshotSystemSE({'label': 'SE_PLAYER_ITEM_GET_LIGHT', 'volume': 1.0, 'pitch': 1.0})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Audio.DisablePlaySeFromTailor()
    }

    Timer.Wait({'time': 0.5})

    fork {
        Zelda.AimCompassPoint({'direction': 2, 'duration': 1.0, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimCompassPoint({'direction': 2, 'duration': 0.6000000238418579, 'withoutTurn': False, 'immediateTurn': False})
    }

    Audio.EnablePlaySeFromTailor()
    ItemProofOfNayru.Destroy()
}

void Get_Farore() {

    fork {
        Camera.PlayActorOriginCameraAnimation({'path': 'actor/EvLastBossMu_1st_form.bfres', 'ignoreRotation': True, 'offsetX': 0.0, 'offsetZ': 0.0, 'offsetY': 0.0, 'name': 'ReleaseofGoddess02_cam', 'target': ActorIdentifier(name="Zelda"), 'chaseRatio': 1.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        ItemProofOfFarore.Activate()
        ItemProofOfFarore.SetVisibility({'visible': True})
        ItemProofOfFarore.SetCullMode({'enabled': True, 'cullMode': 0})
        ItemProofOfFarore.PlayAnimation({'name': 'ev_ReleaseofGoddess_c2', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {

        fork {
            Zelda.SetInterestIkEnabled({'enable': True})
        } {
            Partner[companion].SetInterestIkEnabled({'enable': True})
        }

    }


    fork {
        Camera.PlayActorOriginCameraAnimation({'path': 'actor/EvLastBossMu_1st_form.bfres', 'ignoreRotation': True, 'offsetX': 0.0, 'offsetZ': 0.0, 'offsetY': 0.0, 'name': 'ReleaseofGoddess03_cam', 'target': ActorIdentifier(name="Zelda"), 'chaseRatio': 1.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        ItemProofOfFarore.WarpToActor({'distance': 0.0, 'offsetY': 0.25, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': 0.0})
        ItemProofOfFarore.PlayAnimation({'name': 'ev_ReleaseofGoddess_c3', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Zelda.SetInterestIkEnabled({'enable': False})
    } {
        Partner[companion].SetInterestIkEnabled({'enable': False})
    }


    fork {
        Zelda.GenericItemGetSequence({'count': 1, 'itemKey': 'ItemProofOfFarore', 'messageEntry': '', 'keepRaise': False, 'index': -1})
    } {
        Timer.Wait({'time': 0.5})
        ItemProofOfFarore.WarpToActor({'actor': ActorIdentifier(name="Zelda"), 'distance': 0.0, 'offsetY': 20.0, 'offsetX': 0.0})
    } {
        Timer.Wait({'time': 0.25})
        Audio.PlayOneshotSystemSE({'label': 'SE_PLAYER_ITEM_GET_LIGHT', 'volume': 1.0, 'pitch': 1.0})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Audio.DisablePlaySeFromTailor()
    }

    Timer.Wait({'time': 0.5})

    fork {
        Zelda.AimCompassPoint({'direction': 2, 'duration': 1.0, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimCompassPoint({'direction': 2, 'duration': 0.6000000238418579, 'withoutTurn': False, 'immediateTurn': False})
    }

    Audio.EnablePlaySeFromTailor()
    ItemProofOfFarore.Destroy()
}

void End__Din() {

    fork {
        Zelda.StopTailorOtherChannel({'channel': 'DinLight', 'index': -1})
    } {
        Audio.StopBGM({'label': 'BGM_EV_GODDESS', 'duration': 3.5})
    }


    fork {
        EvWhiteFade.PlayMaterialAnimationNoWait({'name': 'Fade_ed', 'layer': 0})
    } {
        Zelda.SetInterestIkEnabled({'enable': False})
    } {
        Partner[companion].SetInterestIkEnabled({'enable': False})
    } {
        Timer.Wait({'time': 0.5})

        fork {
            ItemHeartContainer.SetVisibility({'visible': True})
        } {
            FormerDungeonMarker.Activate()
        }

    } {
        Environment.UnlockCurrentRegion({'regionName': 'EV_Goddess', 'enableBlend': True})
    }

    Zelda.ResetAim()
    Audio.PlayZoneBaseAmbience()
    Timer.Wait({'time': 2.0})
    EvWhiteFade.Deactivate()
}

void End_Farore() {

    fork {
        Zelda.StopTailorOtherChannel({'channel': 'FaroreLight', 'index': -1})
    } {
        Audio.StopBGM({'label': 'BGM_EV_GODDESS', 'duration': 3.5})
    }


    fork {
        EvWhiteFade.PlayMaterialAnimationNoWait({'name': 'Fade_ed', 'layer': 0})
    } {
        Zelda.SetInterestIkEnabled({'enable': False})
    } {
        Partner[companion].SetInterestIkEnabled({'enable': False})
    } {
        Timer.Wait({'time': 0.5})

        fork {
            ItemHeartContainer.SetVisibility({'visible': True})
        } {
            Door.SetVisibility({'visible': True})
        } {
            FormerDungeonMarker.Activate()
        }

    } {
        Environment.UnlockCurrentRegion({'regionName': 'EV_Goddess', 'enableBlend': True})
    }

    Zelda.ResetAim()
    Audio.PlayZoneBaseAmbience()
    Timer.Wait({'time': 2.0})
    EvWhiteFade.Deactivate()
}

void End_Nayru() {

    fork {
        Zelda.StopTailorOtherChannel({'channel': 'NayruLight', 'index': -1})
    } {
        Audio.StopBGM({'label': 'BGM_EV_GODDESS', 'duration': 3.5})
    }


    fork {
        EvWhiteFade.PlayMaterialAnimationNoWait({'name': 'Fade_ed', 'layer': 0})
    } {
        Zelda.SetInterestIkEnabled({'enable': False})
    } {
        Partner[companion].SetInterestIkEnabled({'enable': False})
    } {
        Timer.Wait({'time': 0.5})

        fork {
            ItemHeartContainer.SetVisibility({'visible': True})
        } {
            Door.SetVisibility({'visible': True})
        } {
            FormerDungeonMarker.Activate()
        }

    } {
        Environment.UnlockCurrentRegion({'regionName': 'EV_Goddess', 'enableBlend': True})
    }

    Zelda.ResetAim()
    Audio.PlayZoneBaseAmbience()
    Timer.Wait({'time': 2.0})
    EvWhiteFade.Deactivate()
}

void ReleaseofGoddessFirstStep_Frore() {
    Dialog.ShowTalker({'talker': 'glossary/Character:Frore', 'message': 'scenario/StoryAreaH:ReleaseofGoddessFirstStep_010_Farore'})
    Dialog.ShowTalker({'talker': 'glossary/Character:Frore', 'message': 'scenario/StoryAreaH:ReleaseofGoddessFirstStep_020_Farore'})
    EventFlags.SetFlag({'value': True, 'symbol': 'ReleaseofGoddess1'})
    Timer.Wait({'time': 1.0})
}

void ReleaseofGoddessFirstStep_Nayru() {
    Dialog.ShowTalker({'talker': 'glossary/Character:Nayru', 'message': 'scenario/StoryAreaH:ReleaseofGoddessFirstStep_010_Nayru'})
    Dialog.ShowTalker({'talker': 'glossary/Character:Nayru', 'message': 'scenario/StoryAreaH:ReleaseofGoddessFirstStep_020_Nayru'})
    EventFlags.SetFlag({'value': True, 'symbol': 'ReleaseofGoddess1'})
    Timer.Wait({'time': 1.0})
}

void ReleaseofGoddessSecondStep1_Frore() {
    Dialog.ShowTalker({'talker': 'glossary/Character:Frore', 'message': 'scenario/StoryAreaH:ReleaseofGoddessSecondStep_005_Farore'})
    goto Event694
}

void ReleaseofGoddessSecondStep1_Nayru() {
    Dialog.ShowTalker({'talker': 'glossary/Character:Nayru', 'message': 'scenario/StoryAreaH:ReleaseofGoddessSecondStep_005_Nayru'})
    goto Event694
}

void ReleaseofGoddessThirdStep_Frore() {
    Dialog.ShowTalker({'talker': 'glossary/Character:Frore', 'message': 'scenario/StoryAreaH:ReleaseofGoddessThirdStep_010_Farore'})
    EventFlags.SetFlag({'value': True, 'symbol': 'ReleaseofGoddess3'})
    Timer.Wait({'time': 1.0})
}

void ReleaseofGoddessThirdStep_Nayru() {
    Dialog.ShowTalker({'talker': 'glossary/Character:Nayru', 'message': 'scenario/StoryAreaH:ReleaseofGoddessThirdStep_010_Nayru'})
    EventFlags.SetFlag({'value': True, 'symbol': 'ReleaseofGoddess3'})
    Timer.Wait({'time': 1.0})
}

void ReleaseofGoddessSecondStep2_Din() {
    Dialog.ShowTalker({'talker': 'glossary/Character:Din', 'message': 'scenario/StoryAreaH:ReleaseofGoddessSecondStep_020_Din'})
    EventFlags.SetFlag({'value': True, 'symbol': 'ReleaseofGoddess2'})
    Timer.Wait({'time': 1.0})
}

void ReleaseofGoddessSecondStep2_Frore() {
    Dialog.ShowTalker({'message': 'scenario/StoryAreaH:ReleaseofGoddessSecondStep_020_Farore', 'talker': 'glossary/Character:Frore'})
    EventFlags.SetFlag({'value': True, 'symbol': 'ReleaseofGoddess2'})
    Timer.Wait({'time': 1.0})
}

void ReleaseofGoddessSecondStep2_Nayru() {
    Dialog.ShowTalker({'message': 'scenario/StoryAreaH:ReleaseofGoddessSecondStep_020_Nayru', 'talker': 'glossary/Character:Nayru'})
    EventFlags.SetFlag({'value': True, 'symbol': 'ReleaseofGoddess2'})
    Timer.Wait({'time': 1.0})
}

void EvMapWarpIn() {
    Zelda.LookAtTalker({'offsetZ': -2.0, 'duration': 0.0, 'chaseRatio': 1.0, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'keep': False})

    fork {
        Zelda.AimCompassPoint({'direction': 0, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner[companion].WarpToActorWithCompassPoint({'offsetY': 1.75, 'direction': 0, 'actor': ActorIdentifier(name="Zelda"), 'distance': 0.0, 'offsetX': 0.0})
    }


    fork {
        Zelda.PlayAnimationNoWait({'name': 'ev_WarpStart_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayAnimationNoWait({'name': 'ev_WarpStart_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Zelda.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    }


    fork {
        Zelda.PlayTailorOtherChannelNoWait({'channel': 'WarpEnd_00', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Timer.Wait({'time': 2.5})

        fork {
            Zelda.SetVisibility({'visible': True})
        } {
            Partner[companion].SetVisibility({'visible': True})
        }

        Timer.Wait({'time': 0.5})

        fork {
            Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } {

        call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

    }

}
