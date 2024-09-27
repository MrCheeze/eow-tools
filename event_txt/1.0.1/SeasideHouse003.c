-------- EventFlow: SeasideHouse003 --------

Actor: ZoraRiver008
entrypoint: None()
actions: ['SetFacialExpression', 'PlayAnimation', 'Talk', 'GenericTalkSequenceWithDialog', 'PlayAnimationNoWait', 'AimActor', 'SetInterestIkEnabled', 'AimDegreeAngle']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['AddItemAndGenericItemGetSequence']
queries: []
params: None

void Quest_4() {

    call EvResetCommon.AllResetNowait()

    ZoraRiver008.SetInterestIkEnabled({'enable': False})
    ZoraRiver008.PlayAnimationNoWait({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Player.AimActor({'duration': 0.0, 'actor': ActorIdentifier(name="ZoraRiver008"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraRiver008.AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.0, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraRiver008.SetFacialExpression({'expression': 'smile'})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="ZoraRiver008"), 'actor2': ActorIdentifier(name="Player"), 'duration': 0.0, 'weight1': 1.0, 'weight2': 1.0, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Timer.Wait({'time': 1.0})
    Fade.StartPreset({'preset': 'FadeInNormal'})

    fork {
        ZoraRiver008.Talk({'message': 'quest/QuestAreaB:LostShip_Coast020_080', 'getAttention': False})
    } {
        ZoraRiver008.PlayAnimationNoWait({'name': 'yes01,laugh01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        ZoraRiver008.Talk({'message': 'quest/QuestAreaB:LostShip_Coast020_090', 'getAttention': False})
    } {
        ZoraRiver008.SetFacialExpression({'expression': 'normal'})
    } {
        ZoraRiver008.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        ZoraRiver008.Talk({'message': 'quest/QuestAreaB:LostShip_Coast020_100', 'getAttention': False})
    } {
        ZoraRiver008.PlayAnimation({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver008.SetFacialExpression({'expression': 'sad'})
    }

    ZoraRiver008.SetInterestIkEnabled({'enable': False})

    fork {
        ZoraRiver008.Talk({'message': 'quest/QuestAreaB:LostShip_Coast020_110', 'getAttention': False})
    } {
        ZoraRiver008.PlayAnimation({'name': 'no01,talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver008.SetFacialExpression({'expression': 'angry'})
    }


    fork {
        ZoraRiver008.Talk({'message': 'quest/QuestAreaB:LostShip_Coast020_120', 'getAttention': False})
    } {
        ZoraRiver008.PlayAnimation({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver008.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        ZoraRiver008.Talk({'message': 'quest/QuestAreaB:LostShip_Coast020_130', 'getAttention': False})
    } {
        ZoraRiver008.PlayAnimation({'name': 'frightened02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver008.SetFacialExpression({'expression': 'sad'})
    }


    fork {
        ZoraRiver008.Talk({'message': 'quest/QuestAreaB:LostShip_Coast020_140', 'getAttention': False})
    } {
        ZoraRiver008.PlayAnimation({'name': 'think01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver008.SetFacialExpression({'expression': 'sleep'})
    }


    fork {
        ZoraRiver008.Talk({'message': 'quest/QuestAreaB:LostShip_Coast020_150', 'getAttention': False})
    } {
        ZoraRiver008.PlayAnimationNoWait({'name': 'happy01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver008.SetFacialExpression({'expression': 'angry'})
    }


    fork {
        ZoraRiver008.Talk({'message': 'quest/QuestAreaB:LostShip_Coast020_160', 'getAttention': False})
    } {
        ZoraRiver008.PlayAnimation({'name': 'yes01,talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        ZoraRiver008.SetFacialExpression({'expression': 'smile'})
    }

    ZoraRiver008.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Zelda.AddItemAndGenericItemGetSequence({'itemKey': 'SmoothieIngredient01', 'count': 10, 'index': -1, 'autoEquip': False, 'keepRaise': False, 'messageEntry': ''})
    Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Zelda"), 'actor2': ActorIdentifier(name="ZoraRiver008"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    Player.AimActor({'actor': ActorIdentifier(name="ZoraRiver008"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    ZoraRiver008.GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'cameraLookAt': False, 'message': 'quest/QuestAreaB:LostShip_Coast020_170', 'facial': 'smile', 'selfTalkAnimName': 'happy01', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    ZoraRiver008.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        ZoraRiver008.Talk({'message': 'quest/QuestAreaB:LostShip_Coast020_210', 'getAttention': False})
    } {
        ZoraRiver008.SetFacialExpression({'expression': 'angry'})
    } {
        ZoraRiver008.PlayAnimation({'name': 'yes01,talk02', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    ZoraRiver008.PlayAnimation({'name': 'wait01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.10000000149011612})
    ZoraRiver008.AimDegreeAngle({'angle': 270.0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Timer.Wait({'time': 0.5})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Timer.Wait({'time': 2.0})
    ZoraRiver008.Talk({'message': 'quest/QuestAreaB:LostShip_Coast020_220', 'getAttention': False})
    GameControl.RequestLevelJump({'level': 'Field', 'locator': 'EV_Field_LostShip_River010_Complete', 'offsetX': 0.0, 'offsetZ': 0.0})
}
