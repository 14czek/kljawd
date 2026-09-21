
#pragma once
#include <cstdint>
#include <string>
namespace Offsets {
    inline std::string ClientVersion = "version-4310300497aa4917";

    namespace AccessoryDescription {
         inline constexpr uintptr_t AssetId = 0xc0;
         inline constexpr uintptr_t IsLayered = 0xf8;
         inline constexpr uintptr_t Order = 0xf0;
         inline constexpr uintptr_t Puffiness = 0xf4;
    }

    namespace AdPlacement {
         inline constexpr uintptr_t PlacementId = 0x130;
         inline constexpr uintptr_t Visible = 0x13c;
    }

    namespace AdPortal {
         inline constexpr uintptr_t PortalVersion = 0xd8;
    }

    namespace AirProperties {
         inline constexpr uintptr_t AirDensity = 0x18;
         inline constexpr uintptr_t GlobalWind = 0x3c;
    }

    namespace AnimatedImage {
         inline constexpr uintptr_t PlaybackSpeed = 0x100;
    }

    namespace AnimationConstraint {
         inline constexpr uintptr_t AngularDamping = 0x170;
         inline constexpr uintptr_t AngularStrength = 0x174;
         inline constexpr uintptr_t LinearDamping = 0x178;
         inline constexpr uintptr_t LinearStrength = 0x17c;
         inline constexpr uintptr_t MaxForce = 0x180;
    }

    namespace AnimationStreamTrack {
         inline constexpr uintptr_t WeightTarget = 0xc0;
    }

    namespace AnimationTrack {
         inline constexpr uintptr_t Animation = 0xb8;
         inline constexpr uintptr_t Animator = 0x110;
         inline constexpr uintptr_t IsPlaying = 0xa58;
         inline constexpr uintptr_t Looped = 0xe5;
         inline constexpr uintptr_t Speed = 0xd4;
         inline constexpr uintptr_t TimePosition = 0xd8;
         inline constexpr uintptr_t WeightTarget = 0xe0;
    }

    namespace Animator {
         inline constexpr uintptr_t ActiveAnimations = 0xab0;
         inline constexpr uintptr_t AnimTrackMetadata0 = 0x3a4;
         inline constexpr uintptr_t AnimTrackMetadata1 = 0x3a8;
         inline constexpr uintptr_t AnimTrackMetadata10 = 0x3ac;
         inline constexpr uintptr_t AnimTrackMetadata11 = 0x3b0;
         inline constexpr uintptr_t AnimTrackMetadata12 = 0x3b4;
         inline constexpr uintptr_t AnimTrackMetadata13 = 0x3b8;
         inline constexpr uintptr_t AnimTrackMetadata14 = 0x3bc;
         inline constexpr uintptr_t AnimTrackMetadata15 = 0x3c0;
         inline constexpr uintptr_t AnimTrackMetadata2 = 0x3c4;
         inline constexpr uintptr_t AnimTrackMetadata3 = 0x3c8;
         inline constexpr uintptr_t AnimTrackMetadata4 = 0x3cc;
         inline constexpr uintptr_t AnimTrackMetadata5 = 0x3d0;
         inline constexpr uintptr_t AnimTrackMetadata6 = 0x3d4;
         inline constexpr uintptr_t AnimTrackMetadata7 = 0x3d8;
         inline constexpr uintptr_t AnimTrackMetadata8 = 0x3dc;
         inline constexpr uintptr_t AnimTrackMetadata9 = 0x3e0;
         inline constexpr uintptr_t AnimTrackPlayState0 = 0xf0;
         inline constexpr uintptr_t AnimTrackPlayState1 = 0x100;
         inline constexpr uintptr_t AnimTrackPlayState10 = 0x110;
         inline constexpr uintptr_t AnimTrackPlayState11 = 0x120;
         inline constexpr uintptr_t AnimTrackPlayState12 = 0x130;
         inline constexpr uintptr_t AnimTrackPlayState13 = 0x140;
         inline constexpr uintptr_t AnimTrackPlayState14 = 0x150;
         inline constexpr uintptr_t AnimTrackPlayState15 = 0x160;
         inline constexpr uintptr_t AnimTrackPlayState2 = 0x170;
         inline constexpr uintptr_t AnimTrackPlayState3 = 0x180;
         inline constexpr uintptr_t AnimTrackPlayState4 = 0x190;
         inline constexpr uintptr_t AnimTrackPlayState5 = 0x1a0;
         inline constexpr uintptr_t AnimTrackPlayState6 = 0x1b0;
         inline constexpr uintptr_t AnimTrackPlayState7 = 0x1c0;
         inline constexpr uintptr_t AnimTrackPlayState8 = 0x1d0;
         inline constexpr uintptr_t AnimTrackPlayState9 = 0x1e0;
         inline constexpr uintptr_t AnimTrackWeight0 = 0x1f0;
         inline constexpr uintptr_t AnimTrackWeight1 = 0x200;
         inline constexpr uintptr_t AnimTrackWeight10 = 0x210;
         inline constexpr uintptr_t AnimTrackWeight11 = 0x220;
         inline constexpr uintptr_t AnimTrackWeight12 = 0x230;
         inline constexpr uintptr_t AnimTrackWeight13 = 0x240;
         inline constexpr uintptr_t AnimTrackWeight14 = 0x250;
         inline constexpr uintptr_t AnimTrackWeight15 = 0x260;
         inline constexpr uintptr_t AnimTrackWeight2 = 0x270;
         inline constexpr uintptr_t AnimTrackWeight3 = 0x280;
         inline constexpr uintptr_t AnimTrackWeight4 = 0x290;
         inline constexpr uintptr_t AnimTrackWeight5 = 0x2a0;
         inline constexpr uintptr_t AnimTrackWeight6 = 0x2b0;
         inline constexpr uintptr_t AnimTrackWeight7 = 0x2c0;
         inline constexpr uintptr_t AnimTrackWeight8 = 0x2d0;
         inline constexpr uintptr_t AnimTrackWeight9 = 0x2e0;
         inline constexpr uintptr_t AnimationId0 = 0x2f0;
         inline constexpr uintptr_t AnimationId1 = 0x2f8;
         inline constexpr uintptr_t AnimationId10 = 0x300;
         inline constexpr uintptr_t AnimationId11 = 0x308;
         inline constexpr uintptr_t AnimationId12 = 0x310;
         inline constexpr uintptr_t AnimationId13 = 0x318;
         inline constexpr uintptr_t AnimationId14 = 0x320;
         inline constexpr uintptr_t AnimationId15 = 0x328;
         inline constexpr uintptr_t AnimationId2 = 0x330;
         inline constexpr uintptr_t AnimationId3 = 0x338;
         inline constexpr uintptr_t AnimationId4 = 0x340;
         inline constexpr uintptr_t AnimationId5 = 0x348;
         inline constexpr uintptr_t AnimationId6 = 0x350;
         inline constexpr uintptr_t AnimationId7 = 0x358;
         inline constexpr uintptr_t AnimationId8 = 0x360;
         inline constexpr uintptr_t AnimationId9 = 0x368;
         inline constexpr uintptr_t PreferLodEnabled = 0x3e4;
         inline constexpr uintptr_t RootMotion = 0x370;
         inline constexpr uintptr_t RootMotionWeight = 0x3a0;
    }

    namespace ArcHandles {
         inline constexpr uintptr_t Axes = 0x120;
         inline constexpr uintptr_t MouseButton1UpConnectionCount = 0x128;
         inline constexpr uintptr_t MouseDragConnectionCount = 0x12c;
         inline constexpr uintptr_t MouseEnterConnectionCount = 0x130;
         inline constexpr uintptr_t MouseLeaveConnectionCount = 0x134;
    }

    namespace AssetDeliveryProxy {
         inline constexpr uintptr_t Interface = 0xc8;
         inline constexpr uintptr_t StartServer = 0xec;
    }

    namespace AssetService {
         inline constexpr uintptr_t AllowInsertFreeAssets = 0xc0;
    }

    namespace Atmosphere {
         inline constexpr uintptr_t Color = 0xb8;
         inline constexpr uintptr_t Decay = 0xc4;
         inline constexpr uintptr_t Density = 0xd0;
         inline constexpr uintptr_t Glare = 0xd4;
         inline constexpr uintptr_t Haze = 0xd8;
         inline constexpr uintptr_t Offset = 0xdc;
    }

    namespace Attachment {
         inline constexpr uintptr_t Position = 0xc4;
    }

    namespace AudioChorus {
         inline constexpr uintptr_t Bypass = 0x144;
         inline constexpr uintptr_t Depth = 0x138;
         inline constexpr uintptr_t Mix = 0x13c;
         inline constexpr uintptr_t Rate = 0x140;
    }

    namespace AudioCompressor {
         inline constexpr uintptr_t Attack = 0x138;
         inline constexpr uintptr_t MakeupGain = 0x13c;
         inline constexpr uintptr_t Ratio = 0x140;
         inline constexpr uintptr_t Release = 0x144;
         inline constexpr uintptr_t Threshold = 0x148;
    }

    namespace AudioEcho {
         inline constexpr uintptr_t DelayTime = 0x138;
         inline constexpr uintptr_t DryLevel = 0x13c;
         inline constexpr uintptr_t Feedback = 0x140;
         inline constexpr uintptr_t RampTime = 0x144;
         inline constexpr uintptr_t WetLevel = 0x148;
    }

    namespace AudioEqualizer {
         inline constexpr uintptr_t HighGain = 0x140;
         inline constexpr uintptr_t LowGain = 0x144;
         inline constexpr uintptr_t MidGain = 0x148;
         inline constexpr uintptr_t MidRange = 0x138;
    }

    namespace AudioFilter {
         inline constexpr uintptr_t Bypass = 0x148;
         inline constexpr uintptr_t Frequency = 0x13c;
         inline constexpr uintptr_t Gain = 0x140;
         inline constexpr uintptr_t Q = 0x144;
    }

    namespace AudioFlanger {
         inline constexpr uintptr_t Bypass = 0x144;
         inline constexpr uintptr_t Depth = 0x138;
         inline constexpr uintptr_t Mix = 0x13c;
         inline constexpr uintptr_t Rate = 0x140;
    }

    namespace AudioGate {
         inline constexpr uintptr_t Attack = 0x140;
         inline constexpr uintptr_t Bypass = 0x148;
         inline constexpr uintptr_t Release = 0x144;
         inline constexpr uintptr_t Threshold = 0x138;
    }

    namespace AudioLimiter {
         inline constexpr uintptr_t MaxLevel = 0x138;
         inline constexpr uintptr_t Release = 0x13c;
    }

    namespace AudioReverb {
         inline constexpr uintptr_t DecayRatio = 0x138;
         inline constexpr uintptr_t DecayTime = 0x13c;
         inline constexpr uintptr_t Density = 0x140;
         inline constexpr uintptr_t Diffusion = 0x144;
         inline constexpr uintptr_t DryLevel = 0x148;
         inline constexpr uintptr_t LateDelayTime = 0x154;
         inline constexpr uintptr_t LowShelfFrequency = 0x158;
         inline constexpr uintptr_t LowShelfGain = 0x15c;
         inline constexpr uintptr_t ReferenceFrequency = 0x160;
         inline constexpr uintptr_t WetLevel = 0x164;
    }

    namespace AudioSearchParams {
         inline constexpr uintptr_t MaxDuration = 0x15c;
         inline constexpr uintptr_t MinDuration = 0x160;
    }

    namespace AudioTextToSpeech {
         inline constexpr uintptr_t IsPlaying = 0x190;
         inline constexpr uintptr_t Looping = 0x191;
         inline constexpr uintptr_t Pitch = 0x180;
         inline constexpr uintptr_t PlaybackSpeed = 0x184;
         inline constexpr uintptr_t Speed = 0x188;
         inline constexpr uintptr_t Volume = 0x18c;
    }

    namespace AudioTremolo {
         inline constexpr uintptr_t Depth = 0x138;
         inline constexpr uintptr_t Duty = 0x13c;
         inline constexpr uintptr_t Frequency = 0x140;
         inline constexpr uintptr_t Shape = 0x144;
         inline constexpr uintptr_t Skew = 0x148;
    }

