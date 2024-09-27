-------- EventFlow: GerudoSoldier024 --------

Actor: Zelda
entrypoint: None()
actions: ['AimCompassPoint', 'SetInterestIkEnabled', 'AimActor']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['ShowTalker']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['CheckProgress']
params: None

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag']
params: None

Actor: Partner
entrypoint: None()
actions: []
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'AimPlayer', 'PlayAnimation', 'AimCompassPoint', 'MoveToCompassPoint']
queries: []
params: None

Actor: GerudoSoldier024
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'PlayAnimation', 'AimCompassPoint', 'Talk', 'PlayAnimationNoWait']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE', 'SetBGMVolume']
queries: []
params: None

void talk() {

    call EvResetCommon.AllReset()

    switch QuestSystem.CheckProgress({'symbol': 'Desert:945356639'}) {
      case 4294967295:
        if !EventFlags.CheckMessgaeFlag({'message': 'scenario/StoryAreaD:GerudosSanctuary_Other_010'}) {
            GerudoSoldier024.PlayAnimation({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            GerudoSoldier024.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/StoryAreaD:GerudosSanctuary_010', 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
            GerudoSoldier024.Talk({'message': 'scenario/StoryAreaD:GerudosSanctuary_Other_010', 'getAttention': False})
        } else {
            GerudoSoldier024.PlayAnimation({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            GerudoSoldier024.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/StoryAreaD:GerudosSanctuary_Other_020', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
            GerudoSoldier024.Talk({'message': 'scenario/StoryAreaD:GerudosSanctuary_Other_010', 'getAttention': False})
        }
      case 0:
        if !EventFlags.CheckMessgaeFlag({'message': 'scenario/StoryAreaD:GerudosSanctuary_Other_010'}) {
            GerudoSoldier024.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/StoryAreaD:GerudosSanctuary_010', 'selfTalkAnimName': 'angry01', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
            GerudoSoldier024.Talk({'message': 'scenario/StoryAreaD:GerudosSanctuary_011', 'getAttention': False})
            Event1:
            GerudoSoldier024.PlayAnimation({'name': 'wait_spear01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Partner[companion].PlayAnimation({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})

            fork {
                Partner[companion].Talk({'message': 'scenario/StoryAreaD:GerudosSanctuary_020', 'getAttention': False})
            } {
                Timer.Wait({'time': 0.20000000298023224})
                Zelda.SetInterestIkEnabled({'enable': True})
                Zelda.AimActor({'offsetY': -0.6000000238418579, 'withoutTurn': True, 'actor': ActorIdentifier(name="Partner"), 'offsetX': 0.20000000298023224, 'duration': 0.4000000059604645, 'boneName': '', 'offsetZ': 0.0, 'immediateTurn': False})
            }

            Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

            fork {
                Timer.Wait({'time': 1.2000000476837158})

                fork {
                    Dialog.ShowTalker({'message': 'scenario/StoryAreaD:GerudosSanctuary_030', 'talker': 'glossary/Character:Unknown'})
                } {
                    Audio.PlayOneshotSystemSE({'label': 'VO_GERUDO_DAUGHTER_006_3B', 'volume': 1.0, 'pitch': 1.0})
                }

            } {
                Audio.SetBGMVolume({'volume': 0.0, 'duration': 1.5})
            }


            fork {
                GerudoSoldier024.AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
                GerudoSoldier024.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                GerudoSoldier024.Talk({'message': 'scenario/StoryAreaD:GerudosSanctuary_040', 'getAttention': False})
            } {
                Zelda.SetInterestIkEnabled({'enable': False})
                Timer.Wait({'time': 0.20000000298023224})
                Zelda.AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
            } {
                Timer.Wait({'time': 0.15000000596046448})
                Partner[companion].AimCompassPoint({'direction': 1, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
                Partner[companion].MoveToCompassPoint({'direction': 1, 'speed': 1, 'distance': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
            }

            Audio.SetBGMVolume({'volume': 1.0, 'duration': 6.0})
            QuestSystem.SetProgress({'symbol': 'Desert:3132339282', 'isShowTelopInEvent': False, 'isFrontFade': False})
        } else {
            GerudoSoldier024.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'angry01', 'selfTalkAnim': True, 'message': 'scenario/StoryAreaD:GerudosSanctuary_Other_020', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
            GerudoSoldier024.Talk({'message': 'scenario/StoryAreaD:GerudosSanctuary_011', 'getAttention': False})
            goto Event1
        }
      case 1:
        GerudoSoldier024.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/StoryAreaD:GerudosSanctuaryTalk_010', 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
}

void talk010() {
    GerudoSoldier024.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkGerudo:GerudoSoldier024Talk01_010', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk0() {
    GerudoSoldier024.GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaD:GerudosSanctuaryTalk_020', 'selfTalkAnim': True, 'playerTalkAnim': False, 'cameraLookAt': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void SanctuaryAppear() {
    GerudoSoldier024.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/StoryAreaD:SanctuaryAppear_010', 'selfTalkAnimName': 'hurt02', 'aimFromPlayer': True, 'aimToPlayer': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GerudoSoldier024.Talk({'message': 'scenario/StoryAreaD:SanctuaryAppear_020', 'getAttention': False})
}

void talk05() {
    GerudoSoldier024.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/StoryAreaD:SandRemoverCave_010', 'selfTalkAnimName': 'hurt02', 'aimToPlayer': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    GerudoSoldier024.Talk({'message': 'scenario/StoryAreaD:SandRemoverCave_020', 'getAttention': False})
}
