-------- EventFlow: Deku016 --------

Actor: Deku016
entrypoint: None()
actions: ['Talk', 'AimPlayer', 'GenericTalkSequenceWithDialog', 'PlayAnimationNoWait', 'PlayAnimation', 'SetFacialExpression', 'AimActor', 'GenericTalkSequence', 'SetInstanceVariableBool', 'SetInterestIkEnabled', 'SetInstanceVariableString']
queries: ['GetInstanceVariableBool']
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult', 'GetLastResult4']
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['CheckProgress']
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Deku000
entrypoint: None()
actions: ['Talk', 'PlayAnimation', 'SetFacialExpression', 'GenericTalkSequenceWithDialog', 'AimPlayer', 'PlayAnimationNoWait', 'AimActor', 'SetInterestIkEnabled', 'SetInstanceVariableString']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Shake', 'LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AddItemAndGenericItemGetSequence']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['MoveToDefaultPosition']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor', 'SetInterestIkEnabled']
queries: []
params: None

void talk010() {

    call _talkStart()

    Deku016.Talk({'message': 'scenario/GeneralTalkDeku:Deku016Talk010_Q1', 'getAttention': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {
        Deku016.Talk({'message': 'scenario/GeneralTalkDeku:Deku016Talk010_Q1_A1_010', 'getAttention': False})
    } else {

        call _Nothx()

    }
}

void talk020() {

    call _talkStart()

    Deku016.Talk({'message': 'scenario/GeneralTalkDeku:Deku016Talk010_Q1', 'getAttention': False})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        call _talkQ1A()

    } else {

        call _Nothx()

    }
}

void talk030() {

    call _talkStart()

    Deku016.Talk({'message': 'scenario/GeneralTalkDeku:Deku016Talk030_Q1', 'getAttention': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        Event21:
        Deku016.Talk({'message': 'scenario/GeneralTalkDeku:Deku016Talk030_Q1_A2_010', 'getAttention': False})
        Deku016.Talk({'message': 'scenario/GeneralTalkDeku:Deku016Talk030_Q1', 'getAttention': False})
        switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
          case 0:
            goto Event21
          case 1:
            Event29:

            call _talkQ1A()

          case 2:
            Deku016.Talk({'message': 'scenario/GeneralTalkDeku:Deku016Talk020_Q1_A4_010', 'getAttention': False})
        }
      case 1:
        goto Event29
      case 2:

        call _Nothx()

    }
}

void talk040() {

    call _talkStart()

    Deku016.Talk({'message': 'scenario/GeneralTalkDeku:Deku016Talk040_Q1', 'getAttention': False})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:
        Event37:

        call _talkQ1A()

      case 1:
        Event38:
        Deku016.Talk({'message': 'scenario/GeneralTalkDeku:Deku016Talk040_Q1_A2_010', 'getAttention': False})
        Deku016.Talk({'message': 'scenario/GeneralTalkDeku:Deku016Talk040_Q1', 'getAttention': False})
        switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
          case 0:
            goto Event37
          case 1:
            goto Event38
          case 2:
            Deku016.Talk({'message': 'scenario/GeneralTalkDeku:Deku016Talk020_Q1_A4_010', 'getAttention': False})
        }
      case 2:

        call _Nothx()

    }
}

void _talkQ1A() {
    switch QuestSystem.CheckProgress({'symbol': 'Jungle:425818924'}) {
      case 4294967295:
        Deku016.Talk({'message': 'scenario/GeneralTalkDeku:Deku016Talk020_Q1', 'getAttention': False})
        switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
          case 0:
            Event17:
            Deku016.Talk({'message': 'scenario/GeneralTalkDeku:Deku016Talk020_Q1_A1_010', 'getAttention': False})
            Event28:

            call _talkQ1A()

          case 1:
            Event15:
            Deku016.Talk({'message': 'scenario/GeneralTalkDeku:Deku016Talk020_Q1_A2_010', 'getAttention': False})
            goto Event28
          case 2:
            Deku016.Talk({'message': 'scenario/GeneralTalkDeku:Deku016Talk020_Q1_A3_010', 'getAttention': False})
            goto Event28
          case 3:
            Event25:
            Deku016.Talk({'message': 'scenario/GeneralTalkDeku:Deku016Talk020_Q1_A4_010', 'getAttention': False})
        }
      case [0, 1]:
        Deku016.Talk({'message': 'scenario/GeneralTalkDeku:Deku016Talk040_Q2', 'getAttention': False})
        switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
          case 0:
            goto Event17
          case 1:
            goto Event15
          case 2:
            goto Event25
        }
    }
}

