-------- EventFlow: ZoraRiver006 --------

Actor: ZoraRiver006
entrypoint: None()
actions: ['Talk', 'GenericTalkSequenceWithDialog', 'PlayAnimationNoWait', 'PlayAnimation', 'AimActor', 'AimPlayer', 'SetFacialExpression', 'MoveToLinkedPoint', 'Activate', 'ResetFacialExpression', 'ChangeSteeringAnimation', 'Destroy', 'ResetAim', 'AimCompassPoint', 'SetInterestIkEnabled', 'LookAtTalker', 'LookAtTalkersLinkedPoint', 'SetDefaultFacialExpression', 'SetInstanceVariableString']
queries: ['InWater']
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'AddItem', 'GenericItemGetSequence', 'AbsorbAllPastedActors', 'WarpToActorLinkedPoint', 'SetInterestIkEnabled', 'AimActorLinkedPoint', 'PlayAnimationNoWait', 'PlayAnimation']
queries: []
params: None

Actor: ZoraRiverC000
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'SetFacialExpression', 'AimActor', 'PlayAnimation', 'AimCompassPoint', 'LookAtTalker', 'WarpToActorLinkedPoint', 'MoveToLinkedPoint', 'ResetAim', 'TrailRail', 'MoveToTargetLinkedPoint', 'SetComponentActive', 'SetInstanceVariableString', 'SetDefaultFacialExpression']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'LookAt3ActorsCenterAsTalker', 'Reset']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump']
queries: []
params: None

Actor: ZoraRiver004
entrypoint: None()
actions: ['Deactivate', 'Activate']
queries: []
params: None

Actor: Bombfish
entrypoint: None()
actions: []
queries: []
params: None

Actor: Taggler00
entrypoint: None()
actions: []
queries: []
params: None

Actor: Biri
entrypoint: None()
actions: []
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['SetPlayerVolume']
queries: []
params: None

Actor: Taggler01
entrypoint: None()
actions: []
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor', 'MoveToDefaultPosition', 'AimActorLinkedPoint', 'SetInterestIkEnabled', 'WarpToActor']
queries: []
params: None

void talk() {
    ZoraRiver006.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver006Talk010_010', 'selfTalkAnimName': 'think01', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk020() {
    ZoraRiver006.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver006Talk020_010', 'selfTalkAnimName': 'surprised_st01', 'aimToPlayer': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraRiver006.SetDefaultFacialExpression({'expression': 'sad'})
    ZoraRiver006.SetInstanceVariableString({'name': 'idleAnim', 'value': 'sad01'})
}

