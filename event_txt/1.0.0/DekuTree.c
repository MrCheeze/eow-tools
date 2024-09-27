-------- EventFlow: DekuTree --------

Actor: DekuTree
entrypoint: None()
actions: ['Talk', 'GenericTalkSequenceWithDialog', 'PlayAnimation', 'SetTalkerName']
queries: []
params: None

Actor: DekuTreeHint
entrypoint: None()
actions: ['ShowHintMessage']
queries: ['IsCopiedAllActors']
params: None

Actor: Dialog
entrypoint: None()
actions: ['ShowTalker', 'Show']
queries: ['GetLastResult4']
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['PlayActorOriginCameraAnimation', 'LerpDofSettings', 'LookAt2ActorsCenterAsTalker', 'Reset']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['SetInterestIkEnabled', 'SetVisibility', 'WarpToActor', 'AimCompassPoint', 'AimActor', 'ResetAim']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['SetRegionBgmVolume', 'StopAllBGM']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['SetInterestIkEnabled', 'SetVisibility', 'WarpToActor', 'AimCompassPoint', 'AimActor', 'ResetAim']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: []
queries: []
params: None

void Talk010() {

    call EvResetCommon.AllReset()

    DekuTree.SetTalkerName({'message': 'glossary/Character:DekuTree', 'keep': True})
    if !EventFlags.CheckFlag({'symbol': 'AdditionalElementsModal_Clear'}) {

        call Talk_Ever_Clear()

    } else
    if !EventFlags.CheckFlag({'symbol': 'DekuTreeFirstTalk'}) {
        DekuTree.GenericTalkSequenceWithDialog({'message': 'scenario/DekuTreeTalk:DekuTreeHint_010', 'aimToPlayer': False, 'selfTalkAnimName': 'talk_smile', 'playerTalkAnim': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        DekuTree.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        if !DekuTreeHint.IsCopiedAllActors() {
            Timer.Wait({'time': 1.0})
            DekuTree.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            DekuTree.Talk({'message': 'scenario/DekuTreeTalk:DekuTreeHint_010_AlreadyCompleted', 'getAttention': False})
            DekuTree.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Event12:
            EventFlags.SetFlag({'symbol': 'DekuTreeFirstTalk', 'value': True})
            Event14:

            call Talk_Select_Clear()

        } else {
            goto Event12
        }
    } else {
        goto Event14
    }
}

void CopyHint() {
    if !DekuTreeHint.IsCopiedAllActors() {
        DekuTree.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        DekuTree.Talk({'message': 'scenario/DekuTreeTalk:DekuTreeHint__Completed010', 'getAttention': False})
        DekuTree.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.0})
        DekuTree.PlayAnimation({'name': 'talk_smile', 'layer': 0, 'blendFrame': -1, 'restart': False})
        DekuTree.Talk({'message': 'scenario/DekuTreeTalk:DekuTreeHint__Completed020', 'getAttention': False})
        DekuTree.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } else {
        DekuTree.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Dialog.ShowTalker({'talker': 'glossary/Character:DekuTree', 'message': 'scenario/DekuTreeTalk:DekuTreeHint_020'})
        DekuTree.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.0})
        DekuTree.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        DekuTreeHint.ShowHintMessage()
        Dialog.ShowTalker({'talker': 'glossary/Character:DekuTree', 'message': 'scenario/DekuTreeTalk:DekuTreeHint_Q1_A1_030'})
        DekuTree.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }
}

void Talk_Select_Clear() {
    DekuTree.Talk({'message': 'scenario/DekuTreeTalk:DekuTreeHint_Q1', 'getAttention': False})
    Event5:
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:

        call CopyHint()

        Event31:

        call Talk_Select_Clear_2nd()

      case 1:
        DekuTree.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        DekuTree.Talk({'message': 'scenario/DekuTreeTalk:DekuTreeHint_Q1_A2_010', 'getAttention': False})
        DekuTree.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        goto Event31
      case 2:
        DekuTree.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        DekuTree.Talk({'message': 'scenario/DekuTreeTalk:DekuTreeHint_Q1_A3_010', 'getAttention': False})
        DekuTree.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }
}

