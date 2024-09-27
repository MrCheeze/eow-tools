-------- EventFlow: TreasureBox --------

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: TreasureBox
entrypoint: None()
actions: ['PlayAnimation', 'GenericGimmickSequence', 'SetActorSwitch', 'PlayAnimationEx', 'PlayTailorOtherChannelNoWait', 'SetRestartPositionToActor', 'PlayTailorOtherChannelEx', 'SetShapeVisibility', 'DestroyCollisionHitActors']
queries: ['CheckPlayerHit']
params: None

Actor: Camera
entrypoint: None()
actions: ['Shake', 'Reset', 'LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayJingleTimeWait', 'PlayOneshotSystemSE', 'StopAllBGM', 'PlayBGM', 'StopRegionBgm']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckMessgaeFlag', 'CheckFlag']
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'GenericItemGetSequence', 'AddItemSerial', 'PlayAnimation', 'SetFacialExpression', 'WarpToActorLinkedPointWithCompassPoint', 'SetInterestIkEnabled', 'MoveToCompassPoint', 'PlayAnimationNoWait', 'AddItem', 'MoveToTargetLinkedPoint', 'DestroyCollisionHitActors']
queries: ['IsInRect']
params: None

Actor: Dialog
entrypoint: None()
actions: ['Show']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump', 'RequestAutoSave', 'ForbidSave']
queries: []
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: ZoraSea005
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'SetFacialExpression', 'PlayAnimationNoWait']
queries: []
params: None

Actor: GreatFairy
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'Talk', 'PlayAnimation', 'SetFacialExpression', 'SetInterestIkEnabled', 'PlayAnimationNoWait', 'AimCompassPoint', 'ResetAim']
queries: ['GetInstanceVariableBool']
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog', 'MoveToBesideTargetActor', 'Talk', 'PlayAnimationNoWait', 'AimCompassPoint', 'PlayAnimation', 'MoveToCompassPoint', 'AimActor', 'SetInterestIkEnabled']
queries: []
params: None

Actor: MapLava
entrypoint: None()
actions: ['LavaOff']
queries: []
params: None

Actor: PatrolGerudoSoldier[1]
entrypoint: None()
actions: ['PlayAnimation', 'AimActor']
queries: []
params: None

Actor: PatrolGerudoSoldier[6]
entrypoint: None()
actions: ['PlayAnimation', 'AimActor']
queries: []
params: None

Actor: PatrolGerudoSoldier[2]
entrypoint: None()
actions: ['PlayAnimation', 'AimActor']
queries: []
params: None

Actor: PatrolGerudoSoldier[3]
entrypoint: None()
actions: ['PlayAnimation', 'AimActor']
queries: []
params: None

Actor: PatrolGerudoSoldier[4]
entrypoint: None()
actions: ['PlayAnimation', 'AimActor']
queries: []
params: None

Actor: PatrolGerudoSoldier[5]
entrypoint: None()
actions: ['PlayAnimation', 'AimActor']
queries: []
params: None

