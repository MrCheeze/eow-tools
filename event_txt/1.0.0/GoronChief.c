-------- EventFlow: GoronChief --------

Actor: Partner
entrypoint: None()
actions: ['MoveToDefaultPosition']
queries: []
params: None

Actor: GoronChief
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimationNoWait', 'PlayAnimationEx', 'AimDegreeAngle', 'PlayAnimation', 'SetFacialExpression', 'Destroy', 'SetInstanceVariableBool', 'AimPlayer', 'KeepAnimationAfterEvent', 'SetDefaultFacialExpression', 'GenericTalkSequence', 'AimActor', 'SetInterestIkEnabled', 'SetComponentActive', 'SkipAutoTurn', 'ResetFacialExpression', 'AimActorLinkedPoint', 'SetInstanceVariableString', 'SetRestartPositionToLinkedPoint']
queries: ['GetInstanceVariableBool']
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJumpInCurrentLevel', 'RequestLevelJump']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckMessgaeFlag']
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['CheckProgress']
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Shake', 'LookAt2ActorsCenterAsTalker', 'Reset']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['GenericItemGetSequence', 'AddItem', 'PlayAnimationNoWait']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor', 'PlayAnimationNoWait', 'PlayAnimation']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE', 'SetBGMVolume']
queries: []
params: None

void talk() {
    GoronChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'scenario/GeneralTalkGoron:GoronChiefTalk010_010', 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GoronChief.PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/GeneralTalkGoron:GoronChiefTalk010_020', 'getAttention': False})
}

