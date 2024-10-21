-------- EventFlow: DarkBrume --------

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: PartnerPhotons
entrypoint: None()
actions: ['OnPartnerPhotonsGroupGetFlag']
queries: ['IsCompleteInprisonedPartnerPhotons']
params: None

Actor: DarkBrume
entrypoint: None()
actions: ['PlayTailorOtherChannelNoWait', 'SetTailorProperty', 'StopTailorOtherChannel', 'PlayTailorOtherChannelEx', 'LookAtGimmick']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['Reset', 'LookAt2ActorsCenterAsTalker']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: []
queries: ['IsInSideView', 'CheckLife']
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['AimActor', 'Talk', 'MoveToCompassPoint']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['StopAllBGM']
queries: []
params: None

void ReleasePartner() {
    if Player.CheckLife({'amount': 1}) {
        DarkBrume.SetTailorProperty({'propertyIndex': 0, 'value': 'tailorPropValue', 'index': -1})

        fork {
            DarkBrume.PlayTailorOtherChannelNoWait({'channel': 'DarkBrume_Off', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        } {
            DarkBrume.PlayTailorOtherChannelNoWait({'channel': 'PartnerPhoton_Release', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        } {
            DarkBrume.StopTailorOtherChannel({'channel': 'DarkBrume', 'index': -1})
        } {
            DarkBrume.StopTailorOtherChannel({'channel': 'DarkBrume_On', 'index': -1})
        }

        Timer.Wait({'time': 3.5})
        PartnerPhotons.OnPartnerPhotonsGroupGetFlag({'index': 'photonsIndex'})
        if PartnerPhotons.IsCompleteInprisonedPartnerPhotons({'key': 'key'}) {
            Audio.StopAllBGM({'duration': 2.0})
        }
        Timer.Wait({'time': 1.0})
        if PartnerPhotons.IsCompleteInprisonedPartnerPhotons({'key': 'key'}) {

            call EvResetCommon.AllReset_PasteOff02()

            if Player.IsInSideView() {
                Partner[companion].MoveToCompassPoint({'direction': 4, 'speed': 0, 'offsetX': 0.0, 'offsetY': 0.0, 'distance': 0.6000000238418579, 'withoutTurn': True, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'method': 0})
            }
            Partner[companion].AimActor({'actor': ActorIdentifier(name="Player"), 'duration': 0.4000000059604645, 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

            call GeneralSequence.Look_at_Partner()

            Camera.LookAt2ActorsCenterAsTalker({'actor1': ActorIdentifier(name="Partner", sub_name="companion"), 'actor2': ActorIdentifier(name="Player"), 'weight1': 1.0, 'weight2': 1.0, 'duration': 0.4000000059604645, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
            Partner[companion].Talk({'message': 'scenario/PartnerTalk:AllCollected_010', 'getAttention': False})
            Fade.StartPreset({'preset': 'FadeOutNormalB'})
            Timer.Wait({'time': 1.0})
        }
    }
}

void GeneratedPartner() {
    DarkBrume.LookAtGimmick({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    DarkBrume.PlayTailorOtherChannelEx({'channel': 'DarkBrume_On', 'time': 3.0, 'restart': False, 'index': -1, 'stopOnSkipped': True})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
}

void GeneratedBrume() {
    DarkBrume.LookAtGimmick({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'keep': False})
    DarkBrume.PlayTailorOtherChannelEx({'channel': 'DarkBrume_On', 'time': 3.0, 'restart': False, 'index': -1, 'stopOnSkipped': True})
    Camera.Reset({'chaseRatio': 0.10000000149011612, 'resetPlayerCamera': False})
}
