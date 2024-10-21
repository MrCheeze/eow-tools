-------- EventFlow: LuberiHouseMachine --------

Actor: Dialog
entrypoint: None()
actions: ['Show', 'SetInt']
queries: ['GetLastResult']
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestAutoSave']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: LuberiHouseMachine
entrypoint: None()
actions: ['LookAtTalker', 'SetComponentActive', 'PlayMaterialAnimationNoWait', 'PlayAnimation', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

Actor: Luberi
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'MoveToTargetLinkedPoint', 'AimCompassPoint', 'AimActorLinkedPoint', 'WarpToActor', 'MoveToCompassPoint', 'SetInterestIkEnabled', 'TalkKeep', 'PlayAnimationNoWait', 'GenericTalkSequence', 'AimActor', 'PlayAnimation', 'LookAtTalker']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE', 'SetBGMVolume', 'StopAllBGM', 'PlayZoneBGM', 'SetTimeToRegionBgmPlay', 'DisableUiPauseBgmDucking', 'EnableUiPauseBgmDucking']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: []
queries: ['CheckProgress']
params: None

Actor: Player
entrypoint: None()
actions: ['SetSwordLv', 'SetBowLv', 'SetBombLv', 'SetMorphEnergyStrageLv', 'AimActorLinkedPoint', 'AimActor', 'WarpToActorLinkedPoint', 'AimCompassPoint', 'MoveToTargetLinkedPoint', 'PlayAnimation']
queries: ['GetSwordLv', 'HaveEnoughForLuberiWork', 'GetBowLv', 'GetBombLv', 'GetMorphEnergyStrageLv']
params: None

Actor: Zelda
entrypoint: None()
actions: ['GenericItemGetSequence']
queries: ['GetSwordLv', 'GetBowLv', 'GetBombLv', 'GetMorphEnergyStrageLv']
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: Hud
entrypoint: None()
actions: ['WaitGrowthCount', 'ReflectCurrentNumPieceOfPowers', 'SetIsLvUpEnergyGauge', 'ShowEnergyGauge', 'PlayOutAnimLvUpEnergyGauge', 'PlayOutAnim', 'SetEnabledUpdateEnergyGaugeInEvent', 'ShowGrowthPoint']
queries: []
params: None

Actor: FlowControl
entrypoint: None()
actions: []
queries: ['CompareString', 'CompareInt']
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor', 'AimActorLinkedPoint', 'MoveToDefaultPosition']
queries: []
params: None

Actor: TutorialUI
entrypoint: None()
actions: ['ShowModal']
queries: []
params: None

Actor: LuberiSelectionsUI
entrypoint: None()
actions: ['ShowSelection']
queries: ['GetResult']
params: None

Actor: PartnerPhotons
entrypoint: None()
actions: []
queries: ['IsCompleteAllPartnerPhotonsReleased']
params: None

