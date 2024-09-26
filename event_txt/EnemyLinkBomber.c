-------- EventFlow: EnemyLinkBomber --------

Actor: Player
entrypoint: None()
actions: ['MoveToCompassPoint', 'SetVisibility', 'WarpToActorWithCompassPoint', 'MorphTo', 'SetRestartPositionToActor', 'PlayAnimation']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Hud
entrypoint: None()
actions: ['PlayOutAnim', 'PlayInAnim']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['SetVisibility', 'WarpToDefaultPosition']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['StopAllBGM', 'PlayBGM', 'PlayZoneBGM', 'PlayOneshotSystemSE', 'EnablePlaySeFromTailor', 'WaitSamplePositionAndStopAndPlayEnemyLinkBridgeBgm', 'WaitSamplePositionAndStopAndPlayEnemyLinkBgm', 'Prepare', 'PlayJingle', 'DisablePlaySeFromTailor']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Reset', 'PlayActorOriginCameraAnimation']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['PreloadTimeline', 'InvokeTimeline', 'SetCanSkip']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['ForbidSave', 'UnforbidSave', 'RequestAutoSave']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartParam', 'StartPreset']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: []
queries: ['CheckMorph']
params: None

Actor: EnemyLinkBomber
entrypoint: None()
actions: ['PlayAnimationNoWait', 'StartCombat', 'LookAtTalker', 'CameraLockon', 'StartCombatAngry', 'PlayAnimation', 'PlayTailorOtherChannelNoWait', 'AimCompassPoint', 'WaitIdleState', 'PlayMaterialAnimation', 'WarpToLinkedPointWithCompassPoint', 'SetVisibility', 'DestroyBomb', 'GenerateBomb', 'ResetActiveAndPesteActors', 'Destroy', 'PlayMaterialAnimationNoWait', 'StopTailorOtherChannel', 'RoomDoorOpen', 'CameraLockoff', 'RoomDoorClose', 'DestroyThrowedBomb', 'ResetLinkedActor']
queries: []
params: None

Actor: EvTecuum
entrypoint: None()
actions: ['PlayAnimationNoWait', 'Deactivate', 'SetVisibility', 'Activate']
queries: []
params: None

Actor: Door[DoorNorth]
entrypoint: None()
actions: ['LookAtGimmick']
queries: []
params: None

