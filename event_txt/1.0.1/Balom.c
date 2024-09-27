-------- EventFlow: Balom --------

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Balom
entrypoint: None()
actions: ['Deactivate', 'CameraLockoff', 'PlayAnimation', 'LookAtGimmick', 'LookAtTalker', 'Talk', 'RoomDoorOpen', 'SetTalkerName', 'Destroy']
queries: []
params: None

Actor: Hud
entrypoint: None()
actions: ['PlayInAnim']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayBGM', 'PlayZoneBGM', 'StopAllBGM', 'PlayJingle']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['MoveToCompassPoint', 'SetRestartPositionToActor', 'AbsorbAllPastedActors', 'UpdateStrongRespawnPoint', 'ForceTurn']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Reset']
queries: []
params: None

Actor: BalomPiece[BalomPiece0]
entrypoint: None()
actions: ['WarpToActor', 'SetCollisionEnabled', 'Activate', 'MoveToLinkedPoint', 'SetBalomPiece', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: BalomPiece[BalomPiece1]
entrypoint: None()
actions: ['WarpToActor', 'SetCollisionEnabled', 'Activate', 'MoveToLinkedPoint', 'SetBalomPiece', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: BalomPiece[BalomPiece2]
entrypoint: None()
actions: ['WarpToActor', 'SetCollisionEnabled', 'Activate', 'MoveToLinkedPoint', 'SetBalomPiece', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: BalomPiece[BalomPiece3]
entrypoint: None()
actions: ['WarpToActor', 'SetCollisionEnabled', 'Activate', 'MoveToLinkedPoint', 'SetBalomPiece', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: BalomPiece[BalomPiece4]
entrypoint: None()
actions: ['WarpToActor', 'SetCollisionEnabled', 'Activate', 'MoveToLinkedPoint', 'SetBalomPiece', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestAutoSave', 'ForbidSave', 'UnforbidSave']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: WarpBoss
entrypoint: None()
actions: ['LookAtGimmick']
queries: []
params: None

void Division2() {

    fork {

        fork {
            Balom.PlayAnimation({'name': 'damage', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Balom.LookAtGimmick({'duration': 1.0, 'chaseRatio': 0.30000001192092896, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        }

        Balom.PlayAnimation({'name': 'defusion', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Balom.Deactivate()

        fork {
            BalomPiece[BalomPiece0].SetCollisionEnabled({'enable': False})
            BalomPiece[BalomPiece0].WarpToActor({'actor': ActorIdentifier(name="Balom"), 'distance': 0.0, 'offsetY': 0.0, 'offsetX': 0.0})
            BalomPiece[BalomPiece0].Activate()
            BalomPiece[BalomPiece0].PlayTailorOtherChannelNoWait({'channel': 'Defuison_Trail', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            BalomPiece[BalomPiece0].MoveToLinkedPoint({'speed': 0, 'tolerance': 0.05000000074505806, 'index': 1, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        } {
            BalomPiece[BalomPiece1].SetCollisionEnabled({'enable': False})
            BalomPiece[BalomPiece1].WarpToActor({'actor': ActorIdentifier(name="Balom"), 'distance': 0.0, 'offsetY': 0.0, 'offsetX': 0.0})
            BalomPiece[BalomPiece1].Activate()
            BalomPiece[BalomPiece1].PlayTailorOtherChannelNoWait({'channel': 'Defuison_Trail', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            BalomPiece[BalomPiece1].MoveToLinkedPoint({'speed': 0, 'tolerance': 0.05000000074505806, 'index': 1, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        } {
            BalomPiece[BalomPiece2].SetCollisionEnabled({'enable': False})
            BalomPiece[BalomPiece2].WarpToActor({'actor': ActorIdentifier(name="Balom"), 'distance': 0.0, 'offsetY': 0.0, 'offsetX': 0.0})
            BalomPiece[BalomPiece2].Activate()
            BalomPiece[BalomPiece2].PlayTailorOtherChannelNoWait({'channel': 'Defuison_Trail', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            BalomPiece[BalomPiece2].MoveToLinkedPoint({'speed': 0, 'tolerance': 0.05000000074505806, 'index': 1, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        } {
            BalomPiece[BalomPiece3].SetCollisionEnabled({'enable': False})
            BalomPiece[BalomPiece3].WarpToActor({'actor': ActorIdentifier(name="Balom"), 'distance': 0.0, 'offsetY': 0.0, 'offsetX': 0.0})
            BalomPiece[BalomPiece3].Activate()
            BalomPiece[BalomPiece3].PlayTailorOtherChannelNoWait({'channel': 'Defuison_Trail', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            BalomPiece[BalomPiece3].MoveToLinkedPoint({'index': 0, 'speed': 0, 'tolerance': 0.05000000074505806, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        } {
            BalomPiece[BalomPiece4].SetCollisionEnabled({'enable': False})
            BalomPiece[BalomPiece4].WarpToActor({'actor': ActorIdentifier(name="Balom"), 'distance': 0.0, 'offsetY': 0.0, 'offsetX': 0.0})
            BalomPiece[BalomPiece4].Activate()
            BalomPiece[BalomPiece4].PlayTailorOtherChannelNoWait({'channel': 'Defuison_Trail', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            BalomPiece[BalomPiece4].MoveToLinkedPoint({'index': 0, 'speed': 0, 'tolerance': 0.05000000074505806, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        }


        fork {
            BalomPiece[BalomPiece0].SetCollisionEnabled({'enable': True})
            BalomPiece[BalomPiece0].SetBalomPiece({'argument0': 1, 'argument1': 0})
        } {
            BalomPiece[BalomPiece1].SetCollisionEnabled({'enable': True})
            BalomPiece[BalomPiece1].SetBalomPiece({'argument0': 0, 'argument1': 1})
        } {
            BalomPiece[BalomPiece2].SetCollisionEnabled({'enable': True})
            BalomPiece[BalomPiece2].SetBalomPiece({'argument0': 1, 'argument1': 0})
        } {
            BalomPiece[BalomPiece3].SetCollisionEnabled({'enable': True})
            BalomPiece[BalomPiece3].SetBalomPiece({'argument0': 1, 'argument1': 0})
        } {
            BalomPiece[BalomPiece4].SetCollisionEnabled({'enable': True})
            BalomPiece[BalomPiece4].SetBalomPiece({'argument0': 1, 'argument1': 0})
        }

    } {

        call EvResetCommon.AngryReset()

    }

}

void Division1() {

    fork {

        fork {
            Balom.PlayAnimation({'name': 'damage', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Balom.LookAtGimmick({'duration': 1.0, 'chaseRatio': 0.30000001192092896, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        }

        Timer.Wait({'time': 0.5})
        Balom.SetTalkerName({'message': 'glossary/Boss:Enemy_560', 'keep': False})
        Balom.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Balom.Talk({'message': 'quest/QuestAreaPlains:Enemy_HyrulePlains020_010', 'getAttention': False})
        Balom.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.5})
        Balom.PlayAnimation({'name': 'defusion', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Balom.Deactivate()

        fork {
            BalomPiece[BalomPiece0].SetCollisionEnabled({'enable': False})
            BalomPiece[BalomPiece0].WarpToActor({'actor': ActorIdentifier(name="Balom"), 'distance': 0.0, 'offsetY': 0.0, 'offsetX': 0.0})
            BalomPiece[BalomPiece0].Activate()
            BalomPiece[BalomPiece0].PlayTailorOtherChannelNoWait({'channel': 'Defuison_Trail', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            BalomPiece[BalomPiece0].MoveToLinkedPoint({'index': 0, 'speed': 0, 'tolerance': 0.05000000074505806, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        } {
            BalomPiece[BalomPiece1].SetCollisionEnabled({'enable': False})
            BalomPiece[BalomPiece1].WarpToActor({'actor': ActorIdentifier(name="Balom"), 'distance': 0.0, 'offsetY': 0.0, 'offsetX': 0.0})
            BalomPiece[BalomPiece1].Activate()
            BalomPiece[BalomPiece1].PlayTailorOtherChannelNoWait({'channel': 'Defuison_Trail', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            BalomPiece[BalomPiece1].MoveToLinkedPoint({'index': 0, 'speed': 0, 'tolerance': 0.05000000074505806, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        } {
            BalomPiece[BalomPiece2].SetCollisionEnabled({'enable': False})
            BalomPiece[BalomPiece2].WarpToActor({'actor': ActorIdentifier(name="Balom"), 'distance': 0.0, 'offsetY': 0.0, 'offsetX': 0.0})
            BalomPiece[BalomPiece2].Activate()
            BalomPiece[BalomPiece2].PlayTailorOtherChannelNoWait({'channel': 'Defuison_Trail', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            BalomPiece[BalomPiece2].MoveToLinkedPoint({'index': 0, 'speed': 0, 'tolerance': 0.05000000074505806, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        }

        Timer.Wait({'time': 0.5})
        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
        Balom.Talk({'message': 'quest/QuestAreaPlains:Enemy_HyrulePlains020_020', 'getAttention': False})
        Timer.Wait({'time': 0.5})

        fork {
            BalomPiece[BalomPiece0].SetCollisionEnabled({'enable': True})
            BalomPiece[BalomPiece0].SetBalomPiece({'argument0': 1, 'argument1': 0})
        } {
            BalomPiece[BalomPiece1].SetCollisionEnabled({'enable': True})
            BalomPiece[BalomPiece1].SetBalomPiece({'argument1': 1, 'argument0': 0})
        } {
            BalomPiece[BalomPiece2].SetCollisionEnabled({'enable': True})
            BalomPiece[BalomPiece2].SetBalomPiece({'argument0': 1, 'argument1': 0})
        }

    } {

        call EvResetCommon.AngryReset()

    }

}

void Dead() {

    call BossCommon.HitStop({'enemy': ActorIdentifier(name="Balom")})

    Audio.StopAllBGM({'duration': 0.5})
    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    Balom.SetTalkerName({'message': 'glossary/Boss:Enemy_560', 'keep': False})
    Balom.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Balom.Talk({'message': 'quest/QuestAreaPlains:Enemy_HyrulePlains030_010', 'getAttention': False})
    Balom.Talk({'message': 'quest/QuestAreaPlains:Enemy_HyrulePlains030_020', 'getAttention': False})
    Timer.Wait({'time': 0.5})

    call BossCommon.MiniBossExtinction2({'enemy': ActorIdentifier(name="Balom")})

    WarpBoss.LookAtGimmick({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvZ_BalomLv1Dead'})
    Timer.Wait({'time': 0.5})
    Audio.PlayJingle({'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
    Balom.CameraLockoff()
    Balom.RoomDoorOpen()
    Balom.Destroy()
    Timer.Wait({'time': 1.5})
    QuestSystem.SetProgress({'symbol': 'Balom_HyrulePlains010:2608839320', 'isShowTelopInEvent': False, 'isFrontFade': False})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Timer.Wait({'time': 0.5})
    GameControl.UnforbidSave()
    GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
    Audio.PlayZoneBGM({'stopbgm': True})
}

void Appear() {
    Player.ForceTurn({'direction': 2})
    Player.SetRestartPositionToActor({'distance': -9.0, 'direction': 2, 'stance': 'Ground'})
    GameControl.RequestAutoSave({'name': 'Balom', 'immediate': True, 'needsStartupEvent': False, 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})

    call BossCommon.PreMiniBoss()

    Player.UpdateStrongRespawnPoint()
    Player.MoveToCompassPoint({'speed': 0, 'timeOut': 7.0, 'distance': 1.5, 'direction': 2, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})

    call BossCommon.MiniBossDoorClose({'enemy': ActorIdentifier(name="Balom")})

    Balom.LookAtTalker({'distanceOffset': -6.0, 'offsetY': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 0.10000000149011612})

    fork {
        Balom.Talk({'message': 'quest/QuestAreaPlains:Enemy_HyrulePlains010_010', 'getAttention': False})
    } {
        Balom.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Balom.SetTalkerName({'message': 'glossary/Boss:Enemy_560', 'keep': False})
    Balom.Talk({'message': 'quest/QuestAreaPlains:Enemy_HyrulePlains010_020', 'getAttention': False})
    Balom.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 1.0})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    GameControl.ForbidSave()
    Audio.PlayBGM({'label': 'BGM_BATTLE_MIDDLE_BOSS1', 'volume': 1.0, 'ignoreSkip': True})
}

void Lv2Division2() {

    fork {

        fork {
            Balom.PlayAnimation({'name': 'damage', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Balom.LookAtGimmick({'duration': 1.0, 'chaseRatio': 0.30000001192092896, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        }

        Balom.PlayAnimation({'name': 'defusion', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Balom.Deactivate()

        fork {
            BalomPiece[BalomPiece0].SetCollisionEnabled({'enable': False})
            BalomPiece[BalomPiece0].WarpToActor({'actor': ActorIdentifier(name="Balom"), 'distance': 0.0, 'offsetY': 0.0, 'offsetX': 0.0})
            BalomPiece[BalomPiece0].Activate()
            BalomPiece[BalomPiece0].PlayTailorOtherChannelNoWait({'channel': 'Defuison_Trail', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            BalomPiece[BalomPiece0].MoveToLinkedPoint({'speed': 0, 'tolerance': 0.05000000074505806, 'index': 1, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        } {
            BalomPiece[BalomPiece1].SetCollisionEnabled({'enable': False})
            BalomPiece[BalomPiece1].WarpToActor({'actor': ActorIdentifier(name="Balom"), 'distance': 0.0, 'offsetY': 0.0, 'offsetX': 0.0})
            BalomPiece[BalomPiece1].Activate()
            BalomPiece[BalomPiece1].PlayTailorOtherChannelNoWait({'channel': 'Defuison_Trail', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            BalomPiece[BalomPiece1].MoveToLinkedPoint({'speed': 0, 'tolerance': 0.05000000074505806, 'index': 1, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        } {
            BalomPiece[BalomPiece2].SetCollisionEnabled({'enable': False})
            BalomPiece[BalomPiece2].WarpToActor({'actor': ActorIdentifier(name="Balom"), 'distance': 0.0, 'offsetY': 0.0, 'offsetX': 0.0})
            BalomPiece[BalomPiece2].Activate()
            BalomPiece[BalomPiece2].PlayTailorOtherChannelNoWait({'channel': 'Defuison_Trail', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            BalomPiece[BalomPiece2].MoveToLinkedPoint({'speed': 0, 'tolerance': 0.05000000074505806, 'index': 1, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        } {
            BalomPiece[BalomPiece3].SetCollisionEnabled({'enable': False})
            BalomPiece[BalomPiece3].WarpToActor({'actor': ActorIdentifier(name="Balom"), 'distance': 0.0, 'offsetY': 0.0, 'offsetX': 0.0})
            BalomPiece[BalomPiece3].Activate()
            BalomPiece[BalomPiece3].PlayTailorOtherChannelNoWait({'channel': 'Defuison_Trail', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            BalomPiece[BalomPiece3].MoveToLinkedPoint({'index': 0, 'speed': 0, 'tolerance': 0.05000000074505806, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        } {
            BalomPiece[BalomPiece4].SetCollisionEnabled({'enable': False})
            BalomPiece[BalomPiece4].WarpToActor({'actor': ActorIdentifier(name="Balom"), 'distance': 0.0, 'offsetY': 0.0, 'offsetX': 0.0})
            BalomPiece[BalomPiece4].Activate()
            BalomPiece[BalomPiece4].PlayTailorOtherChannelNoWait({'channel': 'Defuison_Trail', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            BalomPiece[BalomPiece4].MoveToLinkedPoint({'index': 0, 'speed': 0, 'tolerance': 0.05000000074505806, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        }


        fork {
            BalomPiece[BalomPiece0].SetCollisionEnabled({'enable': True})
            BalomPiece[BalomPiece0].SetBalomPiece({'argument0': 0, 'argument1': 0})
        } {
            BalomPiece[BalomPiece1].SetCollisionEnabled({'enable': True})
            BalomPiece[BalomPiece1].SetBalomPiece({'argument0': 0, 'argument1': 0})
        } {
            BalomPiece[BalomPiece2].SetCollisionEnabled({'enable': True})
            BalomPiece[BalomPiece2].SetBalomPiece({'argument0': 1, 'argument1': 1})
        } {
            BalomPiece[BalomPiece3].SetCollisionEnabled({'enable': True})
            BalomPiece[BalomPiece3].SetBalomPiece({'argument0': 1, 'argument1': 1})
        } {
            BalomPiece[BalomPiece4].SetCollisionEnabled({'enable': True})
            BalomPiece[BalomPiece4].SetBalomPiece({'argument0': 1, 'argument1': 1})
        }

    } {

        call EvResetCommon.AngryReset()

    }

}

void Lv2Division1() {

    fork {

        fork {
            Balom.PlayAnimation({'name': 'damage', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Balom.LookAtGimmick({'duration': 1.0, 'chaseRatio': 0.30000001192092896, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        }

        Balom.PlayAnimation({'name': 'defusion', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Balom.Deactivate()

        fork {
            BalomPiece[BalomPiece0].SetCollisionEnabled({'enable': False})
            BalomPiece[BalomPiece0].WarpToActor({'actor': ActorIdentifier(name="Balom"), 'distance': 0.0, 'offsetY': 0.0, 'offsetX': 0.0})
            BalomPiece[BalomPiece0].Activate()
            BalomPiece[BalomPiece0].PlayTailorOtherChannelNoWait({'channel': 'Defuison_Trail', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            BalomPiece[BalomPiece0].MoveToLinkedPoint({'index': 0, 'speed': 0, 'tolerance': 0.05000000074505806, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        } {
            BalomPiece[BalomPiece1].SetCollisionEnabled({'enable': False})
            BalomPiece[BalomPiece1].WarpToActor({'actor': ActorIdentifier(name="Balom"), 'distance': 0.0, 'offsetY': 0.0, 'offsetX': 0.0})
            BalomPiece[BalomPiece1].Activate()
            BalomPiece[BalomPiece1].PlayTailorOtherChannelNoWait({'channel': 'Defuison_Trail', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            BalomPiece[BalomPiece1].MoveToLinkedPoint({'speed': 0, 'tolerance': 0.05000000074505806, 'index': 0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        } {
            BalomPiece[BalomPiece2].SetCollisionEnabled({'enable': False})
            BalomPiece[BalomPiece2].WarpToActor({'actor': ActorIdentifier(name="Balom"), 'distance': 0.0, 'offsetY': 0.0, 'offsetX': 0.0})
            BalomPiece[BalomPiece2].Activate()
            BalomPiece[BalomPiece2].PlayTailorOtherChannelNoWait({'channel': 'Defuison_Trail', 'restart': False, 'index': -1, 'stopOnSkipped': True})
            BalomPiece[BalomPiece2].MoveToLinkedPoint({'speed': 0, 'tolerance': 0.05000000074505806, 'index': 0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        }


        fork {
            BalomPiece[BalomPiece0].SetCollisionEnabled({'enable': True})
            BalomPiece[BalomPiece0].SetBalomPiece({'argument0': 0, 'argument1': 0})
        } {
            BalomPiece[BalomPiece1].SetCollisionEnabled({'enable': True})
            BalomPiece[BalomPiece1].SetBalomPiece({'argument0': 0, 'argument1': 0})
        } {
            BalomPiece[BalomPiece2].SetCollisionEnabled({'enable': True})
            BalomPiece[BalomPiece2].SetBalomPiece({'argument0': 0, 'argument1': 0})
        }

        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    } {

        call EvResetCommon.AngryReset()

    }

}

void Lv2Dead() {

    call BossCommon.HitStop({'enemy': ActorIdentifier(name="Balom")})

    Audio.StopAllBGM({'duration': 0.5})
    Player.AbsorbAllPastedActors({'isExcludeLocked': False, 'isExcludeKarakuri': False})
    Timer.Wait({'time': 0.5})
    Balom.SetTalkerName({'message': 'glossary/Boss:Enemy_560', 'keep': False})
    Balom.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Balom.Talk({'message': 'quest/QuestAreaF:Enemy_Jungle020_010', 'getAttention': False})
    Balom.Talk({'message': 'quest/QuestAreaF:Enemy_Jungle020_020', 'getAttention': False})
    Balom.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})

    call BossCommon.MiniBossExtinction2({'enemy': ActorIdentifier(name="Balom")})

    WarpBoss.LookAtGimmick({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'EvF_BalomLv2Dead'})
    Timer.Wait({'time': 0.5})
    Audio.PlayJingle({'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
    Balom.CameraLockoff()
    Balom.RoomDoorOpen()
    Balom.Destroy()
    Timer.Wait({'time': 1.5})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Timer.Wait({'time': 0.5})
    Audio.PlayZoneBGM({'stopbgm': True})
    GameControl.UnforbidSave()
    GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
    QuestSystem.SetProgress({'symbol': 'Balom_Jungle010:3890407477', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Lv2Appear() {
    Player.ForceTurn({'direction': 1})
    Player.SetRestartPositionToActor({'direction': 1, 'distance': -7.5, 'stance': 'Ground'})
    GameControl.RequestAutoSave({'immediate': True, 'name': 'Balom01', 'needsStartupEvent': False, 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})

    call BossCommon.PreMiniBoss()

    Player.UpdateStrongRespawnPoint()
    Player.MoveToCompassPoint({'speed': 0, 'timeOut': 7.0, 'direction': 1, 'distance': 1.5, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})

    call BossCommon.MiniBossDoorClose({'enemy': ActorIdentifier(name="Balom")})

    Balom.LookAtTalker({'distanceOffset': -5.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    Timer.Wait({'time': 0.5})
    Balom.SetTalkerName({'message': 'glossary/Boss:Enemy_560', 'keep': False})
    Balom.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Balom.Talk({'message': 'quest/QuestAreaF:Enemy_Jungle010_010', 'getAttention': False})
    Balom.Talk({'message': 'quest/QuestAreaF:Enemy_Jungle010_020', 'getAttention': False})
    Balom.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Balom.PlayAnimation({'name': 'defusion', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Balom.Deactivate()

    fork {
        BalomPiece[BalomPiece0].SetCollisionEnabled({'enable': False})
        BalomPiece[BalomPiece0].WarpToActor({'actor': ActorIdentifier(name="Balom"), 'distance': 0.0, 'offsetY': 0.0, 'offsetX': 0.0})
        BalomPiece[BalomPiece0].Activate()
        BalomPiece[BalomPiece0].PlayTailorOtherChannelNoWait({'channel': 'Defuison_Trail', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        BalomPiece[BalomPiece0].MoveToLinkedPoint({'index': 0, 'speed': 0, 'tolerance': 0.05000000074505806, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        BalomPiece[BalomPiece1].SetCollisionEnabled({'enable': False})
        BalomPiece[BalomPiece1].WarpToActor({'actor': ActorIdentifier(name="Balom"), 'distance': 0.0, 'offsetY': 0.0, 'offsetX': 0.0})
        BalomPiece[BalomPiece1].Activate()
        BalomPiece[BalomPiece1].PlayTailorOtherChannelNoWait({'channel': 'Defuison_Trail', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        BalomPiece[BalomPiece1].MoveToLinkedPoint({'index': 0, 'speed': 0, 'tolerance': 0.05000000074505806, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        BalomPiece[BalomPiece2].SetCollisionEnabled({'enable': False})
        BalomPiece[BalomPiece2].WarpToActor({'actor': ActorIdentifier(name="Balom"), 'distance': 0.0, 'offsetY': 0.0, 'offsetX': 0.0})
        BalomPiece[BalomPiece2].Activate()
        BalomPiece[BalomPiece2].PlayTailorOtherChannelNoWait({'channel': 'Defuison_Trail', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        BalomPiece[BalomPiece2].MoveToLinkedPoint({'index': 0, 'speed': 0, 'tolerance': 0.05000000074505806, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Timer.Wait({'time': 0.5})
        Camera.Reset({'chaseRatio': 0.05000000074505806, 'resetPlayerCamera': False})
    }


    fork {
        BalomPiece[BalomPiece0].SetCollisionEnabled({'enable': True})
        BalomPiece[BalomPiece0].SetBalomPiece({'argument0': 0, 'argument1': 0})
    } {
        BalomPiece[BalomPiece1].SetCollisionEnabled({'enable': True})
        BalomPiece[BalomPiece1].SetBalomPiece({'argument0': 0, 'argument1': 0})
    } {
        BalomPiece[BalomPiece2].SetCollisionEnabled({'enable': True})
        BalomPiece[BalomPiece2].SetBalomPiece({'argument0': 1, 'argument1': 1})
    }

    Timer.Wait({'time': 1.0})
    Hud.PlayInAnim()
    GameControl.ForbidSave()
    Audio.PlayBGM({'label': 'BGM_BATTLE_MIDDLE_BOSS1', 'volume': 1.0, 'ignoreSkip': True})
}
