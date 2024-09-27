-------- EventFlow: ImpostorJabujabu --------

Actor: Player
entrypoint: None()
actions: ['MoveToBesideTargetActor', 'AimActor', 'PlayAnimationNoWait', 'WarpToActorLinkedPoint', 'AimCompassPoint', 'SetInterestIkEnabled', 'OverwriteRecoveryPos', 'UpdateStrongRespawnPoint']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Hud
entrypoint: None()
actions: ['PlayInAnim', 'PlayOutAnim']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['MoveToBesideTargetActor']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor', 'Talk', 'MoveToBesideTargetActor', 'AimCompassPoint', 'AimPlayer', 'PlayAnimationNoWait', 'MoveToCompassPoint']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayZoneBGM', 'StopAllBGM', 'PlayBGM', 'PlayOneshotSystemSE', 'Prepare', 'StopSE', 'DisablePlaySeFromTailor', 'EnablePlaySeFromTailor']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Reset', 'LookAt3ActorsCenterAsTalker', 'LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['SetCanSkip']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestAutoSave', 'ForbidSave', 'DisableAutoSave', 'UnforbidSave', 'EnableAutoSave']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimCompassPoint', 'AimActor', 'WarpToActor']
queries: []
params: None

Actor: BossBarrier
entrypoint: None()
actions: ['VanishEffect', 'LookAtGimmick', 'EmitHoldEffect']
queries: []
params: None

Actor: ImpostorJabujabu
entrypoint: None()
actions: ['LookAtGimmick', 'LookAtTalker', 'CameraLockon', 'PlayAnimation', 'PlayTailorOtherChannelNoWait', 'StartCombatAngry', 'SetVisibility', 'StopTailorOtherChannel', 'PlayMaterialAnimation', 'SetCollisionEnabled', 'SetPosition2Npc', 'StartCombat', 'SetRestartPositionToLinkedPoint', 'ResetActiveAndPesteActors']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: ZoraSea002
entrypoint: None()
actions: ['Activate', 'SetFacialExpression', 'Talk', 'PlayAnimationNoWait', 'AimActor', 'WarpToActorLinkedPoint', 'ResetFacialExpression', 'SkipAutoTurn', 'PlayAnimation', 'ResetAim']
queries: []
params: None

Actor: ZoraRiver002
entrypoint: None()
actions: ['PlayAnimation', 'Activate', 'SetFacialExpression', 'Talk', 'AimActor', 'WarpToActorLinkedPoint', 'PlayAnimationNoWait', 'SkipAutoTurn', 'ResetFacialExpression', 'SetInterestIkEnabled', 'ResetAim']
queries: []
params: None

Actor: ZoraRiverChief
entrypoint: None()
actions: ['SetInstanceVariableBool', 'Talk', 'PlayAnimationNoWait', 'AimActor', 'PlayAnimation', 'SetFacialExpression', 'AimPlayer', 'ResetFacialExpression', 'AimCompassPoint', 'SkipAutoTurn', 'KeepAnimationAfterEvent', 'WarpToActorLinkedPoint', 'ResetAim', 'SetInterestIkEnabled', 'SetComponentActive']
queries: []
params: None

Actor: ZoraSeaChief
entrypoint: None()
actions: ['SetInstanceVariableBool', 'Talk', 'PlayAnimation', 'AimActor', 'PlayAnimationNoWait', 'ResetFacialExpression', 'SetFacialExpression', 'AimPlayer', 'AimCompassPoint', 'SkipAutoTurn', 'WarpToActorLinkedPoint', 'ResetAim', 'SetInterestIkEnabled']
queries: []
params: None

Actor: BoundaryGateSign
entrypoint: None()
actions: ['Activate', 'LookAtGimmick']
queries: []
params: None