    namespace AuroraScriptObject {
         inline constexpr uintptr_t FrameId = 0xd0;
         inline constexpr uintptr_t MaxFrequency = 0xd8;
         inline constexpr uintptr_t PriorFrameInvoked = 0xdc;
    }

    namespace AuroraService {
         inline constexpr uintptr_t BufferFullInputCount = 0xe0;
         inline constexpr uintptr_t InputDropRate = 0xe4;
         inline constexpr uintptr_t OutOfOrderInputCount = 0xe8;
         inline constexpr uintptr_t RollbackOffset = 0xec;
         inline constexpr uintptr_t TooOldInputCount = 0xf0;
    }

    namespace AvatarAccessoryRules {
         inline constexpr uintptr_t CustomBackAccessoryId = 0xb0;
         inline constexpr uintptr_t CustomFaceAccessoryId = 0xb8;
         inline constexpr uintptr_t CustomFrontAccessoryId = 0xc0;
         inline constexpr uintptr_t CustomHairAccessoryId = 0xc8;
         inline constexpr uintptr_t CustomHeadAccessoryEnabled = 0x10c;
         inline constexpr uintptr_t CustomHeadAccessoryId = 0xd0;
         inline constexpr uintptr_t CustomNeckAccessoryEnabled = 0x10d;
         inline constexpr uintptr_t CustomNeckAccessoryId = 0xd8;
         inline constexpr uintptr_t CustomShoulderAccessoryEnabled = 0x10e;
         inline constexpr uintptr_t CustomShoulderAccessoryId = 0xe0;
         inline constexpr uintptr_t CustomWaistAccessoryEnabled = 0x10f;
         inline constexpr uintptr_t CustomWaistAccessoryId = 0xe8;
         inline constexpr uintptr_t EnableEmissives = 0x110;
         inline constexpr uintptr_t EnableSound = 0x111;
         inline constexpr uintptr_t LimitBounds = 0xf0;
    }

    namespace AvatarAnimationRules {
         inline constexpr uintptr_t CustomClimbAnimationId = 0xb0;
         inline constexpr uintptr_t CustomFallAnimationId = 0xb8;
         inline constexpr uintptr_t CustomIdleAlt1AnimationId = 0xc0;
         inline constexpr uintptr_t CustomIdleAlt2AnimationId = 0xc8;
         inline constexpr uintptr_t CustomIdleAnimationEnabled = 0x10c;
         inline constexpr uintptr_t CustomIdleAnimationId = 0xd0;
         inline constexpr uintptr_t CustomJumpAnimationEnabled = 0x10d;
         inline constexpr uintptr_t CustomJumpAnimationId = 0xd8;
         inline constexpr uintptr_t CustomRunAnimationEnabled = 0x10e;
         inline constexpr uintptr_t CustomRunAnimationId = 0xe0;
         inline constexpr uintptr_t CustomSwimAnimationEnabled = 0x10f;
         inline constexpr uintptr_t CustomSwimAnimationId = 0xe8;
         inline constexpr uintptr_t CustomSwimIdleAnimationEnabled = 0x110;
         inline constexpr uintptr_t CustomSwimIdleAnimationId = 0xf0;
         inline constexpr uintptr_t CustomWalkAnimationEnabled = 0x111;
         inline constexpr uintptr_t CustomWalkAnimationId = 0xf8;
    }

    namespace AvatarClothingRules {
         inline constexpr uintptr_t CustomClassicPantsAccessoryEnabled = 0x124;
         inline constexpr uintptr_t CustomClassicPantsAccessoryId = 0xb0;
         inline constexpr uintptr_t CustomClassicShirtsAccessoryEnabled = 0x125;
         inline constexpr uintptr_t CustomClassicShirtsAccessoryId = 0xb8;
         inline constexpr uintptr_t CustomClassicTShirtsAccessoryId = 0xc0;
         inline constexpr uintptr_t CustomDressSkirtAccessoryEnabled = 0x127;
         inline constexpr uintptr_t CustomDressSkirtAccessoryId = 0xc8;
         inline constexpr uintptr_t CustomJacketAccessoryId = 0xd0;
         inline constexpr uintptr_t CustomLeftShoesAccessoryId = 0xd8;
         inline constexpr uintptr_t CustomPantsAccessoryId = 0xe0;
         inline constexpr uintptr_t CustomRightShoesAccessoryId = 0xe8;
         inline constexpr uintptr_t CustomShirtAccessoryId = 0xf0;
         inline constexpr uintptr_t CustomShortsAccessoryId = 0xf8;
         inline constexpr uintptr_t CustomSweaterAccessoryId = 0x100;
    }

    namespace BallSocketConstraint {
         inline constexpr uintptr_t MaxFrictionTorque = 0x170;
         inline constexpr uintptr_t Radius = 0x174;
         inline constexpr uintptr_t Restitution = 0x178;
         inline constexpr uintptr_t TwistLowerAngle = 0x17c;
         inline constexpr uintptr_t TwistUpperAngle = 0x180;
    }

    namespace BaseCoreGuiConfiguration {
         inline constexpr uintptr_t Enabled = 0xb0;
    }

    namespace BasePart {
         inline constexpr uintptr_t AudioCanCollide = 0x134;
         inline constexpr uintptr_t BackParamA = 0xc8;
         inline constexpr uintptr_t BackParamB = 0xcc;
         inline constexpr uintptr_t CastShadow = 0x135;
         inline constexpr uintptr_t Color3 = 0x1a8;
         inline constexpr uintptr_t LocalTransparencyModifier = 0x108;
         inline constexpr uintptr_t Locked = 0x136;
         inline constexpr uintptr_t Massless = 0x137;
         inline constexpr uintptr_t Primitive = 0x188;
         inline constexpr uintptr_t Reflectance = 0x10c;
         inline constexpr uintptr_t Shape = 0x1b8;
         inline constexpr uintptr_t Transparency = 0x130;
    }

    namespace Beam {
         inline constexpr uintptr_t Attachment0 = 0x160;
         inline constexpr uintptr_t Attachment1 = 0x170;
         inline constexpr uintptr_t Brightness = 0x180;
         inline constexpr uintptr_t CurveSize0 = 0x184;
         inline constexpr uintptr_t CurveSize1 = 0x188;
         inline constexpr uintptr_t Enabled = 0x1b4;
         inline constexpr uintptr_t FaceCamera = 0x1b5;
         inline constexpr uintptr_t LightEmission = 0x18c;
         inline constexpr uintptr_t LightInfluence = 0x190;
         inline constexpr uintptr_t LocalTransparencyModifier = 0x194;
         inline constexpr uintptr_t Segments = 0x198;
         inline constexpr uintptr_t Texture = 0x140;
         inline constexpr uintptr_t TextureLength = 0x19c;
         inline constexpr uintptr_t TextureSpeed = 0x1a4;
         inline constexpr uintptr_t Transparency = 0xb8;
         inline constexpr uintptr_t Width0 = 0x1a8;
         inline constexpr uintptr_t Width1 = 0x1ac;
         inline constexpr uintptr_t ZOffset = 0x1b0;
    }

    namespace BevelMesh {
         inline constexpr uintptr_t Bevel = 0xe0;
         inline constexpr uintptr_t Bulge = 0xe8;
         inline constexpr uintptr_t Data = 0xe4;
    }

    namespace BillboardGui {
         inline constexpr uintptr_t Active = 0x7bc;
         inline constexpr uintptr_t AlwaysOnTop = 0x7bd;
         inline constexpr uintptr_t Brightness = 0x7a0;
         inline constexpr uintptr_t ClipsDescendants = 0x7be;
         inline constexpr uintptr_t CurrentDistance = 0x7a4;
         inline constexpr uintptr_t DistanceLowerLimit = 0x7a8;
         inline constexpr uintptr_t DistanceStep = 0x7ac;
         inline constexpr uintptr_t DistanceUpperLimit = 0x7b0;
         inline constexpr uintptr_t ExtentsOffset = 0x768;
         inline constexpr uintptr_t ExtentsOffsetWorldSpace = 0x774;
         inline constexpr uintptr_t LightInfluence = 0x7b4;
         inline constexpr uintptr_t MaxDistance = 0x7b8;
         inline constexpr uintptr_t Size = 0x758;
         inline constexpr uintptr_t StudsOffset = 0x780;
         inline constexpr uintptr_t StudsOffsetWorldSpace = 0x78c;
    }

    namespace BloomEffect {
         inline constexpr uintptr_t Enabled = 0xb0;
         inline constexpr uintptr_t Intensity = 0xb8;
         inline constexpr uintptr_t Size = 0xbc;
         inline constexpr uintptr_t Threshold = 0xc0;
    }

    namespace BlurEffect {
         inline constexpr uintptr_t Enabled = 0xb0;
         inline constexpr uintptr_t Size = 0xb8;
    }

    namespace BodyForce {
         inline constexpr uintptr_t Force = 0x280;
    }

    namespace BodyPartDescription {
         inline constexpr uintptr_t AssetId = 0xe0;
    }

    namespace BoolValue {
         inline constexpr uintptr_t Value = 0xb8;
    }

    namespace BrickColorValue {
         inline constexpr uintptr_t Value = 0xb8;
    }

    namespace BubbleChatConfiguration {
         inline constexpr uintptr_t BackgroundColor3 = 0xf0;
         inline constexpr uintptr_t BubbleDuration = 0x114;
         inline constexpr uintptr_t BubblesSpacing = 0x118;
         inline constexpr uintptr_t LocalPlayerStudsOffset = 0xfc;
         inline constexpr uintptr_t MaxBubbles = 0x11c;
         inline constexpr uintptr_t MaxDistance = 0x120;
         inline constexpr uintptr_t MinimizeDistance = 0x124;
         inline constexpr uintptr_t TextColor3 = 0x108;
         inline constexpr uintptr_t TextSize = 0xe8;
         inline constexpr uintptr_t VerticalStudsOffset = 0x128;
    }

    namespace ByteCode {
         inline constexpr uintptr_t Pointer = 0x10;
         inline constexpr uintptr_t Size = 0x28;
    }

    namespace CachedItem {
         inline constexpr uintptr_t FileMeshData = 0x40;
    }

    namespace Camera {
         inline constexpr uintptr_t CameraSubject = 0xc8;
         inline constexpr uintptr_t CameraType = 0x138;
         inline constexpr uintptr_t FieldOfView = 0x140;
         inline constexpr uintptr_t HeadLocked = 0x154;
         inline constexpr uintptr_t HeadScale = 0x148;
         inline constexpr uintptr_t ImagePlaneDepth = 0x2d4;
         inline constexpr uintptr_t NearPlaneZ = 0x150;
         inline constexpr uintptr_t Position = 0xfc;
         inline constexpr uintptr_t Rotation = 0xd8;
         inline constexpr uintptr_t VRTiltAndRollEnabled = 0x155;
         inline constexpr uintptr_t Viewport = 0x28c;
         inline constexpr uintptr_t ViewportSize = 0x2cc;
         inline constexpr uintptr_t focus = 0x108;
    }

    namespace CanvasGroup {
         inline constexpr uintptr_t ResolutionScale = 0x9a0;
    }

    namespace CapturesViewConfiguration {
         inline constexpr uintptr_t Open = 0xb8;
    }

    namespace ChannelSelectorSoundEffect {
         inline constexpr uintptr_t Channel = 0x100;
    }

    namespace ChannelTabsConfiguration {
         inline constexpr uintptr_t BackgroundColor3 = 0xd8;
         inline constexpr uintptr_t BackgroundTransparency = 0xb8;
         inline constexpr uintptr_t Enabled = 0x124;
         inline constexpr uintptr_t HoverBackgroundColor3 = 0xe4;
         inline constexpr uintptr_t SelectedTabTextColor3 = 0xf0;
         inline constexpr uintptr_t TextColor3 = 0xfc;
         inline constexpr uintptr_t TextSize = 0xc8;
         inline constexpr uintptr_t TextStrokeColor3 = 0x108;
    }

