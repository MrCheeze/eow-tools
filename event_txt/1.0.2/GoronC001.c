-------- EventFlow: GoronC001 --------

Actor: GoronC001
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'SetFacialExpression', 'PlayAnimationNoWait', 'Talk', 'PlayAnimation', 'WarpToLinkedPointWithCompassPoint', 'WarpToActorLinkedPoint', 'LookAtGimmicksLinkedPoint', 'Destroy', 'DeactiveteLinkedActor', 'AimCompassPoint', 'ActiveteLinkedActor', 'SetInterestIkEnabled', 'AimPlayer', 'PlayOneshotSE', 'SetInstanceVariableBool', 'SetDefaultFacialExpression', 'SkipAutoTurn']
queries: ['GetInstanceVariableBool']
params: None

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: ['GetLastResult4', 'GetLastResult']
params: None

Actor: Player
entrypoint: None()
actions: ['AimCompassPoint', 'AimActor', 'WarpToActorLinkedPoint', 'AbsorbAllPastedActors', 'HideBurningEffect', 'StopBurning', 'WarpToActor', 'ResetVelocity', 'SetGravityEnable', 'AimDegreeAngle', 'SetInterestIkEnabled']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['CheckProgress', 'GetStatus']
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset', 'StartParam']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'Reset']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJumpInCurrentLevel', 'UnforbidSave', 'ForbidSave', 'RequestAutoSave', 'DisableHorseLayoutController', 'RestoreHorseLayoutController']
queries: []
params: None

Actor: Goron006
entrypoint: None()
actions: ['Activate', 'AimActor']
queries: []
params: None

Actor: QuestCheckpoint
entrypoint: None()
actions: ['SetInstanceVariableBool']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['SetCanSkip', 'CloseSkippableScope']
queries: []
params: None

Actor: Hud
entrypoint: None()
actions: ['HideGameQuitHelp', 'ShowGameQuitHelp', 'SetEventSkipViewAlways']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AddItemAndGenericItemGetSequence']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayBGM', 'StopAllBGM', 'PlayZoneBGM', 'SetBGMVolume', 'StopRegionBgm', 'SetPlayerVolume']
queries: []
params: None

Actor: Sync
entrypoint: None()
actions: ['SyncReset']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['EnableAutoMovement', 'AimCompassPoint', 'WarpToDefaultPosition', 'WarpToActor', 'MoveToTargetActor', 'MoveToDefaultPosition']
queries: []
params: None

void talk() {
    GoronC001.SetFacialExpression({'expression': 'sad'})
    GoronC001.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkGoron:GoronC001Talk010_010', 'selfTalkAnimName': '', 'selfTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Gliding_Valcano040_Start() {

    call EvResetCommon.AllReset()

    GoronC001.SetInterestIkEnabled({'enable': False})
    Player.HideBurningEffect()
    GoronC001.SetFacialExpression({'expression': 'angry'})
    GoronC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'selfTalkAnim': True, 'message': 'quest/QuestAreaC:Gliding_Valcano040_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GoronC001.SetFacialExpression({'expression': 'sad'})
    GoronC001.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano040_020', 'getAttention': False})
    Event24:
    GoronC001.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronC001.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano040_030', 'getAttention': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        Player.StopBurning()
        GoronC001.SetFacialExpression({'expression': 'smile'})
        GoronC001.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronC001.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano040_080', 'getAttention': False})
        GoronC001.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano040_085', 'getAttention': False})
        switch QuestSystem.GetStatus({'questKey': 'Gliding_Valcano040'}) {
          case 0:

            fork {
                QuestSystem.SetProgress({'isShowTelopInEvent': True, 'symbol': 'Gliding_Valcano040:3602180920', 'isFrontFade': False})
            } {
                Timer.Wait({'time': 5.0})
            }

            Event81:
            Fade.StartParam({'mode': 1, 'time': 0.5, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0})
            Player.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="GoronC001"), 'index': 9, 'offsetY': 0.0})
            Hud.ShowGameQuitHelp({'confirmLabel': 'ui/Dialog:Dialog_Quit_Gliding', 'eventFlowName': 'GoronC001', 'entryName': '_HUD_Gliding_End'})
            GameControl.ForbidSave()
            Audio.StopAllBGM({'duration': 2.0})

            call _Gliding_Start_NoFade()

          case [1, 2]:
            goto Event81
        }
      case 1:
        GoronC001.SetFacialExpression({'expression': 'normal'})
        GoronC001.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronC001.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano040_050', 'getAttention': False})
        GoronC001.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano040_060', 'getAttention': False})
        GoronC001.SetFacialExpression({'expression': 'sad'})
        goto Event24
      case 2:
        GoronC001.SetFacialExpression({'expression': 'smile'})
        GoronC001.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronC001.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano040_070', 'getAttention': False})
    }
}