void Dead() {
    Audio.StopAllBGM({'duration': 0.5})

    call BossCommon.HitStop({'enemy': ActorIdentifier(name="ImpostorJabujabu")})

    ImpostorJabujabu.SetCollisionEnabled({'enable': False})

    fork {
        Timer.Wait({'time': 1.0})
    } {
        ImpostorJabujabu.LookAtGimmick({'duration': 0.5, 'distanceOffset': -5.0, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    }

    ImpostorJabujabu.SetPosition2Npc({'RiverNpcOffsetX': -1.0, 'SeaNpcOffsetX': 1.0, 'SeaNpcOffsetZ': -1.0, 'RiverNpcOffsetZ': -2.0, 'SeaNpcOffsetY': 0.0, 'RiverNpcOffsetY': 0.0})
    ImpostorJabujabu.PlayAnimation({'name': 'dead_st', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ImpostorJabujabu.StopTailorOtherChannel({'channel': 'Aura_Anger', 'index': -1})
        ImpostorJabujabu.PlayMaterialAnimation({'name': 'dissolve', 'layer': 0})
    } {
        Timer.Wait({'time': 1.1670000553131104})
        ImpostorJabujabu.PlayTailorOtherChannelNoWait({'channel': 'Dead', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Timer.Wait({'time': 5.666999816894531})
    } {
        Timer.Wait({'time': 2.0})

        fork {
            ZoraSea002.PlayAnimation({'name': 'supine_float', 'layer': 0, 'blendFrame': -1, 'restart': False})
            ZoraSea002.Activate()
            ZoraSea002.SetFacialExpression({'expression': 'sleep'})
        } {
            ZoraRiver002.PlayAnimation({'name': 'supine_float', 'layer': 0, 'blendFrame': -1, 'restart': False})
            ZoraRiver002.Activate()
            ZoraRiver002.SetFacialExpression({'expression': 'sleep'})
        }

    } {
        Timer.Wait({'time': 2.2669999599456787})

        call EvResetCommon.AllReset_03()

    }

    ImpostorJabujabu.SetVisibility({'visible': False})

    fork {
        Timer.Wait({'time': 1.5})
    } {
        ZoraSea002.PlayAnimation({'name': 'supine_wakeup02,wait_swim01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.0})
        ZoraSea002.ResetFacialExpression()
    } {
        ZoraRiver002.PlayAnimation({'name': 'supine_wakeup,wait_swim01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.0})
        ZoraRiver002.ResetFacialExpression()
    }

    Audio.DisablePlaySeFromTailor()
    BossBarrier.VanishEffect()
    Audio.EnablePlaySeFromTailor()
    Audio.PlayZoneBGM({'stopbgm': True})
    Timer.Wait({'time': 1.0})

    fork {
        ZoraSeaChief.SetInstanceVariableBool({'name': 'ImpostorJabuJabuAppear', 'value': False})
    } {
        ZoraRiverChief.SetInstanceVariableBool({'name': 'ImpostorJabuJabuAppear', 'value': False})
    }


    fork {
        GameControl.UnforbidSave()
    } {
        GameControl.EnableAutoSave()
    }


    call _ImitationJabuJabuDead()

}

void Angry() {

    fork {

        fork {
            Timer.Wait({'time': 1.0})
        } {
            ImpostorJabujabu.LookAtTalker({'duration': 0.5, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 10.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        } {
            Hud.PlayOutAnim()
        }


        fork {
            ImpostorJabujabu.PlayAnimation({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            ImpostorJabujabu.StopTailorOtherChannel({'channel': 'Aura_Normal', 'index': -1})
            ImpostorJabujabu.PlayTailorOtherChannelNoWait({'channel': 'Aura_Anger', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        } {
            Timer.Wait({'time': 2.0})
        }

        ImpostorJabujabu.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.5})
        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
        Hud.PlayInAnim()
        ImpostorJabujabu.CameraLockon({'maxSpeed': 100.0})
        ImpostorJabujabu.StartCombatAngry()
    } {

        call EvResetCommon.AngryReset()

    }

}

void _ImitationJabuJabuDead() {
    Player.SetInterestIkEnabled({'enable': True})
    ZoraRiverChief.SetComponentActive({'name': 'aimControlComp', 'active': True})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    ZoraRiver002.SetInterestIkEnabled({'enable': True})
    Player.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    BoundaryGateSign.Activate()
    ImpostorJabujabu.ResetActiveAndPesteActors({'child': False, 'cemeteryRevive': False, 'defeatedThrough': False, 'aliveCemeteryRevive': False})
    Player.WarpToActorLinkedPoint({'actor': ActorIdentifier(name="ImpostorJabujabu"), 'index': 9, 'offsetY': 0.0})
    Hud.PlayOutAnim()
    Player.AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    Partner[companion].MoveToBesideTargetActor({'offsetY': 1.0, 'speed': 1, 'customSpeed': 20.0, 'actor': ActorIdentifier(name="Player"), 'offsetX': 1.2000000476837158, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0})

    fork {
        ZoraSea002.WarpToActorLinkedPoint({'offsetY': 0.0, 'actor': ActorIdentifier(name="ImpostorJabujabu"), 'index': 0})
        ZoraSea002.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraSea002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver002.WarpToActorLinkedPoint({'offsetY': 0.0, 'actor': ActorIdentifier(name="ImpostorJabujabu"), 'index': 1})
        ZoraRiver002.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraRiver002.SetFacialExpression({'expression': 'sad'})
        ZoraRiver002.PlayAnimationNoWait({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.WarpToActorLinkedPoint({'offsetY': 0.0, 'actor': ActorIdentifier(name="ImpostorJabujabu"), 'index': 7})
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.WarpToActorLinkedPoint({'offsetY': 0.0, 'actor': ActorIdentifier(name="ImpostorJabujabu"), 'index': 8})
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraRiverChief.SetFacialExpression({'expression': 'sad'})
        ZoraRiverChief.PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Camera.LookAt2ActorsCenterAsTalker({'duration': 0.0, 'chaseRatio': 1.0, 'weight1': 2.0, 'weight2': 2.0, 'distanceOffset': 0.5, 'actor1': ActorIdentifier(name="ZoraRiverChief"), 'actor2': ActorIdentifier(name="ZoraRiver002"), 'offsetZ': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0})
    Timer.Wait({'time': 1.0})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvB_ImitationJabuJabuDead'})

    fork {
        Player.AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Fade.StartPreset({'preset': 'FadeInNormal'})
    ZoraRiver002.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuDead_010', 'getAttention': False})
    ZoraRiver002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuDead_020', 'getAttention': False})
    } {

        call _pd079_ZoraRivChief()

    }


    fork {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver002.PlayAnimation({'name': 'yes01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Camera.LookAt2ActorsCenterAsTalker({'weight1': 2.0, 'weight2': 2.0, 'distanceOffset': 0.5, 'offsetZ': 0.10000000149011612, 'actor1': ActorIdentifier(name="ZoraSeaChief"), 'actor2': ActorIdentifier(name="ZoraSea002"), 'chaseRatio': 0.10000000149011612, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0})
    Timer.Wait({'time': 0.5})

    fork {
        ZoraSeaChief.SetFacialExpression({'expression': 'sad'})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuDead_030', 'getAttention': False})
    } {

        call _pd079_ZoraSeaChief()

    }


    fork {
        ZoraSeaChief.ResetFacialExpression()
        ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea002.SetFacialExpression({'expression': 'smile'})
        ZoraSea002.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSea002.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuDead_040', 'getAttention': False})
    } {

        call _pd079_ZoraSea002()

    }

    ZoraSeaChief.SetFacialExpression({'expression': 'smile'})
    ZoraSeaChief.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="ZoraSeaChief"), 'actor2': ActorIdentifier(name="ZoraRiverChief"), 'actor3': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        ZoraRiverChief.ResetFacialExpression()
    } {
        ZoraRiver002.SetFacialExpression({'expression': 'normal'})
        ZoraRiver002.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraRiver002.PlayAnimation({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver002.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuDead_050', 'getAttention': False})
        ZoraRiver002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'normal'})
        ZoraSeaChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraSea002.ResetFacialExpression()
    } {

        call _pd079_ZoraRiv002()

    }


    fork {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuDead_060', 'getAttention': False})
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {

        fork {
            Timer.Wait({'time': 0.25})
            ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.4000000059604645})
            ZoraSea002.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    } {

        call _pd079_ZoraRivChief()

    }


    fork {
        ZoraRiverChief.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraRiverChief.AimActor({'duration': 0.20000000298023224, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraRiver002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver002.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.SetFacialExpression({'expression': 'smile'})
        ZoraSeaChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuDead_070', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        ZoraSea002.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {

        call _pd079_ZoraSeaChief()

    }


    fork {
        Timer.Wait({'time': 0.27000001072883606})
        ZoraRiverChief.SetFacialExpression({'expression': 'smile'})
        ZoraRiverChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        ZoraRiver002.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        ZoraSea002.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        ZoraRiver002.SetFacialExpression({'expression': 'smile'})
        ZoraRiver002.PlayAnimationNoWait({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver002.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuDead_080', 'getAttention': False})
    } {

        call _pd079_ZoraRiv002()

    } {
        Timer.Wait({'time': 0.25})
        ZoraSea002.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        ZoraSea002.SetFacialExpression({'expression': 'smile'})
        ZoraSea002.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSea002.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuDead_090', 'getAttention': False})
    } {
        ZoraRiver002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver002.AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {

        call _pd079_ZoraSea002()

    } {
        Timer.Wait({'time': 0.25})
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        Audio.PlayOneshotSystemSE({'label': 'VO_ZORA_RIVER_CHIEF_002_5', 'volume': 1.0, 'pitch': 1.0})
        ZoraRiverChief.ResetAim()
        ZoraRiverChief.PlayAnimationNoWait({'name': 'happy', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Audio.PlayOneshotSystemSE({'label': 'SEQ_VO_ZORA_M013_1_002_6', 'volume': 1.0, 'pitch': 1.0})
        ZoraRiver002.ResetAim()
        ZoraRiver002.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Audio.PlayOneshotSystemSE({'label': 'VO_ZORA_SEA_CHIEF_002_5', 'volume': 1.0, 'pitch': 1.0})
        ZoraSeaChief.ResetAim()
        ZoraSeaChief.PlayAnimationNoWait({'name': 'fun', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Audio.PlayOneshotSystemSE({'label': 'VO_ZORA_M3_1_002_6', 'volume': 1.0, 'pitch': 1.0})
        ZoraSea002.ResetAim()
        ZoraSea002.PlayAnimationNoWait({'name': 'happy01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Player.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Partner[companion].PlayAnimationNoWait({'name': 'appeal02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 1.5})
    ZoraSeaChief.ResetAim()
    ZoraSeaChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.6000000238418579})

    fork {
        ZoraSeaChief.SetFacialExpression({'expression': 'sleep'})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuDead_110', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraRiver002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver002.ResetFacialExpression()
        ZoraRiver002.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.ResetFacialExpression()
        ZoraRiverChief.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        ZoraSea002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraSea002.ResetFacialExpression()
        ZoraSea002.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {

        call _pd079_ZoraSeaChief()

    }


    fork {
        Timer.Wait({'time': 0.800000011920929})
        Player.AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        Partner[companion].MoveToCompassPoint({'direction': 2, 'speed': 0, 'distance': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    Timer.Wait({'time': 0.4000000059604645})

    fork {
        BoundaryGateSign.LookAtGimmick({'duration': 3.0, 'chaseRatio': 0.03999999910593033, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    } {

        fork {
            Timer.Wait({'time': 2.0})
        } {
            Player.AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
        } {
            Partner[companion].MoveToBesideTargetActor({'offsetY': 1.0, 'speed': 1, 'customSpeed': 20.0, 'actor': ActorIdentifier(name="Player"), 'offsetX': 1.2000000476837158, 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0})
            Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        } {

            fork {
                ZoraRiverChief.ResetFacialExpression()
                ZoraRiverChief.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Player"), 'duration': 0.0, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                ZoraSea002.ResetFacialExpression()
                ZoraSea002.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Player"), 'duration': 0.0, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                ZoraSea002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                ZoraSeaChief.ResetFacialExpression()
                ZoraSeaChief.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Player"), 'duration': 0.0, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                ZoraRiver002.ResetFacialExpression()
                ZoraRiver002.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Player"), 'duration': 0.0, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                ZoraRiver002.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

        }

        Partner[companion].Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuDead_120', 'getAttention': False})
    }


    fork {
        Camera.LookAt3ActorsCenterAsTalker({'duration': 4.0, 'chaseRatio': 0.03999999910593033, 'actor1': ActorIdentifier(name="ZoraSeaChief"), 'actor2': ActorIdentifier(name="ZoraRiverChief"), 'actor3': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 2.0})

        fork {

            call GeneralSequence.ZeldaTalkMotion()

        } {
            Timer.Wait({'time': 0.20000000298023224})
            ZoraRiverChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }


    fork {
        ZoraRiverChief.SetFacialExpression({'expression': 'sleep'})
        ZoraRiverChief.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuDead_130', 'getAttention': False})
    } {

        call _pd079_ZoraRivChief()

    } {

        fork {
            ZoraRiver002.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            ZoraSeaChief.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            ZoraSea002.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    ZoraRiverChief.ResetFacialExpression()
    ZoraRiverChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiverChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuDead_140', 'getAttention': False})
    ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraSeaChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuDead_150', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {

        call _pd079_ZoraSeaChief()

    } {

        fork {
            ZoraRiver002.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            ZoraRiverChief.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            ZoraSea002.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }


    fork {
        Timer.Wait({'time': 0.20000000298023224})
        ZoraRiverChief.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        ZoraRiverChief.PlayAnimation({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Player.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }


    fork {
        ZoraRiver002.SkipAutoTurn()
    } {
        ZoraSea002.SkipAutoTurn()
    } {
        ZoraRiverChief.SkipAutoTurn()
    } {
        ZoraSeaChief.SkipAutoTurn()
    }

    QuestSystem.SetProgress({'symbol': 'Coast_River:1775022245', 'isShowTelopInEvent': False, 'isFrontFade': False})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
}

void ImitationJabuJabuAppear() {

    call EvResetCommon.AllReset()

    Player.SetInterestIkEnabled({'enable': True})
    ZoraRiverChief.SetInterestIkEnabled({'enable': False})
    ZoraSeaChief.SetInterestIkEnabled({'enable': False})
    Camera.LookAt3ActorsCenterAsTalker({'distanceOffset': 8.0, 'weight2': 2.0, 'weight3': 2.0, 'offsetZ': 0.0, 'actor1': ActorIdentifier(name="ImpostorJabujabu"), 'actor2': ActorIdentifier(name="ZoraSeaChief"), 'actor3': ActorIdentifier(name="ZoraRiverChief"), 'weight1': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0})

    fork {
        Player.MoveToBesideTargetActor({'speed': 1, 'offsetZ': 1.5, 'offsetX': 2.0, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner.MoveToBesideTargetActor({'offsetY': 1.0, 'speed': 1, 'offsetZ': 2.0, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'offsetX': -1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    }


    fork {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ImpostorJabujabu"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="ImpostorJabujabu"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    ZoraRiverChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuAppear_010', 'getAttention': False})
    } {

        call pd077_ZoraRivChief()

    }

    ZoraSeaChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuAppear_020', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {

        call pd077_ZoraSeaChief()

    }


    fork {
        ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 2.0})
    ZoraRiverChief.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuAppear_030', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.5})
        ZoraSeaChief.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {

        call pd077_ZoraRivChief()

    }

    ZoraSeaChief.ResetFacialExpression()
    ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraRiverChief.PlayAnimation({'name': 'surprised_ed,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraRiverChief.SetFacialExpression({'expression': 'trollface'})
    ZoraRiverChief.PlayAnimationNoWait({'name': 'trollface_st,trollface_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuAppear_040', 'getAttention': False})
    ZoraSeaChief.ResetFacialExpression()
    ZoraSeaChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuAppear_050', 'getAttention': False})
    } {

        call pd077_ZoraSeaChief()

    }

    ZoraRiverChief.SetFacialExpression({'expression': 'angry'})
    ZoraRiverChief.PlayAnimationNoWait({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuAppear_060', 'getAttention': False})
    } {

        call _pd079_ZoraRivChief()

    }

    Timer.Wait({'time': 1.0})
    ImpostorJabujabu.LookAtTalker({'distanceOffset': 4.0, 'offsetY': 2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetZ': 0.0, 'keep': False})
    ZoraRiverChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSeaChief.AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    } {
        ZoraRiverChief.AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Player.AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    }


    fork {
        ImpostorJabujabu.PlayMaterialAnimation({'layer': 0, 'name': 'Impostor'})
    } {
        ImpostorJabujabu.PlayTailorOtherChannelNoWait({'channel': 'Aura_Normal', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    }


    fork {
        ImpostorJabujabu.PlayAnimation({'name': 'bark_st', 'blendFrame': -1, 'layer': 0, 'restart': False})
        Timer.Wait({'time': 1.0})
        ImpostorJabujabu.PlayAnimation({'name': 'bark_ed,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Camera.LookAt3ActorsCenterAsTalker({'distanceOffset': 8.0, 'weight2': 2.0, 'weight3': 2.0, 'actor1': ActorIdentifier(name="ImpostorJabujabu"), 'actor2': ActorIdentifier(name="ZoraSeaChief"), 'actor3': ActorIdentifier(name="ZoraRiverChief"), 'offsetZ': 0.0, 'weight1': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_ENEMY_JYABU_BARK_1ST', 'volume': 1.0, 'pitch': 1.0})
        Audio.Prepare({'label': 'BGM_EV_COMMON3', 'kind': 0, 'volume': 1.0})
    }


    fork {
        ZoraSeaChief.SetFacialExpression({'expression': 'surprise'})
        ZoraSeaChief.PlayAnimation({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiverChief.SetFacialExpression({'expression': 'surprise'})
        ZoraRiverChief.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuAppear_070', 'getAttention': False})
    } {

        call pd077_ZoraRivChief()

    } {
        Audio.PlayBGM({'label': 'BGM_EV_COMMON3', 'volume': 1.0, 'ignoreSkip': True})
    }

    ZoraSeaChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSeaChief.SetFacialExpression({'expression': 'angry'})
    ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraSeaChief.PlayAnimation({'name': 'angry_st', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuAppear_080', 'getAttention': False})
    } {

        call pd077_ZoraSeaChief()

    }

    Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetY': 0.699999988079071, 'offsetX': 1.2000000476837158, 'offsetZ': -0.20000000298023224, 'actor': ActorIdentifier(name="Player"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Camera.LookAt2ActorsCenterAsTalker({'weight2': 1.0, 'offsetZ': 0.699999988079071, 'distanceOffset': 1.5, 'actor1': ActorIdentifier(name="ZoraRiverChief"), 'actor2': ActorIdentifier(name="ZoraSeaChief"), 'weight1': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuAppear_090', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Player.AimActor({'actor': ActorIdentifier(name="Partner"), 'withoutTurn': True, 'offsetY': -0.6000000238418579, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    ZoraRiverChief.ResetFacialExpression()
    ZoraRiverChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiverChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraRiverChief.SetFacialExpression({'expression': 'surprise'})
    ZoraRiverChief.PlayAnimationNoWait({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuAppear_100', 'getAttention': False})
    } {

        call pd077_ZoraRivChief()

    }

    ZoraRiverChief.SetFacialExpression({'expression': 'sleep'})
    ZoraRiverChief.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuAppear_100_02', 'getAttention': False})
    ZoraSeaChief.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuAppear_110', 'getAttention': False})
    } {

        call pd077_ZoraSeaChief()

    }

    ZoraRiverChief.ResetFacialExpression()
    ZoraRiverChief.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiverChief.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuAppear_120', 'getAttention': False})
    } {

        call pd077_ZoraRivChief()

    } {
        Timer.Wait({'time': 0.20000000298023224})
        ZoraSeaChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuAppear_130', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetY': -0.6000000238418579, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        ZoraRiverChief.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetY': -0.6000000238418579, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        Player.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {

        call GeneralSequence.ZeldaTalkMotion_1.5s()

    } {
        Timer.Wait({'time': 0.30000001192092896})
        ZoraSeaChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.5})
        ZoraRiverChief.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 1.0})
    ZoraSeaChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuAppear_140', 'getAttention': False})
    ZoraRiverChief.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    ZoraRiverChief.PlayAnimationNoWait({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuAppear_150', 'getAttention': False})
    } {

        fork {
            Timer.Wait({'time': 0.20000000298023224})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.3499999940395355})
            Player.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }


    fork {
        Player.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    Timer.Wait({'time': 0.5})
    ZoraSeaChief.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    ZoraSeaChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuAppear_160', 'getAttention': False})
    } {

        fork {
            Timer.Wait({'time': 0.20000000298023224})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.3499999940395355})
            Player.AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    ZoraRiverChief.KeepAnimationAfterEvent()
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    QuestSystem.SetProgress({'symbol': 'Coast_River:607469713', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvB_ImitationJabuJabuAppear'})
}

void ImitationJabuJabuAppear3() {

    call EvResetCommon.AllReset()

    ImpostorJabujabu.SetRestartPositionToLinkedPoint({'direction': 2, 'pointIndex': 9, 'stance': 'Ground'})
    Player.OverwriteRecoveryPos({'x': 0.75, 'y': 2.5, 'z': -4.5})
    GameControl.RequestAutoSave({'immediate': True, 'name': 'テスト', 'needsStartupEvent': False, 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
    Player.SetInterestIkEnabled({'enable': True})
    Player.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    FlowControl.SetCanSkip({'enable': True})
    Zelda.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        Hud.PlayOutAnim()
    } {
        Timer.Wait({'time': 0.5})
    }

    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="ZoraRiverChief"), 'actor2': ActorIdentifier(name="ZoraSeaChief"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    ZoraSeaChief.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuBattleStart_010', 'getAttention': False})
    ZoraRiverChief.PlayAnimationNoWait({'name': 'angry', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuBattleStart_020', 'getAttention': False})
    ImpostorJabujabu.LookAtTalker({'distanceOffset': 4.0, 'offsetY': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetZ': 0.0, 'keep': False})
    ZoraRiverChief.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.WarpToActor({'distance': 8.5, 'actor': ActorIdentifier(name="ImpostorJabujabu"), 'offsetY': 1.2000000476837158, 'offsetX': 0.0})
    Timer.Wait({'time': 0.009999999776482582})
    Player.PlayAnimationNoWait({'name': '$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})

    fork {
        ImpostorJabujabu.PlayAnimation({'name': 'bark_st', 'blendFrame': -1, 'layer': 0, 'restart': False})
        Timer.Wait({'time': 1.0})
        ImpostorJabujabu.PlayAnimation({'name': 'bark_ed,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Audio.DisablePlaySeFromTailor()
        BossBarrier.LookAtGimmick({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        Audio.StopAllBGM({'duration': 1.5})

        fork {
            BossBarrier.EmitHoldEffect()
        } {
            Timer.Wait({'time': 0.30000001192092896})
            Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_BOSS_BARRIER_APPEAR', 'volume': 1.0, 'pitch': 1.0})
        }

    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_ENEMY_JYABU_BARK_2ND', 'volume': 1.0, 'pitch': 1.0})
        Timer.Wait({'time': 0.800000011920929})
        Audio.StopSE({'label': 'SE_ENEMY_JYABU_BARK_2ND', 'duration': 1.0})
    }


    fork {
        Timer.Wait({'time': 0.5})
        ZoraSeaChief.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        ZoraRiverChief.PlayAnimation({'name': 'surprised_st,surprised_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})
        Audio.EnablePlaySeFromTailor()
    }

    Timer.Wait({'time': 0.5})
    Zelda.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="ZoraRiverChief"), 'actor2': ActorIdentifier(name="ZoraSeaChief"), 'actor3': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        ZoraRiverChief.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuBattleStart_030', 'getAttention': False})
    } {

        fork {
            Timer.Wait({'time': 0.3499999940395355})
            Player.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }


    fork {
        ZoraSeaChief.Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuBattleStart_040', 'getAttention': False})
    } {

        fork {
            Timer.Wait({'time': 0.3499999940395355})
            Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    }

    Audio.Prepare({'label': 'BGM_BATTLE_MIDDLE_BOSS1', 'kind': 0, 'volume': 1.0})
    Timer.Wait({'time': 1.0})
    ImpostorJabujabu.LookAtTalker({'distanceOffset': 4.0, 'offsetY': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetZ': 0.0, 'keep': False})

    fork {
        ZoraRiverChief.AimActor({'actor': ActorIdentifier(name="ImpostorJabujabu"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        ZoraSeaChief.AimActor({'actor': ActorIdentifier(name="ImpostorJabujabu"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Zelda.AimActor({'actor': ActorIdentifier(name="ImpostorJabujabu"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ImpostorJabujabu"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        ImpostorJabujabu.PlayAnimation({'name': 'bark_st', 'blendFrame': -1, 'layer': 0, 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_ENEMY_JYABU_BARK', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 2.0})
    Audio.StopSE({'duration': 0.5, 'label': 'SE_ENEMY_JYABU_BARK'})
    Audio.PlayBGM({'label': 'BGM_BATTLE_MIDDLE_BOSS1', 'volume': 1.0, 'ignoreSkip': True})
    ImpostorJabujabu.PlayAnimation({'name': 'bark_ed,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Partner[companion].Talk({'message': 'scenario/StoryAreaB:ImitationJabuJabuBattleStart_050', 'getAttention': False})
    Timer.Wait({'time': 1.0})
    Hud.PlayInAnim()
    Timer.Wait({'time': 0.20000000298023224})
    ImpostorJabujabu.CameraLockon({'maxSpeed': 100.0})
    ImpostorJabujabu.StartCombat()

    fork {
        ZoraSeaChief.SetInstanceVariableBool({'name': 'ImpostorJabuJabuAppear', 'value': True})
    } {
        ZoraRiverChief.SetInstanceVariableBool({'name': 'ImpostorJabuJabuAppear', 'value': True})
    }

    QuestSystem.SetProgress({'symbol': 'Coast_River:2910472641', 'isShowTelopInEvent': False, 'isFrontFade': False})
    GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})

    fork {
        GameControl.ForbidSave()
    } {
        GameControl.DisableAutoSave()
    }

    Player.UpdateStrongRespawnPoint()
}

void pd077_ZoraRivChief() {

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        Player.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void pd077_ZoraSeaChief() {

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void _pd079_ZoraRiv002() {

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiver002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void _pd079_ZoraSea002() {

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSea002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void _pd079_ZoraSeaChief() {

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraSeaChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}

void _pd079_ZoraRivChief() {

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.3499999940395355})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiverChief"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}
