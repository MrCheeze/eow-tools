-------- EventFlow: HylianM002 --------

Actor: HylianM002
entrypoint: None()
actions: ['Talk', 'SetFacialExpression', 'GenericTalkSequenceWithDialog', 'PlayAnimationNoWait', 'PlayAnimation']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: []
queries: ['CheckProgress']
params: None

Actor: MinisterRight
entrypoint: None()
actions: ['Talk', 'AimActor', 'PlayAnimation', 'PlayOneshotSE']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

Actor: HyruleSoldier001
entrypoint: None()
actions: ['Talk', 'AimActor', 'PlayAnimation', 'PlayOneshotSE']
queries: []
params: None

void talk() {
    HylianM002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': 'talk01_R', 'message': 'scenario/HylianGeneralTalk:HylianM002Talk01_010', 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianM002.SetFacialExpression({'expression': 'sleep'})
    HylianM002.PlayAnimationNoWait({'name': 'think01_R', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianM002.Talk({'message': 'scenario/HylianGeneralTalk:HylianM002Talk01_020', 'getAttention': False})
}

void talk2() {
    HylianM002.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': 'talk01_R', 'message': 'scenario/HylianGeneralTalk:HylianM002Talk02_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianM002.SetFacialExpression({'expression': 'sad'})
    HylianM002.PlayAnimationNoWait({'name': 'think01_R', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianM002.Talk({'message': 'scenario/HylianGeneralTalk:HylianM002Talk02_020', 'getAttention': False})
}

void talk030() {
    HylianM002.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianM002Talk030_010', 'facial': 'smile', 'selfTalkAnimName': 'talk01_R', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk040() {
    HylianM002.GenericTalkSequenceWithDialog({'facial': 'smile', 'selfTalkAnimName': 'talk01_R', 'message': 'scenario/HylianGeneralTalk:HylianM002Talk040_010', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianM002.Talk({'message': 'scenario/HylianGeneralTalk:HylianM002Talk040_020', 'getAttention': False})
}

void talk050() {
    HylianM002.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianM002TalkSecretlyClothes_010', 'selfTalkAnimName': '', 'facial': '', 'playerTalkAnim': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Special_HyruleCastle050() {

    fork {
        HylianM002.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaA:Special_HyruleCastle050_180', 'aimToPlayer': False, 'playerTalkAnim': False, 'selfTalkAnimName': 'no01,wait01', 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        HylianM002.SetFacialExpression({'expression': 'sad'})
    }

}

void Special_HyruleCastle045() {

    fork {
        HylianM002.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaA:Special_HyruleCastle045_010', 'lookAtOffsetX': 1.0, 'aimToPlayer': False, 'playerTalkAnim': False, 'selfTalkAnimName': 'talk01_R', 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        HylianM002.SetFacialExpression({'expression': 'angry'})
    } {
        MinisterRight.AimActor({'actor': ActorIdentifier(name="HylianM002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HyruleSoldier001.AimActor({'actor': ActorIdentifier(name="HylianM002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Partner.AimActor({'actor': ActorIdentifier(name="HylianM002"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    HylianM002.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    switch QuestSystem.CheckProgress({'symbol': 'LastDungeon:868176213'}) {
      case 4294967295:
        Event30:

        fork {
            MinisterRight.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle045_020', 'getAttention': True})
        } {
            MinisterRight.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MinisterRight.PlayOneshotSE({'label': 'VO_UGI_007_5', 'volume': 1.0, 'pitch': 1.0})
        }

        Event14:

        fork {
            HylianM002.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle045_030', 'getAttention': True})
        } {
            HylianM002.SetFacialExpression({'expression': 'sad'})
        } {
            HylianM002.PlayAnimation({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            MinisterRight.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            HyruleSoldier001.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

      case [0, 1]:
        switch QuestSystem.CheckProgress({'symbol': 'LastDungeon:3262011794'}) {
          case [4294967295, 0]:

            fork {
                HyruleSoldier001.Talk({'message': 'quest/QuestAreaA:Special_HyruleCastle045_020', 'getAttention': True})
            } {
                HyruleSoldier001.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HyruleSoldier001.PlayOneshotSE({'label': 'VO_HYL_SOL_001_004', 'volume': 1.0, 'pitch': 1.0})
            }

            goto Event14
          case 1:
            goto Event30
        }
    }
}

void HylianM002Talk050() {
    HylianM002.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianM002Talk050_010', 'facial': 'smile', 'playerTalkAnim': False, 'selfTalkAnimName': 'talk01_R', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        HylianM002.Talk({'message': 'scenario/HylianGeneralTalk:HylianM002Talk050_020', 'getAttention': False})
    } {
        HylianM002.SetFacialExpression({'expression': 'normal'})
    } {
        HylianM002.PlayAnimation({'name': 'think01_R', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

}
