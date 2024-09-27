-------- EventFlow: Deku000 --------

Actor: Deku000
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'TalkKeep', 'PlayAnimationNoWait', 'SetInterestIkEnabled', 'AimActor', 'AimPlayer']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult4']
params: None

Actor: QuestSystem
entrypoint: None()
actions: []
queries: ['CheckProgress']
params: None

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag']
params: None

Actor: Deku016
entrypoint: None()
actions: []
queries: ['GetInstanceVariableBool']
params: None

void talk010() {
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/GeneralTalkDeku:Deku000Talk010_010'}) {
        Deku000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkDeku:Deku000Talk010_010', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        Deku000.Talk({'message': 'scenario/GeneralTalkDeku:Deku000Talk010_Q1_010', 'getAttention': False})
        Event2:
        switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
          case 0:
            Deku000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Deku000.Talk({'message': 'scenario/GeneralTalkDeku:Deku000Talk010_Q1_A1_010', 'getAttention': False})
            Deku000.Talk({'message': 'scenario/GeneralTalkDeku:Deku000Talk010_Q1_A1_020', 'getAttention': False})
            Event38:
            Deku000.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Deku000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Deku000.TalkKeep({'message': 'scenario/GeneralTalkDeku:Deku000Talk010_Q1_020', 'getAttention': False})
            goto Event2
          case 1:
            Deku000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Deku000.Talk({'message': 'scenario/GeneralTalkDeku:Deku000Talk010_Q1_A2_010', 'getAttention': False})
            if !Deku016.GetInstanceVariableBool({'name': 'DekuSyncPullOut'}) {
                Deku000.AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="Deku016"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                Deku000.Talk({'message': 'scenario/GeneralTalkDeku:Deku000Talk010_Q1_A2_020', 'getAttention': False})
                goto Event38
            } else {
                goto Event38
            }
          case 2:
            switch QuestSystem.CheckProgress({'symbol': 'Midpoint:2478168384'}) {
              case 4294967295:
                Deku000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                Deku000.Talk({'message': 'scenario/GeneralTalkDeku:Deku000Talk010_Q1_A3_010_JungleSt', 'getAttention': False})
              case [0, 1]:
                Deku000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                Deku000.Talk({'message': 'scenario/GeneralTalkDeku:Deku000Talk010_Q1_A3_010', 'getAttention': False})
            }
        }
    } else {
        Deku000.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkDeku:Deku000Talk010_Q1_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnim': False, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        goto Event2
    }
}

void talk020() {
    Deku000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkDeku:Deku000Talk020_Q1', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult4({'resultOnSkip': 3}) {
        Deku000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku000.Talk({'message': 'scenario/GeneralTalkDeku:Deku000Talk020_Q1_A1_010', 'getAttention': False})
        Deku000.Talk({'message': 'scenario/GeneralTalkDeku:Deku000Talk020_Q1_A1_020', 'getAttention': False})
    } else {
        Deku000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku000.Talk({'message': 'scenario/GeneralTalkDeku:Deku000Talk020_Q1_A2_010', 'getAttention': False})
    }
}

void talk030() {
    Deku000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'selfTalkAnim': False, 'message': 'scenario/GeneralTalkDeku:Deku000Talk030_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Deku000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku000.Talk({'message': 'scenario/GeneralTalkDeku:Deku000Talk030_020', 'getAttention': False})
    Deku000.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku000.Talk({'message': 'scenario/GeneralTalkDeku:Deku000Talk030_030', 'getAttention': False})
}

void talk040() {
    Deku000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'selfTalkAnim': False, 'message': 'scenario/GeneralTalkDeku:Deku000Talk040_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Enemy_Jungle050_015() {
    Deku000.SetInterestIkEnabled({'enable': False})
    Deku000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaF:Enemy_Jungle060_020', 'selfTalkAnimName': 'frightened01', 'facial': 'sad', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Enemy_Jungle050_After000() {
    Deku000.SetInterestIkEnabled({'enable': False})
    Deku000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkDeku:Deku000Talk050_010', 'selfTalkAnimName': 'yes01,happy01', 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        Deku000.Talk({'message': 'scenario/GeneralTalkDeku:Deku000Talk050_020', 'getAttention': False})
    } {
        Deku000.PlayAnimationNoWait({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}