void LvUpTalk_Q5() {
    Luberi.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_Q1', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Partner[companion].AimActorLinkedPoint({'actor': ActorIdentifier(name="LuberiHouseMachine"), 'pointIndex': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Luberi.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    LuberiSelectionsUI.ShowSelection()
    switch LuberiSelectionsUI.GetResult() {
      case 0:
        switch Player.GetSwordLv() {
          case 1:

            call _ShowLinkQuestion({'level': 1})

            if !Dialog.GetLastResult({'resultOnSkip': 1}) {
                if !Player.HaveEnoughForLuberiWork({'luberiWork': 0}) {

                    call notenough()

                } else {
                    Player.SetSwordLv({'lv': 2})

                    call makaseyo({'Before': 'ItemSword', 'After': 'ItemSword01'})


                    fork {
                        Timer.Wait({'time': 0.20000000298023224})
                        Luberi.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    } {
                        Zelda.GenericItemGetSequence({'itemKey': 'SwordLv2', 'count': 0, 'messageEntry': '', 'keepRaise': False, 'index': -1})
                        EventFlags.SetFlag({'value': True, 'symbol': 'Linkswordlv2'})
                    }

                    GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
                    Event339:
                    Audio.SetBGMVolume({'volume': 1.0, 'duration': 1.0})

                    call LvUpTalk()

                }
            } else {

                call Cancel()

            }
          case 2:
            switch QuestSystem.CheckProgress({'symbol': 'Midpoint:2478168384'}) {
              case 4294967295:

                call madadayo()

              case [0, 1]:

                call _ShowLinkQuestion({'level': 2})

                if !Dialog.GetLastResult({'resultOnSkip': 1}) {
                    if !Player.HaveEnoughForLuberiWork({'luberiWork': 1}) {

                        call notenough()

                    } else {
                        Player.SetSwordLv({'lv': 3})

                        call makaseyo({'Before': 'ItemSword01', 'After': 'ItemSword02'})


                        fork {
                            Timer.Wait({'time': 0.20000000298023224})
                            Luberi.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                        } {
                            Zelda.GenericItemGetSequence({'count': 0, 'itemKey': 'SwordLv3', 'keepRaise': False, 'messageEntry': '', 'index': -1})
                            EventFlags.SetFlag({'value': True, 'symbol': 'Linkswordlv3'})
                        }

                        GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
                        goto Event339
                    }
                } else {

                    call Cancel()

                }
            }
          case 3:

            call max()

        }
      case 1:
        switch Player.GetBowLv() {
          case 1:

            call _ShowLinkQuestion({'level': 1})

            if !Dialog.GetLastResult({'resultOnSkip': 1}) {
                if !Player.HaveEnoughForLuberiWork({'luberiWork': 2}) {

                    call notenough()

                } else {
                    Player.SetBowLv({'lv': 2})

                    call makaseyo({'Before': 'ItemBow', 'After': 'ItemBow01'})


                    fork {
                        Timer.Wait({'time': 0.20000000298023224})
                        Luberi.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    } {
                        Zelda.GenericItemGetSequence({'count': 0, 'itemKey': 'ArrowLv2', 'keepRaise': False, 'messageEntry': '', 'index': -1})
                    }

                    Audio.DisableUiPauseBgmDucking()
                    TutorialUI.ShowModal({'key': 'LinkBowModal'})
                    Audio.EnableUiPauseBgmDucking()
                    GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
                    Event264:
                    Audio.SetBGMVolume({'volume': 1.0, 'duration': 1.0})

                    call LvUpTalk()

                }
            } else {

                call Cancel()

            }
          case 2:
            switch QuestSystem.CheckProgress({'symbol': 'Midpoint:2478168384'}) {
              case 4294967295:

                call madadayo()

              case [0, 1]:

                call _ShowLinkQuestion({'level': 2})

                if !Dialog.GetLastResult({'resultOnSkip': 1}) {
                    if !Player.HaveEnoughForLuberiWork({'luberiWork': 3}) {

                        call notenough()

                    } else {
                        Player.SetBowLv({'lv': 3})

                        call makaseyo({'Before': 'ItemBow01', 'After': 'ItemBow02'})


                        fork {
                            Timer.Wait({'time': 0.20000000298023224})
                            Luberi.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                        } {
                            Zelda.GenericItemGetSequence({'count': 0, 'itemKey': 'ArrowLv3', 'keepRaise': False, 'messageEntry': '', 'index': -1})
                        }

                        GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
                        goto Event264
                    }
                } else {

                    call Cancel()

                }
            }
          case 3:

            call max()

        }
      case 2:
        switch Player.GetBombLv() {
          case 1:

            call _ShowLinkQuestion({'level': 1})

            if !Dialog.GetLastResult({'resultOnSkip': 1}) {
                if !Player.HaveEnoughForLuberiWork({'luberiWork': 4}) {

                    call notenough()

                } else {
                    Player.SetBombLv({'lv': 2})

                    call makaseyo({'Before': 'ItemBomb', 'After': 'ItemBomb01'})


                    fork {
                        Timer.Wait({'time': 0.20000000298023224})
                        Luberi.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    } {
                        Zelda.GenericItemGetSequence({'count': 0, 'itemKey': 'BombLv2', 'keepRaise': False, 'messageEntry': '', 'index': -1})
                    }

                    Audio.DisableUiPauseBgmDucking()
                    TutorialUI.ShowModal({'key': 'LinkBombModal'})
                    Audio.EnableUiPauseBgmDucking()
                    GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
                    Event263:
                    Audio.SetBGMVolume({'volume': 1.0, 'duration': 1.0})

                    call LvUpTalk()

                }
            } else {

                call Cancel()

            }
          case 2:
            switch QuestSystem.CheckProgress({'symbol': 'Midpoint:2478168384'}) {
              case 4294967295:

                call madadayo()

              case [0, 1]:

                call _ShowLinkQuestion({'level': 2})

                if !Dialog.GetLastResult({'resultOnSkip': 1}) {
                    if !Player.HaveEnoughForLuberiWork({'luberiWork': 5}) {

                        call notenough()

                    } else {
                        Player.SetBombLv({'lv': 3})

                        call makaseyo({'Before': 'ItemBomb01', 'After': 'ItemBomb02'})


                        fork {
                            Timer.Wait({'time': 0.20000000298023224})
                            Luberi.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                        } {
                            Zelda.GenericItemGetSequence({'count': 0, 'itemKey': 'BombLv3', 'keepRaise': False, 'messageEntry': '', 'index': -1})
                        }

                        GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
                        goto Event263
                    }
                } else {

                    call Cancel()

                }
            }
          case 3:

            call max()

        }
      case 3:
        switch Player.GetMorphEnergyStrageLv() {
          case 1:

            call _ShowPowerQuestion()

            if !Dialog.GetLastResult({'resultOnSkip': 1}) {
                if !Player.HaveEnoughForLuberiWork({'luberiWork': 6}) {

                    call notenough()

                } else {
                    Hud.SetIsLvUpEnergyGauge()

                    fork {
                        Timer.Wait({'time': 0.20000000298023224})
                        Luberi.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    } {
                        Player.SetMorphEnergyStrageLv({'lv': 2})
                    }

                    GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
                    Event91:

                    call GaugeLvUp()

                    Audio.SetBGMVolume({'volume': 1.0, 'duration': 1.0})

                    call LvUpTalk()

                }
            } else {

                call Cancel()

            }
          case 2:

            call _ShowPowerQuestion()

            if !Dialog.GetLastResult({'resultOnSkip': 1}) {
                if !Player.HaveEnoughForLuberiWork({'luberiWork': 7}) {

                    call notenough()

                } else {
                    Hud.SetIsLvUpEnergyGauge()

                    fork {
                        Luberi.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    } {
                        Player.SetMorphEnergyStrageLv({'lv': 3})
                    }

                    GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
                    goto Event91
                }
            } else {

                call Cancel()

            }
          case 3:
            switch QuestSystem.CheckProgress({'symbol': 'Midpoint:2478168384'}) {
              case 4294967295:

                call madadayo()

              case [0, 1]:

                call _ShowPowerQuestion()

                if !Dialog.GetLastResult({'resultOnSkip': 1}) {
                    if !Player.HaveEnoughForLuberiWork({'luberiWork': 8}) {

                        call notenough()

                    } else {
                        Hud.SetIsLvUpEnergyGauge()

                        fork {
                            Luberi.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                        } {
                            Player.SetMorphEnergyStrageLv({'lv': 4})
                        }

                        GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
                        goto Event91
                    }
                } else {

                    call Cancel()

                }
            }
          case 4:

            call max()

        }
      case 4:

        call matakoiyo()

    }
}

