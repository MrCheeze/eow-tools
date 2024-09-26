-------- EventFlow: Deku024 --------

Actor: Deku024
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SetTalkerName', 'Destroy', 'PlayAnimationNoWait', 'PlayAnimation', 'SetFacialExpression', 'AimActor', 'SetComponentActive', 'SetInterestIkEnabled', 'LookAtTalker', 'GenericTalkSequence', 'AimCompassPoint']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'AddItem', 'GenericItemGetSequence', 'AimCompassPoint', 'SetInterestIkEnabled', 'WarpToActorLinkedPoint']
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

Actor: Camera
entrypoint: None()
actions: ['LookAt3ActorsCenterAsTalker', 'LookAt2ActorsCenterAsTalker', 'Reset', 'Shake']
queries: []
params: None

Actor: Deku009
entrypoint: None()
actions: ['AimActor', 'Talk', 'PlayAnimationNoWait', 'PlayAnimation', 'SetFacialExpression', 'AimPlayer', 'SetTalkerName', 'GenericTalkSequenceWithDialog', 'Activate', 'WarpToActor', 'Destroy', 'SetComponentActive', 'SetInterestIkEnabled', 'SetActorSwitch', 'SetInstanceVariableBool', 'SetInstanceVariableString']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag']
params: None

Actor: Zelda
entrypoint: None()
actions: ['WarpToActor']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['AimActor', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['WarpToActor', 'AimCompassPoint']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['ResetSensorEventResetContainsActors']
queries: []
params: None

void talk010() {
    Deku024.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkDeku:Deku024Talk010_010', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk040() {

    call EvResetCommon.AllReset()


    fork {
        Timer.Wait({'time': 0.4000000059604645})

        fork {
            Deku009.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Deku009.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku024"), 'offsetX': 0.0, 'duration': 0.4000000059604645, 'boneName': '', 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Deku009.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkDeku:Deku024Talk040_010', 'aimToPlayer': False, 'aimFromPlayer': True, 'cameraLookAt': False, 'selfTalkAnim': False, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Deku009.SetComponentActive({'name': 'DekuSmoothie', 'active': False})
        }

    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku009"), 'actor2': ActorIdentifier(name="Deku024"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Player.SetInterestIkEnabled({'enable': True})
    }

    Deku009.PlayAnimationNoWait({'name': 'wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku024.Talk({'message': 'scenario/GeneralTalkDeku:Deku024Talk040_020', 'getAttention': True})
    Timer.Wait({'time': 1.0})
    Deku009.SetInterestIkEnabled({'enable': False})
    Deku009.PlayAnimationNoWait({'name': 'no01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku009.Talk({'message': 'scenario/GeneralTalkDeku:Deku024Talk040_030', 'getAttention': True})
    Deku009.SetInterestIkEnabled({'enable': True})
    Deku009.SetComponentActive({'name': 'DekuSmoothie', 'active': True})
}

void Quest_HideAndSeek_010() {
    if !EventFlags.CheckMessgaeFlag({'message': 'quest/QuestAreaF:HideAndSeek_Jungle010_010'}) {
        Fade.StartPreset({'preset': 'FadeOutSlowB'})

        call EvResetCommon.AllReset()

        Player.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="Deku024"), 'index': 0, 'offsetY': 0.0})
        Player.AimActor({'actor': ActorIdentifier(name="Deku024"), 'withoutTurn': False, 'duration': 0.0, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.10000000149011612})
        Partner[companion].WarpToActor({'offsetY': -1.0, 'offsetX': 1.0, 'actor': ActorIdentifier(name="Player"), 'distance': 0.0})
        Partner[companion].AimCompassPoint({'duration': 0.0, 'direction': 2, 'withoutTurn': False, 'immediateTurn': False})
        Partner.SetInterestIkEnabled({'enable': True})
        Player.SetInterestIkEnabled({'enable': True})
        Deku024.LookAtTalker({'duration': 0.10000000149011612, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        Deku024.SetInterestIkEnabled({'enable': False})
        Deku009.SetInterestIkEnabled({'enable': False})
        Timer.Wait({'time': 1.0})
        Fade.StartPreset({'preset': 'FadeInSlow'})
        Deku024.SetComponentActive({'active': False, 'name': 'DekuSmoothie'})
        Deku024.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaF:HideAndSeek_Jungle010_010', 'selfTalkAnimName': 'yes01,talk01', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

        fork {
            Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle010_020', 'getAttention': False})
        } {
            Deku024.PlayAnimationNoWait({'name': 'frightened_st01,frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Deku024.SetFacialExpression({'expression': 'sad'})
        }

        Deku009.SetTalkerName({'message': 'glossary/Character:Deku010', 'keep': False})

        fork {
            Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle010_030', 'getAttention': False})
        } {
            Deku024.PlayAnimationNoWait({'name': 'no01,sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Deku024.SetFacialExpression({'expression': 'sleep'})
        }

        Deku024.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku009.SetComponentActive({'active': False, 'name': 'DekuSmoothie'})
        Deku009.AimActor({'actor': ActorIdentifier(name="Deku024"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

        fork {
            Deku009.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle010_040', 'getAttention': False})
        } {
            Deku009.PlayAnimationNoWait({'name': 'find,angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Deku009.SetFacialExpression({'expression': 'angry'})
        } {
            Player.AimActor({'actor': ActorIdentifier(name="Deku009"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Camera.Shake({'power': 3, 'duration': 1.0})
        } {
            Timer.Wait({'time': 0.30000001192092896})
            Partner.AimActor({'actor': ActorIdentifier(name="Deku009"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku009"), 'actor2': ActorIdentifier(name="Deku024"), 'actor3': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Deku009.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

        fork {
            Deku009.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle010_050', 'getAttention': False})
        } {
            Deku009.PlayAnimationNoWait({'name': 'no01,panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Deku024.SetTalkerName({'message': 'glossary/Character:Deku024', 'keep': False})

        fork {
            Deku009.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle010_060', 'getAttention': False})
        } {
            Deku009.PlayAnimationNoWait({'name': 'angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Deku024.AimActor({'actor': ActorIdentifier(name="Deku009"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Deku009.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku024.SetTalkerName({'message': 'glossary/Character:Deku024', 'keep': False})

        fork {
            Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle010_070', 'getAttention': False})
        } {
            Deku024.PlayAnimationNoWait({'name': 'laugh01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Deku024.SetFacialExpression({'expression': 'smile'})
        } {
            Player.AimActor({'actor': ActorIdentifier(name="Deku024"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Partner.AimActor({'actor': ActorIdentifier(name="Deku024"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Deku024.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            Deku009.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle010_080', 'getAttention': False})
        } {
            Deku009.PlayAnimation({'name': 'find,panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Player.AimActor({'actor': ActorIdentifier(name="Deku009"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Deku009.AimActor({'actor': ActorIdentifier(name="Deku024"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.10000000149011612})
            Partner.AimActor({'actor': ActorIdentifier(name="Deku009"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        fork {
            Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle010_090', 'getAttention': False})
        } {
            Deku024.PlayAnimation({'name': 'laugh01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Deku024.SetFacialExpression({'expression': 'smile'})
        } {
            Player.AimActor({'actor': ActorIdentifier(name="Deku024"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner.AimActor({'actor': ActorIdentifier(name="Deku024"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Deku009.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku009.SetFacialExpression({'expression': 'normal'})
        Timer.Wait({'time': 2.0})
        Deku009.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku009.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Deku024.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            Deku009.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle010_100', 'getAttention': False})
        } {
            Deku009.PlayAnimationNoWait({'name': 'tiltyourhead_st,tiltyourhead_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Player.AimActor({'actor': ActorIdentifier(name="Deku009"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Partner.AimActor({'actor': ActorIdentifier(name="Deku009"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Deku009.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku024.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaF:HideAndSeek_Jungle010_110', 'playerTalkAnim': False, 'facial': 'normal', 'selfTalkAnimName': 'yes01,think01', 'cameraLookAt': False, 'keepPersonalSpace': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        if !Dialog.GetLastResult({'resultOnSkip': 1}) {
            Event318:

            fork {
                Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle010_120', 'getAttention': False})
            } {
                Deku024.PlayAnimationNoWait({'name': 'yes02,happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

            Deku024.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Fade.StartPreset({'preset': 'FadeOutSlowB'})
            Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
            Timer.Wait({'time': 1.0})
            Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle010_130', 'getAttention': False})
            Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle010_140', 'getAttention': False})
            GameControl.ResetSensorEventResetContainsActors({'eventReset': False, 'cemeteryRevive': False})
            Deku024.Destroy()
            Deku009.SetComponentActive({'active': False, 'name': 'DekuSmoothie'})
            Deku009.SetComponentActive({'name': 'aimControlComp', 'active': True})
            Deku009.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait01'})
            Fade.StartPreset({'preset': 'FadeInSlow'})
            QuestSystem.SetProgress({'symbol': 'HideAndSeek_Jungle010:3396777547', 'isShowTelopInEvent': False, 'isFrontFade': False})
        } else {

            fork {
                Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle010_150', 'getAttention': False})
            } {
                Deku024.PlayAnimationNoWait({'name': 'yes02,happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

            Deku024.SetComponentActive({'name': 'DekuSmoothie', 'active': True})
            Deku009.SetComponentActive({'name': 'DekuSmoothie', 'active': True})
        }
    } else {

        call EvResetCommon.AllReset()

        Deku024.SetTalkerName({'message': 'glossary/Character:Deku024', 'keep': False})
        Deku024.SetComponentActive({'active': False, 'name': 'DekuSmoothie'})
        Deku024.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'yes01,think01', 'cameraLookAt': True, 'facial': 'smile', 'message': 'quest/QuestAreaF:HideAndSeek_Jungle015_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        if !Dialog.GetLastResult({'resultOnSkip': 1}) {
            goto Event318
        } else {

            fork {
                Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle015_020', 'getAttention': False})
            } {
                Deku024.PlayAnimationNoWait({'name': 'yes02,happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

            Deku024.SetComponentActive({'name': 'DekuSmoothie', 'active': True})
        }
    }
}

void Quest_HideAndSeek_020() {

    call EvResetCommon.AllReset()

    Deku024.AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="Player"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})
    Deku024.SetTalkerName({'message': 'glossary/Character:Deku024', 'keep': False})
    Deku024.SetInterestIkEnabled({'enable': False})
    Deku024.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaF:HideAndSeek_Jungle020_010', 'playerTalkAnim': False, 'selfTalkAnim': True, 'facial': 'sad', 'selfTalkAnimName': 'tiltyourhead_st,tiltyourhead_lp', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor2': ActorIdentifier(name="Deku024"), 'actor1': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Event160:

    fork {
        Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle020_030', 'getAttention': False})
    } {
        Deku024.SetFacialExpression({'expression': 'sleep'})
    } {
        Deku024.PlayAnimationNoWait({'name': 'no01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle020_040', 'getAttention': False})
    } {
        Deku024.SetFacialExpression({'expression': 'normal'})
    } {
        Deku024.PlayAnimationNoWait({'name': 'yes02,happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Deku024.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Timer.Wait({'time': 1.0})
    Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle020_050', 'getAttention': False})
    Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle020_060', 'getAttention': False})
    Deku024.Destroy()
    Fade.StartPreset({'preset': 'FadeInSlow'})
    QuestSystem.SetProgress({'symbol': 'HideAndSeek_Jungle010:3780896136', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Quest_HideAndSeek_030() {

    call EvResetCommon.AllReset()

    Deku024.AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="Player"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})
    Deku024.SetTalkerName({'message': 'glossary/Character:Deku024', 'keep': False})
    Deku024.SetInterestIkEnabled({'enable': False})
    Deku024.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaF:HideAndSeek_Jungle030_010', 'aimToPlayer': True, 'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': 'surprised_st01,surprised_lp01', 'facial': 'surprise', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Deku024"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Event168:

    fork {
        Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle030_030', 'getAttention': False})
    } {
        Deku024.SetFacialExpression({'expression': 'sad'})
    } {
        Deku024.PlayAnimationNoWait({'name': 'frightened_st01,frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle030_040', 'getAttention': False})
    } {
        Deku024.SetFacialExpression({'expression': 'normal'})
    } {
        Deku024.PlayAnimationNoWait({'name': 'yes02,happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Deku024.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Timer.Wait({'time': 1.0})
    Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle030_050', 'getAttention': False})
    Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle030_060', 'getAttention': False})
    Deku024.Destroy()
    Fade.StartPreset({'preset': 'FadeInSlow'})
    QuestSystem.SetProgress({'symbol': 'HideAndSeek_Jungle010:4164998345', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Quest_HideAndSeek_040() {

    call EvResetCommon.AllReset()

    Deku024.AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="Player"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})
    Deku024.SetTalkerName({'message': 'glossary/Character:Deku024', 'keep': False})
    Deku024.SetInterestIkEnabled({'enable': False})
    Deku024.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaF:HideAndSeek_Jungle040_010', 'playerTalkAnim': False, 'facial': 'sleep', 'selfTalkAnim': True, 'selfTalkAnimName': 'sad01', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Deku024"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Event176:

    fork {
        Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle040_030', 'getAttention': False})
    } {
        Deku024.PlayAnimationNoWait({'name': 'no01,angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku024.SetFacialExpression({'expression': 'angry'})
    }


    fork {
        Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle040_040', 'getAttention': False})
    } {
        Deku024.PlayAnimationNoWait({'name': 'find,happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Deku024.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Timer.Wait({'time': 1.0})
    Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle040_050', 'getAttention': False})
    Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle040_060', 'getAttention': False})
    Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle040_070', 'getAttention': False})
    Deku024.Destroy()
    Fade.StartPreset({'preset': 'FadeInSlow'})
    QuestSystem.SetProgress({'symbol': 'HideAndSeek_Jungle010:3070312974', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Quest_HideAndSeek_050() {

    call EvResetCommon.AllReset()

    Timer.Wait({'time': 0.800000011920929})
    Deku024.AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="Player"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})
    Event75:
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    Deku024.AimCompassPoint({'withoutTurn': False, 'direction': 0, 'duration': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.10000000149011612})
    Zelda.WarpToActor({'distance': 3.0, 'actor': ActorIdentifier(name="Deku024"), 'offsetX': -1.5, 'offsetY': 0.0})
    Partner[companion].WarpToActor({'offsetY': 1.0, 'distance': 3.0, 'actor': ActorIdentifier(name="Deku024"), 'offsetX': -0.5})
    Player.AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    Partner[companion].AimCompassPoint({'duration': 0.0, 'direction': 2, 'withoutTurn': False, 'immediateTurn': False})
    Partner.SetInterestIkEnabled({'enable': True})
    Deku009.SetActorSwitch({'value': True, 'switchIndex': 0})
    Deku009.Activate()
    Deku009.WarpToActor({'offsetY': 0.0, 'distance': 0.0, 'actor': ActorIdentifier(name="Deku024"), 'offsetX': -2.5})
    Deku024.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Deku009.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Deku024"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Deku024.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku009.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku024.LookAtTalker({'duration': 0.10000000149011612, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 0.5})
    Deku009.SetComponentActive({'name': 'DekuSmoothie', 'active': False})
    Player.SetInterestIkEnabled({'enable': True})
    Partner.SetInterestIkEnabled({'enable': True})
    Deku024.SetInterestIkEnabled({'enable': False})
    Deku009.SetInterestIkEnabled({'enable': False})
    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku009"), 'actor2': ActorIdentifier(name="Deku024"), 'actor3': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    Deku024.SetTalkerName({'message': 'glossary/Character:Deku024', 'keep': False})
    Deku009.SetTalkerName({'message': 'glossary/Character:Deku010', 'keep': False})
    Deku024.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': 'sad01', 'message': 'quest/QuestAreaF:HideAndSeek_Jungle050_010', 'facial': 'sad', 'cameraLookAt': False, 'keepPersonalSpace': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle050_020', 'getAttention': False})
    } {
        Deku024.PlayAnimationNoWait({'name': 'tiltyourhead_st,tiltyourhead_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku024.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle050_030', 'getAttention': False})
    } {
        Deku024.PlayAnimationNoWait({'name': 'find,angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku024.SetFacialExpression({'expression': 'angry'})
    }

    Deku009.AimActor({'actor': ActorIdentifier(name="Deku024"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Deku009.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle050_040', 'getAttention': False})
    } {
        Deku009.PlayAnimationNoWait({'name': 'find,laugh01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku024.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku009"), 'actor2': ActorIdentifier(name="Deku024"), 'actor3': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="Deku009"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'actor': ActorIdentifier(name="Deku009"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku024.AimActor({'actor': ActorIdentifier(name="Deku009"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Deku009.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle050_050', 'getAttention': False})
    } {
        Deku009.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle050_060', 'getAttention': False})
    } {
        Deku024.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="Deku024"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'actor': ActorIdentifier(name="Deku024"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku009.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 2.0})

    fork {
        Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle050_070', 'getAttention': False})
    } {
        Deku024.PlayAnimationNoWait({'name': 'find,panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku024.SetFacialExpression({'expression': 'sleep'})
    }

    Timer.Wait({'time': 2.0})
    Deku024.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku009.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle050_080', 'getAttention': False})
    } {
        Deku009.PlayAnimationNoWait({'name': 'tiltyourhead_st,tiltyourhead_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku009.SetFacialExpression({'expression': 'sleep'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="Deku009"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'actor': ActorIdentifier(name="Deku009"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle050_090', 'getAttention': False})
    } {
        Deku024.PlayAnimationNoWait({'name': 'no01,sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku024.SetFacialExpression({'expression': 'normal'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="Deku024"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'actor': ActorIdentifier(name="Deku024"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku009.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle050_100', 'getAttention': False})
    } {
        Deku024.PlayAnimationNoWait({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku024.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle050_110', 'getAttention': False})
    } {
        Deku024.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Camera.Shake({'power': 3, 'duration': 1.0})
    }

    Timer.Wait({'time': 2.0})

    fork {
        Deku009.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle050_120', 'getAttention': False})
    } {
        Deku009.PlayAnimation({'name': 'no01,happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku009.SetFacialExpression({'expression': 'normal'})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="Deku009"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Deku009.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle050_130', 'getAttention': False})
    } {
        Deku009.PlayAnimation({'name': 'yes01,angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku009.SetFacialExpression({'expression': 'sad01'})
    }


    fork {
        Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle050_140', 'getAttention': False})
    } {
        Deku024.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku024.SetFacialExpression({'expression': 'surprise'})
    } {
        Deku009.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="Deku024"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'actor': ActorIdentifier(name="Deku024"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 1.0})
    Deku024.PlayAnimation({'name': 'down_st,down_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Deku009.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Deku009.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'quest/QuestAreaF:HideAndSeek_Jungle050_150', 'selfTalkAnimName': 'yes01,happy01', 'cameraLookAt': False, 'keepPersonalSpace': False, 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Deku009.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.AddItem({'autoEquip': False, 'itemKey': 'Ornament12', 'count': 1, 'index': -1})
    Player.GenericItemGetSequence({'itemKey': 'Ornament12', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku009"), 'actor2': ActorIdentifier(name="Deku024"), 'actor3': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle050_170', 'getAttention': False})
    } {
        Deku009.AimActor({'actor': ActorIdentifier(name="Deku024"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="Deku024"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'actor': ActorIdentifier(name="Deku024"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Player.SetInterestIkEnabled({'enable': True})
    Partner.SetInterestIkEnabled({'enable': True})

    fork {
        Deku009.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle050_180', 'getAttention': False})
    } {
        Deku009.PlayAnimationNoWait({'name': 'tiltyourhead_st,tiltyourhead_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku009.SetFacialExpression({'expression': 'sad'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Deku024.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle050_190', 'getAttention': False})
    } {
        Deku024.PlayAnimationNoWait({'name': 'no01,sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku024.SetFacialExpression({'expression': 'sad'})
    } {
        Deku009.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku024"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'actor': ActorIdentifier(name="Deku024"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Deku009.Talk({'message': 'quest/QuestAreaF:HideAndSeek_Jungle050_200', 'getAttention': False})
    } {
        Deku009.PlayAnimationNoWait({'name': 'yes01,happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku009.SetFacialExpression({'expression': 'smile'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    Deku024.Destroy()
    Deku009.SetActorSwitch({'switchIndex': 0, 'value': False})
    Deku009.Destroy()
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    QuestSystem.SetProgress({'symbol': 'HideAndSeek_Jungle010:4045704806', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Quest_HideAndSeek_After024() {

    call EvResetCommon.AllReset()

    Deku024.SetInterestIkEnabled({'enable': False})
    Deku009.SetInterestIkEnabled({'enable': False})
    Deku024.AimActor({'actor': ActorIdentifier(name="Deku009"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Deku024.GenericTalkSequence({'aimToPlayer': False, 'selfTalkAnim': False, 'playerTalkAnim': False, 'cameraLookAt': False, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    } {
        Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku009"), 'actor2': ActorIdentifier(name="Deku024"), 'actor3': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    Deku024.SetComponentActive({'active': False, 'name': 'DekuSmoothie'})

    fork {
        Deku024.Talk({'message': 'scenario/GeneralTalkDeku:Deku009Talk040_010', 'getAttention': False})
    } {
        Deku024.PlayAnimationNoWait({'name': 'find,panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku024.SetFacialExpression({'expression': 'sad'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Deku009.AimActor({'actor': ActorIdentifier(name="Deku024"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku024"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku024"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku024.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku009.SetComponentActive({'active': False, 'name': 'DekuSmoothie'})

    fork {
        Deku009.Talk({'message': 'scenario/GeneralTalkDeku:Deku009Talk040_020', 'getAttention': False})
    } {
        Deku009.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku024.SetFacialExpression({'expression': 'sad'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="Deku009"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'actor': ActorIdentifier(name="Deku009"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku009.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku024.Talk({'message': 'scenario/GeneralTalkDeku:Deku009Talk040_030', 'getAttention': False})
    } {
        Deku024.PlayAnimationNoWait({'name': 'find,happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku024.SetFacialExpression({'expression': 'smile'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku024"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku024"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Deku009.Talk({'message': 'scenario/GeneralTalkDeku:Deku009Talk040_040', 'getAttention': False})
    } {
        Deku009.PlayAnimationNoWait({'name': 'no01,think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku024.SetFacialExpression({'expression': 'sad'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="Deku009"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner.AimActor({'actor': ActorIdentifier(name="Deku009"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku009.SetInstanceVariableBool({'name': 'questFinishTalk', 'value': True})
    Deku024.SetComponentActive({'name': 'DekuSmoothie', 'active': True})
    Deku009.SetComponentActive({'name': 'DekuSmoothie', 'active': True})
}

void Quest_HideAndSeek_050_talk() {

    call EvResetCommon.AllReset()

    Deku024.AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="Player"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    goto Event75
}

void Quest_HideAndSeek_040_talk() {

    call EvResetCommon.AllReset()

    Deku024.SetTalkerName({'message': 'glossary/Character:Deku024', 'keep': False})
    Deku024.SetInterestIkEnabled({'enable': False})
    Deku024.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaF:HideAndSeek_Jungle040_010', 'playerTalkAnim': False, 'facial': 'sleep', 'selfTalkAnim': True, 'selfTalkAnimName': 'sad01', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    goto Event176
}

void Quest_HideAndSeek_030_talk() {

    call EvResetCommon.AllReset()

    Deku024.SetTalkerName({'message': 'glossary/Character:Deku024', 'keep': False})
    Deku024.SetInterestIkEnabled({'enable': False})
    Deku024.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaF:HideAndSeek_Jungle030_010', 'aimToPlayer': True, 'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': 'surprised_st01,surprised_lp01', 'facial': 'surprise', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    goto Event168
}

void Quest_HideAndSeek_020_talk() {

    call EvResetCommon.AllReset()

    Deku024.SetTalkerName({'message': 'glossary/Character:Deku024', 'keep': False})
    Deku024.SetInterestIkEnabled({'enable': False})
    Deku024.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaF:HideAndSeek_Jungle020_010', 'playerTalkAnim': False, 'selfTalkAnim': True, 'facial': 'sad', 'selfTalkAnimName': 'tiltyourhead_st,tiltyourhead_lp', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    goto Event160
}
