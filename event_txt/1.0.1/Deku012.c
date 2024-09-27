-------- EventFlow: Deku012 --------

Actor: Deku012
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'AimPlayer', 'GenericTalkSequence', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult4', 'GetLastResult']
params: None

void talk010() {

    call _talkStart()

    Deku012.Talk({'message': 'scenario/GeneralTalkDeku:Deku012Talk010_Q1', 'getAttention': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        call _talkQ1A()

    } else {

        call _Nothx()

    }
}

void talk030() {

    call _talkStart()

    Event28:
    Deku012.Talk({'message': 'scenario/GeneralTalkDeku:Deku012Talk030_Q1', 'getAttention': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:

        call _talkQ1A()

      case 1:
        Deku012.Talk({'message': 'scenario/GeneralTalkDeku:Deku012Talk030_Q1_A2_010', 'getAttention': False})
        goto Event28
      case 2:

        call _Nothx()

    }
}

void _talkQ1A() {
    Deku012.Talk({'message': 'scenario/GeneralTalkDeku:Deku012Talk010_Q2', 'getAttention': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        Deku012.Talk({'message': 'scenario/GeneralTalkDeku:Deku012Talk010_Q2_A1_010', 'getAttention': False})
        Event6:

        call _talkQ1A()

      case 1:
        Deku012.Talk({'message': 'scenario/GeneralTalkDeku:Deku012Talk010_Q2_A2_010', 'getAttention': False})
        goto Event6
      case 2:
        Deku012.Talk({'message': 'scenario/GeneralTalkDeku:Deku012Talk010_Q2_A3_010', 'getAttention': False})
        goto Event6
      case 3:
        Deku012.Talk({'message': 'scenario/GeneralTalkDeku:Deku012TalkCommon_020', 'getAttention': False})
    }
}

void _Nothx() {
    Deku012.Talk({'message': 'scenario/GeneralTalkDeku:Deku012TalkCommon_020', 'getAttention': False})
}

void _talkStart() {
    Deku012.GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnimName': '', 'selfTalkAnim': False, 'aimToPlayer': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    Deku012.SetInterestIkEnabled({'enable': True})
    Deku012.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Deku012.Talk({'message': 'scenario/GeneralTalkDeku:Deku012TalkCommon_010', 'getAttention': False})
    Deku012.PlayAnimationNoWait({'name': 'talk_sit01', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void talk020() {

    call _talkStart()

    Event9:
    Deku012.Talk({'message': 'scenario/GeneralTalkDeku:Deku012Talk020_Q1', 'getAttention': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        Deku012.Talk({'message': 'scenario/GeneralTalkDeku:Deku012Talk020_Q1_A2_010', 'getAttention': False})
        goto Event9
      case 1:

        call _talkQ1A()

      case 2:

        call _Nothx()

    }
}
