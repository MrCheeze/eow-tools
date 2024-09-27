-------- EventFlow: HyruleSoldier009 --------

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

Actor: HyruleSoldier009
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'SetInstanceVariableBool', 'Talk', 'PlayAnimationNoWait', 'PlayAnimation', 'SetFacialExpression']
queries: ['GetInstanceVariableBool']
params: None

Actor: HyruleSoldier008
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'SetFacialExpression', 'PlayOneshotSE', 'PlayAnimation', 'ResetFacialExpression']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE']
queries: []
params: None

void talk() {
    if !HyruleSoldier009.GetInstanceVariableBool({'name': 'Talk010Check'}) {
        HyruleSoldier009.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'scenario/HylianGeneralTalk:HylianSoldier009Talk010_010', 'selfTalkAnimName': '', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        HyruleSoldier009.PlayAnimationNoWait({'name': 'salute_st,salute_talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier009.Talk({'message': 'scenario/HylianGeneralTalk:HylianSoldier009Talk010_020', 'getAttention': False})
        HyruleSoldier009.PlayAnimation({'name': 'salute_ed', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier009.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier009.SetFacialExpression({'expression': 'sleep'})
        HyruleSoldier009.Talk({'message': 'scenario/HylianGeneralTalk:HylianSoldier009Talk010_030', 'getAttention': False})
        HyruleSoldier009.SetInstanceVariableBool({'name': 'Talk010Check', 'value': True})
    } else {

        fork {
            HyruleSoldier009.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'selfTalkAnim': True, 'message': 'scenario/HylianGeneralTalk:HylianSoldier009Talk010_020', 'selfTalkAnimName': 'salute_st,salute_talk', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            Audio.PlayOneshotSystemSE({'label': 'VO_HYL_SOL_001', 'volume': 1.0, 'pitch': 1.0})
        }

        HyruleSoldier009.PlayAnimation({'name': 'salute_ed', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier009.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier009.SetFacialExpression({'expression': 'sleep'})
        HyruleSoldier009.Talk({'message': 'scenario/HylianGeneralTalk:HylianSoldier009Talk010_030', 'getAttention': False})
    }
}

void SoldiersSearchPlain010() {

    call EvResetCommon.AllReset()

    HyruleSoldier009.PlayAnimationNoWait({'name': 'no,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier008.Talk({'message': 'scenario/StoryAreaA:SoldiersSearchPlain010_005', 'getAttention': False})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="HyruleSoldier008"), 'actor2': ActorIdentifier(name="HyruleSoldier009"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    HyruleSoldier009.Talk({'message': 'scenario/StoryAreaA:SoldiersSearchPlain010_010', 'getAttention': False})
    HyruleSoldier008.PlayAnimationNoWait({'name': 'think', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier008.SetFacialExpression({'expression': 'sleep'})
    HyruleSoldier008.Talk({'message': 'scenario/StoryAreaA:SoldiersSearchPlain010_020', 'getAttention': False})

    fork {
        HyruleSoldier009.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
        HyruleSoldier009.Talk({'message': 'scenario/StoryAreaA:SoldiersSearchPlain010_030', 'getAttention': False})
    } {
        Timer.Wait({'time': 0.5})
        HyruleSoldier008.SetFacialExpression({'expression': 'wait'})
    }

    HyruleSoldier009.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier008.SetFacialExpression({'expression': 'sad'})
    HyruleSoldier008.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier008.Talk({'message': 'scenario/StoryAreaA:SoldiersSearchPlain010_040', 'getAttention': False})
    HyruleSoldier008.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier009.PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    HyruleSoldier009.Talk({'message': 'scenario/StoryAreaA:SoldiersSearchPlain010_050', 'getAttention': False})
    HyruleSoldier009.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        HyruleSoldier008.ResetFacialExpression()
        HyruleSoldier008.PlayAnimation({'name': 'yes,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Timer.Wait({'time': 0.5})
        HyruleSoldier008.PlayOneshotSE({'label': 'VO_HYL_SOL_001_006', 'volume': 1.0, 'pitch': 1.0})
    }

}
