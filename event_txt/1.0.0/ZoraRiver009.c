-------- EventFlow: ZoraRiver009 --------

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult4', 'GetLastResult']
params: None

Actor: ZoraRiver009
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimationNoWait', 'SetFacialExpression', 'SkipAutoTurn', 'AimPlayer']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: ZoraRiver010
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'AimPlayer']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

void talk() {

    fork {
        ZoraRiver009.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver009Talk010_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        ZoraRiver010.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    ZoraRiver009.SetFacialExpression({'expression': 'normal'})
    ZoraRiver009.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver009.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'selfTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver009Talk010_Q1_010', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        Event37:
        ZoraRiver009.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver009.Talk({'message': 'scenario/StoryAreaB:BlockedEntrance_Q1_A1_010', 'getAttention': False})
        Event42:
        ZoraRiver009.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Event35:
        ZoraRiver009.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver009Talk010_Q1_020', 'getAttention': False})
        switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
          case 0:
            goto Event37
          case 1:
            Event52:

            call Talk_ZoraRiver010()

            goto Event35
          case 2:
            Event43:
            ZoraRiver009.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            ZoraRiver009.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver009Talk010_Q1_A3_010', 'getAttention': False})
            ZoraRiver009.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver009Talk010_Q1_A3_020', 'getAttention': False})
            ZoraRiver009.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver009Talk010_Q1_A3_030', 'getAttention': False})
            goto Event42
          case 3:
            Event21:
            ZoraRiver009.SetFacialExpression({'expression': 'sad'})
            ZoraRiver009.PlayAnimationNoWait({'name': 'no01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            ZoraRiver009.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver009Talk010_Q1_A4_010', 'getAttention': False})
            ZoraRiver009.SkipAutoTurn()
        }
      case 1:
        goto Event52
      case 2:
        goto Event43
      case 3:
        goto Event21
    }
}

void talk020() {
    ZoraRiver009.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 0.20000000298023224})
    ZoraRiver009.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver009Talk020_010', 'selfTalkAnimName': 'surprised_st01', 'facial': 'surprise', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraRiver009.SetFacialExpression({'expression': 'sad'})
    ZoraRiver009.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver009.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver009Talk020_020', 'getAttention': False})
    ZoraRiver009.SetFacialExpression({'expression': 'normal'})
    ZoraRiver009.SkipAutoTurn()
}

void talk030() {
    ZoraRiver009.SetFacialExpression({'expression': 'sad'})
    ZoraRiver009.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver009Talk030_010', 'selfTalkAnimName': 'sad01', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraRiver009.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver009.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver009Talk030_020', 'getAttention': False})
    ZoraRiver009.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver009Talk030_030', 'getAttention': False})
    ZoraRiver009.SkipAutoTurn()
}

void talk040() {
    ZoraRiver009.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver009Talk040_010', 'selfTalkAnimName': 'no01,wait01', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraRiver009.SetFacialExpression({'expression': 'sleep'})
    ZoraRiver009.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    ZoraRiver009.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver009Talk040_020', 'getAttention': False})
    ZoraRiver009.SkipAutoTurn()
}

void talk050() {
    ZoraRiver009.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'aimFromPlayer': True, 'aimToPlayer': True, 'cameraLookAt': True, 'keepPersonalSpace': True, 'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver009Talk050_Q1', 'selfTalkAnimName': '', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        ZoraRiver009.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver009Talk050_Q1_A1_010', 'getAttention': False})
        ZoraRiver009.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver009Talk050_Q1_A1_020', 'getAttention': False})
        ZoraRiver009.SkipAutoTurn()
    } else {
        ZoraRiver009.Talk({'message': 'scenario/GeneralTalkZoraRiver:ZoraRiver009Talk050_Q1_A2_010', 'getAttention': False})
        ZoraRiver009.SkipAutoTurn()
    }
}

void Talk_ZoraRiver010() {
    ZoraRiver009.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiver010.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        ZoraRiver010.Talk({'message': 'scenario/StoryAreaB:BlockedEntrance_Q1_A2_010', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="ZoraRiver010"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].AimActor({'actor': ActorIdentifier(name="ZoraRiver010"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    ZoraRiver010.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Timer.Wait({'time': 0.4000000059604645})
        Player.AimActor({'actor': ActorIdentifier(name="ZoraRiver009"), 'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.6000000238418579})
        Partner[companion].AimActor({'withoutTurn': False, 'actor': ActorIdentifier(name="ZoraRiver009"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

}
