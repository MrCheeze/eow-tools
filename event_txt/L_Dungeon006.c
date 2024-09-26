-------- EventFlow: L_Dungeon006 --------

Actor: Partner
entrypoint: None()
actions: ['PlayAnimationNoWait', 'PlayAnimation', 'MoveToTargetActor', 'LookAtTalker', 'AimCompassPoint']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['UnforbidSave', 'EnableAutoSave', 'ForbidWarp', 'LoadAsset']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'PlayLocationOriginCameraAnimation']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['MoveToTargetActor', 'SetInterestIkEnabled', 'AimActor', 'SetVisibility', 'AimActorLinkedPoint']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['StopZoneBgm', 'PlayOneshotSystemSE', 'StopAllBGM', 'Prepare', 'PlayBGM', 'PlayZoneBGM', 'SetTimeToRegionBgmPlay', 'PlayZoneBaseAmbience']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: []
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: []
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['MoveToTargetLinkedPoint', 'DisableAutoMovement', 'Talk', 'GenericTalkSequenceWithDialog', 'PlayAnimationNoWait', 'AimPlayer', 'SetInterestIkEnabled', 'MoveToCompassPoint', 'PlayAnimation', 'SetVisibility', 'AimActorLinkedPoint']
queries: []
params: None

Actor: AreaStartTag
entrypoint: None()
actions: []
queries: []
params: None

void FindNote() {
    Partner[companion].MoveToTargetLinkedPoint({'index': 1, 'speed': 0, 'actor': ActorIdentifier(name="Area"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Partner[companion].AimActorLinkedPoint({'pointIndex': 0, 'actor': ActorIdentifier(name="Area"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        Timer.Wait({'time': 0.8999999761581421})
        Audio.StopAllBGM({'duration': 2.0})
        Audio.Prepare({'label': 'BGM_EV_COMMON1', 'kind': 0, 'volume': 1.0})
    } {
        GameControl.LoadAsset({'path': 'map/S_Dungeon006_001.bfres'})
    } {
        Partner[companion].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/StoryAreaG:FindNote_010', 'aimToPlayer': False, 'aimFromPlayer': False, 'cameraLookAt': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        Player.AimActorLinkedPoint({'actor': ActorIdentifier(name="Area"), 'pointIndex': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

        fork {
            Camera.PlayLocationOriginCameraAnimation({'path': 'map/S_Dungeon006_001.bfres', 'name': 'BlockedEntrance01_cam', 'location': 'BlockedEntrance01_cam', 'offsetZ': 0.0, 'offsetY': -0.25, 'chaseRatio': 1.0, 'offsetX': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
        } {
            Partner[companion].SetVisibility({'visible': False})
        } {
            Player.SetVisibility({'visible': False})
        }

    }

    Partner[companion].Talk({'message': 'scenario/StoryAreaG:FindNote_020', 'getAttention': False})
    Audio.PlayBGM({'label': 'BGM_EV_COMMON1', 'ignoreSkip': False, 'volume': 1.0})
    Dialog.Show({'message': 'scenario/StoryAreaG:FindNote_030'})
    Partner[companion].Talk({'message': 'scenario/StoryAreaG:FindNote_040', 'getAttention': False})
    Camera.PlayLocationOriginCameraAnimation({'path': 'map/S_Dungeon006_001.bfres', 'name': 'BlockedEntrance01_cam', 'location': 'BlockedEntrance01_cam', 'chaseRatio': 0.10000000149011612, 'offsetX': -0.5, 'offsetY': -0.5, 'offsetZ': -2.5, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaG:FindNote_050', 'getAttention': False})
    Timer.Wait({'time': 1.0})
    Partner[companion].Talk({'message': 'scenario/StoryAreaG:FindNote_060', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'offsetY': -0.6000000238418579, 'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].SetInterestIkEnabled({'enable': True})
        Partner[companion].AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Partner[companion].SetVisibility({'visible': True})
    } {
        Player.SetVisibility({'visible': True})
    }

    Timer.Wait({'time': 0.5})
    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaG:FindNote_060_02', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    QuestSystem.SetProgress({'symbol': 'Snowmountain:2648648469', 'isShowTelopInEvent': False, 'isFrontFade': False})
    Audio.StopAllBGM({'duration': 2.0})
    Audio.SetTimeToRegionBgmPlay({'waitSec': 2.0})
    Audio.PlayZoneBGM({'stopbgm': False})
}

void IntoDungeonAreaG() {

    call EvResetCommon.AllReset()


    fork {

        call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

    } {
        Player.MoveToTargetActor({'speed': 0, 'distance': 1.5, 'actor': ActorIdentifier(name="Player"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    Partner[companion].DisableAutoMovement()
    Partner.PlayAnimationNoWait({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner.MoveToTargetActor({'speed': 0, 'offsetY': 2.0, 'distance': 1.5, 'actor': ActorIdentifier(name="Player"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0})
    Timer.Wait({'time': 0.699999988079071})
    Partner.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        Partner.PlayAnimation({'name': 'appeal02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_PARTNER_APPEAL', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 0.699999988079071})
    Partner.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].MoveToTargetLinkedPoint({'index': 0, 'speed': 0, 'actor': ActorIdentifier(name="AreaStartTag"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Partner.LookAtTalker({'keep': True, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 0.699999988079071})
    Partner[companion].MoveToCompassPoint({'direction': 2, 'speed': 0, 'distance': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.800000011920929})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.SetInterestIkEnabled({'enable': True})

        call GeneralSequence.Look_at_Partner()

    } {
        Partner[companion].SetInterestIkEnabled({'enable': True})
        Partner[companion].AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 1.0, 'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetZ': 0.5, 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaG:IntoDungeon_AreaG_010', 'getAttention': False})
}

void AfterReleasTriTalk() {
    Audio.StopZoneBgm()
    Audio.PlayZoneBaseAmbience()

    call GeneralSequence.LookReturnPartner()

    Timer.Wait({'time': 1.0})

    call GeneralSequence.PartnerLvelUp({'Key': 'L006'})


    call GeneralSequence.LD_WorldGlobePieceGet({'Dungeon': 'L006', 'Idx': 105})

    Timer.Wait({'time': 1.0})

    call GeneralSequence.ReleaseofGoddess_Nayru()

    Timer.Wait({'time': 1.0})
    Partner[companion].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaG:EvG_BossDead_010', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaG:EvG_BossDead_020', 'getAttention': False})
    Timer.Wait({'time': 1.5})
    Partner[companion].PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:LetsGoBack_010', 'getAttention': False})

    fork {
        GameControl.UnforbidSave()
    } {
        GameControl.EnableAutoSave()
    }

    GameControl.ForbidWarp()
    QuestSystem.SetProgress({'symbol': 'Snowmountain:3271194676', 'isShowTelopInEvent': False, 'isFrontFade': False})
    QuestSystem.SetProgress({'symbol': 'Snowmountain:4080146613', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'Snowmountain_TouchWedge'})
    EventFlags.SetFlag({'value': True, 'symbol': 'Snowmountain_WedgeActive'})
}
