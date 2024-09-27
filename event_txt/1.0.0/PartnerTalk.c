-------- EventFlow: PartnerTalk --------

Actor: Dialog
entrypoint: None()
actions: []
queries: ['GetLastResult']
params: None

Actor: EventFlags
entrypoint: None()
actions: []
queries: ['CheckMessgaeFlag', 'CheckFlag']
params: None

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['RequestLevelJump', 'UnforbidSave']
queries: []
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['GenericTalkSequenceWithDialog']
queries: []
params: None

void Link_Forest010_PartnerTalk() {
    QuestSystem.SetProgress({'symbol': 'Link_Forest010:2860014776', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Fairy_HyrulePlains010_PartnerTalk() {

    call Goron012.Fairy_HyrulePlains010_Goron030()

}

void EnemyDefeat_Desert010() {
    QuestSystem.SetProgress({'symbol': 'EnemyDefeat_Desert010:4079328311', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void rod() {
    Partner[companion].GenericTalkSequenceWithDialog({'cameraLookAt': False, 'selfTalkAnim': True, 'playerTalkAnim': False, 'aimToPlayer': True, 'message': 'scenario/PartnerTalk:GetTheRod_010', 'aimFromPlayer': True, 'selfTalkAnimName': '', 'playerTalkAnimName': '', 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
}

void Link_HyrulePlains010_PartnerTalk() {
    QuestSystem.SetProgress({'symbol': 'Link_HyrulePlains010:1157156974', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Enemy_Jungle050() {
    QuestSystem.SetProgress({'symbol': 'Enemy_Jungle050:3896172178', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Carry_Snowmountain010() {
    QuestSystem.SetProgress({'symbol': 'Carry_Snowmountain010:1118699330', 'isShowTelopInEvent': False, 'isFrontFade': False})
}

void Warp_L_Dungeon1() {
    if !EventFlags.CheckMessgaeFlag({'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_010'}) {

        call GatePartnerPhoton._1st()

    } else {
        Partner[companion].GenericTalkSequenceWithDialog({'selfTalkAnimName': 'think', 'playerTalkAnim': False, 'message': 'scenario/PartnerTalk:ConfirmationGatePhotonUse_035', 'aimToPlayer': True, 'aimFromPlayer': True, 'selfTalkAnim': True, 'playerTalkAnimName': '', 'cameraLookAt': True, 'keepPersonalSpace': True, 'distanceOffset': 0.0, 'lookAtOffsetX': 0.0, 'lookAtOffsetY': 0.0, 'lookAtOffsetZ': 0.0, 'facial': '', 'unmorph': True, 'disableSyncRodBallFollow': True, 'absorbAllPastedActors': True, 'unsync': True, 'unburrow': True, 'destroyCarriedActor': True, 'stopBurnEffect': True, 'stopBuffEffect': True, 'hideItems': True, 'destroyProjectiles': True, 'resetOverlappedActorsOnMoveDone': True, 'throughObstaclesOnMove': True, 'keepTalk': False, 'isExcludeLocked': False})
    }
    if !Dialog.GetLastResult({'resultOnSkip': 1}) {

        call GatePartnerPhoton._jump()

        EventVariables.SetVariable({'symbol': 'HyruleCastle_LuberiHouse:2882514372'})
        if !EventFlags.CheckFlag({'symbol': 'EvAreaA014'}) {
            GameControl.UnforbidSave()
            GameControl.RequestLevelJump({'level': 'Field', 'locator': 'EV_MinisterTalk', 'offsetX': 0.0, 'offsetZ': 0.0})
        } else {
            GameControl.RequestLevelJump({'level': 'Field', 'locator': 'L_Dungeon001_after', 'offsetX': 0.0, 'offsetZ': 0.0})
        }
    }
}

void WarpMarkerTouch() {

    call AreaExitCommon.WarpOut({'level': 'level', 'locator': 'location'})

}
