-------- EventFlow: LinkBarricade --------

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

void LookLinkBarricade() {

    call EvResetCommon.AllReset()

    EventFlags.SetFlag({'symbol': 'TutorialInsert_ChangeLinkSword', 'value': True})
    EventVariables.SetVariable({'symbol': 'HyruleCastle_LuberiHouse:3287624113'})
}
