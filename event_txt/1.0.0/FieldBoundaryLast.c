-------- EventFlow: FieldBoundaryLast --------

Actor: QuestSystem
entrypoint: None()
actions: ['SetProgress']
queries: ['CheckProgress']
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

Actor: Camera
entrypoint: None()
actions: ['Reset', 'LerpDofSettings', 'PlayLocationOriginCameraAnimation']
queries: []
params: None

Actor: Zelda
entrypoint: None()
actions: ['MoveToCompassPoint', 'SetInterestIkEnabled', 'WarpToActor']
queries: []
params: None

Actor: Hud
entrypoint: None()
actions: ['PlayOutAnim', 'PlayInAnim']
queries: []
params: None

Actor: GameControl
entrypoint: None()
actions: ['SetActivateAllActor', 'LoadArea']
queries: []
params: None

Actor: Player
entrypoint: None()
actions: ['AimActor', 'AimCompassPoint']
queries: []
params: None

Actor: EventFlags
entrypoint: None()
actions: ['SetFlag']
queries: []
params: None

Actor: Audio
entrypoint: None()
actions: ['StopRegionBgm', 'PlaySpecifyLabelRegionBGM']
queries: []
params: None

Actor: Partner[companion]
entrypoint: None()
actions: ['Talk', 'PlayAnimationNoWait', 'PlayAnimation', 'SetInterestIkEnabled', 'MoveToCompassPoint', 'AimActor', 'DisableAutoMovement']
queries: []
params: None