void Appear() {
    Player.SetRestartPositionToActor({'distance': -9.0, 'direction': 2, 'stance': 'Ground'})
    GameControl.RequestAutoSave({'immediate': True, 'name': 'EnemyLinkBomber', 'needsStartupEvent': False, 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})

    call BossCommon.PreMiniBoss()


    fork {
        Fade.StartParam({'mode': 0, 'colorR': 0.0, 'colorG': 0.0, 'colorB': 0.0, 'time': 1.0})
        EvTecuum.Activate()
        EvTecuum.SetVisibility({'visible': False})
        EnemyLinkBomber.SetVisibility({'visible': False})
        Hud.PlayOutAnim()
        Audio.StopAllBGM({'duration': 1.0})
    } {
        Player.MoveToCompassPoint({'direction': 2, 'timeOut': 3.0, 'distance': 1.0, 'speed': 0, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    EnemyLinkBomber.RoomDoorClose()
    Player.PlayAnimation({'name': 'ev_lookback', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Partner[companion].SetVisibility({'visible': False})
    Player.SetVisibility({'visible': False})
    FlowControl.SetCanSkip({'enable': True})
    Audio.DisablePlaySeFromTailor()

    fork {
        EvTecuum.SetVisibility({'visible': True})
        EvTecuum.PlayAnimationNoWait({'name': 'ev_EnemyLinkBombAppear', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 4.666999816894531})
        EvTecuum.SetVisibility({'visible': False})
    } {
        Camera.PlayActorOriginCameraAnimation({'path': 'actor/Player.bfres', 'name': 'EnemyLinkBomb_appear01_cam', 'target': ActorIdentifier(name="EnemyLinkBomber"), 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False, 'aspectRatioCtrl': False})
    } {
        Timer.Wait({'time': 7.665999889373779})
        EnemyLinkBomber.GenerateBomb()
    } {
        EnemyLinkBomber.PlayMaterialAnimationNoWait({'name': 'ev_EnemyLinkBomAppear_01', 'layer': -1})
        Timer.Wait({'time': 4.666999816894531})
        EnemyLinkBomber.SetVisibility({'visible': True})
        Timer.Wait({'time': 1.0})
        EnemyLinkBomber.PlayMaterialAnimationNoWait({'name': 'ev_EnemyLinkBomAppear_02', 'layer': -1})
    } {
        EnemyLinkBomber.PlayAnimation({'name': 'ev_EnemyLinkBomAppear', 'layer': 1, 'blendFrame': -1, 'restart': False})
        EnemyLinkBomber.PlayAnimationNoWait({'name': 'carry_wait', 'layer': 1, 'blendFrame': -1, 'restart': False})
    } {
        EnemyLinkBomber.StopTailorOtherChannel({'channel': 'Aura_Normal', 'index': -1})
        Timer.Wait({'time': 0.5})
        EnemyLinkBomber.PlayTailorOtherChannelNoWait({'channel': 'ev_EnemyLinkBombAppear', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Timer.Wait({'time': 4.666999816894531})
        EnemyLinkBomber.PlayTailorOtherChannelNoWait({'channel': 'Appear_Aura', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Audio.Prepare({'label': 'BGM_EV_ENEMY_LINK_APPEAR_A', 'kind': 0, 'volume': 1.0})
        Audio.Prepare({'kind': 0, 'label': 'BGM_EV_ENEMY_LINK_APPEAR_B', 'volume': 1.0})
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_ENEMY_LINK_BOMB_APPEAR', 'volume': 1.0, 'pitch': 1.0})
        Timer.Wait({'time': 1.3200000524520874})
        Audio.PlayBGM({'label': 'BGM_EV_ENEMY_LINK_APPEAR_A', 'ignoreSkip': False, 'volume': 1.0})
        Timer.Wait({'time': 5.789999961853027})
        Audio.PlayBGM({'label': 'BGM_EV_ENEMY_LINK_APPEAR_B', 'ignoreSkip': False, 'volume': 1.0})
    }

    Camera.Reset({'chaseRatio': 0.07500000298023224, 'resetPlayerCamera': False})
    EvTecuum.Deactivate()

    fork {
        Player.SetVisibility({'visible': True})
    } {
        Partner[companion].SetVisibility({'visible': True})
    }

    Timer.Wait({'time': 0.5})
    EnemyLinkBomber.StopTailorOtherChannel({'channel': 'Appear_Aura', 'index': -1})
    Hud.PlayInAnim()
    Audio.EnablePlaySeFromTailor()
    Audio.PlayBGM({'label': 'BGM_BATTLE_ENEMY_LINK', 'volume': 1.0, 'ignoreSkip': True})
    GameControl.ForbidSave()
    EnemyLinkBomber.CameraLockon({'maxSpeed': 100.0})
    EnemyLinkBomber.StartCombat()
}

void Dead() {
    EnemyLinkBomber.DestroyBomb()
    EnemyLinkBomber.DestroyThrowedBomb()

    call BossCommon.HitStopSmallBoss({'enemy': ActorIdentifier(name="EnemyLinkBomber")})


    fork {
        FlowControl.PreloadTimeline({'filename': 'EnemyLinkBomberDead'})
    } {
        Timer.Wait({'time': 1.0})
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
    } {
        Hud.PlayOutAnim()
    } {
        Audio.StopAllBGM({'duration': 1.0})
    }

    if !Zelda.CheckMorph({'morphKind': 0}) {
        Player.MorphTo({'kind': 0})
    }

    fork {
        Timer.Wait({'time': 0.10000000149011612})
    } {
        EnemyLinkBomber.ResetActiveAndPesteActors({'child': True, 'cemeteryRevive': False, 'defeatedThrough': False, 'aliveCemeteryRevive': False})
        EnemyLinkBomber.ResetLinkedActor({'index': 12, 'resetWait': False, 'cemeteryRevive': False})
        EnemyLinkBomber.ResetLinkedActor({'index': 10, 'resetWait': False, 'cemeteryRevive': False})
        EnemyLinkBomber.ResetLinkedActor({'index': 11, 'resetWait': False, 'cemeteryRevive': False})
    }

    EnemyLinkBomber.WarpToLinkedPointWithCompassPoint({'direction': 0, 'index': 0, 'offsetY': 0.0})
    Player.WarpToActorWithCompassPoint({'offsetX': -0.25, 'offsetY': -4.5, 'direction': 2, 'distance': 9.0, 'actor': ActorIdentifier(name="EnemyLinkBomber")})
    Partner[companion].WarpToDefaultPosition({'position': 3, 'avoidWall': False, 'avoidPlayer': False})

    call Dissolve.Dissolve({'actor': ActorIdentifier(name="EnemyLinkBomber")})

    FlowControl.InvokeTimeline({'filename': 'EnemyLinkBomberDead', 'rate': 1.0})
    Door[DoorNorth].LookAtGimmick({'keep': False, 'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    EnemyLinkBomber.RoomDoorOpen()
    Timer.Wait({'time': 0.5})
    Audio.PlayJingle({'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
    Timer.Wait({'time': 0.5})
    Hud.PlayInAnim()
    EnemyLinkBomber.CameraLockoff()

    fork {
        Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': True})
    }

    Audio.PlayZoneBGM({'stopbgm': True})
    EnemyLinkBomber.Destroy()
    EventFlags.SetFlag({'symbol': 'L004R019EnemyLinkBomberDead', 'value': True})
    GameControl.UnforbidSave()
    GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
}

void Angry() {
    EnemyLinkBomber.DestroyThrowedBomb()

    fork {
        EnemyLinkBomber.WaitIdleState()
        Audio.WaitSamplePositionAndStopAndPlayEnemyLinkBgm({'label': 'BGM_BATTLE_ENEMY_LINK_BRIDGE', 'stoplabel': 'BGM_BATTLE_ENEMY_LINK'})

        fork {
            Timer.Wait({'time': 2.0})
        } {
            EnemyLinkBomber.LookAtTalker({'distanceOffset': 4.0, 'duration': 1.5, 'chaseRatio': 0.07500000298023224, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        } {
            Audio.PlayOneshotSystemSE({'label': '', 'volume': 1.0, 'pitch': 1.0})
        }


        fork {
            EnemyLinkBomber.PlayAnimation({'name': 'ev_anger', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            EnemyLinkBomber.PlayMaterialAnimation({'name': 'angry', 'layer': 1})
        } {
            EnemyLinkBomber.AimCompassPoint({'direction': 0, 'duration': 0.30000001192092896, 'withoutTurn': False, 'immediateTurn': False})
        }

        EnemyLinkBomber.PlayTailorOtherChannelNoWait({'channel': 'Aura_Anger', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
        EnemyLinkBomber.CameraLockon({'maxSpeed': 100.0})
        EnemyLinkBomber.StartCombatAngry()
        Audio.WaitSamplePositionAndStopAndPlayEnemyLinkBridgeBgm({'label': 'BGM_BATTLE_ENEMY_LINK2', 'stoplabel': 'BGM_BATTLE_ENEMY_LINK_BRIDGE'})
    } {

        call EvResetCommon.AngryReset()

    }

}