    namespace CharacterMesh {
         inline constexpr uintptr_t BaseTextureId = 0xc8;
         inline constexpr uintptr_t BodyPart = 0x148;
         inline constexpr uintptr_t MeshId = 0xf8;
         inline constexpr uintptr_t OverlayTextureId = 0x128;
    }

    namespace ChorusSoundEffect {
         inline constexpr uintptr_t Depth = 0xf8;
         inline constexpr uintptr_t Mix = 0xfc;
         inline constexpr uintptr_t Rate = 0x100;
    }

    namespace ClickDetector {
         inline constexpr uintptr_t MaxActivationDistance = 0xe8;
         inline constexpr uintptr_t MouseIcon = 0xc8;
    }

    namespace ClimbController {
         inline constexpr uintptr_t AccelerationTime = 0xe0;
         inline constexpr uintptr_t BalanceMaxTorque = 0xe4;
         inline constexpr uintptr_t BalanceSpeed = 0xe8;
         inline constexpr uintptr_t MoveMaxForce = 0xec;
    }

    namespace Clothing {
         inline constexpr uintptr_t Color3 = 0x120;
         inline constexpr uintptr_t Template = 0x100;
    }

    namespace Clouds {
         inline constexpr uintptr_t Cover = 0xbc;
         inline constexpr uintptr_t Density = 0xc0;
         inline constexpr uintptr_t Enabled = 0xc4;
    }

    namespace ColorCorrectionEffect {
         inline constexpr uintptr_t Brightness = 0xc4;
         inline constexpr uintptr_t Contrast = 0xc8;
         inline constexpr uintptr_t Enabled = 0xb0;
         inline constexpr uintptr_t Saturation = 0xcc;
         inline constexpr uintptr_t TintColor = 0xb8;
    }

    namespace ColorGradingEffect {
         inline constexpr uintptr_t Enabled = 0xb0;
         inline constexpr uintptr_t TonemapperPreset = 0xb8;
    }

    namespace CompressorSoundEffect {
         inline constexpr uintptr_t Attack = 0x108;
         inline constexpr uintptr_t Release = 0x114;
         inline constexpr uintptr_t Threshold = 0x118;
    }

    namespace Constraint {
         inline constexpr uintptr_t Enabled = 0xb9;
    }

    namespace ControllerBase {
         inline constexpr uintptr_t MoveSpeedFactor = 0xb8;
    }

    namespace ControllerManager {
         inline constexpr uintptr_t BaseMoveSpeed = 0x234;
         inline constexpr uintptr_t BaseTurnSpeed = 0x238;
         inline constexpr uintptr_t UpDirection = 0x228;
    }

    namespace CustomEvent {
         inline constexpr uintptr_t PersistedCurrentValue = 0xb0;
    }

    namespace CylinderHandleAdornment {
         inline constexpr uintptr_t Angle = 0x1a8;
         inline constexpr uintptr_t Height = 0x1ac;
         inline constexpr uintptr_t InnerRadius = 0x1b0;
         inline constexpr uintptr_t Radius = 0x1b4;
    }

    namespace DataModel {
         inline constexpr uintptr_t CreatorId = 0x188;
         inline constexpr uintptr_t GameId = 0x190;
         inline constexpr uintptr_t GameLoaded = 0x5e0;
         inline constexpr uintptr_t JobId = 0x120;
         inline constexpr uintptr_t PlaceId = 0x198;
         inline constexpr uintptr_t PlaceVersion = 0x1b4;
         inline constexpr uintptr_t PrimitiveCount = 0x428;
         inline constexpr uintptr_t ScriptContext = 0x440;
         inline constexpr uintptr_t ServerIP = 0x5c8;
         inline constexpr uintptr_t ToRenderView1 = 0x1d0;
         inline constexpr uintptr_t ToRenderView2 = 0x8;
         inline constexpr uintptr_t ToRenderView3 = 0x28;
         inline constexpr uintptr_t Workspace = 0x160;
    }

    namespace DataModelMesh {
         inline constexpr uintptr_t Offset = 0xb8;
    }

    namespace DataStoreGetOptions {
         inline constexpr uintptr_t UseCache = 0xb0;
    }

    namespace DataStoreInfo {
         inline constexpr uintptr_t CreatedTime = 0xd0;
         inline constexpr uintptr_t UpdatedTime = 0xd8;
    }

    namespace DataStoreKeyInfo {
         inline constexpr uintptr_t CreatedTime = 0xd0;
         inline constexpr uintptr_t UpdatedTime = 0xd8;
    }

    namespace DataStoreObjectVersionInfo {
         inline constexpr uintptr_t CreatedTime = 0xd0;
         inline constexpr uintptr_t IsDeleted = 0xd8;
    }

    namespace DataStoreOptions {
         inline constexpr uintptr_t AllScopes = 0xb0;
    }

    namespace DataStoreService {
         inline constexpr uintptr_t AutomaticRetry = 0xc8;
         inline constexpr uintptr_t LegacyNamingScheme = 0xc9;
    }

    namespace Debris {
         inline constexpr uintptr_t MaxItems = 0xc8;
    }

    namespace DebuggerManager {
         inline constexpr uintptr_t DebuggingEnabled = 0xc0;
    }

    namespace DeferredAssetManagerService {
         inline constexpr uintptr_t JoiningPlaceId = 0xc8;
         inline constexpr uintptr_t JoiningUniverseId = 0xd0;
         inline constexpr uintptr_t PregameLoadingScreenOnly = 0xd8;
    }

    namespace DepthOfFieldEffect {
         inline constexpr uintptr_t Enabled = 0xb0;
         inline constexpr uintptr_t FarIntensity = 0xb8;
         inline constexpr uintptr_t FocusDistance = 0xbc;
         inline constexpr uintptr_t InFocusRadius = 0xc0;
         inline constexpr uintptr_t NearIntensity = 0xc4;
    }

    namespace Dialog {
         inline constexpr uintptr_t ConversationDistance = 0x100;
         inline constexpr uintptr_t GoodbyeChoiceActive = 0x110;
         inline constexpr uintptr_t InUse = 0x111;
         inline constexpr uintptr_t TriggerDistance = 0x10c;
         inline constexpr uintptr_t TriggerOffset = 0xf0;
    }

    namespace DistortionSoundEffect {
         inline constexpr uintptr_t Level = 0xf8;
    }

    namespace DockWidgetPluginGui {
         inline constexpr uintptr_t HostWidgetWasRestored = 0x8a0;
    }

    namespace DragDetector {
         inline constexpr uintptr_t ActivatedCursorIcon = 0x1c0;
         inline constexpr uintptr_t ApplyAtCenterOfMass = 0x2d0;
         inline constexpr uintptr_t Axis = 0x260;
         inline constexpr uintptr_t CursorIcon = 0xc8;
         inline constexpr uintptr_t Enabled = 0x2d1;
         inline constexpr uintptr_t MaxActivationDistance = 0xe8;
         inline constexpr uintptr_t MaxDragAngle = 0x2a8;
         inline constexpr uintptr_t MaxDragTranslation = 0x26c;
         inline constexpr uintptr_t MaxForce = 0x2ac;
         inline constexpr uintptr_t MaxTorque = 0x2b0;
         inline constexpr uintptr_t MinDragAngle = 0x2b4;
         inline constexpr uintptr_t MinDragTranslation = 0x278;
         inline constexpr uintptr_t PhysicalDragHitPoint = 0x284;
         inline constexpr uintptr_t PhysicalDragIsInVR = 0x2d2;
         inline constexpr uintptr_t PhysicalDragTargetFrame = 0x230;
         inline constexpr uintptr_t ReferenceInstance = 0x1f0;
         inline constexpr uintptr_t Responsiveness = 0x2c0;
         inline constexpr uintptr_t RunLocally = 0x2d3;
         inline constexpr uintptr_t SecondaryAxis = 0x290;
    }

    namespace EchoSoundEffect {
         inline constexpr uintptr_t Delay = 0xf8;
         inline constexpr uintptr_t DryLevel = 0xfc;
         inline constexpr uintptr_t Feedback = 0x100;
         inline constexpr uintptr_t WetLevel = 0x104;
    }

    namespace EqualizerSoundEffect {
         inline constexpr uintptr_t HighGain = 0xf8;
         inline constexpr uintptr_t LowGain = 0xfc;
         inline constexpr uintptr_t MidGain = 0x100;
    }

    namespace ExperienceInviteOptions {
         inline constexpr uintptr_t InviteUser = 0x110;
    }

    namespace ExperienceStateRecordingService {
         inline constexpr uintptr_t IsServerDataModelRecorderActive = 0xc8;
    }

    namespace FaceControls {
         inline constexpr uintptr_t ChinRaiser = 0xe0;
         inline constexpr uintptr_t ChinRaiserUpperLip = 0xe4;
         inline constexpr uintptr_t Corrugator = 0xe8;
         inline constexpr uintptr_t EyesLookDown = 0xec;
         inline constexpr uintptr_t EyesLookLeft = 0xf0;
         inline constexpr uintptr_t EyesLookRight = 0xf4;
         inline constexpr uintptr_t EyesLookUp = 0xf8;
         inline constexpr uintptr_t FlatPucker = 0xfc;
         inline constexpr uintptr_t Funneler = 0x100;
         inline constexpr uintptr_t InternalOverrideFACSData = 0xb8;
         inline constexpr uintptr_t JawDrop = 0x104;
         inline constexpr uintptr_t JawLeft = 0x108;
         inline constexpr uintptr_t JawRight = 0x10c;
         inline constexpr uintptr_t LeftBrowLowerer = 0x110;
         inline constexpr uintptr_t LeftCheekPuff = 0x114;
         inline constexpr uintptr_t LeftCheekRaiser = 0x118;
         inline constexpr uintptr_t LeftDimpler = 0x11c;
         inline constexpr uintptr_t LeftEyeClosed = 0x120;
         inline constexpr uintptr_t LeftEyeUpperLidRaiser = 0x124;
         inline constexpr uintptr_t LeftInnerBrowRaiser = 0x128;
         inline constexpr uintptr_t LeftLipCornerDown = 0x12c;
         inline constexpr uintptr_t LeftLipCornerPuller = 0x130;
         inline constexpr uintptr_t LeftLipStretcher = 0x134;
         inline constexpr uintptr_t LeftLowerLipDepressor = 0x138;
         inline constexpr uintptr_t LeftNoseWrinkler = 0x13c;
         inline constexpr uintptr_t LeftOuterBrowRaiser = 0x140;
         inline constexpr uintptr_t LeftUpperLipRaiser = 0x144;
         inline constexpr uintptr_t LipPresser = 0x148;
         inline constexpr uintptr_t LipsTogether = 0x14c;
         inline constexpr uintptr_t LowerLipSuck = 0x150;
         inline constexpr uintptr_t MouthLeft = 0x154;
         inline constexpr uintptr_t MouthRight = 0x158;
         inline constexpr uintptr_t Pucker = 0x15c;
         inline constexpr uintptr_t RightBrowLowerer = 0x160;
         inline constexpr uintptr_t RightCheekPuff = 0x164;
         inline constexpr uintptr_t RightCheekRaiser = 0x168;
         inline constexpr uintptr_t RightDimpler = 0x16c;
         inline constexpr uintptr_t RightEyeClosed = 0x170;
         inline constexpr uintptr_t RightEyeUpperLidRaiser = 0x174;
         inline constexpr uintptr_t RightInnerBrowRaiser = 0x178;
         inline constexpr uintptr_t RightLipCornerDown = 0x17c;
         inline constexpr uintptr_t RightLipCornerPuller = 0x180;
         inline constexpr uintptr_t RightLipStretcher = 0x184;
         inline constexpr uintptr_t RightLowerLipDepressor = 0x188;
         inline constexpr uintptr_t RightNoseWrinkler = 0x18c;
         inline constexpr uintptr_t RightOuterBrowRaiser = 0x190;
         inline constexpr uintptr_t RightUpperLipRaiser = 0x194;
         inline constexpr uintptr_t TongueDown = 0x198;
         inline constexpr uintptr_t TongueOut = 0x19c;
         inline constexpr uintptr_t TongueUp = 0x1a0;
         inline constexpr uintptr_t UpperLipSuck = 0x1a4;
    }