void talk020() {
    GoronChief.GenericTalkSequenceWithDialog({'selfTalkAnimName': 'think01', 'aimToPlayer': False, 'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGoron:GoronChiefTalk020_010', 'selfTalkAnim': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GoronChief.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/GeneralTalkGoron:GoronChiefTalk020_020', 'getAttention': False})
    GoronChief.SetInstanceVariableString({'name': 'idleAnim', 'value': 'think01'})
}

void talk030() {

    call EvResetCommon.AllReset()

    Player.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    if !GoronChief.GetInstanceVariableBool({'name': 'talk030'}) {
        GoronChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'scenario/StoryAreaC:HelpCarryRock_050', 'aimToPlayer': False, 'selfTalkAnimName': 'think01', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        GoronChief.SetInstanceVariableBool({'name': 'talk030', 'value': True})
        Event75:
        if !EventFlags.CheckMessgaeFlag({'message': 'scenario/GeneralTalkGoron:GoronChiefTalk030_010'}) {

            fork {
                GoronChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                GoronChief.Talk({'message': 'scenario/GeneralTalkGoron:GoronChiefTalk030_010', 'getAttention': False})
            } {
                GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }


            fork {
                GoronChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                GoronChief.Talk({'message': 'scenario/GeneralTalkGoron:GoronChiefTalk030_020', 'getAttention': False})
            } {
                GoronChief.SetFacialExpression({'expression': 'smile'})
            }


            fork {
                GoronChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                GoronChief.Talk({'message': 'scenario/GeneralTalkGoron:GoronChiefTalk030_030', 'getAttention': False})
            } {
                GoronChief.ResetFacialExpression()
            }


            fork {
                GoronChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                GoronChief.Talk({'message': 'scenario/GeneralTalkGoron:GoronChiefTalk030_040', 'getAttention': False})
            }

            GoronChief.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            GoronChief.AimDegreeAngle({'angle': 135.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
            GoronChief.SkipAutoTurn()
        } else {

            fork {
                GoronChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                GoronChief.Talk({'message': 'scenario/GeneralTalkGoron:GoronChiefTalk030Again_010', 'getAttention': False})
            } {
                GoronChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

            if !Dialog.GetLastResult({'resultOnSkip': 1}) {

                fork {
                    GoronChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                } {
                    GoronChief.Talk({'message': 'scenario/GeneralTalkGoron:GoronChiefTalk030Again_020', 'getAttention': False})
                } {
                    GoronChief.SetFacialExpression({'expression': 'smile'})
                }


                fork {
                    GoronChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
                } {
                    GoronChief.Talk({'message': 'scenario/GeneralTalkGoron:GoronChiefTalk030Again_030', 'getAttention': False})
                } {
                    GoronChief.ResetFacialExpression()
                }


                fork {
                    GoronChief.AimDegreeAngle({'angle': 150.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
                } {
                    Fade.StartPreset({'preset': 'FadeOutNormalB'})
                }

                GameControl.RequestLevelJumpInCurrentLevel({'locator': 'S_Dungeon019_restart', 'offsetX': 0.0, 'offsetZ': 0.0})
            } else {

                fork {
                    GoronChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                } {
                    GoronChief.Talk({'message': 'scenario/GeneralTalkGoron:GoronChiefTalk030_030', 'getAttention': False})
                }


                fork {
                    GoronChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
                } {
                    GoronChief.Talk({'message': 'scenario/GeneralTalkGoron:GoronChiefTalk030_040', 'getAttention': False})
                }

                GoronChief.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                GoronChief.AimDegreeAngle({'angle': 135.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
                GoronChief.SkipAutoTurn()
            }
        }
    } else
    goto Event75
}

void talk040() {

    fork {
        GoronChief.GenericTalkSequenceWithDialog({'selfTalkAnimName': 'think01', 'playerTalkAnim': False, 'message': 'scenario/StoryAreaC:VolcanoPointATroubleClear_230', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'VO_GORON_CHIEF_003', 'volume': 1.0, 'pitch': 1.0})
    }

    GoronChief.SkipAutoTurn()
}

void talk050() {
    GoronChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'think01', 'message': 'scenario/GeneralTalkGoron:GoronChiefTalk050_010', 'facial': 'sad', 'aimToPlayer': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GoronChief.SetDefaultFacialExpression({'expression': 'sad'})
    GoronChief.KeepAnimationAfterEvent()
}

void talk060() {
    GoronChief.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleClear_180', 'playerTalkAnim': False, 'selfTalkAnimName': 'think01', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GoronChief.PlayAnimationEx({'time': 0.0, 'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleClear_190', 'getAttention': False})
}

void talk070() {
    GoronChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'scenario/GeneralTalkGoron:GoronChiefTalk070_010', 'aimToPlayer': True, 'selfTalkAnimName': '', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GoronChief.Talk({'message': 'scenario/GeneralTalkGoron:GoronChiefTalk070_020', 'getAttention': False})
}

void talk080() {
    GoronChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'happy', 'message': 'scenario/StoryAreaC:GoronChiefFistBump_250', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk090() {
    GoronChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGoron:GoronChiefTalk090_005', 'absorbAllPastedActors': False, 'keepPersonalSpace': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GoronChief.Talk({'message': 'scenario/GeneralTalkGoron:GoronChiefTalk090_010', 'getAttention': False})
}

void talk100() {
    GoronChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'scenario/GeneralTalkGoron:GoronChiefTalk100_010', 'selfTalkAnimName': 'happy', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GoronChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/GeneralTalkGoron:GoronChiefTalk100_020', 'getAttention': False})
    GoronChief.SetFacialExpression({'expression': 'smile'})
    GoronChief.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.Talk({'message': 'scenario/GeneralTalkGoron:GoronChiefTalk100_030', 'getAttention': False})
}

void VolcanoPointBTroubleClear() {

    call EvResetCommon.AllReset()

    Timer.Wait({'time': 0.75})
    GoronChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'message': 'scenario/StoryAreaC:VolcanoPointBTroubleClear_000', 'selfTalkAnimName': 'surprised_st,surprised_lp', 'facial': 'surprise', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:VolcanoPointBTroubleClear_001', 'getAttention': False})
    } {
        GoronChief.PlayAnimation({'name': 'surprised_ed,happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.SetFacialExpression({'expression': 'smile'})
    }

    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    GameControl.RequestLevelJump({'level': 'S_Dungeon020', 'locator': 'VolcanoPointBTroubleClear', 'offsetX': 0.0, 'offsetZ': 0.0})
    EventFlags.SetFlag({'value': True, 'symbol': 'Volcano_VolcanoPointB'})
}

void talk055() {
    GoronChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'scenario/StoryAreaC:VolcanoPointBTroubleTactics_090', 'selfTalkAnimName': 'no,think02', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Quest_1() {

    call EvResetCommon.AllReset()

    GoronChief.GenericTalkSequence({'playerTalkAnim': False, 'aimToPlayer': False, 'selfTalkAnim': False, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    GoronChief.PlayAnimation({'name': 'wait_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.10000000149011612})
    GoronChief.SetComponentActive({'active': True, 'name': 'aimControlComp'})
    GoronChief.SetInterestIkEnabled({'enable': True})
    GoronChief.AimActorLinkedPoint({'duration': 0.4000000059604645, 'withoutTurn': True, 'pointIndex': 0, 'actor': ActorIdentifier(name="GoronChief"), 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})

    fork {
        GoronChief.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaC:Golem_Valcano010_010', 'aimToPlayer': True, 'playerTalkAnim': False, 'aimFromPlayer': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'facial': 'surprise', 'selfTalkAnim': True, 'selfTalkAnimName': 'surprised_st_nostoneslab,surprised_lp_nostoneslab', 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'duration': 0.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetY': 0.949999988079071, 'actor2': ActorIdentifier(name="Player"), 'actor1': ActorIdentifier(name="GoronChief"), 'weight1': 1.0, 'weight2': 1.0, 'offsetX': 0.0, 'offsetZ': 0.0})
    }

    switch QuestSystem.CheckProgress({'symbol': 'Golem_Valcano010:3590350612'}) {
      case [4294967295, 1]:
        GoronChief.PlayAnimation({'name': 'surprised_ed_nostoneslab,wait_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EventFlags.SetFlag({'symbol': 'Mc066GC_First', 'value': True})
        Event73:
        GoronChief.SetInterestIkEnabled({'enable': False})

        fork {
            GoronChief.PlayAnimationNoWait({'name': 'no_nostoneslab,talk_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GoronChief.Talk({'message': 'quest/QuestAreaC:Golem_Valcano010_020', 'getAttention': False})
        } {
            GoronChief.SetFacialExpression({'expression': 'sad'})
        }

        GoronChief.PlayAnimationNoWait({'name': 'wait_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.AimDegreeAngle({'duration': 0.4000000059604645, 'angle': 210.0, 'withoutTurn': False, 'immediateTurn': False})

        fork {
            GoronChief.PlayAnimationNoWait({'name': 'yes_nostoneslab,think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GoronChief.Talk({'message': 'quest/QuestAreaC:Golem_Valcano010_030', 'getAttention': False})
        } {
            GoronChief.SetFacialExpression({'expression': 'normal'})
        }

        Audio.SetBGMVolume({'volume': 0.20000000298023224, 'duration': 0.30000001192092896})
        Audio.PlayOneshotSystemSE({'label': 'STRM_SE_ENEMY_FIRE_GOLEM_ROAR', 'volume': 1.0, 'pitch': 1.0})
        Timer.Wait({'time': 0.10000000149011612})

        fork {
            GoronChief.PlayAnimation({'name': 'surprised_st_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
            GoronChief.PlayAnimationNoWait({'name': 'curl_up_st,wait_curl', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Camera.Shake({'power': 3, 'duration': 3.0})
        } {
            GoronChief.SetFacialExpression({'expression': 'surprise'})
        } {
            Timer.Wait({'time': 0.5})
            Player.PlayAnimationNoWait({'name': 'search', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner[companion].PlayAnimationNoWait({'name': 'panic', 'restart': False, 'layer': 0, 'blendFrame': -1})
            Timer.Wait({'time': 1.0})
            Partner[companion].PlayAnimation({'restart': False, 'name': 'lookaround,wait', 'layer': 0, 'blendFrame': -1})
        }

        Timer.Wait({'time': 0.800000011920929})
        Player.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.20000000298023224})
        Timer.Wait({'time': 2.0})
        GoronChief.PlayAnimation({'name': 'curl_up_ed,wait_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Audio.SetBGMVolume({'duration': 0.30000001192092896, 'volume': 1.0})
        GoronChief.AimActor({'duration': 0.4000000059604645, 'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 1.0})

        fork {
            GoronChief.Talk({'message': 'quest/QuestAreaC:Golem_Valcano010_032', 'getAttention': False})
        } {
            GoronChief.PlayAnimationNoWait({'name': 'yes_nostoneslab,wait_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            GoronChief.PlayAnimationNoWait({'name': 'talk_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GoronChief.Talk({'message': 'quest/QuestAreaC:Golem_Valcano010_040', 'getAttention': False})
        } {
            GoronChief.SetFacialExpression({'expression': 'sad'})
        }

        GoronChief.SetFacialExpression({'expression': 'sleep'})
        GoronChief.PlayAnimationNoWait({'name': 'no_nostoneslab,think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.Talk({'message': 'quest/QuestAreaC:Golem_Valcano010_050', 'getAttention': False})
        Timer.Wait({'time': 1.0})

        fork {
            GoronChief.Talk({'message': 'quest/QuestAreaC:Golem_Valcano010_060', 'getAttention': False})
        } {
            GoronChief.PlayAnimationNoWait({'name': 'happy_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GoronChief.SetFacialExpression({'expression': 'surprise'})
        }


        fork {
            GoronChief.SetFacialExpression({'expression': 'sleep'})
        } {
            GoronChief.Talk({'message': 'quest/QuestAreaC:Golem_Valcano010_070', 'getAttention': False})
        } {
            GoronChief.PlayAnimationNoWait({'name': 'no_nostoneslab,think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        QuestSystem.SetProgress({'symbol': 'Golem_Valcano010:3211895514', 'isShowTelopInEvent': False, 'isFrontFade': False})
        GoronChief.PlayAnimationNoWait({'name': 'wait_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronChief.AimDegreeAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'angle': 210.0, 'immediateTurn': False})
      case 0:
        Player.PlayAnimationNoWait({'name': 'talk_hand', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            GoronChief.PlayAnimationNoWait({'name': 'surprised_ed_nostoneslab,wait_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GoronChief.SetFacialExpression({'expression': 'normal'})
        }

        Timer.Wait({'time': 2.0})
        Player.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.5})

        fork {
            GoronChief.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            GoronChief.SetFacialExpression({'expression': 'sad'})
        } {
            GoronChief.Talk({'message': 'quest/QuestAreaC:Golem_Valcano010_012', 'getAttention': False})
        }

        goto Event73
    }
}

void Quest_2() {

    call EvResetCommon.AllReset()

    GoronChief.SetInterestIkEnabled({'enable': False})
    GoronChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaC:Golem_Valcano010_080', 'facial': 'sad', 'selfTalkAnimName': 'no_nostoneslab,think01', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        GoronChief.Talk({'message': 'quest/QuestAreaC:Golem_Valcano010_090', 'getAttention': False})
    } {
        GoronChief.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.SetFacialExpression({'expression': 'sleep'})
    }

    GoronChief.SetFacialExpression({'expression': 'normal'})
    GoronChief.PlayAnimationNoWait({'name': 'wait_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronChief.AimDegreeAngle({'duration': 0.4000000059604645, 'withoutTurn': False, 'angle': 210.0, 'immediateTurn': False})
}

void Quest_end() {

    call EvResetCommon.AllReset()

    GoronChief.SetInterestIkEnabled({'enable': False})
    GoronChief.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'message': 'quest/QuestAreaC:Golem_Valcano020_010', 'aimToPlayer': True, 'playerTalkAnim': False, 'cameraLookAt': True, 'keepPersonalSpace': True, 'facial': '', 'selfTalkAnimName': 'talk_nostoneslab', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        GoronChief.Talk({'message': 'quest/QuestAreaC:Golem_Valcano020_020', 'getAttention': False})
    } {
        GoronChief.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        GoronChief.SetFacialExpression({'expression': 'normal'})
    } {
        GoronChief.PlayAnimationNoWait({'name': 'wait_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Player.PlayAnimationNoWait({'name': 'talk_hand', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Player.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})

    fork {
        GoronChief.SetFacialExpression({'expression': 'surprise'})
    } {
        GoronChief.PlayAnimationNoWait({'name': 'surprised_st_nostoneslab,surprised_lp_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.Talk({'message': 'quest/QuestAreaC:Golem_Valcano020_030', 'getAttention': False})
    }

    GoronChief.PlayAnimation({'name': 'surprised_ed_nostoneslab,wait_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GoronChief.PlayAnimationNoWait({'name': 'no_nostoneslab,think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.Talk({'message': 'quest/QuestAreaC:Golem_Valcano020_040', 'getAttention': False})
    } {
        GoronChief.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        GoronChief.Talk({'message': 'quest/QuestAreaC:Golem_Valcano020_050', 'getAttention': False})
    } {
        GoronChief.SetFacialExpression({'expression': 'sad'})
    } {
        GoronChief.PlayAnimationNoWait({'name': 'yes_nostoneslab,wait_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        GoronChief.Talk({'message': 'quest/QuestAreaC:Golem_Valcano020_080', 'getAttention': False})
    } {
        GoronChief.PlayAnimationNoWait({'name': 'happy_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronChief.SetFacialExpression({'expression': 'smile'})
    }


    fork {
        GoronChief.Talk({'message': 'quest/QuestAreaC:Golem_Valcano020_090', 'getAttention': False})
    } {
        GoronChief.PlayAnimationNoWait({'name': 'yes_nostoneslab,talk_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GoronChief.PlayAnimationNoWait({'name': 'wait_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.AddItem({'count': 1, 'itemKey': 'Ornament02', 'index': -1, 'autoEquip': False})
    Player.GenericItemGetSequence({'itemKey': 'Ornament02', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})

    fork {
        Partner.MoveToDefaultPosition({'speed': 1, 'avoidWall': True, 'avoidPlayer': True, 'position': 3, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="GoronChief"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        GoronChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'keepPersonalSpace': False, 'cameraLookAt': True, 'facial': 'smile', 'selfTalkAnimName': 'yes_nostoneslab,happy_nostoneslab', 'message': 'quest/QuestAreaC:Golem_Valcano020_095', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }


    fork {
        GoronChief.Talk({'message': 'quest/QuestAreaC:Golem_Valcano020_100', 'getAttention': False})
    } {
        GoronChief.PlayAnimationNoWait({'name': 'talk_nostoneslab', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    GoronChief.Destroy()
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    QuestSystem.SetProgress({'symbol': 'Golem_Valcano010:2216925943', 'isShowTelopInEvent': False, 'isFrontFade': False})
    GoronChief.SetRestartPositionToLinkedPoint({'direction': 2, 'pointIndex': 1, 'stance': 'Ground'})
}

void talk065() {
    GoronChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'think02', 'aimFromPlayer': True, 'message': 'scenario/GeneralTalkGoron:GoronChiefTalk065_010', 'aimToPlayer': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk067() {
    GoronChief.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': False, 'message': 'scenario/StoryAreaC:HowToGetToOtherSide_020', 'selfTalkAnimName': 'talk_stoneslab', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        GoronChief.Talk({'message': 'scenario/StoryAreaC:HowToGetToOtherSide_030', 'getAttention': False})
    } {
        GoronChief.PlayAnimationNoWait({'name': 'think03', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void Quest_2_5() {
    QuestSystem.SetProgress({'symbol': 'Golem_Valcano010:2489119001', 'isShowTelopInEvent': False, 'isFrontFade': False})
}
