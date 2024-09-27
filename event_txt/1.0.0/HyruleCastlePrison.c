-------- EventFlow: HyruleCastlePrison --------

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor', 'MoveToCompassPoint', 'WarpToActorLinkedPoint', 'AimCompassPoint', 'SetEquipmentVisibility', 'PlayAnimation', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset', 'StartParam']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE', 'PlayZoneBGM', 'PlayJingle', 'StopAllBGM', 'StopBGM', 'PlayBGM', 'Prepare', 'StopSE']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt3ActorsCenterAsTalker', 'LookAt2ActorsCenterAsTalker', 'Reset', 'PlayLocationOriginCameraAnimation']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['EnableAutoMovement', 'AimActor']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['ForbidSave']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: ['LookAtGimmicksLinkedPoint']
queries: []
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: PatrolHyruleSoldier[sol1]
entrypoint: None()
actions: ['Deactivate', 'Activate']
queries: []
params: None

Actor: PatrolHyruleSoldier[sol2]
entrypoint: None()
actions: ['Deactivate', 'Activate']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['Yield_']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['SetFacialExpression', 'AimDegreeAngle', 'WarpToActorLinkedPoint', 'AimCompassPoint', 'PlayAnimation', 'ResetAim', 'SetInterestIkEnabled', 'PlayAnimationNoWait', 'SetInterestIkSettings']
queries: []
params: None

Actor: Environment
entrypoint: None()
actions: ['ChangeTime']
queries: []
params: None

Actor: ItemCopyRod
entrypoint: None()
actions: ['Activate', 'SetGravityEnable', 'SetCollisionEnabled', 'WarpToActor', 'PlayMaterialAnimationNoWait', 'StopTailorOtherChannel', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: EvHyruleSoldier007
entrypoint: None()
actions: ['AimDegreeAngle', 'Talk', 'PlayAnimationNoWait', 'PlayAnimation', 'SetFacialExpression', 'Activate', 'Destroy', 'AimActor', 'SetInterestIkEnabled', 'AimCompassPoint', 'MoveToTargetLinkedPoint', 'WarpToLinkedPointWithCompassPoint', 'MoveToCompassPoint']
queries: []
params: None

Actor: EvHyruleSoldier008
entrypoint: None()
actions: ['AimDegreeAngle', 'Talk', 'PlayAnimation', 'SetFacialExpression', 'Activate', 'Destroy', 'SetInterestIkEnabled', 'AimActor', 'AimCompassPoint', 'WarpToLinkedPointWithCompassPoint', 'MoveToTargetLinkedPoint', 'MoveToCompassPoint']
queries: []
params: None

Actor: EvHyruleSoldier009
entrypoint: None()
actions: ['Deactivate', 'Talk', 'Destroy', 'Activate', 'MoveToCompassPoint', 'AimActor', 'MoveToBesideTargetActor', 'SetFacialExpression', 'WarpToActorLinkedPoint', 'GenericTalkSequence', 'AimCompassPoint', 'PlayAnimationNoWait', 'AimPlayer', 'SetInterestIkEnabled']
queries: []
params: None

Actor: EvHyruleSoldier010
entrypoint: None()
actions: ['Deactivate', 'AimActor', 'MoveToBesideTargetActor', 'MoveToCompassPoint', 'Activate', 'WarpToActorLinkedPoint', 'Destroy', 'AimCompassPoint', 'SetFacialExpression', 'PlayAnimationNoWait', 'SetInterestIkEnabled']
queries: []
params: None

Actor: PatrolHyruleSoldier[solB]
entrypoint: None()
actions: ['Deactivate', 'Activate']
queries: []
params: None

Actor: PatrolHyruleSoldier[solC]
entrypoint: None()
actions: ['Deactivate', 'Activate']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'MoveToBesideTargetActor', 'PlayAnimation', 'Activate', 'PlayTailorOtherChannelNoWait', 'DisableAutoMovement', 'WarpToActorLinkedPoint', 'SetCullMode', 'SetVisibility', 'PlayAnimationNoWait', 'MoveToCompassPoint', 'AimPlayer', 'StopTailorOtherChannel', 'PlayAnimationEx', 'SetTalkerName', 'MoveToTargetLinkedPoint', 'WarpToActorLinkedPointWithCompassPoint', 'ResetAim', 'GenericTalkSequence', 'SetPartnerTalkCoolTime', 'BeginSensorPartnerTalk']
queries: []
params: None

