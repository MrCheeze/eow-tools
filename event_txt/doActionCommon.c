-------- EventFlow: doActionCommon --------

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: ['GetLastResult5', 'GetLastResult', 'GetLastResult4']
params: None

Actor: Zelda
entrypoint: None()
actions: ['AddItem', 'AimActor', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'Reset']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: []
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

Actor: doActionCommon
entrypoint: None()
actions: ['Destroy']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['PlayAnimation', 'Talk', 'PlayAnimationNoWait', 'GenericTalkSequenceWithDialog', 'AimActor', 'AimPlayer']
queries: []
params: None

Actor: BigRock
entrypoint: None()
actions: []
queries: []
params: None

void SyncRodTutorial() {
    if !EventFlags.CheckFlag({'symbol': 'EvAreaA018'}) {
        Zelda.SetInterestIkEnabled({'enable': True})
        Zelda.AimActor({'actor': ActorIdentifier(name="BigRock"), 'withoutTurn': False, 'offsetY': 0.0, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Camera.LookAt2ActorsCenterAsTalker({'offsetX': -1.0, 'offsetY': 1.0, 'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="Partner"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetZ': 0.0})
        Zelda.AimActor({'offsetY': 2.0, 'withoutTurn': False, 'actor': ActorIdentifier(name="BigRock"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 1.0})
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Timer.Wait({'time': 0.5})

        fork {
            Partner[companion].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'keepPersonalSpace': False, 'message': 'scenario/StoryAreaA:GetSyncRod_010', 'selfTalkAnimName': 'think', 'cameraLookAt': False, 'aimFromPlayer': False, 'aimToPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Timer.Wait({'time': 0.5})

            call GeneralSequence.Look_at_Partner()

        }

        Timer.Wait({'time': 0.5})
        Partner[companion].PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:GetSyncRod_020', 'getAttention': False})
        Partner[companion].PlayAnimation({'name': 'appeal', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].PlayAnimationNoWait({'name': 'talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Partner[companion].Talk({'message': 'scenario/StoryAreaA:GetSyncRod_040', 'getAttention': False})
        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.5})

        fork {
            Zelda.AimActor({'actor': ActorIdentifier(name="BigRock"), 'offsetY': 2.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Timer.Wait({'time': 0.20000000298023224})
            Partner[companion].AimActor({'actor': ActorIdentifier(name="BigRock"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
        }

        Timer.Wait({'time': 1.0})
        Zelda.AddItem({'autoEquip': True, 'itemKey': 'SyncRod', 'count': 1, 'index': -1})
        EventFlags.SetFlag({'value': True, 'symbol': 'EvAreaA018'})
        EventFlags.SetFlag({'value': True, 'symbol': 'TutorialInsert_SyncRod'})
        doActionCommon.Destroy()
    } else {
        doActionCommon.Destroy()
    }
}

void GerudoMiniGame() {
    Dialog.Show({'message': 'Signboard:Desert030'})
}

void LuberisDiary() {
    Dialog.Show({'message': 'scenario/StoryAreaA:LuberisDiary_Q1'})
    switch Dialog.GetLastResult5({'resultOnSkip': 4}) {
      case 0:

        call _LuberisDiary_Page01()

      case 1:

        call _LuberisDiary_Page02()

      case 2:

        call _LuberisDiary_Page03()

      case 3:

        call _LuberisDiary_Q2()

    }
}

void CondesHouseBook() {
    if !EventFlags.CheckFlag({'symbol': 'EvG_FreblazeDead'}) {
        Dialog.Show({'message': 'scenario/StoryAreaG:CondesHouseBook_010'})
    } else {
        Dialog.Show({'message': 'scenario/StoryAreaG:CondesHouseBook_030'})
    }
}

void _LuberisDiary_Page01() {
    Dialog.Show({'message': 'scenario/StoryAreaA:LuberisDiary_Q1_A1_010'})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        call _LuberisDiary_Page02()

    } else {

        call LuberisDiary()

    }
}

void _LuberisDiary_Page02() {
    Dialog.Show({'message': 'scenario/StoryAreaA:LuberisDiary_Q1_A2_010'})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        call _LuberisDiary_Page03()

    } else {

        call LuberisDiary()

    }
}

void _LuberisDiary_Page03() {
    Dialog.Show({'message': 'scenario/StoryAreaA:LuberisDiary_Q1_A3_010'})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        call _LuberisDiary_Page04()

    } else {

        call LuberisDiary()

    }
}

void _LuberisDiary_Page04() {
    Dialog.Show({'message': 'scenario/StoryAreaA:LuberisDiary_Q2_A1_010'})
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        call _LuberisDiary_Page05()

    } else {

        call _LuberisDiary_Q2()

    }
}

void _LuberisDiary_Page05() {
    Dialog.Show({'message': 'scenario/StoryAreaA:LuberisDiary_Q2_A2_010'})

    call LuberisDiary()

}

void _LuberisDiary_Q2() {
    Dialog.Show({'message': 'scenario/StoryAreaA:LuberisDiary_Q2'})
    switch Dialog.GetLastResult4({'resultOnSkip': 3}) {
      case 0:

        call _LuberisDiary_Page04()

      case 1:

        call _LuberisDiary_Page05()

      case 2:

        call LuberisDiary()

    }
}

void HebraMountainExamineTomb() {
    Partner[companion].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/StoryAreaG:HebraMountainExamineTomb_020', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    EventFlags.SetFlag({'value': True, 'symbol': 'HebraMountainExamineTomb'})
}

void Ranch010() {
    Dialog.Show({'message': 'Signboard:Ranch010'})
}
