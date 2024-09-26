-------- EventFlow: HebraMountains --------

Actor: Partner
entrypoint: None()
actions: ['Talk', 'WarpToActor', 'PlayAnimationNoWait', 'PlayAnimation', 'MoveToTargetLinkedPoint', 'MoveToTargetActor', 'AimActorLinkedPoint', 'MoveToCompassPoint', 'MoveToBesideTargetActor', 'AimCompassPoint', 'AimPlayer', 'AimActor', 'SetInterestIkEnabled', 'EnableAutoMovement', 'ResetAim', 'DisableAutoMovement', 'WarpToDefaultPosition']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['Show', 'ShowTalker']
queries: ['GetLastResult']
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['CheckProgress']
params: None

Actor: Yeti000
entrypoint: None()
actions: ['Talk', 'SetTalkerName', 'AimPlayer', 'GenericTalkSequenceWithDialog', 'MoveToCompassPoint', 'Deactivate', 'AimActorLinkedPoint', 'PlayAnimationNoWait', 'PlayAnimation', 'AimCompassPoint', 'SetInterestIkEnabled', 'PlayAnimationEx', 'SetFacialExpression', 'ResetFacialExpression', 'LookAtTalker', 'MoveToTargetLinkedPoint', 'SetGravityEnable', 'AimActor', 'PlayOneshotSE', 'SetCollisionEnabled', 'TalkKeep', 'Activate', 'ChangeSteeringAnimation', 'PlayMaterialAnimation', 'MoveToBesideTargetActor', 'Destroy', 'GenericTalkSequence', 'ResetAim', 'SkipAutoTurn', 'SetInstanceVariableBool', 'SetInstanceVariableString', 'SetComponentActive']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag', 'CheckLevelFlag', 'CheckMessgaeFlag']
params: None

Actor: FlowControl
entrypoint: None()
actions: ['CloseSkippableScope']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['ResetSensorEventResetContainsActors', 'UnforbidWarp', 'SetAllItemsVisibility', 'DestroyAllProjectiles', 'SetResetOverlappedActorsOnMoveDone', 'SetThroughObstaclesOnMove', 'ResetFloorAbyss', 'ForbidLaunchApplet', 'UnforbidLaunchApplet', 'RequestLevelJump']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Shake', 'LookAt2ActorsCenterAsTalker', 'Reset', 'MoveToWithTimeout']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['PlayAnimationNoWait', 'AimActor', 'MoveToBesideTargetActor', 'MoveToCompassPoint', 'ResetAim', 'PlayAnimation', 'AimCompassPoint', 'SetVisibility', 'LookAtTalker', 'PlayTailorOtherChannelNoWait', 'SetFacialExpression', 'SetEquipmentVisibility', 'WarpToActorWithCompassPoint', 'SetGravityEnable', 'SetCollisionEnabled', 'SetInterestIkEnabled', 'ResetFacialExpression']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'SetInterestIkEnabled', 'MoveToTargetLinkedPoint', 'PlayAnimationNoWait', 'WarpToActorLinkedPoint', 'AimActorLinkedPoint', 'MorphEnd', 'BreakBurrowable', 'ResetCarriedActor', 'StopBurning', 'GetOffVehicle', 'HideTimedAbilityEffect', 'MoveToTargetActor', 'MoveLadder', 'LookAtTalker', 'ResetAim', 'MoveToCompassPoint', 'PlayMaterialAnimation', 'ResetVelocity']
queries: ['CheckMorph']
params: None

Actor: LocationInfoUI
entrypoint: None()
actions: ['PreloadArchive', 'Show', 'Hide']
queries: []
params: None

Actor: EvFreblaze
entrypoint: None()
actions: ['MoveToCompassPoint', 'LookAtTalker', 'PlayAnimation', 'Deactivate', 'Activate']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: ['LookAtTalkersLinkedPoint']
queries: []
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: SnowDebris
entrypoint: None()
actions: ['PlayAnimation', 'Destroy']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['StopRegionBgm', 'Prepare', 'PlayBGM', 'StopAllBGM', 'PlayZoneBGM', 'PlayOneshotSystemSE', 'StopBGM', 'PlayBGMEx', 'MuteOnBGM', 'MuteOffBGM']
queries: []
params: None

Actor: Movie
entrypoint: None()
actions: ['Play', 'Close', 'Prepare']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimationNoWait', 'LookAtTalker', 'AimActor', 'AimPlayer', 'PlayAnimation', 'MoveToBesideTargetActor', 'SetInterestIkEnabled', 'MoveToTargetActor', 'MoveToTargetLinkedPoint', 'MoveToCompassPoint', 'AimCompassPoint', 'SetVisibility', 'ResetAim', 'WarpToActorWithCompassPoint', 'DisableSyncRodBallFollow', 'DisableAutoMovement', 'MoveToDefaultPosition']
queries: []
params: None

Actor: AreaStartTag
entrypoint: None()
actions: []
queries: []
params: None

