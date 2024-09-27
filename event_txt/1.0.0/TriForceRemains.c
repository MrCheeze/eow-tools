-------- EventFlow: TriForceRemains --------

Actor: EvEnemyZelda
entrypoint: None()
actions: ['Deactivate', 'Talk', 'MoveToTargetActor', 'PlayAnimation', 'AimActor', 'PlayAnimationNoWait', 'Activate', 'LookAtTalker', 'WarpToActor', 'AimCompassPoint', 'PlayMaterialAnimation', 'SetFacialExpression', 'PlayTailorOtherChannelNoWait', 'SetComponentActive', 'StopTailorOtherChannel', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['Signal']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['CheckProgress']
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['SetVisibility', 'MoveToCompassPoint', 'PlayAnimation', 'WarpToActor', 'AimActor', 'SetInterestIkEnabled', 'SetCullMode', 'PlayAnimationNoWait', 'SetFacialExpression']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Triforce
entrypoint: None()
actions: ['PlayAnimation', 'SetVisibility', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel', 'Destroy', 'WarpToActor', 'Activate', 'Deactivate']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimCompassPoint', 'MoveToCompassPoint', 'SetVisibility', 'WarpToActorWithCompassPoint', 'MoveToBesideTargetActor', 'AimActorLinkedPoint', 'SetInterestIkEnabled', 'AimActor']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump', 'SetThroughObstaclesOnMove', 'SetResetOverlappedActorsOnMoveDone', 'SetForcedResolution', 'ResetForcedResolution', 'ForbidLaunchApplet', 'UnforbidLaunchApplet']
queries: []
params: None

Actor: ElevatorTriforce
entrypoint: None()
actions: ['MoveToCompassPoint', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['PlayLocationOriginCameraAnimation', 'Reset', 'LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: BoundaryGate
entrypoint: None()
actions: ['Appear', 'Activate']
queries: []
params: None

Actor: TagEvTailorPlayer[Triforce_Appear]
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: TagEvTailorPlayer[Barrier]
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel']
queries: []
params: None

Actor: EvTecuum
entrypoint: None()
actions: ['PlayAnimation', 'PlayTailorOtherChannelNoWait', 'Activate', 'WarpToActor', 'SetVisibility', 'Destroy', 'StopTailorOtherChannel']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE', 'StopSE', 'PlayBGM', 'Prepare', 'PlayBGMEx', 'StopAllBGM', 'PlayZoneBGM', 'SetBGMVolume']
queries: []
params: None

Actor: TransitCounters
entrypoint: None()
actions: ['SetValue']
queries: []
params: None

Actor: Vibration
entrypoint: None()
actions: ['PlayVibration', 'StopVibration']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'SetVisibility', 'MoveToCompassPoint', 'PlayAnimation', 'AimActor', 'SetInterestIkEnabled', 'AimPlayer', 'PlayAnimationNoWait', 'WarpToActorWithCompassPoint', 'AimCompassPoint', 'MoveToBesideTargetActor', 'WarpToActor', 'AimActorLinkedPoint', 'MoveToTargetLinkedPoint']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: []
queries: []
params: None

void IdentityOfGreatPower() {
    GameControl.SetForcedResolution({'console': 13440756, 'handheld': 9600540})

    call EvResetCommon.AllReset()

    Audio.StopAllBGM({'duration': 1.399999976158142})
    GameControl.ForbidLaunchApplet()
    Audio.PlayOneshotSystemSE({'label': 'SE_EV_TRIFORCE_SPILITS1', 'volume': 1.0, 'pitch': 1.0})
    Audio.Prepare({'kind': 0, 'label': 'BGM_EV_TRIFORCE_SPLITS_B', 'volume': 1.0})

    fork {
        Camera.PlayLocationOriginCameraAnimation({'offsetZ': 0.0, 'name': 'TriforceSplits01_cam', 'path': 'actor/EvLastBossMu_1st_form.bfres', 'location': 'TriforceSplits_cam', 'offsetY': 0.0, 'ignoreRotation': True, 'chaseRatio': 1.0, 'offsetX': 0.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Triforce.PlayAnimation({'name': 'ev_TriforceSplits_c1', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EvEnemyZelda.PlayAnimationNoWait({'name': 'wait_barehands', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.4333332777023315})

        fork {
            EvEnemyZelda.Talk({'message': 'scenario/StoryAreaH:IdentityOfGreatPower_010', 'getAttention': False})
        } {
            Timer.Wait({'time': 3.549997568130493})
            Dialog.Signal()
        }

        Timer.Wait({'time': 0.25007370114326477})

        fork {
            EvEnemyZelda.Talk({'message': 'scenario/StoryAreaH:IdentityOfGreatPower_020', 'getAttention': False})
        } {
            Timer.Wait({'time': 4.816674709320068})
            Dialog.Signal()
        }

        Timer.Wait({'time': 0.28336670994758606})

        fork {
            EvEnemyZelda.Talk({'message': 'scenario/StoryAreaH:IdentityOfGreatPower_020_02', 'getAttention': False})
        } {
            Timer.Wait({'time': 4.833341598510742})
            Dialog.Signal()
        }

        Timer.Wait({'time': 0.16663670539855957})

        fork {
            EvEnemyZelda.Talk({'message': 'scenario/StoryAreaH:IdentityOfGreatPower_030', 'getAttention': False})
        } {
            Timer.Wait({'time': 3.199997663497925})
            Dialog.Signal()
        }

        Timer.Wait({'time': 0.2666667103767395})

        fork {
            EvEnemyZelda.Talk({'message': 'scenario/StoryAreaH:IdentityOfGreatPower_030_02', 'getAttention': False})
        } {
            Timer.Wait({'time': 5.966689586639404})
            Dialog.Signal()
        }

        Timer.Wait({'time': 0.15006670355796814})

        fork {
            EvEnemyZelda.Talk({'message': 'scenario/StoryAreaH:IdentityOfGreatPower_040', 'getAttention': False})
        } {
            Timer.Wait({'time': 8.016716003417969})
            Dialog.Signal()
        }

        Timer.Wait({'time': 0.2666966915130615})

        fork {
            EvEnemyZelda.Talk({'message': 'scenario/StoryAreaH:IdentityOfGreatPower_050', 'getAttention': False})
        } {
            Timer.Wait({'time': 5.783354759216309})
            Dialog.Signal()
        }

        Timer.Wait({'time': 0.21666669845581055})
        EvEnemyZelda.MoveToTargetActor({'speed': 0, 'distance': 1.0, 'withoutTurn': True, 'actor': ActorIdentifier(name="Triforce"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        EvEnemyZelda.PlayAnimationNoWait({'name': 'wait_barehands', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EvEnemyZelda.AimActor({'actor': ActorIdentifier(name="Triforce"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        EvEnemyZelda.SetComponentActive({'active': False, 'name': 'PropplayerCopyRod'})
        Player.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    } {
        Audio.PlayBGM({'label': 'BGM_EV_TRIFORCE_SPLITS_A', 'volume': 1.0, 'ignoreSkip': True})
    }

    GameControl.UnforbidLaunchApplet()

    fork {
        Camera.PlayLocationOriginCameraAnimation({'name': 'TriforceSplits02_cam', 'path': 'actor/EvLastBossMu_1st_form.bfres', 'location': 'TriforceSplits_cam', 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'chaseRatio': 1.0, 'offsetX': 0.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        EvEnemyZelda.PlayAnimation({'name': 'wait_barehands', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EvEnemyZelda.Talk({'message': 'scenario/StoryAreaH:IdentityOfGreatPower_055', 'getAttention': False})
        Audio.StopSE({'label': 'SE_EV_TRIFORCE_SPILITS1', 'duration': 0.30000001192092896})
    } {
        Player.AimCompassPoint({'direction': 2, 'duration': 0.36000001430511475, 'withoutTurn': False, 'immediateTurn': False})
        Player.WarpToActorWithCompassPoint({'direction': 2, 'offsetY': -1.5, 'offsetX': 0.0, 'actor': ActorIdentifier(name="Triforce"), 'distance': 14.0})
        Partner[companion].WarpToActorWithCompassPoint({'direction': 2, 'offsetY': -0.5, 'offsetX': -1.2000000476837158, 'distance': 14.0, 'actor': ActorIdentifier(name="Triforce")})
    }


    fork {
        Triforce.PlayAnimation({'name': 'ev_TriforceSplits_c2', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EvEnemyZelda.PlayAnimation({'name': 'ev_TriforceSplits_CZ_c2', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Triforce.PlayTailorOtherChannelNoWait({'channel': 'ev_TriforceSplits_c2', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Triforce.StopTailorOtherChannel({'channel': 'Triforce_Remains_Playable', 'index': -1})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_TRIFORCE_SPILITS3', 'volume': 1.0, 'pitch': 1.0})
    } {
        Audio.PlayBGMEx({'label': 'BGM_EV_TRIFORCE_SPLITS_B', 'volume': 1.0, 'sec': 3.119999885559082, 'ignoreSkip': False})
    } {
        GameControl.ForbidLaunchApplet()
    }


    fork {
        Camera.PlayLocationOriginCameraAnimation({'name': 'TriforceSplits03_cam', 'path': 'actor/EvLastBossMu_1st_form.bfres', 'location': 'TriforceSplits_cam', 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'chaseRatio': 1.0, 'offsetX': 0.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Zelda.SetFacialExpression({'expression': 'serious_few'})
        Zelda.SetVisibility({'visible': True})
        Zelda.MoveToCompassPoint({'direction': 2, 'speed': 1, 'distance': 3.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Zelda.SetCullMode({'enabled': False, 'cullMode': 0})
        Zelda.PlayAnimation({'name': 'ev_worldglobe_wait', 'blendFrame': 15, 'layer': 0, 'restart': False})
    } {
        Partner[companion].SetVisibility({'visible': True})
        Partner[companion].MoveToCompassPoint({'direction': 2, 'speed': 1, 'distance': 3.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Partner[companion].PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Triforce.PlayTailorOtherChannelNoWait({'channel': 'ev_TriforceSplits_c3', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    }


    fork {
        Camera.PlayLocationOriginCameraAnimation({'offsetZ': 0.0, 'name': 'TriforceSplits04_cam', 'path': 'actor/EvLastBossMu_1st_form.bfres', 'location': 'TriforceSplits_cam', 'offsetY': 0.0, 'ignoreRotation': True, 'chaseRatio': 1.0, 'offsetX': 0.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Triforce.PlayAnimation({'name': 'ev_TriforceSplits_c4', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EvEnemyZelda.PlayAnimation({'name': 'ev_TriforceSplits_CZ_c4', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Zelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_TRIFORCE_SPILITS4', 'volume': 1.0, 'pitch': 1.0})
    } {
        Audio.StopSE({'label': 'SE_EV_TRIFORCE_SPILITS3', 'duration': 0.30000001192092896})
    } {
        Timer.Wait({'time': 7.0})
        EvEnemyZelda.SetComponentActive({'active': True, 'name': 'PropplayerCopyRod'})
        Vibration.PlayVibration({'label': '35_L03_GrumbleLoop2', 'pan': 0.5, 'ratio': 1.0})
        Timer.Wait({'time': 5.0})
        Vibration.StopVibration({'label': '35_L03_GrumbleLoop2'})
        Timer.Wait({'time': 7.0})
        Vibration.PlayVibration({'label': '82_P15_WavyDamped4', 'pan': 0.5, 'ratio': 1.0})
    } {

        fork {
            Timer.Wait({'time': 18.5})

            fork {
                Triforce.PlayTailorOtherChannelNoWait({'channel': 'ev_TriforceSplits_c5', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            } {
                Triforce.PlayTailorOtherChannelNoWait({'channel': 'ev_TriforceSplits_c4_Separate', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            }

        } {
            Timer.Wait({'time': 7.0})
            Triforce.PlayTailorOtherChannelNoWait({'channel': 'ev_TriforceSplits_c4', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            Timer.Wait({'time': 5.5})
            Triforce.StopTailorOtherChannel({'channel': 'ev_TriforceSplits_c2', 'index': -1})
            Triforce.StopTailorOtherChannel({'channel': 'ev_TriforceSplits_c4', 'index': -1})
        }

    } {
        Triforce.StopTailorOtherChannel({'channel': 'ev_TriforceSplits_c3', 'index': -1})
    }


    fork {
        Camera.PlayLocationOriginCameraAnimation({'name': 'TriforceSplits05_cam', 'path': 'actor/EvLastBossMu_1st_form.bfres', 'location': 'TriforceSplits_cam', 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'nearClipDistanceCtrl': True, 'farClipDistanceCtrl': True, 'chaseRatio': 1.0, 'offsetX': 0.0, 'lookAtDistanceCtrl': True, 'aspectRatioCtrl': False})
    } {
        Triforce.PlayAnimation({'name': 'ev_TriforceSplits_c5', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Triforce.SetVisibility({'visible': False})
        Triforce.Deactivate()
    } {
        EvEnemyZelda.PlayAnimation({'name': 'ev_TriforceSplits_CZ_c5', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Zelda.PlayAnimation({'blendFrame': 15, 'name': 'ev_TriforceSplits_c5', 'layer': 0, 'restart': False})
    } {
        Partner[companion].AimActor({'boneName': 'left', 'duration': 0.5, 'actor': ActorIdentifier(name="Triforce"), 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 8.100000381469727})
        Partner[companion].AimActor({'boneName': 'upper', 'actor': ActorIdentifier(name="Triforce"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 8.699999809265137})
        BoundaryGate.Activate()
        BoundaryGate.Appear()
    } {
        Timer.Wait({'time': 5.5})
        Vibration.PlayVibration({'label': '58_T04_Tap4', 'pan': 0.5, 'ratio': 1.0})
    }


    fork {
        EvEnemyZelda.WarpToActor({'distance': 2.5, 'offsetY': -0.5, 'actor': ActorIdentifier(name="Triforce"), 'offsetX': 0.0})
        EvEnemyZelda.PlayAnimation({'name': 'wait', 'blendFrame': 0, 'layer': 0, 'restart': False})
    } {
        Zelda.PlayAnimationNoWait({'name': 'wait', 'blendFrame': 0, 'layer': 0, 'restart': False})
        Zelda.WarpToActor({'offsetY': 0.0, 'distance': 3.5, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': 0.0})
        Partner[companion].WarpToActor({'offsetX': 1.2000000476837158, 'offsetY': 1.0, 'distance': 0.5, 'actor': ActorIdentifier(name="Zelda")})
    } {
        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'blendFrame': 0, 'layer': 0, 'restart': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'duration': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'distanceOffset': 3.0, 'chaseRatio': 1.0, 'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="EvEnemyZelda"), 'weight2': 2.5, 'weight1': 1.0, 'offsetX': 0.0})
    }

    Audio.Prepare({'kind': 0, 'label': 'BGM_EV_TRIFORCE_SPLITS_C', 'volume': 1.0})
    Timer.Wait({'time': 1.0})
    GameControl.UnforbidLaunchApplet()
    EventFlags.SetFlag({'symbol': 'LastDungeon_CrackAppear', 'value': True})

    fork {
        EvTecuum.WarpToActor({'actor': ActorIdentifier(name="EvEnemyZelda"), 'distance': 0.0, 'offsetY': 0.0, 'offsetX': 0.0})
        EvTecuum.SetVisibility({'visible': False})
        EvTecuum.Activate()
        EvEnemyZelda.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            Timer.Wait({'time': 0.4000000059604645})
            EvEnemyZelda.PlayMaterialAnimation({'layer': 1, 'name': 'enemyZelda'})
        } {
            EvEnemyZelda.PlayTailorOtherChannelNoWait({'channel': 'Aura_Normal', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        } {
            EvEnemyZelda.Talk({'message': 'scenario/StoryAreaH:IdentityOfGreatPower_140', 'getAttention': False})
        } {
            Timer.Wait({'time': 0.800000011920929})
            Audio.PlayBGM({'ignoreSkip': False, 'label': 'BGM_EV_TRIFORCE_SPLITS_C', 'volume': 1.0})
        }

    } {
        Timer.Wait({'time': 0.5})
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'actor': ActorIdentifier(name="EvEnemyZelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.800000011920929})
        Partner[companion].SetInterestIkEnabled({'enable': True})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="EvEnemyZelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    EvEnemyZelda.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.4000000059604645})
    EvEnemyZelda.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    EvEnemyZelda.Talk({'message': 'scenario/StoryAreaH:IdentityOfGreatPower_150', 'getAttention': False})
    EvEnemyZelda.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})

    fork {
        EvEnemyZelda.SetInterestIkEnabled({'enable': True})
        EvEnemyZelda.AimActor({'offsetY': 0.0, 'withoutTurn': False, 'offsetZ': 6.5, 'actor': ActorIdentifier(name="BoundaryGate"), 'duration': 0.10000000149011612, 'boneName': '', 'offsetX': 0.0, 'immediateTurn': False})
        EvEnemyZelda.AimActor({'offsetY': 0.0, 'withoutTurn': True, 'offsetZ': 0.0, 'actor': ActorIdentifier(name="BoundaryGate"), 'duration': 0.10000000149011612, 'boneName': '', 'offsetX': 0.0, 'immediateTurn': False})
    } {
        EvEnemyZelda.Talk({'message': 'scenario/StoryAreaH:IdentityOfGreatPower_160', 'getAttention': False})
    }

    EvEnemyZelda.AimCompassPoint({'direction': 0, 'withoutTurn': False, 'duration': 0.4000000059604645, 'immediateTurn': False})
    EvEnemyZelda.SetInterestIkEnabled({'enable': False})
    EvEnemyZelda.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    EvEnemyZelda.AimCompassPoint({'direction': 0, 'withoutTurn': False, 'duration': 0.4000000059604645, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    EvEnemyZelda.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    EvEnemyZelda.Talk({'message': 'scenario/StoryAreaH:IdentityOfGreatPower_170', 'getAttention': False})
    Timer.Wait({'time': 0.5})
    EvEnemyZelda.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        EvEnemyZelda.PlayMaterialAnimation({'name': 'enemyZelda', 'layer': 2})
    } {
        EvEnemyZelda.SetFacialExpression({'expression': 'smile_noOpen'})
    } {
        EvEnemyZelda.StopTailorOtherChannel({'channel': 'Aura_Normal', 'index': -1})
        EvEnemyZelda.PlayTailorOtherChannelNoWait({'channel': 'Aura_Anger', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        EvEnemyZelda.PlayTailorOtherChannelNoWait({'channel': 'GlowingEyes', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Zelda.PlayAnimationNoWait({'name': 'ev_BossApear_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 1.399999976158142})
    EvEnemyZelda.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    EvEnemyZelda.Talk({'message': 'scenario/StoryAreaH:IdentityOfGreatPower_180', 'getAttention': False})
    Timer.Wait({'time': 0.30000001192092896})

    fork {
        EvEnemyZelda.PlayTailorOtherChannelNoWait({'channel': 'ChangeTecuum', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        EvEnemyZelda.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.5})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Zelda.PlayAnimationNoWait({'name': 'ev_surprise_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        EvTecuum.SetVisibility({'visible': True})
    } {
        EvEnemyZelda.Deactivate()
    }


    fork {
        EvTecuum.PlayTailorOtherChannelNoWait({'channel': 'ev_TriforceSplits', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        EvTecuum.PlayAnimation({'name': 'ev_TriforceSplits', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EvTecuum.StopTailorOtherChannel({'channel': 'ev_TriforceSplits', 'index': -1})
        EvTecuum.Destroy()
        Audio.StopAllBGM({'duration': 3.0})
    } {
        Zelda.SetInterestIkEnabled({'enable': True})

        fork {
            Timer.Wait({'time': 1.7000000476837158})

            fork {
                Zelda.MoveToCompassPoint({'speed': 1, 'direction': 2, 'distance': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
            } {
                Timer.Wait({'time': 0.20000000298023224})
                Partner[companion].MoveToCompassPoint({'direction': 2, 'speed': 1, 'distance': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
            }

        } {
            Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 1.0})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="EvTecuum"), 'boneName': 'n_hara', 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 1.0})
            Zelda.AimActor({'withoutTurn': True, 'boneName': 'n_hara', 'offsetX': 0.0, 'offsetY': 0.0, 'actor': ActorIdentifier(name="EvTecuum"), 'duration': 0.4000000059604645, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    EvEnemyZelda.Deactivate()
    Timer.Wait({'time': 1.5})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaH:IdentityOfGreatPower_190', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'offsetY': -1.0, 'withoutTurn': False, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Zelda.SetInterestIkEnabled({'enable': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GameControl.ResetForcedResolution()
    QuestSystem.SetProgress({'symbol': 'LastDungeon:4054912678', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventFlags.SetFlag({'symbol': 'LastDungeon_gateopen', 'value': True})
    Audio.PlayZoneBGM({'stopbgm': False})
}

void OpenAreaHBoundaryGate() {

    call EvResetCommon.AllReset()

    EventFlags.SetFlag({'symbol': 'LastDungeon_gateopen', 'value': True})
    Partner[companion].MoveToTargetLinkedPoint({'speed': 0, 'offsetY': 1.0, 'index': 0, 'offsetX': 0.0, 'actor': ActorIdentifier(name="Area"), 'offsetZ': -1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActorLinkedPoint({'offsetY': 0.0, 'pointIndex': 0, 'withoutTurn': True, 'actor': ActorIdentifier(name="Area"), 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActorLinkedPoint({'offsetY': 0.0, 'withoutTurn': False, 'pointIndex': 0, 'actor': ActorIdentifier(name="Area"), 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaH:OpenAreaHBoundaryGate_030', 'getAttention': False})
    }

    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.5})
    Partner[companion].AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'offsetY': -0.6000000238418579, 'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].Talk({'message': 'scenario/StoryAreaH:OpenAreaHBoundaryGate_040', 'getAttention': False})
    }


    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaH:OpenAreaHBoundaryGate_050', 'getAttention': False})
    } {
        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner[companion].PlayAnimation({'name': 'yes02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaH:OpenAreaHBoundaryGate_060', 'getAttention': False})
    Player.AimActorLinkedPoint({'offsetY': 0.0, 'withoutTurn': False, 'pointIndex': 0, 'actor': ActorIdentifier(name="Area"), 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    QuestSystem.SetProgress({'symbol': 'LastDungeon:1511324440', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void LiftUpOut() {

    call EvResetCommon.AllReset()

    GameControl.SetThroughObstaclesOnMove({'enable': False})
    GameControl.SetResetOverlappedActorsOnMoveDone({'enable': False})

    fork {
        Player.MoveToBesideTargetActor({'actor': ActorIdentifier(name="ElevatorTriforce"), 'speed': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    } {
        Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetY': 2.0, 'offsetX': 1.0, 'offsetZ': -0.5, 'actor': ActorIdentifier(name="ElevatorTriforce"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    }

    Timer.Wait({'time': 0.5})

    fork {
        Player.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})
    Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_TRIFORCE_LIFT_UP1', 'volume': 1.0, 'pitch': 1.0})
    ElevatorTriforce.PlayTailorOtherChannelNoWait({'channel': 'on', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    Timer.Wait({'time': 1.2000000476837158})

    fork {
        Timer.Wait({'time': 0.5})

        call AreaExitCommon._OutCommon({'fadePreset': 'FadeOutNormalB'})

    } {
        ElevatorTriforce.MoveToCompassPoint({'direction': 5, 'speed': 0, 'distance': 3.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Partner[companion].MoveToCompassPoint({'distance': 3.0, 'speed': 0, 'withoutTurn': True, 'direction': 5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    TransitCounters.SetValue({'key': 'ElevatorTriforceTraffic', 'value': 1})
    GameControl.RequestLevelJump({'level': 'level', 'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void LiftDownIn() {
    Audio.StopAllBGM({'duration': 0.0})
    Player.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    GameControl.SetThroughObstaclesOnMove({'enable': False})
    GameControl.SetResetOverlappedActorsOnMoveDone({'enable': False})
    Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_TRIFORCE_LIFT_DOWN2', 'volume': 1.0, 'pitch': 1.0})

    fork {

        call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

    } {
        ElevatorTriforce.MoveToCompassPoint({'direction': 4, 'speed': 0, 'distance': 3.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    Player.MoveToCompassPoint({'speed': 0, 'direction': 2, 'distance': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    TransitCounters.SetValue({'key': 'ElevatorTriforceTraffic', 'value': 0})
    Audio.PlayZoneBGM({'stopbgm': False})
    if QuestSystem.CheckProgress({'symbol': 'LastDungeon:1367956526'}) == 4294967295 {
        QuestSystem.SetProgress({'symbol': 'LastDungeon:1367956526', 'isShowTelopInEvent': False, 'isFrontFade': False})
    }
}

void TriforceAppear() {

    call EvResetCommon.AllReset()

    GameControl.ForbidLaunchApplet()
    Audio.SetBGMVolume({'volume': 0.4000000059604645, 'duration': 2.0})
    Timer.Wait({'time': 0.699999988079071})
    TagEvTailorPlayer[Barrier].PlayTailorOtherChannelNoWait({'channel': 'Triforce_Barrier', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    EvEnemyZelda.Activate()
    EvEnemyZelda.LookAtTalker({'keep': True, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 0.5})
    EvEnemyZelda.PlayAnimation({'name': 'ev_worldglobe_c1_touch_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    TagEvTailorPlayer[Barrier].StopTailorOtherChannel({'channel': 'Triforce_Barrier', 'index': -1})
    TagEvTailorPlayer[Barrier].PlayTailorOtherChannelNoWait({'channel': 'Triforce_Barrier_Break', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    Timer.Wait({'time': 1.0})
    EvEnemyZelda.PlayAnimation({'name': 'ev_worldglobe_c1_touch_ed,wait_barehands', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    TagEvTailorPlayer[Barrier].StopTailorOtherChannel({'channel': 'Triforce_Barrier_Break', 'index': -1})
    EvEnemyZelda.MoveToTargetActor({'speed': 0, 'distance': 5.0, 'actor': ActorIdentifier(name="TagEvTailorPlayer", sub_name="Triforce_Appear"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Timer.Wait({'time': 1.1670000553131104})

    fork {
        Timer.Wait({'time': 0.5})

        fork {
            TagEvTailorPlayer[Triforce_Appear].PlayTailorOtherChannelNoWait({'channel': 'Triforce_Appear', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        } {
            Timer.Wait({'time': 25.0})
        } {
            Timer.Wait({'time': 15.0})
            Triforce.WarpToActor({'offsetY': 0.0, 'actor': ActorIdentifier(name="Triforce"), 'distance': 0.0, 'offsetX': 0.0})
            Triforce.Activate()
            Triforce.StopTailorOtherChannel({'channel': 'ac_Keep', 'index': -1})
            Triforce.PlayTailorOtherChannelNoWait({'channel': 'Triforce_Remains', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        }

    } {
        Triforce.PlayAnimation({'name': 'ev_TriforceAppear_c1', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Camera.PlayLocationOriginCameraAnimation({'offsetZ': 0.0, 'path': 'actor/EvLastBossMu_1st_form.bfres', 'location': 'TriforceSplits_cam', 'offsetY': 0.0, 'ignoreRotation': True, 'name': 'TriforceAppear01_cam', 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    }

    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    EvEnemyZelda.Deactivate()
    Triforce.Destroy()
    GameControl.UnforbidLaunchApplet()
    Audio.SetBGMVolume({'duration': 2.0, 'volume': 1.0})
    EventFlags.SetFlag({'value': True, 'symbol': 'TriforceAppear'})
}
