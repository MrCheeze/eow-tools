-------- EventFlow: LastBossMu01 --------

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

Actor: Hud
entrypoint: None()
actions: ['PlayOutAnim', 'PlayInAnim']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE', 'WaitSamplePositionAndStopAndPlayMu2IntroBgm']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['LookAtTalker', 'SetVisibility', 'WarpToActorWithCompassPoint', 'MoveToCompassPoint', 'PlayAnimation', 'AimCompassPoint', 'AimActor', 'MoveToBesideTargetActor', 'PlayTailorOtherChannelNoWait', 'AimDegreeAngle', 'SetInterestIkEnabled', 'MoveToTargetActor']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['SetCanSkip']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor', 'SetFacialExpression', 'ResetAim']
queries: []
params: None

Actor: LastBossMu01
entrypoint: None()
actions: ['PlayAnimationEx', 'PlayAnimation', 'ResetActiveAndPesteActors', 'WarpToActor', 'AimCompassPoint', 'DisappearTentaclesAll', 'MoveToCompassPoint', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel', 'PlayMotionTentacleExNumber', 'LookAtTalker', 'ReviveTentacles', 'SpritTentaclesAll', 'SetVisibility', 'SetCollisionEnabled', 'SetGravityEnable', 'PlayAnimationNoWait', 'ResetSteeringAnimation', 'ChangeSteeringAnimation']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump']
queries: []
params: None

