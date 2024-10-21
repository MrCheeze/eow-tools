-------- EventFlow: Respawn --------

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['ResetActiveAndPesteActors']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RespawnStrong', 'Respawn', 'RespawnFieldAbyss']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['SetGravityEnable']
queries: ['CheckMorph', 'CheckLife']
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Sync
entrypoint: None()
actions: ['SyncReset']
queries: []
params: None

Actor: EventVariables
entrypoint: None()
actions: []
queries: ['IsMin']
params: None

void Respawn() {
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    GameControl.RespawnStrong()
}

void PassOut() {
    if Player.CheckLife({'amount': 1}) {
        Sync.SyncReset()
        Fade.StartPreset({'preset': 'FadeOutNormalW'})
        Player.SetGravityEnable({'enable': False})
        if Player.CheckMorph({'morphKind': 0}) {
            Audio.PlayOneshotSystemSE({'label': 'VO_ZELDA_EV_106_6', 'volume': 1.0, 'pitch': 1.0})
        } else {
            Audio.PlayOneshotSystemSE({'label': 'VO_SWORD_RESPAWN', 'volume': 1.0, 'pitch': 1.0})
        }

        call EvResetCommon.AllReset()

        Zelda.ResetActiveAndPesteActors({'child': True, 'cemeteryRevive': False, 'defeatedThrough': False, 'aliveCemeteryRevive': False})
        if EventVariables.IsMin({'symbol': 'HorseRaceCheckpoint'}) {
            GameControl.Respawn()
            Player.SetGravityEnable({'enable': True})
        } else {

            call HylianF006._Jump2NPC({'TagAreaStart': 'HorseRaceRetire'})

        }
    }
}

void FieldAbyssRespawn() {
    if Player.CheckLife({'amount': 1}) {
        Sync.SyncReset()
        Fade.StartPreset({'preset': 'FadeOutNormalW'})
        Player.SetGravityEnable({'enable': False})
        if Player.CheckMorph({'morphKind': 0}) {
            Audio.PlayOneshotSystemSE({'label': 'VO_ZELDA_EV_106_6', 'volume': 1.0, 'pitch': 1.0})
        } else {
            Audio.PlayOneshotSystemSE({'label': 'VO_SWORD_RESPAWN', 'volume': 1.0, 'pitch': 1.0})
        }

        call EvResetCommon.AllReset()

        Zelda.ResetActiveAndPesteActors({'child': True, 'cemeteryRevive': False, 'defeatedThrough': False, 'aliveCemeteryRevive': False})
        if EventVariables.IsMin({'symbol': 'HorseRaceCheckpoint'}) {
            GameControl.RespawnFieldAbyss()
            Player.SetGravityEnable({'enable': True})
        } else {

            call HylianF006._Jump2NPC({'TagAreaStart': 'HorseRaceRetire'})

        }
    }
}
