-------- EventFlow: EV_GoToRevivingWorld --------

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['PlayAnimation', 'AimCompassPoint', 'WarpToActorWithCompassPoint', 'SetEquipmentVisibility', 'SetShadowDecalEnable']
queries: []
params: None

Actor: EvLink
entrypoint: None()
actions: ['WarpToActorWithCompassPoint', 'PlayAnimation', 'Activate', 'SetComponentActive']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Triforce
entrypoint: None()
actions: ['Activate', 'StopTailorOtherChannel']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['ForbidLaunchApplet', 'UnforbidLaunchApplet']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['PlayLocationOriginCameraAnimation']
queries: []
params: None

Actor: EventVariables
entrypoint: None()
actions: ['SetVariable']
queries: []
params: None

Actor: EvPartnerPhotonLargeQuantity[Center]
entrypoint: None()
actions: ['Activate', 'PlayAnimationNoWait', 'SetCullMode']
queries: []
params: None

Actor: EvPartnerPhotonLargeQuantity[Side]
entrypoint: None()
actions: ['Activate', 'PlayAnimationNoWait', 'SetCullMode']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayBGM', 'PlayOneshotSystemSE']
queries: []
params: None

Actor: AreaStartTag[PartnersGainPower]
entrypoint: None()
actions: []
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['WarpToActorWithCompassPoint', 'PlayAnimation', 'SetCullMode', 'PlayTailorOtherChannelNoWait']
queries: []
params: None

void PartnersGainPower() {

    call EvResetCommon.AllResetNowait()

    GameControl.ForbidLaunchApplet()
    EventVariables.SetVariable({'symbol': 'LastDungeon:1388816485'})

    fork {
        Audio.PlayBGM({'label': 'BGM_EV_GO_REVIVNG_WORLD', 'ignoreSkip': False, 'volume': 1.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_EV_RD054_PARTNERS1', 'volume': 1.0, 'pitch': 1.0})
    }

    Zelda.WarpToActorWithCompassPoint({'distance': 0.0, 'offsetY': 0.0, 'offsetX': 0.0, 'direction': 0, 'actor': ActorIdentifier(name="AreaStartTag", sub_name="PartnersGainPower")})
    Partner[companion].WarpToActorWithCompassPoint({'distance': 0.0, 'offsetX': 0.0, 'direction': 0, 'actor': ActorIdentifier(name="AreaStartTag", sub_name="PartnersGainPower"), 'offsetY': 1.190000057220459})
    EvLink.Activate()
    Triforce.Activate()
    EvPartnerPhotonLargeQuantity[Center].Activate()
    EvPartnerPhotonLargeQuantity[Side].Activate()
    EvPartnerPhotonLargeQuantity[Center].SetCullMode({'cullMode': 0, 'enabled': True})
    EvPartnerPhotonLargeQuantity[Side].SetCullMode({'enabled': True, 'cullMode': 0})
    EvLink.WarpToActorWithCompassPoint({'offsetX': 0.0, 'direction': 0, 'actor': ActorIdentifier(name="AreaStartTag", sub_name="PartnersGainPower"), 'distance': 0.0, 'offsetY': 0.0})
    Zelda.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
    EvLink.SetComponentActive({'name': 'PropplayerSword', 'active': False})
    EvLink.SetComponentActive({'active': False, 'name': 'PropplayerShield'})
    Zelda.SetEquipmentVisibility({'visibility': False})
    Zelda.SetShadowDecalEnable({'enable': False})
    Partner[companion].SetCullMode({'cullMode': 0, 'enabled': True})

    fork {
        Camera.PlayLocationOriginCameraAnimation({'aspectRatioCtrl': True, 'path': 'actor/EvLastBossMu_1st_form.bfres', 'name': 'PartnersGainPower_cam', 'location': 'PartnersGainPower_cam', 'offsetX': 0.0, 'offsetY': 0.0, 'chaseRatio': 1.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'farClipDistanceCtrl': False})
    } {
        Timer.Wait({'time': 0.10000000149011612})
        Fade.StartPreset({'preset': 'FadeInNormal'})
    } {
        Timer.Wait({'time': 50.0})
        Fade.StartPreset({'preset': 'FadeOutSlowW'})
    } {
        Zelda.PlayAnimation({'name': 'ev_PartnersGainPower', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EvLink.PlayAnimation({'name': 'ev_PartnersGainPower', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Partner[companion].PlayTailorOtherChannelNoWait({'channel': 'FaceLight', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Partner[companion].PlayAnimation({'name': 'ev_PartnersGainPower', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        EvPartnerPhotonLargeQuantity[Center].PlayAnimationNoWait({'name': 'PartnersGainPower_cam01_Center', 'layer': 0, 'blendFrame': -1, 'restart': False})
        EvPartnerPhotonLargeQuantity[Side].PlayAnimationNoWait({'name': 'PartnersGainPower_cam01_Side', 'layer': 0, 'blendFrame': -1, 'restart': False})
    } {
        Triforce.StopTailorOtherChannel({'channel': 'ac_Keep', 'index': -1})
    }

    GameControl.UnforbidLaunchApplet()

    call Ev_PartnerSeparate.RevivingWorld()

}
