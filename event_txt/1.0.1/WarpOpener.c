-------- EventFlow: WarpOpener --------

Actor: Zelda
entrypoint: None()
actions: ['WarpToActorLinkedPoint']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestAutoSave']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['AimCompassPoint', 'ResetAim', 'PlayAnimationNoWait']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag', 'CheckLevelFlag']
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'LerpDofSettings']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: ['LookAtGimmicksLinkedPoint']
queries: []
params: None

Actor: TutorialUI
entrypoint: None()
actions: ['ShowModal']
queries: []
params: None

Actor: WarpUI
entrypoint: None()
actions: ['ShowRegisterMenu', 'RegisterWarpPoint', 'Close', 'Show']
queries: []
params: None

Actor: WarpOpener
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait', 'SetRestartPositionToActor']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['TalkKeep', 'Talk', 'DisableAutoMovement', 'MoveToTargetLinkedPoint', 'AimPlayer', 'PlayAnimationNoWait', 'WarpToActorLinkedPoint', 'LookAtTalker', 'GenericTalkSequenceWithDialog', 'AimActor', 'PlayAnimation', 'MoveToTargetActor', 'SetPartnerTalkCoolTime']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: []
queries: []
params: None

void WarpRegister() {
    Partner[companion].DisableAutoMovement()
    if !EventFlags.CheckLevelFlag({'index': 148}) {

        call EvResetCommon.AllReset()

    } else {

        call NorthForest._AllResetnorthforest({'disappearHorse': True})

    }

    fork {
        WarpOpener.PlayTailorOtherChannelNoWait({'channel': 'activateWarp', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Timer.Wait({'time': 1.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_WARP_ON', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 0.800000011920929})
    WarpUI.ShowRegisterMenu({'warpFlagName': 'warpFlagName'})
    WarpUI.RegisterWarpPoint()
    Dialog.Show({'message': 'System:WarpRegister'})
    WarpUI.Close()
    WarpOpener.SetRestartPositionToActor({'distance': 1.5, 'direction': 0, 'stance': 'Ground'})
    GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
    if !EventFlags.CheckFlag({'symbol': 'EvFirstWarpSucces'}) {

        call Warp_info()

    }
}

void WarpTuto() {

    call EvResetCommon.AllReset()


    fork {
        Timer.Wait({'time': 0.699999988079071})

        call GeneralSequence.Look_at_Partner()

    } {
        Partner[companion].MoveToTargetLinkedPoint({'speed': 0, 'index': 2, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Camera.LerpDofSettings({'kind': 7, 'TiltShiftCenterX': 0.0, 'BlurRatio': 1.0, 'BlurSizeScale': 1.0, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'TiltShiftRange': 0.20000000298023224, 'TiltShiftGamma': 2.0, 'TiltShiftBlurSizeScale': 1.0, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofBlurRatio': 1.0, 'duration': 0.0, 'TiltShiftDofBackBlurFadeWidth': 0.05000000074505806, 'TiltShiftDofBackCurve': 0.5, 'FocusRange': 1.0, 'TiltShiftCenterY': 0.699999988079071, 'TiltShiftDofFocalDistance': 70.0, 'TiltShiftDofBackRange': 20.0, 'FocalDistance': 20.0, 'noWait': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'weight2': 1.0, 'distanceOffset': 8.0, 'weight1': 1.2000000476837158, 'actor1': ActorIdentifier(name="Partner", sub_name="companion"), 'actor2': ActorIdentifier(name="Zelda"), 'offsetY': -0.5, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetZ': 0.0})
    }

    Timer.Wait({'time': 0.5})
    Partner[companion].PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:WarpTuto_010', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'appeal02,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:WarpTuto_020', 'getAttention': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvAreaA030'})
    Partner[companion].SetPartnerTalkCoolTime({'time': 0.0})
}

void Warp_areaout() {

    call EvResetCommon.AllReset()

    Partner[companion].MoveToTargetActor({'speed': 0, 'offsetY': 2.0, 'actor': ActorIdentifier(name="Player"), 'distance': -2.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0})
    Partner[companion].AimPlayer({'duration': 0.5, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].TalkKeep({'message': 'scenario/StoryAreaA:PleaseWarp_010', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:PleaseWarp_020', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Area.LookAtGimmicksLinkedPoint({'distanceOffset': 0.0, 'pointIndex': 1, 'chaseRatio': 0.10000000149011612, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Zelda.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'index': 1, 'offsetY': 0.0})
    Partner[companion].WarpToActorLinkedPoint({'index': 2, 'actor': ActorIdentifier(name="Area"), 'offsetY': 0.0})

    call GeneralSequence.Look_at_Partner()

    Partner.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    Partner[companion].PlayAnimationNoWait({'name': 'appeal02,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:WarpTuto_020', 'getAttention': False})
    Partner[companion].SetPartnerTalkCoolTime({'time': 0.0})
}

void Warp_info() {
    Partner[companion].DisableAutoMovement()

    fork {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {

        call GeneralSequence.Look_at_Partner()

    } {
        Partner[companion].LookAtTalker({'distanceOffset': 1.0, 'offsetY': -2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetZ': 0.0, 'keep': False})
    }

    Timer.Wait({'time': 0.5})
    Partner[companion].GenericTalkSequenceWithDialog({'cameraLookAt': False, 'distanceOffset': 1.0, 'aimToPlayer': False, 'aimFromPlayer': False, 'playerTalkAnim': False, 'message': 'scenario/StoryAreaA:FirstWarpSucces_010', 'selfTalkAnimName': 'happy', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Partner[companion].PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].TalkKeep({'message': 'scenario/StoryAreaA:FirstWarpSucces_020', 'getAttention': False})
    Partner[companion].TalkKeep({'message': 'scenario/StoryAreaA:FirstWarpSucces_030', 'getAttention': False})
    Partner.ResetAim()
    Partner.PlayAnimationNoWait({'name': 'yes,talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:FirstWarpSucces_040', 'getAttention': False})

    fork {
        TutorialUI.ShowModal({'key': 'EvAreaA030Modal'})
    } {
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.5})
    Partner[companion].PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].TalkKeep({'message': 'scenario/StoryAreaA:FirstWarpSucces_050', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:FirstWarpSucces_060', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvFirstWarpSucces'})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvAreaA030'})
    EventFlags.SetFlag({'value': True, 'symbol': 'WeatherUnLock'})
}

void MapMenuOpener() {
    WarpUI.Show()
}
