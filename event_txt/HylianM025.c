-------- EventFlow: HylianM025 --------

Actor: HylianM025
entrypoint: None()
actions: ['Talk', 'GenericTalkSequenceWithDialog', 'SetFacialExpression', 'PlayAnimationNoWait', 'SkipAutoTurn', 'LookAtTalker', 'AimPlayer', 'SetInstanceVariableBool', 'PlayAnimation', 'SetInterestIkEnabled', 'AimActor']
queries: ['GetInstanceVariableBool']
params: None

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag']
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor']
queries: ['CheckOutfit']
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Partner
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE']
queries: []
params: None

void talk010() {
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/HylianGeneralTalk:HylianM025Talk010_010'}) {

        fork {
            HylianM025.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
        } {
            HylianM025.AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Player.AimActor({'actor': ActorIdentifier(name="HylianM025"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        HylianM025.PlayAnimationNoWait({'name': 'surprised_st01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HylianM025.SetFacialExpression({'expression': 'surprise'})
        HylianM025.Talk({'message': 'scenario/HylianGeneralTalk:HylianM025Talk010_010', 'getAttention': False})
        HylianM025.SetFacialExpression({'expression': 'smile'})
        HylianM025.PlayAnimationNoWait({'name': 'yes01,wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HylianM025.Talk({'message': 'scenario/HylianGeneralTalk:HylianM025Talk010_020', 'getAttention': False})
        HylianM025.SkipAutoTurn()
    } else {

        fork {
            HylianM025.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianM025Talk010_020', 'facial': 'smile', 'selfTalkAnimName': 'yes01,wait01', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_HYL_M004_1_001', 'volume': 1.0, 'pitch': 1.0})
        }

        HylianM025.SkipAutoTurn()
    }
}

void talk020() {
    HylianM025.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/HylianGeneralTalk:HylianM025Talk020_010', 'selfTalkAnimName': '', 'facial': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianM025.SetFacialExpression({'expression': 'sad'})
    HylianM025.Talk({'message': 'scenario/HylianGeneralTalk:HylianM025Talk020_020', 'getAttention': False})
    HylianM025.SkipAutoTurn()
}

void talk030() {
    HylianM025.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'facial': '', 'message': 'scenario/HylianGeneralTalk:HylianM025Talk030_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianM025.SkipAutoTurn()
}

void talk040() {
    HylianM025.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'scenario/HylianGeneralTalk:HylianM025Talk040_010', 'facial': 'smile', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianM025.SkipAutoTurn()
}

void talkSec() {
    HylianM025.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnimName': '', 'facial': '', 'message': 'scenario/HylianGeneralTalk:HylianM025TalkSecretlyClothes_010', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    HylianM025.SkipAutoTurn()
}

void ZolQuest() {
    HylianM025.SetInterestIkEnabled({'enable': False})
    if !HylianM025.GetInstanceVariableBool({'name': 'First'}) {

        fork {
            HylianM025.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Player.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="HylianM025"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Partner.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="HylianM025"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="HylianM025"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
        }

        if Player.CheckOutfit({'outfit': 'Adventure1'}) {
            Timer.Wait({'time': 0.699999988079071})
            HylianM025.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_200', 'getAttention': False})
            Event36:

            fork {
                HylianM025.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_210', 'getAttention': True})
            } {
                HylianM025.SetFacialExpression({'expression': 'normal'})
            } {
                HylianM025.PlayAnimation({'name': 'yes01,talk09', 'layer': 0, 'blendFrame': -1, 'restart': False})
            } {
                HylianM025.AimActor({'duration': 0.4000000059604645, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
            } {
                Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="HylianM025"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
            }


            fork {
                HylianM025.SetFacialExpression({'expression': 'smile'})
            } {
                HylianM025.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_220', 'getAttention': False})
            } {
                HylianM025.PlayAnimation({'name': 'talk03', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

            HylianM025.SkipAutoTurn()
            HylianM025.SetInstanceVariableBool({'name': 'First', 'value': True})
        } else {
            Timer.Wait({'time': 0.699999988079071})
            HylianM025.Talk({'message': 'quest/QuestAreaA:Bring_Forest065_205', 'getAttention': False})
            goto Event36
        }
    } else {
        goto Event36
    }
}
