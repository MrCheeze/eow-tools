-------- EventFlow: HylianM023 --------

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult4', 'GetLastResult5']
params: None

Actor: HylianM023
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'SetFacialExpression', 'PlayAnimationNoWait', 'ResetFacialExpression']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag']
params: None

void talk010() {
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/StoryAreaPlane:ChurchTroubleClear_010'}) {
        HylianM023.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'cameraLookAt': True, 'message': 'scenario/StoryAreaPlane:ChurchTroubleClear_010', 'facial': '', 'keepPersonalSpace': False, 'selfTalkAnimName': 'talk01', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        HylianM023.Talk({'message': 'scenario/StoryAreaPlane:ChurchTroubleClear_020', 'getAttention': False})
        HylianM023.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Event7:
        HylianM023.Talk({'message': 'scenario/StoryAreaPlane:ChurchTalk_Q1_010', 'getAttention': False})
        Event8:
        switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
          case 0:
            HylianM023.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            HylianM023.Talk({'message': 'scenario/StoryAreaPlane:ChurchHintA_010', 'getAttention': False})
            Event13:

            call sel()

          case 1:
            HylianM023.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            HylianM023.Talk({'message': 'scenario/StoryAreaPlane:ChurchHintB_010', 'getAttention': False})
            goto Event13
          case 2:
            HylianM023.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            HylianM023.Talk({'message': 'scenario/StoryAreaPlane:ChurchHintC_010', 'getAttention': False})
            goto Event13
          case 3:
            if !EventFlags.CheckMessgaeFlag({'message': 'scenario/StoryAreaPlane:ChurchTalk_Q1_A2_020'}) {
                HylianM023.SetFacialExpression({'expression': 'smile'})
                HylianM023.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                HylianM023.Talk({'message': 'scenario/StoryAreaPlane:ChurchTalk_Q1_A2_020', 'getAttention': False})
            } else {
                HylianM023.SetFacialExpression({'expression': 'smile'})
                HylianM023.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                HylianM023.Talk({'message': 'scenario/StoryAreaPlane:ChurchTalk_Q1_A2_010', 'getAttention': False})
            }
        }
    } else {
        HylianM023.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'cameraLookAt': True, 'message': 'scenario/StoryAreaPlane:ChurchTalk_010', 'selfTalkAnimName': 'talk01', 'facial': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        HylianM023.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        goto Event7
    }
}

void talk020() {
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/StoryAreaPlane:ChurchTroubleClear_010'}) {
        HylianM023.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'cameraLookAt': True, 'message': 'scenario/StoryAreaPlane:ChurchTroubleClear_010', 'selfTalkAnimName': '', 'facial': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        HylianM023.Talk({'message': 'scenario/StoryAreaPlane:ChurchTroubleClear_020', 'getAttention': False})
        HylianM023.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Event18:
        HylianM023.Talk({'message': 'scenario/StoryAreaPlane:ChurchTalk_Q1_025', 'getAttention': False})
        switch Dialog.GetLastResult5({'resultOnSkip': 4}) {
          case 0:
            Event58:
            HylianM023.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            HylianM023.Talk({'message': 'scenario/StoryAreaPlane:ChurchHintA_010', 'getAttention': False})
            Event17:

            call sel2()

          case 1:
            Event59:
            HylianM023.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            HylianM023.Talk({'message': 'scenario/StoryAreaPlane:ChurchHintB_010', 'getAttention': False})
            goto Event17
          case 2:
            Event60:
            HylianM023.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            HylianM023.Talk({'message': 'scenario/StoryAreaPlane:ChurchHintC_010', 'getAttention': False})
            goto Event17
          case 3:
            HylianM023.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            HylianM023.Talk({'message': 'scenario/StoryAreaPlane:ChurchTalk_Q1_020', 'getAttention': False})
            switch Dialog.GetLastResult5({'resultOnSkip': 4}) {
              case 0:
                Event61:
                HylianM023.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                HylianM023.Talk({'message': 'scenario/StoryAreaPlane:ChurchHintD_010', 'getAttention': False})
                Event36:

                call sel3()

              case 1:
                Event62:
                HylianM023.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                HylianM023.Talk({'message': 'scenario/StoryAreaPlane:ChurchHintE_010', 'getAttention': False})
                goto Event36
              case 2:
                Event66:
                HylianM023.SetFacialExpression({'expression': 'sad'})
                HylianM023.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
                HylianM023.Talk({'message': 'scenario/StoryAreaPlane:ChurchHintF_010', 'getAttention': False})
                HylianM023.ResetFacialExpression()
                goto Event36
              case 3:

                call sel1()

              case 4:

                call bye()

            }
          case 4:

            call bye()

        }
    } else {
        HylianM023.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'cameraLookAt': True, 'message': 'scenario/StoryAreaPlane:ChurchTalk_010', 'selfTalkAnimName': '', 'facial': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        HylianM023.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        goto Event18
    }
}

void sel() {
    HylianM023.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianM023.Talk({'message': 'scenario/StoryAreaPlane:ChurchTalk_Q2_010', 'getAttention': False})
    goto Event8
}

void sel2() {
    HylianM023.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianM023.Talk({'message': 'scenario/StoryAreaPlane:ChurchTalk_Q2_025', 'getAttention': False})
    switch Dialog.GetLastResult5({'resultOnSkip': 4}) {
      case 0:
        goto Event58
      case 1:
        goto Event59
      case 2:
        goto Event60
      case 3:

        call sel3()

      case 4:

        call bye()

    }
}

void bye() {
    HylianM023.SetFacialExpression({'expression': 'smile'})
    HylianM023.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianM023.Talk({'message': 'scenario/StoryAreaPlane:ChurchTalk_Q1_A2_010', 'getAttention': False})
}

void sel3() {
    HylianM023.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianM023.Talk({'message': 'scenario/StoryAreaPlane:ChurchTalk_Q2_020', 'getAttention': False})
    switch Dialog.GetLastResult5({'resultOnSkip': 4}) {
      case 0:
        goto Event61
      case 1:
        goto Event62
      case 2:
        goto Event66
      case 3:

        call sel2()

      case 4:

        call bye()

    }
}

void sel1() {
    HylianM023.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    goto Event18
}