void Bring_RiverCoast010_Brought000() {

    call EvResetCommon.AllReset()

    Player.PlayAnimationNoWait({'blendFrame': -2, 'name': 'wait', 'layer': 0, 'restart': False})
    ZoraRiver006.SetInterestIkEnabled({'enable': False})
    ZoraRiver006.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'quest/QuestAreaB:Bring_RiverCoast010_Brought000_010', 'selfTalkAnimName': 'think01', 'facial': 'smile', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Brought000_020', 'getAttention': False})
    } {
        ZoraRiver006.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver006.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Brought000_030', 'getAttention': False})
    } {
        ZoraRiver006.PlayAnimationNoWait({'name': 'yes01,think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver006.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Brought000_050', 'getAttention': False})
    } {
        ZoraRiver006.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver006.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Brought000_060', 'getAttention': False})
    } {
        ZoraRiver006.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver006.SetFacialExpression({'expression': 'sleep'})
    }

    Player.SetInterestIkEnabled({'enable': True})
    Partner[companion].SetInterestIkEnabled({'enable': True})

    fork {
        ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Brought000_070', 'getAttention': False})
    } {
        ZoraRiver006.LookAtTalkersLinkedPoint({'pointIndex': 0, 'offsetY': 0.0, 'offsetZ': 0.0, 'distanceOffset': -1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0})
    } {
        ZoraRiver006.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraRiver006.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver006.AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        if !ZoraRiver006.InWater() {

            fork {
                Timer.Wait({'time': 0.20000000298023224})
                Player.AimActorLinkedPoint({'pointIndex': 0, 'actor': ActorIdentifier(name="ZoraRiver006"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.30000001192092896})
                Partner[companion].AimActorLinkedPoint({'duration': 0.4000000059604645, 'pointIndex': 0, 'actor': ActorIdentifier(name="ZoraRiver006"), 'withoutTurn': True, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }

        }
    }


    fork {
        ZoraRiver006.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiver006.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    }


    fork {
        ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Brought000_080', 'getAttention': False})
    } {
        ZoraRiver006.PlayAnimationNoWait({'name': 'yes01,happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver006.SetFacialExpression({'expression': 'smile'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="ZoraRiver006"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="ZoraRiver006"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    QuestSystem.SetProgress({'symbol': 'Bring_RiverCoast010:3268929980', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Bring_RiverCoast010_Complete() {

    call EvResetCommon.AllReset_SensorQuest()

    ZoraRiver006.SetInterestIkEnabled({'enable': False})
    ZoraRiver006.AimActor({'actor': ActorIdentifier(name="Biri"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        ZoraRiver006.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'keepPersonalSpace': True, 'selfTalkAnimName': 'happy01', 'message': 'quest/QuestAreaB:Bring_RiverCoast010_Complete_010', 'aimToPlayer': False, 'facial': 'smile', 'cameraLookAt': False, 'absorbAllPastedActors': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="ZoraRiver006"), 'actor3': ActorIdentifier(name="Biri"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    Dialog.Show({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Complete_020'})
    if !ZoraRiver006.InWater() {
        Player.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } else {
        Player.PlayAnimation({'name': 'swim_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }
    Player.AimActor({'actor': ActorIdentifier(name="ZoraRiver006"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Complete_030', 'getAttention': False})
    Timer.Wait({'time': 2.0})
    ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Complete_040', 'getAttention': False})
    Timer.Wait({'time': 2.0})
    ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Complete_050', 'getAttention': False})
    ZoraRiver006.ResetAim()
    ZoraRiver006.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 2.0})
    ZoraRiver006.SetFacialExpression({'expression': 'smile'})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    Timer.Wait({'time': 0.5})

    fork {
        ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Complete_060', 'getAttention': False})
    } {
        ZoraRiver006.PlayAnimationNoWait({'name': 'sad01,think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver006.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Complete_070', 'getAttention': False})
    } {
        ZoraRiver006.PlayAnimation({'name': 'yes01,talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver006.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraRiver006.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    GameControl.RequestLevelJump({'level': 'Field', 'locator': 'EV_Field_Bring_RiverCoast010_Complete2', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void Bring_RiverCoast010_Brought010_TL1() {

    call EvResetCommon.AllReset_SensorQuest()

    ZoraRiver006.SetInterestIkEnabled({'enable': False})
    ZoraRiver006.AimActor({'actor': ActorIdentifier(name="Taggler00"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Event156:

    fork {
        ZoraRiver006.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'keepPersonalSpace': True, 'message': 'quest/QuestAreaB:Bring_RiverCoast010_Brought010_010', 'aimToPlayer': False, 'facial': 'smile', 'cameraLookAt': False, 'selfTalkAnimName': 'yes01,happy02', 'absorbAllPastedActors': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="ZoraRiver006"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }


    fork {
        ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Brought010_020', 'getAttention': False})
    } {
        ZoraRiver006.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver006.SetFacialExpression({'expression': 'normal'})
    }

    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    Dialog.Show({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Brought010_030'})
    if !ZoraRiver006.InWater() {
        Player.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } else {
        Player.PlayAnimation({'name': 'swim_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }
    Player.AimActor({'actor': ActorIdentifier(name="ZoraRiver006"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Brought010_040', 'getAttention': False})
    ZoraRiver006.ResetAim()

    fork {
        ZoraRiver006.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver006.SetFacialExpression({'expression': 'sleep'})
    } {
        ZoraRiver006.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    Timer.Wait({'time': 2.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    Timer.Wait({'time': 0.5})

    fork {
        ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Brought010_050', 'getAttention': False})
    } {
        ZoraRiver006.PlayAnimation({'name': 'yes01,happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver006.SetFacialExpression({'expression': 'smile'})
    } {
        ZoraRiver006.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        ZoraRiver006.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver006.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Brought010_060', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.5})

        fork {
            ZoraRiver006.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraRiver006.SetFacialExpression({'expression': 'angry'})
        }

    }

    Player.SetInterestIkEnabled({'enable': True})
    Partner[companion].SetInterestIkEnabled({'enable': True})

    fork {
        ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Brought010_070', 'getAttention': False})
    } {
        ZoraRiver006.LookAtTalkersLinkedPoint({'pointIndex': 0, 'offsetY': 0.0, 'offsetZ': 0.0, 'distanceOffset': -1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0})
    } {
        ZoraRiver006.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraRiver006.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver006.AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        if !ZoraRiver006.InWater() {

            fork {
                Timer.Wait({'time': 0.20000000298023224})
                Player.AimActorLinkedPoint({'pointIndex': 0, 'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiver006"), 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.30000001192092896})
                Partner[companion].AimActorLinkedPoint({'duration': 0.4000000059604645, 'pointIndex': 0, 'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiver006"), 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }

        }
    }

    QuestSystem.SetProgress({'symbol': 'Bring_RiverCoast010:2667416297', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Bring_RiverCoast010_Brought020() {

    call EvResetCommon.AllReset_SensorQuest()

    ZoraRiver006.SetInterestIkEnabled({'enable': False})
    ZoraRiver006.AimActor({'actor': ActorIdentifier(name="Bombfish"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        ZoraRiver006.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'keepPersonalSpace': True, 'message': 'quest/QuestAreaB:Bring_RiverCoast010_Brought020_010', 'aimToPlayer': False, 'cameraLookAt': False, 'selfTalkAnimName': 'surprised_st01,surprised_lp01', 'facial': 'angry', 'absorbAllPastedActors': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="ZoraRiver006"), 'actor3': ActorIdentifier(name="Bombfish"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }


    fork {
        ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Brought020_015', 'getAttention': False})
    } {
        ZoraRiver006.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver006.SetFacialExpression({'expression': 'normal'})
    }

    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    ZoraRiver006.ResetAim()

    fork {
        ZoraRiver006.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver006.SetFacialExpression({'expression': 'sleep'})
    } {
        ZoraRiver006.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Brought020_020', 'getAttention': False})
    if !ZoraRiver006.InWater() {
        Player.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } else {
        Player.PlayAnimation({'name': 'swim_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }
    Player.AimActor({'actor': ActorIdentifier(name="ZoraRiver006"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Brought020_030', 'getAttention': False})
    Timer.Wait({'time': 2.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    Timer.Wait({'time': 0.5})

    fork {
        ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Brought020_040', 'getAttention': False})
    } {
        ZoraRiver006.PlayAnimation({'name': 'yes01,happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver006.SetFacialExpression({'expression': 'smile'})
    } {
        ZoraRiver006.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        ZoraRiver006.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver006.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Brought020_050', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.5})

        fork {
            ZoraRiver006.SetFacialExpression({'expression': 'surprise'})
        } {
            ZoraRiver006.PlayAnimationNoWait({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }

    Player.SetInterestIkEnabled({'enable': True})
    Partner[companion].SetInterestIkEnabled({'enable': True})

    fork {
        ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Brought010_070', 'getAttention': False})
    } {
        ZoraRiver006.LookAtTalkersLinkedPoint({'pointIndex': 0, 'offsetY': 0.0, 'offsetZ': 0.0, 'distanceOffset': -1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0})
    } {
        ZoraRiver006.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraRiver006.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver006.AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        if !ZoraRiver006.InWater() {

            fork {
                Timer.Wait({'time': 0.20000000298023224})
                Player.AimActorLinkedPoint({'pointIndex': 0, 'actor': ActorIdentifier(name="ZoraRiver006"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.30000001192092896})
                Partner[companion].AimActorLinkedPoint({'duration': 0.4000000059604645, 'pointIndex': 0, 'actor': ActorIdentifier(name="ZoraRiver006"), 'withoutTurn': True, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }

        }
    }

    QuestSystem.SetProgress({'symbol': 'Bring_RiverCoast010:2280045480', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Bring_RiverCoast010_Talk020() {
    ZoraRiver006.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'selfTalkAnimName': 'think01', 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver006Talk040_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        ZoraRiver006.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver006Talk040_020', 'getAttention': False})
    } {
        ZoraRiver006.SetFacialExpression({'expression': 'smile'})
    } {
        ZoraRiver006.PlayAnimationNoWait({'name': 'yes01,happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void Bring_RiverCoast010_Complete2() {

    call EvResetCommon.AllResetNowait()

    ZoraRiver004.Deactivate()
    ZoraRiver006.Activate()
    ZoraRiverC000.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="ZoraRiver006"), 'index': 5, 'offsetY': 0.0})

    fork {
        ZoraRiverC000.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverC000.SetFacialExpression({'expression': 'sad'})
    }

    ZoraRiver006.AimActor({'actor': ActorIdentifier(name="ZoraRiverC000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="ZoraRiverC000"), 'actor2': ActorIdentifier(name="ZoraRiver006"), 'actor3': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    ZoraRiverC000.AimActor({'actor': ActorIdentifier(name="ZoraRiver006"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Zelda.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraRiverC000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraRiver006.ChangeSteeringAnimation({'idle': 'wait01', 'walk': 'move01', 'run': 'move_fast01', 'layer': 0})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    Player.SetInterestIkEnabled({'enable': True})
    Partner[companion].SetInterestIkEnabled({'enable': True})
    ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Complete_080', 'getAttention': False})

    fork {
        ZoraRiverC000.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Complete_090', 'getAttention': False})
    } {
        ZoraRiverC000.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverC000.SetFacialExpression({'expression': 'surprise'})
    }

    ZoraRiverC000.ResetAim()
    ZoraRiverC000.MoveToTargetLinkedPoint({'speed': 1, 'index': 2, 'actor': ActorIdentifier(name="ZoraRiver006"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        ZoraRiverC000.PlayAnimationNoWait({'name': 'frightened02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverC000.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        ZoraRiver006.MoveToLinkedPoint({'index': 6, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="ZoraRiver006"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="ZoraRiver006"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.0})
        Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="ZoraRiverC000"), 'actor2': ActorIdentifier(name="ZoraRiver006"), 'actor3': ActorIdentifier(name="Player"), 'duration': 1.0, 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }


    fork {
        ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Complete_100', 'getAttention': False})
    } {
        ZoraRiver006.PlayAnimation({'name': 'no01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        ZoraRiverC000.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiver006"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiverC000.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverC000.SetFacialExpression({'expression': 'sad'})
    }

    ZoraRiver006.PlayAnimation({'name': 'pushaway', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiverC000.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Complete_110', 'getAttention': False})
    } {
        ZoraRiverC000.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverC000.SetFacialExpression({'expression': 'sad'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiverC000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="ZoraRiverC000"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    ZoraRiver006.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiverC000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Complete_120', 'getAttention': False})
    } {
        ZoraRiver006.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver006.SetFacialExpression({'expression': 'smile'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiver006"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="ZoraRiver006"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Complete_130', 'getAttention': False})
    } {
        ZoraRiver006.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    ZoraRiver006.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiverC000.ResetAim()

    fork {
        ZoraRiverC000.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Complete_140', 'getAttention': False})
    } {
        ZoraRiverC000.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiverC000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="ZoraRiverC000"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Complete_150', 'getAttention': False})
    } {
        ZoraRiver006.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver006.SetFacialExpression({'expression': 'nomal'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiver006"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="ZoraRiver006"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    ZoraRiver006.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiverC000.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Complete_160', 'getAttention': False})
    } {
        ZoraRiverC000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverC000.SetFacialExpression({'expression': 'surprise'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiverC000"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="ZoraRiverC000"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.800000011920929})
    ZoraRiverC000.SetFacialExpression({'expression': 'sleep'})
    ZoraRiverC000.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    ZoraRiverC000.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiverC000.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Complete_170', 'getAttention': False})
    Timer.Wait({'time': 2.0})

    fork {
        ZoraRiverC000.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Complete_180', 'getAttention': False})
    } {
        ZoraRiverC000.LookAtTalker({'distanceOffset': -3.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {
        ZoraRiverC000.SetFacialExpression({'expression': 'angry'})
    } {
        ZoraRiverC000.PlayAnimation({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 1.0})

    fork {
        ZoraRiverC000.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Complete_190', 'getAttention': False})
    } {
        ZoraRiverC000.ResetAim()
        ZoraRiverC000.MoveToLinkedPoint({'speed': 1, 'index': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        ZoraRiver006.SetFacialExpression({'expression': 'surprise'})
        ZoraRiver006.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        ZoraRiverC000.TrailRail({'railIndex': 0, 'speed': 1, 'reverse': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
    } {
        ZoraRiverC000.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {
        Player.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="ZoraRiver006"), 'index': 4, 'offsetY': 0.0})
    } {
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraRiver006"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.10000000149011612})
    Partner[companion].WarpToActor({'offsetY': 1.0, 'actor': ActorIdentifier(name="Player"), 'distance': 1.0, 'offsetX': 0.0})
    Partner[companion].AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="ZoraRiver006"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraRiverC000.SetFacialExpression({'expression': 'surprise'})
    ZoraRiverC000.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Complete_200', 'getAttention': False})
    ZoraRiver006.ResetFacialExpression()
    ZoraRiver006.MoveToLinkedPoint({'speed': 1, 'index': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    ZoraRiver006.MoveToLinkedPoint({'index': 1, 'speed': 0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    ZoraRiver006.LookAtTalkersLinkedPoint({'pointIndex': 7, 'offsetX': 0.0, 'distanceOffset': -1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetY': 0.0, 'offsetZ': 0.0})
    ZoraRiver006.AimActor({'actor': ActorIdentifier(name="ZoraRiverC000"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Complete_210', 'getAttention': False})
    } {
        ZoraRiver006.PlayAnimationNoWait({'name': 'yes01,happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver006.SetFacialExpression({'expression': 'smile'})
    }

    ZoraRiverC000.SetComponentActive({'active': False, 'name': 'aimBlockerComp'})
    ZoraRiverC000.AimActor({'actor': ActorIdentifier(name="ZoraRiver006"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        ZoraRiverC000.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Complete_220', 'getAttention': False})
    } {
        ZoraRiverC000.SetFacialExpression({'expression': 'smile'})
    }

    ZoraRiver006.ResetAim()
    ZoraRiverC000.SetComponentActive({'name': 'aimBlockerComp', 'active': True})
    ZoraRiver006.SetInterestIkEnabled({'enable': False})

    fork {
        ZoraRiver006.MoveToLinkedPoint({'tolerance': 0.0, 'index': 3, 'speed': 0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        ZoraRiver006.LookAtTalker({'keep': False, 'offsetX': -3.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }


    fork {
        ZoraRiver006.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Audio.SetPlayerVolume({'label': 'PLAYER_SE_ZORA_SWIM', 'volume': 0.0, 'duration': 2.0})
    }

    Zelda.AimActor({'actor': ActorIdentifier(name="ZoraRiver006"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Complete_230', 'getAttention': False})
    } {
        ZoraRiver006.PlayAnimationNoWait({'name': 'yes01,happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Complete_240', 'getAttention': False})
    } {
        ZoraRiver006.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    ZoraRiver006.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.GenericItemGetSequence({'messageEntry': '', 'itemKey': 'Ornament00', 'count': 1, 'keepRaise': False, 'index': -1})
    Player.AddItem({'itemKey': 'Ornament00', 'count': 1, 'index': -1, 'autoEquip': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor2': ActorIdentifier(name="ZoraRiver006"), 'actor1': ActorIdentifier(name="Zelda"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        ZoraRiver006.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'message': 'quest/QuestAreaB:Bring_RiverCoast010_Complete_250', 'selfTalkAnimName': 'talk02', 'facial': 'smile', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Partner[companion].MoveToDefaultPosition({'speed': 1, 'position': 3, 'tolerance': 0.0, 'avoidWall': False, 'avoidPlayer': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Partner[companion].AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="ZoraRiver006"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Complete_260', 'getAttention': False})
    } {
        ZoraRiver006.PlayAnimationNoWait({'name': 'yes01,happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    ZoraRiverC000.SetFacialExpression({'expression': 'normal'})
    ZoraRiverC000.SetComponentActive({'name': 'pathWalkComp', 'active': False})
    ZoraRiverC000.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="ZoraRiverC000"), 'offsetY': 0.0})
    ZoraRiverC000.SetDefaultFacialExpression({'expression': 'smile'})
    ZoraRiverC000.SetFacialExpression({'expression': 'smile'})
    ZoraRiverC000.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait_swim01'})
    ZoraRiverC000.SetComponentActive({'name': 'aimBlockerComp', 'active': True})
    ZoraRiverC000.AimCompassPoint({'duration': 0.0, 'direction': 0, 'withoutTurn': False, 'immediateTurn': False})
    Audio.SetPlayerVolume({'label': 'PLAYER_SE_ZORA_SWIM', 'duration': 1.0, 'volume': 1.0})
    ZoraRiver006.Destroy()
    ZoraRiver004.Activate()
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    QuestSystem.SetProgress({'symbol': 'Bring_RiverCoast010:2390941959', 'isShowTelopInEvent': False, 'isFrontFade': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
}

void talk030() {
    ZoraRiver006.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver006Talk030_010', 'aimToPlayer': True, 'selfTalkAnimName': 'think01', 'facial': 'sad', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Bring_RiverCoast010_Next000() {
    ZoraRiver006.SetInterestIkEnabled({'enable': False})
    Player.SetInterestIkEnabled({'enable': True})
    Partner[companion].SetInterestIkEnabled({'enable': True})
    ZoraRiver006.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'facial': 'sleep', 'message': 'quest/QuestAreaB:Bring_RiverCoast010_Brought000_060', 'selfTalkAnimName': 'think02', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Brought000_070', 'getAttention': False})
    } {
        ZoraRiver006.LookAtTalkersLinkedPoint({'pointIndex': 0, 'offsetY': 0.0, 'offsetZ': 0.0, 'distanceOffset': -1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0})
    } {
        ZoraRiver006.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraRiver006.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver006.AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        if !ZoraRiver006.InWater() {

            fork {
                Timer.Wait({'time': 0.20000000298023224})
                Player.AimActorLinkedPoint({'pointIndex': 0, 'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiver006"), 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.30000001192092896})
                Partner[companion].AimActorLinkedPoint({'duration': 0.4000000059604645, 'pointIndex': 0, 'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiver006"), 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }

        }
    }


    fork {
        ZoraRiver006.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiver006.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    }


    fork {
        ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Brought000_080', 'getAttention': False})
    } {
        ZoraRiver006.PlayAnimationNoWait({'name': 'yes01,happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver006.SetFacialExpression({'expression': 'smile'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiver006"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiver006"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void Bring_RiverCoast010_Next010() {
    ZoraRiver006.SetInterestIkEnabled({'enable': False})

    fork {
        ZoraRiver006.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'selfTalkAnimName': '', 'message': 'quest/QuestAreaB:Bring_RiverCoast010_Brought010_060', 'selfTalkAnim': False, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Timer.Wait({'time': 0.5})

        fork {
            ZoraRiver006.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ZoraRiver006.SetFacialExpression({'expression': 'angry'})
        }

    }

    Player.SetInterestIkEnabled({'enable': True})
    Partner[companion].SetInterestIkEnabled({'enable': True})

    fork {
        ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Brought010_070', 'getAttention': False})
    } {
        ZoraRiver006.LookAtTalkersLinkedPoint({'pointIndex': 0, 'offsetY': 0.0, 'offsetZ': 0.0, 'distanceOffset': -1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0})
    } {
        ZoraRiver006.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraRiver006.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver006.AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        if !ZoraRiver006.InWater() {

            fork {
                Timer.Wait({'time': 0.20000000298023224})
                Player.AimActorLinkedPoint({'pointIndex': 0, 'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiver006"), 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.30000001192092896})
                Partner[companion].AimActorLinkedPoint({'duration': 0.4000000059604645, 'pointIndex': 0, 'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiver006"), 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }

        }
    }

}

void Bring_RiverCoast010_Next020() {

    fork {
        ZoraRiver006.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'selfTalkAnimName': '', 'message': 'quest/QuestAreaB:Bring_RiverCoast010_Brought020_050', 'selfTalkAnim': False, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Timer.Wait({'time': 0.5})

        fork {
            ZoraRiver006.SetFacialExpression({'expression': 'surprise'})
        } {
            ZoraRiver006.PlayAnimationNoWait({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }

    Player.SetInterestIkEnabled({'enable': True})
    Partner[companion].SetInterestIkEnabled({'enable': True})

    fork {
        ZoraRiver006.Talk({'message': 'quest/QuestAreaB:Bring_RiverCoast010_Brought010_070', 'getAttention': False})
    } {
        ZoraRiver006.LookAtTalkersLinkedPoint({'pointIndex': 0, 'offsetY': 0.0, 'offsetZ': 0.0, 'distanceOffset': -1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0})
    } {
        ZoraRiver006.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraRiver006.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver006.AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        if !ZoraRiver006.InWater() {

            fork {
                Timer.Wait({'time': 0.20000000298023224})
                Player.AimActorLinkedPoint({'pointIndex': 0, 'actor': ActorIdentifier(name="ZoraRiver006"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.30000001192092896})
                Partner[companion].AimActorLinkedPoint({'duration': 0.4000000059604645, 'pointIndex': 0, 'actor': ActorIdentifier(name="ZoraRiver006"), 'withoutTurn': True, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }

        }
    }

}

void Bring_RiverCoast010_Brought010_TL2() {

    call EvResetCommon.AllReset_SensorQuest()

    ZoraRiver006.SetInterestIkEnabled({'enable': False})
    ZoraRiver006.AimActor({'actor': ActorIdentifier(name="Taggler01"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    goto Event156
}
