-------- EventFlow: HylianMC004 --------

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag']
params: None

Actor: HylianF022
entrypoint: None()
actions: ['Talk', 'SetFacialExpression', 'PlayAnimationNoWait', 'AimActor', 'AimPlayer', 'PlayAnimation', 'SkipAutoTurn']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt3ActorsCenterAsTalker']
queries: []
params: None

Actor: HylianMC004
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'AimActor', 'AimPlayer', 'SetFacialExpression', 'PlayAnimationNoWait', 'ResetFacialExpression', 'SkipAutoTurn']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

void talk010() {
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/HylianGeneralTalk:HylianMC004Talk010_010'}) {
        HylianMC004.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'happy02', 'message': 'scenario/HylianGeneralTalk:HylianMC004Talk010_010', 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        HylianMC004.Talk({'message': 'scenario/HylianGeneralTalk:HylianMC004Talk010_020', 'getAttention': False})
        Event10:
        Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HylianMC004"), 'actor2': ActorIdentifier(name="Zelda"), 'actor3': ActorIdentifier(name="HylianF022"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        HylianF022.AimActor({'actor': ActorIdentifier(name="HylianMC004"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        HylianF022.SetFacialExpression({'expression': 'surprise'})
        HylianF022.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})

        fork {
            HylianF022.Talk({'message': 'scenario/HylianGeneralTalk:HylianMC004Talk010_030', 'getAttention': False})
        } {
            HylianMC004.ResetFacialExpression()
            HylianMC004.AimActor({'actor': ActorIdentifier(name="HylianF022"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Zelda.AimActor({'actor': ActorIdentifier(name="HylianF022"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            HylianMC004.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        HylianF022.SetFacialExpression({'expression': 'sad'})
        HylianF022.PlayAnimation({'name': 'wait10', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HylianF022.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        HylianF022.PlayAnimationNoWait({'name': 'no01,wait10', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HylianF022.Talk({'message': 'scenario/HylianGeneralTalk:HylianMC004Talk010_040', 'getAttention': False})
        HylianMC004.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        HylianMC004.SetFacialExpression({'expression': 'smile'})
        HylianMC004.PlayAnimationNoWait({'name': 'laugh01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HylianMC004"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        HylianMC004.Talk({'message': 'scenario/HylianGeneralTalk:HylianMC004Talk010_050', 'getAttention': False})
        HylianF022.SkipAutoTurn()
        HylianMC004.SkipAutoTurn()
    } else {
        HylianMC004.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'happy02', 'facial': 'smile', 'message': 'scenario/HylianGeneralTalk:HylianMC004Talk010_020', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        goto Event10
    }
}

void talk020() {
    HylianMC004.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'happy02', 'facial': 'smile', 'message': 'scenario/HylianGeneralTalk:HylianMC004Talk020_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianMC004.Talk({'message': 'scenario/HylianGeneralTalk:HylianMC004Talk020_020', 'getAttention': False})
    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HylianMC004"), 'actor2': ActorIdentifier(name="Zelda"), 'actor3': ActorIdentifier(name="HylianF022"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    HylianF022.AimActor({'actor': ActorIdentifier(name="HylianMC004"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianF022.SetFacialExpression({'expression': 'surprise'})
    HylianF022.PlayAnimationNoWait({'name': 'angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianF022.Talk({'message': 'scenario/HylianGeneralTalk:HylianMC004Talk020_030', 'getAttention': False})
    } {
        HylianMC004.ResetFacialExpression()
        HylianMC004.AimActor({'actor': ActorIdentifier(name="HylianF022"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Zelda.AimActor({'actor': ActorIdentifier(name="HylianF022"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HylianMC004.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HylianF022.SetFacialExpression({'expression': 'sad'})
    HylianF022.PlayAnimation({'name': 'wait10', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF022.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianF022.PlayAnimationNoWait({'name': 'no01,wait10', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF022.Talk({'message': 'scenario/HylianGeneralTalk:HylianMC004Talk020_040', 'getAttention': False})
    HylianMC004.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianMC004.SetFacialExpression({'expression': 'smile'})
    HylianMC004.PlayAnimationNoWait({'name': 'laugh01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HylianMC004"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianMC004.Talk({'message': 'scenario/HylianGeneralTalk:HylianMC004Talk020_050', 'getAttention': False})
    HylianF022.SkipAutoTurn()
    HylianMC004.SkipAutoTurn()
}

void talk030() {
    HylianMC004.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'happy02', 'facial': 'smile', 'message': 'scenario/HylianGeneralTalk:HylianMC004Talk030_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HylianMC004"), 'actor2': ActorIdentifier(name="Zelda"), 'actor3': ActorIdentifier(name="HylianF022"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    HylianF022.AimActor({'actor': ActorIdentifier(name="HylianMC004"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianF022.SetFacialExpression({'expression': 'surprise'})
    HylianF022.PlayAnimationNoWait({'name': 'angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianF022.Talk({'message': 'scenario/HylianGeneralTalk:HylianMC004Talk030_020', 'getAttention': False})
    } {
        HylianMC004.ResetFacialExpression()
        HylianMC004.AimActor({'actor': ActorIdentifier(name="HylianF022"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Zelda.AimActor({'actor': ActorIdentifier(name="HylianF022"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HylianMC004.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HylianF022.SetFacialExpression({'expression': 'sad'})
    HylianF022.PlayAnimation({'name': 'wait10', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF022.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianF022.PlayAnimationNoWait({'name': 'no01,wait10', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF022.Talk({'message': 'scenario/HylianGeneralTalk:HylianMC004Talk030_030', 'getAttention': False})
    HylianMC004.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianMC004.SetFacialExpression({'expression': 'smile'})
    HylianMC004.PlayAnimationNoWait({'name': 'laugh01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HylianMC004"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianMC004.Talk({'message': 'scenario/HylianGeneralTalk:HylianMC004Talk030_040', 'getAttention': False})
    HylianF022.SkipAutoTurn()
    HylianMC004.SkipAutoTurn()
}

void talk040() {
    HylianMC004.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianMC004Talk040_010', 'selfTalkAnimName': '', 'facial': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HylianMC004"), 'actor2': ActorIdentifier(name="Zelda"), 'actor3': ActorIdentifier(name="HylianF022"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    HylianF022.AimActor({'actor': ActorIdentifier(name="HylianMC004"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianF022.SetFacialExpression({'expression': 'surprise'})
    HylianF022.PlayAnimationNoWait({'name': 'angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianF022.Talk({'message': 'scenario/HylianGeneralTalk:HylianMC004Talk040_020', 'getAttention': False})
    } {
        HylianMC004.ResetFacialExpression()
        HylianMC004.AimActor({'actor': ActorIdentifier(name="HylianF022"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Zelda.AimActor({'actor': ActorIdentifier(name="HylianF022"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HylianMC004.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HylianF022.SetFacialExpression({'expression': 'sad'})
    HylianF022.PlayAnimation({'name': 'wait10', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF022.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianF022.PlayAnimationNoWait({'name': 'no01,wait10', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF022.Talk({'message': 'scenario/HylianGeneralTalk:HylianMC004Talk040_030', 'getAttention': False})
    HylianMC004.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianMC004.SetFacialExpression({'expression': 'smile'})
    HylianMC004.PlayAnimationNoWait({'name': 'laugh01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HylianMC004"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianMC004.Talk({'message': 'scenario/HylianGeneralTalk:HylianMC004Talk040_040', 'getAttention': False})
    HylianF022.SkipAutoTurn()
    HylianMC004.SkipAutoTurn()
}

void talkSec() {
    HylianMC004.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': 'happy02', 'facial': 'smile', 'message': 'scenario/HylianGeneralTalk:HylianMC004TalkSecretlyClothes_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Camera.LookAt3ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HylianMC004"), 'actor2': ActorIdentifier(name="Zelda"), 'actor3': ActorIdentifier(name="HylianF022"), 'weight1': 1.0, 'weight2': 1.0, 'weight3': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    HylianF022.AimActor({'actor': ActorIdentifier(name="HylianMC004"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianF022.SetFacialExpression({'expression': 'surprise'})
    HylianF022.PlayAnimationNoWait({'name': 'angry01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HylianF022.Talk({'message': 'scenario/HylianGeneralTalk:HylianMC004TalkSecretlyClothes_020', 'getAttention': False})
    } {
        HylianMC004.ResetFacialExpression()
        HylianMC004.AimActor({'actor': ActorIdentifier(name="HylianF022"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        Zelda.AimActor({'actor': ActorIdentifier(name="HylianF022"), 'withoutTurn': True, 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        HylianMC004.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    HylianF022.SetFacialExpression({'expression': 'sad'})
    HylianF022.PlayAnimation({'name': 'wait10', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF022.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianF022.PlayAnimationNoWait({'name': 'no01,wait10', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HylianF022.Talk({'message': 'scenario/HylianGeneralTalk:HylianMC004TalkSecretlyClothes_030', 'getAttention': False})
    HylianMC004.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianMC004.SetFacialExpression({'expression': 'smile'})
    HylianMC004.PlayAnimationNoWait({'name': 'laugh01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.AimActor({'withoutTurn': True, 'actor': ActorIdentifier(name="HylianMC004"), 'duration': 0.4000000059604645, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    HylianMC004.Talk({'message': 'scenario/HylianGeneralTalk:HylianMC004TalkSecretlyClothes_040', 'getAttention': False})
    HylianF022.SkipAutoTurn()
    HylianMC004.SkipAutoTurn()
}
