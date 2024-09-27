-------- EventFlow: L_Dungeon001 --------

Actor: Partner
entrypoint: None()
actions: ['AimPlayer', 'PlayAnimationNoWait', 'WarpToDefaultPosition']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Reset', 'LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: Audio
entrypoint: None()
actions: ['StopZoneBgm', 'StopBGM', 'PlayZoneBaseAmbience', 'SetPauseAllSE']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor', 'AimCompassPoint', 'WarpToActorWithCompassPoint', 'SetInterestIkEnabled', 'DestroyCollisionHitActors', 'SetGravityEnable', 'PlayAnimationNoWait']
queries: ['IsSyncConnected']
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

Actor: GameControl
entrypoint: None()
actions: ['UnforbidSave', 'EnableAutoSave', 'ForbidWarp', 'RequestAutoSave', 'UnforbidWarp']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['MoveToBesideTargetActor', 'DisableAutoMovement', 'TalkKeep', 'AimPlayer', 'Talk', 'PlayAnimation', 'GenericTalkSequenceWithDialog', 'MoveToCompassPoint', 'AimDegreeAngle', 'AimActor', 'AimCompassPoint']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['ActivateSyncReverse', 'MoveToTargetActor', 'SetShadowDecalEnable', 'MoveToCompassPoint', 'AimActor', 'SetInterestIkEnabled']
queries: []
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: TutorialUI
entrypoint: None()
actions: ['ShowModal']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: TagSyncObserver
entrypoint: None()
actions: ['Destroy']
queries: []
params: None

Actor: GatePartnerPhoton
entrypoint: None()
actions: []
queries: []
params: None

void PleaseCopySword_S() {

    call EvResetCommon.AllReset()

    Partner.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Partner.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:PleaseCopySword_005', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.5})
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Area.LookAtGimmicksLinkedPoint({'pointIndex': 0, 'distanceOffset': 0.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 0.5})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:PleaseCopySword_010', 'getAttention': False})
    } {
        Zelda.SetInterestIkEnabled({'enable': False})
        Zelda.WarpToActorWithCompassPoint({'offsetY': 0.0, 'direction': 2, 'actor': ActorIdentifier(name="GatePartnerPhoton"), 'distance': 0.0, 'offsetX': 0.0})
        Timer.Wait({'time': 0.10000000149011612})
        Partner.WarpToDefaultPosition({'position': 2, 'avoidWall': False, 'avoidPlayer': False})
        Zelda.DestroyCollisionHitActors({'eventReset': True})
    }

    Timer.Wait({'time': 0.5})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
}

void AfterBreakBarricade() {
    EventVariables.SetVariable({'symbol': 'HyruleCastle_LuberiHouse:1530784116'})
    GameControl.UnforbidWarp()
}

void PleaseLookLinkBarricade() {

    call EvResetCommon.AllReset()


    fork {
        Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetY': 1.0, 'offsetZ': 1.0, 'actor': ActorIdentifier(name="Zelda"), 'offsetX': -1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})
    Area.LookAtGimmicksLinkedPoint({'pointIndex': 0, 'distanceOffset': 0.0, 'offsetZ': 3.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0})
    Timer.Wait({'time': 0.5})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:LookLinkBarricade_050', 'getAttention': False})
    } {
        Zelda.SetInterestIkEnabled({'enable': False})
        Zelda.WarpToActorWithCompassPoint({'offsetY': 0.0, 'direction': 2, 'actor': ActorIdentifier(name="GatePartnerPhoton"), 'distance': 0.0, 'offsetX': 0.0})
        Timer.Wait({'time': 0.10000000149011612})
        Partner.WarpToDefaultPosition({'position': 2, 'avoidWall': False, 'avoidPlayer': False})
        Zelda.DestroyCollisionHitActors({'eventReset': True})
    }

    Timer.Wait({'time': 0.5})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
}