    namespace FakeDataModel {
         inline constexpr uintptr_t Pointer = 0x8e42c98;
         inline constexpr uintptr_t RealDataModel = 0x1f8;
    }

    namespace FileMeshData {
         inline constexpr uintptr_t AABBMax = 0x18c;
         inline constexpr uintptr_t AABBMin = 0x180;
         inline constexpr uintptr_t Faces = 0x30;
         inline constexpr uintptr_t FacesEnd = 0x38;
         inline constexpr uintptr_t Vertices = 0x0;
         inline constexpr uintptr_t VerticesEnd = 0x8;
    }

    namespace Fire {
         inline constexpr uintptr_t Enabled = 0xe0;
         inline constexpr uintptr_t Heat = 0xd8;
         inline constexpr uintptr_t Size = 0xdc;
         inline constexpr uintptr_t TimeScale = 0xd4;
    }

    namespace FlagStand {
         inline constexpr uintptr_t TeamColor = 0x1e0;
    }

    namespace FlangeSoundEffect {
         inline constexpr uintptr_t Depth = 0xf8;
         inline constexpr uintptr_t Mix = 0xfc;
         inline constexpr uintptr_t Rate = 0x100;
    }

    namespace FloorWire {
         inline constexpr uintptr_t CycleOffset = 0x148;
         inline constexpr uintptr_t StudsBetweenTextures = 0x14c;
         inline constexpr uintptr_t TextureSize = 0x140;
         inline constexpr uintptr_t Velocity = 0x150;
         inline constexpr uintptr_t WireRadius = 0x154;
    }

    namespace ForceField {
         inline constexpr uintptr_t Visible = 0xb8;
    }

    namespace GamepadService {
         inline constexpr uintptr_t GamepadCursorEnabled = 0xc8;
    }

    namespace GroundController {
         inline constexpr uintptr_t AccelerationLean = 0xe0;
         inline constexpr uintptr_t AccelerationTime = 0xe4;
         inline constexpr uintptr_t BalanceMaxTorque = 0xe8;
         inline constexpr uintptr_t BalanceSpeed = 0xec;
         inline constexpr uintptr_t DecelerationTime = 0xf0;
         inline constexpr uintptr_t GroundOffset = 0xfc;
         inline constexpr uintptr_t StandForce = 0x100;
         inline constexpr uintptr_t StandSpeed = 0x104;
         inline constexpr uintptr_t TurnSpeedFactor = 0x108;
    }

    namespace GuiBase2D {
         inline constexpr uintptr_t AbsolutePosition = 0x10c;
         inline constexpr uintptr_t AbsoluteRotation = 0xe8;
         inline constexpr uintptr_t AbsoluteSize = 0x114;
         inline constexpr uintptr_t IsNotOccluded = 0x135;
         inline constexpr uintptr_t TotalGroupScale = 0x130;
    }

    namespace GuiBase3d {
         inline constexpr uintptr_t Transparency = 0xe4;
         inline constexpr uintptr_t Visible = 0xe8;
    }

    namespace GuiButton {
         inline constexpr uintptr_t AutoButtonColor = 0x9dc;
         inline constexpr uintptr_t MouseButton1ClickConnectionCount = 0x9c0;
         inline constexpr uintptr_t MouseButton1DownConnectionCount = 0x9c4;
         inline constexpr uintptr_t MouseButton2DownConnectionCount = 0x9d0;
         inline constexpr uintptr_t Selected = 0x9de;
    }

    namespace GuiObject {
         inline constexpr uintptr_t Active = 0x5a8;
         inline constexpr uintptr_t BackgroundColor3 = 0x540;
         inline constexpr uintptr_t BackgroundTransparency = 0x54c;
         inline constexpr uintptr_t BorderColor3 = 0x54c;
         inline constexpr uintptr_t DragBeginConnectionCount = 0x570;
         inline constexpr uintptr_t DragStoppedConnectionCount = 0x574;
         inline constexpr uintptr_t Draggable = 0x5aa;
         inline constexpr uintptr_t Image = 0x9a0;
         inline constexpr uintptr_t LayoutOrder = 0x57c;
         inline constexpr uintptr_t MouseEnterConnectionCount = 0x580;
         inline constexpr uintptr_t MouseLeaveConnectionCount = 0x584;
         inline constexpr uintptr_t MouseMovedConnectionCount = 0x588;
         inline constexpr uintptr_t MouseWheelBackwardConnectionCount = 0x58c;
         inline constexpr uintptr_t MouseWheelForwardConnectionCount = 0x590;
         inline constexpr uintptr_t Position = 0x510;
         inline constexpr uintptr_t RichText = 0xb98;
         inline constexpr uintptr_t Rotation = 0xe8;
         inline constexpr uintptr_t ScreenGui_Enabled = 0x4c4;
         inline constexpr uintptr_t Selectable = 0x5ac;
         inline constexpr uintptr_t Size = 0x530;
         inline constexpr uintptr_t Text = 0xe00;
         inline constexpr uintptr_t TextColor3 = 0xeb0;
         inline constexpr uintptr_t Visible = 0x5ad;
         inline constexpr uintptr_t ZIndex = 0x5a4;
    }

    namespace GuiService {
         inline constexpr uintptr_t GuiNavigationEnabled = 0x108;
    }

    namespace HandleAdornment {
         inline constexpr uintptr_t AlwaysOnTop = 0x15c;
    }

    namespace Handles {
         inline constexpr uintptr_t Faces = 0x120;
         inline constexpr uintptr_t MouseButton1UpConnectionCount = 0x128;
         inline constexpr uintptr_t MouseDragConnectionCount = 0x12c;
         inline constexpr uintptr_t MouseEnterConnectionCount = 0x130;
         inline constexpr uintptr_t MouseLeaveConnectionCount = 0x134;
    }

    namespace HingeConstraint {
         inline constexpr uintptr_t AngularSpeed = 0x178;
         inline constexpr uintptr_t AngularVelocity = 0x17c;
         inline constexpr uintptr_t LowerAngle = 0x180;
         inline constexpr uintptr_t Radius = 0x18c;
         inline constexpr uintptr_t Restitution = 0x190;
         inline constexpr uintptr_t ServoMaxTorque = 0x194;
         inline constexpr uintptr_t TargetAngle = 0x198;
         inline constexpr uintptr_t UpperAngle = 0x19c;
    }

    namespace HttpService {
         inline constexpr uintptr_t HttpEnabled = 0xc0;
    }

    namespace Humanoid {
         inline constexpr uintptr_t AutoJumpEnabled = 0x1d4;
         inline constexpr uintptr_t AutoRotate = 0x1d5;
         inline constexpr uintptr_t AutomaticScalingEnabled = 0x1d6;
         inline constexpr uintptr_t BreakJointsOnDeath = 0xc5;
         inline constexpr uintptr_t CameraOffset = 0x128;
         inline constexpr uintptr_t DisplayDistanceType = 0x180;
         inline constexpr uintptr_t DisplayName = 0xb8;
         inline constexpr uintptr_t EvaluateStateMachine = 0x1d8;
         inline constexpr uintptr_t FinishedState = 0x1d9;
         inline constexpr uintptr_t FloorMaterial = 0x184;
         inline constexpr uintptr_t Health = 0x190;
         inline constexpr uintptr_t HealthDisplayDistance = 0x188;
         inline constexpr uintptr_t HealthDisplayType = 0x18c;
         inline constexpr uintptr_t Health_XML = 0x190;
         inline constexpr uintptr_t HipHeight = 0x194;
         inline constexpr uintptr_t HumanoidRootPart = 0x470;
         inline constexpr uintptr_t HumanoidState = 0x8b8;
         inline constexpr uintptr_t HumanoidStateID = 0x20;
         inline constexpr uintptr_t InternalBodyScale = 0x134;
         inline constexpr uintptr_t InternalHeadScale = 0x198;
         inline constexpr uintptr_t InternalOriginalHipHeight = 0x19c;
         inline constexpr uintptr_t IsWalking = 0x95f;
         inline constexpr uintptr_t Jump = 0x1da;
         inline constexpr uintptr_t JumpHeight = 0x1a0;
         inline constexpr uintptr_t JumpPower = 0x1a4;
         inline constexpr uintptr_t MaxHealth = 0x1a8;
         inline constexpr uintptr_t MaxSlopeAngle = 0x1ac;
         inline constexpr uintptr_t MoveDirection = 0x140;
         inline constexpr uintptr_t MoveToPart = 0x118;
         inline constexpr uintptr_t MoveToPoint = 0x164;
         inline constexpr uintptr_t NameDisplayDistance = 0x1b0;
         inline constexpr uintptr_t NameOcclusion = 0x1b4;
         inline constexpr uintptr_t NoFloorTimerState = 0x1bc;
         inline constexpr uintptr_t OverrideDefaultCollisions = 0x1db;
         inline constexpr uintptr_t PlatformStand = 0x1dc;
         inline constexpr uintptr_t PlatformStatePointer = 0x0;
         inline constexpr uintptr_t RequiresNeck = 0x1dd;
         inline constexpr uintptr_t RigType = 0x1c0;
         inline constexpr uintptr_t SeatPart = 0x108;
         inline constexpr uintptr_t Sit = 0x1dd;
         inline constexpr uintptr_t Strafe = 0x1df;
         inline constexpr uintptr_t TargetPoint = 0x14c;
         inline constexpr uintptr_t UseJumpPower = 0x1e0;
         inline constexpr uintptr_t WalkDirection = 0x158;
         inline constexpr uintptr_t WalkTimer = 0x400;
         inline constexpr uintptr_t WalkToPoint = 0x164;
         inline constexpr uintptr_t Walkspeed = 0x1d0;
         inline constexpr uintptr_t WalkspeedCheck = 0x3b4;
    }

    namespace HumanoidDescription {
         inline constexpr uintptr_t BodyTypeScale = 0x138;
         inline constexpr uintptr_t ClimbAnimation = 0xd8;
         inline constexpr uintptr_t DepthScale = 0x13c;
         inline constexpr uintptr_t Face = 0xe0;
         inline constexpr uintptr_t FallAnimation = 0xe8;
         inline constexpr uintptr_t GraphicTShirt = 0xf0;
         inline constexpr uintptr_t HeadScale = 0x140;
         inline constexpr uintptr_t HeightScale = 0x144;
         inline constexpr uintptr_t IdleAnimation = 0xf8;
         inline constexpr uintptr_t JumpAnimation = 0x100;
         inline constexpr uintptr_t NumberEmotesLoaded = 0x148;
         inline constexpr uintptr_t Pants = 0x110;
         inline constexpr uintptr_t ProportionScale = 0x14c;
         inline constexpr uintptr_t RunAnimation = 0x118;
         inline constexpr uintptr_t Shirt = 0x120;
         inline constexpr uintptr_t SwimAnimation = 0x128;
         inline constexpr uintptr_t WalkAnimation = 0x130;
         inline constexpr uintptr_t WidthScale = 0x150;
    }

