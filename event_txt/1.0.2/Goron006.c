-------- EventFlow: Goron006 --------

Actor: Goron006
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimationNoWait', 'SetFacialExpression', 'WarpToActorLinkedPoint', 'PlayAnimation', 'AimCompassPoint', 'Activate', 'LookAtGimmicksLinkedPoint', 'SetTalkerName', 'SkipAutoTurn', 'WarpToActorLinkedPointWithCompassPoint', 'ResetFacialExpression', 'AimPlayer', 'ActiveteAllLinkedActors', 'DeactiveteAllLinkedActors', 'LookAtTalker', 'PlayOneshotSE', 'SetInterestIkEnabled', 'SetInstanceVariableBool', 'Deactivate', 'GenericTalkSequence']
queries: ['GetInstanceVariableBool']
params: None

Actor: Dialog
entrypoint: None()
actions: ['Show', 'ShowTalker']
queries: ['GetLastResult', 'GetLastResult4']
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset', 'StartParam']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimCompassPoint', 'WarpToActorWithCompassPoint', 'AbsorbAllPastedActors', 'ResetVelocity', 'SetGravityEnable', 'AimDegreeAngle', 'WarpToActorLinkedPoint']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag']
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'Reset']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['CheckProgress', 'GetStatus']
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump', 'RequestLevelJumpInCurrentLevel', 'ForbidSave', 'UnforbidSave', 'RequestAutoSave']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AddItemAndGenericItemGetSequence']
queries: []
params: None

Actor: Hud
entrypoint: None()
actions: ['HideGameQuitHelp', 'ShowGameQuitHelp', 'SetEventSkipViewAlways']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['StopRegionBgm', 'Prepare', 'PlayBGM', 'StopAllBGM', 'PlayZoneBGM', 'SetBGMVolume', 'SetPlayerVolume']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['SetCanSkip', 'CloseSkippableScope']
queries: []
params: None

Actor: QuestCheckpoint
entrypoint: None()
actions: ['SetInstanceVariableBool']
queries: []
params: None

Actor: Sync
entrypoint: None()
actions: ['SyncReset']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimCompassPoint', 'WarpToDefaultPosition', 'AimActor', 'WarpToActor', 'MoveToTargetActor']
queries: []
params: None

void talk010() {
    Goron006.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'scenario/GeneralTalkGoron:Goron006Talk010_010', 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Goron006.SetFacialExpression({'expression': 'sad'})
    Goron006.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron006.Talk({'message': 'scenario/GeneralTalkGoron:Goron006Talk010_020', 'getAttention': False})
}

void talk020() {
    Goron006.SetFacialExpression({'expression': 'sad'})
    Goron006.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron006.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGoron:Goron006Talk020_010', 'selfTalkAnim': False, 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Goron006.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron006.Talk({'message': 'scenario/GeneralTalkGoron:Goron006Talk020_020', 'getAttention': False})
    Goron006.Talk({'message': 'scenario/GeneralTalkGoron:Goron006Talk020_030', 'getAttention': False})
}

void talk030() {
    Goron006.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'scenario/GeneralTalkGoron:Goron006Talk030_010', 'facial': 'smile', 'selfTalkAnimName': 'think01', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Goron006.Talk({'message': 'scenario/GeneralTalkGoron:Goron006Talk030_020', 'getAttention': False})
}

void talk000() {
    Goron006.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkGoron:Goron006Talk005_010', 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Goron006.Talk({'message': 'scenario/GeneralTalkGoron:Goron006Talk005_020', 'getAttention': False})
}

