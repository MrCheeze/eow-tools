-------- EventFlow: EnemyZelda --------

Actor: Player
entrypoint: None()
actions: ['AimActor', 'SetInterestIkEnabled', 'WarpToActor', 'AimCompassPoint', 'MorphTo', 'PlayAnimation', 'PlayAnimationNoWait', 'UpdateStrongRespawnPoint', 'OverwriteRecoveryPos']
queries: ['CheckMorph']
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Hud
entrypoint: None()
actions: ['MiniMapOnOff', 'PlayOutAnim']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['DisableAutoMovement', 'WarpToActor', 'AimCompassPoint']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['MoveToCompassPoint', 'Talk', 'PlayAnimationNoWait', 'PlayAnimation', 'AimActor', 'MoveToBesideTargetActor', 'WarpToActor', 'AimCompassPoint', 'AimPlayer', 'MoveToTargetActor', 'PlayAnimationEx']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayBGM', 'PlayOneshotSystemSE', 'StopAllBGM', 'WaitNextBeatSamplePositionAndStopAndPlayBossZeldaBgm', 'DisablePlaySeFromTailor', 'EnablePlaySeFromTailor', 'StopSE', 'PlayZoneBGM', 'Prepare']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetLevelFlag', 'SetFlag']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Reset', 'LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['SetCanSkip']
queries: ['Branch']
params: None

Actor: GameControl
entrypoint: None()
actions: ['ForbidSave', 'RequestAutoSave', 'UnforbidSave', 'ResetSensorEventResetContainsActors']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['SetCullMode', 'MoveToCompassPoint', 'LookAtTalker', 'AimActor', 'WarpToActor', 'AimCompassPoint', 'PlayAnimationNoWait', 'SetInterestIkEnabled', 'MoveToTargetActor']
queries: []
params: None

Actor: BossBarrier
entrypoint: None()
actions: ['Activate', 'EmitHoldEffect', 'VanishEffect']
queries: []
params: None

Actor: EnemyZelda
entrypoint: None()
actions: ['StartCombat', 'SetCullMode', 'PlayAnimation', 'CameraLockon', 'Activate', 'LookAtTalker', 'AimCompassPoint', 'PlayMaterialAnimation', 'PlayTailorOtherChannelNoWait', 'SetTailorProperty', 'WarpToActor', 'ResetActiveAndPesteActors', 'CameraLockoff', 'PlayAnimationNoWait', 'StopTailorOtherChannel', 'Deactivate']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: EvEnemyZelda
entrypoint: None()
actions: ['SetCullMode', 'StopTailorOtherChannel', 'PlayTailorOtherChannelNoWait', 'Talk', 'PlayAnimationNoWait', 'SetVisibility', 'Activate', 'AimCompassPoint', 'MoveToCompassPoint', 'SetRestartPositionToLinkedPoint', 'LookAtTalker', 'Deactivate', 'SetInterestIkEnabled', 'AimActor', 'SetFacialExpression', 'ResetAim', 'SetCastShadow', 'SetComponentActive']
queries: []
params: None

Actor: EvLink
entrypoint: None()
actions: ['PlayAnimation', 'SetInterestIkEnabled', 'PlayAnimationNoWait', 'AimActor', 'SetInstanceVariableString', 'Activate', 'SetAutoCalcBoundingVolumeEnabled', 'WarpToActor', 'SetCastShadow']
queries: []
params: None

Actor: EvilSeal
entrypoint: None()
actions: ['SetCollisionEnabled', 'SetGravityEnable', 'Activate', 'WarpToActor', 'Destroy']
queries: []
params: None

Actor: EvTecuum
entrypoint: None()
actions: ['Deactivate', 'SetCullMode', 'WarpToActor', 'MoveToTargetActor', 'LookAtTalker', 'AimCompassPoint', 'SetGravityEnable', 'PlayAnimation', 'Activate', 'PlayTailorOtherChannelNoWait', 'SetVisibility', 'StopTailorOtherChannel']
queries: []
params: None