    namespace HumanoidRigDescription {
         inline constexpr uintptr_t ChestRangeMax = 0x680;
         inline constexpr uintptr_t ChestRangeMin = 0x68c;
         inline constexpr uintptr_t ChestSize = 0x890;
         inline constexpr uintptr_t ChestTposeAdjustment = 0x230;
         inline constexpr uintptr_t HeadBaseRangeMax = 0x698;
         inline constexpr uintptr_t HeadBaseRangeMin = 0x6a4;
         inline constexpr uintptr_t HeadBaseSize = 0x894;
         inline constexpr uintptr_t HeadBaseTposeAdjustment = 0x260;
         inline constexpr uintptr_t LeftAnkleRangeMax = 0x6b0;
         inline constexpr uintptr_t LeftAnkleRangeMin = 0x6bc;
         inline constexpr uintptr_t LeftAnkleSize = 0x898;
         inline constexpr uintptr_t LeftAnkleTposeAdjustment = 0x290;
         inline constexpr uintptr_t LeftClavicleRangeMax = 0x6c8;
         inline constexpr uintptr_t LeftClavicleRangeMin = 0x6d4;
         inline constexpr uintptr_t LeftClavicleSize = 0x89c;
         inline constexpr uintptr_t LeftClavicleTposeAdjustment = 0x2c0;
         inline constexpr uintptr_t LeftElbowRangeMax = 0x6e0;
         inline constexpr uintptr_t LeftElbowRangeMin = 0x6ec;
         inline constexpr uintptr_t LeftElbowSize = 0x8a0;
         inline constexpr uintptr_t LeftElbowTposeAdjustment = 0x2f0;
         inline constexpr uintptr_t LeftHipRangeMax = 0x6f8;
         inline constexpr uintptr_t LeftHipRangeMin = 0x704;
         inline constexpr uintptr_t LeftHipSize = 0x8a4;
         inline constexpr uintptr_t LeftHipTposeAdjustment = 0x320;
         inline constexpr uintptr_t LeftKneeRangeMax = 0x710;
         inline constexpr uintptr_t LeftKneeRangeMin = 0x71c;
         inline constexpr uintptr_t LeftKneeSize = 0x8a8;
         inline constexpr uintptr_t LeftKneeTposeAdjustment = 0x350;
         inline constexpr uintptr_t LeftShoulderRangeMax = 0x728;
         inline constexpr uintptr_t LeftShoulderRangeMin = 0x734;
         inline constexpr uintptr_t LeftShoulderSize = 0x8ac;
         inline constexpr uintptr_t LeftShoulderTposeAdjustment = 0x380;
         inline constexpr uintptr_t LeftToeBaseRangeMax = 0x740;
         inline constexpr uintptr_t LeftToeBaseRangeMin = 0x74c;
         inline constexpr uintptr_t LeftToeBaseSize = 0x8b0;
         inline constexpr uintptr_t LeftToeBaseTposeAdjustment = 0x3b0;
         inline constexpr uintptr_t LeftWristRangeMax = 0x758;
         inline constexpr uintptr_t LeftWristRangeMin = 0x764;
         inline constexpr uintptr_t LeftWristSize = 0x8b4;
         inline constexpr uintptr_t LeftWristTposeAdjustment = 0x3e0;
         inline constexpr uintptr_t NeckRangeMax = 0x770;
         inline constexpr uintptr_t NeckRangeMin = 0x77c;
         inline constexpr uintptr_t NeckSize = 0x8b8;
         inline constexpr uintptr_t NeckTposeAdjustment = 0x410;
         inline constexpr uintptr_t OriginOffset = 0x440;
         inline constexpr uintptr_t RightClavicleRangeMax = 0x7a0;
         inline constexpr uintptr_t RightClavicleRangeMin = 0x7ac;
         inline constexpr uintptr_t RightClavicleSize = 0x8c0;
         inline constexpr uintptr_t RightClavicleTposeAdjustment = 0x4a0;
         inline constexpr uintptr_t RightElbowRangeMax = 0x7b8;
         inline constexpr uintptr_t RightElbowRangeMin = 0x7c4;
         inline constexpr uintptr_t RightElbowSize = 0x8c4;
         inline constexpr uintptr_t RightElbowTposeAdjustment = 0x4d0;
         inline constexpr uintptr_t RightHipRangeMax = 0x7d0;
         inline constexpr uintptr_t RightHipRangeMin = 0x7dc;
         inline constexpr uintptr_t RightHipSize = 0x8c8;
         inline constexpr uintptr_t RightHipTposeAdjustment = 0x500;
         inline constexpr uintptr_t RightKneeRangeMax = 0x7e8;
         inline constexpr uintptr_t RightKneeRangeMin = 0x7f4;
         inline constexpr uintptr_t RightKneeSize = 0x8cc;
         inline constexpr uintptr_t RightShoulderRangeMax = 0x800;
         inline constexpr uintptr_t RightShoulderRangeMin = 0x80c;
         inline constexpr uintptr_t RightShoulderSize = 0x8d0;
         inline constexpr uintptr_t RightShoulderTposeAdjustment = 0x560;
         inline constexpr uintptr_t RightWristRangeMax = 0x830;
         inline constexpr uintptr_t RightWristRangeMin = 0x83c;
         inline constexpr uintptr_t RightWristSize = 0x8d8;
         inline constexpr uintptr_t RightWristTposeAdjustment = 0x5c0;
         inline constexpr uintptr_t RootRangeMax = 0x848;
         inline constexpr uintptr_t RootRangeMin = 0x854;
         inline constexpr uintptr_t RootSize = 0x8dc;
         inline constexpr uintptr_t RootTposeAdjustment = 0x5f0;
         inline constexpr uintptr_t SpineRangeMax = 0x860;
         inline constexpr uintptr_t SpineRangeMin = 0x86c;
         inline constexpr uintptr_t SpineSize = 0x8e0;
         inline constexpr uintptr_t SpineTposeAdjustment = 0x620;
         inline constexpr uintptr_t WaistRangeMax = 0x878;
         inline constexpr uintptr_t WaistRangeMin = 0x884;
         inline constexpr uintptr_t WaistSize = 0x8e4;
         inline constexpr uintptr_t WaistTposeAdjustment = 0x650;
    }

    namespace IKControl {
         inline constexpr uintptr_t Enabled = 0x168;
         inline constexpr uintptr_t EndEffectorOffset = 0xf8;
         inline constexpr uintptr_t Offset = 0x128;
         inline constexpr uintptr_t Priority = 0x158;
         inline constexpr uintptr_t SmoothTime = 0x15c;
         inline constexpr uintptr_t Weight = 0x164;
    }

    namespace InputBinding {
         inline constexpr uintptr_t ClampMagnitudeToOne = 0x178;
         inline constexpr uintptr_t PointerIndex = 0x150;
         inline constexpr uintptr_t PressedThreshold = 0x154;
         inline constexpr uintptr_t ResponseCurve = 0x160;
         inline constexpr uintptr_t Scale = 0x168;
         inline constexpr uintptr_t Vector2Scale = 0x134;
         inline constexpr uintptr_t Vector3Scale = 0x128;
    }

    namespace InsertService {
         inline constexpr uintptr_t AllowInsertFreeModels = 0xc0;
    }

    namespace Instance {
         inline constexpr uintptr_t ChildrenEnd = 0x8;
         inline constexpr uintptr_t ChildrenLayout = 0x1;
         inline constexpr uintptr_t ChildrenStart = 0x78;
         inline constexpr uintptr_t ClassBase = 0x1b0;
         inline constexpr uintptr_t ClassDescriptor = 0x18;
         inline constexpr uintptr_t ClassName = 0x8;
         inline constexpr uintptr_t Name = 0x8;
         inline constexpr uintptr_t NameContainer = 0x70;
         inline constexpr uintptr_t Parent = 0x68;
         inline constexpr uintptr_t This = 0x8;
    }

    namespace IntConstrainedValue {
         inline constexpr uintptr_t MaxValue = 0xb8;
         inline constexpr uintptr_t MinValue = 0xc0;
    }

    namespace InternalSyncItem {
         inline constexpr uintptr_t AutoSync = 0xe0;
         inline constexpr uintptr_t Enabled = 0xe1;
    }

    namespace IntValue {
         inline constexpr uintptr_t Value = 0xb8;
    }

    namespace JointInstance {
         inline constexpr uintptr_t Enabled = 0xb8;
    }

    namespace Keyframe {
         inline constexpr uintptr_t Time = 0xb8;
    }

    namespace Light {
         inline constexpr uintptr_t Brightness = 0xcc;
         inline constexpr uintptr_t Enabled = 0xd0;
         inline constexpr uintptr_t Shadows = 0xd1;
    }

    namespace Lighting {
         inline constexpr uintptr_t Ambient = 0xd0;
         inline constexpr uintptr_t Brightness = 0x118;
         inline constexpr uintptr_t ClockTime = 0xc8;
         inline constexpr uintptr_t ColorShift_Bottom = 0xe8;
         inline constexpr uintptr_t ColorShift_Top = 0xdc;
         inline constexpr uintptr_t EnvironmentDiffuseScale = 0x11c;
         inline constexpr uintptr_t EnvironmentSpecularScale = 0x120;
         inline constexpr uintptr_t ExposureCompensation = 0x124;
         inline constexpr uintptr_t FogColor = 0xf4;
         inline constexpr uintptr_t FogEnd = 0x12c;
         inline constexpr uintptr_t FogStart = 0x130;
         inline constexpr uintptr_t GeographicLatitude = 0x134;
         inline constexpr uintptr_t GlobalShadows = 0x144;
         inline constexpr uintptr_t GradientBottom = 0x190;
         inline constexpr uintptr_t GradientTop = 0x150;
         inline constexpr uintptr_t LightColor = 0x15c;
         inline constexpr uintptr_t LightDirection = 0x168;
         inline constexpr uintptr_t MoonPosition = 0x184;
         inline constexpr uintptr_t OutdoorAmbient = 0x100;
         inline constexpr uintptr_t ShadowColor = 0x10c;
         inline constexpr uintptr_t ShadowSoftness = 0x13c;
         inline constexpr uintptr_t Sky = 0x1c8;
         inline constexpr uintptr_t Source = 0x174;
         inline constexpr uintptr_t SunPosition = 0x178;
    }

    namespace LineForce {
         inline constexpr uintptr_t Magnitude = 0x170;
         inline constexpr uintptr_t MaxForce = 0x174;
         inline constexpr uintptr_t ReactionForceEnabled = 0x17a;
    }

    namespace LineHandleAdornment {
         inline constexpr uintptr_t Length = 0x1a8;
         inline constexpr uintptr_t Thickness = 0x1ac;
    }

    namespace LocalScript {
         inline constexpr uintptr_t ByteCode = 0x190;
         inline constexpr uintptr_t GUID = 0xd0;
         inline constexpr uintptr_t Hash = 0x1a0;
    }

    namespace LRUHolder {
         inline constexpr uintptr_t MemEnforcedLRUCache = 0x20;
    }

    namespace LRUNode {
         inline constexpr uintptr_t AssetID = 0x10;
         inline constexpr uintptr_t CachedItem = 0x40;
         inline constexpr uintptr_t Next = 0x0;
    }

    namespace MakeupDescription {
         inline constexpr uintptr_t AssetId = 0xc0;
         inline constexpr uintptr_t Order = 0xcc;
    }

    namespace MaterialColors {
         inline constexpr uintptr_t Asphalt = 0x30;
         inline constexpr uintptr_t Basalt = 0x27;
         inline constexpr uintptr_t Brick = 0xf;
         inline constexpr uintptr_t Cobblestone = 0x33;
         inline constexpr uintptr_t Concrete = 0xc;
         inline constexpr uintptr_t CrackedLava = 0x2d;
         inline constexpr uintptr_t Glacier = 0x1b;
         inline constexpr uintptr_t Grass = 0x6;
         inline constexpr uintptr_t Ground = 0x2a;
         inline constexpr uintptr_t Ice = 0x36;
         inline constexpr uintptr_t LeafyGrass = 0x39;
         inline constexpr uintptr_t Limestone = 0x3f;
         inline constexpr uintptr_t Mud = 0x24;
         inline constexpr uintptr_t Pavement = 0x42;
         inline constexpr uintptr_t Rock = 0x18;
         inline constexpr uintptr_t Salt = 0x3c;
         inline constexpr uintptr_t Sand = 0x12;
         inline constexpr uintptr_t Sandstone = 0x21;
         inline constexpr uintptr_t Slate = 0x9;
         inline constexpr uintptr_t Snow = 0x1e;
         inline constexpr uintptr_t WoodPlanks = 0x15;
    }

    namespace MemEnforcedLRUCache {
         inline constexpr uintptr_t Head = 0x8;
    }

    namespace MeshContentProvider {
         inline constexpr uintptr_t LRUHolder = 0xd8;
    }

    namespace MeshPart {
         inline constexpr uintptr_t MeshId = 0x310;
         inline constexpr uintptr_t Texture = 0x340;
    }

    namespace Message {
         inline constexpr uintptr_t Text = 0xb8;
    }

    namespace Misc {
         inline constexpr uintptr_t Adornee = 0xf0;
         inline constexpr uintptr_t AnimationId = 0xc0;
         inline constexpr uintptr_t StringLength = 0x10;
         inline constexpr uintptr_t Value = 0xb8;
    }