void SyncRodTutorial_2() {
    if Zelda.IsSyncConnected() {
        if !EventFlags.CheckFlag({'symbol': 'SyncRodTutorial'}) {
            Zelda.SetGravityEnable({'enable': False})
            Zelda.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

            fork {
                Timer.Wait({'time': 1.5})
            } {
                Zelda.AimActor({'actor': ActorIdentifier(name="Partner"), 'duration': 0.5, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            }

            Partner[companion].GenericTalkSequenceWithDialog({'aimFromPlayer': False, 'cameraLookAt': False, 'playerTalkAnim': False, 'message': 'scenario/StoryAreaA:SyncRodTutorial_2_010', 'aimToPlayer': False, 'selfTalkAnim': False, 'unsync': False, 'disableSyncRodBallFollow': False, 'absorbAllPastedActors': False, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
            if !EventFlags.CheckFlag({'symbol': 'SyncRodModal_Clear'}) {
                TutorialUI.ShowModal({'key': 'SyncRodModal'})
                Audio.SetPauseAllSE({'isPause': False})
                EventFlags.SetFlag({'value': True, 'symbol': 'SyncRodModal_Clear'})
                EventFlags.SetFlag({'value': True, 'symbol': 'TutorialInsert_SyncRod_Clear'})
                EventFlags.SetFlag({'value': True, 'symbol': 'SyncRodTutorial'})
            }
        } else {
            TagSyncObserver.Destroy()
        }
    }
}

void SyncRodReverseTuto() {

    call EvResetCommon.AllReset()

    Partner[companion].DisableAutoMovement()
    Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetY': 1.0, 'offsetZ': 0.0, 'offsetX': -1.5, 'actor': ActorIdentifier(name="Zelda"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:SyncRodReverseTuto_010', 'getAttention': False})
    Zelda.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].TalkKeep({'message': 'scenario/StoryAreaA:SyncRodReverseTuto_020', 'getAttention': False})
    Partner[companion].TalkKeep({'message': 'scenario/StoryAreaA:SyncRodReverseTuto_030', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:SyncRodReverseTuto_040', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    TutorialUI.ShowModal({'key': 'SyncRodReverseModal'})
    Player.ActivateSyncReverse()
    EventVariables.SetVariable({'symbol': 'HyruleCastle_LuberiHouse:3115678743'})
}

void IntoDungeonAreaA() {

    call EvResetCommon.AllReset()


    fork {

        call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

    } {
        Player.MoveToTargetActor({'speed': 0, 'actor': ActorIdentifier(name="Player"), 'distance': 1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    Partner[companion].DisableAutoMovement()
    Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetY': 1.0, 'offsetZ': -1.0, 'actor': ActorIdentifier(name="Player"), 'offsetX': 1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})

    fork {
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})

        call GeneralSequence.Look_at_Partner()

    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }


    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:IntoDungeon_AreaA_010', 'getAttention': False})
    } {
        Partner[companion].PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].MoveToCompassPoint({'speed': 0, 'direction': 2, 'distance': 1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    Partner[companion].PlayAnimation({'name': 'lookaround', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Partner[companion].Talk({'message': 'scenario/StoryAreaA:IntoDungeon_AreaA_020', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        Player.SetInterestIkEnabled({'enable': False})
        Player.MoveToCompassPoint({'speed': 0, 'distance': 1.5, 'direction': 2, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Timer.Wait({'time': 0.5})
        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    }

    QuestSystem.SetProgress({'symbol': 'HyruleCastle_LuberiHouse:2384585407', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventVariables.SetVariable({'symbol': 'HyruleCastle_LuberiHouse:2477526100'})
}

void AfterReleasTriTalk() {
    Audio.PlayZoneBaseAmbience()
    Audio.StopZoneBgm()

    call GeneralSequence.LookReturnPartner()

    Timer.Wait({'time': 1.0})

    call GeneralSequence.PartnerLvelUp({'Key': 'L001'})


    call GeneralSequence.LD_WorldGlobePieceGet({'Idx': 75, 'Dungeon': 'L001'})

    Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': False, 'actor': ActorIdentifier(name="Player"), 'offsetY': 0.0, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Player.AimActor({'offsetY': -0.6000000238418579, 'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Partner[companion].PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner[companion].Talk({'message': 'scenario/PartnerTalk:AfterReleasPartnerTalk010_060', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Partner[companion].AimDegreeAngle({'angle': 240.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:AfterReleasPartnerTalk010_065', 'getAttention': False})

    fork {
        Timer.Wait({'time': 0.5})
        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    } {
        Zelda.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    Player.SetShadowDecalEnable({'enable': True})
    EventFlags.SetFlag({'symbol': 'EvAreaA013', 'value': True})

    fork {
        GameControl.UnforbidSave()
    } {
        GameControl.EnableAutoSave()
    }

    GameControl.ForbidWarp()
    QuestSystem.SetProgress({'symbol': 'HyruleCastle_LuberiHouse:1055863140', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventVariables.SetVariable({'symbol': 'HyruleCastle_LuberiHouse:1055863140'})
    GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
    Audio.StopBGM({'label': 'BGM_EV_PARTNER_APPEAR', 'duration': 2.0})
}
