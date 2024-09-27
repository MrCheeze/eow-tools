-------- EventFlow: Deku011 --------

Actor: Deku011
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimationNoWait', 'AimPlayer', 'AimActor', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Deku020
entrypoint: None()
actions: ['Talk', 'GenericTalkSequenceWithDialog', 'PlayAnimationNoWait', 'AimPlayer', 'AimActor', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
params: None

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckFlag']
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'KeepDistanceFromActor', 'SetInterestIkEnabled']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

void talk010() {

    fork {
        Deku011.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku020"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku020.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku011"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku011.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkDeku:Deku011Talk010_010', 'aimFromPlayer': True, 'aimToPlayer': False, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku011"), 'actor2': ActorIdentifier(name="Deku020"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Player.SetInterestIkEnabled({'enable': True})
    } {
        Player.KeepDistanceFromActor({'distance': 1.7000000476837158, 'actor': ActorIdentifier(name="Deku020"), 'timeout': 0.75})
    }

    Deku011.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku020.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku020.Talk({'message': 'scenario/GeneralTalkDeku:Deku011Talk010_020', 'getAttention': True})
    Deku020.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku011.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku011.Talk({'message': 'scenario/GeneralTalkDeku:Deku011Talk010_030', 'getAttention': True})
    Deku011.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    if EventFlags.CheckFlag({'symbol': 'EvF_ApproachEntranceRuins_Clear'}) {
        Deku011.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Deku011.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Deku011.Talk({'message': 'scenario/GeneralTalkDeku:Deku011Talk010_Q1', 'getAttention': True})
        if !Dialog.GetLastResult({'resultOnSkip': 1}) {
            Deku011.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Deku020.AimPlayer({'withoutTurn': False, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Deku020.SetInterestIkEnabled({'enable': False})
            Deku020.PlayAnimationNoWait({'name': 'no01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Deku020.Talk({'message': 'scenario/GeneralTalkDeku:Deku011Talk010_Q1_A1_010', 'getAttention': True})
            Deku020.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Deku020.AimPlayer({'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            Deku020.PlayAnimationNoWait({'name': 'panic', 'layer': 0, 'blendFrame': -1, 'restart': False})

            fork {
                Deku020.Talk({'message': 'scenario/GeneralTalkDeku:Deku011Talk010_Q1_A1_020', 'getAttention': True})
            } {
                Timer.Wait({'time': 1.600000023841858})
                Audio.PlayOneshotSystemSE({'label': 'VO_DKN_1_5_006_004', 'volume': 1.0, 'pitch': 1.0})
            }

            Deku020.SetInterestIkEnabled({'enable': True})
        } else {
            Deku011.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Deku011.Talk({'message': 'scenario/GeneralTalkDeku:Deku011Talk010_Q1_A2_010', 'getAttention': True})
        }
    }
}

void talk020() {

    fork {
        Deku011.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku020"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku020.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="Deku011"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku020.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/GeneralTalkDeku:Deku011Talk020_010', 'aimToPlayer': False, 'cameraLookAt': False, 'selfTalkAnim': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku011"), 'actor2': ActorIdentifier(name="Deku020"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Player.SetInterestIkEnabled({'enable': True})
    } {
        Player.KeepDistanceFromActor({'distance': 1.7000000476837158, 'actor': ActorIdentifier(name="Deku011"), 'timeout': 0.75})
    }

    Deku020.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku011.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku011.Talk({'message': 'scenario/GeneralTalkDeku:Deku011Talk020_020', 'getAttention': True})
    Deku011.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku020.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku020.Talk({'message': 'scenario/GeneralTalkDeku:Deku011Talk020_030', 'getAttention': True})
    Deku020.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku011.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Deku011.Talk({'message': 'scenario/GeneralTalkDeku:Deku011Talk020_040', 'getAttention': True})
}

void talk030() {

    fork {
        Deku020.GenericTalkSequenceWithDialog({'message': 'scenario/GeneralTalkDeku:Deku011Talk030_010', 'aimToPlayer': False, 'playerTalkAnim': False, 'cameraLookAt': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Deku020.SetInterestIkEnabled({'enable': False})
        Deku020.AimActor({'actor': ActorIdentifier(name="Deku011"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Deku011.SetInterestIkEnabled({'enable': False})
        Deku011.AimActor({'actor': ActorIdentifier(name="Deku020"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.SetInterestIkEnabled({'enable': True})
        Player.AimActor({'offsetY': 0.0, 'offsetX': 1.0, 'actor': ActorIdentifier(name="Deku020"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Player.KeepDistanceFromActor({'distance': 1.7000000476837158, 'actor': ActorIdentifier(name="Deku011"), 'timeout': 0.75})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Deku020"), 'actor2': ActorIdentifier(name="Deku011"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    }


    fork {
        Deku011.Talk({'message': 'scenario/GeneralTalkDeku:Deku011Talk030_020', 'getAttention': True})
    } {
        Deku011.PlayAnimationNoWait({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku020.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Deku020.Talk({'message': 'scenario/GeneralTalkDeku:Deku011Talk030_030', 'getAttention': True})
    } {
        Deku020.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        Deku011.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku020.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Deku011.Talk({'message': 'scenario/GeneralTalkDeku:Deku011Talk030_040', 'getAttention': True})
    }

}
