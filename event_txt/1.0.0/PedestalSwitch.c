-------- EventFlow: PedestalSwitch --------

Actor: GameControl
entrypoint: None()
actions: ['LoadArea']
queries: []
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Camera
entrypoint: None()
actions: ['LookAtLocationAsOutsideGimmick', 'Reset']
queries: []
params: None

Actor: Environment
entrypoint: None()
actions: ['UnlockCurrentRegion', 'LockCurrentRegion']
queries: []
params: None

Actor: Fade
entrypoint: None()
actions: ['StartPreset']
queries: []
params: None

Actor: PedestalSwitch
entrypoint: None()
actions: ['CallCustomName', 'CallCustomNameOrb', 'SetOrbFlag', 'StopTailorOtherChannel', 'PlayTailorOtherChannelNoWait']
queries: ['GetOrbFlag']
params: None

Actor: Orb
entrypoint: None()
actions: ['Absorbed']
queries: []
params: None

Actor: Dungeon
entrypoint: None()
actions: ['ResetAllAreaVisibility']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['PlayOneshotSystemSE', 'StopSE', 'PlayJingle', 'SetRegionBgmVolume']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: ['CheckFlag']
params: None

void R003() {
    Audio.SetRegionBgmVolume({'volume': 0.4000000059604645, 'fadeSec': 0.5})
    Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ORB_SET', 'volume': 1.0, 'pitch': 1.0})
    Timer.Wait({'time': 1.5})

    fork {
        if !PedestalSwitch.GetOrbFlag() {
            PedestalSwitch.CallCustomNameOrb({'locationName': 'R003_OrbEvent', 'customName': 'OrbFreezePre', 'roomChangerSlopeStart': 1.0, 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
        } else {
            PedestalSwitch.CallCustomNameOrb({'locationName': 'R003_OrbEvent', 'customName': 'OrbWarmPre', 'roomChangerSlopeStart': 1.0, 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
        }
        Timer.Wait({'time': 1.4500000476837158})
        GameControl.LoadArea({'extentsX': 50.0, 'extentsZ': 30.0, 'extentsY': 30.0, 'syncLoad': True, 'location': 'R002_OrbEvent'})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ORB_PANEL_ON', 'volume': 1.0, 'pitch': 1.0})
    }


    fork {
        Camera.LookAtLocationAsOutsideGimmick({'chaseRatio': 1.0, 'location': 'R002_OrbEvent', 'duration': 5.0, 'distanceOffset': 0.0, 'posOffsetX': 0.0, 'posOffsetY': 0.0, 'posOffsetZ': 0.0})
    } {
        PedestalSwitch.StopTailorOtherChannel({'channel': 'Absorption_Fire', 'index': -1})
        PedestalSwitch.StopTailorOtherChannel({'channel': 'Absorption_Ice', 'index': -1})
        Timer.Wait({'time': 1.0})
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ORB_PANEL_ON', 'volume': 1.0, 'pitch': 1.0})
        if !PedestalSwitch.GetOrbFlag() {

            fork {

                fork {
                    PedestalSwitch.CallCustomNameOrb({'locationName': 'R002_OrbEvent', 'roomChangerSlopeStart': 1.0, 'customName': 'OrbFreezePre', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
                } {
                    PedestalSwitch.CallCustomName({'locationName': 'R002_OrbEvent', 'customName': 'Freeze', 'status': False})
                }

                Timer.Wait({'time': 1.0})
                Fade.StartPreset({'preset': 'FadeOutNormalW'})
            } {
                Timer.Wait({'time': 0.5450000166893005})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'volume': 1.0, 'pitch': 1.0})
            }

            PedestalSwitch.CallCustomName({'locationName': 'R002_OrbEvent', 'customName': 'SwitchState', 'status': False})
            Timer.Wait({'time': 0.5})
            Fade.StartPreset({'preset': 'FadeInNormal'})
            Timer.Wait({'time': 1.399999976158142})

            fork {
                PedestalSwitch.CallCustomNameOrb({'locationName': 'R002_OrbEvent', 'roomChangerSlopeStart': 1.0, 'customName': 'OrbFreezeEnd', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
            } {
                PedestalSwitch.CallCustomNameOrb({'locationName': 'R003_OrbEvent', 'customName': 'OrbFreezeEnd', 'roomChangerSlopeStart': 1.0, 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
            } {
                Audio.StopSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'duration': 0.0})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_OFF', 'volume': 1.0, 'pitch': 1.0})
            }

        } else {

            fork {

                fork {
                    PedestalSwitch.CallCustomNameOrb({'locationName': 'R002_OrbEvent', 'roomChangerSlopeStart': 1.0, 'customName': 'OrbWarmPre', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
                } {
                    PedestalSwitch.CallCustomName({'customName': 'Warm', 'locationName': 'R002_OrbEvent', 'status': True})
                }

                Timer.Wait({'time': 1.0})
                Fade.StartPreset({'preset': 'FadeOutNormalW'})
            } {
                Timer.Wait({'time': 0.5450000166893005})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'volume': 1.0, 'pitch': 1.0})
            }

            PedestalSwitch.CallCustomName({'locationName': 'R002_OrbEvent', 'status': True, 'customName': 'SwitchState'})
            Timer.Wait({'time': 0.5})
            Fade.StartPreset({'preset': 'FadeInNormal'})
            Timer.Wait({'time': 1.399999976158142})

            fork {
                PedestalSwitch.CallCustomNameOrb({'locationName': 'R002_OrbEvent', 'roomChangerSlopeStart': 1.0, 'customName': 'OrbWarmEnd', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
            } {
                PedestalSwitch.CallCustomNameOrb({'locationName': 'R003_OrbEvent', 'customName': 'OrbWarmEnd', 'roomChangerSlopeStart': 1.0, 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
            } {
                Audio.StopSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'duration': 0.0})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_OFF', 'volume': 1.0, 'pitch': 1.0})
            }

            if !EventFlags.CheckFlag({'symbol': 'L006R002Jingle'}) {
                Audio.PlayJingle({'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
                EventFlags.SetFlag({'value': True, 'symbol': 'L006R002Jingle'})
            }
        }
    }

    PedestalSwitch.SetOrbFlag()
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Dungeon.ResetAllAreaVisibility({'fadeSecond': 0.0})
    Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})
    if !PedestalSwitch.GetOrbFlag() {
        Timer.Wait({'time': 1.0})
        PedestalSwitch.PlayTailorOtherChannelNoWait({'channel': 'Absorption_Ice_Ed', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Event76:
        Orb.Absorbed()
        Timer.Wait({'time': 1.0})
        Audio.SetRegionBgmVolume({'volume': 1.0, 'fadeSec': 1.0})
        Fade.StartPreset({'preset': 'FadeInNormal'})
    } else {
        Timer.Wait({'time': 1.0})
        PedestalSwitch.PlayTailorOtherChannelNoWait({'channel': 'Absorption_Fire_Ed', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        goto Event76
    }
}

void R008() {
    Audio.SetRegionBgmVolume({'volume': 0.4000000059604645, 'fadeSec': 0.5})
    Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ORB_SET', 'volume': 1.0, 'pitch': 1.0})
    Timer.Wait({'time': 1.5})

    fork {
        if !PedestalSwitch.GetOrbFlag() {
            PedestalSwitch.CallCustomNameOrb({'locationName': 'R008_OrbEvent', 'customName': 'OrbFreezePre', 'roomChangerSlopeStart': 1.0, 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
        } else {
            PedestalSwitch.CallCustomNameOrb({'locationName': 'R008_OrbEvent', 'customName': 'OrbWarmPre', 'roomChangerSlopeStart': 1.0, 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
        }
        Timer.Wait({'time': 1.4500000476837158})
        GameControl.LoadArea({'extentsX': 50.0, 'extentsY': 30.0, 'syncLoad': True, 'location': 'R006_OrbEvent', 'extentsZ': 1.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ORB_PANEL_ON', 'volume': 1.0, 'pitch': 1.0})
    }


    fork {
        Camera.LookAtLocationAsOutsideGimmick({'chaseRatio': 1.0, 'location': 'R006_OrbEvent', 'duration': 5.0, 'distanceOffset': 0.0, 'posOffsetX': 0.0, 'posOffsetY': 0.0, 'posOffsetZ': 0.0})
    } {
        PedestalSwitch.StopTailorOtherChannel({'channel': 'Absorption_Fire', 'index': -1})
        PedestalSwitch.StopTailorOtherChannel({'channel': 'Absorption_Ice', 'index': -1})
        Timer.Wait({'time': 1.0})
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ORB_PANEL_ON', 'volume': 1.0, 'pitch': 1.0})
        if !PedestalSwitch.GetOrbFlag() {

            fork {

                fork {
                    PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'locationName': 'R006_OrbEvent', 'customName': 'OrbFreezePre', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
                } {
                    PedestalSwitch.CallCustomName({'locationName': 'R006_OrbEvent', 'customName': 'Freeze', 'status': False})
                }

                Timer.Wait({'time': 1.0})
                Fade.StartPreset({'preset': 'FadeOutNormalW'})
            } {
                Timer.Wait({'time': 0.5450000166893005})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'volume': 1.0, 'pitch': 1.0})
            }

            PedestalSwitch.CallCustomName({'customName': 'SwitchState', 'locationName': 'R006_OrbEvent', 'status': False})
            Timer.Wait({'time': 0.5})
            Fade.StartPreset({'preset': 'FadeInNormal'})
            Timer.Wait({'time': 1.399999976158142})

            fork {
                PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'locationName': 'R006_OrbEvent', 'customName': 'OrbFreezeEnd', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
            } {
                PedestalSwitch.CallCustomNameOrb({'locationName': 'R008_OrbEvent', 'customName': 'OrbFreezeEnd', 'roomChangerSlopeStart': 1.0, 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
            } {
                Audio.StopSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'duration': 0.0})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_OFF', 'volume': 1.0, 'pitch': 1.0})
            }

        } else {

            fork {

                fork {
                    PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'customName': 'OrbWarmPre', 'locationName': 'R006_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
                } {
                    PedestalSwitch.CallCustomName({'customName': 'Warm', 'status': True, 'locationName': 'R006_OrbEvent'})
                }

                Timer.Wait({'time': 1.0})
                Fade.StartPreset({'preset': 'FadeOutNormalW'})
            } {
                Timer.Wait({'time': 0.5450000166893005})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'volume': 1.0, 'pitch': 1.0})
            }

            PedestalSwitch.CallCustomName({'status': True, 'customName': 'SwitchState', 'locationName': 'R006_OrbEvent'})
            Timer.Wait({'time': 0.5})
            Fade.StartPreset({'preset': 'FadeInNormal'})
            Timer.Wait({'time': 1.399999976158142})

            fork {
                PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'customName': 'OrbWarmEnd', 'locationName': 'R006_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
            } {
                PedestalSwitch.CallCustomNameOrb({'customName': 'OrbWarmEnd', 'locationName': 'R008_OrbEvent', 'roomChangerSlopeStart': 1.0, 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
            } {
                Audio.StopSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'duration': 0.0})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_OFF', 'volume': 1.0, 'pitch': 1.0})
            }

        }
    }

    PedestalSwitch.SetOrbFlag()
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Dungeon.ResetAllAreaVisibility({'fadeSecond': 0.0})
    Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})
    if !PedestalSwitch.GetOrbFlag() {
        Timer.Wait({'time': 1.0})
        PedestalSwitch.PlayTailorOtherChannelNoWait({'channel': 'Absorption_Ice_Ed', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Event65:
        Orb.Absorbed()
        Timer.Wait({'time': 1.0})
        Audio.SetRegionBgmVolume({'volume': 1.0, 'fadeSec': 1.0})
        Fade.StartPreset({'preset': 'FadeInNormal'})
    } else {
        Timer.Wait({'time': 1.0})
        PedestalSwitch.PlayTailorOtherChannelNoWait({'channel': 'Absorption_Fire_Ed', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        goto Event65
    }
}

void R0023() {
    Audio.SetRegionBgmVolume({'volume': 0.4000000059604645, 'fadeSec': 0.5})
    Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ORB_SET', 'volume': 1.0, 'pitch': 1.0})
    Timer.Wait({'time': 1.5})

    fork {
        if !PedestalSwitch.GetOrbFlag() {
            PedestalSwitch.CallCustomNameOrb({'locationName': 'R023_OrbEvent', 'customName': 'OrbFreezePre', 'roomChangerSlopeStart': 1.0, 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
        } else {
            PedestalSwitch.CallCustomNameOrb({'locationName': 'R023_OrbEvent', 'customName': 'OrbWarmPre', 'roomChangerSlopeStart': 1.0, 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
        }
        GameControl.LoadArea({'extentsX': 50.0, 'extentsZ': 30.0, 'extentsY': 30.0, 'syncLoad': True, 'location': 'R010_OrbEvent'})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ORB_PANEL_ON', 'volume': 1.0, 'pitch': 1.0})
    }


    fork {
        Environment.LockCurrentRegion({'regionName': 'LDungeon006_Top', 'enableBlend': True})
    } {
        Timer.Wait({'time': 1.4500000476837158})
    }


    fork {
        Camera.LookAtLocationAsOutsideGimmick({'chaseRatio': 1.0, 'location': 'R010_OrbEvent', 'duration': 5.0, 'distanceOffset': 0.0, 'posOffsetX': 0.0, 'posOffsetY': 0.0, 'posOffsetZ': 0.0})
    } {
        PedestalSwitch.StopTailorOtherChannel({'channel': 'Absorption_Fire', 'index': -1})
        PedestalSwitch.StopTailorOtherChannel({'channel': 'Absorption_Ice', 'index': -1})
        Timer.Wait({'time': 1.0})
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ORB_PANEL_ON', 'volume': 1.0, 'pitch': 1.0})
        if !PedestalSwitch.GetOrbFlag() {

            fork {

                fork {
                    PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'customName': 'OrbFreezePre', 'locationName': 'R010_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
                } {
                    PedestalSwitch.CallCustomName({'customName': 'Freeze', 'status': False, 'locationName': 'R010_OrbEvent'})
                }

                Timer.Wait({'time': 1.0})
                Fade.StartPreset({'preset': 'FadeOutNormalW'})
            } {
                Timer.Wait({'time': 0.5450000166893005})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'volume': 1.0, 'pitch': 1.0})
            }

            PedestalSwitch.CallCustomName({'customName': 'SwitchState', 'status': False, 'locationName': 'R010_OrbEvent'})
            Timer.Wait({'time': 0.5})
            Fade.StartPreset({'preset': 'FadeInNormal'})
            Timer.Wait({'time': 1.399999976158142})

            fork {
                PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'customName': 'OrbFreezeEnd', 'locationName': 'R010_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
            } {
                PedestalSwitch.CallCustomNameOrb({'customName': 'OrbFreezeEnd', 'locationName': 'R023_OrbEvent', 'roomChangerSlopeStart': 1.0, 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
            } {
                Audio.StopSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'duration': 0.0})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_OFF', 'volume': 1.0, 'pitch': 1.0})
            }

        } else {

            fork {

                fork {
                    PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'customName': 'OrbWarmPre', 'locationName': 'R010_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
                } {
                    PedestalSwitch.CallCustomName({'customName': 'Warm', 'status': True, 'locationName': 'R010_OrbEvent'})
                }

                Timer.Wait({'time': 1.0})
                Fade.StartPreset({'preset': 'FadeOutNormalW'})
            } {
                Timer.Wait({'time': 0.5450000166893005})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'volume': 1.0, 'pitch': 1.0})
            }

            PedestalSwitch.CallCustomName({'status': True, 'customName': 'SwitchState', 'locationName': 'R010_OrbEvent'})
            Timer.Wait({'time': 0.5})
            Fade.StartPreset({'preset': 'FadeInNormal'})
            Timer.Wait({'time': 1.399999976158142})

            fork {
                PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'customName': 'OrbWarmEnd', 'locationName': 'R010_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
            } {
                PedestalSwitch.CallCustomNameOrb({'customName': 'OrbWarmEnd', 'locationName': 'R023_OrbEvent', 'roomChangerSlopeStart': 1.0, 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
            } {
                Audio.StopSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'duration': 0.0})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_OFF', 'volume': 1.0, 'pitch': 1.0})
            }

            if !EventFlags.CheckFlag({'symbol': 'L006R010Jingle'}) {
                Audio.PlayJingle({'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
                EventFlags.SetFlag({'symbol': 'L006R010Jingle', 'value': True})
            }
        }
    }

    PedestalSwitch.SetOrbFlag()
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Dungeon.ResetAllAreaVisibility({'fadeSecond': 0.0})
    Environment.UnlockCurrentRegion({'regionName': 'LDungeon006_Top', 'enableBlend': True})
    Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})
    if !PedestalSwitch.GetOrbFlag() {
        Timer.Wait({'time': 1.0})
        PedestalSwitch.PlayTailorOtherChannelNoWait({'channel': 'Absorption_Ice_Ed', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Event89:
        Orb.Absorbed()
        Timer.Wait({'time': 1.0})
        Audio.SetRegionBgmVolume({'volume': 1.0, 'fadeSec': 1.0})
        Fade.StartPreset({'preset': 'FadeInNormal'})
    } else {
        Timer.Wait({'time': 1.0})
        PedestalSwitch.PlayTailorOtherChannelNoWait({'channel': 'Absorption_Fire_Ed', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        goto Event89
    }
}

void R012() {
    Audio.SetRegionBgmVolume({'volume': 0.4000000059604645, 'fadeSec': 0.5})
    Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ORB_SET', 'volume': 1.0, 'pitch': 1.0})
    Timer.Wait({'time': 1.5})

    fork {
        if !PedestalSwitch.GetOrbFlag() {
            PedestalSwitch.CallCustomName({'locationName': 'R012_OrbEvent', 'customName': 'OrbFreezePre', 'status': False})
        } else {
            PedestalSwitch.CallCustomName({'locationName': 'R012_OrbEvent', 'customName': 'OrbWarmPre', 'status': False})
        }
        Timer.Wait({'time': 1.4500000476837158})
        GameControl.LoadArea({'extentsX': 50.0, 'extentsZ': 30.0, 'extentsY': 30.0, 'syncLoad': True, 'location': 'R020_OrbEvent'})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ORB_PANEL_ON', 'volume': 1.0, 'pitch': 1.0})
    }


    fork {
        Camera.LookAtLocationAsOutsideGimmick({'chaseRatio': 1.0, 'location': 'R020_OrbEvent', 'duration': 5.0, 'distanceOffset': 0.0, 'posOffsetX': 0.0, 'posOffsetY': 0.0, 'posOffsetZ': 0.0})
    } {
        PedestalSwitch.StopTailorOtherChannel({'channel': 'Absorption_Fire', 'index': -1})
        PedestalSwitch.StopTailorOtherChannel({'channel': 'Absorption_Ice', 'index': -1})
        Timer.Wait({'time': 1.0})
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ORB_PANEL_ON', 'volume': 1.0, 'pitch': 1.0})
        if !PedestalSwitch.GetOrbFlag() {

            fork {

                fork {
                    PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'customName': 'OrbFreezePre', 'locationName': 'R020_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
                } {
                    PedestalSwitch.CallCustomName({'customName': 'Freeze', 'status': False, 'locationName': 'R020_OrbEvent'})
                }

                Timer.Wait({'time': 1.0})
                Fade.StartPreset({'preset': 'FadeOutNormalW'})
            } {
                Timer.Wait({'time': 0.5450000166893005})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'volume': 1.0, 'pitch': 1.0})
            }

            PedestalSwitch.CallCustomName({'customName': 'SwitchState', 'status': False, 'locationName': 'R020_OrbEvent'})
            Timer.Wait({'time': 0.5})
            Fade.StartPreset({'preset': 'FadeInNormal'})
            Timer.Wait({'time': 1.399999976158142})

            fork {
                PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'customName': 'OrbFreezeEnd', 'locationName': 'R020_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
            } {
                Audio.StopSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'duration': 0.0})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_OFF', 'volume': 1.0, 'pitch': 1.0})
            }

        } else {

            fork {

                fork {
                    PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'customName': 'OrbWarmPre', 'locationName': 'R020_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
                } {
                    PedestalSwitch.CallCustomName({'customName': 'Warm', 'status': True, 'locationName': 'R020_OrbEvent'})
                }

                Timer.Wait({'time': 1.0})
                Fade.StartPreset({'preset': 'FadeOutNormalW'})
            } {
                Timer.Wait({'time': 0.5450000166893005})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'volume': 1.0, 'pitch': 1.0})
            }

            PedestalSwitch.CallCustomName({'status': True, 'customName': 'SwitchState', 'locationName': 'R020_OrbEvent'})
            Timer.Wait({'time': 0.5})
            Fade.StartPreset({'preset': 'FadeInNormal'})
            Timer.Wait({'time': 1.399999976158142})

            fork {
                PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'customName': 'OrbWarmEnd', 'locationName': 'R020_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
            } {
                Audio.StopSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'duration': 0.0})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_OFF', 'volume': 1.0, 'pitch': 1.0})
            }

        }
    }

    GameControl.LoadArea({'extentsX': 50.0, 'extentsZ': 30.0, 'extentsY': 30.0, 'syncLoad': True, 'location': 'R018_OrbEvent'})

    fork {
        Camera.LookAtLocationAsOutsideGimmick({'chaseRatio': 1.0, 'location': 'R018_OrbEvent', 'duration': 5.0, 'distanceOffset': 0.0, 'posOffsetX': 0.0, 'posOffsetY': 0.0, 'posOffsetZ': 0.0})
    } {
        PedestalSwitch.StopTailorOtherChannel({'channel': 'Absorption_Fire', 'index': -1})
        PedestalSwitch.StopTailorOtherChannel({'channel': 'Absorption_Ice', 'index': -1})
        Timer.Wait({'time': 1.0})
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ORB_PANEL_ON', 'volume': 1.0, 'pitch': 1.0})
        if !PedestalSwitch.GetOrbFlag() {

            fork {

                fork {
                    PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'customName': 'OrbFreezePre', 'locationName': 'R018_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
                } {
                    PedestalSwitch.CallCustomName({'customName': 'Freeze', 'status': False, 'locationName': 'R018_OrbEvent'})
                }

                Timer.Wait({'time': 1.0})
                Fade.StartPreset({'preset': 'FadeOutNormalW'})
            } {
                Timer.Wait({'time': 0.5450000166893005})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'volume': 1.0, 'pitch': 1.0})
            }

            PedestalSwitch.CallCustomName({'customName': 'SwitchState', 'status': False, 'locationName': 'R018_OrbEvent'})
            Timer.Wait({'time': 0.5})
            Fade.StartPreset({'preset': 'FadeInNormal'})
            Timer.Wait({'time': 1.399999976158142})

            fork {
                PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'customName': 'OrbFreezeEnd', 'locationName': 'R018_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
            } {
                PedestalSwitch.CallCustomNameOrb({'customName': 'OrbFreezeEnd', 'locationName': 'R012_OrbEvent', 'roomChangerSlopeStart': 1.0, 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
            } {
                Audio.StopSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'duration': 0.0})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_OFF', 'volume': 1.0, 'pitch': 1.0})
            }

        } else {

            fork {

                fork {
                    PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'customName': 'OrbWarmPre', 'locationName': 'R018_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
                } {
                    PedestalSwitch.CallCustomName({'customName': 'Warm', 'status': True, 'locationName': 'R018_OrbEvent'})
                }

                Timer.Wait({'time': 1.0})
                Fade.StartPreset({'preset': 'FadeOutNormalW'})
            } {
                Timer.Wait({'time': 0.5450000166893005})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'volume': 1.0, 'pitch': 1.0})
            }

            PedestalSwitch.CallCustomName({'status': True, 'customName': 'SwitchState', 'locationName': 'R018_OrbEvent'})
            Timer.Wait({'time': 0.5})
            Fade.StartPreset({'preset': 'FadeInNormal'})
            Timer.Wait({'time': 1.399999976158142})

            fork {
                PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'customName': 'OrbWarmEnd', 'locationName': 'R018_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
            } {
                PedestalSwitch.CallCustomNameOrb({'customName': 'OrbWarmEnd', 'locationName': 'R012_OrbEvent', 'roomChangerSlopeStart': 1.0, 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
            } {
                Audio.StopSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'duration': 0.0})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_OFF', 'volume': 1.0, 'pitch': 1.0})
            }

        }
    }

    PedestalSwitch.SetOrbFlag()
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Dungeon.ResetAllAreaVisibility({'fadeSecond': 0.0})
    Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})
    if !PedestalSwitch.GetOrbFlag() {
        Timer.Wait({'time': 1.0})
        PedestalSwitch.PlayTailorOtherChannelNoWait({'channel': 'Absorption_Ice_Ed', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Event99:
        Orb.Absorbed()
        Timer.Wait({'time': 1.0})
        Audio.SetRegionBgmVolume({'volume': 1.0, 'fadeSec': 1.0})
        Fade.StartPreset({'preset': 'FadeInNormal'})
    } else {
        Timer.Wait({'time': 1.0})
        PedestalSwitch.PlayTailorOtherChannelNoWait({'channel': 'Absorption_Fire_Ed', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        goto Event99
    }
}

void R019() {
    Audio.SetRegionBgmVolume({'volume': 0.4000000059604645, 'fadeSec': 0.5})
    Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ORB_SET', 'volume': 1.0, 'pitch': 1.0})
    Timer.Wait({'time': 1.5})

    fork {
        if !PedestalSwitch.GetOrbFlag() {
            PedestalSwitch.CallCustomName({'locationName': 'R019_OrbEvent', 'customName': 'OrbFreezePre', 'status': False})
        } else {
            PedestalSwitch.CallCustomName({'locationName': 'R019_OrbEvent', 'customName': 'OrbWarmPre', 'status': False})
        }
        Timer.Wait({'time': 1.4500000476837158})
        GameControl.LoadArea({'extentsX': 50.0, 'extentsZ': 30.0, 'extentsY': 30.0, 'syncLoad': True, 'location': 'R026_OrbEvent'})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ORB_PANEL_ON', 'volume': 1.0, 'pitch': 1.0})
    }


    fork {
        Camera.LookAtLocationAsOutsideGimmick({'chaseRatio': 1.0, 'location': 'R026_OrbEvent', 'duration': 5.0, 'distanceOffset': 0.0, 'posOffsetX': 0.0, 'posOffsetY': 0.0, 'posOffsetZ': 0.0})
    } {
        PedestalSwitch.StopTailorOtherChannel({'channel': 'Absorption_Fire', 'index': -1})
        PedestalSwitch.StopTailorOtherChannel({'channel': 'Absorption_Ice', 'index': -1})
        Timer.Wait({'time': 1.0})
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ORB_PANEL_ON', 'volume': 1.0, 'pitch': 1.0})
        if !PedestalSwitch.GetOrbFlag() {

            fork {

                fork {
                    PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'customName': 'OrbFreezePre', 'locationName': 'R026_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
                } {
                    PedestalSwitch.CallCustomName({'customName': 'Freeze', 'status': False, 'locationName': 'R026_OrbEvent'})
                }

                Timer.Wait({'time': 1.0})
                Fade.StartPreset({'preset': 'FadeOutNormalW'})
            } {
                Timer.Wait({'time': 0.5450000166893005})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'volume': 1.0, 'pitch': 1.0})
            }

            PedestalSwitch.CallCustomName({'customName': 'SwitchState', 'status': False, 'locationName': 'R026_OrbEvent'})
            Timer.Wait({'time': 0.5})
            Fade.StartPreset({'preset': 'FadeInNormal'})
            Timer.Wait({'time': 1.399999976158142})

            fork {
                PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'customName': 'OrbFreezeEnd', 'locationName': 'R026_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
            } {
                PedestalSwitch.CallCustomNameOrb({'customName': 'OrbFreezeEnd', 'locationName': 'R019_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerSlopeStart': 1.0, 'roomChangerWaitTime': 1.0})
            } {
                Audio.StopSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'duration': 0.0})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_OFF', 'volume': 1.0, 'pitch': 1.0})
            }

        } else {

            fork {

                fork {
                    PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'customName': 'OrbWarmPre', 'locationName': 'R026_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
                } {
                    PedestalSwitch.CallCustomName({'customName': 'Warm', 'status': True, 'locationName': 'R026_OrbEvent'})
                }

                Timer.Wait({'time': 1.0})
                Fade.StartPreset({'preset': 'FadeOutNormalW'})
            } {
                Timer.Wait({'time': 0.5450000166893005})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'volume': 1.0, 'pitch': 1.0})
            }

            PedestalSwitch.CallCustomName({'status': True, 'customName': 'SwitchState', 'locationName': 'R026_OrbEvent'})
            Timer.Wait({'time': 0.5})
            Fade.StartPreset({'preset': 'FadeInNormal'})
            Timer.Wait({'time': 1.399999976158142})

            fork {
                PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'customName': 'OrbWarmEnd', 'locationName': 'R026_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
            } {
                PedestalSwitch.CallCustomNameOrb({'customName': 'OrbWarmEnd', 'locationName': 'R019_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerSlopeStart': 1.0, 'roomChangerWaitTime': 1.0})
            } {
                Audio.StopSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'duration': 0.0})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_OFF', 'volume': 1.0, 'pitch': 1.0})
            }

        }
    }

    PedestalSwitch.SetOrbFlag()
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Dungeon.ResetAllAreaVisibility({'fadeSecond': 0.0})
    Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})
    if !PedestalSwitch.GetOrbFlag() {
        Timer.Wait({'time': 1.0})
        PedestalSwitch.PlayTailorOtherChannelNoWait({'channel': 'Absorption_Ice_Ed', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Event8:
        Orb.Absorbed()
        Timer.Wait({'time': 1.0})
        Audio.SetRegionBgmVolume({'volume': 1.0, 'fadeSec': 1.0})
        Fade.StartPreset({'preset': 'FadeInNormal'})
    } else {
        Timer.Wait({'time': 1.0})
        PedestalSwitch.PlayTailorOtherChannelNoWait({'channel': 'Absorption_Fire_Ed', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        goto Event8
    }
}

void R028() {
    Audio.SetRegionBgmVolume({'volume': 0.4000000059604645, 'fadeSec': 0.5})
    Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ORB_SET', 'volume': 1.0, 'pitch': 1.0})
    Timer.Wait({'time': 1.5})

    fork {
        if !PedestalSwitch.GetOrbFlag() {
            PedestalSwitch.CallCustomName({'locationName': 'R028_OrbEvent', 'customName': 'OrbFreezePre', 'status': False})
        } else {
            PedestalSwitch.CallCustomName({'locationName': 'R028_OrbEvent', 'customName': 'OrbWarmPre', 'status': False})
        }
        Timer.Wait({'time': 1.4500000476837158})
        GameControl.LoadArea({'extentsX': 50.0, 'extentsY': 30.0, 'syncLoad': True, 'location': 'R018_OrbEvent', 'extentsZ': 6.0})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ORB_PANEL_ON', 'volume': 1.0, 'pitch': 1.0})
    }


    fork {
        Camera.LookAtLocationAsOutsideGimmick({'chaseRatio': 1.0, 'location': 'R018_OrbEvent', 'duration': 5.0, 'distanceOffset': 0.0, 'posOffsetX': 0.0, 'posOffsetY': 0.0, 'posOffsetZ': 0.0})
    } {
        PedestalSwitch.StopTailorOtherChannel({'channel': 'Absorption_Fire', 'index': -1})
        PedestalSwitch.StopTailorOtherChannel({'channel': 'Absorption_Ice', 'index': -1})
        Timer.Wait({'time': 1.0})
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ORB_PANEL_ON', 'volume': 1.0, 'pitch': 1.0})
        if !PedestalSwitch.GetOrbFlag() {
            PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'customName': 'OrbFreezePre', 'locationName': 'R018_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
            Timer.Wait({'time': 1.0})
            PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'customName': 'OrbFreezeEnd', 'locationName': 'R018_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
        } else {
            PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'customName': 'OrbWarmPre', 'locationName': 'R018_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
            Timer.Wait({'time': 1.0})
            PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'customName': 'OrbWarmEnd', 'locationName': 'R018_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
        }
    }

    GameControl.LoadArea({'extentsX': 50.0, 'extentsY': 30.0, 'syncLoad': True, 'location': 'R017_OrbEvent', 'extentsZ': 6.0})
    Timer.Wait({'time': 0.03400000184774399})

    fork {
        Camera.LookAtLocationAsOutsideGimmick({'chaseRatio': 1.0, 'location': 'R017_OrbEvent', 'duration': 5.0, 'distanceOffset': 0.0, 'posOffsetX': 0.0, 'posOffsetY': 0.0, 'posOffsetZ': 0.0})
    } {
        PedestalSwitch.StopTailorOtherChannel({'channel': 'Absorption_Fire', 'index': -1})
        PedestalSwitch.StopTailorOtherChannel({'channel': 'Absorption_Ice', 'index': -1})
        Timer.Wait({'time': 1.0})
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ORB_PANEL_ON', 'volume': 1.0, 'pitch': 1.0})
        if !PedestalSwitch.GetOrbFlag() {

            fork {

                fork {
                    PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'customName': 'OrbFreezePre', 'locationName': 'R017_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
                } {
                    PedestalSwitch.CallCustomName({'customName': 'Freeze', 'status': False, 'locationName': 'R017_OrbEvent'})
                }

                Timer.Wait({'time': 1.0})
                Fade.StartPreset({'preset': 'FadeOutNormalW'})
            } {
                Timer.Wait({'time': 0.5450000166893005})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'volume': 1.0, 'pitch': 1.0})
            }

            PedestalSwitch.CallCustomName({'customName': 'SwitchState', 'status': False, 'locationName': 'R017_OrbEvent'})
            Timer.Wait({'time': 0.5})
            Fade.StartPreset({'preset': 'FadeInNormal'})
            Timer.Wait({'time': 1.399999976158142})

            fork {
                PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'customName': 'OrbFreezeEnd', 'locationName': 'R017_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
            } {
                PedestalSwitch.CallCustomNameOrb({'customName': 'OrbFreezeEnd', 'locationName': 'R028_OrbEvent', 'roomChangerSlopeStart': 1.0, 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
            } {
                Audio.StopSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'duration': 0.0})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_OFF', 'volume': 1.0, 'pitch': 1.0})
            }

        } else {

            fork {

                fork {
                    PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'customName': 'OrbWarmPre', 'locationName': 'R017_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
                } {
                    PedestalSwitch.CallCustomName({'customName': 'Warm', 'status': True, 'locationName': 'R017_OrbEvent'})
                }

                Timer.Wait({'time': 1.0})
                Fade.StartPreset({'preset': 'FadeOutNormalW'})
            } {
                Timer.Wait({'time': 0.5450000166893005})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'volume': 1.0, 'pitch': 1.0})
            }

            PedestalSwitch.CallCustomName({'status': True, 'customName': 'SwitchState', 'locationName': 'R017_OrbEvent'})
            Timer.Wait({'time': 0.5})
            Fade.StartPreset({'preset': 'FadeInNormal'})
            Timer.Wait({'time': 1.399999976158142})

            fork {
                PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'customName': 'OrbWarmEnd', 'locationName': 'R017_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
            } {
                PedestalSwitch.CallCustomNameOrb({'customName': 'OrbWarmEnd', 'locationName': 'R028_OrbEvent', 'roomChangerSlopeStart': 1.0, 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
            } {
                Audio.StopSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'duration': 0.0})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_OFF', 'volume': 1.0, 'pitch': 1.0})
            }

            if !EventFlags.CheckFlag({'symbol': 'L006R017Jingle'}) {
                Audio.PlayJingle({'label': 'BGM_NAZOTOKI_SEIKAI', 'volume': 1.0, 'ignoreSkip': True})
                EventFlags.SetFlag({'symbol': 'L006R017Jingle', 'value': True})
            }
        }
    }

    PedestalSwitch.SetOrbFlag()
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Dungeon.ResetAllAreaVisibility({'fadeSecond': 0.0})
    Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})
    if !PedestalSwitch.GetOrbFlag() {
        Timer.Wait({'time': 1.0})
        PedestalSwitch.PlayTailorOtherChannelNoWait({'channel': 'Absorption_Ice_Ed', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Event124:
        Orb.Absorbed()
        Timer.Wait({'time': 1.0})
        Audio.SetRegionBgmVolume({'volume': 1.0, 'fadeSec': 1.0})
        Fade.StartPreset({'preset': 'FadeInNormal'})
    } else {
        Timer.Wait({'time': 1.0})
        PedestalSwitch.PlayTailorOtherChannelNoWait({'channel': 'Absorption_Fire_Ed', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        goto Event124
    }
}

void R017() {
    Audio.SetRegionBgmVolume({'volume': 0.4000000059604645, 'fadeSec': 0.5})
    Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ORB_SET', 'volume': 1.0, 'pitch': 1.0})
    Timer.Wait({'time': 1.5})

    fork {
        if !PedestalSwitch.GetOrbFlag() {
            PedestalSwitch.CallCustomName({'locationName': 'R017_OrbEvent', 'customName': 'OrbFreezePre', 'status': False})
        } else {
            PedestalSwitch.CallCustomName({'locationName': 'R017_OrbEvent', 'customName': 'OrbWarmPre', 'status': False})
        }
        Timer.Wait({'time': 1.4500000476837158})
        GameControl.LoadArea({'extentsX': 50.0, 'extentsZ': 30.0, 'extentsY': 30.0, 'syncLoad': True, 'location': 'R016_OrbEvent'})
    } {
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ORB_PANEL_ON', 'volume': 1.0, 'pitch': 1.0})
    }


    fork {
        Camera.LookAtLocationAsOutsideGimmick({'chaseRatio': 1.0, 'location': 'R016_OrbEvent', 'duration': 5.0, 'distanceOffset': 0.0, 'posOffsetX': 0.0, 'posOffsetY': 0.0, 'posOffsetZ': 0.0})
    } {
        PedestalSwitch.StopTailorOtherChannel({'channel': 'Absorption_Fire', 'index': -1})
        PedestalSwitch.StopTailorOtherChannel({'channel': 'Absorption_Ice', 'index': -1})
        Timer.Wait({'time': 1.0})
        Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ORB_PANEL_ON', 'volume': 1.0, 'pitch': 1.0})
        if !PedestalSwitch.GetOrbFlag() {

            fork {

                fork {
                    PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'customName': 'OrbFreezePre', 'locationName': 'R016_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
                } {
                    PedestalSwitch.CallCustomName({'customName': 'Freeze', 'status': False, 'locationName': 'R016_OrbEvent'})
                }

                Timer.Wait({'time': 1.0})
                Fade.StartPreset({'preset': 'FadeOutNormalW'})
            } {
                Timer.Wait({'time': 0.5450000166893005})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'volume': 1.0, 'pitch': 1.0})
            }

            PedestalSwitch.CallCustomName({'customName': 'SwitchState', 'status': False, 'locationName': 'R016_OrbEvent'})
            Timer.Wait({'time': 0.5})
            Fade.StartPreset({'preset': 'FadeInNormal'})
            Timer.Wait({'time': 1.399999976158142})

            fork {
                PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'customName': 'OrbFreezeEnd', 'locationName': 'R016_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
            } {
                PedestalSwitch.CallCustomNameOrb({'customName': 'OrbFreezeEnd', 'locationName': 'R017_OrbEvent', 'roomChangerSlopeStart': 1.0, 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
            } {
                Audio.StopSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'duration': 0.0})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_OFF', 'volume': 1.0, 'pitch': 1.0})
            }

        } else {

            fork {

                fork {
                    PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'customName': 'OrbWarmPre', 'locationName': 'R016_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
                } {
                    PedestalSwitch.CallCustomName({'customName': 'Warm', 'status': True, 'locationName': 'R016_OrbEvent'})
                }

                Timer.Wait({'time': 1.0})
                Fade.StartPreset({'preset': 'FadeOutNormalW'})
            } {
                Timer.Wait({'time': 0.5450000166893005})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'volume': 1.0, 'pitch': 1.0})
            }

            PedestalSwitch.CallCustomName({'status': True, 'customName': 'SwitchState', 'locationName': 'R016_OrbEvent'})
            Timer.Wait({'time': 0.5})
            Fade.StartPreset({'preset': 'FadeInNormal'})
            Timer.Wait({'time': 1.399999976158142})

            fork {
                PedestalSwitch.CallCustomNameOrb({'roomChangerSlopeStart': 1.0, 'customName': 'OrbWarmEnd', 'locationName': 'R016_OrbEvent', 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
            } {
                PedestalSwitch.CallCustomNameOrb({'customName': 'OrbWarmEnd', 'locationName': 'R017_OrbEvent', 'roomChangerSlopeStart': 1.0, 'roomChangerMaxSpeedTimer': 1.0, 'roomChangerWaitTime': 1.0})
            } {
                Audio.StopSE({'label': 'SE_OBJ_ROOM_CHANGER_LP', 'duration': 0.0})
                Audio.PlayOneshotSystemSE({'label': 'SE_OBJ_ROOM_CHANGER_OFF', 'volume': 1.0, 'pitch': 1.0})
            }

        }
    }

    PedestalSwitch.SetOrbFlag()
    Fade.StartPreset({'preset': 'FadeOutNormalB'})
    Dungeon.ResetAllAreaVisibility({'fadeSecond': 0.0})
    Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})
    if !PedestalSwitch.GetOrbFlag() {
        Timer.Wait({'time': 1.0})
        PedestalSwitch.PlayTailorOtherChannelNoWait({'channel': 'Absorption_Ice_Ed', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        Event147:
        Orb.Absorbed()
        Timer.Wait({'time': 1.0})
        Audio.SetRegionBgmVolume({'volume': 1.0, 'fadeSec': 1.0})
        Fade.StartPreset({'preset': 'FadeInNormal'})
    } else {
        Timer.Wait({'time': 1.0})
        PedestalSwitch.PlayTailorOtherChannelNoWait({'channel': 'Absorption_Fire_Ed', 'restart': False, 'index': -1, 'stopOnSkipped': True})
        goto Event147
    }
}