void notenough() {

    fork {
        Luberi.Talk({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_No_Cost', 'getAttention': False})
    } {
        Luberi.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void makaseyo() {

    fork {
        Luberi.Talk({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_Q1_A1_010', 'getAttention': False})
        Audio.SetBGMVolume({'volume': 0.20000000298023224, 'duration': 1.5})
    } {
        Luberi.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Hud.SetEnabledUpdateEnergyGaugeInEvent({'enableUpdateInEvent': False})
    Hud.ShowGrowthPoint({'isViewAlways': True})
    Hud.WaitGrowthCount()

    fork {
        Luberi.MoveToTargetLinkedPoint({'index': 1, 'speed': 0, 'actor': ActorIdentifier(name="LuberiHouseMachine"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Luberi.AimCompassPoint({'direction': 2, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Player.MoveToTargetLinkedPoint({'speed': 0, 'index': 3, 'actor': ActorIdentifier(name="LuberiHouseMachine"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        Player.AimActorLinkedPoint({'pointIndex': 2, 'actor': ActorIdentifier(name="LuberiHouseMachine"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    LuberiHouseMachine.LookAtTalker({'distanceOffset': -2.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})

    fork {
        Timer.Wait({'time': 0.25})
        LuberiHouseMachine.SetComponentActive({'active': True, 'name': 'Before'})
    } {
        Player.PlayAnimation({'name': 'ev_hand_over', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Timer.Wait({'time': 0.5})

    fork {
        Timer.Wait({'time': 1.0})
        Luberi.AimActorLinkedPoint({'pointIndex': 2, 'actor': ActorIdentifier(name="LuberiHouseMachine"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.AimActorLinkedPoint({'pointIndex': 2, 'actor': ActorIdentifier(name="LuberiHouseMachine"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Player.MoveToTargetLinkedPoint({'speed': 0, 'index': 0, 'withoutTurn': True, 'actor': ActorIdentifier(name="LuberiHouseMachine"), 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

        fork {
            Player.AimActorLinkedPoint({'pointIndex': 2, 'actor': ActorIdentifier(name="LuberiHouseMachine"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner[companion].MoveToDefaultPosition({'speed': 0, 'avoidPlayer': True, 'avoidWall': True, 'position': 3, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})
            Partner[companion].AimActorLinkedPoint({'pointIndex': 2, 'actor': ActorIdentifier(name="LuberiHouseMachine"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

    } {
        Timer.Wait({'time': 0.20000000298023224})
        LuberiHouseMachine.SetComponentActive({'active': True, 'name': 'ItemWorldGlobePiece'})
    } {

        fork {
            LuberiHouseMachine.SetComponentActive({'active': False, 'name': 'ItemWorldGlobePiece'})
        } {
            Timer.Wait({'time': 3.0})
            LuberiHouseMachine.SetComponentActive({'active': False, 'name': 'Before'})
            Timer.Wait({'time': 2.0})
            LuberiHouseMachine.SetComponentActive({'active': True, 'name': 'After'})
        } {
            LuberiHouseMachine.PlayTailorOtherChannelNoWait({'restart': True, 'channel': 'strengthen', 'index': -1, 'stopOnSkipped': True})
        } {
            LuberiHouseMachine.PlayAnimation({'name': 'strengthen', 'restart': True, 'layer': 0, 'blendFrame': -1})
        }

        if !FlowControl.CompareString({'value1': 'Type', 'value2': 'Gauge'}) {
            switch Player.GetMorphEnergyStrageLv() {
              case 2:
                switch Player.GetSwordLv() {
                  case 1:
                    LuberiHouseMachine.SetComponentActive({'active': False, 'name': 'Before'})

                    fork {
                        Timer.Wait({'time': 0.20000000298023224})
                        Luberi.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    } {
                        Zelda.GenericItemGetSequence({'count': 0, 'messageEntry': 'LuberiHouseMachine:GaugeLv2', 'itemKey': 'Sword', 'keepRaise': True, 'index': -1})
                    }

                    Event171:
                    Player.SetMorphEnergyStrageLv({'lv': 2})
                    Event181:
                    Timer.Wait({'time': 0.5})
                    Hud.ShowEnergyGauge()
                    Hud.SetEnabledUpdateEnergyGaugeInEvent({'enableUpdateInEvent': True})
                    Timer.Wait({'time': 3.5})
                    Hud.PlayOutAnimLvUpEnergyGauge()
                    Hud.SetEnabledUpdateEnergyGaugeInEvent({'enableUpdateInEvent': False})
                    Timer.Wait({'time': 2.0})
                    Hud.PlayOutAnim()

                    call ModelDisplay.EndCarry({'anim': '$item_get_ed'})

                    LuberiHouseMachine.SetComponentActive({'active': False, 'name': 'After'})
                  case 2:
                    LuberiHouseMachine.SetComponentActive({'active': False, 'name': 'Before'})

                    fork {
                        Timer.Wait({'time': 0.20000000298023224})
                        Luberi.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    } {
                        Zelda.GenericItemGetSequence({'count': 0, 'messageEntry': 'LuberiHouseMachine:GaugeLv2', 'keepRaise': True, 'itemKey': 'SwordLv2', 'index': -1})
                    }

                    goto Event171
                  case 3:
                    LuberiHouseMachine.SetComponentActive({'active': False, 'name': 'Before'})

                    fork {
                        Timer.Wait({'time': 0.20000000298023224})
                        Luberi.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    } {
                        Zelda.GenericItemGetSequence({'count': 0, 'messageEntry': 'LuberiHouseMachine:GaugeLv2', 'keepRaise': True, 'itemKey': 'SwordLv3', 'index': -1})
                    }

                    goto Event171
                }
              case 3:
                switch Player.GetSwordLv() {
                  case 1:
                    LuberiHouseMachine.SetComponentActive({'active': False, 'name': 'Before'})

                    fork {
                        Timer.Wait({'time': 0.20000000298023224})
                        Luberi.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    } {
                        Zelda.GenericItemGetSequence({'count': 0, 'itemKey': 'Sword', 'keepRaise': True, 'messageEntry': 'LuberiHouseMachine:GaugeLv3', 'index': -1})
                    }

                    Event191:
                    Player.SetMorphEnergyStrageLv({'lv': 3})
                    goto Event181
                  case 2:
                    LuberiHouseMachine.SetComponentActive({'active': False, 'name': 'Before'})

                    fork {
                        Timer.Wait({'time': 0.20000000298023224})
                        Luberi.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    } {
                        Zelda.GenericItemGetSequence({'count': 0, 'keepRaise': True, 'itemKey': 'SwordLv2', 'messageEntry': 'LuberiHouseMachine:GaugeLv3', 'index': -1})
                    }

                    goto Event191
                  case 3:
                    LuberiHouseMachine.SetComponentActive({'active': False, 'name': 'Before'})

                    fork {
                        Timer.Wait({'time': 0.20000000298023224})
                        Luberi.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    } {
                        Zelda.GenericItemGetSequence({'count': 0, 'keepRaise': True, 'itemKey': 'SwordLv3', 'messageEntry': 'LuberiHouseMachine:GaugeLv3', 'index': -1})
                    }

                    goto Event191
                }
              case 4:
                switch Player.GetSwordLv() {
                  case 1:
                    LuberiHouseMachine.SetComponentActive({'active': False, 'name': 'Before'})

                    fork {
                        Timer.Wait({'time': 0.20000000298023224})
                        Luberi.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    } {
                        Zelda.GenericItemGetSequence({'count': 0, 'itemKey': 'Sword', 'keepRaise': True, 'messageEntry': 'LuberiHouseMachine:GaugeLv4', 'index': -1})
                    }

                    Event195:
                    Player.SetMorphEnergyStrageLv({'lv': 4})
                    goto Event181
                  case 2:
                    LuberiHouseMachine.SetComponentActive({'active': False, 'name': 'Before'})

                    fork {
                        Timer.Wait({'time': 0.20000000298023224})
                        Luberi.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    } {
                        Zelda.GenericItemGetSequence({'count': 0, 'keepRaise': True, 'itemKey': 'SwordLv2', 'messageEntry': 'LuberiHouseMachine:GaugeLv4', 'index': -1})
                    }

                    goto Event195
                  case 3:
                    LuberiHouseMachine.SetComponentActive({'active': False, 'name': 'Before'})

                    fork {
                        Timer.Wait({'time': 0.20000000298023224})
                        Luberi.AimActor({'actor': ActorIdentifier(name="Zelda"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                    } {
                        Zelda.GenericItemGetSequence({'count': 0, 'keepRaise': True, 'itemKey': 'SwordLv3', 'messageEntry': 'LuberiHouseMachine:GaugeLv4', 'index': -1})
                    }

                    goto Event195
                }
            }
        } else {
            Timer.Wait({'time': 2.0})
        }
    } {
        LuberiHouseMachine.PlayMaterialAnimationNoWait({'name': 'meter', 'layer': 0})
    }

    LuberiHouseMachine.SetComponentActive({'active': False, 'name': 'After'})
}

void ItemCheck() {
    Event196:
    switch QuestSystem.CheckProgress({'symbol': 'Midpoint:2478168384'}) {
      case 4294967295:
        Event107:
        switch Zelda.GetSwordLv() {
          case [0, 1, 2]:
            Event36:
            Hud.ReflectCurrentNumPieceOfPowers({'isViewAlways': True})
            Hud.ShowGrowthPoint({'isViewAlways': True})
            Event96:
            switch Zelda.GetSwordLv() {
              case [0, 3]:
                Event99:
                switch Zelda.GetBowLv() {
                  case [0, 3]:
                    Event100:
                    switch Zelda.GetBombLv() {
                      case [0, 3]:
                        Event31:

                        call _InsertEnergyLevel({'index': 4})


                        call LvUpTalk_Q5()

                      case 1:

                        call _InsertLinkLevel({'index': 2, 'level': 1})

                        goto Event31
                      case 2:

                        call _InsertLinkLevel({'index': 2, 'level': 2})

                        goto Event31
                    }
                  case 1:

                    call _InsertLinkLevel({'index': 1, 'level': 1})

                    goto Event100
                  case 2:

                    call _InsertLinkLevel({'index': 1, 'level': 2})

                    goto Event100
                }
              case 1:

                call _InsertLinkLevel({'index': 0, 'level': 1})

                goto Event99
              case 2:

                call _InsertLinkLevel({'index': 0, 'level': 2})

                goto Event99
            }
          case 3:
            switch Zelda.GetBowLv() {
              case [0, 1, 2]:
                goto Event36
              case 3:
                switch Zelda.GetBombLv() {
                  case [0, 1, 2]:
                    goto Event36
                  case 3:
                    switch Zelda.GetMorphEnergyStrageLv() {
                      case [1, 2, 3]:
                        goto Event36
                      case 4:
                        Hud.ReflectCurrentNumPieceOfPowers({'isViewAlways': True})
                        Hud.ShowGrowthPoint({'isViewAlways': True})
                        if !PartnerPhotons.IsCompleteAllPartnerPhotonsReleased() {
                            Dialog.SetInt({'index': 0, 'value': 25})
                            Luberi.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_All_Max', 'playerTalkAnim': False, 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
                        } else
                        if !EventFlags.CheckFlag({'symbol': 'EnergyStoneGet'}) {
                            Dialog.SetInt({'index': 0, 'value': 25})
                            Luberi.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
                            Luberi.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_All_Max', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
                            Luberi.Talk({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_EnergyStone_010', 'getAttention': False})
                            Luberi.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                            if !Dialog.GetLastResult({'resultOnSkip': 1}) {

                                call OmakeGet()

                            } else {
                                Luberi.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
                                Luberi.Talk({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_EnergyStone_012', 'getAttention': False})
                                Luberi.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                            }
                        } else {
                            Luberi.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
                            Luberi.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
                            Luberi.Talk({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_PieceComp', 'getAttention': False})
                            Luberi.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
                        }
                    }
                }
            }
        }
      case [0, 1]:
        if !EventFlags.CheckFlag({'symbol': 'WeaponCapOpenMessage'}) {
            Luberi.GenericTalkSequence({'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
            Luberi.TalkKeep({'message': 'scenario/HylianGeneralTalk:LuberiHouseLuberiTalk040_005', 'getAttention': False})
            Luberi.TalkKeep({'message': 'scenario/HylianGeneralTalk:LuberiHouseLuberiTalk040_006', 'getAttention': False})

            fork {
                Luberi.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_HyruleCatsleClear', 'playerTalkAnim': False, 'selfTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
            } {
                Luberi.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

            EventFlags.SetFlag({'symbol': 'WeaponCapOpenMessage', 'value': True})
            goto Event107
        } else
        goto Event107
    }
}

void LvUpTalk() {
    goto Event196
}

void matakoiyo() {
    Luberi.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_040', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void max() {
    Luberi.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_Max', 'selfTalkAnim': True, 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Event27:

    call Cancel()

}

void madadayo() {
    Luberi.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_No', 'selfTalkAnim': True, 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    goto Event27
}

void GaugeLvUp() {
    switch Player.GetSwordLv() {
      case 1:

        call makaseyo({'Before': 'ItemSword', 'After': 'ItemSword', 'Type': 'Gauge'})

      case 2:

        call makaseyo({'Before': 'ItemSword01', 'After': 'ItemSword01', 'Type': 'Gauge'})

      case 3:

        call makaseyo({'Before': 'ItemSword02', 'After': 'ItemSword02', 'Type': 'Gauge'})

    }
}

void _InsertLinkLevel() {
    switch FlowControl.CompareInt({'value1': 'level', 'value2': 2}) {
      case 4294967295:
        Dialog.SetInt({'value': 10, 'index': 'index'})
      case [0, 1]:
        Dialog.SetInt({'value': 20, 'index': 'index'})
    }
}

void _ShowLinkQuestion() {

    call _InsertLinkLevel({'index': 0, 'level': 'level'})


    fork {
        Luberi.Talk({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_Q6', 'getAttention': False})
    } {
        Luberi.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void _ShowPowerQuestion() {

    call _InsertEnergyLevel({'index': 0})


    fork {
        Luberi.Talk({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_Q6', 'getAttention': False})
    } {
        Luberi.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}

void _InsertEnergyLevel() {
    switch Player.GetMorphEnergyStrageLv() {
      case 1:
        Dialog.SetInt({'index': 'index', 'value': 5})
      case 2:
        Dialog.SetInt({'value': 10, 'index': 'index'})
      case [3, 4]:
        Dialog.SetInt({'index': 'index', 'value': 20})
    }
}

void OmakeGet() {
    EventFlags.SetFlag({'value': True, 'symbol': 'EnergyStoneGet'})

    fork {
        Luberi.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_EnergyStone_011', 'playerTalkAnim': False, 'selfTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        Hud.ShowGrowthPoint({'isViewAlways': True})
    } {
        Luberi.PlayAnimationNoWait({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Audio.StopAllBGM({'duration': 2.0})
    }

    Hud.WaitGrowthCount()
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Timer.Wait({'time': 0.5})
    Audio.PlayOneshotSystemSE({'label': 'SE_EV_MAKE_ENERGY_STONE', 'volume': 1.0, 'pitch': 1.0})
    Luberi.SetInterestIkEnabled({'enable': False})
    Player.WarpToActorLinkedPoint({'index': 4, 'actor': ActorIdentifier(name="LuberiHouseMachine"), 'offsetY': 0.0})
    Player.AimCompassPoint({'duration': 0.0, 'direction': 0, 'withoutTurn': False, 'immediateTurn': False})
    Timer.Wait({'time': 0.10000000149011612})
    Luberi.WarpToActor({'distance': 3.0, 'offsetX': -1.975000023841858, 'actor': ActorIdentifier(name="Player"), 'offsetY': 0.0})
    Player.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Luberi"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Partner[companion].AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="Luberi"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 7.0})

    fork {
        Timer.Wait({'time': 0.20000000298023224})
        Fade.StartPreset({'preset': 'FadeInNormal'})
        Audio.PlayZoneBGM({'stopbgm': False})
        Audio.SetTimeToRegionBgmPlay({'waitSec': 0.699999988079071})
    } {
        Luberi.MoveToCompassPoint({'direction': 2, 'speed': 0, 'distance': 3.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Luberi.AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    }

    Luberi.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Luberi.Talk({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_EnergyStone_020', 'getAttention': False})
    Luberi.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Luberi.SetInterestIkEnabled({'enable': True})
    GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
}

void LvMaxCheck() {
    if Zelda.GetSwordLv() == 3
    && Zelda.GetBowLv() == 3
    && Zelda.GetBombLv() == 3
    && Zelda.GetMorphEnergyStrageLv() == 4
    && PartnerPhotons.IsCompleteAllPartnerPhotonsReleased()
    && !EventFlags.CheckFlag({'symbol': 'EnergyStoneGet'}) {

        call OmakeGet()

    }
}

void GaugeLv2() {
    Dialog.Show({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_GaugeLv2'})
}

void GaugeLv3() {
    Dialog.Show({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_GaugeLv3'})
}

void GaugeLv4() {
    Dialog.Show({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_GaugeLv4'})
}

void Cancel() {
    goto Event96
}