Actor: AreaStartTag
entrypoint: None()
actions: []
queries: []
params: None

void Imprisonment() {
    PatrolHyruleSoldier[sol2].Deactivate()
    PatrolHyruleSoldier[sol1].Deactivate()
    Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_JAIL_DOOR_CLOSE', 'volume': 1.0, 'pitch': 1.0})

    fork {
        EvHyruleSoldier009.Activate()
        EvHyruleSoldier009.MoveToBesideTargetActor({'tolerance': 0.0, 'offsetX': 1.5, 'actor': ActorIdentifier(name="Zelda"), 'offsetZ': -5.0, 'speed': 0, 'offsetY': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        EvHyruleSoldier009.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        EvHyruleSoldier010.Activate()
        EvHyruleSoldier010.MoveToBesideTargetActor({'tolerance': 0.0, 'offsetX': -1.5, 'offsetZ': -5.0, 'actor': ActorIdentifier(name="Zelda"), 'speed': 0, 'offsetY': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        EvHyruleSoldier010.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Zelda.AimActor({'actor': ActorIdentifier(name="EvHyruleSoldier009"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Camera.LookAt3ActorsCenterAsTalker({'duration': 0.10000000149011612, 'actor1': ActorIdentifier(name="EvHyruleSoldier009"), 'actor3': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="EvHyruleSoldier010"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 0.5})

    fork {
        Fade.StartPreset({'preset': 'FadeInNormal'})
    } {
        Audio.PlayZoneBGM({'stopbgm': True})
    }


    fork {
        EvHyruleSoldier009.SetFacialExpression({'expression': 'angry'})
        EvHyruleSoldier009.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EvHyruleSoldier010.SetFacialExpression({'expression': 'angry'})
        EvHyruleSoldier010.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.5})
    EvHyruleSoldier009.SetInterestIkEnabled({'enable': False})
    EvHyruleSoldier010.SetInterestIkEnabled({'enable': False})

    fork {
        EvHyruleSoldier009.MoveToCompassPoint({'timeOut': 7.0, 'tolerance': 0.0, 'customSpeed': 0.0, 'speed': 0, 'distance': 7.0, 'direction': 3, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        EvHyruleSoldier010.MoveToCompassPoint({'timeOut': 7.0, 'tolerance': 0.0, 'customSpeed': 0.0, 'speed': 0, 'distance': 7.0, 'direction': 3, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }


    fork {
        EvHyruleSoldier009.Deactivate()
    } {
        EvHyruleSoldier010.Deactivate()
    }

    EvHyruleSoldier007.Activate()
    EvHyruleSoldier008.Activate()
    PatrolHyruleSoldier[sol2].Deactivate()
    PatrolHyruleSoldier[sol1].Deactivate()

    fork {
        Zelda.AimActor({'actor': ActorIdentifier(name="EvHyruleSoldier007"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'weight1': 1.0, 'weight2': 1.0, 'duration': 2.0, 'chaseRatio': 0.029999999329447746, 'actor1': ActorIdentifier(name="EvHyruleSoldier007"), 'actor2': ActorIdentifier(name="EvHyruleSoldier008"), 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    Timer.Wait({'time': 0.5})

    fork {
        EvHyruleSoldier007.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EvHyruleSoldier007.Talk({'message': 'scenario/StoryAreaA:Imprisonment_010', 'getAttention': False})
    } {
        EvHyruleSoldier008.SetInterestIkEnabled({'enable': True})
        Timer.Wait({'time': 0.5})
        EvHyruleSoldier008.AimDegreeAngle({'angle': 315.0, 'withoutTurn': True, 'duration': 0.4000000059604645, 'immediateTurn': False})
    }

    EvHyruleSoldier008.AimActor({'actor': ActorIdentifier(name="EvHyruleSoldier007"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        EvHyruleSoldier008.Talk({'message': 'scenario/StoryAreaA:Imprisonment_020', 'getAttention': False})
    } {
        EvHyruleSoldier008.SetFacialExpression({'expression': 'sad'})
        EvHyruleSoldier008.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EvHyruleSoldier007.SetInterestIkEnabled({'enable': True})
        Timer.Wait({'time': 0.5})
        EvHyruleSoldier007.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EvHyruleSoldier007.AimDegreeAngle({'angle': 45.0, 'withoutTurn': True, 'duration': 0.4000000059604645, 'immediateTurn': False})
    }


    fork {
        EvHyruleSoldier007.Talk({'message': 'scenario/StoryAreaA:Imprisonment_030', 'getAttention': False})
    } {
        EvHyruleSoldier007.SetFacialExpression({'expression': 'surprise'})
        EvHyruleSoldier007.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EvHyruleSoldier008.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EvHyruleSoldier007.AimActor({'actor': ActorIdentifier(name="EvHyruleSoldier008"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        EvHyruleSoldier007.Talk({'message': 'scenario/StoryAreaA:Imprisonment_040', 'getAttention': False})
    } {
        EvHyruleSoldier007.SetFacialExpression({'expression': 'sad'})
        EvHyruleSoldier007.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        EvHyruleSoldier008.SetFacialExpression({'expression': 'sleep'})
    } {
        EvHyruleSoldier008.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        EvHyruleSoldier008.SetFacialExpression({'expression': 'sad'})
    } {
        EvHyruleSoldier008.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})
    }


    fork {
        EvHyruleSoldier008.Talk({'message': 'scenario/StoryAreaA:Imprisonment_050', 'getAttention': False})
    } {
        EvHyruleSoldier008.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EvHyruleSoldier007.SetFacialExpression({'expression': 'sad'})
        EvHyruleSoldier007.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        EvHyruleSoldier007.Talk({'message': 'scenario/StoryAreaA:Imprisonment_060', 'getAttention': False})
    } {
        EvHyruleSoldier007.PlayAnimation({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EvHyruleSoldier008.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Timer.Wait({'time': 0.30000001192092896})
        EvHyruleSoldier007.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EvHyruleSoldier007.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        EvHyruleSoldier008.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EvHyruleSoldier008.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Camera.Reset({'chaseRatio': 0.019999999552965164, 'resetPlayerCamera': False})
    }

    EventFlags.SetFlag({'symbol': 'EvPrologue016', 'value': True})
    EventVariables.SetVariable({'symbol': 'HyruleCastle_LuberiHouse:1841605288'})
    EvHyruleSoldier007.Destroy()
    EvHyruleSoldier008.Destroy()
    PatrolHyruleSoldier[sol2].Activate()
    PatrolHyruleSoldier[sol1].Activate()
    EvHyruleSoldier009.Destroy()
    EvHyruleSoldier010.Destroy()
}

void BeginEscape() {

    call EvResetCommon.AllReset()

    Timer.Wait({'time': 0.4000000059604645})
    Partner[companion].GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnimName': 'talk02', 'aimFromPlayer': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    Timer.Wait({'time': 0.20000000298023224})
    Audio.PlayJingle({'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
    Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetY': 1.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': -1.0, 'offsetZ': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})

    fork {
        Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:BeginEscape_010', 'playerTalkAnim': False, 'selfTalkAnimName': 'talk02', 'aimFromPlayer': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Timer.Wait({'time': 0.5})

        call GeneralSequence.Look_at_Partner()

    }


    fork {
        Partner[companion].PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:BeginEscape_020', 'getAttention': False})
    }

    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvPrologue018'})
    EventVariables.SetVariable({'symbol': 'HyruleCastle_LuberiHouse:425213136'})
}

void ZeldaFound() {
    Zelda.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetY': 0.0})
    Zelda.SetEquipmentVisibility({'visibility': False})

    fork {
        EvHyruleSoldier009.Activate()
    } {
        Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetZ': 0.0, 'offsetX': 1.0, 'timeOut': 1.0, 'customSpeed': 7.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 1.0, 'tolerance': 0.0, 'withoutTurn': False, 'method': 0})
        Partner.AimActor({'actor': ActorIdentifier(name="EvHyruleSoldier009"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Zelda.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    Camera.LookAt2ActorsCenterAsTalker({'weight1': 1.0, 'weight2': 15.0, 'distanceOffset': -0.5, 'actor2': ActorIdentifier(name="Zelda"), 'actor1': ActorIdentifier(name="EvHyruleSoldier009"), 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Audio.PlayJingle({'label': 'SE_OBJ_JAIL_DOOR_CLOSE', 'volume': 1.0, 'ignoreSkip': True})
    Timer.Wait({'time': 0.5})
    if !EventFlags.CheckFlag({'symbol': 'EvSentPrison'})
    && !EventFlags.CheckFlag({'symbol': 'EvSoldierCatch'}) {
        EvHyruleSoldier009.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Fade.StartPreset({'preset': 'FadeInNormal'})

        fork {
            EvHyruleSoldier009.Talk({'message': 'scenario/StoryAreaA:SentPrison1_010', 'getAttention': False})
        } {
            EvHyruleSoldier009.GenericTalkSequence({'playerTalkAnim': False, 'aimToPlayer': False, 'cameraLookAt': False, 'selfTalkAnimName': 'talk', 'aimFromPlayer': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        } {
            EvHyruleSoldier009.SetFacialExpression({'expression': 'sad'})
        } {
            Zelda.SetInterestIkEnabled({'enable': True})
            Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="EvHyruleSoldier009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        EvHyruleSoldier009.SetInterestIkEnabled({'enable': False})
        EvHyruleSoldier009.MoveToCompassPoint({'timeOut': 7.0, 'tolerance': 0.0, 'customSpeed': 0.0, 'speed': 1, 'direction': 1, 'distance': 9.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        EvHyruleSoldier009.Deactivate()
        EvHyruleSoldier009.Destroy()
        Timer.Wait({'time': 1.0})
        EventFlags.SetFlag({'value': True, 'symbol': 'EvSentPrison'})
    } else {
        EvHyruleSoldier009.Destroy()
        Zelda.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
        Fade.StartPreset({'preset': 'FadeInNormal'})
    }
}

void SentPrison() {

    fork {
        EvHyruleSoldier009.Activate()
    } {
        Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetZ': 0.0, 'offsetX': 1.0, 'timeOut': 1.0, 'customSpeed': 7.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetY': 1.0, 'tolerance': 0.0, 'withoutTurn': False, 'method': 0})
        Partner.AimActor({'actor': ActorIdentifier(name="EvHyruleSoldier009"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        EvHyruleSoldier010.Activate()
    }


    fork {
        EvHyruleSoldier009.WarpToActorLinkedPoint({'index': 1, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetY': 0.0})
    } {
        EvHyruleSoldier010.WarpToActorLinkedPoint({'index': 2, 'actor': ActorIdentifier(name="AreaStartTag"), 'offsetY': 0.0})
    }

    Camera.LookAt2ActorsCenterAsTalker({'weight1': 1.0, 'weight2': 15.0, 'distanceOffset': 0.5, 'actor2': ActorIdentifier(name="Zelda"), 'actor1': ActorIdentifier(name="EvHyruleSoldier009"), 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        EvHyruleSoldier009.AimCompassPoint({'direction': 3, 'duration': 0.10000000149011612, 'withoutTurn': False, 'immediateTurn': False})
    } {
        EvHyruleSoldier010.AimCompassPoint({'direction': 1, 'duration': 0.10000000149011612, 'withoutTurn': False, 'immediateTurn': False})
    }

    Audio.PlayJingle({'label': 'SE_OBJ_JAIL_DOOR_CLOSE', 'volume': 1.0, 'ignoreSkip': True})
    Zelda.SetEquipmentVisibility({'visibility': False})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    EvHyruleSoldier009.GenericTalkSequence({'playerTalkAnim': False, 'aimToPlayer': False, 'aimFromPlayer': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'selfTalkAnimName': 'salute,wait', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    Timer.Wait({'time': 0.5})
    EvHyruleSoldier010.SetInterestIkEnabled({'enable': False})
    EvHyruleSoldier010.MoveToCompassPoint({'timeOut': 7.0, 'tolerance': 0.0, 'customSpeed': 0.0, 'direction': 3, 'speed': 1, 'distance': 8.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    EvHyruleSoldier009.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        EvHyruleSoldier009.Talk({'message': 'scenario/StoryAreaA:SentPrison1_010', 'getAttention': False})
    } {
        EvHyruleSoldier009.GenericTalkSequence({'playerTalkAnim': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'selfTalkAnimName': 'talk', 'aimToPlayer': False, 'aimFromPlayer': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    } {
        EvHyruleSoldier009.SetFacialExpression({'expression': 'sad'})
    } {
        Timer.Wait({'time': 0.5})
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="EvHyruleSoldier009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    EvHyruleSoldier009.SetInterestIkEnabled({'enable': False})
    EvHyruleSoldier009.MoveToCompassPoint({'timeOut': 7.0, 'tolerance': 0.0, 'customSpeed': 0.0, 'direction': 1, 'speed': 1, 'distance': 9.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})

    fork {
        EvHyruleSoldier009.Destroy()
    } {
        EvHyruleSoldier010.Destroy()
    }

    Partner.EnableAutoMovement()
    Timer.Wait({'time': 1.0})
}

void ImpaBlock() {

    call EvResetCommon.AllReset()


    fork {
        Dialog.Show({'message': 'scenario/StoryAreaA:ImpaBlock02_010'})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_CASTLE_SOUND_FIGHTING', 'volume': 1.0, 'pitch': 1.0})
    }

    Audio.StopSE({'label': 'SE_OBJ_CASTLE_SOUND_FIGHTING', 'duration': 1.0})
    Zelda.MoveToCompassPoint({'direction': 0, 'distance': 2.0, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
}

void show_room() {
    PatrolHyruleSoldier[solB].Deactivate()
    PatrolHyruleSoldier[solC].Deactivate()
    EvHyruleSoldier007.Activate()
    EvHyruleSoldier008.Activate()
    Timer.Wait({'time': 0.5})
    Area.LookAtGimmicksLinkedPoint({'pointIndex': 5, 'chaseRatio': 0.019999999552965164, 'duration': 0.009999999776482582, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 3.0})
    EvHyruleSoldier007.WarpToLinkedPointWithCompassPoint({'index': 3, 'direction': 3, 'offsetY': 0.0})
    EvHyruleSoldier008.WarpToLinkedPointWithCompassPoint({'index': 1, 'direction': 1, 'offsetY': 0.0})

    fork {
        Area.LookAtGimmicksLinkedPoint({'distanceOffset': 0.0, 'pointIndex': 0, 'duration': 0.009999999776482582, 'chaseRatio': 0.019999999552965164, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Timer.Wait({'time': 6.0})
        Camera.Reset({'chaseRatio': 0.05000000074505806, 'resetPlayerCamera': False})
    } {
        EvHyruleSoldier007.MoveToTargetLinkedPoint({'actor': ActorIdentifier(name="Area"), 'index': 4, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        EvHyruleSoldier007.MoveToCompassPoint({'speed': 0, 'direction': 0, 'distance': 4.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        EvHyruleSoldier008.MoveToTargetLinkedPoint({'speed': 0, 'actor': ActorIdentifier(name="Area"), 'index': 2, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        EvHyruleSoldier008.MoveToCompassPoint({'speed': 0, 'direction': 2, 'distance': 4.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    EventFlags.SetFlag({'value': True, 'symbol': 'EvSoldierAttention'})
    EvHyruleSoldier007.Destroy()
    EvHyruleSoldier008.Destroy()
    PatrolHyruleSoldier[solB].Activate()
    PatrolHyruleSoldier[solC].Activate()
}

void PartnerAppear() {

    call EvResetCommon.AllReset()

    Fade.StartParam({'mode': 1, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0, 'time': 1.5})
    GameControl.ForbidSave()
    Environment.ChangeTime({'hour': 21, 'min': 0, 'sec': 0})
    Audio.StopAllBGM({'duration': 2.0})
    Timer.Wait({'time': 2.5})
    Audio.Prepare({'label': 'BGM_EV_PARTNER_APPEAR', 'kind': 0, 'volume': 1.0})

    fork {
        Partner[companion].Activate()
    } {
        Player.SetInterestIkSettings({'angleLimitUChanged': True, 'angleLimitU': 30.0, 'slotIndex': 0, 'boneIndexChanged': False, 'boneName': '', 'boneOffsetChanged': False, 'boneOffsetX': 0.0, 'boneOffsetY': 0.0, 'boneOffsetZ': 0.0, 'boneRotateChanged': False, 'boneRotateX': -90.0, 'boneRotateY': -90.0, 'boneRotateZ': 0.0, 'upVectorChanged': False, 'upVectorX': 0.0, 'upVectorY': 1.0, 'upVectorZ': 0.0, 'angleLimitHChanged': False, 'angleLimitH': 45.0, 'angleLimitDChanged': False, 'angleLimitD': 0.0, 'weightChanged': False, 'weight': 0.0})
        Player.WarpToActorLinkedPoint({'offsetY': 0.0, 'index': 1, 'actor': ActorIdentifier(name="Area")})
        Player.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Zelda.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Player.ResetAim()
        Player.SetFacialExpression({'expression': 'sad'})
    } {
        Partner[companion].SetCullMode({'cullMode': 0, 'enabled': True})
    } {
        Partner[companion].SetVisibility({'visible': False})
    }

    Partner[companion].SetTalkerName({'message': 'glossary/Character:Unknown', 'keep': False})

    fork {
        Partner[companion].DisableAutoMovement()
        Partner[companion].WarpToActorLinkedPoint({'index': 0, 'offsetY': 0.0, 'actor': ActorIdentifier(name="Area")})
        Partner[companion].PlayAnimation({'name': 'ev_PartnerAppear_c1_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})
        Partner[companion].PlayTailorOtherChannelNoWait({'index': 0, 'channel': 'Ev_SphereLight_Fade', 'restart': False, 'stopOnSkipped': True})
    }

    Partner[companion].StopTailorOtherChannel({'index': 0, 'channel': 'Ev_SphereLight_Fade'})
    Camera.PlayLocationOriginCameraAnimation({'path': 'map/HyruleCastlePrison_001.bfres', 'name': 'PartnerAppearFix_cam', 'location': 'HyruleCastlePrison_001', 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    FlowControl.Yield_()

    fork {
        Partner[companion].WarpToActorLinkedPointWithCompassPoint({'offsetY': 0.0, 'index': 1, 'direction': 0, 'actor': ActorIdentifier(name="Area")})
        Partner[companion].PlayAnimation({'name': 'ev_PartnerAppear', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Fade.StartPreset({'preset': 'FadeInFast'})
    } {
        Player.SetInterestIkEnabled({'enable': True})

        fork {
            Player.PlayAnimation({'name': 'ev_PartnerAppear', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 7.699999809265137})
            Player.SetFacialExpression({'expression': 'slightly_om'})
            Timer.Wait({'time': 3.799999952316284})
            Player.SetFacialExpression({'expression': 'normal'})
            Timer.Wait({'time': 5.5})
            Player.SetFacialExpression({'expression': 'slightly_om'})
        }

    } {
        Partner[companion].SetVisibility({'visible': False})
        Timer.Wait({'time': 16.799999237060547})
        Partner[companion].AimPlayer({'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].SetVisibility({'visible': True})
        Partner[companion].ResetAim()
    } {
        Timer.Wait({'time': 1.0})
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_TRI_APPEAR', 'volume': 1.0, 'pitch': 1.0})
    } {
        Timer.Wait({'time': 18.600000381469727})
        Audio.PlayBGM({'label': 'BGM_EV_PARTNER_APPEAR', 'volume': 1.0, 'ignoreSkip': True})
    }


    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'ev_think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:MeetPartner_020', 'getAttention': False})
    } {
        Player.PlayAnimationNoWait({'name': 'ev_wait_barehands', 'blendFrame': 30, 'layer': 0, 'restart': False})
    } {
        Player.SetFacialExpression({'expression': 'normal'})
    }

    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.6000000238418579})
    Partner[companion].PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:MeetPartner_025', 'getAttention': False})
    Partner[companion].SetTalkerName({'message': 'glossary/Character:Partner', 'keep': False})
    Partner[companion].PlayAnimationEx({'time': 0.0, 'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:MeetPartner_030', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:MeetPartner_031', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.699999988079071})
    Partner[companion].PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:MeetPartner_035', 'getAttention': False})

    call GeneralSequence.ZeldaTalkMotion()


    fork {
        Timer.Wait({'time': 0.800000011920929})
        Partner[companion].PlayAnimationNoWait({'name': 'yes,talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:MeetPartner_Q1_A1_010', 'getAttention': False})
        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.20000000298023224})
    } {
        Zelda.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:MeetPartner_040', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:MeetPartner_041', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:MeetPartner_042', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:MeetPartner_043', 'getAttention': False})

    call GeneralSequence.ZeldaTalkMotion_1.5s()

    Timer.Wait({'time': 0.6000000238418579})
    Partner[companion].PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:MeetPartner_045', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:MeetPartner_046', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 1.5})
    } {
        Player.SetFacialExpression({'expression': 'sad'})
        Player.AimDegreeAngle({'angle': 350.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:MeetPartner_050', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.AimDegreeAngle({'angle': 315.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Partner[companion].PlayAnimationNoWait({'name': 'no,talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:MeetPartner_060', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'yes,talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:MeetPartner_070', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:MeetPartner_080', 'getAttention': False})

    fork {
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].PlayAnimationEx({'time': 0.0, 'name': '$locomotion', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            Timer.Wait({'time': 0.8669999837875366})
            Partner[companion].PlayTailorOtherChannelNoWait({'channel': 'Penetrate', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        } {
            Partner[companion].MoveToCompassPoint({'direction': 2, 'distance': 8.0, 'speed': 1, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        }

        Partner[companion].MoveToCompassPoint({'direction': 1, 'distance': 2.0, 'speed': 1, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Timer.Wait({'time': 0.5})
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 1.0})
        Partner[companion].PlayAnimationEx({'blendFrame': -1, 'name': 'ev_think', 'time': 2.5, 'layer': 0, 'restart': False})
        Partner[companion].PlayAnimationEx({'time': 0.0, 'name': '$locomotion', 'blendFrame': 20, 'layer': 0, 'restart': False})

        fork {
            Timer.Wait({'time': 0.699999988079071})
            Partner[companion].PlayTailorOtherChannelNoWait({'channel': 'Penetrate', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        } {
            Partner[companion].MoveToBesideTargetActor({'offsetY': 1.0, 'offsetZ': -1.5, 'offsetX': -1.0, 'speed': 1, 'actor': ActorIdentifier(name="Player"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        }

        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.SetFacialExpression({'expression': 'normal'})
    } {

        call GeneralSequence.Look_at_Partner()

    }

    Partner[companion].PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:MeetPartner_090', 'getAttention': False})
    Timer.Wait({'time': 1.0})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:MeetPartner_100', 'getAttention': False})
    } {
        Partner[companion].PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Audio.StopBGM({'label': 'BGM_EV_PARTNER_APPEAR', 'duration': 3.0})

    fork {
        Partner[companion].MoveToTargetLinkedPoint({'index': 3, 'speed': 1, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Partner[companion].PlayAnimation({'name': 'ev_CopyLodAppear', 'blendFrame': 20, 'layer': 0, 'restart': False})
    } {
        Player.PlayAnimation({'name': 'ev_CopyLodAppear', 'blendFrame': 20, 'layer': 0, 'restart': False})
    } {
        Player.SetFacialExpression({'expression': 'slightly_om'})
    } {
        Timer.Wait({'time': 1.5499999523162842})
        Player.ResetAim()
    } {
        Timer.Wait({'time': 1.5})
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_COPY_ROD_APPEAR_TRI_00', 'volume': 1.0, 'pitch': 1.0})
    } {

        call Dissolve.Dissolve({'actor': ActorIdentifier(name="ItemCopyRod")})

        ItemCopyRod.SetGravityEnable({'enable': False})
        ItemCopyRod.SetCollisionEnabled({'enable': False})
        ItemCopyRod.WarpToActor({'offsetX': 0.0, 'offsetY': 0.5, 'actor': ActorIdentifier(name="Player"), 'distance': 1.2699999809265137})
        ItemCopyRod.Activate()
        ItemCopyRod.StopTailorOtherChannel({'channel': 'ac_Keep', 'index': -1})
        ItemCopyRod.PlayTailorOtherChannelNoWait({'channel': 'CopyLodAppear', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        ItemCopyRod.PlayMaterialAnimationNoWait({'name': 'ev_CopyLodAppear', 'layer': 0})
    }


    fork {
        Partner[companion].ResetAim()
    } {
        Partner[companion].PlayAnimationNoWait({'name': 'ev_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Player.AimCompassPoint({'direction': 3, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
        Player.PlayAnimation({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ItemCopyRod.SetCollisionEnabled({'enable': True})
    }


    call Dissolve.Undissolve({'actor': ActorIdentifier(name="ItemCopyRod")})

    Timer.Wait({'time': 1.5})
    EventFlags.SetFlag({'value': True, 'symbol': 'PartnerAppear'})
    ItemCopyRod.PlayTailorOtherChannelNoWait({'channel': 'ac_Keep', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    ItemCopyRod.SetCollisionEnabled({'enable': True})
    Partner[companion].SetPartnerTalkCoolTime({'time': 0.0})
    Partner[companion].BeginSensorPartnerTalk()
}
