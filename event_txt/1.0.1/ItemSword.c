-------- EventFlow: ItemSword --------

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['GenericItemGetSequence', 'AddItem']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AddPasteEnergy', 'LookAtTalker']
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
queries: []
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Reset']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['MoveToTargetActor', 'AimPlayer', 'Talk', 'GenericTalkSequenceWithDialog', 'PlayAnimation']
queries: []
params: None

void Message() {
    Dialog.Show({'message': 'scenario/StoryAreaA:PasteLinkGet_010'})
}

void Get() {

    call EvResetCommon.AllReset()

    Zelda.GenericItemGetSequence({'itemKey': 'Sword', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})

    fork {
        Partner[companion].AimPlayer({'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        Partner[companion].MoveToTargetActor({'speed': 1, 'withoutTurn': True, 'actor': ActorIdentifier(name="Partner"), 'offsetY': 0.0, 'distance': -0.5, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0})
    } {
        Player.LookAtTalker({'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    }


    fork {
        Partner[companion].GenericTalkSequenceWithDialog({'message': 'scenario/StoryAreaA:PasteLinkGet_020', 'aimToPlayer': False, 'playerTalkAnim': False, 'keepPersonalSpace': False, 'cameraLookAt': False, 'aimFromPlayer': False, 'selfTalkAnimName': 'talk02', 'selfTalkAnim': True, 'playerTalkAnimName': '', 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    } {
        Timer.Wait({'time': 0.4000000059604645})

        call GeneralSequence.Look_at_Partner()

    }

    Partner[companion].Talk({'message': 'scenario/StoryAreaA:LookLinkBarricade_010', 'getAttention': False})
    Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Timer.Wait({'time': 0.5})
    Zelda.AddItem({'itemKey': 'Sword', 'autoEquip': True, 'count': 1, 'index': -1})
    Player.AddPasteEnergy({'amount': 50})
    EventVariables.SetVariable({'symbol': 'HyruleCastle_LuberiHouse:35784108'})
    EventFlags.SetFlag({'value': True, 'symbol': 'PasteLinkUnLock'})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    Timer.Wait({'time': 0.5})
}

void MessageLv2() {
    Dialog.Show({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_SwordLv2'})
}

void MessageLv3() {
    Dialog.Show({'message': 'scenario/StoryAreaA:Luberi_LvUpTalk_SwordLv3'})
}
