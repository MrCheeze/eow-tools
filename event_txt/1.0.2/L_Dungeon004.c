-------- EventFlow: L_Dungeon004 --------

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE', 'PlayZoneBGM', 'StopBGM', 'StopRegionBgm']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: []
queries: []
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestAutoSave', 'UnforbidSave']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['MoveToCompassPoint', 'AimCompassPoint', 'PlayAnimation', 'AimActor', 'MoveToTargetActor', 'SetRestartPositionToActor', 'HideTimedAbilityEffect']
queries: []
params: None

Actor: LavaLid
entrypoint: None()
actions: ['Activate', 'PlayAnimation']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['MoveToBesideTargetActor', 'DisableAutoMovement', 'Talk', 'AimPlayer', 'PlayAnimation', 'MoveToTargetActor']
queries: []
params: None

void L_Dungeon004_012_TopLadderUpIn() {
    if !EventFlags.CheckFlag({'symbol': 'L004R013MovelavaStart'}) {

        fork {

            call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

        } {
            Player.PlayAnimation({'name': 'ev_ladder_levelout_u', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } else {

        fork {

            call EvResetCommon.AllResetAreaChange()

        } {
            Player.HideTimedAbilityEffect()
        }


        fork {

            call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

        } {
            Player.PlayAnimation({'name': 'ev_ladder_levelout_u', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Player.MoveToCompassPoint({'direction': 2, 'speed': 1, 'distance': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
            Audio.StopBGM({'label': 'BGM_VOLCANO_LAVA_ESCAPE', 'duration': 2.0})
            Player.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.5})
            LavaLid.Activate()

            fork {
                LavaLid.PlayAnimation({'name': 'on', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                EventFlags.SetFlag({'symbol': 'L004R012LavaLidActive', 'value': True})
            }

        } {
            Timer.Wait({'time': 0.5})
            Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_LAVA_UP_SHORT', 'volume': 1.0, 'pitch': 1.0})
        } {
            Audio.StopRegionBgm({'fadeSec': 0.0})
        }

        Player.SetRestartPositionToActor({'direction': 0, 'distance': 0.0, 'stance': 'Ground'})
        GameControl.UnforbidSave()
        GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
        Audio.PlayZoneBGM({'stopbgm': False})
    }
}

void IntoDungeonAreaC() {

    call EvResetCommon.AllResetNowait()


    fork {

        call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

    } {
        Player.MoveToTargetActor({'speed': 0, 'actor': ActorIdentifier(name="Player"), 'distance': 1.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
    }

    Partner[companion].DisableAutoMovement()

    fork {
        Partner[companion].MoveToTargetActor({'offsetY': 1.0, 'speed': 0, 'actor': ActorIdentifier(name="Player"), 'distance': 5.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0})
    } {
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Partner"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Partner[companion].PlayAnimation({'name': 'lookaround02,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.30000001192092896})
    Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetY': 1.0, 'offsetZ': -1.0, 'actor': ActorIdentifier(name="Player"), 'offsetX': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})

    fork {
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.AimActor({'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="Partner", sub_name="companion"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }


    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaC:IntoDungeon_AreaC_010', 'getAttention': False})
    } {
        Partner[companion].PlayAnimation({'name': 'yes02,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Partner[companion].Talk({'message': 'scenario/StoryAreaC:IntoDungeon_AreaC_020', 'getAttention': False})
    } {
        Partner[companion].PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    QuestSystem.SetProgress({'symbol': 'Volcano:1234858987', 'isShowTelopInEvent': False, 'isFrontFade': False})
    EventVariables.SetVariable({'symbol': 'Volcano:1234858987'})
}
