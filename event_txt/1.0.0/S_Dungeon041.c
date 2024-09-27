-------- EventFlow: S_Dungeon041 --------

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: GerudoSoldier011
entrypoint: None()
actions: ['Talk', 'GenericTalkSequenceWithDialog', 'Destroy', 'PlayAnimationNoWait', 'Deactivate', 'AimPlayer', 'PlayAnimation', 'SetInterestIkEnabled', 'AimActor']
queries: []
params: None

Actor: GerudoSoldier010
entrypoint: None()
actions: ['Talk', 'GenericTalkSequenceWithDialog', 'LookAtGimmicksLinkedPoint', 'AimActorLinkedPoint', 'PlayAnimationNoWait', 'PlayAnimation', 'GenericTalkSequence', 'LookAtTalker', 'AimPlayer', 'AimActor', 'AimCompassPoint']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress', 'AddProgress']
queries: ['CheckProgress']
params: None

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestWarp']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['PlayAnimation', 'MoveToTargetActor', 'AimCompassPoint', 'AimActor', 'WarpToActor']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: GerudoChiefsDaughter
entrypoint: None()
actions: ['Talk', 'Activate', 'SetInterestIkEnabled', 'PlayAnimation', 'SetFacialExpression', 'AimPlayer', 'MoveToBesideTargetActor']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

Actor: GerudoSoldier023
entrypoint: None()
actions: ['Activate', 'SetInterestIkEnabled', 'MoveToBesideTargetActor']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayJingle', 'MuteOnBGM', 'SetPauseAllSE']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: []
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'AimPlayer', 'PlayAnimation', 'PlayAnimationNoWait', 'AimActor', 'MoveToBesideTargetActor', 'WarpToActor', 'AimCompassPoint', 'SetInterestIkEnabled']
queries: []
params: None