    namespace Model {
         inline constexpr uintptr_t ModelMeshCFrame = 0x100;
         inline constexpr uintptr_t PrimaryPart = 0x258;
         inline constexpr uintptr_t Scale = 0x144;
         inline constexpr uintptr_t WorldPivotData = 0xf8;
    }

    namespace ModuleScript {
         inline constexpr uintptr_t ByteCode = 0x138;
         inline constexpr uintptr_t GUID = 0xd0;
         inline constexpr uintptr_t Hash = 0x148;
         inline constexpr uintptr_t IsCoreScript = 0x0;
    }

    namespace MouseService {
         inline constexpr uintptr_t InputObject = 0xf0;
         inline constexpr uintptr_t InputObject2 = 0x100;
         inline constexpr uintptr_t MousePosition = 0xd4;
         inline constexpr uintptr_t SensitivityPointer = 0x0;
    }

    namespace NoCollisionConstraint {
         inline constexpr uintptr_t Enabled = 0xd8;
    }

    namespace NumberValue {
         inline constexpr uintptr_t Value = 0xb8;
    }

    namespace PackageLink {
         inline constexpr uintptr_t AutoUpdate = 0x13c;
         inline constexpr uintptr_t CanAutoUpdate = 0x13d;
         inline constexpr uintptr_t HasNewVersion = 0x13e;
         inline constexpr uintptr_t ModifiedState = 0x138;
         inline constexpr uintptr_t PackageContentSerialize = 0xb8;
         inline constexpr uintptr_t PackageGuid = 0x128;
    }

    namespace Packages {
         inline constexpr uintptr_t IsDehydrated = 0xc8;
         inline constexpr uintptr_t ShellPackagesCount = 0xc0;
    }

    namespace Pages {
         inline constexpr uintptr_t IsFinished = 0xb0;
    }

    namespace ParabolaAdornment {
         inline constexpr uintptr_t A = 0x100;
         inline constexpr uintptr_t B = 0x104;
         inline constexpr uintptr_t C = 0x108;
         inline constexpr uintptr_t Range = 0x10c;
         inline constexpr uintptr_t Thickness = 0x110;
    }

    namespace ParticleEmitter {
         inline constexpr uintptr_t Acceleration = 0x1e0;
         inline constexpr uintptr_t Brightness = 0x21c;
         inline constexpr uintptr_t Drag = 0x220;
         inline constexpr uintptr_t Lifetime = 0x1f4;
         inline constexpr uintptr_t LightEmission = 0x238;
         inline constexpr uintptr_t LightInfluence = 0x23c;
         inline constexpr uintptr_t Rate = 0x248;
         inline constexpr uintptr_t RotSpeed = 0x1fc;
         inline constexpr uintptr_t Rotation = 0x204;
         inline constexpr uintptr_t Speed = 0x20c;
         inline constexpr uintptr_t SpreadAngle = 0x214;
         inline constexpr uintptr_t Texture = 0x1c0;
         inline constexpr uintptr_t TimeScale = 0x25c;
         inline constexpr uintptr_t VelocityInheritance = 0x260;
         inline constexpr uintptr_t ZOffset = 0x264;
    }

    namespace PathfindingLink {
         inline constexpr uintptr_t IsBidirectional = 0xf8;
         inline constexpr uintptr_t Label = 0xb8;
    }

    namespace PathfindingModifier {
         inline constexpr uintptr_t Label = 0xb8;
         inline constexpr uintptr_t PassThrough = 0xd8;
    }

    namespace PitchShiftSoundEffect {
         inline constexpr uintptr_t Octave = 0xf8;
    }

    namespace Player {
         inline constexpr uintptr_t AccountAge = 0x35c;
         inline constexpr uintptr_t AppearanceDidLoad = 0x3c0;
         inline constexpr uintptr_t AutoJumpEnabled = 0x3c1;
         inline constexpr uintptr_t BanningEnabled = 0x14c;
         inline constexpr uintptr_t CameraFieldOfView = 0x364;
         inline constexpr uintptr_t CameraFrustumRequested = 0x3c2;
         inline constexpr uintptr_t CameraMaxZoomDistance = 0x368;
         inline constexpr uintptr_t CameraMinZoomDistance = 0x36c;
         inline constexpr uintptr_t CameraMode = 0x370;
         inline constexpr uintptr_t CameraViewportSize = 0x354;
         inline constexpr uintptr_t CanLoadCharacterAppearance = 0x3c3;
         inline constexpr uintptr_t CharacterAppearanceId = 0x300;
         inline constexpr uintptr_t CharacterAutoLoads = 0x14d;
         inline constexpr uintptr_t ChararacterRegionId = 0x348;
         inline constexpr uintptr_t CloudEditCameraCoordinateFrame = 0x318;
         inline constexpr uintptr_t CloudEditPlayerActive = 0x3c4;
         inline constexpr uintptr_t DataComplexityLimit = 0x378;
         inline constexpr uintptr_t DataReady = 0x3c5;
         inline constexpr uintptr_t DevEnableMouseLock = 0x3c6;
         inline constexpr uintptr_t DisplayName = 0x138;
         inline constexpr uintptr_t FollowUserId = 0x308;
         inline constexpr uintptr_t GameplayPaused = 0x3c7;
         inline constexpr uintptr_t HasRobloxSubscription = 0x3c8;
         inline constexpr uintptr_t HasVerifiedBadge = 0x3c9;
         inline constexpr uintptr_t HealthDisplayDistance = 0x394;
         inline constexpr uintptr_t InputLatency = 0x398;
         inline constexpr uintptr_t InternalCharacterAppearanceLoaded = 0x3ca;
         inline constexpr uintptr_t LocalPlayer = 0x130;
         inline constexpr uintptr_t LocaleId = 0x118;
         inline constexpr uintptr_t MaxPlayers = 0x140;
         inline constexpr uintptr_t MaxZoomDistance = 0x368;
         inline constexpr uintptr_t MaximumSimulationRadius = 0x39c;
         inline constexpr uintptr_t MinZoomDistance = 0x36c;
         inline constexpr uintptr_t ModelInstance = 0x298;
         inline constexpr uintptr_t Mouse = 0x1208;
         inline constexpr uintptr_t NameDisplayDistance = 0x3a4;
         inline constexpr uintptr_t NeedRegionalFallback = 0x3cb;
         inline constexpr uintptr_t Neutral = 0x3cc;
         inline constexpr uintptr_t PreferredPlayers = 0x144;
         inline constexpr uintptr_t RawJoinData = 0x1b8;
         inline constexpr uintptr_t RespawnTime = 0x148;
         inline constexpr uintptr_t SimulationRadius = 0x3a8;
         inline constexpr uintptr_t StepIdOffset = 0x3ac;
         inline constexpr uintptr_t Team = 0x2d8;
         inline constexpr uintptr_t TeamColor = 0x3b0;
         inline constexpr uintptr_t Teleported = 0x3cd;
         inline constexpr uintptr_t TeleportedIn = 0x3ce;
         inline constexpr uintptr_t UseStrafingAnimations = 0x14e;
         inline constexpr uintptr_t User = 0xb8;
         inline constexpr uintptr_t UserId = 0xd0;
         inline constexpr uintptr_t VREnabled = 0x3d0;
         inline constexpr uintptr_t VoiceChatVolume = 0x3bc;
    }

    namespace PlayerConfigurer {
         inline constexpr uintptr_t Pointer = 0x0;
    }

    namespace PlayerDataRecord {
         inline constexpr uintptr_t CreatedTime = 0xe8;
         inline constexpr uintptr_t DefaultRecordName = 0x10c;
         inline constexpr uintptr_t Dirty = 0x10d;
         inline constexpr uintptr_t FlushedTime = 0xf0;
         inline constexpr uintptr_t LoadedTime = 0xf8;
         inline constexpr uintptr_t ModifiedTime = 0x100;
         inline constexpr uintptr_t NewRecord = 0x10e;
         inline constexpr uintptr_t Readable = 0x10f;
         inline constexpr uintptr_t Writable = 0x110;
    }

    namespace PlayerEmulatorService {
         inline constexpr uintptr_t CustomPoliciesEnabled = 0x12c;
         inline constexpr uintptr_t PlayerEmulationEnabled = 0x12d;
         inline constexpr uintptr_t PseudolocalizationEnabled = 0x12e;
         inline constexpr uintptr_t TextElongationFactor = 0x128;
    }

    namespace PlayerListConfiguration {
         inline constexpr uintptr_t Open = 0xb8;
    }

    namespace PlayerMouse {
         inline constexpr uintptr_t Icon = 0xc8;
         inline constexpr uintptr_t Workspace = 0x150;
    }

    namespace Plugin {
         inline constexpr uintptr_t DisableUIDragDetectorDrags = 0xdc;
         inline constexpr uintptr_t IsDebuggable = 0xdd;
    }

    namespace PointLight {
         inline constexpr uintptr_t Range = 0xd8;
    }

    namespace Pose {
         inline constexpr uintptr_t CFrame = 0xd0;
    }

    namespace PoseBase {
         inline constexpr uintptr_t Weight = 0xc0;
    }

    namespace PostEffect {
         inline constexpr uintptr_t Enabled = 0xb0;
    }

    namespace Primitive {
         inline constexpr uintptr_t AssemblyAngularVelocity = 0xec;
         inline constexpr uintptr_t AssemblyLinearVelocity = 0xe0;
         inline constexpr uintptr_t Flags = 0x1be;
         inline constexpr uintptr_t Material = 0x0;
         inline constexpr uintptr_t Owner = 0x218;
         inline constexpr uintptr_t Position = 0xd4;
         inline constexpr uintptr_t Rotation = 0xb0;
         inline constexpr uintptr_t Size = 0x1c4;
         inline constexpr uintptr_t Validate = 0x6;
    }

    namespace PrimitiveFlags {
         inline constexpr uintptr_t Anchored = 0x2;
         inline constexpr uintptr_t CanCollide = 0x8;
         inline constexpr uintptr_t CanQuery = 0x20;
         inline constexpr uintptr_t CanTouch = 0x10;
    }

    namespace ProximityPrompt {
         inline constexpr uintptr_t ActionText = 0xb0;
         inline constexpr uintptr_t Enabled = 0x136;
         inline constexpr uintptr_t GamepadKeyCode = 0x11c;
         inline constexpr uintptr_t HoldDuration = 0x120;
         inline constexpr uintptr_t KeyCode = 0x124;
         inline constexpr uintptr_t MaxActivationDistance = 0x128;
         inline constexpr uintptr_t ObjectText = 0xd0;
         inline constexpr uintptr_t RequiresLineOfSight = 0x137;
    }

    namespace ProximityPromptService {
         inline constexpr uintptr_t Enabled = 0xe8;
         inline constexpr uintptr_t MaxIndicatorsVisible = 0xe0;
         inline constexpr uintptr_t MaxPromptsVisible = 0xe4;
    }

    namespace PyramidHandleAdornment {
         inline constexpr uintptr_t Height = 0x1a8;
         inline constexpr uintptr_t Sides = 0x1b0;
         inline constexpr uintptr_t Size = 0x1b4;
    }

    namespace RenderJob {
         inline constexpr uintptr_t FakeDataModel = 0x38;
         inline constexpr uintptr_t RealDataModel = 0x1f0;
         inline constexpr uintptr_t RenderView = 0x1d8;
    }

    namespace RenderView {
         inline constexpr uintptr_t DeviceD3D11 = 0x0;
         inline constexpr uintptr_t LightingValid = 0x0;
         inline constexpr uintptr_t SkyValid = 0x0;
         inline constexpr uintptr_t VisualEngine = 0x0;
    }

    namespace ReverbSoundEffect {
         inline constexpr uintptr_t DecayTime = 0xf8;
         inline constexpr uintptr_t Density = 0xfc;
         inline constexpr uintptr_t Diffusion = 0x100;
         inline constexpr uintptr_t DryLevel = 0x104;
         inline constexpr uintptr_t WetLevel = 0x108;
    }

    namespace RigidConstraint {
         inline constexpr uintptr_t EnableSkinning = 0x168;
    }

