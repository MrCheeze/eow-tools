-------- EventFlow: HylianF021 --------

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
params: None

Actor: HylianF021
entrypoint: None()
actions: ['Talk', 'GenericTalkSequenceWithDialog', 'PlayAnimationNoWait', 'SetFacialExpression', 'SkipAutoTurn', 'AimPlayer', 'LookAtTalker', 'PlayAnimation', 'SetInterestIkEnabled']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag']
params: None

Actor: QuestSystem
entrypoint: None()
actions: []
queries: ['CheckProgress']
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'MorphEnd']
queries: ['CheckMorph', 'CheckOutfit']
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE']
queries: []
params: None

void talk010() {
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/HylianGeneralTalk:HylianF021Talk010_010'}) {

        fork {
            HylianF021.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            HylianF021.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        } {
            Player.AimActor({'actor': ActorIdentifier(name="HylianF021"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        HylianF021.SetFacialExpression({'expression': 'surprise'})
        HylianF021.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HylianF021.Talk({'message': 'scenario/HylianGeneralTalk:HylianF021Talk010_010', 'getAttention': False})
        HylianF021.SetFacialExpression({'expression': 'sad'})
        HylianF021.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HylianF021.Talk({'message': 'scenario/HylianGeneralTalk:HylianF021Talk010_020', 'getAttention': False})
        HylianF021.SkipAutoTurn()
    } else {

        fork {
            HylianF021.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianF021Talk010_020', 'selfTalkAnimName': 'no01,wait01', 'facial': 'sad', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_HYL_W003_1_001', 'volume': 1.0, 'pitch': 1.0})
        }

        HylianF021.SkipAutoTurn()
    }
}

void talk020() {
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/HylianGeneralTalk:HylianF021Talk020_Q1_A1_020'}) {
        HylianF021.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/HylianGeneralTalk:HylianF021Talk020_Q1', 'facial': 'sad', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        if !Dialog.GetLastResult({'resultOnSkip': 1}) {
            HylianF021.Talk({'message': 'scenario/HylianGeneralTalk:HylianF021Talk020_Q1_A1_010', 'getAttention': False})
            switch QuestSystem.CheckProgress({'symbol': 'Coast_River:4211698231'}) {
              case 4294967295:
                HylianF021.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianF021Talk020_Q1_A2_010', 'selfTalkAnimName': '', 'facial': 'sad', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
              case [0, 1]:
                HylianF021.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

                call GeneralSequence.ZeldaTalkMotion()

                HylianF021.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/HylianGeneralTalk:HylianF021Talk020_Q1_A1_020', 'facial': 'surprise', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
            }
        }
    } else {
        HylianF021.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'facial': '', 'message': 'scenario/HylianGeneralTalk:HylianF021Talk025_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
}

void talk030() {
    HylianF021.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'facial': '', 'message': 'scenario/HylianGeneralTalk:HylianF021Talk030_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk040() {
    HylianF021.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'facial': '', 'message': 'scenario/HylianGeneralTalk:HylianF021Talk040_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talkSec() {
    HylianF021.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'facial': '', 'message': 'scenario/HylianGeneralTalk:HylianF021TalkSecretlyClothes_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void ZolQuest() {
    if !Player.CheckMorph({'morphKind': 0}) {
        Player.MorphEnd()
    }
    HylianF021.SetInterestIkEnabled({'enable': False})
    if Player.CheckOutfit({'outfit': 'Adventure1'}) {
        HylianF021.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'facial': 'smile', 'message': 'quest/QuestAreaA:Bring_Forest065_140', 'selfTalkAnimName': 'yes01,wait03', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else {
        HylianF021.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'facial': 'smile', 'selfTalkAnimName': 'yes01,wait03', 'message': 'quest/QuestAreaA:Bring_Forest065_145', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }

    fork {
        HylianF021.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_150', 'getAttention': False})
    } {
        HylianF021.SetFacialExpression({'expression': 'sad'})
    } {
        HylianF021.PlayAnimation({'name': 'no01,wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HylianF021.PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF021.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_Q1_A2_010', 'getAttention': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        fork {
            HylianF021.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_160', 'getAttention': False})
        } {
            HylianF021.SetFacialExpression({'expression': 'smile'})
        } {
            HylianF021.PlayAnimationNoWait({'name': 'yes01,talk03', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            HylianF021.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_170', 'getAttention': False})
        } {
            HylianF021.SetFacialExpression({'expression': 'sleep'})
        } {
            HylianF021.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    } else {

        fork {
            HylianF021.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_180', 'getAttention': False})
        } {
            HylianF021.SetFacialExpression({'expression': 'sad'})
        } {
            HylianF021.PlayAnimationNoWait({'name': 'no01,talk03', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

    }
}
