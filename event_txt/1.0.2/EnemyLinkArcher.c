-------- EventFlow: EnemyLinkArcher --------

Actor: Player
entrypoint: None()
actions: ['WarpToActorLinkedPointWithCompassPoint', 'AimCompassPoint', 'WarpToActorWithCompassPoint', 'SetVisibility', 'WaitForReady', 'SetRestartPositionToActor', 'MorphTo', 'LookAtTalker']
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

Actor: Partner
entrypoint: None()
actions: ['AimCompassPoint']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['EnableAutoMovement', 'Activate', 'WarpToActorLinkedPointWithCompassPoint', 'Deactivate', 'SetVisibility', 'WarpToDefaultPosition', 'Talk', 'WarpToActor', 'AimPlayer']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayZoneBGM', 'PlayBGM', 'StopAllBGM', 'StopZoneBgm', 'PlayOneshotSystemSE', 'DisablePlaySeFromTailor', 'EnablePlaySeFromTailor', 'WaitSamplePositionAndStopAndPlayEnemyLinkBridgeBgm', 'PlayJingle']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Reset', 'LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: ['PreloadTimeline', 'InvokeTimeline', 'SetCanSkip']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestAutoSave', 'ForbidSave', 'UnforbidSave']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor', 'PlayAnimation', 'SetInterestIkEnabled', 'AimDegreeAngle']
queries: ['CheckMorph']
params: None

Actor: EnemyLinkArcher
entrypoint: None()
actions: ['ResetActiveAndPesteActors', 'CameraLockoff', 'WarpToActorWithCompassPoint', 'Destroy']
queries: []
params: None