void Gliding_Valcano040_Crash() {
    QuestCheckpoint.SetInstanceVariableBool({'value': True, 'name': 'isCrash'})
    Event174:
    Player.ResetVelocity()
    Player.SetGravityEnable({'enable': False})
    Audio.SetBGMVolume({'duration': 0.5, 'volume': 0.5})
    Dialog.Show({'message': 'quest/QuestAreaC:Gliding_Valcano050_010'})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        call _Gliding_Start()

    } else {
        Audio.StopAllBGM({'duration': 1.0})

        call _Gliding_End()

    }
}

void Gliding_Valcano040_Goal() {

    call EvResetCommon.AllReset()

    Audio.StopAllBGM({'duration': 1.399999976158142})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})

    call _Goal_Pos_Init()

    Fade.StartPreset({'preset': 'FadeInNormal'})

    call _Goal_Demo()


    call _Gliding_End()

}

void Gliding_Valcano070_Start() {

    call EvResetCommon.AllReset()

    GoronC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'quest/QuestAreaC:Gliding_Valcano070_010', 'selfTalkAnimName': 'happy02', 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        GoronC001.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano070_020', 'getAttention': False})
    } {
        GoronC001.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        GoronC001.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano070_030', 'getAttention': False})
    } {
        GoronC001.PlayAnimation({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronC001.SetFacialExpression({'expression': 'smile'})
    }

    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    Player.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="GoronC001"), 'index': 9, 'offsetY': 0.0})
    Player.AimCompassPoint({'direction': 1, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    GoronC001.Destroy()
    Goron006.Activate()
    Goron006.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    call Goron006.Gliding_Valcano070_Start()

}

void Gliding_Valcano040_Leave() {
    Player.ResetVelocity()
    Player.SetGravityEnable({'enable': False})
    GoronC001.SetDefaultFacialExpression({'expression': 'normal'})
    GoronC001.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    GoronC001.SetInterestIkEnabled({'enable': False})

    fork {
        GoronC001.PlayAnimation({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GoronC001.PlayOneshotSE({'label': 'VO_GORON_001_2_006_4', 'volume': 1.0, 'pitch': 1.0})
    }

    GoronC001.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GoronC001.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano050_030', 'getAttention': False})
    } {
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimDegreeAngle({'angle': 40.0, 'withoutTurn': True, 'duration': 0.4000000059604645, 'immediateTurn': False})
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

void Gliding_Valcano040_010() {
    Event74:

    call EvResetCommon.AllReset()

    GoronC001.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaC:Gliding_Valcano050_005', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Event155:
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        GoronC001.SetFacialExpression({'expression': 'normal'})
        GoronC001.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronC001.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano050_006', 'getAttention': False})
        GoronC001.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano050_007', 'getAttention': False})
        Event56:
        GoronC001.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaC:Gliding_Valcano050_Q2', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        goto Event155
      case 1:
        GoronC001.SetFacialExpression({'expression': 'sad'})
        GoronC001.PlayAnimationNoWait({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronC001.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano050_008', 'getAttention': False})
        if !Dialog.GetLastResult({'resultOnSkip': 1}) {
            GoronC001.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            GoronC001.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano050_009', 'getAttention': False})
            Audio.StopAllBGM({'duration': 1.0})

            call _Gliding_End()

        } else {
            goto Event56
        }
      case 2:
        GoronC001.SetFacialExpression({'expression': 'smile'})
        GoronC001.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronC001.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano050_040', 'getAttention': False})
    }
}

void Gliding_Valcano040_OutOfArea() {
    Sync.SyncReset()
    Player.ResetVelocity()
    Player.SetGravityEnable({'enable': False})
    Audio.SetBGMVolume({'volume': 0.5, 'duration': 0.5})
    Dialog.Show({'message': 'quest/QuestAreaC:Gliding_Valcano050_020'})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        call _Gliding_Start()

    } else {
        Audio.StopAllBGM({'duration': 1.0})

        call _Gliding_End()

    }
}

void _Camera_CourseIntroduction() {
    Audio.SetPlayerVolume({'label': 'PLAYER_SE_ENVIROMENT', 'volume': 0.0, 'duration': 0.20000000298023224})
    GoronC001.LookAtGimmicksLinkedPoint({'duration': 1.0, 'chaseRatio': 0.10000000149011612, 'pointIndex': 5, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Audio.SetPlayerVolume({'label': 'PLAYER_SE_ENVIROMENT', 'volume': 0.0, 'duration': 0.20000000298023224})
    GoronC001.LookAtGimmicksLinkedPoint({'duration': 3.0, 'chaseRatio': 0.05000000074505806, 'pointIndex': 6, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Audio.SetPlayerVolume({'label': 'PLAYER_SE_ENVIROMENT', 'volume': 0.0, 'duration': 0.20000000298023224})
    GoronC001.LookAtGimmicksLinkedPoint({'duration': 1.0, 'chaseRatio': 0.10000000149011612, 'pointIndex': 7, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Audio.SetPlayerVolume({'label': 'PLAYER_SE_ENVIROMENT', 'volume': 0.0, 'duration': 0.20000000298023224})
    Timer.Wait({'time': 2.5})
    Audio.SetPlayerVolume({'label': 'PLAYER_SE_ENVIROMENT', 'volume': 0.0, 'duration': 0.20000000298023224})
    Camera.Reset({'chaseRatio': 0.07500000298023224, 'resetPlayerCamera': False})
}

void _Gliding_Valcano040_InactiveActer() {
    GoronC001.DeactiveteLinkedActor({'index': 0})
    GoronC001.DeactiveteLinkedActor({'index': 1})
    GoronC001.DeactiveteLinkedActor({'index': 2})
    GoronC001.DeactiveteLinkedActor({'index': 3})
    GoronC001.DeactiveteLinkedActor({'index': 4})
    GoronC001.DeactiveteLinkedActor({'index': 5})
}

void _Gliding_Start() {
    Fade.StartParam({'mode': 1, 'time': 0.5, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0})
    Event83:
    GameControl.RequestLevelJumpInCurrentLevel({'locator': 'Ev_Gliding_Valcano040', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void _Gliding_End() {
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    GameControl.RequestLevelJumpInCurrentLevel({'locator': 'Ev_Gliding_Valcano040_End', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void Gliding_Replay_Start() {

    call EvResetCommon.AllReset()

    Player.HideBurningEffect()
    GoronC001.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaC:Gliding_Replay_Q1_010', 'selfTalkAnim': True, 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Event179:
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        GoronC001.Talk({'message': 'quest/QuestAreaC:Gliding_Replay_Q2', 'getAttention': False})
        switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
          case 0:
            GoronC001.SetFacialExpression({'expression': 'smile'})
            GoronC001.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            GoronC001.Talk({'message': 'quest/QuestAreaC:Gliding_Replay_Q2_A1_010', 'getAttention': False})
            Player.StopBurning()
            Fade.StartParam({'mode': 1, 'time': 0.5, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0})
            Player.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="GoronC001"), 'index': 9, 'offsetY': 0.0})
            Hud.ShowGameQuitHelp({'confirmLabel': 'ui/Dialog:Dialog_Quit_Gliding', 'eventFlowName': 'GoronC001', 'entryName': '_HUD_Gliding_End'})
            GameControl.ForbidSave()
            Audio.StopAllBGM({'duration': 2.0})

            call _Gliding_Start_NoFade()

          case 1:
            GoronC001.SetFacialExpression({'expression': 'smile'})
            GoronC001.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            GoronC001.Talk({'message': 'quest/QuestAreaC:Gliding_Replay_Q2_A2_010', 'getAttention': False})

            call Goron006.Gliding_Replay070_Start()

          case 2:
            Event180:
            GoronC001.Talk({'message': 'quest/QuestAreaC:Gliding_Replay_Q1_A3_010', 'getAttention': False})
        }
      case 1:
        GoronC001.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano040_050', 'getAttention': False})
        GoronC001.Talk({'message': 'quest/QuestAreaC:Gliding_Replay_Q1_020', 'getAttention': False})
        goto Event179
      case 2:
        goto Event180
    }
}

void Gliding_Start() {
    Audio.StopRegionBgm({'fadeSec': 0.0})

    call EvResetCommon.AllReset()

    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})

    call _Start_Pos_Init()

    switch QuestSystem.CheckProgress({'symbol': 'Gliding_Valcano040:3217370870'}) {
      case 4294967295:
        QuestSystem.SetProgress({'symbol': 'Gliding_Valcano040:3217370870', 'isShowTelopInEvent': False, 'isFrontFade': False})
        Event100:
        Timer.Wait({'time': 0.10000000149011612})
        Audio.SetBGMVolume({'duration': 0.5, 'volume': 1.0})
        if !GoronC001.GetInstanceVariableBool({'name': 'courseDemo'}) {
            GoronC001.SetInstanceVariableBool({'value': True, 'name': 'courseDemo'})
            GoronC001.PlayAnimationNoWait({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            GoronC001.SetFacialExpression({'expression': 'smile'})
            Fade.StartPreset({'preset': 'FadeInSlow'})
            FlowControl.SetCanSkip({'enable': True})
            Hud.SetEventSkipViewAlways({'visible': True})

            call _Start_Demo()

            FlowControl.CloseSkippableScope()
            Event10:
            Timer.Wait({'time': 0.10000000149011612})
            GoronC001.SkipAutoTurn()
            Audio.PlayBGM({'label': 'BGM_MINIGAMGE_ACORN', 'ignoreSkip': False, 'volume': 1.0})
        } else {
            Fade.StartPreset({'preset': 'FadeInSlow'})
            goto Event10
        }
      case 0:
        Event121:
        GoronC001.SetInstanceVariableBool({'value': True, 'name': 'courseDemo'})
        goto Event100
      case 1:
        switch QuestSystem.CheckProgress({'symbol': 'Gliding_Replay:3164050825'}) {
          case 4294967295:
            QuestSystem.SetProgress({'symbol': 'Gliding_Replay:3164050825', 'isShowTelopInEvent': False, 'isFrontFade': False})
            goto Event100
          case 0:
            goto Event121
        }
    }
}

void Gliding_End() {

    call EvResetCommon.AllReset()


    call _Gliding_End_Pos_Init()

    Hud.HideGameQuitHelp()
    GameControl.UnforbidSave()
    Fade.StartPreset({'preset': 'FadeInNormal'})
    switch QuestSystem.CheckProgress({'symbol': 'Gliding_Valcano040:3217370870'}) {
      case 4294967295:
        Event249:
        GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
      case 0:
        QuestSystem.SetProgress({'symbol': 'Gliding_Valcano040:3520671521', 'isShowTelopInEvent': False, 'isFrontFade': False})
        goto Event249
      case 1:
        switch QuestSystem.CheckProgress({'symbol': 'Gliding_Replay:3164050825'}) {
          case [4294967295, 1]:
            goto Event249
          case 0:
            QuestSystem.SetProgress({'symbol': 'Gliding_Replay:315284922', 'isShowTelopInEvent': False, 'isFrontFade': False})
            goto Event249
        }
    }
}

void Gliding_Replay_010() {
    goto Event74
}

void _Gliding_Goal_End() {
    GoronC001.WarpToActorLinkedPoint({'index': 3, 'actor': ActorIdentifier(name="GoronC001"), 'offsetY': 0.0})
    Player.AimCompassPoint({'direction': 0, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    GoronC001.SetDefaultFacialExpression({'expression': 'normal'})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})

    call _Gliding_Valcano040_InactiveActer()

    Timer.Wait({'time': 1.0})
}

void _Gliding_Valcano040_ActiveActer() {
    GoronC001.ActiveteLinkedActor({'index': 0})
    GoronC001.ActiveteLinkedActor({'index': 1})
    GoronC001.ActiveteLinkedActor({'index': 2})
    GoronC001.ActiveteLinkedActor({'index': 3})
    GoronC001.ActiveteLinkedActor({'index': 4})
    GoronC001.ActiveteLinkedActor({'index': 5})
}

void talk2() {
    GoronC001.SetFacialExpression({'expression': 'smile'})
    GoronC001.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'selfTalkAnim': False, 'message': 'scenario/GeneralTalkGoron:GoronC001Talk020_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void FieldWalkOut_Gliding() {
    switch QuestSystem.CheckProgress({'symbol': 'Gliding_Valcano040:3217370870'}) {
      case 4294967295:
        Event278:

        call AreaExitCommon.FieldWalkOut({'level': 'level', 'locator': 'locator'})

      case 0:
        Event281:
        Player.ResetVelocity()

        call FieldWalkOut_Crash()

      case 1:
        switch QuestSystem.CheckProgress({'symbol': 'Gliding_Replay:3164050825'}) {
          case [4294967295, 1]:
            goto Event278
          case 0:
            goto Event281
        }
    }
}

void _Start_Pos_Init() {
    GameControl.DisableHorseLayoutController({'activateParticipantHorse': False, 'deactivateBelovedHorse': True, 'deactivateRentedHorse': True, 'deactivateUnrentedRentalHorses': True, 'deactivateUnmanagedHorses': True})
    GoronC001.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="GoronC001"), 'index': 2, 'offsetY': 0.0})
    Player.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="GoronC001"), 'index': 0, 'offsetY': 0.0})
    Partner[companion].WarpToActor({'actor': ActorIdentifier(name="Player"), 'distance': -2.5, 'offsetY': 0.0, 'offsetX': 0.0})

    fork {
        Player.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        GoronC001.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }


    call _Gliding_Valcano040_ActiveActer()

    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Timer.Wait({'time': 1.0})
}

void _Start_Demo() {
    Timer.Wait({'time': 1.0})

    call _Camera_CourseIntroduction()

    Timer.Wait({'time': 1.2999999523162842})
    Audio.SetPlayerVolume({'label': 'PLAYER_SE_ENVIROMENT', 'duration': 0.20000000298023224, 'volume': 1.0})
    GoronC001.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano040_040', 'getAttention': False})
}

void _Goal_Demo() {
    if !QuestSystem.CheckProgress({'symbol': 'Gliding_Valcano040:2498264373'}) {
        QuestSystem.SetProgress({'symbol': 'Gliding_Valcano040:2224494299', 'isShowTelopInEvent': False, 'isFrontFade': False})
        GoronC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'quest/QuestAreaC:Gliding_Valcano060_010', 'selfTalkAnimName': 'happy01', 'cameraLookAt': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        GoronC001.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronC001.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano060_020', 'getAttention': False})
        GoronC001.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronC001.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano060_030', 'getAttention': False})
        GoronC001.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'SmoothieIngredient09', 'count': 10, 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})

        fork {
            Partner[companion].MoveToDefaultPosition({'speed': 1, 'position': 1, 'tolerance': 0.0, 'avoidWall': False, 'avoidPlayer': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
        } {
            Camera.LookAt2ActorsCenterAsTalker({'duration': 0.4000000059604645, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="GoronC001"), 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        }

        Partner[companion].EnableAutoMovement()
        Audio.PlayZoneBGM({'stopbgm': False})
        GoronC001.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaC:Gliding_Valcano060_040', 'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': 'yes01,wait01', 'cameraLookAt': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        GoronC001.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronC001.Talk({'message': 'quest/QuestAreaC:Gliding_Valcano060_050', 'getAttention': False})
    } else
    if !QuestSystem.CheckProgress({'symbol': 'Gliding_Replay:2545600074'}) {
        QuestSystem.SetProgress({'symbol': 'Gliding_Replay:315284922', 'isShowTelopInEvent': False, 'isFrontFade': False})
        GoronC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': 'happy01', 'message': 'quest/QuestAreaC:Gliding_Replay_EasyCourseClear_010', 'cameraLookAt': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        GoronC001.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronC001.Talk({'message': 'quest/QuestAreaC:Gliding_Replay_EasyCourseClear_020', 'getAttention': False})
        GoronC001.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        GoronC001.Talk({'message': 'quest/QuestAreaC:Gliding_Replay_EasyCourseClear_030', 'getAttention': False})
        GoronC001.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }
}

void _Goal_Pos_Init() {
    GameControl.RestoreHorseLayoutController()

    call _Gliding_Valcano040_InactiveActer()

    GoronC001.WarpToLinkedPointWithCompassPoint({'index': 1, 'direction': 1, 'offsetY': 0.0})
    Player.WarpToActor({'distance': 2.0, 'actor': ActorIdentifier(name="GoronC001"), 'offsetY': 0.0, 'offsetX': 0.0})
    Player.AimActor({'actor': ActorIdentifier(name="GoronC001"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].WarpToDefaultPosition({'position': 3, 'avoidWall': False, 'avoidPlayer': False})

    fork {
        Partner[companion].EnableAutoMovement()
    } {
        Camera.LookAt2ActorsCenterAsTalker({'duration': 0.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="GoronC001"), 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    }

    GoronC001.PlayAnimationNoWait({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronC001.SetFacialExpression({'expression': 'smile'})
    Timer.Wait({'time': 1.0})
}

void _Gliding_End_Pos_Init() {
    GameControl.RestoreHorseLayoutController()
    GoronC001.SetDefaultFacialExpression({'expression': 'normal'})
    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    GoronC001.WarpToActorLinkedPoint({'index': 3, 'actor': ActorIdentifier(name="GoronC001"), 'offsetY': 0.0})
    Partner[companion].MoveToTargetActor({'speed': 1, 'actor': ActorIdentifier(name="Player"), 'distance': -2.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})

    fork {
        Player.AimActor({'actor': ActorIdentifier(name="GoronC001"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        GoronC001.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        GoronC001.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    call _Gliding_Valcano040_InactiveActer()

}

void _Gliding_Start_NoFade() {
    goto Event83
}

void _HUD_Gliding_End() {
    Player.ResetVelocity()
    Player.SetGravityEnable({'enable': False})
    Audio.StopAllBGM({'duration': 1.0})
    Fade.StartPreset({'preset': 'FadeOutSlowB'})
    switch QuestSystem.GetStatus({'questKey': 'Gliding_Valcano040'}) {
      case 0:
        Event306:
        GameControl.RequestLevelJumpInCurrentLevel({'locator': 'Ev_Gliding_Valcano040_End', 'offsetX': 0.0, 'offsetZ': 0.0})
      case 1:
        QuestSystem.SetProgress({'symbol': 'Gliding_Valcano040:3520671521', 'isShowTelopInEvent': False, 'isFrontFade': False})
        goto Event306
      case 2:
        switch QuestSystem.GetStatus({'questKey': 'Gliding_Replay'}) {
          case [0, 2]:
            goto Event306
          case 1:
            QuestSystem.SetProgress({'symbol': 'Gliding_Replay:315284922', 'isShowTelopInEvent': False, 'isFrontFade': False})
            goto Event306
        }
    }
}

void FieldWalkOut_Crash() {
    goto Event174
}

void Talk030_010() {
    GoronC001.SetFacialExpression({'expression': 'smile'})
    GoronC001.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GoronC001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'selfTalkAnim': False, 'message': 'scenario/GeneralTalkGoron:GoronC001Talk030_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}