void TreasureBoxAppear() {
    TreasureBox.GenericGimmickSequence({'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0})
    TreasureBox.DestroyCollisionHitActors({'eventReset': True})
    if !TreasureBox.CheckPlayerHit() {
        Event0:
        TreasureBox.PlayAnimation({'name': 'appear', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.2000000476837158})
        Audio.PlayJingleTimeWait({'duration': 1.6799999475479126, 'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
    } else {

        call EvResetCommon.AllReset()

        Player.MoveToCompassPoint({'direction': 0, 'speed': 0, 'withoutTurn': False, 'distance': 3.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Player.DestroyCollisionHitActors({'eventReset': True})
        goto Event0
    }
}

void TreasureBoxOpen() {
    TreasureBox.SetActorSwitch({'switchIndex': 1, 'value': True})

    fork {
        Player.AimActor({'actor': ActorIdentifier(name="TreasureBox"), 'duration': 0.8999999761581421, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        TreasureBox.PlayAnimation({'name': 'open', 'layer': 0, 'blendFrame': -1, 'restart': False})
        TreasureBox.PlayAnimationEx({'name': 'open_wait', 'time': 0.30000001192092896, 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        TreasureBox.PlayTailorOtherChannelNoWait({'channel': 'open', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    }

    Player.GenericItemGetSequence({'itemKey': 'itemKey', 'count': 'itemNum', 'index': 'itemIndex', 'keepRaise': False, 'messageEntry': ''})
    Player.AddItem({'itemKey': 'itemKey', 'count': 'itemNum', 'index': 'itemIndex', 'autoEquip': False})
    GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
}

void L_Dungeon004_013() {

    call EvResetCommon.AllReset()

    if EventFlags.CheckFlag({'symbol': 'EvC_L004_R013Retry'}) in [0, 1] {
        TreasureBox.SetActorSwitch({'switchIndex': 1, 'value': True})

        fork {
            Player.AimActor({'actor': ActorIdentifier(name="TreasureBox"), 'duration': 0.8999999761581421, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            TreasureBox.PlayAnimation({'name': 'open', 'layer': 0, 'blendFrame': -1, 'restart': False})
            TreasureBox.PlayAnimationEx({'name': 'open_wait', 'time': 0.30000001192092896, 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            TreasureBox.PlayTailorOtherChannelNoWait({'channel': 'open', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        }

        Player.GenericItemGetSequence({'itemKey': 'itemKey', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
        Player.AddItemSerial({'itemKey': 'itemKey', 'count': 'itemNum', 'index': 'itemIndex', 'autoEquip': False})
        Player.SetFacialExpression({'expression': 'serious_few'})
        Player.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Audio.StopAllBGM({'duration': 0.5})

        fork {
            Player.PlayAnimation({'name': 'find,$wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Timer.Wait({'time': 0.30000001192092896})
            Player.PlayAnimationNoWait({'name': 'search', 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {

            fork {
                Camera.Shake({'duration': 3.0, 'power': 2})
            } {
                EventFlags.SetFlag({'symbol': 'L004R013MovelavaStart', 'value': True})
            } {
                Timer.Wait({'time': 4.5})
            } {
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_VOLCANO_RUMBLE', 'volume': 1.0, 'pitch': 1.0})
            } {
                Timer.Wait({'time': 0.20000000298023224})
                Partner[companion].PlayAnimation({'name': 'appeal02', 'layer': 0, 'blendFrame': -1, 'restart': False})
                Partner[companion].AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
                Partner[companion].PlayAnimationNoWait({'name': 'lookaround02', 'layer': 0, 'blendFrame': -1, 'restart': False})
            }

            Audio.PlayBGM({'label': 'BGM_VOLCANO_LAVA_ESCAPE', 'volume': 1.0, 'ignoreSkip': True})
            TreasureBox.SetRestartPositionToActor({'direction': 0, 'distance': 1.5, 'stance': 'Ground'})
            EventFlags.SetFlag({'symbol': 'EvC_L004_R013Retry', 'value': True})
            GameControl.RequestAutoSave({'immediate': False, 'needsStartupEvent': False, 'name': '', 'preResetOverwriteCounter': False, 'postResetOverwriteCounter': False})
            Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
            MapLava.LavaOff()
            GameControl.ForbidSave()
        }

    }
}

void Special_Desert010_030() {
    TreasureBox.SetActorSwitch({'switchIndex': 1, 'value': True})

    fork {

        fork {
            Player.AimActor({'actor': ActorIdentifier(name="TreasureBox"), 'duration': 0.8999999761581421, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        } {
            TreasureBox.PlayAnimation({'name': 'open', 'layer': 0, 'blendFrame': -1, 'restart': False})
            TreasureBox.PlayAnimationEx({'name': 'open_wait', 'time': 0.30000001192092896, 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            TreasureBox.PlayTailorOtherChannelNoWait({'channel': 'open', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        }

        Audio.StopRegionBgm({'fadeSec': 1.0})
        Player.GenericItemGetSequence({'itemKey': 'itemKey', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
        Player.AddItemSerial({'itemKey': 'itemKey', 'count': 'itemNum', 'index': 'itemIndex', 'autoEquip': False})
    } {
        PatrolGerudoSoldier[6].AimActor({'duration': 0.800000011920929, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        PatrolGerudoSoldier[6].PlayAnimation({'name': 'surprised_st01,surprised_lp01,', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.0})
        PatrolGerudoSoldier[6].PlayAnimation({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        PatrolGerudoSoldier[1].AimActor({'duration': 0.800000011920929, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        PatrolGerudoSoldier[1].PlayAnimation({'name': 'surprised_st01,surprised_lp01,', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.0})
        PatrolGerudoSoldier[1].PlayAnimation({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        PatrolGerudoSoldier[2].AimActor({'duration': 0.800000011920929, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        PatrolGerudoSoldier[2].PlayAnimation({'name': 'surprised_st01,surprised_lp01,', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.0})
        PatrolGerudoSoldier[2].PlayAnimation({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        PatrolGerudoSoldier[3].AimActor({'duration': 0.800000011920929, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        PatrolGerudoSoldier[3].PlayAnimation({'name': 'surprised_st01,surprised_lp01,', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.0})
        PatrolGerudoSoldier[3].PlayAnimation({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        PatrolGerudoSoldier[4].AimActor({'duration': 0.800000011920929, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        PatrolGerudoSoldier[4].PlayAnimation({'name': 'surprised_st01,surprised_lp01,', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.0})
        PatrolGerudoSoldier[4].PlayAnimation({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        PatrolGerudoSoldier[5].AimActor({'duration': 0.800000011920929, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        PatrolGerudoSoldier[5].PlayAnimation({'name': 'surprised_st01,surprised_lp01,', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.0})
        PatrolGerudoSoldier[5].PlayAnimation({'name': 'sad01', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    Partner[companion].MoveToBesideTargetActor({'speed': 0, 'offsetX': 1.0, 'offsetY': 1.0, 'actor': ActorIdentifier(name="Player"), 'offsetZ': 0.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
    Partner[companion].GenericTalkSequenceWithDialog({'playerTalkAnim': False, 'message': 'scenario/PartnerTalk:Special_Desert010_PartnerTalk_010', 'keepPersonalSpace': False, 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    Partner[companion].Talk({'message': 'scenario/PartnerTalk:Special_Desert010_PartnerTalk_020', 'getAttention': False})
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    GameControl.RequestLevelJump({'level': 'Field', 'locator': 'EV_Special_Desert010_030', 'offsetX': 0.0, 'offsetZ': 0.0})
}

void TreasureBox_Statue_Desert060() {

    fork {
        Player.AimActor({'actor': ActorIdentifier(name="TreasureBox"), 'duration': 0.8999999761581421, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        TreasureBox.PlayAnimation({'name': 'open', 'layer': 0, 'blendFrame': -1, 'restart': False})
        TreasureBox.PlayAnimationEx({'name': 'open_wait', 'time': 0.30000001192092896, 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        TreasureBox.PlayTailorOtherChannelNoWait({'channel': 'open', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    }

    Player.GenericItemGetSequence({'itemKey': 'itemKey', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Player.AddItemSerial({'itemKey': 'itemKey', 'count': 'itemNum', 'index': 'itemIndex', 'autoEquip': False})
    QuestSystem.SetProgress({'symbol': 'Statue_Desert060:2196664136', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void ZoraSea005_TreasureBox() {

    fork {
        Player.AimActor({'actor': ActorIdentifier(name="TreasureBox"), 'duration': 0.8999999761581421, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        TreasureBox.PlayAnimation({'name': 'open', 'layer': 0, 'blendFrame': -1, 'restart': False})
        TreasureBox.PlayAnimationEx({'name': 'open_wait', 'time': 0.30000001192092896, 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        TreasureBox.PlayTailorOtherChannelNoWait({'channel': 'open', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    }

    if !EventFlags.CheckMessgaeFlag({'message': 'quest/QuestAreaB:Treasure_RiverCoast030_080'}) {
        ZoraSea005.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'quest/QuestAreaB:Treasure_RiverCoast030_080', 'selfTalkAnimName': 'surprised_st01,surprised_lp01', 'facial': 'surprise', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        ZoraSea005.SetFacialExpression({'expression': 'smile'})

        fork {
            ZoraSea005.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'selfTalkAnimName': '', 'message': 'quest/QuestAreaB:Treasure_RiverCoast030_090', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        } {
            ZoraSea005.PlayAnimationNoWait({'name': 'talk01', 'layer': 0, 'blendFrame': -1, 'restart': False})
        }

        Event232:
        TreasureBox.PlayAnimation({'name': 'close', 'layer': 0, 'blendFrame': -1, 'restart': False})
        TreasureBox.PlayAnimationEx({'time': 0.30000001192092896, 'name': 'close_wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } else {
        ZoraSea005.GenericTalkSequenceWithDialog({'selfTalkAnim': True, 'playerTalkAnim': False, 'message': 'quest/QuestAreaB:Treasure_RiverCoast030_100', 'facial': 'angry', 'selfTalkAnimName': 'angry01', 'aimToPlayer': True, 'aimFromPlayer': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
        goto Event232
    }
}

void TreasureBoxBreakLock() {
    Timer.Wait({'time': 0.5})
    TreasureBox.GenericGimmickSequence({'lookAtOffsetY': -1.5, 'distanceOffset': -8.0, 'cameraLookAt': True, 'lookAtOffsetX': 0.0, 'lookAtOffsetZ': 0.0})
    Timer.Wait({'time': 0.4000000059604645})

    fork {
        TreasureBox.PlayTailorOtherChannelEx({'channel': 'Unlock', 'time': 1.9160000085830688, 'restart': False, 'index': -1, 'stopOnSkipped': True})
    } {
        Timer.Wait({'time': 1.0})
        TreasureBox.SetShapeVisibility({'shapeName': 'lock__MI_TreasureBoxLock_01', 'visible': False})
    }

    Timer.Wait({'time': 0.30000001192092896})
    Audio.PlayJingleTimeWait({'duration': 1.6799999475479126, 'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
}

void TreasureBoxCanNotOpen() {
    Dialog.Show({'message': 'System:Locked_DoorLock'})
}

void GreatFairy_TreasureBox() {

    call EvResetCommon.AllReset()

    TreasureBox.SetActorSwitch({'switchIndex': 1, 'value': True})

    fork {
        Player.AimActor({'actor': ActorIdentifier(name="TreasureBox"), 'duration': 0.8999999761581421, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
    } {
        TreasureBox.PlayAnimation({'name': 'open', 'layer': 0, 'blendFrame': -1, 'restart': False})
        TreasureBox.PlayAnimationEx({'name': 'open_wait', 'time': 0.30000001192092896, 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        TreasureBox.PlayTailorOtherChannelNoWait({'channel': 'open', 'restart': False, 'index': -1, 'stopOnSkipped': True})
    }

    Player.GenericItemGetSequence({'itemKey': 'itemKey', 'count': 1, 'keepRaise': False, 'messageEntry': '', 'index': -1})
    Player.AddItemSerial({'itemKey': 'itemKey', 'count': 'itemNum', 'index': 'itemIndex', 'autoEquip': False})
    if !GreatFairy.GetInstanceVariableBool({'name': 'isAppearDemo'}) {

        fork {
            if !Player.IsInRect({'minZ': 1.840000033378601, 'minX': 0.0, 'maxX': 5.0, 'maxZ': 5.0}) {
                Timer.Wait({'time': 10.0})
                Player.MoveToTargetLinkedPoint({'speed': 0, 'customSpeed': 0.0, 'index': 1, 'actor': ActorIdentifier(name="GreatFairy"), 'timeOut': 5.0, 'tolerance': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})

                fork {
                    Player.MoveToCompassPoint({'direction': 2, 'speed': 0, 'distance': 0.20000000298023224, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
                } {
                    Partner[companion].MoveToBesideTargetActor({'offsetX': 1.0, 'speed': 0, 'actor': ActorIdentifier(name="Player"), 'offsetZ': 1.0, 'offsetY': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})
                }

                Event267:

                fork {
                    Player.SetInterestIkEnabled({'enable': True})
                    Player.AimActor({'actor': ActorIdentifier(name="GreatFairy"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                } {
                    Partner[companion].SetInterestIkEnabled({'enable': True})
                    Partner[companion].AimActor({'actor': ActorIdentifier(name="GreatFairy"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
                }

            } else {
                Timer.Wait({'time': 10.0})
                Player.WarpToActorLinkedPointWithCompassPoint({'index': 0, 'actor': ActorIdentifier(name="GreatFairy"), 'direction': 2, 'offsetY': 0.0})
                Partner[companion].MoveToBesideTargetActor({'speed': 1, 'offsetX': 1.0, 'offsetY': 1.0, 'actor': ActorIdentifier(name="Player"), 'offsetZ': 1.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0})

                fork {
                    Player.MoveToCompassPoint({'direction': 2, 'speed': 0, 'distance': 2.200000047683716, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
                } {
                    Partner[companion].MoveToCompassPoint({'speed': 0, 'direction': 2, 'distance': 2.200000047683716, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
                }

                goto Event267
            }
        } {

            call GreatFairy.GreatFairyAppear()

        }

    } else {
        Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
    }
    Timer.Wait({'time': 0.5})
    GreatFairy.SetInterestIkEnabled({'enable': False})
    GreatFairy.ResetAim()
    GreatFairy.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    Camera.LookAt2ActorsCenterAsTalker({'weight2': 2.0, 'distanceOffset': 5.0, 'actor1': ActorIdentifier(name="Player"), 'actor2': ActorIdentifier(name="GreatFairy"), 'weight1': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    GreatFairy.GenericTalkSequenceWithDialog({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains010_010', 'playerTalkAnim': False, 'selfTalkAnimName': '', 'cameraLookAt': False, 'selfTalkAnim': True, 'aimToPlayer': False, 'facial': 'scornful_eyes', 'aimFromPlayer': True, 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})

    fork {
        GreatFairy.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains010_020', 'getAttention': False})
    } {
        GreatFairy.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }


    fork {
        GreatFairy.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains010_030', 'getAttention': False})
    } {
        GreatFairy.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GreatFairy.SetFacialExpression({'expression': 'smile'})
    }

    GreatFairy.PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    GreatFairy.SetInterestIkEnabled({'enable': False})

    fork {
        GreatFairy.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains010_040', 'getAttention': False})
    } {
        GreatFairy.PlayAnimation({'name': 'think_st,think_lp', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GreatFairy.SetFacialExpression({'expression': 'scornful_eyes'})
    }

    GreatFairy.PlayAnimationNoWait({'name': 'think_ed,wait', 'layer': 0, 'blendFrame': -1, 'restart': False})

    fork {
        GreatFairy.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains010_050', 'getAttention': False})
    } {
        GreatFairy.SetFacialExpression({'expression': 'grin'})
    } {
        GreatFairy.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    }

    GreatFairy.SetFacialExpression({'expression': 'smile'})
    GreatFairy.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains010_060', 'getAttention': False})
    GreatFairy.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains010_070', 'getAttention': False})

    call GreatFairy_TreasureBox_A1()

}

void GreatFairy_TreasureBox_A1() {

    fork {
        GreatFairy.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains010_120', 'getAttention': False})
    } {
        GreatFairy.SetFacialExpression({'expression': 'grin'})
    }


    fork {
        GreatFairy.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains010_130', 'getAttention': False})
    } {
        GreatFairy.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GreatFairy.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        GreatFairy.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains010_131', 'getAttention': False})
    } {
        GreatFairy.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GreatFairy.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        GreatFairy.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains010_132', 'getAttention': False})
    } {
        GreatFairy.PlayAnimation({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        GreatFairy.SetFacialExpression({'expression': 'normal'})
    }


    fork {
        GreatFairy.Talk({'message': 'quest/QuestAreaPlains:Fairy_HyrulePlains010_145', 'getAttention': False})
    } {
        GreatFairy.SetFacialExpression({'expression': 'normal'})
    }

    GreatFairy.PlayAnimationNoWait({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
    QuestSystem.SetProgress({'symbol': 'Fairy_HyrulePlains010:3537921329', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void L_Dungeon6_R007() {
    Timer.Wait({'time': 0.699999988079071})
    TreasureBox.GenericGimmickSequence({'cameraLookAt': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0})
    TreasureBox.DestroyCollisionHitActors({'eventReset': True})
    if !TreasureBox.CheckPlayerHit() {
        Event179:
        TreasureBox.PlayAnimation({'name': 'appear', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.2000000476837158})
        Audio.PlayJingleTimeWait({'duration': 1.6799999475479126, 'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
    } else {

        call EvResetCommon.AllReset()

        Player.MoveToCompassPoint({'direction': 0, 'speed': 0, 'withoutTurn': False, 'distance': 3.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
        Player.DestroyCollisionHitActors({'eventReset': True})
        goto Event179
    }
}

void TreasureBoxOpen_Castle() {

    call TreasureBoxOpen({'itemKey': 'itemKey', 'itemNum': 'itemNum', 'itemIndex': 'itemIndex'})

    EventFlags.SetFlag({'symbol': 'BossKeyGet_BGMChange', 'value': True})
}