    namespace RocketPropulsion {
         inline constexpr uintptr_t Active = 0x2d0;
         inline constexpr uintptr_t CartoonFactor = 0x2b0;
         inline constexpr uintptr_t MaxSpeed = 0x2b4;
         inline constexpr uintptr_t MaxThrust = 0x2b8;
         inline constexpr uintptr_t TargetRadius = 0x2bc;
         inline constexpr uintptr_t ThrustD = 0x2c0;
         inline constexpr uintptr_t ThrustP = 0x2c4;
         inline constexpr uintptr_t TurnD = 0x2c8;
         inline constexpr uintptr_t TurnP = 0x2cc;
    }

    namespace RodConstraint {
         inline constexpr uintptr_t Length = 0x170;
         inline constexpr uintptr_t LimitAngle0 = 0x174;
         inline constexpr uintptr_t LimitAngle1 = 0x178;
         inline constexpr uintptr_t LimitsEnabled = 0x180;
         inline constexpr uintptr_t Thickness = 0x17c;
    }

    namespace RolloutValidation {
         inline constexpr uintptr_t AdditionalFluffThree = 0x1ec;
         inline constexpr uintptr_t AdditionalFluffTwo = 0x3a8;
         inline constexpr uintptr_t CreationVersion = 0x1f0;
         inline constexpr uintptr_t FirstSharedExpectedValue = 0xf0;
         inline constexpr uintptr_t FirstSharedString = 0x1d0;
         inline constexpr uintptr_t GenerationStrategy = 0x1f4;
         inline constexpr uintptr_t SecondBinaryExpectedValue = 0x110;
         inline constexpr uintptr_t SecondBinaryString = 0x130;
         inline constexpr uintptr_t SecondSharedExpectedValue = 0x150;
         inline constexpr uintptr_t SecondSharedString = 0x1d8;
         inline constexpr uintptr_t ThirdBinaryExpectedValue = 0x170;
         inline constexpr uintptr_t ThirdBinaryString = 0x190;
         inline constexpr uintptr_t ThirdSharedExpectedValue = 0x1b0;
         inline constexpr uintptr_t ThirdSharedString = 0x1e0;
    }

    namespace RopeConstraint {
         inline constexpr uintptr_t Length = 0x170;
         inline constexpr uintptr_t Restitution = 0x174;
         inline constexpr uintptr_t Thickness = 0x178;
         inline constexpr uintptr_t WinchForce = 0x17c;
         inline constexpr uintptr_t WinchResponsiveness = 0x180;
    }

    namespace RunService {
         inline constexpr uintptr_t HeartbeatFPS = 0xc0;
         inline constexpr uintptr_t HeartbeatTask = 0xe0;
    }

    namespace SafetyService {
         inline constexpr uintptr_t IsCaptureModeForReport = 0xc0;
    }

    namespace ScreenGui {
         inline constexpr uintptr_t ClipToDeviceSafeArea = 0x744;
         inline constexpr uintptr_t DisplayOrder = 0x738;
         inline constexpr uintptr_t IgnoresTitleBarReservation = 0x745;
         inline constexpr uintptr_t OnTopOfCoreBlur = 0x746;
    }

    namespace Script {
         inline constexpr uintptr_t ByteCode = 0x190;
         inline constexpr uintptr_t GUID = 0xd0;
         inline constexpr uintptr_t Hash = 0x1a0;
    }

    namespace ScriptContext {
         inline constexpr uintptr_t RequireBypass = 0x0;
         inline constexpr uintptr_t ScriptsDisabled = 0xc8;
    }

    namespace ScrollingFrame {
         inline constexpr uintptr_t CanvasPosition = 0xa6c;
         inline constexpr uintptr_t ScrollRate = 0xa9c;
         inline constexpr uintptr_t SmoothScroll = 0xaad;
    }

    namespace Seat {
         inline constexpr uintptr_t Occupant = 0x218;
    }

    namespace SelectionPointLasso {
         inline constexpr uintptr_t Point = 0x108;
    }

    namespace SelfViewConfiguration {
         inline constexpr uintptr_t Open = 0xb8;
    }

    namespace ServerScriptService {
         inline constexpr uintptr_t LoadStringEnabled = 0xc8;
    }

    namespace SkateboardController {
         inline constexpr uintptr_t Steer = 0x118;
         inline constexpr uintptr_t Throttle = 0x11c;
    }

    namespace SkateboardPlatform {
         inline constexpr uintptr_t Steer = 0x22c;
         inline constexpr uintptr_t Throttle = 0x230;
    }

    namespace Skin {
         inline constexpr uintptr_t SkinColor = 0xc0;
    }

    namespace Sky {
         inline constexpr uintptr_t MoonAngularSize = 0x244;
         inline constexpr uintptr_t MoonTextureId = 0xc8;
         inline constexpr uintptr_t SkyboxBk = 0xf8;
         inline constexpr uintptr_t SkyboxDn = 0x128;
         inline constexpr uintptr_t SkyboxFt = 0x158;
         inline constexpr uintptr_t SkyboxLf = 0x188;
         inline constexpr uintptr_t SkyboxOrientation = 0x238;
         inline constexpr uintptr_t SkyboxRt = 0x1b8;
         inline constexpr uintptr_t SkyboxUp = 0x1e8;
         inline constexpr uintptr_t StarCount = 0x248;
         inline constexpr uintptr_t SunAngularSize = 0x23c;
         inline constexpr uintptr_t SunTextureId = 0x218;
    }

    namespace SlidingBallConstraint {
         inline constexpr uintptr_t LinearResponsiveness = 0x174;
         inline constexpr uintptr_t LowerLimit = 0x178;
         inline constexpr uintptr_t MotorMaxAcceleration = 0x17c;
         inline constexpr uintptr_t MotorMaxForce = 0x180;
         inline constexpr uintptr_t Size = 0x18c;
         inline constexpr uintptr_t Speed = 0x190;
         inline constexpr uintptr_t TargetPosition = 0x194;
         inline constexpr uintptr_t UpperLimit = 0x198;
         inline constexpr uintptr_t Velocity = 0x19c;
    }

    namespace SlimAnimationDataEntity {
         inline constexpr uintptr_t Handle = 0x110;
         inline constexpr uintptr_t IsSlimEnabled = 0x11c;
         inline constexpr uintptr_t NumBones = 0x114;
         inline constexpr uintptr_t RootIndex = 0x118;
         inline constexpr uintptr_t SlimReplicationTimestampSec = 0x108;
    }

    namespace Sound {
         inline constexpr uintptr_t AcousticSimulationEnabled = 0x13c;
         inline constexpr uintptr_t IsPlaying = 0x140;
         inline constexpr uintptr_t LoopRegion = 0xf8;
         inline constexpr uintptr_t Looped = 0x13d;
         inline constexpr uintptr_t PlayOnRemove = 0x13e;
         inline constexpr uintptr_t PlaybackRegion = 0x100;
         inline constexpr uintptr_t PlaybackRegionsEnabled = 0x13f;
         inline constexpr uintptr_t PlaybackSpeed = 0x11c;
         inline constexpr uintptr_t RollOffMaxDistance = 0x120;
         inline constexpr uintptr_t RollOffMinDistance = 0x124;
         inline constexpr uintptr_t SoundGroup = 0xe8;
         inline constexpr uintptr_t SoundId = 0xc8;
         inline constexpr uintptr_t Volume = 0x130;
    }

    namespace SoundEffect {
         inline constexpr uintptr_t Priority = 0xb8;
    }

    namespace SoundGroup {
         inline constexpr uintptr_t Volume = 0xb8;
    }

    namespace SoundService {
         inline constexpr uintptr_t AcousticSimulationEnabled = 0x178;
         inline constexpr uintptr_t DiffractionEnabled = 0x179;
         inline constexpr uintptr_t DistanceFactor = 0x164;
         inline constexpr uintptr_t DopplerScale = 0x168;
         inline constexpr uintptr_t IsNewExpForAudioApiByDefault = 0x17a;
         inline constexpr uintptr_t ListenerCFrame = 0x120;
         inline constexpr uintptr_t OcclusionEnabled = 0x17b;
         inline constexpr uintptr_t RespectFilteringEnabled = 0x17c;
         inline constexpr uintptr_t ReverbEnabled = 0x17d;
         inline constexpr uintptr_t RolloffScale = 0x170;
    }

    namespace SpawnLocation {
         inline constexpr uintptr_t AllowTeamChangeOnTouch = 0x3d;
         inline constexpr uintptr_t Duration = 0x1e8;
         inline constexpr uintptr_t Enabled = 0x1f1;
         inline constexpr uintptr_t ForcefieldDuration = 0x1e8;
         inline constexpr uintptr_t Neutral = 0x1f2;
         inline constexpr uintptr_t TeamColor = 0x1ec;
    }

    namespace SpecialMesh {
         inline constexpr uintptr_t MeshId = 0xf8;
         inline constexpr uintptr_t Scale = 0xc4;
    }

    namespace SpotLight {
         inline constexpr uintptr_t Angle = 0xd8;
         inline constexpr uintptr_t Range = 0xe0;
    }

    namespace SpringConstraint {
         inline constexpr uintptr_t Coils = 0x170;
         inline constexpr uintptr_t Damping = 0x174;
         inline constexpr uintptr_t FreeLength = 0x178;
         inline constexpr uintptr_t LimitsEnabled = 0x194;
         inline constexpr uintptr_t MaxForce = 0x17c;
         inline constexpr uintptr_t MaxLength = 0x180;
         inline constexpr uintptr_t Stiffness = 0x18c;
         inline constexpr uintptr_t Thickness = 0x190;
    }

    namespace StarterPlayer {
         inline constexpr uintptr_t AllowCustomAnimations = 0x12c;
         inline constexpr uintptr_t AutoJumpEnabled = 0x12d;
         inline constexpr uintptr_t CharacterBreakJointsOnDeath = 0x12e;
         inline constexpr uintptr_t CharacterJumpHeight = 0xe8;
         inline constexpr uintptr_t CharacterJumpPower = 0xec;
         inline constexpr uintptr_t CharacterMaxSlopeAngle = 0xf0;
         inline constexpr uintptr_t CharacterUseJumpPower = 0x12f;
         inline constexpr uintptr_t CharacterWalkSpeed = 0xf4;
         inline constexpr uintptr_t ClassicDeath = 0x130;
         inline constexpr uintptr_t CreateDefaultPlayerModule = 0x131;
         inline constexpr uintptr_t EnableMouseLockOption = 0x132;
         inline constexpr uintptr_t HealthDisplayDistance = 0x118;
         inline constexpr uintptr_t LoadCharacterAppearance = 0x133;
         inline constexpr uintptr_t NameDisplayDistance = 0x124;
         inline constexpr uintptr_t PlayerModuleStatus = 0x128;
         inline constexpr uintptr_t UserEmotesEnabled = 0x134;
    }

    namespace StateMachineTransitionDefinition {
         inline constexpr uintptr_t Priority = 0xf0;
    }

    namespace StatsItem {
         inline constexpr uintptr_t Value = 0xd66a;
    }

    namespace StudioData {
         inline constexpr uintptr_t EnableScriptCollabByDefaultOnLoad = 0xc8;
    }

    namespace StyleDerive {
         inline constexpr uintptr_t Priority = 0xcc;
    }

    namespace StyleQuery {
         inline constexpr uintptr_t IsActive = 0xb0;
    }

    namespace SunRaysEffect {
         inline constexpr uintptr_t Enabled = 0xb0;
         inline constexpr uintptr_t Intensity = 0xb8;
         inline constexpr uintptr_t Spread = 0xbc;
    }

    namespace SurfaceAppearance {
         inline constexpr uintptr_t AlphaMode = 0x1f0;
         inline constexpr uintptr_t Color = 0x1d8;
         inline constexpr uintptr_t ColorMap = 0xc8;
         inline constexpr uintptr_t EmissiveMaskContent = 0xf8;
         inline constexpr uintptr_t EmissiveStrength = 0x1f4;
         inline constexpr uintptr_t EmissiveTint = 0x1e4;
         inline constexpr uintptr_t MetalnessMap = 0x128;
         inline constexpr uintptr_t NormalMap = 0x158;
         inline constexpr uintptr_t RoughnessMap = 0x188;
    }

