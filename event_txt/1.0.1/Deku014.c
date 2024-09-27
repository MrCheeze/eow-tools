-------- EventFlow: Deku014 --------

Actor: Deku014
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimationNoWait']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult', 'GetLastResult4']
params: None

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckFlag', 'CheckMessgaeFlag']
params: None

Actor: Player
entrypoint: None()
actions: ['GetOffVehicle']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['CheckProgress']
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait']
queries: []
params: None

void talk010() {
    if !EventFlags.CheckFlag({'symbol': 'EvF_ApproachEntranceRuins_Clear'}) {
        Deku014.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'selfTalkAnim': False, 'message': 'scenario/GeneralTalkDeku:Deku014Talk010_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } else {
        Deku014.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkDeku:Deku014Talk010_Q1', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        if !Dialog.GetLastResult({'resultOnSkip': 1}) {
            Deku014.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Deku014.Talk({'message': 'scenario/GeneralTalkDeku:Deku014Talk010_Q1_A1_010', 'getAttention': False})
            Deku014.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Partner[companion].Talk({'message': 'scenario/GeneralTalkDeku:Deku014Talk010_Q1_A1_020', 'getAttention': False})
            Partner[companion].PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Player.GetOffVehicle({'method': 0, 'anim': 'get_off', 'disappear': True})
            Timer.Wait({'time': 0.5})

            call GeneralSequence.ZeldaTalkMotion()

            Timer.Wait({'time': 1.0})
            Deku014.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Deku014.Talk({'message': 'scenario/GeneralTalkDeku:Deku014Talk010_Q1_A1_030', 'getAttention': False})
            if QuestSystem.CheckProgress({'symbol': 'Jungle:143546590'}) == 4294967295 {
                if !EventFlags.CheckMessgaeFlag({'message': 'scenario/GeneralTalkDeku:Deku009Talk010_Q2_A1_010'}) {
                    if QuestSystem.CheckProgress({'symbol': 'Jungle:3867163122'}) == 4294967295 {
                        QuestSystem.SetProgress({'symbol': 'Jungle:3867163122', 'isShowTelopInEvent': False, 'isFrontFade': False})
                    }
                } else {
                    QuestSystem.SetProgress({'symbol': 'Jungle:143546590', 'isShowTelopInEvent': False, 'isFrontFade': False})
                }
            }
        } else {
            Deku014.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Deku014.Talk({'message': 'scenario/GeneralTalkDeku:Deku014Talk010_Q1_A2_010', 'getAttention': False})
        }
    }
}

void talk020() {
    Deku014.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkDeku:Deku014Talk020_Q1', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult4({'resultOnSkip': 3}) {
        Deku014.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku014.Talk({'message': 'scenario/GeneralTalkDeku:Deku014Talk020_Q1_A1_010', 'getAttention': False})
        Deku014.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku014.Talk({'message': 'scenario/GeneralTalkDeku:Deku014Talk020_Q1_A1_020', 'getAttention': False})
    } else {
        Deku014.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku014.Talk({'message': 'scenario/GeneralTalkDeku:Deku014Talk020_Q1_A2_010', 'getAttention': False})
        Deku014.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku014.Talk({'message': 'scenario/GeneralTalkDeku:Deku014Talk020_Q1_A2_020', 'getAttention': False})
    }
}

void talk030() {
    Deku014.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkDeku:Deku014Talk030_Q1', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult4({'resultOnSkip': 3}) {
        Deku014.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku014.Talk({'message': 'scenario/GeneralTalkDeku:Deku014Talk030_Q1_A1_010', 'getAttention': False})
        Deku014.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku014.Talk({'message': 'scenario/GeneralTalkDeku:Deku014Talk030_Q1_A1_020', 'getAttention': False})
    } else {
        Deku014.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku014.Talk({'message': 'scenario/GeneralTalkDeku:Deku014Talk030_Q1_A2_010', 'getAttention': False})
    }
}

void talk005() {
    Deku014.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkDeku:Deku014Talk005_010', 'selfTalkAnim': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}
