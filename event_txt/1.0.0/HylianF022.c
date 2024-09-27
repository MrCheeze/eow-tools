-------- EventFlow: HylianF022 --------

Actor: HylianF022
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SetFacialExpression', 'SkipAutoTurn', 'PlayAnimationNoWait']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag']
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE']
queries: []
params: None

void talk010() {
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/HylianGeneralTalk:HylianF022Talk010_010'})
    && !EventFlags.CheckMessgaeFlag({'message': 'scenario/HylianGeneralTalk:HylianMC004Talk010_010'}) {
        HylianF022.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'happy02', 'message': 'scenario/HylianGeneralTalk:HylianF022Talk010_010', 'facial': 'surprise', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        HylianF022.SetFacialExpression({'expression': 'sad'})
        HylianF022.Talk({'message': 'scenario/HylianGeneralTalk:HylianF022Talk010_020', 'getAttention': False})
        HylianF022.SkipAutoTurn()
    } else {

        fork {
            HylianF022.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'happy02', 'message': 'scenario/HylianGeneralTalk:HylianF022Talk010_020', 'facial': 'sad', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_HYL_W6_1_006', 'volume': 1.0, 'pitch': 1.0})
        }

        HylianF022.SkipAutoTurn()
    }
}

void talk020() {
    HylianF022.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianF022Talk020_010', 'selfTalkAnimName': 'no01,wait10', 'facial': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianF022.SetFacialExpression({'expression': 'sleep'})
    HylianF022.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF022.Talk({'message': 'scenario/HylianGeneralTalk:HylianF022Talk020_020', 'getAttention': False})
    HylianF022.SkipAutoTurn()
}

void talk030() {
    HylianF022.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': '', 'message': 'scenario/HylianGeneralTalk:HylianF022Talk030_010', 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk040() {
    HylianF022.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': '', 'selfTalkAnimName': '', 'message': 'scenario/HylianGeneralTalk:HylianF022Talk040_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talkSec() {
    HylianF022.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'facial': '', 'selfTalkAnimName': '', 'message': 'scenario/HylianGeneralTalk:HylianF022TalkSecretlyClothes_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void talk_boundary() {
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:PartnerMemoryReturns010_070', 'getAttention': False})
}