void Gliding_Valcano070_Start() {

    call EvResetCommon.AllReset()

    if !EventFlags.CheckMessgaeFlag({'message': 'quest/QuestAreaC:Gliding_Valcano070_040'}) {
        Goron006.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Goron006.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Goron006.LookAtTalker({'duration': 0.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        Timer.Wait({'time': 2.0})
        Fade.StartPreset({'preset': 'FadeInSlow'})
        Goron006.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'quest/QuestAreaC:Gliding_Valcano070_040', 'selfTalkAnimName': 'talk01', 'keepTalk': False, 'cameraLookAt': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})

        fork {
            Goron006.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano070_050', 'getAttention': False})
        } {
            Goron006.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron006.SetFacialExpression({'expression': 'smile'})
        }

        Goron006.SetTalkerName({'message': 'glossary/Character:Goron007', 'keep': False})

        fork {
            Goron006.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano070_060', 'getAttention': False})
        } {
            Goron006.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron006.ResetFacialExpression()
        }


        fork {
            Goron006.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano070_070', 'getAttention': False})
        } {
            Goron006.PlayAnimationNoWait({'name': 'ask', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron006.SetFacialExpression({'expression': 'angry'})
        }

        Event190:
        Goron006.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaC:Gliding_Valcano070_090', 'playerTalkAnim': False, 'facial': 'angry', 'selfTalkAnimName': 'yes01,wait01', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        if !Dialog.GetLastResult({'resultOnSkip': 1}) {

            fork {
                Goron006.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano070_110', 'getAttention': False})
            } {
                Goron006.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Goron006.SetFacialExpression({'expression': 'smile'})
            }


            fork {
                Goron006.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano070_120', 'getAttention': False})
            } {
                Goron006.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Goron006.ResetFacialExpression()
            }

            Goron006.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            switch QuestSystem.GetStatus({'questKey': 'Gliding_Valcano070'}) {
              case 0:

                fork {
                    QuestSystem.SetProgress({'symbol': 'Gliding_Valcano070:1344313750', 'isShowTelopInEvent': True, 'isFrontFade': False})
                } {
                    Timer.Wait({'time': 5.0})
                }

                Event304:
                Fade.StartParam({'mode': 1, 'time': 0.5, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0})
                Player.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="Goron006"), 'index': 0, 'offsetY': 0.0})
                Hud.ShowGameQuitHelp({'confirmLabel': 'ui/Dialog:Dialog_Quit_Gliding', 'entryName': '_HUD_Gliding_End', 'eventFlowName': 'Goron006'})
                GameControl.ForbidSave()

                call _Gliding_Start_from_Volcano006()

              case [1, 2]:
                goto Event304
            }
        } else {

            fork {
                Goron006.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano070_100', 'getAttention': False})
            } {
                Goron006.PlayAnimationNoWait({'name': 'yes01,wait03', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Goron006.SetFacialExpression({'expression': 'smile'})
            }

        }
    } else {
        Goron006.SetTalkerName({'message': 'glossary/Character:Goron007', 'keep': False})
        goto Event190
    }
}

void Gliding_Start() {
    Audio.StopRegionBgm({'fadeSec': 0.0})

    call EvResetCommon.AllReset()

    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})

    call _Start_Pos_Init()

    switch QuestSystem.CheckProgress({'symbol': 'Gliding_Valcano070:961633368'}) {
      case 4294967295:
        QuestSystem.SetProgress({'symbol': 'Gliding_Valcano070:961633368', 'isShowTelopInEvent': False, 'isFrontFade': False})
        Event240:
        Timer.Wait({'time': 1.0})
        Goron006.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Audio.SetBGMVolume({'volume': 1.0, 'duration': 0.5})
        if !Goron006.GetInstanceVariableBool({'name': 'courseDemo'}) {
            Goron006.SetInstanceVariableBool({'value': True, 'name': 'courseDemo'})
            Fade.StartPreset({'preset': 'FadeInSlow'})
            FlowControl.SetCanSkip({'enable': True})
            Hud.SetEventSkipViewAlways({'visible': True})

            call _Start_Demo()

            FlowControl.CloseSkippableScope()
            Event303:
            Timer.Wait({'time': 0.10000000149011612})
            Goron006.SkipAutoTurn()
        } else {
            Fade.StartPreset({'preset': 'FadeInSlow'})
            goto Event303
        }
      case 0:
        Event302:
        Goron006.SetInstanceVariableBool({'value': True, 'name': 'courseDemo'})
        goto Event240
      case 1:
        switch QuestSystem.CheckProgress({'symbol': 'Gliding070_Replay:2922921956'}) {
          case 4294967295:
            QuestSystem.SetProgress({'symbol': 'Gliding070_Replay:2922921956', 'isShowTelopInEvent': False, 'isFrontFade': False})
            goto Event240
          case 0:
            goto Event302
        }
    }
}