Actor: EnemyLinkArcher[EnemyLinkArcher03]
entrypoint: None()
actions: ['StartCombatAngry', 'Activate', 'PlayAnimation', 'PlayAnimationNoWait', 'PlayMaterialAnimationNoWait', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: EnemyLinkArcher[EnemyLinkArcher02]
entrypoint: None()
actions: ['StartCombatAngry', 'Activate', 'PlayAnimation', 'PlayAnimationNoWait', 'PlayMaterialAnimationNoWait', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: EnemyLinkArcher[EnemyLinkArcher04]
entrypoint: None()
actions: ['StartCombatAngry', 'Activate', 'PlayAnimation', 'PlayAnimationNoWait', 'PlayMaterialAnimationNoWait', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: EnemyLinkArcher[EnemyLinkArcher01]
entrypoint: None()
actions: ['StartCombat', 'WarpToActorWithCompassPoint', 'ResetActiveAndPesteActors', 'Destroy', 'StopTailorOtherChannel', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: TagBossArcherSequencer
entrypoint: None()
actions: ['RoomDoorOpen', 'RoomDoorClose', 'DropLinkedItems']
queries: []
params: None

Actor: EnemyLink[EnemyLinkArcher01]
entrypoint: None()
actions: ['Activate', 'SetVisibility']
queries: []
params: None

Actor: EvTecuum[TecuumFly01]
entrypoint: None()
actions: ['Deactivate']
queries: []
params: None

Actor: EvTecuum[TecuumFly02]
entrypoint: None()
actions: ['Activate', 'PlayAnimation', 'Deactivate']
queries: []
params: None

Actor: EvTecuum[TecuumFly03]
entrypoint: None()
actions: ['Activate', 'PlayAnimation', 'Deactivate']
queries: []
params: None

Actor: EvTecuum[TecuumFly04]
entrypoint: None()
actions: ['Activate', 'PlayAnimation', 'Deactivate']
queries: []
params: None

Actor: Door[DoorSouth]
entrypoint: None()
actions: ['SetVisibility', 'DoorClose']
queries: []
params: None

Actor: Door[DoorNorth]
entrypoint: None()
actions: ['LookAtGimmick']
queries: []
params: None

Actor: ItemBow
entrypoint: None()
actions: []
queries: []
params: None

void Appear() {
    Player.SetRestartPositionToActor({'distance': -9.0, 'direction': 2, 'stance': 'Ground'})
    GameControl.RequestAutoSave({'name': 'EnemyLinkArcher', 'immediate': True, 'needsStartupEvent': False, 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})

    call BossCommon.PreMiniBoss()


    fork {
        EvTecuum[TecuumFly01].Deactivate()
    } {
        EvTecuum[TecuumFly02].Deactivate()
    } {
        EvTecuum[TecuumFly03].Deactivate()
    } {
        EvTecuum[TecuumFly04].Deactivate()
    }

    Door[DoorSouth].SetVisibility({'visible': False})
    Door[DoorSouth].DoorClose()
    Timer.Wait({'time': 1.0})
    Audio.DisablePlaySeFromTailor()
    FlowControl.PreloadTimeline({'filename': 'EnemyLinkArcherAppear'})

    fork {
        EnemyLink[EnemyLinkArcher01].Activate()
        EnemyLink[EnemyLinkArcher01].SetVisibility({'visible': True})
    } {
        Player.SetVisibility({'visible': False})
    } {
        Partner[companion].SetVisibility({'visible': False})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_ENEMY_LINK_ARCH_APPEAR', 'volume': 1.0, 'pitch': 1.0})
    }


    fork {
        FlowControl.InvokeTimeline({'filename': 'EnemyLinkArcherAppear', 'rate': 1.0})
    } {
        Fade.StartPreset({'preset': 'FadeInSlow'})
    } {
        FlowControl.SetCanSkip({'enable': True})
    }

    Camera.Reset({'chaseRatio': 0.07500000298023224, 'resetPlayerCamera': False})

    fork {
        Player.SetVisibility({'visible': True})
    } {
        Partner[companion].SetVisibility({'visible': True})
    }

    Timer.Wait({'time': 0.5})
    Hud.PlayInAnim()
    Audio.EnablePlaySeFromTailor()
    Audio.PlayBGM({'label': 'BGM_BATTLE_ENEMY_LINK', 'volume': 1.0, 'ignoreSkip': True})
    Timer.Wait({'time': 0.20000000298023224})
    EventFlags.SetFlag({'value': True, 'symbol': 'Ev_EnemyLinkBowAppear'})
    GameControl.ForbidSave()
    EnemyLinkArcher[EnemyLinkArcher01].StartCombat()
}

void Dead2() {

    call BossCommon.HitStopSmallBoss({'enemy': ActorIdentifier(name="EnemyLinkArcher")})


    fork {
        Hud.PlayOutAnim()
    } {
        Audio.StopAllBGM({'duration': 1.0})
    } {
        FlowControl.PreloadTimeline({'filename': 'EnemyLinkArcherDead02'})
    } {
        Player.WaitForReady()
    } {
        Timer.Wait({'time': 1.0})
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
    }

    if !Zelda.CheckMorph({'morphKind': 0}) {
        Player.MorphTo({'kind': 0})
    }

    fork {
        Timer.Wait({'time': 0.10000000149011612})
    } {
        EnemyLinkArcher.ResetActiveAndPesteActors({'child': True, 'cemeteryRevive': False, 'defeatedThrough': False, 'aliveCemeteryRevive': False})
    }


    fork {
        Player.WarpToActorLinkedPointWithCompassPoint({'index': 0, 'direction': 2, 'actor': ActorIdentifier(name="TagBossArcherSequencer"), 'offsetY': 0.0})
        Player.AimCompassPoint({'duration': 0.10000000149011612, 'direction': 2, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Partner[companion].WarpToActorLinkedPointWithCompassPoint({'index': 0, 'direction': 2, 'actor': ActorIdentifier(name="TagBossArcherSequencer"), 'offsetY': 0.0})
        Partner.AimCompassPoint({'duration': 0.10000000149011612, 'direction': 2, 'withoutTurn': False, 'immediateTurn': False})
    }

    EnemyLinkArcher.WarpToActorWithCompassPoint({'offsetY': 0.0, 'offsetX': 0.0, 'direction': 0, 'distance': 12.0, 'actor': ActorIdentifier(name="Player")})

    call Dissolve.Dissolve({'actor': ActorIdentifier(name="EnemyLinkArcher")})

    FlowControl.InvokeTimeline({'filename': 'EnemyLinkArcherDead02', 'rate': 1.0})
    Door[DoorNorth].LookAtGimmick({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    TagBossArcherSequencer.RoomDoorOpen()
    Timer.Wait({'time': 0.5})
    Audio.PlayJingle({'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
    Player.WarpToActorWithCompassPoint({'offsetY': 0.0, 'offsetX': 0.0, 'direction': 2, 'distance': 10.0, 'actor': ActorIdentifier(name="EnemyLinkArcher")})
    Partner[companion].WarpToActor({'offsetY': 1.0, 'distance': 1.5, 'offsetX': -1.5, 'actor': ActorIdentifier(name="Player")})
    Partner[companion].AimPlayer({'duration': 0.009999999776482582, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Zelda.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Player.LookAtTalker({'chaseRatio': 1.0, 'duration': 0.0, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 0.5})
    Audio.PlayZoneBGM({'stopbgm': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaD:PasteLinkBowDead_010', 'getAttention': False})
    Partner[companion].Talk({'message': 'scenario/StoryAreaD:PasteLinkBowDead_020', 'getAttention': False})
    EnemyLinkArcher.CameraLockoff()
    TagBossArcherSequencer.DropLinkedItems({'displacementY': 3.0, 'displacementX': 0.0, 'displacementZ': 0.0})
    GameControl.UnforbidSave()
    GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'Ev_EnemyLinkBowDead'})
    Audio.PlayZoneBGM({'stopbgm': True})
    EnemyLinkArcher.Destroy()
}

void Dead() {

    call BossCommon.HitStopSmallBoss({'enemy': ActorIdentifier(name="EnemyLinkArcher", sub_name="EnemyLinkArcher01")})


    fork {
        Timer.Wait({'time': 2.0})
    } {
        Timer.Wait({'time': 1.0})
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
    } {
        FlowControl.PreloadTimeline({'filename': 'EnemyLinkArcherDead01'})
    } {
        Hud.PlayOutAnim()
    } {
        Audio.StopAllBGM({'duration': 1.0})
    }

    if !Zelda.CheckMorph({'morphKind': 0}) {
        Player.MorphTo({'kind': 0})
    }
    Partner[companion].Deactivate()
    Audio.StopZoneBgm()
    EnemyLinkArcher[EnemyLinkArcher01].StopTailorOtherChannel({'channel': 'Aura_Normal', 'index': -1})

    fork {
        Timer.Wait({'time': 0.5})
    } {
        EnemyLinkArcher[EnemyLinkArcher01].ResetActiveAndPesteActors({'child': True, 'cemeteryRevive': False, 'defeatedThrough': False, 'aliveCemeteryRevive': False})
    }

    EnemyLinkArcher[EnemyLinkArcher01].WarpToActorWithCompassPoint({'direction': 0, 'offsetX': 0.0, 'actor': ActorIdentifier(name="ItemBow"), 'distance': 0.0, 'offsetY': 0.0})
    EnemyLinkArcher[EnemyLinkArcher01].PlayTailorOtherChannelNoWait({'channel': 'Aura_Normal', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    Player.WarpToActorWithCompassPoint({'direction': 2, 'distance': 4.5, 'offsetX': -12.0, 'actor': ActorIdentifier(name="ItemBow"), 'offsetY': 0.0})

    call Dissolve.Dissolve({'actor': ActorIdentifier(name="EnemyLinkArcher", sub_name="EnemyLinkArcher01")})

    FlowControl.InvokeTimeline({'filename': 'EnemyLinkArcherDead01', 'rate': 1.0})
    Player.WarpToActorWithCompassPoint({'direction': 2, 'distance': 10.5, 'actor': ActorIdentifier(name="ItemBow"), 'offsetY': 0.0, 'offsetX': 0.0})
    Partner[companion].Activate()
    Partner[companion].WarpToDefaultPosition({'position': 1, 'avoidWall': False, 'avoidPlayer': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'L003R024EnemyLinkArcher01Dead'})
    Audio.PlayZoneBGM({'stopbgm': True})
    EnemyLinkArcher[EnemyLinkArcher01].Destroy()

    call Appear2()

}

void Appear2() {
    Audio.StopZoneBgm()

    fork {
        TagBossArcherSequencer.RoomDoorClose()
        Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': True})
        Camera.LookAt2ActorsCenterAsTalker({'chaseRatio': 1.0, 'distanceOffset': 12.0, 'offsetZ': -1.5, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="EnemyLinkArcher", sub_name="EnemyLinkArcher03"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'offsetX': 0.0, 'offsetY': 0.0})

        fork {

            fork {
                Timer.Wait({'time': 1.2000000476837158})
                EvTecuum[TecuumFly02].Activate()
                EvTecuum[TecuumFly02].PlayAnimation({'name': 'ev_EnemyLinkBowAppear_2', 'layer': 0, 'blendFrame': -1, 'restart': False})
                EvTecuum[TecuumFly02].Deactivate()
                EnemyLinkArcher[EnemyLinkArcher02].Activate()
                EnemyLinkArcher[EnemyLinkArcher02].PlayTailorOtherChannelNoWait({'channel': 'Aura_Anger', 'stopOnSkipped': False, 'restart': False, 'index': -1})
                EnemyLinkArcher[EnemyLinkArcher02].PlayMaterialAnimationNoWait({'layer': -1, 'name': 'ev_EnemyLinkBowAppear_02'})
            } {

                fork {
                    EnemyLinkArcher[EnemyLinkArcher02].PlayAnimation({'name': 'ev_EnemyLinkBowAppear_2', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    EnemyLinkArcher[EnemyLinkArcher02].PlayAnimationNoWait({'name': 'attack_bow_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                } {
                    Timer.Wait({'time': 5.666999816894531})
                }

            }

        } {

            fork {
                Timer.Wait({'time': 1.0})
                EvTecuum[TecuumFly03].Activate()
                EvTecuum[TecuumFly03].PlayAnimation({'name': 'ev_EnemyLinkBowAppear_3', 'layer': 0, 'blendFrame': -1, 'restart': False})
                EvTecuum[TecuumFly03].Deactivate()
                EnemyLinkArcher[EnemyLinkArcher03].Activate()
                EnemyLinkArcher[EnemyLinkArcher03].PlayTailorOtherChannelNoWait({'stopOnSkipped': False, 'channel': 'Aura_Anger', 'restart': False, 'index': -1})
                EnemyLinkArcher[EnemyLinkArcher03].PlayMaterialAnimationNoWait({'layer': -1, 'name': 'ev_EnemyLinkBowAppear_02'})
            } {

                fork {
                    EnemyLinkArcher[EnemyLinkArcher03].PlayAnimation({'name': 'ev_EnemyLinkBowAppear_3', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    EnemyLinkArcher[EnemyLinkArcher03].PlayAnimationNoWait({'name': 'attack_bow_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                } {
                    Timer.Wait({'time': 5.666999816894531})
                }

            }

        } {

            fork {
                Timer.Wait({'time': 1.399999976158142})
                EvTecuum[TecuumFly04].Activate()
                EvTecuum[TecuumFly04].PlayAnimation({'name': 'ev_EnemyLinkBowAppear_4', 'layer': 0, 'blendFrame': -1, 'restart': False})
                EvTecuum[TecuumFly04].Deactivate()
                EnemyLinkArcher[EnemyLinkArcher04].Activate()
                EnemyLinkArcher[EnemyLinkArcher04].PlayTailorOtherChannelNoWait({'channel': 'Aura_Anger', 'stopOnSkipped': False, 'restart': False, 'index': -1})
                EnemyLinkArcher[EnemyLinkArcher04].PlayMaterialAnimationNoWait({'layer': -1, 'name': 'ev_EnemyLinkBowAppear_02'})
            } {

                fork {
                    EnemyLinkArcher[EnemyLinkArcher04].PlayAnimation({'name': 'ev_EnemyLinkBowAppear_4', 'layer': 0, 'blendFrame': -1, 'restart': False})
                    EnemyLinkArcher[EnemyLinkArcher04].PlayAnimationNoWait({'name': 'attack_bow_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                } {
                    Timer.Wait({'time': 5.666999816894531})
                }

            }

        } {
            Timer.Wait({'time': 1.399999976158142})
            Zelda.PlayAnimation({'name': 'ev_surprise_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Zelda.SetInterestIkEnabled({'enable': True})
            Zelda.AimDegreeAngle({'withoutTurn': True, 'angle': 200.0, 'duration': 0.4000000059604645, 'immediateTurn': False})
            Timer.Wait({'time': 0.20000000298023224})
            Zelda.AimDegreeAngle({'withoutTurn': True, 'angle': 125.0, 'duration': 0.4000000059604645, 'immediateTurn': False})
            Zelda.SetInterestIkEnabled({'enable': False})
            Zelda.PlayAnimation({'name': 'ev_BossApear_st', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } {
        Timer.Wait({'time': 1.5670000314712524})
        Audio.PlayBGM({'label': 'BGM_BATTLE_ENEMY_LINK_BRIDGE', 'volume': 1.0, 'ignoreSkip': True})
    }

    Timer.Wait({'time': 0.25})
    Partner[companion].EnableAutoMovement()
    Hud.PlayInAnim()
    Partner[companion].Activate()
    EventFlags.SetFlag({'value': True, 'symbol': 'Ev_EnemyLinkBowAppear2'})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})

    fork {
        EnemyLinkArcher[EnemyLinkArcher02].StartCombatAngry()
    } {
        EnemyLinkArcher[EnemyLinkArcher03].StartCombatAngry()
    } {
        EnemyLinkArcher[EnemyLinkArcher04].StartCombatAngry()
    }

    Audio.WaitSamplePositionAndStopAndPlayEnemyLinkBridgeBgm({'label': 'BGM_BATTLE_ENEMY_LINK2', 'stoplabel': 'BGM_BATTLE_ENEMY_LINK_BRIDGE'})
}