void ViewBoundaryWorldAreaH() {

    call EvResetCommon.AllReset()

    Zelda.WarpToActor({'actor': ActorIdentifier(name="Zelda"), 'distance': -0.75, 'offsetY': 0.0, 'offsetX': 0.0})
    switch QuestSystem.CheckProgress({'symbol': 'LastDungeon:484825290'}) {
      case 4294967295:
        Audio.StopRegionBgm({'fadeSec': 0.0})
        Hud.PlayOutAnim()
        GameControl.SetActivateAllActor({'is_active': True})

        fork {
            Zelda.MoveToCompassPoint({'direction': 2, 'speed': 0, 'timeOut': 3.0, 'distance': 4.0, 'tolerance': 0.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0, 'offsetY': 0.0})
            Partner[companion].DisableAutoMovement()
        } {
            GameControl.LoadArea({'syncLoad': True, 'location': 'ViewBoundaryWorldAreaH', 'extentsZ': 300.0, 'extentsX': 200.0, 'extentsY': 200.0})
        } {
            Fade.StartPreset({'preset': 'FadeInSlow'})
        } {
            Camera.LerpDofSettings({'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'duration': 0.0, 'FocusRange': 1.0, 'TiltShiftCenterX': 0.0, 'TiltShiftRange': 1.0, 'BlurSizeScale': 0.5099999904632568, 'BlurRatio': 0.7200000286102295, 'noWait': False, 'kind': 13, 'FocalDistance': 40.0, 'TiltShiftCenterY': 1.2999999523162842, 'TiltShiftGamma': 1.0, 'TiltShiftBlurSizeScale': 1.0, 'TiltShiftBlurRatio': 1.0, 'TiltShiftDofFocalDistance': 40.0, 'TiltShiftDofBackRange': 60.0, 'TiltShiftDofBackCurve': 1.0, 'TiltShiftDofBlurRatio': 1.0, 'TiltShiftDofBackBlurFadeWidth': 1.0})
            Camera.PlayLocationOriginCameraAnimation({'location': 'ViewBoundaryWorldAreaH01_cam', 'path': 'map/FieldBoundaryLast_001.bfres', 'farClipDistanceCtrl': True, 'name': 'ViewBoundaryWorldAreaH00_cam', 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'aspectRatioCtrl': False})
        } {
            Timer.Wait({'time': 0.20999999344348907})
            Audio.PlaySpecifyLabelRegionBGM({'label': 'BGM_BOUNDARY2'})
        }


        fork {
            Camera.LerpDofSettings({'kind': 7, 'FrontRange': 1.0, 'FrontCurve': 1.0, 'BackRange': 1.0, 'BackCurve': 1.0, 'TiltShiftNormalX': 0.0, 'TiltShiftNormalY': 1.0, 'duration': 0.0, 'FocusRange': 1.0, 'TiltShiftCenterX': 0.0, 'TiltShiftCenterY': 0.1899999976158142, 'TiltShiftRange': 1.0, 'TiltShiftDofBackRange': 4.900000095367432, 'TiltShiftDofBackBlurFadeWidth': 0.05000000074505806, 'TiltShiftDofBlurRatio': 0.7599999904632568, 'FocalDistance': 51.0, 'BlurSizeScale': 0.5099999904632568, 'BlurRatio': 0.7200000286102295, 'TiltShiftGamma': 6.300000190734863, 'TiltShiftBlurSizeScale': 0.5099999904632568, 'TiltShiftBlurRatio': 0.7200000286102295, 'TiltShiftDofFocalDistance': 51.0, 'TiltShiftDofBackCurve': 0.38999998569488525, 'noWait': False})
        } {
            Camera.PlayLocationOriginCameraAnimation({'name': 'ViewBoundaryWorldAreaH01_cam', 'location': 'ViewBoundaryWorldAreaH01_cam', 'path': 'map/FieldBoundaryLast_001.bfres', 'farClipDistanceCtrl': True, 'chaseRatio': 1.0, 'offsetX': 0.0, 'offsetY': 0.0, 'offsetZ': 0.0, 'ignoreRotation': True, 'lookAtDistanceCtrl': True, 'nearClipDistanceCtrl': False, 'aspectRatioCtrl': False})
        } {
            Timer.Wait({'time': 0.5})
            Partner[companion].Talk({'message': 'scenario/StoryAreaH:ViewBoundaryWorldAreaH_010', 'getAttention': False})
        }

        Camera.Reset({'chaseRatio': 1.0, 'resetPlayerCamera': False})
        Timer.Wait({'time': 1.0})
        Partner[companion].SetInterestIkEnabled({'enable': True})
        Partner[companion].MoveToCompassPoint({'direction': 2, 'speed': 0, 'offsetY': 0.0, 'distance': 2.0, 'tolerance': 0.0, 'timeOut': 7.0, 'customSpeed': 0.0, 'withoutTurn': False, 'method': 0, 'offsetX': 0.0})

        fork {
            Partner[companion].PlayAnimationNoWait({'name': 'talk', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Partner[companion].Talk({'message': 'scenario/StoryAreaH:ViewBoundaryWorldAreaH_020', 'getAttention': False})
        } {
            Timer.Wait({'time': 0.5})
            Zelda.SetInterestIkEnabled({'enable': True})
            Player.AimActor({'offsetY': -0.6000000238418579, 'duration': 1.0, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'withoutTurn': True, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 0.5})
        Partner[companion].AimActor({'duration': 1.0, 'offsetY': 0.0, 'actor': ActorIdentifier(name="Zelda"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})

        fork {
            Partner[companion].PlayAnimation({'name': 'yes02', 'layer': 0, 'blendFrame': -1, 'restart': False})
            Partner[companion].Talk({'message': 'scenario/StoryAreaH:ViewBoundaryWorldAreaH_030', 'getAttention': False})
        } {
            Timer.Wait({'time': 0.30000001192092896})
            Player.AimActor({'offsetY': -0.6000000238418579, 'duration': 1.0, 'actor': ActorIdentifier(name="Partner", sub_name="companion"), 'withoutTurn': False, 'boneName': '', 'offsetX': 0.0, 'offsetZ': 0.0, 'immediateTurn': False})
        }

        Partner[companion].PlayAnimation({'name': 'wait', 'layer': 0, 'blendFrame': -1, 'restart': False})
        Timer.Wait({'time': 1.0})
        Player.AimCompassPoint({'withoutTurn': False, 'duration': 1.0, 'direction': 2, 'immediateTurn': False})
        Hud.PlayInAnim()
        GameControl.SetActivateAllActor({'is_active': False})
        QuestSystem.SetProgress({'symbol': 'LastDungeon:484825290', 'isShowTelopInEvent': False, 'isFrontFade': False})
        EventFlags.SetFlag({'value': True, 'symbol': 'ViewBoundaryWorldAreaH'})
      case [0, 1]:

        call S_DungeonWorldGlobe.BoundaryWorldWarpIn()

    }
}
