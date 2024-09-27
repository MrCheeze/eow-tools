-------- EventFlow: ModelDisplay --------

Actor: FlowControl
entrypoint: None()
actions: ['InvokeFlowchart', 'PreloadFlowchart']
queries: ['Branch']
params: None

Actor: Timer
entrypoint: None()
actions: ['Wait']
queries: []
params: None

Actor: Dialog
entrypoint: None()
actions: ['Signal']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['SetForcedResolution', 'ResetForcedResolution']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['LookAtItemGettingPlayer', 'ResetCarriedActor', 'PlayAnimationEx', 'AimCompassPoint', 'ShowDisplayModel', 'StopDisplayModelEffect', 'PlayItemGetJingle', 'CreateDisplayModel', 'SetEquipmentVisibility', 'SetInterestIkEnabled', 'DestroyDisplayModel', 'PlayAnimation', 'BreakBurrowable']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['SetInterestIkEnabled', 'AimActor', 'WaitMoveDone']
queries: []
params: None

void ModelDisplaySequence() {
    Player.BreakBurrowable()

    fork {
        Player.LookAtItemGettingPlayer({'duration': 0.699999988079071, 'chaseRatio': 0.10000000149011612, 'distanceOffset': 0.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0})
    } {
        Player.CreateDisplayModel()
        Player.ResetCarriedActor()
        Timer.Wait({'time': 0.05000000074505806})

        call _SetEquipmentVisibility({'noEquip': 'noEquip'})

        Player.SetInterestIkEnabled({'enable': False})

        fork {
            Player.PlayAnimationEx({'name': 'raiseStAnim', 'time': 0.4000000059604645, 'layer': 0, 'blendFrame': -1, 'restart': False})
        } {
            Player.AimCompassPoint({'direction': 0, 'duration': 0.4000000059604645, 'withoutTurn': False, 'immediateTurn': False})
        }


        fork {
            Player.ShowDisplayModel()
            GameControl.SetForcedResolution({'console': 16000900, 'handheld': 11520648})

            fork {

                fork {
                    Timer.Wait({'time': 1.0})
                } {
                    FlowControl.PreloadFlowchart({'filename': 'messageAsset'})
                }

                FlowControl.InvokeFlowchart({'filename': 'messageAsset', 'entryPoint': 'messageEntry'})
            } {
                Player.PlayItemGetJingle()
                Dialog.Signal()
            }

        } {
            Partner[companion].WaitMoveDone({'timeout': 3.0})
            Partner[companion].SetInterestIkEnabled({'enable': True})
            Partner[companion].AimActor({'boneName': 'attach_object', 'duration': 0.30000001192092896, 'actor': ActorIdentifier(name="Player"), 'withoutTurn': False, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }


        fork {
            Player.StopDisplayModelEffect()
        } {
            Timer.Wait({'time': 0.08299999684095383})
        }

        if !FlowControl.Branch({'value': 'keepRaise'}) {

            call EndCarry({'anim': 'raiseEdAnim'})

        }
    }

}

void _SetEquipmentVisibility() {
    if FlowControl.Branch({'value': 'noEquip'}) {
        Player.SetEquipmentVisibility({'visibility': False})
    }
}

void _RestoreEquipmentVisibility() {
    Player.SetEquipmentVisibility({'visibility': True})
}

void EndCarry() {
    Player.DestroyDisplayModel()
    GameControl.ResetForcedResolution()
    Player.PlayAnimation({'name': 'anim', 'layer': 0, 'blendFrame': -1, 'restart': False})
    Partner[companion].SetInterestIkEnabled({'enable': False})

    call _RestoreEquipmentVisibility()

}