    namespace SurfaceLight {
         inline constexpr uintptr_t Angle = 0xd8;
         inline constexpr uintptr_t Range = 0xe0;
    }

    namespace SwimController {
         inline constexpr uintptr_t AccelerationTime = 0xe0;
         inline constexpr uintptr_t PitchMaxTorque = 0xe4;
         inline constexpr uintptr_t PitchSpeedFactor = 0xe8;
         inline constexpr uintptr_t RollMaxTorque = 0xec;
         inline constexpr uintptr_t RollSpeedFactor = 0xf0;
    }

    namespace TaskScheduler {
         inline constexpr uintptr_t JobEnd = 0xd0;
         inline constexpr uintptr_t JobName = 0x18;
         inline constexpr uintptr_t JobStart = 0xc8;
         inline constexpr uintptr_t MaxFPS = 0xb0;
         inline constexpr uintptr_t Pointer = 0x8bdd8e8;
    }

    namespace Team {
         inline constexpr uintptr_t BrickColor = 0xb8;
    }

    namespace TeleportService {
         inline constexpr uintptr_t CustomizedTeleportUI = 0xc8;
    }

    namespace Terrain {
         inline constexpr uintptr_t GrassLength = 0x1f0;
         inline constexpr uintptr_t MaterialColors = 0x4b8;
         inline constexpr uintptr_t WaterColor = 0x1e0;
         inline constexpr uintptr_t WaterReflectance = 0x1f8;
         inline constexpr uintptr_t WaterTransparency = 0x1fc;
         inline constexpr uintptr_t WaterWaveSize = 0x200;
         inline constexpr uintptr_t WaterWaveSpeed = 0x204;
    }

    namespace TextChannelWindow {
         inline constexpr uintptr_t I = 0x9a8;
         inline constexpr uintptr_t UseDefaultFont = 0x9a9;
    }

    namespace TextChatMessage {
         inline constexpr uintptr_t ForModeration = 0x2cc;
         inline constexpr uintptr_t IsHiddenMessage = 0x2cd;
         inline constexpr uintptr_t Verified = 0x2ce;
         inline constexpr uintptr_t WasRewritten = 0x2cf;
    }

    namespace TextGenerator {
         inline constexpr uintptr_t Seed = 0xd0;
         inline constexpr uintptr_t Temperature = 0xd4;
         inline constexpr uintptr_t TopP = 0xd8;
    }

    namespace TextSource {
         inline constexpr uintptr_t CanSend = 0xf8;
         inline constexpr uintptr_t UserId = 0xf0;
    }

    namespace Textures {
         inline constexpr uintptr_t Decal_Texture = 0x1e0;
         inline constexpr uintptr_t Texture_Texture = 0x1e0;
    }

    namespace Tool {
         inline constexpr uintptr_t CanBeDropped = 0x4b8;
         inline constexpr uintptr_t Enabled = 0x475;
         inline constexpr uintptr_t Grip = 0x4ac;
         inline constexpr uintptr_t ManualActivationOnly = 0x295;
         inline constexpr uintptr_t RequiresHandle = 0x4bb;
         inline constexpr uintptr_t TextureId = 0x360;
         inline constexpr uintptr_t Tooltip = 0x468;
    }

    namespace TremoloSoundEffect {
         inline constexpr uintptr_t Depth = 0xf8;
         inline constexpr uintptr_t Duty = 0xfc;
         inline constexpr uintptr_t Frequency = 0x100;
    }

    namespace TriangleMeshPart {
         inline constexpr uintptr_t MeshSize = 0x228;
         inline constexpr uintptr_t PCDRequestId = 0x258;
         inline constexpr uintptr_t UnscaledCofm = 0x234;
         inline constexpr uintptr_t UnscaledVolInertiaDiags = 0x240;
         inline constexpr uintptr_t UnscaledVolInertiaOffDiags = 0x24c;
         inline constexpr uintptr_t UnscaledVolume = 0x25c;
    }

    namespace UIDragDetector {
         inline constexpr uintptr_t DragAxis = 0x1a8;
         inline constexpr uintptr_t DragRotation = 0x1b8;
         inline constexpr uintptr_t DragUDim2 = 0x168;
         inline constexpr uintptr_t Enabled = 0x1d8;
         inline constexpr uintptr_t MaxDragAngle = 0x1c4;
         inline constexpr uintptr_t MaxDragTranslation = 0x178;
         inline constexpr uintptr_t MinDragAngle = 0x1c8;
         inline constexpr uintptr_t MinDragTranslation = 0x188;
         inline constexpr uintptr_t SelectionModeDragSpeed = 0x198;
         inline constexpr uintptr_t SelectionModeRotateSpeed = 0x1d0;
    }

    namespace UIPadding {
         inline constexpr uintptr_t PaddingLeft = 0xd0;
         inline constexpr uintptr_t PaddingRight = 0xd8;
         inline constexpr uintptr_t PaddingTop = 0xe0;
    }

    namespace UIShadow {
         inline constexpr uintptr_t BlurRadius = 0xf4;
         inline constexpr uintptr_t Enabled = 0x108;
         inline constexpr uintptr_t Inset = 0x109;
         inline constexpr uintptr_t ShowBehindParent = 0x10a;
         inline constexpr uintptr_t Spread = 0xd8;
         inline constexpr uintptr_t Transparency = 0x100;
         inline constexpr uintptr_t ZIndex = 0x104;
    }

    namespace UISizeConstraint {
         inline constexpr uintptr_t MaxSize = 0xd0;
         inline constexpr uintptr_t MinSize = 0xd8;
    }

    namespace UITextSizeConstraint {
         inline constexpr uintptr_t MinTextSize = 0xcc;
    }

    namespace UnionOperation {
         inline constexpr uintptr_t AssetId = 0x310;
    }

    namespace UniversalConstraint {
         inline constexpr uintptr_t LimitsEnabled = 0x17c;
         inline constexpr uintptr_t MaxAngle = 0x170;
         inline constexpr uintptr_t Radius = 0x174;
         inline constexpr uintptr_t Restitution = 0x178;
    }

    namespace UserInputService {
         inline constexpr uintptr_t BottomBarSize = 0xc8;
         inline constexpr uintptr_t LegacyInputEventsEnabled = 0xf0;
         inline constexpr uintptr_t NavBarSize = 0xd0;
         inline constexpr uintptr_t RightBarSize = 0xd8;
         inline constexpr uintptr_t StatusBarSize = 0xe0;
         inline constexpr uintptr_t TouchScreenEnabled = 0xf3;
         inline constexpr uintptr_t WindowInputState = 0x2c0;
    }

    namespace VehicleSeat {
         inline constexpr uintptr_t MaxSpeed = 0x228;
         inline constexpr uintptr_t SteerFloat = 0x22c;
         inline constexpr uintptr_t ThrottleFloat = 0x230;
         inline constexpr uintptr_t Torque = 0x234;
         inline constexpr uintptr_t TurnSpeed = 0x238;
    }

    namespace VideoDisplay {
         inline constexpr uintptr_t VideoRectOffset = 0xa2c;
         inline constexpr uintptr_t VideoRectSize = 0xa34;
         inline constexpr uintptr_t VideoTransparency = 0xa44;
    }

    namespace VideoFrame {
         inline constexpr uintptr_t Looped = 0xa10;
         inline constexpr uintptr_t RollOffMaxDistance = 0xa00;
         inline constexpr uintptr_t RollOffMinDistance = 0xa04;
         inline constexpr uintptr_t VideoContent = 0x998;
         inline constexpr uintptr_t Volume = 0xa0c;
    }

    namespace VideoPlayer {
         inline constexpr uintptr_t AutoLoadInStudio = 0x181;
         inline constexpr uintptr_t AutoPlayInStudio = 0x182;
         inline constexpr uintptr_t IsPlaying = 0x183;
         inline constexpr uintptr_t PlaybackSpeed = 0x178;
         inline constexpr uintptr_t PlayingReplicating = 0x180;
         inline constexpr uintptr_t VideoContent = 0x138;
         inline constexpr uintptr_t Volume = 0x17c;
    }

    namespace ViewportFrame {
         inline constexpr uintptr_t CameraCFrame = 0x9a8;
         inline constexpr uintptr_t CameraFieldOfView = 0xa08;
         inline constexpr uintptr_t ImageTransparency = 0xa0c;
         inline constexpr uintptr_t IsMirrored = 0xa10;
    }

    namespace VisualEngine {
         inline constexpr uintptr_t Dimensions = 0xb10;
         inline constexpr uintptr_t FakeDataModel = 0xaf0;
         inline constexpr uintptr_t Pointer = 0x846f768;
         inline constexpr uintptr_t RenderView = 0xc30;
         inline constexpr uintptr_t ViewMatrix = 0x1b0;
    }

    namespace VoiceChatService {
         inline constexpr uintptr_t EnableDefaultVoice = 0x204;
         inline constexpr uintptr_t UseNewAudioApi = 0x205;
         inline constexpr uintptr_t UseNewControlPaths = 0x206;
         inline constexpr uintptr_t UseNewJoinFlow = 0x207;
         inline constexpr uintptr_t UseStreamSwitching = 0x208;
         inline constexpr uintptr_t VoiceChatEnabledForPlaceOnRcc = 0x209;
         inline constexpr uintptr_t VoiceChatEnabledForUniverseOnRcc = 0x20a;
    }

    namespace VRService {
         inline constexpr uintptr_t AvatarGestures = 0x130;
         inline constexpr uintptr_t DidPointerHit = 0x131;
         inline constexpr uintptr_t FadeOutViewOnCollision = 0x132;
         inline constexpr uintptr_t QuestASWState = 0x133;
         inline constexpr uintptr_t QuestDisplayRefreshRate = 0x128;
         inline constexpr uintptr_t VRDeviceAvailable = 0x134;
         inline constexpr uintptr_t VRDeviceName = 0xc8;
         inline constexpr uintptr_t VREnabled = 0x135;
    }

    namespace Weld {
         inline constexpr uintptr_t EnableSkinning = 0x188;
         inline constexpr uintptr_t Part0 = 0x118;
         inline constexpr uintptr_t Part1 = 0x128;
    }

    namespace WeldConstraint {
         inline constexpr uintptr_t Enabled = 0xd8;
         inline constexpr uintptr_t Part0 = 0xb8;
         inline constexpr uintptr_t Part1 = 0xc8;
    }

    namespace WindowInputState {
         inline constexpr uintptr_t CapsLock = 0x40;
         inline constexpr uintptr_t CurrentTextBox = 0x48;
    }

    namespace Wire {
         inline constexpr uintptr_t SourceName = 0xb8;
    }

    namespace WireframeHandleAdornment {
         inline constexpr uintptr_t Scale = 0x1a8;
         inline constexpr uintptr_t Thickness = 0x1b4;
    }

    namespace Workspace {
         inline constexpr uintptr_t CurrentCamera = 0x4b8;
         inline constexpr uintptr_t DistributedGameTime = 0x4d8;
         inline constexpr uintptr_t ReadOnlyGravity = 0xa00;
         inline constexpr uintptr_t World = 0x410;
    }

    namespace World {
         inline constexpr uintptr_t AirProperties = 0x240;
         inline constexpr uintptr_t FallenPartsDestroyHeight = 0x220;
         inline constexpr uintptr_t Gravity = 0x22c;
         inline constexpr uintptr_t Primitives = 0x2b0;
         inline constexpr uintptr_t worldStepsPerSec = 0x728;
    }

    namespace WorldModel {
         inline constexpr uintptr_t UseWorkspaceCollisionGroups = 0x480;
    }

    namespace WorldRoot {
         inline constexpr uintptr_t GravityDirection = 0x388;
         inline constexpr uintptr_t SimulationRate = 0x3a4;
         inline constexpr uintptr_t Wind = 0x3a8;
         inline constexpr uintptr_t WindDirection = 0x394;
    }

    namespace WrapTextureTransfer {
         inline constexpr uintptr_t UVMinBound = 0xe8;
    }
}
