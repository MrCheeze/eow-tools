-------- EventFlow: Deku004 --------

Actor: Deku004
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'SetInstanceVariableBool', 'GenericTalkSequence', 'AimPlayer', 'SetInterestIkEnabled']
queries: ['GetInstanceVariableBool']
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult4']
params: None

void talk010() {

    call _talkStart()

    Deku004.Talk({'message': 'scenario/GeneralTalkDeku:Deku004Talk010_Q1', 'getAttention': False})
    if !Dialog.GetLastResult4({'resultOnSkip': 3}) {

        call _talkQ1A1()

    } else {

        call _Nothx()

    }
}

void talk030() {

    call _talkStart()

    Event6:
    Deku004.Talk({'message': 'scenario/GeneralTalkDeku:Deku004Talk030_Q1', 'getAttention': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:

        call _talkQ1A1()

      case 1:
        Deku004.Talk({'message': 'scenario/GeneralTalkDeku:Deku004Talk030_Q1_A2_010', 'getAttention': False})
        Deku004.SetInstanceVariableBool({'name': 'talkFinish', 'value': True})
        goto Event6
      case 2:

        call _Nothx()

    }
}

void _talkQ1A1() {
    Deku004.Talk({'message': 'scenario/GeneralTalkDeku:Deku004Talk010_Q2', 'getAttention': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        Deku004.Talk({'message': 'scenario/GeneralTalkDeku:Deku004Talk010_Q2_A1_010', 'getAttention': False})
        Event28:

        call _talkQ1A1()

      case 1:
        Deku004.Talk({'message': 'scenario/GeneralTalkDeku:Deku004Talk010_Q2_A2_010', 'getAttention': False})
        goto Event28
      case 2:
        Deku004.Talk({'message': 'scenario/GeneralTalkDeku:Deku004Talk010_Q2_A3_010', 'getAttention': False})
        goto Event28
      case 3:
        Deku004.Talk({'message': 'scenario/GeneralTalkDeku:Deku004Talk010_Q2_A4_010', 'getAttention': False})
    }
}

void _Nothx() {
    if !Deku004.GetInstanceVariableBool({'name': 'talkFinish'}) {
        Deku004.Talk({'message': 'scenario/GeneralTalkDeku:Deku004TalkCommon_020', 'getAttention': False})
    } else {
        Deku004.Talk({'message': 'scenario/GeneralTalkDeku:Deku004Talk010_Q2_A4_010', 'getAttention': False})
    }
}

void _talkStart() {
    Deku004.GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnimName': '', 'aimToPlayer': False, 'selfTalkAnim': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    Deku004.SetInterestIkEnabled({'enable': True})
    Deku004.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Deku004.Talk({'message': 'scenario/GeneralTalkDeku:Deku004TalkCommon_010', 'getAttention': False})
    Deku004.PlayAnimationNoWait({'name': 'talk_sit01', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void talk020() {

    call _talkStart()

    Event18:
    Deku004.Talk({'message': 'scenario/GeneralTalkDeku:Deku004Talk020_Q1', 'getAttention': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        Deku004.Talk({'message': 'scenario/GeneralTalkDeku:Deku004Talk020_Q1_A2_010', 'getAttention': False})
        Deku004.SetInstanceVariableBool({'name': 'talkFinish', 'value': True})
        goto Event18
      case 1:

        call _talkQ1A1()

      case 2:

        call _Nothx()

    }
}