Actor: EvilSeal_last
entrypoint: None()
actions: ['PlayAnimationNoWait', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel', 'SetVisibility', 'LookAtTalker', 'Destroy', 'Activate']
queries: []
params: None

Actor: TagEvTailorPlayer
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel']
queries: []
params: None

Actor: TriforcePiece[TriforcePiece_link]
entrypoint: None()
actions: ['Activate', 'SetVisibility', 'Deactivate']
queries: []
params: None

Actor: TriforcePiece[0]
entrypoint: None()
actions: ['Activate', 'SetVisibility', 'Deactivate']
queries: []
params: None

Actor: Triforce
entrypoint: None()
actions: ['Activate', 'WarpToActor', 'Destroy']
queries: []
params: None

Actor: EvLink[02]
entrypoint: None()
actions: ['PlayAnimation', 'PlayAnimationNoWait', 'SetComponentActive', 'SetCollisionEnabled', 'Destroy', 'SetInstanceVariableString', 'WarpToActor', 'Activate']
queries: []
params: None

Actor: EvLink[11]
entrypoint: None()
actions: ['SetCollisionEnabled', 'SetGravityEnable', 'SetCullMode', 'SetComponentActive', 'WarpToActor', 'SetCastShadow', 'PlayAnimationNoWait', 'SetInstanceVariableString', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel', 'SetFacialExpression', 'Destroy', 'AimActor', 'SetInterestIkEnabled']
queries: []
params: None

void Appear() {
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    GameControl.ResetSensorEventResetContainsActors({'cemeteryRevive': False, 'eventReset': True})
    EvEnemyZelda.SetRestartPositionToLinkedPoint({'direction': 2, 'pointIndex': 0, 'stance': 'Ground'})
    GameControl.RequestAutoSave({'immediate': True, 'name': 'EnemyZeldaBattle', 'needsStartupEvent': False, 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})

    call BossCommon.PreMiniBoss()


    fork {
        EvLink[11].SetComponentActive({'name': 'PropplayerSword', 'active': False})
    } {
        EvLink[11].SetComponentActive({'active': False, 'name': 'PropplayerShield'})
    } {
        EvTecuum.Deactivate()
    }


    fork {
        Zelda.SetCullMode({'enabled': False, 'cullMode': 0})
    } {
        Partner.DisableAutoMovement()
    } {
        EvLink[11].SetCastShadow({'cast': False})
        EvLink[11].SetCollisionEnabled({'enable': False})
        EvLink[11].SetGravityEnable({'enable': False})
        EvLink[11].WarpToActor({'distance': -2.0, 'actor': ActorIdentifier(name="EvLink", sub_name="11"), 'offsetY': 0.0, 'offsetX': 0.0})
        EvLink[11].SetCullMode({'enabled': False, 'cullMode': 0})
        EvLink[11].SetInstanceVariableString({'value': 'ev_crystal_bothhands_wait', 'name': 'idleAnim'})
        EvLink[11].PlayAnimationNoWait({'name': 'ev_crystal_bothhands_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EvilSeal.Activate()
        EvilSeal.SetCollisionEnabled({'enable': False})
        EvilSeal.SetGravityEnable({'enable': False})
        EvilSeal.WarpToActor({'actor': ActorIdentifier(name="EvilSeal"), 'distance': -2.0, 'offsetY': 0.0, 'offsetX': 0.0})
    } {
        EvEnemyZelda.Activate()
        EvEnemyZelda.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EvEnemyZelda.SetVisibility({'visible': True})
        EvEnemyZelda.SetCullMode({'enabled': False, 'cullMode': 0})
        EvEnemyZelda.SetCastShadow({'cast': False})
        EvEnemyZelda.SetComponentActive({'name': 'shadowDecalComp', 'active': True})
    } {
        EvEnemyZelda.StopTailorOtherChannel({'channel': 'Aura_Normal', 'index': -1})
        EvEnemyZelda.PlayTailorOtherChannelNoWait({'channel': 'Appear_Aura', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    }

    EvEnemyZelda.SetInterestIkEnabled({'enable': True})
    EvEnemyZelda.AimActor({'withoutTurn': True, 'offsetZ': 0.0, 'offsetY': 1.0, 'actor': ActorIdentifier(name="EvLink", sub_name="11"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.0})

    fork {
        Zelda.WarpToActor({'offsetY': 0.0, 'distance': -10.0, 'offsetX': 0.0, 'actor': ActorIdentifier(name="EvEnemyZelda")})
    } {
        Partner[companion].WarpToActor({'distance': -10.0, 'offsetX': 1.0, 'actor': ActorIdentifier(name="EvEnemyZelda"), 'offsetY': 1.0})
    }

    Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 5.0, 'weight2': 3.0, 'chaseRatio': 1.0, 'actor1': ActorIdentifier(name="EvEnemyZelda"), 'actor2': ActorIdentifier(name="EvLink", sub_name="11"), 'weight1': 1.0, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})
    FlowControl.SetCanSkip({'enable': True})
    Timer.Wait({'time': 0.5})
    EvLink[11].PlayTailorOtherChannelNoWait({'channel': 'haveTriforce', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    Audio.PlayOneshotSystemSE({'label': 'SE_EV_PD232_TRIFORCE1', 'volume': 1.0, 'pitch': 1.0})
    Timer.Wait({'time': 1.0})
    EvLink[11].StopTailorOtherChannel({'channel': 'haveTriforce', 'index': -1})
    Timer.Wait({'time': 0.699999988079071})
    EvEnemyZelda.Talk({'message': 'scenario/StoryAreaH:PasteZeldaAppear_010', 'getAttention': False})
    EvEnemyZelda.AimActor({'withoutTurn': True, 'offsetZ': 0.0, 'offsetY': 0.0, 'actor': ActorIdentifier(name="EvLink", sub_name="11"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'immediateTurn': False})
    EvEnemyZelda.ResetAim()
    EvEnemyZelda.SetInterestIkEnabled({'enable': False})
    Timer.Wait({'time': 0.5})
    Audio.Prepare({'label': 'BGM_EV_ATTACK_OF_MU2_B', 'kind': 0, 'volume': 1.0})

    fork {
        Zelda.LookAtTalker({'distanceOffset': 3.0, 'offsetY': 0.0, 'keep': True, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetZ': 0.0})
    } {
        Zelda.MoveToCompassPoint({'distance': 3.0, 'speed': 1, 'direction': 2, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Partner[companion].MoveToCompassPoint({'distance': 3.0, 'direction': 2, 'speed': 1, 'offsetX': 0.0, 'offsetY': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    }

    Timer.Wait({'time': 0.5})

    fork {
        Partner[companion].PlayAnimationNoWait({'name': 'surprised_st,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaH:FoundTriForce_010', 'getAttention': False})
        Partner[companion].PlayAnimationNoWait({'name': 'appeal02,talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaH:FoundTriForce_020', 'getAttention': False})
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.5})
    } {
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'offsetY': 3.0, 'actor': ActorIdentifier(name="EvLink", sub_name="11"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 1.0})
        EvEnemyZelda.SetInterestIkEnabled({'enable': True})
        EvEnemyZelda.AimActor({'withoutTurn': False, 'duration': 0.20000000298023224, 'offsetY': -1.0, 'offsetZ': 7.199999809265137, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'boneName': '', 'offsetX': 0.0, 'immediateTurn': False})
        EvEnemyZelda.AimActor({'withoutTurn': True, 'offsetY': -1.0, 'offsetZ': 3.5, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'immediateTurn': False})
    } {
        EvLink[11].PlayAnimationNoWait({'name': 'ev_crystal_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Camera.LookAt2ActorsCenterAsTalker({'distanceOffset': 5.0, 'weight2': 3.0, 'actor1': ActorIdentifier(name="EvEnemyZelda"), 'actor2': ActorIdentifier(name="EvLink", sub_name="11"), 'weight1': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Zelda.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Zelda.SetInterestIkEnabled({'enable': False})
    Timer.Wait({'time': 0.699999988079071})
    Audio.PlayBGM({'label': 'BGM_EV_ATTACK_OF_MU2_B', 'ignoreSkip': False, 'volume': 1.0})
    EvEnemyZelda.AimCompassPoint({'duration': 0.800000011920929, 'direction': 0, 'withoutTurn': False, 'immediateTurn': False})
    EvEnemyZelda.SetInterestIkEnabled({'enable': False})
    Timer.Wait({'time': 0.10000000149011612})
    Timer.Wait({'time': 0.4000000059604645})
    EvEnemyZelda.Talk({'message': 'scenario/StoryAreaH:PasteZeldaAppear_020', 'getAttention': False})
    Timer.Wait({'time': 0.5})
    EvEnemyZelda.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    EvEnemyZelda.Talk({'message': 'scenario/StoryAreaH:PasteZeldaAppear_030', 'getAttention': False})
    EvEnemyZelda.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    fork {
        EvEnemyZelda.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EvEnemyZelda.Talk({'message': 'scenario/StoryAreaH:PasteZeldaAppear_040', 'getAttention': False})
    } {
        EvEnemyZelda.StopTailorOtherChannel({'channel': 'Appear_Aura', 'index': -1})
        EvEnemyZelda.PlayTailorOtherChannelNoWait({'channel': 'Aura_Normal', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    }

    EvEnemyZelda.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Audio.DisablePlaySeFromTailor()

    fork {
        BossBarrier.EmitHoldEffect()
    } {
        TagEvTailorPlayer.PlayTailorOtherChannelNoWait({'channel': 'Barrier_Appear', 'stopOnSkipped': False, 'restart': False, 'index': -1})
    } {
        BossBarrier.Activate()
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_BOSS_BARRIER_APPEAR', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 1.0})
    EvLink[11].SetFacialExpression({'expression': 'attack_cm'})
    Timer.Wait({'time': 1.0})
    Audio.EnablePlaySeFromTailor()

    fork {
        EvEnemyZelda.MoveToCompassPoint({'speed': 0, 'direction': 0, 'distance': 3.0, 'customSpeed': 0.6000000238418579, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        EvEnemyZelda.LookAtTalker({'keep': True, 'distanceOffset': 3.0, 'offsetY': 1.0, 'duration': 2.5, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        EvLink[11].SetFacialExpression({'expression': 'angry'})
        EvLink[11].PlayAnimationNoWait({'name': 'ev_crystal_onehand_knock', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.7000000476837158})
        EvLink[11].PlayAnimationNoWait({'name': 'ev_crystal_bothhands_knock', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].AimActor({'actor': ActorIdentifier(name="EvEnemyZelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Audio.StopAllBGM({'duration': 5.5})
    }


    fork {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="EvEnemyZelda"), 'actor2': ActorIdentifier(name="Zelda"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        EvEnemyZelda.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.PlayAnimationNoWait({'name': 'ev_LastBossAppear_battle_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        EvEnemyZelda.StopTailorOtherChannel({'channel': 'Aura_Normal', 'index': -1})
        EvEnemyZelda.PlayTailorOtherChannelNoWait({'channel': 'Aura_Anger', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        EvEnemyZelda.PlayTailorOtherChannelNoWait({'channel': 'GlowingEyes', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        EvEnemyZelda.SetFacialExpression({'expression': 'ed_smile_talk'})
    }

    Timer.Wait({'time': 2.0})

    call Appear1()

}

void Appear1() {

    fork {
        EnemyZelda.WarpToActor({'actor': ActorIdentifier(name="EvEnemyZelda"), 'distance': 0.0, 'offsetY': 0.0, 'offsetX': 0.0})
        EnemyZelda.Activate()
        EnemyZelda.PlayTailorOtherChannelNoWait({'channel': 'Ev_StartAura', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        EnemyZelda.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EvEnemyZelda.AimCompassPoint({'direction': 0, 'duration': 0.10000000149011612, 'withoutTurn': False, 'immediateTurn': False})
    }

    Triforce.Activate()

    fork {
        Zelda.SetCullMode({'enabled': True, 'cullMode': 1})
    } {
        EnemyZelda.SetCullMode({'enabled': True, 'cullMode': 1})
    } {
        Hud.MiniMapOnOff({'isOn': False})
    } {
        Triforce.WarpToActor({'offsetX': 50.0, 'actor': ActorIdentifier(name="Triforce"), 'distance': 0.0, 'offsetY': 0.0})
        Triforce.Destroy()
    } {
        EvEnemyZelda.Deactivate()
    }

    QuestSystem.SetProgress({'symbol': 'LastDungeon:929402173', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EnemyZelda.CameraLockon({'maxSpeed': 100.0})
    GameControl.ForbidSave()
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Audio.PlayBGM({'label': 'BGM_PASTE_ZELDA', 'volume': 1.0, 'ignoreSkip': True})
    EnemyZelda.SetTailorProperty({'propertyIndex': 0, 'value': 'phase1', 'index': -1})
    EnemyZelda.StartCombat()
    Player.UpdateStrongRespawnPoint()
    Player.OverwriteRecoveryPos({'x': 7.699999809265137, 'z': -172.10000610351562, 'y': 38.20000076293945})
}

void LinkRevival() {
    EvLink[02].SetCollisionEnabled({'enable': True})
    EvLink[02].SetComponentActive({'name': 'stateMachine', 'active': False})
    Timer.Wait({'time': 0.5})

    call EvResetCommon.AllReset()


    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="EvLink"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'offsetY': 3.0, 'actor': ActorIdentifier(name="EvLink"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    EvilSeal_last.LookAtTalker({'distanceOffset': 2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 1.0})
    EvilSeal_last.StopTailorOtherChannel({'channel': 'Crack1', 'index': -1})
    EvilSeal_last.PlayTailorOtherChannelNoWait({'restart': False, 'channel': 'Crack1_Jump', 'index': -1, 'stopOnSkipped': True})
    EvLink[02].PlayAnimation({'name': 'ev_crystal_onehand_knock', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        EvilSeal_last.PlayAnimationNoWait({'name': 'ev_shake', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        EvilSeal_last.StopTailorOtherChannel({'channel': 'Crack1_Jump', 'index': -1})
        EvilSeal_last.StopTailorOtherChannel({'channel': 'Crack1', 'index': -1})
        EvilSeal_last.PlayTailorOtherChannelNoWait({'restart': False, 'channel': 'Crack2', 'index': -1, 'stopOnSkipped': True})
    }

    Timer.Wait({'time': 1.0})
    EvLink[02].PlayAnimation({'name': 'ev_crystal_bothhands_knock,ev_crystal_bothhands_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        EvilSeal_last.PlayAnimationNoWait({'name': 'ev_shake', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        EvilSeal_last.StopTailorOtherChannel({'channel': 'Crack2', 'index': -1})
        EvilSeal_last.PlayTailorOtherChannelNoWait({'restart': False, 'channel': 'Crack3', 'index': -1, 'stopOnSkipped': True})
    }

    Timer.Wait({'time': 1.0})
    EvLink[02].PlayAnimation({'name': 'ev_crystal_bothhands_knock', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        EvilSeal_last.PlayTailorOtherChannelNoWait({'channel': 'Shine', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Timer.Wait({'time': 1.0})
        EvilSeal_last.StopTailorOtherChannel({'channel': 'Crack3', 'index': -1})
        EvilSeal_last.PlayTailorOtherChannelNoWait({'channel': 'disappear', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Timer.Wait({'time': 0.20000000298023224})
        EvLink[02].PlayAnimationNoWait({'layer': 0, 'name': 'ev_crystal_land,wait_barehands', 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Fade.StartPreset({'preset': 'FadeOutFastW'})

        fork {
            Zelda.SetInterestIkEnabled({'enable': False})
            Zelda.WarpToActor({'distance': 7.0, 'offsetX': 0.0, 'actor': ActorIdentifier(name="EvLink", sub_name="02"), 'offsetY': 0.0})
            Zelda.AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
        } {
            Partner[companion].WarpToActor({'distance': 7.0, 'offsetX': -1.5, 'offsetY': 1.0, 'actor': ActorIdentifier(name="EvLink", sub_name="02")})
            Partner[companion].AimCompassPoint({'direction': 2, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
        } {
            EvilSeal_last.SetVisibility({'visible': False})
        } {
            GameControl.ResetSensorEventResetContainsActors({'eventReset': False, 'cemeteryRevive': False})
        }

        Timer.Wait({'time': 0.5})

        fork {
            EvLink.WarpToActor({'actor': ActorIdentifier(name="EvLink", sub_name="02"), 'distance': 0.0, 'offsetY': 0.0, 'offsetX': 0.0})
            EvLink[02].Destroy()
            EvLink.Activate()
            EvLink.SetCastShadow({'cast': True})
            EvLink.SetAutoCalcBoundingVolumeEnabled({'enabled': True})
            EventFlags.SetFlag({'symbol': 'OpenedLastDungeon', 'value': True})
            Fade.StartPreset({'preset': 'FadeInFast'})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            EvilSeal_last.LookAtTalker({'offsetY': 0.0, 'distanceOffset': -5.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetZ': 0.0, 'keep': False})
        }

    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_LAST_LINK_BARRIER_BREAK', 'volume': 1.0, 'pitch': 1.0})
        Audio.Prepare({'label': 'BGM_EV_LINKREVIVAL', 'kind': 0, 'volume': 1.0})
    }


    fork {
        EvLink.PlayAnimationNoWait({'layer': 0, 'name': 'ev_crystal_land,wait_barehands', 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.600000023841858})
        EvLink.PlayAnimationNoWait({'layer': 0, 'name': 'wait_barehands', 'blendFrame': -1, 'restart': False})
        EvLink.SetAutoCalcBoundingVolumeEnabled({'enabled': False})
    } {
        EvilSeal_last.StopTailorOtherChannel({'channel': 'Crack3', 'index': -1})
        EvilSeal_last.StopTailorOtherChannel({'channel': 'disappear', 'index': -1})
    } {
        Timer.Wait({'time': 0.25})
        EvilSeal_last.LookAtTalker({'offsetY': -3.0, 'distanceOffset': -5.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetZ': 0.0, 'keep': False})
    }


    fork {
        Zelda.MoveToTargetActor({'speed': 1, 'distance': 3.5, 'offsetX': 0.0, 'actor': ActorIdentifier(name="EvLink"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetY': 0.0})
        Zelda.AimActor({'actor': ActorIdentifier(name="EvLink"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Partner[companion].MoveToTargetActor({'speed': 1, 'distance': 3.5, 'offsetX': -1.5, 'offsetY': 1.0, 'actor': ActorIdentifier(name="EvLink"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimActor({'offsetX': 0.0, 'offsetY': 0.0, 'actor': ActorIdentifier(name="EvLink"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Camera.LookAt2ActorsCenterAsTalker({'duration': 0.28299999237060547, 'offsetZ': -1.5, 'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="EvLink"), 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_PD234_TRI_MOVE', 'volume': 1.0, 'pitch': 1.0})
    }

    EvilSeal_last.Destroy()
    Audio.PlayBGM({'label': 'BGM_EV_LINKREVIVAL', 'ignoreSkip': False, 'volume': 1.0})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Zelda.AimActor({'actor': ActorIdentifier(name="EvLink"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'offsetX': 0.0, 'offsetY': 0.0, 'actor': ActorIdentifier(name="EvLink"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetY': 1.0, 'actor': ActorIdentifier(name="EvLink"), 'offsetZ': 0.699999988079071, 'offsetX': 0.8999999761581421, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimActor({'offsetX': 0.0, 'offsetY': 0.0, 'actor': ActorIdentifier(name="EvLink"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.5})
        Partner[companion].PlayAnimationEx({'name': 'wait', 'time': 0.20000000298023224, 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetY': 1.0, 'offsetX': -0.8999999761581421, 'actor': ActorIdentifier(name="EvLink"), 'offsetZ': 0.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
        Partner[companion].AimActor({'offsetX': 0.0, 'offsetY': 0.0, 'actor': ActorIdentifier(name="EvLink"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.5})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        EvLink.SetInterestIkEnabled({'enable': True})
        EvLink.AimActor({'withoutTurn': True, 'boneName': '', 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'offsetY': -0.20000000298023224, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetY': 1.0, 'withoutTurn': True, 'offsetX': -1.5, 'actor': ActorIdentifier(name="Zelda"), 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0})
        Timer.Wait({'time': 0.5})
        Partner[companion].PlayAnimation({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaH:PrincessPriestessesAndBraveMen_020', 'getAttention': False})
    } {
        EvLink.AimActor({'withoutTurn': True, 'offsetY': -0.5, 'boneName': '', 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        EvLink.PlayAnimation({'layer': 0, 'blendFrame': 15, 'name': 'wait_barehands', 'restart': False})
    } {
        Player.SetInterestIkEnabled({'enable': True})
    }

    EvLink.AimActor({'offsetY': -0.5, 'withoutTurn': False, 'boneName': '', 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    EvLink.SetInterestIkEnabled({'enable': False})
    Audio.DisablePlaySeFromTailor()

    fork {
        EvLink.PlayAnimation({'layer': 0, 'blendFrame': 15, 'name': 'ev_yes,wait_barehands', 'restart': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_LINK_CLOTH_YES', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 0.5})
    EvLink.SetInterestIkEnabled({'enable': True})
    Audio.EnablePlaySeFromTailor()
    EvLink.AimActor({'offsetY': -0.6000000238418579, 'withoutTurn': True, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].PlayAnimationNoWait({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaH:PrincessPriestessesAndBraveMen_030', 'getAttention': False})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})

    fork {
        Timer.Wait({'time': 0.6000000238418579})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'offsetY': -0.6000000238418579, 'withoutTurn': False, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaH:PrincessPriestessesAndBraveMen_035', 'getAttention': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaH:PrincessPriestessesAndBraveMen_040', 'getAttention': False})
        Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.699999988079071})
        EvLink.AimActor({'offsetY': -0.6000000238418579, 'withoutTurn': False, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="EvLink"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.4000000059604645})
    Partner[companion].PlayAnimationNoWait({'name': 'sad', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaH:PrincessPriestessesAndBraveMen_050', 'getAttention': False})
    Timer.Wait({'time': 1.0})
    Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    Partner[companion].PlayAnimationNoWait({'name': 'yes', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Partner[companion].Talk({'message': 'scenario/StoryAreaH:PrincessPriestessesAndBraveMen_060', 'getAttention': False})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="EvLink"), 'duration': 0.800000011920929, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        EvLink.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Zelda"), 'duration': 0.800000011920929, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Timer.Wait({'time': 1.5})

    fork {
        Timer.Wait({'time': 0.6000000238418579})
        Player.AimActor({'offsetY': -0.6000000238418579, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="EvLink"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaH:PrincessPriestessesAndBraveMen_070', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.699999988079071})
        EvLink.AimActor({'offsetY': -0.6000000238418579, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaH:PrincessPriestessesAndBraveMen_080', 'getAttention': False})
    Audio.StopAllBGM({'duration': 3.0})
    EventFlags.SetLevelFlag({'index': 190, 'value': True})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    QuestSystem.SetProgress({'symbol': 'Link_Rescue:1774146960', 'isShowTelopInEvent': False, 'isFrontFade': False})
    GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
    EvLink.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait_barehands'})
    Audio.PlayZoneBGM({'stopbgm': False})
}

void PhaseChange1() {

    fork {

        fork {
            if !FlowControl.Branch({'value': 'isDown'}) {
                EnemyZelda.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
            } else {

                fork {
                    EnemyZelda.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
                } {
                    EnemyZelda.PlayAnimation({'name': 'down_CZ_ed', 'layer': 0, 'blendFrame': -1, 'restart': False})
                }

            }
        } {
            EnemyZelda.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        }


        fork {
            EnemyZelda.PlayAnimation({'name': 'ev_CZ_anger', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 2.5})
        } {
            EnemyZelda.PlayTailorOtherChannelNoWait({'channel': 'ev_anger1', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        } {
            Timer.Wait({'time': 0.36660000681877136})
            EnemyZelda.SetTailorProperty({'propertyIndex': 0, 'value': 'phase2', 'index': -1})
        }

        Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})
    } {

        call EvResetCommon.AngryReset()

    }

}

void PhaseChange2() {

    fork {

        fork {
            if !FlowControl.Branch({'value': 'isDown'}) {
                EnemyZelda.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
            } else {

                fork {
                    EnemyZelda.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
                } {
                    EnemyZelda.PlayAnimation({'name': 'down_CZ_ed', 'layer': 0, 'blendFrame': -1, 'restart': False})
                }

            }
        } {
            EnemyZelda.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        }


        fork {
            EnemyZelda.PlayAnimation({'name': 'ev_CZ_anger', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 2.5})
        } {
            EnemyZelda.PlayMaterialAnimation({'name': 'angry', 'layer': 1})
        } {
            EnemyZelda.PlayTailorOtherChannelNoWait({'channel': 'ev_anger2', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        } {
            Timer.Wait({'time': 0.36660000681877136})
            EnemyZelda.SetTailorProperty({'propertyIndex': 0, 'value': 'phase3', 'index': -1})
        } {
            Timer.Wait({'time': 0.16699999570846558})
            Audio.WaitNextBeatSamplePositionAndStopAndPlayBossZeldaBgm({'label': 'BGM_PASTE_ZELDA2', 'stoplabel': 'BGM_PASTE_ZELDA'})
        }

        Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})
    } {

        call EvResetCommon.AngryReset()

    }

}

void Dead2() {

    fork {
        TagEvTailorPlayer.StopTailorOtherChannel({'channel': 'Barrier_Appear', 'index': -1})
        TagEvTailorPlayer.PlayTailorOtherChannelNoWait({'channel': 'Barrier_Vanish', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        BossBarrier.VanishEffect()
    }

    TriforcePiece[0].SetVisibility({'visible': False})
    TriforcePiece[0].Activate()
    TriforcePiece[TriforcePiece_link].SetVisibility({'visible': False})
    TriforcePiece[TriforcePiece_link].Activate()
    Audio.StopAllBGM({'duration': 0.5})

    call BossCommon.HitStopSmallBoss({'enemy': ActorIdentifier(name="EnemyZelda")})


    fork {
        EnemyZelda.PlayAnimationNoWait({'name': 'dead_CZ,ev_CZ_dead', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.05000000074505806})
    }


    fork {
        Hud.PlayOutAnim()
        Hud.MiniMapOnOff({'isOn': True})
    } {
        Timer.Wait({'time': 2.700000047683716})
        EvTecuum.Activate()
    } {
        Timer.Wait({'time': 1.7000000476837158})

        call EvResetCommon.AllReset_03()

    }

    if !Player.CheckMorph({'morphKind': 0}) {
        Player.MorphTo({'kind': 0})
    }

    fork {
        Timer.Wait({'time': 0.5})
    } {
        EnemyZelda.ResetActiveAndPesteActors({'child': False, 'cemeteryRevive': False, 'defeatedThrough': False, 'aliveCemeteryRevive': False})
    }

    Timer.Wait({'time': 1.0})

    fork {
        EnemyZelda.PlayTailorOtherChannelNoWait({'channel': 'haveTriforce', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_PD233_ENEMY_ZELDA_OUT', 'volume': 1.0, 'pitch': 1.0})
    } {
        Audio.DisablePlaySeFromTailor()
    }

    Timer.Wait({'time': 3.0})

    fork {
        EnemyZelda.StopTailorOtherChannel({'channel': 'haveTriforce', 'index': -1})
        EnemyZelda.Deactivate()
        EnemyZelda.CameraLockoff()
    } {
        EvTecuum.SetGravityEnable({'enable': False})
        EvTecuum.WarpToActor({'offsetY': 0.5, 'actor': ActorIdentifier(name="EnemyZelda"), 'distance': 0.0, 'offsetX': 0.0})
        EvTecuum.PlayTailorOtherChannelNoWait({'channel': 'EnemyZelda_Dead2', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        EvTecuum.LookAtTalker({'keep': True, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

        fork {
            EvTecuum.MoveToTargetActor({'speed': 1, 'offsetY': 0.0, 'actor': ActorIdentifier(name="TriforcePiece", sub_name="0"), 'customSpeed': 12.0, 'distance': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0})
            EvTecuum.AimCompassPoint({'direction': 0, 'withoutTurn': False, 'duration': 0.009999999776482582, 'immediateTurn': False})
            Timer.Wait({'time': 0.10000000149011612})

            fork {
                EvTecuum.PlayAnimation({'name': 'ev_TriforceEscape', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Timer.Wait({'time': 2.0})

                fork {
                    EvTecuum.PlayTailorOtherChannelNoWait({'channel': 'EnemyZelda_Dead2_InDungeon', 'restart': False, 'index': -1, 'stopOnSkipped': True})
                } {
                    Audio.PlayOneshotSystemSE({'label': 'SE_EV_PD233_ENEMY_ZELDA_OUT2', 'volume': 1.0, 'pitch': 1.0})
                } {
                    Audio.StopSE({'label': 'SE_EV_PD233_ENEMY_ZELDA_OUT', 'duration': 0.5})
                }

            }

        } {
            Player.SetInterestIkEnabled({'enable': True})
            Player.AimActor({'boneName': 'n_hara', 'actor': ActorIdentifier(name="EvTecuum"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Player.PlayAnimation({'name': 'ev_surprise_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Player.PlayAnimationNoWait({'name': 'ev_surprise_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 1.0})
            EvLink[11].SetInterestIkEnabled({'enable': True})
            EvLink[11].AimActor({'boneName': 'n_hara', 'actor': ActorIdentifier(name="EvTecuum"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        EvTecuum.SetVisibility({'visible': False})
        EvTecuum.StopTailorOtherChannel({'channel': 'EnemyZelda_Dead2', 'index': -1})
        Timer.Wait({'time': 1.0})
    } {
        EvTecuum.SetCullMode({'enabled': True, 'cullMode': 0})
    }

    Audio.EnablePlaySeFromTailor()
    Partner[companion].Talk({'message': 'scenario/StoryAreaH:LinkRevival_010', 'getAttention': False})
    Player.SetInterestIkEnabled({'enable': True})
    EvTecuum.Deactivate()
    Fade.StartPreset({'preset': 'FadeOutNormalB'})

    fork {
        Player.WarpToActor({'distance': 12.0, 'actor': ActorIdentifier(name="EnemyZelda"), 'offsetY': 0.0, 'offsetX': 0.0})
        Player.AimCompassPoint({'duration': 0.10000000149011612, 'direction': 2, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner.WarpToActor({'distance': 12.0, 'actor': ActorIdentifier(name="EnemyZelda"), 'offsetY': 0.0, 'offsetX': 0.0})
        Partner.AimCompassPoint({'duration': 0.10000000149011612, 'direction': 2, 'withoutTurn': False, 'immediateTurn': False})
    } {
        EventFlags.SetFlag({'symbol': 'FBLast003DarkLinkDead', 'value': True})
        EvilSeal_last.Activate()
    } {
        EvilSeal.Destroy()
    } {
        EvLink[02].Activate()
        EvLink[02].WarpToActor({'distance': 1.75, 'actor': ActorIdentifier(name="EvLink", sub_name="11"), 'offsetY': 0.0, 'offsetX': 0.0})
        EvLink[11].Destroy()
    }

    Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})

    fork {
        Player.WarpToActor({'distance': 4.5, 'actor': ActorIdentifier(name="EnemyZelda"), 'offsetY': 0.0, 'offsetX': 0.0})
        Player.AimCompassPoint({'duration': 0.10000000149011612, 'direction': 2, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner[companion].WarpToActor({'distance': 5.5, 'actor': ActorIdentifier(name="EnemyZelda"), 'offsetY': 0.0, 'offsetX': 0.0})
        Partner[companion].AimCompassPoint({'duration': 0.10000000149011612, 'direction': 2, 'withoutTurn': False, 'immediateTurn': False})
    }

    TriforcePiece[0].Deactivate()
    TriforcePiece[TriforcePiece_link].Deactivate()

    fork {
        Fade.StartPreset({'preset': 'FadeInNormal'})
    } {
        Timer.Wait({'time': 0.30000001192092896})
    }

    GameControl.UnforbidSave()
    GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
    QuestSystem.SetProgress({'symbol': 'LastDungeon:928406339', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EvLink[02].SetInstanceVariableString({'name': 'idleAnim', 'value': ''})
}
