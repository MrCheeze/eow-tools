-------- EventFlow: HylianF001 --------

Actor: HylianF001
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimationNoWait', 'SetInterestIkEnabled', 'SetFacialExpression', 'SkipAutoTurn', 'AimToInitialAngle']
queries: []
params: None

Actor: HylianF003
entrypoint: None()
actions: ['Talk', 'SetFacialExpression', 'PlayAnimationNoWait', 'SetInterestIkEnabled', 'AimPlayer', 'SkipAutoTurn', 'AimToInitialAngle']
queries: ['GetInstanceVariableBool']
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker', 'SetTalkCameraMode', 'Reset']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['SetInterestIkEnabled']
queries: []
params: None

void talk() {
    if HylianF003.GetInstanceVariableBool({'name': 'ZeldaReturn'}) {
        Camera.SetTalkCameraMode({'isFar': True})
    }

    fork {
        HylianF001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'talk01_B', 'selfTalkAnim': True, 'message': 'scenario/HylianGeneralTalk:HylianF001Talk01_010', 'facial': 'smile', 'keepPersonalSpace': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        if !HylianF003.GetInstanceVariableBool({'name': 'ZeldaReturn'}) {
            HylianF003.SetFacialExpression({'expression': 'smile'})
            HylianF003.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }
    }

    if !HylianF003.GetInstanceVariableBool({'name': 'ZeldaReturn'}) {
        HylianF003.SetFacialExpression({'expression': 'sad'})
    }
    HylianF001.SetFacialExpression({'expression': 'angry'})
    HylianF001.Talk({'message': 'scenario/HylianGeneralTalk:HylianF001Talk01_020', 'getAttention': False})
    if !HylianF003.GetInstanceVariableBool({'name': 'ZeldaReturn'}) {

        fork {
            HylianF003.AimToInitialAngle({'duration': 0.20000000298023224, 'withoutTurn': False, 'immediateTurn': False})
        } {
            HylianF001.AimToInitialAngle({'duration': 0.20000000298023224, 'withoutTurn': False, 'immediateTurn': False})
        } {
            Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
        }

    } else {
        HylianF003.SkipAutoTurn()
        HylianF001.SkipAutoTurn()
    }
}

void talk2() {

    fork {
        HylianF001.GenericTalkSequenceWithDialog({'message': 'scenario/HylianGeneralTalk:HylianF001Talk02_010', 'selfTalkAnimName': 'talk01_B', 'aimToPlayer': False, 'playerTalkAnim': False, 'cameraLookAt': False, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HylianF001"), 'actor2': ActorIdentifier(name="HylianF003"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        HylianF001.SetInterestIkEnabled({'enable': False})
    } {
        HylianF003.SetInterestIkEnabled({'enable': False})
    } {
        Player.SetInterestIkEnabled({'enable': True})
    }

    HylianF001.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF003.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF003.SetFacialExpression({'expression': 'sad'})
    HylianF003.Talk({'message': 'scenario/HylianGeneralTalk:HylianF001Talk02_020', 'getAttention': True})
    HylianF003.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF001.PlayAnimationNoWait({'name': 'talk01_B', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF001.Talk({'message': 'scenario/HylianGeneralTalk:HylianF001Talk02_030', 'getAttention': True})
}

void talk030() {

    fork {
        HylianF001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianF001Talk030_010', 'facial': 'smile', 'selfTalkAnim': False, 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        HylianF003.SetFacialExpression({'expression': 'smile'})
        HylianF003.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        HylianF003.AimToInitialAngle({'duration': 0.20000000298023224, 'withoutTurn': False, 'immediateTurn': False})
    } {
        HylianF001.AimToInitialAngle({'duration': 0.20000000298023224, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    }

}

void talk040() {

    fork {
        HylianF001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianF001Talk040_010', 'facial': '', 'selfTalkAnim': False, 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        HylianF003.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    }


    fork {
        HylianF003.AimToInitialAngle({'duration': 0.20000000298023224, 'withoutTurn': False, 'immediateTurn': False})
    } {
        HylianF001.AimToInitialAngle({'duration': 0.20000000298023224, 'withoutTurn': False, 'immediateTurn': False})
    } {
        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    }

}

void TalkSecretlyClothes() {

    fork {
        Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HylianF001"), 'actor2': ActorIdentifier(name="HylianF003"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        HylianF001.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianF001TalkSecretlyClothes_010', 'aimToPlayer': False, 'cameraLookAt': False, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'facial': 'angry', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        HylianF001.SetInterestIkEnabled({'enable': False})
    } {
        HylianF003.SetInterestIkEnabled({'enable': False})
    } {
        Player.SetInterestIkEnabled({'enable': True})
    }


    fork {
        HylianF003.Talk({'message': 'scenario/HylianGeneralTalk:HylianF001TalkSecretlyClothes_020', 'getAttention': True})
    } {
        HylianF003.PlayAnimationNoWait({'name': 'think02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        HylianF001.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HylianF001.PlayAnimationNoWait({'name': 'talk01_B', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF001.Talk({'message': 'scenario/HylianGeneralTalk:HylianF001TalkSecretlyClothes_030', 'getAttention': True})
    HylianF001.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF003.SetFacialExpression({'expression': 'sad'})
    HylianF003.Talk({'message': 'scenario/HylianGeneralTalk:HylianF001TalkSecretlyClothes_040', 'getAttention': True})
    HylianF001.PlayAnimationNoWait({'name': 'talk01_B', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF001.Talk({'message': 'scenario/HylianGeneralTalk:HylianF001TalkSecretlyClothes_050', 'getAttention': True})
}
