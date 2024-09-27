-------- EventFlow: WarpHole --------

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump', 'RequestWarp']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['LookAtTalker', 'PlayAnimationEx', 'PlayAnimationNoWait', 'AimCompassPoint']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: EvFloorCollapse
entrypoint: None()
actions: ['SetActorSwitch', 'Destroy', 'SetShapeVisibility', 'PlayTailorOtherChannelNoWait', 'SetVisibility']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['DisableAutoMovement', 'AimActor', 'PlayAnimation']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE', 'StopRegionBgm']
queries: []
params: None

Actor: Area
entrypoint: None()
actions: ['Deactivate', 'Activate']
queries: []
params: None

void LevelWarpStart() {

    call AreaExitCommon._OutCommon({'fadePreset': 'FadeOutNormalB'})

    GameControl.RequestLevelJump({'level': 'level', 'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void LocationWarpStart() {

    call AreaExitCommon._OutCommon({'fadePreset': 'FadeOutNormalB'})

    GameControl.RequestWarp({'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void LocationWarpStart_LDungeon002_001() {

    call EvResetCommon.AllReset()

    EvFloorCollapse.SetShapeVisibility({'shapeName': 'before__FloorCollapseLD002_00', 'visible': False})
    EvFloorCollapse.SetShapeVisibility({'shapeName': 'crack__FloorCollapseLD002_01', 'visible': True})
    EvFloorCollapse.PlayTailorOtherChannelNoWait({'restart': True, 'channel': 'Omen', 'stopOnSkipped': True, 'index': -1})
    Audio.StopRegionBgm({'fadeSec': 1.5})
    Timer.Wait({'time': 0.5})
    Player.LookAtTalker({'duration': 0.4000000059604645, 'distanceOffset': 0.0, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})

    fork {
        Timer.Wait({'time': 0.800000011920929})
        EvFloorCollapse.PlayTailorOtherChannelNoWait({'restart': True, 'channel': 'Destruct', 'stopOnSkipped': True, 'index': -1})
        EvFloorCollapse.SetVisibility({'visible': False})
        Timer.Wait({'time': 0.5})
        EvFloorCollapse.SetActorSwitch({'value': True, 'switchIndex': 0})
        EvFloorCollapse.Destroy()
    } {

        fork {
            Player.PlayAnimationEx({'name': 'ev_surprise_st', 'time': 0.800000011920929, 'layer': 0, 'blendFrame': -1, 'restart': False})

            fork {
                Area.Deactivate()
            } {
                Player.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
            } {
                Player.PlayAnimationEx({'name': 'fall_abyss_pre_lp', 'time': 0.5, 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                Audio.PlayOneshotSystemSE({'label': 'VO_ZELDA_FALL', 'volume': 1.0, 'pitch': 1.0})
            }

            Player.PlayAnimationNoWait({'name': 'fall_abyss_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Partner[companion].DisableAutoMovement()
            Timer.Wait({'time': 1.2000000476837158})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Partner[companion].PlayAnimation({'name': 'surprised_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }

    Timer.Wait({'time': 0.5})

    call AreaExitCommon._OutCommon({'fadePreset': 'FadeOutNormalB'})

    Area.Activate()
    GameControl.RequestWarp({'locator': 'locator', 'offsetX': 0.0, 'offsetZ': 0.0})
}