void _Nothx() {
    Deku016.Talk({'message': 'scenario/GeneralTalkDeku:Deku016TalkCommon_020', 'getAttention': False})
}

void _talkStart() {
    Deku016.GenericTalkSequence({'playerTalkAnim': False, 'selfTalkAnimName': '', 'aimToPlayer': False, 'selfTalkAnim': False, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
    Deku016.SetInterestIkEnabled({'enable': True})
    Deku016.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Deku016.Talk({'message': 'scenario/GeneralTalkDeku:Deku016TalkCommon_010', 'getAttention': False})
    Deku016.PlayAnimationNoWait({'name': 'talk_sit01', 'layer': 0, 'blendFrame': -1, 'restart': False})
}

void Enemy_Jungle050_010() {

    call EvResetCommon.AllReset()

    Timer.Wait({'time': 1.0})
    Partner.MoveToDefaultPosition({'speed': 1, 'position': 1, 'tolerance': 0.0, 'avoidWall': False, 'avoidPlayer': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})

    fork {
        Player.SetInterestIkEnabled({'enable': True})
    } {
        Partner[companion].SetInterestIkEnabled({'enable': True})
    } {
        Deku016.SetInterestIkEnabled({'enable': False})
    } {
        Deku000.SetInterestIkEnabled({'enable': False})
    }


    fork {
        Deku016.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaF:Enemy_Jungle050_010', 'playerTalkAnim': False, 'selfTalkAnim': True, 'selfTalkAnimName': 'no01,sad01', 'facial': 'sad', 'cameraLookAt': True, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="Deku016"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        Deku016.Talk({'message': 'quest/QuestAreaF:Enemy_Jungle050_020', 'getAttention': False})
    } {
        Deku016.PlayAnimationNoWait({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="Deku016"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Deku016"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku000.AimActor({'actor': ActorIdentifier(name="Deku016"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Timer.Wait({'time': 1.5})

    fork {
        Deku016.Talk({'message': 'quest/QuestAreaF:Enemy_Jungle050_030', 'getAttention': False})
    } {
        Deku016.PlayAnimation({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku016.SetFacialExpression({'expression': 'angry'})
    }


    fork {
        Deku000.Talk({'message': 'quest/QuestAreaF:Enemy_Jungle050_040', 'getAttention': False})
    } {
        Deku000.PlayAnimation({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku000.SetFacialExpression({'expression': 'angry'})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="Deku000"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Deku000"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku016.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku016.AimActor({'actor': ActorIdentifier(name="Deku000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

    fork {
        Deku016.Talk({'message': 'quest/QuestAreaF:Enemy_Jungle050_050', 'getAttention': False})
    } {
        Deku016.PlayAnimation({'name': 'no01,wait02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})
        Deku000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="Deku016"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Deku016"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku000.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku016"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

    fork {
        Deku000.Talk({'message': 'quest/QuestAreaF:Enemy_Jungle050_060', 'getAttention': False})
    } {
        Deku000.PlayAnimation({'name': 'yes02,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku000.SetFacialExpression({'expression': 'normal'})
    } {
        Timer.Wait({'time': 0.5})
        Deku016.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="Deku000"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Deku000"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku000.Talk({'message': 'quest/QuestAreaF:Enemy_Jungle050_070', 'getAttention': False})
    } {
        Deku000.PlayAnimation({'name': 'find,angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Deku016.Talk({'message': 'quest/QuestAreaF:Enemy_Jungle050_080', 'getAttention': False})
    } {
        Deku016.PlayAnimation({'name': 'yes02,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="Deku016"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Deku016"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku016.Talk({'message': 'quest/QuestAreaF:Enemy_Jungle050_090', 'getAttention': False})
    } {
        Deku016.PlayAnimationNoWait({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Deku000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        Deku000.Talk({'message': 'quest/QuestAreaF:Enemy_Jungle050_100', 'getAttention': False})
    } {
        Deku000.PlayAnimationNoWait({'name': 'no01,sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.20000000298023224})
        Player.AimActor({'actor': ActorIdentifier(name="Deku000"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Timer.Wait({'time': 0.30000001192092896})
        Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Deku016"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }

    Deku016.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait01'})
    Timer.Wait({'time': 0.10000000149011612})
    Deku000.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait01'})
    Deku016.SetInstanceVariableBool({'value': True, 'name': 'talkFinish'})
    QuestSystem.SetProgress({'symbol': 'Enemy_Jungle050:3273100625', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Enemy_Jungle050_end() {

    call EvResetCommon.AllReset()

    if !Deku016.GetInstanceVariableBool({'name': 'talkFinish'}) {
        Timer.Wait({'time': 1.0})
        Deku016.SetInstanceVariableBool({'value': True, 'name': 'talkFinish'})
        Event219:
        Deku016.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner.MoveToDefaultPosition({'speed': 1, 'position': 1, 'tolerance': 0.0, 'avoidWall': False, 'avoidPlayer': False, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False})

        fork {
            Player.SetInterestIkEnabled({'enable': True})
        } {
            Partner[companion].SetInterestIkEnabled({'enable': True})
        } {
            Deku016.SetInterestIkEnabled({'enable': False})
        } {
            Deku000.SetInterestIkEnabled({'enable': False})
        }


        fork {
            Deku016.GenericTalkSequence({'selfTalkAnim': False, 'playerTalkAnim': False, 'aimToPlayer': True, 'cameraLookAt': True, 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'isExcludeLocked': False})
        } {
            Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Deku016"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        fork {
            Deku016.Talk({'message': 'quest/QuestAreaF:Enemy_Jungle070_010', 'getAttention': False})
        } {
            Deku016.PlayAnimationNoWait({'name': 'down_st,down_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Deku016.SetFacialExpression({'expression': 'sad'})
        }

        Deku000.AimActor({'actor': ActorIdentifier(name="Deku016"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

        fork {
            Deku000.Talk({'message': 'quest/QuestAreaF:Enemy_Jungle070_020', 'getAttention': False})
        } {
            Deku000.PlayAnimation({'name': 'find,sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Deku000.SetFacialExpression({'expression': 'sad'})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Player.AimActor({'actor': ActorIdentifier(name="Deku000"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.30000001192092896})
            Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Deku000"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku016"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

        fork {
            Deku016.Talk({'message': 'quest/QuestAreaF:Enemy_Jungle070_030', 'getAttention': False})
        } {
            Deku016.PlayAnimation({'name': 'talk_sit01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Player.AimActor({'actor': ActorIdentifier(name="Deku016"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.30000001192092896})
            Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Deku016"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        fork {
            Deku000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Deku000.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Timer.Wait({'time': 0.5})

        call GeneralSequence.ZeldaTalkMotion()

        Timer.Wait({'time': 0.5})

        fork {
            Deku016.Talk({'message': 'quest/QuestAreaF:Enemy_Jungle070_040', 'getAttention': False})
        } {
            Deku016.PlayAnimation({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Deku016.SetFacialExpression({'expression': 'surprise'})
        }


        fork {
            Deku000.Talk({'message': 'quest/QuestAreaF:Enemy_Jungle070_050', 'getAttention': False})
        } {
            Deku000.PlayAnimation({'name': 'surprised_st01,surprised_lp01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Deku000.SetFacialExpression({'expression': 'surprise'})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Player.AimActor({'actor': ActorIdentifier(name="Deku000"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.30000001192092896})
            Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Deku000"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        fork {
            Deku016.AimActor({'actor': ActorIdentifier(name="Deku000"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Deku016.PlayAnimation({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Deku000.AimActor({'actor': ActorIdentifier(name="Deku016"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Deku000.PlayAnimation({'name': 'frightened01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Deku000.Talk({'message': 'quest/QuestAreaF:Enemy_Jungle070_060', 'getAttention': False})

        fork {
            Deku000.Talk({'message': 'quest/QuestAreaF:Enemy_Jungle070_070', 'getAttention': False})
        } {
            Deku000.PlayAnimationNoWait({'name': 'find,panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Deku016.PlayAnimationNoWait({'name': 'find,panic', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Camera.Shake({'power': 3, 'duration': 1.0})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_DKN_1_4_006_002', 'volume': 1.0, 'pitch': 1.0})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_DKN_1_3_002_003', 'volume': 1.0, 'pitch': 1.0})
        }


        fork {
            Deku016.Talk({'message': 'quest/QuestAreaF:Enemy_Jungle070_080', 'getAttention': False})
        } {
            Deku016.PlayAnimation({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Deku000.SetFacialExpression({'expression': 'smile'})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Player.AimActor({'actor': ActorIdentifier(name="Deku016"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.30000001192092896})
            Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Deku016"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        fork {
            Deku000.Talk({'message': 'quest/QuestAreaF:Enemy_Jungle070_090', 'getAttention': False})
        } {
            Deku000.PlayAnimation({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Deku000.SetFacialExpression({'expression': 'smile'})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Player.AimActor({'actor': ActorIdentifier(name="Deku000"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.30000001192092896})
            Partner[companion].AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Deku000"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        fork {
            Deku016.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Deku016.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Deku000.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Deku000.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }


        fork {
            Deku016.Talk({'message': 'quest/QuestAreaF:Enemy_Jungle070_100', 'getAttention': False})
        } {
            Deku016.PlayAnimation({'name': 'yes01,happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Deku016.SetFacialExpression({'expression': 'smile'})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Player.AimActor({'actor': ActorIdentifier(name="Deku016"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.30000001192092896})
            Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': True, 'actor': ActorIdentifier(name="Deku016"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Deku016.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'WorldGlobePiece', 'count': 1, 'index': 71, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku016"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

        fork {
            Deku000.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'quest/QuestAreaF:Enemy_Jungle070_110', 'selfTalkAnim': True, 'cameraLookAt': False, 'facial': 'smile', 'selfTalkAnimName': 'yes01,happy02', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Timer.Wait({'time': 0.30000001192092896})
            Partner[companion].AimActor({'duration': 0.4000000059604645, 'withoutTurn': False, 'actor': ActorIdentifier(name="Deku016"), 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        fork {
            Deku016.Talk({'message': 'quest/QuestAreaF:Enemy_Jungle070_120', 'getAttention': False})
        } {
            Deku016.PlayAnimation({'name': 'happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Deku016.SetFacialExpression({'expression': 'normal'})
        } {
            Player.AimActor({'actor': ActorIdentifier(name="Deku016"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Deku016.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait01'})
        Timer.Wait({'time': 0.10000000149011612})
        Deku000.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait01'})
        QuestSystem.SetProgress({'symbol': 'Enemy_Jungle050:4165318012', 'isShowTelopInEvent': False, 'isFrontFade': False})
    } else {
        goto Event219
    }
}

void Enemy_Jungle050_015() {
    if !Deku016.GetInstanceVariableBool({'name': 'talkFinish'}) {
        Timer.Wait({'time': 1.0})
        Deku016.SetInstanceVariableBool({'value': True, 'name': 'talkFinish'})
        Event208:
        Deku016.SetInterestIkEnabled({'enable': False})
        Deku016.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaF:Enemy_Jungle060_010', 'playerTalkAnim': False, 'selfTalkAnimName': 'frightened01', 'cameraLookAt': True, 'facial': 'sad', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        Deku016.SetInstanceVariableString({'name': 'idleAnim', 'value': 'wait01'})
    } else {
        goto Event208
    }
}

void Enemy_Jungle050_After016() {
    if !Deku016.GetInstanceVariableBool({'name': 'talkFinish'}) {
        Timer.Wait({'time': 1.0})
        Deku016.SetInstanceVariableBool({'value': True, 'name': 'talkFinish'})
        Event43:
        Deku016.SetInterestIkEnabled({'enable': False})
        Deku016.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/GeneralTalkDeku:Deku016Talk050_010', 'selfTalkAnimName': 'sad01', 'facial': 'sleep', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

        fork {
            Deku016.Talk({'message': 'scenario/GeneralTalkDeku:Deku016Talk050_020', 'getAttention': False})
        } {
            Deku016.PlayAnimationNoWait({'name': 'no01,happy02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Deku016.SetFacialExpression({'expression': 'smile'})
        }

    } else {
        goto Event43
    }
}