void GerudoSolCrackB3() {

    call EvResetCommon.AllReset()

    Audio.SetPauseAllSE({'isPause': False})

    fork {
        Timer.Wait({'time': 2.0})
        Audio.PlayJingle({'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
    } {
        GerudoSoldier011.PlayAnimation({'name': 'search,wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GerudoSoldier011.SetInterestIkEnabled({'enable': False})
    GerudoSoldier011.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/StoryAreaD:DesertProblem_B2_010', 'aimToPlayer': False, 'selfTalkAnimName': 'happy01,wait', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Timer.Wait({'time': 1.0})
    GerudoSoldier011.SetInterestIkEnabled({'enable': True})
    GerudoSoldier011.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        GerudoSoldier011.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GerudoSoldier011.Talk({'message': 'scenario/StoryAreaD:DesertProblem_B2_020', 'getAttention': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="GerudoSoldier011"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }

    GerudoSoldier011.Talk({'message': 'scenario/StoryAreaD:DesertProblem_B2_025', 'getAttention': False})
    GerudoSoldier011.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    GerudoSoldier011.AimActor({'actor': ActorIdentifier(name="GerudoSoldier010"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        GerudoSoldier011.Talk({'message': 'scenario/StoryAreaD:DesertProblem_B2_025_02', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})

        fork {
            Partner.AimActor({'actor': ActorIdentifier(name="GerudoSoldier010"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Player.AimActor({'actor': ActorIdentifier(name="GerudoSoldier010"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    Timer.Wait({'time': 1.0})
    GerudoSoldier011.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.20000000298023224})

    fork {
        Partner.AimActor({'actor': ActorIdentifier(name="GerudoSoldier011"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="GerudoSoldier011"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})
    GerudoSoldier011.PlayAnimationNoWait({'name': 'salute', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvD_DesertCrack_B2'})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})

    call EvResetCommon.AllReset()

    GerudoSoldier011.Deactivate()
    Player.WarpToActor({'distance': 1.5, 'offsetX': -1.5, 'actor': ActorIdentifier(name="GerudoSoldier010"), 'offsetY': 0.0})
    Partner[companion].WarpToActor({'offsetX': -1.5, 'distance': 1.0, 'actor': ActorIdentifier(name="GerudoSoldier010"), 'offsetY': 1.7000000476837158})
    Partner[companion].SetInterestIkEnabled({'enable': True})
    Partner[companion].AimActor({'offsetX': 1.0, 'actor': ActorIdentifier(name="GerudoSoldier010"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoSoldier010.GenericTalkSequence({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'keepPersonalSpace': True, 'cameraLookAt': True, 'selfTalkAnim': False, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    GerudoSoldier010.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/StoryAreaD:DesertProblem_B3_010', 'aimToPlayer': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GerudoSoldier010.PlayAnimation({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier010.AimActorLinkedPoint({'pointIndex': 1, 'actor': ActorIdentifier(name="GerudoSoldier010"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GerudoSoldier010.LookAtGimmicksLinkedPoint({'pointIndex': 1, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    GerudoSoldier010.Talk({'message': 'scenario/StoryAreaD:DesertProblem_B3_020', 'getAttention': False})
    GerudoSoldier010.PlayAnimation({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GerudoSoldier010.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    GerudoSoldier010.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.20000000298023224})
    GerudoSoldier010.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'keepPersonalSpace': True, 'message': 'scenario/StoryAreaD:DesertProblem_B3_030', 'cameraLookAt': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GerudoSoldier010.PlayAnimationNoWait({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    call GeneralSequence.ZeldaTalkMotion()


    fork {
        GerudoSoldier010.Talk({'message': 'scenario/StoryAreaD:DesertProblem_B3_040', 'getAttention': False})
    } {
        GerudoSoldier010.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.5})
    }

    GerudoSoldier010.PlayAnimation({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.20000000298023224})

    fork {

        fork {
            GerudoSoldier010.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaD:DesertProblem_B3_040_02', 'aimFromPlayer': False, 'aimToPlayer': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'playerTalkAnimName': '', 'playerTalkAnim': False, 'selfTalkAnimName': '', 'selfTalkAnim': False, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            GerudoSoldier010.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Timer.Wait({'time': 2.0})
        GerudoSoldier010.PlayAnimation({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.20000000298023224})

        fork {
            GerudoSoldier010.Talk({'message': 'scenario/StoryAreaD:DesertProblem_B3_040_03', 'getAttention': False})
        } {
            GerudoSoldier010.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 0.5})
            GerudoSoldier010.PlayAnimation({'name': 'happy01,wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].SetInterestIkEnabled({'enable': False})
        Partner[companion].MoveToBesideTargetActor({'offsetX': -2.0, 'offsetZ': -1.0, 'actor': ActorIdentifier(name="Partner"), 'speed': 0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Partner[companion].PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.5})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetY': 1.0, 'offsetX': -1.0, 'actor': ActorIdentifier(name="Player"), 'offsetZ': -1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})

    fork {
        Zelda.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].SetInterestIkEnabled({'enable': True})
        Partner[companion].AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaD:DesertProblem_B3_050', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    QuestSystem.SetProgress({'symbol': 'Desert_Crack_B:2065878810', 'isShowTelopInEvent': False, 'isFrontFade': False})
    switch QuestSystem.CheckProgress({'symbol': 'Desert_Crack_A:1015199178'}) {
      case 4294967295:
        QuestSystem.AddProgress({'questKey': 'Desert', 'value': 1, 'isShowTelopInEvent': False, 'isFrontFade': False, 'isForceShowTelop': False})
      case 0:
        if !QuestSystem.CheckProgress({'symbol': 'Desert_Crack_B:2065878810'}) {
            switch QuestSystem.CheckProgress({'symbol': 'Desert_Crack_C:1178789546'}) {
              case 4294967295:
                QuestSystem.AddProgress({'questKey': 'Desert', 'value': 1, 'isShowTelopInEvent': False, 'isFrontFade': False, 'isForceShowTelop': False})
              case 0:
                GerudoChiefsDaughter.Activate()
                GerudoChiefsDaughter.SetInterestIkEnabled({'enable': False})

                fork {
                    GerudoChiefsDaughter.MoveToBesideTargetActor({'speed': 1, 'offsetY': 1.0, 'offsetX': -3.5, 'actor': ActorIdentifier(name="Player"), 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
                } {
                    GerudoSoldier010.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                }


                fork {
                    Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': -1.25, 'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="GerudoChiefsDaughter"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

                    fork {
                        GerudoChiefsDaughter.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                        GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:DesertProblem_All_010', 'getAttention': False})
                    } {
                        Timer.Wait({'time': 0.20000000298023224})
                        Player.AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    } {
                        Timer.Wait({'time': 0.15000000596046448})
                        Partner[companion].AimActor({'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    }

                } {
                    Timer.Wait({'time': 0.20000000298023224})
                    GerudoSoldier010.PlayAnimation({'name': 'salute,wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    Timer.Wait({'time': 0.20000000298023224})
                    GerudoSoldier010.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
                }

                GerudoChiefsDaughter.SetInterestIkEnabled({'enable': False})

                call GeneralSequence.ZeldaTalkMotion()

                GerudoChiefsDaughter.SetFacialExpression({'expression': 'sad'})
                GerudoChiefsDaughter.PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
                GerudoChiefsDaughter.Talk({'message': 'scenario/StoryAreaD:DesertProblem_All_020', 'getAttention': False})
                Audio.MuteOnBGM({'duration': 2.0})
                GerudoChiefsDaughter.SetFacialExpression({'expression': 'normal'})
                GerudoChiefsDaughter.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                GerudoSoldier023.Activate()
                GerudoSoldier023.SetInterestIkEnabled({'enable': False})
                GerudoSoldier023.MoveToBesideTargetActor({'speed': 1, 'offsetZ': 2.0, 'actor': ActorIdentifier(name="GerudoChiefsDaughter"), 'offsetX': -1.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})

                call FieldDesert._DesertProblem_All()

                QuestSystem.SetProgress({'symbol': 'Desert:1907799803', 'isShowTelopInEvent': False, 'isFrontFade': False})
                EventFlags.SetFlag({'value': True, 'symbol': 'EvD_ZeldasMerits'})
            }
        }
    }
}

void DesertCrack_BGrave() {
    Dialog.Show({'message': 'scenario/StoryAreaD:DesertCrack_BGrave_010'})
}

void TopLadderDown() {
    Player.MoveToTargetActor({'speed': 0, 'timeOut': 1.0, 'tolerance': 0.10000000149011612, 'actor': ActorIdentifier(name="Area"), 'distance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Player.AimCompassPoint({'duration': 0.4000000059604645, 'direction': 2, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
    } {
        Player.PlayAnimation({'name': 'ev_ladder_levelin_d', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    if !EventFlags.CheckFlag({'symbol': 'EvD_GraveLamp_Comp'}) {
        Event10:
        GameControl.RequestWarp({'locator': 'SD041_R002_StartLadderE', 'offsetX': 0.0, 'offsetZ': 0.0})
    } else {
        EventFlags.SetFlag({'value': True, 'symbol': 'EvD_GraveLamp_Comp'})
        GerudoSoldier011.Destroy()
        goto Event10
    }
}

void TopLadderDown2() {
    Player.MoveToTargetActor({'speed': 0, 'timeOut': 1.0, 'tolerance': 0.10000000149011612, 'actor': ActorIdentifier(name="Area"), 'distance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Player.AimCompassPoint({'duration': 0.4000000059604645, 'direction': 2, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
    } {
        Player.PlayAnimation({'name': 'ev_ladder_levelin_d', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GameControl.RequestWarp({'locator': 'SD041_R002_StartLadderE', 'offsetX': 0.0, 'offsetZ': 0.0})
}