Actor: TagEvTailorPlayer
entrypoint: None()
actions: ['WarpToActorWithCompassPoint', 'PlayTailorOtherChannelNoWait', 'StopTailorOtherChannel']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['SetVisibility', 'WarpToDefaultPosition', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

void Appear() {

    call EvResetCommon.AllReset()


    fork {
        Player.SetVisibility({'visible': False})
        Player.WarpToActorWithCompassPoint({'direction': 0, 'offsetX': 0.0, 'distance': 4.0, 'actor': ActorIdentifier(name="Player"), 'offsetY': 1.0})
        Partner[companion].WarpToDefaultPosition({'position': 1, 'avoidWall': False, 'avoidPlayer': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    } {
        LastBossMu01.PlayAnimation({'name': 'ev_Second_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        LastBossMu01.WarpToActor({'offsetY': -1.0, 'actor': ActorIdentifier(name="LastBossMu01"), 'distance': 8.0, 'offsetX': 0.0})
        LastBossMu01.AimCompassPoint({'direction': 1, 'duration': 0.0, 'withoutTurn': False, 'immediateTurn': False})
    } {
        LastBossMu01.DisappearTentaclesAll()
        LastBossMu01.ChangeSteeringAnimation({'idle': 'Second_wait', 'walk': 'Second_wait', 'run': 'Second_wait', 'layer': 0})
    } {
        Player.LookAtTalker({'distanceOffset': 10.0, 'duration': 0.0, 'chaseRatio': 1.0, 'offsetX': 2.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    }

    Zelda.SetFacialExpression({'expression': 'serious_few'})
    Timer.Wait({'time': 0.10000000149011612})
    LastBossMu01.ResetActiveAndPesteActors({'child': True, 'cemeteryRevive': False, 'defeatedThrough': False, 'aliveCemeteryRevive': False})
    TagEvTailorPlayer.WarpToActorWithCompassPoint({'direction': 0, 'offsetX': 0.0, 'distance': 0.0, 'actor': ActorIdentifier(name="Player"), 'offsetY': 1.0})
    TagEvTailorPlayer.PlayTailorOtherChannelNoWait({'channel': 'LastBossGate_AlreadyOpen_Water', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    Fade.StartPreset({'preset': 'FadeInSlow'})
    FlowControl.SetCanSkip({'enable': True})
    Audio.WaitSamplePositionAndStopAndPlayMu2IntroBgm({'stoplabel': 'BGM_BATTLE_BOSS_MU2_INTRO', 'label': 'BGM_BATTLE_BOSS_MU2'})

    fork {
        Partner[companion].PlayTailorOtherChannelNoWait({'channel': 'Through_LastBossGate_Water', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_NULL01_ZELDA_IN', 'volume': 1.0, 'pitch': 1.0})
    }

    Player.PlayTailorOtherChannelNoWait({'channel': 'Through_LastBossGate_Water', 'restart': False, 'index': -1, 'stopOnSkipped': True})

    fork {
        Hud.PlayOutAnim()
    } {
        Timer.Wait({'time': 0.5})
    }


    fork {
        Player.SetVisibility({'visible': True})
        Player.MoveToCompassPoint({'speed': 1, 'direction': 3, 'withoutTurn': True, 'offsetX': 0.0, 'offsetY': -2.0, 'distance': 4.0, 'timeOut': 4.0, 'tolerance': 0.0, 'customSpeed': 0.0, 'method': 0})
    } {
        Partner[companion].SetVisibility({'visible': True})
    }

    Timer.Wait({'time': 0.5})

    fork {
        TagEvTailorPlayer.StopTailorOtherChannel({'channel': 'LastBossGate_AlreadyOpen_Water', 'index': -1})
    } {
        TagEvTailorPlayer.PlayTailorOtherChannelNoWait({'channel': 'LastBossGate_Dissappear_Water', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_ENEMY_NULL01_GATE_CLOSE', 'volume': 1.0, 'pitch': 1.0})
    }

    Player.AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Player.PlayAnimation({'name': 'ev_swim_search', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 2.5})
    Player.PlayAnimation({'name': 'swim_wait', 'blendFrame': 30, 'layer': 0, 'restart': False})
    Timer.Wait({'time': 1.0})

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'chaseRatio': 0.10000000149011612, 'offsetY': 1.0, 'duration': 1.0, 'distanceOffset': 3.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="LastBossMu01"), 'offsetX': 0.10000000149011612, 'weight1': 1.0, 'weight2': 1.0, 'offsetZ': 0.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_ENEMY_NULL01_APPEAR_1', 'volume': 1.0, 'pitch': 1.0})
    }

    Timer.Wait({'time': 0.30000001192092896})

    fork {
        LastBossMu01.MoveToCompassPoint({'direction': 1, 'speed': 0, 'timeOut': 3.5, 'distance': 2.0, 'offsetY': 2.0, 'customSpeed': 2.0, 'tolerance': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0})
    } {
        Timer.Wait({'time': 0.5})
        LastBossMu01.LookAtTalker({'keep': True, 'distanceOffset': -2.0, 'offsetY': 1.0, 'duration': 1.5, 'chaseRatio': 0.05000000074505806, 'offsetX': 0.0, 'offsetZ': 0.0})
    }


    fork {
        LastBossMu01.PlayAnimationEx({'name': 'ev_Second_shake', 'time': 5.0, 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        LastBossMu01.PlayTailorOtherChannelNoWait({'channel': 'Ev_Absorption_Suction', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Timer.Wait({'time': 2.0})
        LastBossMu01.PlayTailorOtherChannelNoWait({'channel': 'Ev_Absorption', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    }

    Timer.Wait({'time': 3.5})
    LastBossMu01.StopTailorOtherChannel({'channel': 'Ev_Absorption_Suction', 'index': -1})

    fork {
        LastBossMu01.PlayAnimationEx({'name': 'ev_Second_appearArm', 'time': 2.0, 'layer': 0, 'blendFrame': -1, 'restart': False})
        LastBossMu01.PlayAnimationNoWait({'name': 'Second_move', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 1.0})
        LastBossMu01.PlayTailorOtherChannelNoWait({'channel': 'ArmRegeneration', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Timer.Wait({'time': 1.5})
        LastBossMu01.PlayMotionTentacleExNumber({'baseName': 'Second_Arm_appear_base', 'name': 'Second_Arm_appear', 'num': 2, 'time': 0.0})
        LastBossMu01.ReviveTentacles({'index': 2})
    } {
        Timer.Wait({'time': 1.0})
        Audio.PlayOneshotSystemSE({'label': 'SE_ENEMY_NULL01_APPEAR_2', 'volume': 1.0, 'pitch': 1.0})
    }

    LastBossMu01.ReviveTentacles({'index': 1})
    Timer.Wait({'time': 1.0})
    LastBossMu01.ResetSteeringAnimation()

    fork {
        LastBossMu01.MoveToCompassPoint({'direction': 1, 'speed': 0, 'timeOut': 3.5, 'offsetY': 2.0, 'customSpeed': 2.0, 'distance': 4.0, 'tolerance': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0})
    } {
        Timer.Wait({'time': 1.0})
        Camera.Reset({'chaseRatio': 0.05000000074505806, 'resetPlayerCamera': False})
    } {
        Timer.Wait({'time': 1.0})
        Hud.PlayInAnim()
    }

}

void Dead() {

    fork {

        call BossCommon.HitStop({'enemy': ActorIdentifier(name="LastBossMu01")})

    } {
        LastBossMu01.SpritTentaclesAll()
    } {
        Audio.PlayOneshotSystemSE({'volume': 1.0, 'label': 'SE_ENEMY_NULL01_DEAD_1', 'pitch': 1.0})
    }

    FlowControl.SetCanSkip({'enable': True})
    Zelda.SetFacialExpression({'expression': 'serious_few'})
    Zelda.ResetAim()
    Zelda.AimActor({'actor': ActorIdentifier(name="LastBossMu01"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    call EvResetCommon.AllReset_02()


    fork {
        Player.MoveToTargetActor({'distance': -5.0, 'speed': 1, 'tolerance': 0.5, 'customSpeed': 0.0, 'actor': ActorIdentifier(name="LastBossMu01"), 'timeOut': 15.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Player.AimActor({'actor': ActorIdentifier(name="LastBossMu01"), 'duration': 0.20000000298023224, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        LastBossMu01.PlayAnimationEx({'name': 'Second_dead', 'time': 1.0, 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        LastBossMu01.StopTailorOtherChannel({'channel': 'Phase5', 'index': -1})
        LastBossMu01.PlayTailorOtherChannelNoWait({'channel': 'Phase5_dead', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    }

    LastBossMu01.PlayAnimationEx({'restart': True, 'blendFrame': 15, 'name': 'ev_Second_recover', 'time': 5.0, 'layer': 0})

    fork {
        LastBossMu01.PlayAnimationNoWait({'restart': True, 'blendFrame': 15, 'layer': 0, 'name': 'ev_Second_wait'})
    } {
        Audio.PlayOneshotSystemSE({'volume': 1.0, 'label': 'SE_ENEMY_NULL01_DEAD_2', 'pitch': 1.0})
    }

    TagEvTailorPlayer.WarpToActorWithCompassPoint({'direction': 0, 'offsetX': 0.0, 'actor': ActorIdentifier(name="LastBossMu01"), 'distance': 0.0, 'offsetY': 1.5})

    fork {
        LastBossMu01.PlayAnimationEx({'restart': True, 'blendFrame': 15, 'name': 'ev_Second_turn_gate', 'time': 1.5, 'layer': 0})
        LastBossMu01.SetVisibility({'visible': False})
        LastBossMu01.SetGravityEnable({'enable': False})
        LastBossMu01.SetCollisionEnabled({'enable': False})
    } {
        Timer.Wait({'time': 0.5})
        TagEvTailorPlayer.PlayTailorOtherChannelNoWait({'channel': 'LastBossGate_Appear_Water', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Timer.Wait({'time': 1.0})
        LastBossMu01.PlayTailorOtherChannelNoWait({'restart': True, 'channel': 'Through_LastBossGate_Water', 'index': -1, 'stopOnSkipped': True})
    } {
        Timer.Wait({'time': 1.0})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimDegreeAngle({'angle': 120.0, 'withoutTurn': True, 'duration': 0.3999999761581421, 'immediateTurn': False})
        Timer.Wait({'time': 1.0})
        Player.MoveToBesideTargetActor({'speed': 1, 'tolerance': 0.0, 'timeOut': 3.0, 'customSpeed': 11.0, 'offsetY': -0.5, 'offsetZ': -1.0, 'offsetX': -1.5, 'actor': ActorIdentifier(name="TagEvTailorPlayer"), 'withoutTurn': False, 'method': 0})
        Player.AimCompassPoint({'direction': 2, 'duration': 0.20000000298023224, 'withoutTurn': False, 'immediateTurn': False})

        fork {
            Player.PlayTailorOtherChannelNoWait({'channel': 'Through_LastBossGate_Water', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        } {
            Timer.Wait({'time': 0.5})
            Partner[companion].PlayTailorOtherChannelNoWait({'channel': 'Through_LastBossGate_Water', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        }

        Player.SetVisibility({'visible': False})
        Partner[companion].SetVisibility({'visible': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        TagEvTailorPlayer.StopTailorOtherChannel({'channel': 'LastBossGate_Appear_Water', 'index': -1})
    } {
        TagEvTailorPlayer.PlayTailorOtherChannelNoWait({'channel': 'LastBossGate_Dissappear_Water', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    }

    Timer.Wait({'time': 1.5})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    GameControl.RequestLevelJump({'locator': 'MuPhase3', 'level': 'L_DungeonLast', 'offsetX': 0.0, 'offsetZ': 0.0})
}