void Talk_Ever_Clear() {
    if !EventFlags.CheckFlag({'symbol': 'LastDungeon_CrackAppear'}) {
        DekuTree.GenericTalkSequenceWithDialog({'message': 'scenario/DekuTreeTalk:DekuTreeTalk010_010', 'aimToPlayer': False, 'playerTalkAnim': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'selfTalkAnimName': 'talk', 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        DekuTree.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } else {
        DekuTree.GenericTalkSequenceWithDialog({'message': 'scenario/DekuTreeTalk:DekuTreeTalk020_010', 'aimToPlayer': False, 'selfTalkAnimName': 'talk', 'playerTalkAnim': False, 'cameraLookAt': False, 'keepPersonalSpace': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        DekuTree.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }
}

void Talk_Select_Clear_2nd() {
    DekuTree.Talk({'message': 'scenario/DekuTreeTalk:DekuTreeHint_Q2', 'getAttention': False})
    goto Event5
}

void Talk1st() {

    fork {
        Camera.LerpDofSettings({'kind': 7, 'TiltShiftCenterY': 0.75, 'TiltShiftCenterX': 0.0, 'BlurRatio': 1.0, 'BlurSizeScale': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftRange': 0.20000000298023224, 'TiltShiftGamma': 2.0, 'TiltShiftBlurSizeScale': 1.0, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofBlurRatio': 1.0, 'duration': 0.0, 'TiltShiftDofBackBlurFadeWidth': 0.05000000074505806, 'TiltShiftDofFocalDistance': 36.0, 'TiltShiftDofBackRange': 40.0, 'TiltShiftDofBackCurve': 0.5, 'FocalDistance': 24.5, 'FocusRange': 1.0, 'noWait': False})
        Camera.PlayActorOriginCameraAnimation({'chaseRatio': 1.0, 'farClipDistanceCtrl': True, 'name': 'DekuTreeAppear01_cam', 'path': 'actor/DekuTree.bfres', 'offsetY': 0.0, 'offsetZ': 3.0, 'target': ActorIdentifier(name="DekuTree"), 'offsetX': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Player.SetVisibility({'visible': False})
        Player.WarpToActor({'actor': ActorIdentifier(name="DekuTree"), 'distance': 10.0, 'offsetY': 0.0, 'offsetX': 0.0})
        Player.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

        call EvResetCommon.AllReset()

    } {
        Partner[companion].SetVisibility({'visible': False})
        Partner[companion].WarpToActor({'offsetY': 1.0, 'distance': 10.5, 'actor': ActorIdentifier(name="DekuTree"), 'offsetX': -1.0})
        Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Audio.SetRegionBgmVolume({'volume': 0.0, 'fadeSec': 2.5})
        Timer.Wait({'time': 2.5999999046325684})
        Audio.StopAllBGM({'duration': 0.0})
    }

    Timer.Wait({'time': 2.0})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'offsetY': 0.25, 'distanceOffset': 15.0, 'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="DekuTree"), 'duration': 0.0, 'chaseRatio': 1.0, 'weight1': 1.0, 'weight2': 1.0, 'offsetX': 0.0, 'offsetZ': 0.0})
    } {
        Player.SetVisibility({'visible': True})
    } {
        Partner[companion].SetVisibility({'visible': True})
    }

    Timer.Wait({'time': 1.0})

    fork {
        DekuTree.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Dialog.Show({'message': 'scenario/StoryAreaH:MeetDekuTree_010'})
    } {
        Timer.Wait({'time': 0.5})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'actor': ActorIdentifier(name="DekuTree"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.800000011920929})
        Partner[companion].SetInterestIkEnabled({'enable': True})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="DekuTree"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Dialog.Show({'message': 'scenario/StoryAreaH:MeetDekuTree_020'})
    DekuTree.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    call GeneralSequence.ZeldaTalkMotion_1.5s()

    DekuTree.PlayAnimation({'name': 'talk_trouble', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Dialog.Show({'message': 'scenario/StoryAreaH:MeetDekuTree_030'})
    DekuTree.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    DekuTree.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    DekuTree.SetTalkerName({'message': 'glossary/Character:DekuTree', 'keep': True})
    DekuTree.Talk({'message': 'scenario/StoryAreaH:MeetDekuTree_040', 'getAttention': False})
    DekuTree.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    DekuTree.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    DekuTree.Talk({'message': 'scenario/StoryAreaH:MeetDekuTree_050', 'getAttention': False})
    DekuTree.Talk({'message': 'scenario/StoryAreaH:MeetDekuTree_060', 'getAttention': False})
    DekuTree.Talk({'message': 'scenario/StoryAreaH:MeetDekuTree_070', 'getAttention': False})
    DekuTree.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})

    fork {
        Player.SetInterestIkEnabled({'enable': False})
        Player.ResetAim()
    } {
        Partner[companion].SetInterestIkEnabled({'enable': False})
        Partner[companion].ResetAim()
    }

    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Timer.Wait({'time': 1.0})
}
