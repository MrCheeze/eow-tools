-------- EventFlow: TagBattleChallenge --------

Actor: Audio
entrypoint: None()
actions: ['StopRegionBgm', 'StopAllBGM', 'PlayBGM', 'WaitForEndPlayBgm']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump', 'ForbidSave', 'UnforbidSave']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

Actor: BattleChallenge
entrypoint: None()
actions: ['FinishBattleChallengeScene', 'GotoNextLevel', 'GiveUpChallenge', 'AppryNormalClearTimeToMessage', 'GameOverChallenge', 'ShowTimer']
queries: ['GetConditionNumber', 'IsUnderNormalClearTime', 'GetFailureKind']
params: None

Actor: StartUi
entrypoint: None()
actions: ['ShowCountDown']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: EndUi
entrypoint: None()
actions: ['Show']
queries: []
params: None

Actor: Hud
entrypoint: None()
actions: ['ShowGameQuitHelp', 'HideGameQuitHelp']
queries: []
params: None

void StartChallenge() {
    Hud.ShowGameQuitHelp({'confirmLabel': 'ui/Dialog:Dialog_Quit_BattleChallenge', 'entryName': 'GiveUpChallenge', 'eventFlowName': 'TagBattleChallenge'})
    Audio.StopRegionBgm({'fadeSec': 0.0})
    GameControl.ForbidSave()
    Timer.Wait({'time': 0.4000000059604645})

    call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

    switch BattleChallenge.GetConditionNumber() {
      case 0:
        Dialog.Show({'message': 'minigame/BattleChallenge:ExplainTraining_BattleChallrenge_020'})
        Event24:
        if !BattleChallenge.IsUnderNormalClearTime({'timeSec': 60.0}) {
            BattleChallenge.AppryNormalClearTimeToMessage({'useMinutes': True})
            Dialog.Show({'message': 'minigame/BattleChallenge:ExplainTraining_BattleChallrenge_040'})
            Event30:
            BattleChallenge.ShowTimer()
            StartUi.ShowCountDown()
            switch BattleChallenge.GetConditionNumber() {
              case 0:
                Audio.PlayBGM({'label': 'BGM_BATTLE_ZENMETSU', 'volume': 1.0, 'ignoreSkip': True})
              case 4:
                Audio.PlayBGM({'label': 'BGM_BATTLE_ZENMETSU', 'volume': 1.0, 'ignoreSkip': True})
            }
        } else {
            BattleChallenge.AppryNormalClearTimeToMessage({'useMinutes': False})
            Dialog.Show({'message': 'minigame/BattleChallenge:ExplainTraining_BattleChallrenge_050'})
            goto Event30
        }
      case [1, 2, 3]:
        Dialog.Show({'message': 'minigame/BattleChallenge:ExplainTraining_BattleChallrenge_030'})
        goto Event24
      case 4:
        Dialog.Show({'message': 'minigame/BattleChallenge:ExplainTraining_BattleChallrenge_010'})
        goto Event24
    }
}

void ChallengeSuccess() {
    Audio.StopAllBGM({'duration': 0.20000000298023224})
    Audio.PlayBGM({'label': 'BGM_BATTLE_ZENMETSU_END', 'volume': 1.0, 'ignoreSkip': True})
    Hud.HideGameQuitHelp()
    EndUi.Show({'message': 'ui/StartGoal:Telop_Finish'})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    GameControl.UnforbidSave()
    BattleChallenge.FinishBattleChallengeScene({'level': 'BattleChallengeRoom', 'locator': 'BattleChallengeRoom_ReturnSuccess', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void ChallengeFailure() {
    Event10:
    Hud.HideGameQuitHelp()
    switch BattleChallenge.GetFailureKind() {
      case 1:
        BattleChallenge.GameOverChallenge()
        Event16:
        Fade.StartPreset({'preset': 'FadeOutNormalB'})
        Audio.StopAllBGM({'duration': 2.0})
        GameControl.UnforbidSave()
        BattleChallenge.FinishBattleChallengeScene({'level': 'BattleChallengeRoom', 'locator': 'BattleChallengeRoom_ReturnFailure', 'offsetX': 0.0, 'offsetZ': 0.0})
      case [2, 4]:
        goto Event16
      case 3:
        EndUi.Show({'message': 'ui/StartGoal:Telop_Finish'})
        goto Event16
    }
}

void NextChallenge() {
    BattleChallenge.GotoNextLevel()
}

void RetryChallenge() {
    Hud.HideGameQuitHelp()
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    GameControl.RequestLevelJump({'level': 'level', 'locator': 'locator', 'offsetX': 'x', 'offsetZ': 'z'})
}

void GiveUpChallenge() {
    BattleChallenge.GiveUpChallenge()
    goto Event10
}

void RestartChallenge() {
    Timer.Wait({'time': 0.4000000059604645})
    Audio.StopRegionBgm({'fadeSec': 0.0})
    Audio.WaitForEndPlayBgm({'label': 'BGM_BATTLE_ZENMETSU'})

    call AreaStartCommon._InCommon({'fadePreset': 'FadeInNormal'})

    BattleChallenge.ShowTimer()
    switch BattleChallenge.GetConditionNumber() {
      case 0:
        Hud.ShowGameQuitHelp({'confirmLabel': 'ui/Dialog:Dialog_Quit_BattleChallenge', 'entryName': 'GiveUpChallenge', 'eventFlowName': 'TagBattleChallenge'})
        Audio.PlayBGM({'label': 'BGM_BATTLE_ZENMETSU', 'volume': 1.0, 'ignoreSkip': True})
      case 4:
        Hud.ShowGameQuitHelp({'confirmLabel': 'ui/Dialog:Dialog_Quit_BattleChallenge', 'entryName': 'GiveUpChallenge', 'eventFlowName': 'TagBattleChallenge'})
        Audio.PlayBGM({'label': 'BGM_BATTLE_ZENMETSU', 'volume': 1.0, 'ignoreSkip': True})
    }
}