void SnowmountainOverview() {
    Player.ResetVelocity()

    call EvResetCommon.AllReset()


    fork {
        Timer.Wait({'time': 0.5})
    } {
        LocationInfoUI.PreloadArchive()
    }


    fork {
        Camera.MoveToWithTimeout({'maxSpeed': 3.0, 'timeout': 3.0, 'targetPositionX': 302.0, 'targetPositionY': 46.0, 'targetPositionZ': 73.0, 'chaseRatio': 0.07999999821186066})
    } {
        Movie.Prepare({'filename': 'rd036_AreaGIntroduction'})
    } {
        GameControl.ForbidLaunchApplet()
    }


    fork {
        Movie.Play({'autoClose': False})
    } {
        Timer.Wait({'time': 1.0})
        LocationInfoUI.Show({'message': 'glossary/Location:Field_012', 'eventMessage': 'ui/LocationInfo:LocationInfo_Field_HebraMountains'})
        Timer.Wait({'time': 5.0})
        LocationInfoUI.Hide()
    }


    fork {
        Movie.Close()
    } {
        Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})
    } {
        GameControl.UnforbidLaunchApplet()
    }

    Timer.Wait({'time': 1.0})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'chaseRatio': 0.10000000149011612, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.30000001192092896})

    call GeneralSequence.Look_at_Partner()

    Timer.Wait({'time': 0.30000001192092896})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'keepPersonalSpace': True, 'message': 'scenario/StoryAreaG:FreezingMountain_010', 'aimToPlayer': False, 'aimFromPlayer': False, 'cameraLookAt': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    QuestSystem.SetProgress({'symbol': 'Snowmountain:923966202', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void FindConde() {

    call EvResetCommon.AllReset()

    Timer.Wait({'time': 0.4000000059604645})
    Yeti000.SetTalkerName({'message': 'glossary/Character:Unknown', 'keep': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:FindConde_020', 'getAttention': False})
    Partner[companion].MoveToTargetActor({'speed': 0, 'distance': 2.0, 'offsetX': 0.0, 'actor': ActorIdentifier(name="Player"), 'offsetY': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})

    fork {
        Partner[companion].PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_PARTNER_LOOKAROUND', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 3.0})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Partner"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    Timer.Wait({'time': 0.6000000238418579})
    Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaG:FindConde_030', 'getAttention': False})
    Yeti000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'keepPersonalSpace': True, 'message': 'scenario/StoryAreaG:FindConde_040', 'aimToPlayer': False, 'aimFromPlayer': True, 'selfTalkAnim': False, 'cameraLookAt': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetY': 2.0, 'offsetZ': 3.0, 'actor': ActorIdentifier(name="Yeti000"), 'offsetX': -5.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    } {
        Timer.Wait({'time': 0.5})

        call GeneralSequence.Look_at_Partner()

    }

    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Yeti000"), 'actor2': ActorIdentifier(name="Partner"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaG:FindConde_050', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.800000011920929})
        Player.AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    QuestSystem.SetProgress({'symbol': 'Snowmountain:4190463339', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void RemoveSnowConde() {

    call EvResetCommon.AllReset()

    Partner.WarpToActor({'offsetY': 1.0, 'offsetX': 0.0, 'distance': 1.5, 'actor': ActorIdentifier(name="Player")})
    SnowDebris.PlayAnimation({'name': 'SnowDebris_on', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Fade.StartPreset({'preset': 'FadeInNormal'})

    fork {
        Zelda.MoveToCompassPoint({'direction': 0, 'speed': 0, 'distance': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetX': 1.0, 'offsetZ': 2.0, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    }

    Yeti000.LookAtTalker({'keep': True, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 1.0})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:RemoveSnowConde_005', 'getAttention': False})
    Yeti000.SetGravityEnable({'enable': False})
    Yeti000.SetCollisionEnabled({'enable': False})
    Yeti000.MoveToTargetLinkedPoint({'index': 0, 'speed': 1, 'actor': ActorIdentifier(name="AreaStartTag"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Yeti000.SetCollisionEnabled({'enable': True})
    Yeti000.SetGravityEnable({'enable': True})
    Yeti000.AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        Yeti000.Talk({'message': 'scenario/StoryAreaG:RemoveSnowConde_010', 'getAttention': False})
    } {
        Yeti000.PlayAnimation({'name': 'takeout02,wait03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Yeti000.PlayAnimationNoWait({'name': 'dig', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.AimActorLinkedPoint({'pointIndex': 1, 'actor': ActorIdentifier(name="AreaStartTag"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:RemoveSnowConde_020', 'getAttention': False})

    fork {
        Timer.Wait({'time': 1.7999999523162842})
    } {
        Timer.Wait({'time': 1.0})
        SnowDebris.PlayAnimation({'name': 'SnowDebris_off', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Yeti000.SetInterestIkEnabled({'enable': False})
    }

    SnowDebris.Destroy()
    Yeti000.PlayAnimation({'name': 'putaway02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.4000000059604645})
    Yeti000.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Yeti000.PlayAnimationNoWait({'name': 'jump02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.7999999523162842})
        Yeti000.Deactivate()
    } {
        Timer.Wait({'time': 1.2999999523162842})
        Yeti000.PlayOneshotSE({'label': 'VO_YETI_008_11', 'volume': 1.0, 'pitch': 1.0})
    } {
        Player.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="AreaStartTag"), 'index': 2, 'offsetY': 0.0})
        Player.AimActorLinkedPoint({'offsetX': -0.5, 'actor': ActorIdentifier(name="AreaStartTag"), 'pointIndex': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner.WarpToActor({'offsetY': 0.5, 'actor': ActorIdentifier(name="Player"), 'distance': 1.0, 'offsetX': 1.2999999523162842})
        Partner.AimActorLinkedPoint({'offsetX': -0.5, 'pointIndex': 0, 'actor': ActorIdentifier(name="AreaStartTag"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Partner"), 'offsetZ': -1.0, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0})
    Timer.Wait({'time': 0.6000000238418579})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Timer.Wait({'time': 0.6000000238418579})

        call GeneralSequence.Look_at_Partner()

    } {
        Partner[companion].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaG:RemoveSnowConde_030', 'getAttention': False})
    }

    Timer.Wait({'time': 0.6000000238418579})

    fork {
        Timer.Wait({'time': 1.0})
        Partner.AimActorLinkedPoint({'pointIndex': 1, 'offsetX': -0.5, 'actor': ActorIdentifier(name="AreaStartTag"), 'duration': 1.0, 'withoutTurn': False, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaG:RemoveSnowConde_040', 'getAttention': False})
    } {
        Timer.Wait({'time': 1.5})
        Player.AimActorLinkedPoint({'pointIndex': 1, 'offsetX': -0.5, 'actor': ActorIdentifier(name="AreaStartTag"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    QuestSystem.SetProgress({'symbol': 'Snowmountain:4244676596', 'isShowTelopInEvent': False, 'isFrontFade': False})
    GameControl.UnforbidWarp()
}

void CondeScream() {
    Audio.StopRegionBgm({'fadeSec': 0.0})
    Audio.Prepare({'label': 'BGM_EV_COMMON1', 'kind': 0, 'volume': 1.0})

    fork {

        call EvResetCommon.AllReset()

    } {
        Timer.Wait({'time': 0.15000000596046448})
        Partner[companion].MoveToTargetActor({'speed': 0, 'distance': 1.5, 'actor': ActorIdentifier(name="Partner"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    Event240:

    fork {
        Timer.Wait({'time': 0.30000001192092896})

        fork {
            Dialog.Show({'message': 'scenario/StoryAreaG:CondeScream_010'})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Camera.Shake({'power': 3, 'duration': 1.0})
        } {
            Timer.Wait({'time': 0.4000000059604645})

            fork {
                Yeti000.SetInterestIkEnabled({'enable': False})
                Yeti000.PlayAnimation({'name': 'wait05', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Partner[companion].PlayAnimationNoWait({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Zelda.PlayAnimation({'name': 'ev_surprise_st,ev_surprise_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

        }

    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_YETI_SCREAM_PUNCH', 'volume': 1.0, 'pitch': 1.0})
    }

    Partner[companion].LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].SetInterestIkEnabled({'enable': False})
    Partner[companion].PlayAnimationNoWait({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaG:CondeScream_020', 'getAttention': False})
    } {
        Timer.Wait({'time': 1.0})
        Zelda.SetFacialExpression({'expression': 'serious_few'})
        Zelda.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Partner"), 'offsetY': -0.5, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 0.0, 'actor1': ActorIdentifier(name="Yeti000"), 'actor2': ActorIdentifier(name="EvFreblaze"), 'offsetZ': -1.0, 'offsetX': 1.2999999523162842, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetY': 0.0})

    fork {

        fork {
            Timer.Wait({'time': 0.20000000298023224})
            Zelda.AimActor({'actor': ActorIdentifier(name="Yeti000"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Zelda.MoveToBesideTargetActor({'speed': 1, 'offsetX': -3.5, 'actor': ActorIdentifier(name="Yeti000"), 'offsetZ': 1.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
            Zelda.AimActor({'actor': ActorIdentifier(name="Yeti000"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetX': -3.5, 'offsetY': 1.0, 'offsetZ': -1.0, 'actor': ActorIdentifier(name="Yeti000"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Yeti000.PlayAnimation({'name': 'wait05', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } {
        EvFreblaze.MoveToCompassPoint({'direction': 2, 'speed': 0, 'withoutTurn': True, 'customSpeed': 5.0, 'distance': 10.0, 'tolerance': 0.0, 'timeOut': 7.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        EvFreblaze.Deactivate()
        Timer.Wait({'time': 0.30000001192092896})
        Camera.LookAt2ActorsCenterAsTalker({'weight2': 3.0, 'offsetY': 1.0, 'offsetX': 1.2000000476837158, 'actor1': ActorIdentifier(name="Yeti000"), 'actor2': ActorIdentifier(name="Zelda"), 'offsetZ': 2.299999952316284, 'weight1': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0})
    }

    Yeti000.Talk({'message': 'scenario/StoryAreaG:CondeScream_030', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaG:CondeScream_040', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.PlayAnimation({'name': 'wakeup', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.699999988079071})
    Player.SetInterestIkEnabled({'enable': True})
    Partner[companion].SetInterestIkEnabled({'enable': True})
    Yeti000.SetInterestIkEnabled({'enable': True})
    Yeti000.AimPlayer({'withoutTurn': False, 'duration': 0.699999988079071, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})
    Yeti000.PlayAnimation({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.6000000238418579})

    fork {
        Yeti000.Talk({'message': 'scenario/StoryAreaG:CondeScream_050', 'getAttention': True})
        Partner[companion].PlayAnimationNoWait({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            Timer.Wait({'time': 0.20000000298023224})
            Player.AimActor({'offsetY': -0.6000000238418579, 'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 1.0})
            Yeti000.AimActor({'offsetY': -0.6000000238418579, 'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner[companion].Talk({'message': 'scenario/StoryAreaG:CondeScream_060', 'getAttention': False})
        }

    } {
        Timer.Wait({'time': 1.149999976158142})
        Audio.PlayBGM({'label': 'BGM_EV_COMMON1', 'volume': 1.0, 'ignoreSkip': True})
    }


    fork {
        Yeti000.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Yeti000.Talk({'message': 'scenario/StoryAreaG:CondeScream_070', 'getAttention': True})
    } {
        Timer.Wait({'time': 1.0})
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaG:CondeScream_080', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:CondeScream_090', 'getAttention': True})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].SetInterestIkEnabled({'enable': False})
    Partner[companion].PlayAnimationNoWait({'name': 'ev_think', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'offsetY': -0.6000000238418579, 'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Yeti000.AimActor({'offsetY': -0.6000000238418579, 'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].Talk({'message': 'scenario/StoryAreaG:CondeScream_100', 'getAttention': True})
    }

    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].SetInterestIkEnabled({'enable': True})
    Yeti000.PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:CondeScream_105', 'getAttention': True})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].SetInterestIkEnabled({'enable': False})
    Partner[companion].PlayAnimationNoWait({'name': 'ev_think', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'offsetY': -0.6000000238418579, 'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Yeti000.AimActor({'offsetY': -0.6000000238418579, 'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner.Talk({'message': 'scenario/StoryAreaG:CondeScream_106', 'getAttention': True})
    }

    Partner[companion].SetInterestIkEnabled({'enable': True})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Yeti000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:CondeScream_110', 'getAttention': True})
    Yeti000.PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:CondeScream_115', 'getAttention': True})
    Yeti000.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:CondeScream_116', 'getAttention': True})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:CondeScream_120', 'getAttention': True})
    Yeti000.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:CondeScream_125', 'getAttention': True})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].SetInterestIkEnabled({'enable': False})
    Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'offsetY': -0.6000000238418579, 'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Yeti000.AimActor({'offsetY': -0.6000000238418579, 'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].Talk({'message': 'scenario/StoryAreaG:CondeScream_130', 'getAttention': False})
    }

    Partner[companion].SetInterestIkEnabled({'enable': True})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:CondeScream_140', 'getAttention': True})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:CondeScream_150', 'getAttention': True})

    fork {
        Yeti000.SetInterestIkEnabled({'enable': False})
        Yeti000.AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Timer.Wait({'time': 1.0})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Audio.StopAllBGM({'duration': 5.5})
    }

    Yeti000.MoveToCompassPoint({'direction': 1, 'speed': 0, 'distance': 7.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Yeti000.Deactivate()
    QuestSystem.SetProgress({'symbol': 'Snowmountain:3787936954', 'isShowTelopInEvent': False, 'isFrontFade': False})
    QuestSystem.SetProgress({'symbol': 'Snowmountain:1730042710', 'isShowTelopInEvent': False, 'isFrontFade': False})
    QuestSystem.SetProgress({'symbol': 'Snowmountain:225290797', 'isShowTelopInEvent': False, 'isFrontFade': False})
    Audio.PlayZoneBGM({'stopbgm': True})
    EventFlags.SetFlag({'value': True, 'symbol': 'Snowmountain_gateopen_before'})
}

void MeetAgainConde() {

    call EvResetCommon.AllReset()

    Audio.StopRegionBgm({'fadeSec': 0.0})
    Yeti000.SetInterestIkEnabled({'enable': False})
    Zelda.LookAtTalker({'offsetZ': -2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'keep': False})
    Partner[companion].MoveToBesideTargetActor({'speed': 0, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 1.75, 'offsetX': 0.0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Timer.Wait({'time': 1.0})

    fork {
        Zelda.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        Zelda.PlayAnimation({'name': 'ev_WarpStart_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Zelda.PlayAnimation({'name': 'ev_WarpStart_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayAnimation({'name': 'ev_WarpStart_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].PlayAnimation({'name': 'ev_WarpStart_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Zelda.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    }


    call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

    Timer.Wait({'time': 0.5})
    Zelda.PlayTailorOtherChannelNoWait({'channel': 'WarpEnd_00', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    Timer.Wait({'time': 2.5})
    Yeti000.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})

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


    fork {
        Partner[companion].MoveToBesideTargetActor({'offsetY': 1.0, 'speed': 1, 'offsetX': 1.5, 'actor': ActorIdentifier(name="Player"), 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    } {
        Timer.Wait({'time': 1.0})
        Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Player.SetInterestIkEnabled({'enable': True})
    Partner[companion].SetInterestIkEnabled({'enable': True})
    Yeti000.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    EventVariables.SetVariable({'symbol': 'SnowyMountains:466449466'})

    fork {
        Player.AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Camera.LookAt2ActorsCenterAsTalker({'weight2': 1.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Yeti000"), 'distanceOffset': 2.0, 'weight1': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Yeti000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Audio.PlayBGM({'label': 'BGM_EV_SNOW_FINALE', 'ignoreSkip': False, 'volume': 1.0})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:MeetAgainConde_010', 'getAttention': True})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.5})
    Yeti000.PlayAnimationNoWait({'name': 'search', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.5})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:MeetAgainConde_040', 'getAttention': True})
    Yeti000.PlayAnimationEx({'name': 'wait01', 'time': 0.800000011920929, 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {

        call GeneralSequence.ZeldaTalkMotion()

    } {
        Timer.Wait({'time': 0.20000000298023224})
        Yeti000.SetInterestIkEnabled({'enable': True})
        Yeti000.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Yeti000.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:MeetAgainConde_050', 'getAttention': True})
    Yeti000.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:MeetAgainConde_060', 'getAttention': True})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.25})
    Yeti000.SetInterestIkEnabled({'enable': False})
    Yeti000.SetFacialExpression({'expression': 'sleep'})
    Yeti000.PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:MeetAgainConde_065', 'getAttention': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'offsetY': -0.6000000238418579, 'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaG:MeetAgainConde_070', 'getAttention': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:MeetAgainConde_080', 'getAttention': True})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaG:MeetAgainConde_090', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.ResetFacialExpression()
    Yeti000.SetInterestIkEnabled({'enable': True})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:MeetAgainConde_100', 'getAttention': False})

    fork {
        Player.AimActor({'withoutTurn': True, 'offsetY': 0.0, 'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

        call GeneralSequence.ZeldaTalkMotion()

    } {
        Timer.Wait({'time': 0.30000001192092896})
        Yeti000.SetInterestIkEnabled({'enable': True})
        Yeti000.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Yeti000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:MeetAgainConde_110', 'getAttention': True})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaG:MeetAgainConde_120', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Yeti000.SetInterestIkEnabled({'enable': True})
        Yeti000.AimActor({'offsetY': 0.0, 'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'offsetY': -0.6000000238418579, 'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Yeti000.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:MeetAgainConde_130', 'getAttention': True})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaG:MeetAgainConde_140', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:MeetAgainConde_150', 'getAttention': True})
    Audio.Prepare({'label': 'BGM_EV_SNOW_FINALE_OUTRO', 'kind': 0, 'volume': 1.0})
    Yeti000.ResetFacialExpression()
    Yeti000.Talk({'message': 'scenario/StoryAreaG:MeetAgainConde_155', 'getAttention': True})
    Yeti000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaG:MeetAgainConde_160', 'getAttention': True})
    Yeti000.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:MeetAgainConde_170', 'getAttention': True})
    Yeti000.TalkKeep({'getAttention': True, 'message': 'scenario/StoryAreaG:MeetAgainConde_175'})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'offsetY': 0.0, 'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].Talk({'message': 'scenario/StoryAreaG:MeetAgainConde_180', 'getAttention': False})
    }

    Yeti000.AimCompassPoint({'direction': 0, 'withoutTurn': True, 'duration': 0.4000000059604645, 'immediateTurn': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:MeetAgainConde_190', 'getAttention': False})
    Audio.StopBGM({'duration': 1.5, 'label': 'BGM_EV_SNOW_FINALE'})
    Audio.PlayBGMEx({'label': 'BGM_EV_SNOW_FINALE_OUTRO', 'volume': 1.0, 'sec': 1.5, 'ignoreSkip': False})
    Yeti000.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        Event769:
        Timer.Wait({'time': 1.0})
        Partner[companion].PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.0})
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {

        fork {
            Yeti000.SetInterestIkEnabled({'enable': False})
            Yeti000.PlayAnimation({'name': 'finale', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Yeti000.Deactivate()
        } {
            Timer.Wait({'time': 2.799999952316284})
            Yeti000.SetFacialExpression({'expression': 'smile'})
        } {
            Timer.Wait({'time': 1.0})
            Player.PlayAnimationNoWait({'name': 'ev_surprise_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 2.0})
            Zelda.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            goto Event769
        } {
            Timer.Wait({'time': 10.0})
            Partner[companion].MoveToBesideTargetActor({'offsetY': 1.5, 'speed': 1, 'actor': ActorIdentifier(name="Player"), 'offsetX': 0.0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        fork {
            Zelda.AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.019999999552965164})
            Zelda.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        } {
            Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        } {
            Yeti000.Talk({'message': 'scenario/StoryAreaG:MeetAgainConde_200', 'getAttention': False})
        }

        Timer.Wait({'time': 1.0})
        Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetY': 1.0, 'actor': ActorIdentifier(name="Player"), 'offsetX': -1.5, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Partner[companion].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaG:MeetAgainConde_210', 'getAttention': False})
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EventFlags.SetFlag({'value': True, 'symbol': 'EvG_GatePartnerPhoton_appear'})
        EventFlags.SetFlag({'value': True, 'symbol': 'ShiverInTheCold'})
        switch QuestSystem.CheckProgress({'symbol': 'Volcano:1474105390'}) {
          case 4294967295:
            switch QuestSystem.CheckProgress({'symbol': 'Jungle:425818924'}) {
              case 4294967295:

                call look()


                fork {

                    call PlayFieldBgm()

                } {
                    Partner[companion].PlayAnimationNoWait({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    Partner[companion].Talk({'message': 'scenario/StoryAreaG:MeetAgainConde_220', 'getAttention': False})
                    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    Partner[companion].Talk({'message': 'scenario/StoryAreaG:MeetAgainConde_240', 'getAttention': False})
                }

                QuestSystem.SetProgress({'symbol': 'Snowmountain:776505974', 'isShowTelopInEvent': False, 'isFrontFade': False})
                QuestSystem.SetProgress({'symbol': 'LinkQuest:2425720579', 'isShowTelopInEvent': False, 'isFrontFade': False})
              case 0:

                call look()


                fork {

                    call PlayFieldBgm()

                } {
                    Partner[companion].Talk({'message': 'scenario/StoryAreaG:MeetAgainConde_230', 'getAttention': False})
                    Partner[companion].Talk({'message': 'scenario/StoryAreaG:MeetAgainConde_250', 'getAttention': False})
                }

                QuestSystem.SetProgress({'symbol': 'Snowmountain:776505974', 'isShowTelopInEvent': False, 'isFrontFade': False})
                QuestSystem.SetProgress({'symbol': 'LinkQuest:3703185651', 'isShowTelopInEvent': False, 'isFrontFade': False})
            }
          case 0:
            switch QuestSystem.CheckProgress({'symbol': 'Jungle:425818924'}) {
              case 4294967295:

                call look()


                fork {

                    call PlayFieldBgm()

                } {
                    Partner[companion].Talk({'message': 'scenario/StoryAreaG:MeetAgainConde_230', 'getAttention': False})
                    Partner[companion].Talk({'message': 'scenario/StoryAreaG:MeetAgainConde_260', 'getAttention': False})
                }

                QuestSystem.SetProgress({'symbol': 'Snowmountain:776505974', 'isShowTelopInEvent': False, 'isFrontFade': False})
                QuestSystem.SetProgress({'symbol': 'LinkQuest:2994718262', 'isShowTelopInEvent': False, 'isFrontFade': False})
              case 0:

                call look()


                fork {

                    call PlayFieldBgm()

                } {
                    Partner[companion].Talk({'message': 'scenario/StoryAreaG:MeetAgainConde_230', 'getAttention': False})
                }

                FlowControl.CloseSkippableScope()

                call CopiedZelda()

            }
        }
    }

}

void ThroughConde() {

    call EvResetCommon.AllReset()

    Player.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 0.5})
    Yeti000.SetInterestIkEnabled({'enable': True})
    Dialog.ShowTalker({'message': 'scenario/StoryAreaG:ThroughConde_010', 'talker': 'glossary/Character:Unknown'})
    Yeti000.ChangeSteeringAnimation({'idle': 'wait01', 'walk': 'move01', 'run': 'move01', 'layer': 0})
    Yeti000.Activate()
    Yeti000.SetTalkerName({'message': 'glossary/Character:Yeti000', 'keep': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Partner[companion].SetInterestIkEnabled({'enable': True})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Yeti000.MoveToTargetLinkedPoint({'index': 7, 'speed': 0, 'customSpeed': 1.600000023841858, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Yeti000.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 2.5})
        Player.ResetAim()
        Player.MoveToTargetLinkedPoint({'index': 4, 'speed': 0, 'actor': ActorIdentifier(name="Area"), 'withoutTurn': False, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 2.799999952316284})
        Partner[companion].ResetAim()
        Partner[companion].MoveToTargetLinkedPoint({'speed': 0, 'index': 8, 'actor': ActorIdentifier(name="Area"), 'withoutTurn': False, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Timer.Wait({'time': 0.15000000596046448})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Yeti000.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Camera.LookAt2ActorsCenterAsTalker({'offsetY': 1.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Yeti000"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetZ': 0.0})
    Yeti000.SetInterestIkEnabled({'enable': True})
    Yeti000.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Yeti000.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:ThroughConde_020', 'getAttention': True})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    Yeti000.AimActor({'offsetY': -0.6000000238418579, 'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    Yeti000.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:ThroughConde_030', 'getAttention': True})
    Yeti000.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Partner"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Yeti000.Talk({'getAttention': True, 'message': 'scenario/StoryAreaG:ThroughConde_030_02'})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'offsetY': -0.6000000238418579, 'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Yeti000.AimActor({'offsetY': -0.6000000238418579, 'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].ResetAim()
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'getAttention': False, 'message': 'scenario/StoryAreaG:ThroughConde_040'})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Yeti000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:ThroughConde_050', 'getAttention': True})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.5})
    Yeti000.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:ThroughConde_060', 'getAttention': True})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.699999988079071})
    Yeti000.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.5})
    Yeti000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:ThroughConde_070', 'getAttention': True})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})

    call _inthehouse()

}

void CopiedZelda() {

    call GeneralSequence.CopiedZelda({'region': 2})

}

void ShiverInTheCold() {

    call ShiverInTheColdReset()


    fork {
        Zelda.SetFacialExpression({'expression': 'cold'})
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.PlayAnimationNoWait({'restart': False, 'name': '$ev_cold', 'layer': 0, 'blendFrame': -1})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Zelda.SetEquipmentVisibility({'visibility': False})
    } {

        fork {
            Timer.Wait({'time': 0.699999988079071})
        } {
            Partner.MoveToTargetActor({'distance': 1.5, 'offsetY': 1.0, 'actor': ActorIdentifier(name="Zelda"), 'speed': 1, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0})
            Timer.Wait({'time': 0.4000000059604645})
            Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    Timer.Wait({'time': 0.6000000238418579})

    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'keepPersonalSpace': True, 'message': 'scenario/StoryAreaG:ShiverInTheCold_010', 'aimToPlayer': False, 'aimFromPlayer': False, 'unmorph': True, 'disableSyncRodBallFollow': False, 'absorbAllPastedActors': False, 'unsync': False, 'cameraLookAt': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.699999988079071})

        call GeneralSequence.Look_at_Partner()

        Timer.Wait({'time': 2.0})
        Zelda.ResetAim()
    }

    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Timer.Wait({'time': 1.5})
    EventFlags.SetFlag({'value': True, 'symbol': 'ShiverInTheCold'})
}

void HebraMountainCrack() {

    call EvResetCommon.AllReset()

    Partner.MoveToTargetLinkedPoint({'index': 0, 'speed': 0, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    call GeneralSequence.Look_at_Partner()


    fork {
        Partner.PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_PARTNER_LOOKAROUND', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 2.0})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Partner"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Partner.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'selfTalkAnimName': '', 'keepPersonalSpace': True, 'message': 'scenario/StoryAreaG:HebraMountainCrack_010', 'aimFromPlayer': True, 'cameraLookAt': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Partner.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 2.0})
    Partner.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaG:HebraMountainCrack_020', 'getAttention': False})
}

void HebraMountainSmallCrack() {

    call EvResetCommon.AllReset()

    Area.LookAtTalkersLinkedPoint({'pointIndex': 1, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Partner.AimActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'pointIndex': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})

    fork {
        Partner[companion].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'keepPersonalSpace': True, 'message': 'scenario/StoryAreaG:HebraMountainSmallCrack_010', 'aimToPlayer': False, 'aimFromPlayer': False, 'selfTalkAnim': True, 'cameraLookAt': False, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})

        call GeneralSequence.Look_at_Partner()

    }

    Partner.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.6000000238418579})
    Partner.MoveToTargetLinkedPoint({'actor': ActorIdentifier(name="Area"), 'index': 0, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Partner.MoveToCompassPoint({'speed': 0, 'direction': 2, 'distance': 3.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Timer.Wait({'time': 0.699999988079071})
    Partner.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Partner.MoveToCompassPoint({'speed': 0, 'direction': 0, 'distance': 3.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})

    fork {
        Partner.MoveToBesideTargetActor({'speed': 1, 'withoutTurn': True, 'actor': ActorIdentifier(name="Partner"), 'offsetY': 1.2999999523162842, 'offsetX': 0.0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Partner.PlayAnimation({'name': 'appeal02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.0})

        call GeneralSequence.Look_at_Partner()

    }

    Partner[companion].SetInterestIkEnabled({'enable': True})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaG:HebraMountainSmallCrack_020', 'getAttention': False})
    Partner[companion].ResetAim()
    Partner[companion].PlayAnimationNoWait({'name': 'no,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaG:HebraMountainSmallCrack_030', 'getAttention': False})
}

void Condeignore() {

    call EvResetCommon.AllReset()

    Player.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 0.5})
    Yeti000.SetInterestIkEnabled({'enable': True})
    Dialog.ShowTalker({'message': 'scenario/StoryAreaG:CondeIgnore_020', 'talker': 'glossary/Character:Yeti000'})
    Yeti000.Activate()
    Yeti000.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Yeti000.MoveToTargetLinkedPoint({'speed': 0, 'index': 7, 'actor': ActorIdentifier(name="Area"), 'customSpeed': 1.600000023841858, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Yeti000.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 2.5})
        Player.ResetAim()
        Player.MoveToTargetLinkedPoint({'index': 4, 'speed': 0, 'withoutTurn': False, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 2.799999952316284})
        Partner[companion].ResetAim()
        Partner[companion].MoveToTargetLinkedPoint({'speed': 0, 'withoutTurn': False, 'index': 8, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Timer.Wait({'time': 0.15000000596046448})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Camera.LookAt2ActorsCenterAsTalker({'offsetY': 1.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Yeti000"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetZ': 0.0})
    Player.SetInterestIkEnabled({'enable': True})
    Partner[companion].SetInterestIkEnabled({'enable': True})
    Player.AimActor({'actor': ActorIdentifier(name="Yeti000"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="Yeti000"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Camera.LookAt2ActorsCenterAsTalker({'offsetY': 1.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Yeti000"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetZ': 0.0})
    Yeti000.SetInterestIkEnabled({'enable': True})
    Yeti000.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Yeti000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'keepPersonalSpace': True, 'selfTalkAnim': True, 'cameraLookAt': False, 'message': 'scenario/StoryAreaG:CondeIgnore_030', 'selfTalkAnimName': 'happy', 'aimToPlayer': False, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Yeti000.AimActorLinkedPoint({'pointIndex': 0, 'withoutTurn': True, 'actor': ActorIdentifier(name="Area"), 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    Yeti000.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Yeti000.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:CondeIgnore_022', 'getAttention': True})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})

    call _inthehouse()

}

void AreaG_BoundaryGateOpen() {

    call EvResetCommon.AllReset()

    Partner[companion].MoveToTargetLinkedPoint({'index': 0, 'speed': 1, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Timer.Wait({'time': 0.4000000059604645})

    fork {

        call GeneralSequence.Look_at_Partner()

    } {
        Partner[companion].LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    }

    Timer.Wait({'time': 1.0})
    Partner[companion].PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Partner[companion].MoveToCompassPoint({'distance': 2.0, 'speed': 0, 'direction': 2, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Timer.Wait({'time': 1.0})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaG:AreaG_BoundaryGateOpen_010', 'getAttention': False})
    Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        Partner[companion].PlayAnimation({'name': 'appeal02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_PARTNER_APPEAL', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 0.5})
    Partner[companion].MoveToTargetLinkedPoint({'speed': 1, 'index': 1, 'actor': ActorIdentifier(name="Area"), 'offsetZ': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Timer.Wait({'time': 1.5})

    fork {
        Partner[companion].AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Partner"), 'actor2': ActorIdentifier(name="Player"), 'offsetY': -1.0, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetZ': 0.0})
    }

    Partner[companion].Talk({'message': 'scenario/StoryAreaG:AreaG_BoundaryGateOpen_020', 'getAttention': False})
}

void FriendsFigure() {
    GameControl.ResetSensorEventResetContainsActors({'cemeteryRevive': False, 'eventReset': True})

    call EvResetCommon.AllReset()

    Yeti000.SetInterestIkEnabled({'enable': False})
    Yeti000.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Event42:
    Timer.Wait({'time': 1.0})
    EvFreblaze.Activate()
    Yeti000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'keepPersonalSpace': True, 'message': 'scenario/StoryAreaG:FriendsFigure_010', 'aimToPlayer': False, 'selfTalkAnimName': '', 'selfTalkAnim': False, 'cameraLookAt': False, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Yeti000.SetInterestIkEnabled({'enable': True})
    Yeti000.PlayAnimation({'name': 'search', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 3.5})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Yeti000.PlayAnimation({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Audio.MuteOnBGM({'duration': 2.5})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:FriendsFigure_020', 'getAttention': False})
    EvFreblaze.LookAtTalker({'offsetZ': -2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'keep': False})
    Timer.Wait({'time': 1.25})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:FriendsFigure_030', 'getAttention': False})
    Timer.Wait({'time': 1.5})
    Camera.LookAt2ActorsCenterAsTalker({'weight1': 1.0, 'distanceOffset': 12.0, 'actor1': ActorIdentifier(name="Yeti000"), 'actor2': ActorIdentifier(name="EvFreblaze"), 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Yeti000.MoveToCompassPoint({'direction': 2, 'distance': 3.0, 'speed': 1, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Yeti000.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:FriendsFigure_040', 'getAttention': False})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        EvFreblaze.PlayAnimation({'name': 'jump', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EvFreblaze.Deactivate()
    } {
        Timer.Wait({'time': 1.25})
        Yeti000.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Yeti000.Talk({'message': 'scenario/StoryAreaG:FriendsFigure_050', 'getAttention': False})

    fork {
        Player.AimActor({'actor': ActorIdentifier(name="EvFreblaze"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="EvFreblaze"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.PlayAnimation({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:FriendsFigure_060', 'getAttention': False})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.SetInterestIkEnabled({'enable': False})
    Yeti000.PlayAnimation({'name': 'jump02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Deactivate()
    QuestSystem.SetProgress({'symbol': 'Snowmountain:2299025361', 'isShowTelopInEvent': False, 'isFrontFade': False})
    Audio.MuteOffBGM({'duration': 2.0})
}

void Condeignore_2() {

    call EvResetCommon.AllReset()

    Player.SetInterestIkEnabled({'enable': True})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Yeti000"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Yeti000.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaG:CondeIgnore_020', 'playerTalkAnim': False, 'cameraLookAt': False, 'playerTalkAnimName': '', 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:CondeIgnore_022', 'getAttention': False})
    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})

    call _inthehouse_C()

}

void _inthehouse() {
    Yeti000.SetInterestIkEnabled({'enable': False})
    Yeti000.MoveToTargetLinkedPoint({'speed': 0, 'timeOut': 7.0, 'tolerance': 2.0, 'index': 6, 'actor': ActorIdentifier(name="Area"), 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Event355:
    Yeti000.SetComponentActive({'name': 'simulationStopperComp', 'active': False})

    fork {
        Timer.Wait({'time': 1.2000000476837158})
        Yeti000.PlayMaterialAnimation({'name': 'fade_out', 'layer': 0})
    } {
        Yeti000.MoveToCompassPoint({'speed': 0, 'tolerance': 0.10000000149011612, 'direction': 2, 'timeOut': 7.0, 'distance': 3.5, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    Yeti000.Deactivate()
    Player.SetInterestIkEnabled({'enable': False})
    Partner[companion].SetInterestIkEnabled({'enable': False})

    fork {
        Player.AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Player.MoveToTargetLinkedPoint({'speed': 0, 'tolerance': 0.0, 'offsetX': 0.0, 'index': 0, 'timeOut': 3.0, 'actor': ActorIdentifier(name="Area"), 'offsetZ': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetY': 0.0})

        fork {
            Player.PlayMaterialAnimation({'name': 'fade_out', 'layer': 0})
        } {
            Player.MoveToCompassPoint({'speed': 0, 'timeOut': 1.0, 'tolerance': 0.10000000149011612, 'direction': 2, 'distance': 1.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        }

    } {
        Timer.Wait({'time': 1.2000000476837158})
        Partner.MoveToTargetLinkedPoint({'speed': 0, 'tolerance': 0.0, 'offsetX': 0.0, 'index': 0, 'timeOut': 3.0, 'offsetZ': 0.0, 'offsetY': 1.5, 'actor': ActorIdentifier(name="Area"), 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner.MoveToCompassPoint({'speed': 0, 'timeOut': 1.0, 'tolerance': 0.10000000149011612, 'direction': 2, 'distance': 1.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Timer.Wait({'time': 1.0})
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
        GameControl.RequestLevelJump({'level': 'YetiHouse001', 'locator': 'YetiHouse', 'offsetX': 0.0, 'offsetZ': 0.0})
    }

    EventFlags.SetFlag({'value': True, 'symbol': 'jumpConde'})
    EventFlags.SetFlag({'value': True, 'symbol': 'inthehouse'})
}

void look() {

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'offsetY': -0.6000000238418579, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.15000000596046448})
        Partner[companion].SetInterestIkEnabled({'enable': True})
        Partner[companion].AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void NotTimeToComeYetHebra() {

    call EvResetCommon.AllReset()

    Partner[companion].DisableAutoMovement()
    Partner[companion].MoveToDefaultPosition({'position': 1, 'speed': 0, 'tolerance': 0.0, 'avoidWall': False, 'avoidPlayer': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
    Partner[companion].MoveToTargetActor({'actor': ActorIdentifier(name="Partner"), 'speed': 0, 'distance': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})

    fork {
        Partner.PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.0})
        Partner[companion].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': False, 'aimFromPlayer': False, 'message': 'scenario/StoryAreaG:NotTimeToComeYetHebra_010', 'cameraLookAt': False, 'selfTalkAnimName': '', 'selfTalkAnim': False, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        Partner.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})

        call GeneralSequence.Look_at_Partner()

    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Partner"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    Partner.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaG:NotTimeToComeYetHebra_020', 'getAttention': False})
}

void FriendsFigure2() {

    call EvResetCommon.AllReset()

    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    GameControl.ResetSensorEventResetContainsActors({'cemeteryRevive': False, 'eventReset': True})
    Yeti000.SetInterestIkEnabled({'enable': False})
    Yeti000.LookAtTalker({'duration': 0.10000000149011612, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Zelda.WarpToActorWithCompassPoint({'distance': -7.0, 'direction': 2, 'actor': ActorIdentifier(name="Yeti000"), 'offsetY': 0.0, 'offsetX': 0.0})
    Partner[companion].WarpToActorWithCompassPoint({'offsetX': 1.0, 'offsetY': 1.5, 'direction': 2, 'actor': ActorIdentifier(name="Zelda"), 'distance': 0.0})
    Timer.Wait({'time': 0.5})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    goto Event42
}

void FindConde2() {

    call EvResetCommon.AllReset()

    Timer.Wait({'time': 0.4000000059604645})
    Yeti000.SetTalkerName({'message': 'glossary/Character:Unknown', 'keep': False})
    Yeti000.Talk({'message': 'scenario/StoryAreaG:FindConde_020', 'getAttention': False})
    Partner[companion].MoveToTargetActor({'speed': 0, 'distance': 2.0, 'offsetX': 0.0, 'actor': ActorIdentifier(name="Player"), 'offsetY': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 3.0})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Partner"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    Timer.Wait({'time': 0.6000000238418579})
    Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaG:FindConde_030', 'getAttention': False})
    Yeti000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'keepPersonalSpace': True, 'message': 'scenario/StoryAreaG:FindConde_040', 'aimToPlayer': False, 'aimFromPlayer': True, 'selfTalkAnim': False, 'cameraLookAt': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetY': 2.0, 'offsetZ': 3.0, 'actor': ActorIdentifier(name="Yeti000"), 'offsetX': 5.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    } {
        Timer.Wait({'time': 0.5})

        call GeneralSequence.Look_at_Partner()

    }

    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Yeti000"), 'actor2': ActorIdentifier(name="Partner"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Partner[companion].AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaG:FindConde_050', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.800000011920929})
        Player.AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    QuestSystem.SetProgress({'symbol': 'Snowmountain:4190463339', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void CondeScream2() {
    Audio.StopRegionBgm({'fadeSec': 0.0})
    Audio.Prepare({'label': 'BGM_EV_COMMON1', 'kind': 0, 'volume': 1.0})
    Zelda.LookAtTalker({'offsetZ': -2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'keep': False})
    Partner[companion].MoveToBesideTargetActor({'speed': 0, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 1.75, 'offsetX': 0.0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Timer.Wait({'time': 1.0})

    fork {
        Zelda.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        Zelda.PlayAnimation({'name': 'ev_WarpStart_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Zelda.PlayAnimation({'name': 'ev_WarpStart_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayAnimation({'name': 'ev_WarpStart_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].PlayAnimation({'name': 'ev_WarpStart_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Zelda.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    }


    call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

    Timer.Wait({'time': 0.5})
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

    Partner[companion].MoveToBesideTargetActor({'offsetY': 1.0, 'speed': 1, 'offsetX': -1.5, 'actor': ActorIdentifier(name="Player"), 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    call EvResetCommon.AllReset()

    goto Event240
}

void ShiverInTheColdReset() {

    fork {
        if !Player.CheckMorph({'morphKind': 0}) {
            Player.MorphEnd()
        }
    } {
        Player.BreakBurrowable()
    } {
        Player.ResetCarriedActor()
    } {
        Player.StopBurning()
    } {
        Player.GetOffVehicle({'method': 0, 'anim': 'get_off', 'disappear': True})
    } {
        Partner[companion].DisableSyncRodBallFollow()
    } {
        GameControl.SetAllItemsVisibility({'visible': False})
    } {
        GameControl.DestroyAllProjectiles()
    } {
        GameControl.SetResetOverlappedActorsOnMoveDone({'enable': True})
        GameControl.SetThroughObstaclesOnMove({'enable': True})
    } {
        GameControl.ResetFloorAbyss()
    } {
        Player.HideTimedAbilityEffect()
    }

}

void ShiverInTheColdflag() {
    if !EventFlags.CheckFlag({'symbol': 'ShiverInTheCold'}) {
        EventFlags.SetFlag({'value': True, 'symbol': 'ShiverInTheCold'})
    }

    fork {

        call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

    } {
        Player.MoveToTargetActor({'speed': 0, 'actor': ActorIdentifier(name="Player"), 'distance': 1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

}

void ShiverInTheColdflagLadderUp() {
    if !EventFlags.CheckFlag({'symbol': 'ShiverInTheCold'}) {
        EventFlags.SetFlag({'value': True, 'symbol': 'ShiverInTheCold'})
    }

    fork {

        call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

    } {
        Player.MoveLadder({'mode': 1, 'distance': 3.0, 'timeOut': 7.0})
    }

}

void ShiverInTheColdflagWarpIn() {
    if !EventFlags.CheckFlag({'symbol': 'ShiverInTheCold'}) {
        EventFlags.SetFlag({'value': True, 'symbol': 'ShiverInTheCold'})
    }
    Fade.StartPreset({'preset': 'FadeInNormal'})
}

void jumpConde_2() {

    call EvResetCommon.AllReset()

    Yeti000.GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnimName': '', 'keepPersonalSpace': True, 'aimToPlayer': False, 'selfTalkAnim': False, 'aimFromPlayer': False, 'cameraLookAt': False, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})

    fork {
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Yeti000.SetInterestIkEnabled({'enable': True})
        Yeti000.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Yeti000.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Yeti000.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {
        Partner.SetInterestIkEnabled({'enable': True})
        Partner.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/StoryAreaG:JumpConde_050'}) {
        Yeti000.PlayAnimation({'name': 'putaway01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Yeti000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Yeti000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Yeti000.Talk({'message': 'scenario/StoryAreaG:JumpConde_011', 'getAttention': False})
        Yeti000.Talk({'message': 'scenario/StoryAreaG:JumpConde_020', 'getAttention': False})
        Event21:
        if !Dialog.GetLastResult({'resultOnSkip': 1}) {
            Yeti000.LookAtTalker({'keep': True, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
            Yeti000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Yeti000.Talk({'message': 'scenario/StoryAreaG:JumpConde_030', 'getAttention': False})
            Yeti000.Talk({'message': 'scenario/StoryAreaG:JumpConde_040', 'getAttention': False})
            Yeti000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            if !EventFlags.CheckLevelFlag({'index': 193}) {
                Timer.Wait({'time': 0.20000000298023224})
                Yeti000.AimCompassPoint({'withoutTurn': False, 'duration': 0.20000000298023224, 'direction': 1, 'immediateTurn': False})
                Zelda.SetInterestIkEnabled({'enable': False})
                Zelda.MoveToBesideTargetActor({'speed': 0, 'offsetX': -2.25, 'actor': ActorIdentifier(name="Yeti000"), 'offsetY': 0.0, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
                Zelda.SetInterestIkEnabled({'enable': True})
                Zelda.AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                Partner.SetInterestIkEnabled({'enable': True})
                Partner.AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
                Event323:
                Yeti000.SetInterestIkEnabled({'enable': False})
                Yeti000.ResetAim()
                Partner.ResetAim()
                Partner.EnableAutoMovement()
                Zelda.ResetAim()

                fork {
                    Yeti000.SetGravityEnable({'enable': False})
                    Yeti000.SetCollisionEnabled({'enable': False})
                } {
                    Zelda.SetGravityEnable({'enable': False})
                    Zelda.SetCollisionEnabled({'enable': False})
                }

                Zelda.SetEquipmentVisibility({'visibility': False})
                Yeti000.SetComponentActive({'name': 'simulationStopperComp', 'active': False})

                fork {
                    Zelda.PlayAnimation({'name': 'ev_conde_jump', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    Zelda.SetCollisionEnabled({'enable': True})
                    Zelda.SetGravityEnable({'enable': True})
                    Zelda.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    Zelda.SetInterestIkEnabled({'enable': True})
                    Zelda.AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                } {
                    Yeti000.PlayAnimation({'name': 'jump', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    Yeti000.SetCollisionEnabled({'enable': True})
                    Yeti000.SetGravityEnable({'enable': True})
                    Yeti000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                } {
                    Timer.Wait({'time': 6.800000190734863})
                    Zelda.SetEquipmentVisibility({'visibility': True})
                } {
                    Timer.Wait({'time': 4.5})
                    Yeti000.PlayOneshotSE({'label': 'VO_YETI_008_11', 'volume': 1.0, 'pitch': 1.0})
                } {
                    Timer.Wait({'time': 4.0})
                    Zelda.SetFacialExpression({'expression': 'damage'})
                    Timer.Wait({'time': 2.0})
                    Zelda.ResetFacialExpression()
                } {
                    Timer.Wait({'time': 6.099999904632568})
                    Partner.MoveToBesideTargetActor({'speed': 1, 'offsetY': 1.5, 'offsetX': 1.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetZ': -1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
                    Partner.AimActor({'actor': ActorIdentifier(name="Yeti000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    Partner.PlayAnimation({'name': 'happy,happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
                } {
                    Partner.DisableAutoMovement()
                    Timer.Wait({'time': 3.0})
                    Partner.EnableAutoMovement()
                    Timer.Wait({'time': 3.0})
                    Partner.DisableAutoMovement()
                }

                Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Yeti000"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
                Yeti000.ChangeSteeringAnimation({'idle': 'wait01', 'walk': 'move01', 'run': 'move01', 'layer': 0})

                fork {
                    Yeti000.MoveToBesideTargetActor({'speed': 0, 'offsetZ': 3.0, 'offsetX': 8.5, 'customSpeed': 1.600000023841858, 'actor': ActorIdentifier(name="Player"), 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0})
                } {
                    Timer.Wait({'time': 1.0})
                    Partner.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                }

                Yeti000.Destroy()
                QuestSystem.SetProgress({'symbol': 'Snowmountain:4040136737', 'isShowTelopInEvent': False, 'isFrontFade': False})
            } else {
                Fade.StartPreset({'preset': 'FadeOutNormalB'})
                Yeti000.AimCompassPoint({'direction': 3, 'withoutTurn': False, 'duration': 0.20000000298023224, 'immediateTurn': False})
                Timer.Wait({'time': 0.20000000298023224})
                Zelda.WarpToActorWithCompassPoint({'direction': 1, 'distance': 2.25, 'actor': ActorIdentifier(name="Yeti000"), 'offsetY': 0.0, 'offsetX': 0.0})
                Partner.WarpToDefaultPosition({'position': 1, 'avoidWall': False, 'avoidPlayer': False})
                Zelda.SetInterestIkEnabled({'enable': True})
                Partner.SetInterestIkEnabled({'enable': True})
                Yeti000.SetInterestIkEnabled({'enable': False})
                Yeti000.AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
                Timer.Wait({'time': 0.20000000298023224})
                Fade.StartPreset({'preset': 'FadeInFast'})
                Timer.Wait({'time': 0.30000001192092896})
                goto Event323
            }
        } else {
            Yeti000.SkipAutoTurn()
            Yeti000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Yeti000.Talk({'message': 'scenario/StoryAreaG:JumpConde_050', 'getAttention': False})
            Yeti000.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait01'})
            Yeti000.SetInstanceVariableString({'name': 'runAnim', 'value': 'move01'})
            Yeti000.SetInstanceVariableString({'value': 'move01', 'name': 'walkAnim'})
            Yeti000.SetInstanceVariableBool({'name': 'Goal02', 'value': True})
            Yeti000.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }
    } else {
        Yeti000.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaG:JumpConde_020', 'playerTalkAnim': False, 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        goto Event21
    }
}

void _inthehouse_C() {
    Yeti000.SetInterestIkEnabled({'enable': False})
    goto Event355
}

void PlayFieldBgm() {
    Timer.Wait({'time': 0.44999998807907104})
    Audio.PlayZoneBGM({'stopbgm': False})
}