void Gliding_Valcano070_Goal() {

    call EvResetCommon.AllReset()

    Audio.StopAllBGM({'duration': 1.399999976158142})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})

    call _Goal_Pos_Init()

    Fade.StartPreset({'preset': 'FadeInSlow'})

    call _Goal_Demo()


    call _Gliding_End()

}

void Gliding_Valcano070_Crash() {
    QuestCheckpoint.SetInstanceVariableBool({'value': True, 'name': 'isCrash'})
    Event318:
    Player.ResetVelocity()
    Player.SetGravityEnable({'enable': False})
    Audio.SetBGMVolume({'volume': 0.5, 'duration': 0.5})
    Dialog.Show({'message': 'quest/QuestAreaC:Gliding_Valcano080_060'})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        call _Gliding_Start()

    } else {
        Audio.StopAllBGM({'duration': 1.0})

        call _Gliding_End()

    }
}

void Gliding_Valcano070_Leave() {
    Goron006.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Goron006.SetInterestIkEnabled({'enable': False})
    Goron006.GenericTalkSequence({'aimToPlayer': True, 'selfTalkAnim': False, 'playerTalkAnim': False, 'aimFromPlayer': False, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})

    fork {
        Goron006.PlayAnimation({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Goron006.PlayOneshotSE({'label': 'VO_GORON_002_3_006_2', 'volume': 1.0, 'pitch': 1.0})
    }

    Goron006.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Goron006.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano080_080', 'getAttention': False})
    } {
        Player.SetGravityEnable({'enable': True})
        Player.AimDegreeAngle({'angle': 40.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Audio.SetBGMVolume({'volume': 0.5, 'duration': 0.5})
    }

    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        call _Gliding_Start()

    } else {
        Audio.StopAllBGM({'duration': 1.0})

        call _Gliding_End()

    }
}

void Gliding_Valcano070_End() {

    call EvResetCommon.AllReset()


    call _Gliding_End_Pos_Init()

    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Hud.HideGameQuitHelp()
    GameControl.UnforbidSave()
    Audio.PlayZoneBGM({'stopbgm': False})
    Timer.Wait({'time': 2.0})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    switch QuestSystem.CheckProgress({'symbol': 'Gliding_Valcano070:961633368'}) {
      case 4294967295:
        Event325:
        GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
      case 0:
        QuestSystem.SetProgress({'symbol': 'Gliding_Valcano070:1464688015', 'isShowTelopInEvent': False, 'isFrontFade': False})
        goto Event325
      case 1:
        switch QuestSystem.CheckProgress({'symbol': 'Gliding070_Replay:2922921956'}) {
          case [4294967295, 1]:
            goto Event325
          case 0:
            QuestSystem.SetProgress({'symbol': 'Gliding070_Replay:568029173', 'isShowTelopInEvent': False, 'isFrontFade': False})
            goto Event325
        }
    }
}

void talkBoundary() {
    Dialog.Show({'message': 'scenario/StoryAreaC:BoundaryGoronTalk_010'})
    Goron006.SkipAutoTurn()
}

void Gliding_Valcano070_010() {
    Event97:

    call EvResetCommon.AllReset()

    Goron006.SetTalkerName({'message': 'glossary/Character:Goron007', 'keep': False})
    Goron006.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaC:Gliding_Valcano080_010', 'playerTalkAnim': False, 'facial': 'smile', 'selfTalkAnimName': 'yes01,wait01', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Event180:
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:

        fork {
            Goron006.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano080_020', 'getAttention': False})
        } {
            Goron006.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron006.SetFacialExpression({'expression': 'smile'})
        }

        Goron006.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano080_030', 'getAttention': False})
        Event99:
        Goron006.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaC:Gliding_Valcano080_Q2', 'facial': 'normal', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        goto Event180
      case 1:
        Goron006.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaC:Gliding_Valcano080_040', 'playerTalkAnim': False, 'facial': 'surprise', 'selfTalkAnimName': 'surprised_st01,surprised_lp01', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        if !Dialog.GetLastResult({'resultOnSkip': 1}) {

            fork {
                Goron006.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano080_050', 'getAttention': False})
            } {
                Goron006.PlayAnimation({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Goron006.SetFacialExpression({'expression': 'sad'})
            }

            Audio.StopAllBGM({'duration': 1.0})

            call _Gliding_End()

        } else {
            goto Event99
        }
      case 2:

        fork {
            Goron006.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano080_090', 'getAttention': False})
        } {
            Goron006.PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron006.SetFacialExpression({'expression': 'smile'})
        }

    }
}

void Gliding_Valcano070_OutOfArea() {
    Sync.SyncReset()
    Player.ResetVelocity()
    Player.SetGravityEnable({'enable': False})
    Audio.SetBGMVolume({'volume': 0.5, 'duration': 0.5})
    Dialog.ShowTalker({'talker': 'glossary/Character:Goron007', 'message': 'quest/QuestAreaC:Gliding_Valcano080_070'})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        call _Gliding_Start()

    } else {
        Audio.StopAllBGM({'duration': 1.0})

        call _Gliding_End()

    }
}

void _Camera_CourseIntroduction() {
    Audio.SetPlayerVolume({'label': 'PLAYER_SE_ENVIROMENT', 'volume': 0.0, 'duration': 0.20000000298023224})
    Goron006.LookAtGimmicksLinkedPoint({'pointIndex': 4, 'duration': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Audio.SetPlayerVolume({'label': 'PLAYER_SE_ENVIROMENT', 'volume': 0.0, 'duration': 0.20000000298023224})
    Goron006.LookAtGimmicksLinkedPoint({'pointIndex': 5, 'chaseRatio': 0.10000000149011612, 'duration': 1.5, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Audio.SetPlayerVolume({'label': 'PLAYER_SE_ENVIROMENT', 'volume': 0.0, 'duration': 0.20000000298023224})
    Goron006.LookAtGimmicksLinkedPoint({'pointIndex': 6, 'duration': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Audio.SetPlayerVolume({'label': 'PLAYER_SE_ENVIROMENT', 'volume': 0.0, 'duration': 0.20000000298023224})
    Timer.Wait({'time': 2.5})
    Camera.Reset({'chaseRatio': 0.07500000298023224, 'resetPlayerCamera': False})
}

void _Gliding_Valcano070_ActiveActer() {
    Goron006.ActiveteAllLinkedActors()
}

void _Gliding_Valcano070_InactiveActer() {
    Goron006.DeactiveteAllLinkedActors()
}

void _Gliding_Start() {
    Fade.StartParam({'mode': 1, 'time': 0.5, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0})
    Event100:
    GameControl.RequestLevelJumpInCurrentLevel({'locator': 'Ev_Gliding_Valcano070', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void Gliding_Replay070_Start() {
    Fade.StartParam({'mode': 1, 'time': 0.5, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0})
    Player.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="Goron006"), 'index': 0, 'offsetY': 0.0})
    Hud.ShowGameQuitHelp({'confirmLabel': 'ui/Dialog:Dialog_Quit_Gliding', 'eventFlowName': 'Goron006', 'entryName': '_HUD_Gliding_End'})
    GameControl.ForbidSave()

    call _Gliding_Start_from_Volcano006()

}

void _Gliding_End() {
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    GameControl.RequestLevelJump({'level': 'Field', 'locator': 'Ev_Gliding_Valcano070_End', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void Gliding_Replay070_010() {
    goto Event97
}

void _Gliding_Start_from_Volcano006() {
    Audio.StopRegionBgm({'fadeSec': 2.0})
    GameControl.RequestLevelJump({'locator': 'Ev_Gliding_Valcano070', 'level': 'Field', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void _Gliding_Goal_End() {
    Goron006.WarpToActorLinkedPoint({'index': 2, 'actor': ActorIdentifier(name="Goron006"), 'offsetY': 0.0})
    Goron006.Deactivate()
    Player.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Timer.Wait({'time': 2.0})
}

void FieldWalkOut_Gliding() {
    switch QuestSystem.CheckProgress({'symbol': 'Gliding_Valcano070:961633368'}) {
      case 4294967295:
        Event259:

        call AreaExitCommon.FieldWalkOut({'level': 'level', 'locator': 'locator'})

      case 0:
        Event263:
        Player.ResetVelocity()

        call FieldWalkOut_Crash()

      case 1:
        switch QuestSystem.CheckProgress({'symbol': 'Gliding070_Replay:2922921956'}) {
          case [4294967295, 1]:
            goto Event259
          case 0:
            goto Event263
        }
    }
}

void _Gliding_End_Pos_Init() {
    if !QuestSystem.CheckProgress({'symbol': 'Gliding_Valcano070:961633368'}) {
        Goron006.Activate()
        Goron006.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Goron006.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Event86:

        fork {
            Player.AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        } {
            Partner[companion].MoveToTargetActor({'speed': 1, 'actor': ActorIdentifier(name="Player"), 'distance': -2.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
            Partner[companion].AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        }

    } else {
        goto Event86
    }
}

void _Goal_Pos_Init() {

    call _Gliding_Valcano070_InactiveActer()

    Goron006.SetTalkerName({'message': 'glossary/Character:Goron007', 'keep': False})
    Goron006.WarpToActorLinkedPointWithCompassPoint({'index': 1, 'direction': 1, 'actor': ActorIdentifier(name="Goron006"), 'offsetY': 0.0})
    Player.WarpToActorWithCompassPoint({'distance': 2.0, 'direction': 3, 'actor': ActorIdentifier(name="Goron006"), 'offsetY': 0.0, 'offsetX': 0.0})
    Partner[companion].WarpToDefaultPosition({'position': 3, 'avoidWall': False, 'avoidPlayer': False})

    fork {
        Partner[companion].AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Goron006"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'duration': 0.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Goron006"), 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {

        call EvResetCommon.AllReset()

    }

    Timer.Wait({'time': 2.0})
}

void _Goal_Demo() {
    if !QuestSystem.CheckProgress({'symbol': 'Gliding_Valcano070:310120347'}) {
        QuestSystem.SetProgress({'symbol': 'Gliding_Valcano070:33776757', 'isShowTelopInEvent': False, 'isFrontFade': False})
        Goron006.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'quest/QuestAreaC:Gliding_Valcano090_010', 'facial': 'surprise', 'selfTalkAnimName': 'surprised_st01,surprised_lp01', 'cameraLookAt': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

        fork {
            Goron006.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano090_020', 'getAttention': False})
        } {
            Goron006.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron006.SetFacialExpression({'expression': 'sad'})
        }


        fork {
            Goron006.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano090_030', 'getAttention': False})
        } {
            Goron006.PlayAnimationNoWait({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            Goron006.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano090_040', 'getAttention': False})
        } {
            Goron006.SetFacialExpression({'expression': 'surprise'})
        }


        fork {
            Goron006.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano090_060', 'getAttention': False})
        } {
            Goron006.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron006.SetFacialExpression({'expression': 'sleep'})
        }


        fork {
            Goron006.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano090_070', 'getAttention': False})
        } {
            Goron006.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron006.SetFacialExpression({'expression': 'smile'})
        }

        Goron006.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'WorldGlobePiece', 'count': 1, 'index': 66, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})
        Camera.LookAt2ActorsCenterAsTalker({'duration': 0.4000000059604645, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Goron006"), 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

        fork {
            Goron006.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaC:Gliding_Valcano090_080', 'facial': 'angry', 'selfTalkAnimName': 'no01,wait01', 'cameraLookAt': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Goron006"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Audio.PlayZoneBGM({'stopbgm': False})
        }


        fork {
            Goron006.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano090_090', 'getAttention': False})
        } {
            Goron006.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron006.SetFacialExpression({'expression': 'smile'})
        }

    } else
    if !QuestSystem.CheckProgress({'symbol': 'Gliding070_Replay:2232773671'}) {
        QuestSystem.SetProgress({'symbol': 'Gliding070_Replay:568029173', 'isShowTelopInEvent': False, 'isFrontFade': False})
        Goron006.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'facial': 'surprise', 'selfTalkAnimName': 'surprised_st01,surprised_lp01', 'message': 'quest/QuestAreaC:Gliding_Replay_HardCourseClear_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

        fork {
            Goron006.Talk({'message': 'quest/QuestAreaC:Gliding_Replay_HardCourseClear_020', 'getAttention': False})
        } {
            Goron006.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron006.SetFacialExpression({'expression': 'angry'})
        }


        fork {
            Goron006.Talk({'message': 'quest/QuestAreaC:Gliding_Replay_HardCourseClear_030', 'getAttention': False})
        } {
            Goron006.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Goron006.SetFacialExpression({'expression': 'smile'})
        }

        Goron006.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }
}

void _Gliding_Start_NoFade() {
    goto Event100
}

void _Start_Pos_Init() {
    Goron006.Activate()
    Player.WarpToActorLinkedPoint({'index': 0, 'actor': ActorIdentifier(name="Goron006"), 'offsetY': 0.0})
    Partner[companion].WarpToActor({'actor': ActorIdentifier(name="Player"), 'distance': 2.5, 'offsetY': 0.0, 'offsetX': 0.0})

    fork {
        Player.AimCompassPoint({'direction': 3, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner[companion].AimCompassPoint({'direction': 3, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Goron006.WarpToActorLinkedPoint({'index': 2, 'actor': ActorIdentifier(name="Goron006"), 'offsetY': 0.0})
    }

    Goron006.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    call _Gliding_Valcano070_ActiveActer()

    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Timer.Wait({'time': 1.0})
}

void _Start_Demo() {
    Timer.Wait({'time': 1.0})

    call _Camera_CourseIntroduction()

    Audio.Prepare({'label': 'BGM_MINIGAMGE_ACORN', 'kind': 0, 'volume': 1.0})
    Timer.Wait({'time': 1.2999999523162842})
    Goron006.SetFacialExpression({'expression': 'smile'})
    Goron006.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Goron006.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano070_130', 'getAttention': False})
    Goron006.SetFacialExpression({'expression': 'normal'})
    Goron006.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Audio.PlayBGM({'label': 'BGM_MINIGAMGE_ACORN', 'volume': 1.0, 'ignoreSkip': True})
    Audio.SetPlayerVolume({'label': 'PLAYER_SE_ENVIROMENT', 'duration': 0.20000000298023224, 'volume': 1.0})
}

void _HUD_Gliding_End() {
    Player.ResetVelocity()
    Player.SetGravityEnable({'enable': False})
    Audio.StopAllBGM({'duration': 1.0})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    switch QuestSystem.GetStatus({'questKey': 'Gliding_Valcano070'}) {
      case 0:
        Event321:
        GameControl.RequestLevelJump({'level': 'Field', 'locator': 'Ev_Gliding_Valcano070_End', 'offsetX': 0.0, 'offsetZ': 0.0})
      case 1:
        QuestSystem.SetProgress({'symbol': 'Gliding_Valcano070:1464688015', 'isShowTelopInEvent': False, 'isFrontFade': False})
        goto Event321
      case 2:
        switch QuestSystem.GetStatus({'questKey': 'Gliding070_Replay'}) {
          case [0, 2]:
            goto Event321
          case 1:
            QuestSystem.SetProgress({'symbol': 'Gliding070_Replay:568029173', 'isShowTelopInEvent': False, 'isFrontFade': False})
            goto Event321
        }
    }
}

void FieldWalkOut_Crash() {
    goto Event318
}

void Talk040_010() {
    Goron006.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'facial': 'smile', 'message': 'scenario/GeneralTalkGoron:Goron006Talk040_010', 'selfTalkAnimName': 'talk02', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}
