#pragma once

#include <cstdint>

struct CRemapFloat;
struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1908
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilitySlideVData : public CitadelAbilityVData
{
public:
	// MPropertyDescription "The minimum angle we consider to be a slope.  Less than this we will consider flat ground."
	float m_flMinAngleToConsiderASlope; // 0x15c8	
	// MPropertyDescription "The maximum speed we will apply acceleration up to when sliding on the steepest slope."
	float m_flSlideMaxSlopeMaxAccSpeed; // 0x15cc	
	// MPropertyDescription "The maximum speed we will apply acceleration up to when sliding on the shallowest slope."
	float m_flSlideMinSlopeMaxAccSpeed; // 0x15d0	
	// MPropertyDescription "When checking for a drop-slide, how long ago can the activate button have been pressed."
	float m_flButtonPressWindow; // 0x15d4	
	// MPropertyDescription "When fast you can turn while sliding."
	float m_flTurnSpeed; // 0x15d8	
	// MPropertyDescription "Amount of acceleration to apply on the shallowest slope"
	float m_flSlideMinSlopeAcceleration; // 0x15dc	
	// MPropertyDescription "Amount of acceleration to apply on the steepest slope"
	float m_flSlideMaxSlopeAcceleration; // 0x15e0	
	// MPropertyDescription "When pressing forward, how far to the side you need to look to start turning in that direction."
	float m_flTurnMinAngDiff; // 0x15e4	
	// MPropertyDescription "When pressing forward, how far to the side you need to look to apply maximum turning."
	float m_flTurnMaxAngDiff; // 0x15e8	
	// MPropertyDescription "For how long after landing and starting a slide on flat ground we apply 'Flat Ground Friction Grace' before applying 'Flat Ground Friction'"
	float m_flLandedFlatGroundFrictionGraceTime; // 0x15ec	
	// MPropertyDescription "For how long after starting to slide on flat ground we apply 'Flat Ground Friction Grace' before applying 'Flat Ground Friction'"
	float m_flFlatGroundFrictionGraceTime; // 0x15f0	
	// MPropertyDescription "The friction the player uses while sliding on flat ground."
	float m_flFrictionFlatGroundGrace; // 0x15f4	
	// MPropertyDescription "The friction the player uses while sliding on flat ground."
	float m_flFrictionFlatGround; // 0x15f8	
	// MPropertyDescription "The friction the player uses while sliding on our minimum slope."
	float m_flFrictionMinSlope; // 0x15fc	
	// MPropertyDescription "The friction the player uses while sliding on our maximum slope."
	float m_flFrictionMaxSlope; // 0x1600	
	// MPropertyDescription "How much friction to apply when trying to slide up our minimum slope."
	float m_flFrictionUphillMinSlope; // 0x1604	
	// MPropertyDescription "How much friction to apply when trying to slide up our maximum slope."
	float m_flFrictionUphillMaxSlope; // 0x1608	
	// MPropertyDescription "When applying the landing speed boost, bias the scale based on slope by this much."
	float m_flLandingSlopeScaleBias; // 0x160c	
	// MPropertyDescription "Minimum speed to trigger a boost when landing and trying to slide."
	float m_flBoostMinTriggerSpeed; // 0x1610	
	// MPropertyDescription "Maximum speed used to determine speed boost when landing and trying to slide."
	float m_flBoostMaxTriggerSpeed; // 0x1614	
	// MPropertyDescription "Minimum speed boost to apply when landing and initiating a slide."
	float m_flBoostMinSpeed; // 0x1618	
	// MPropertyDescription "Maximumm speed boost to apply when landing and initiating a slide."
	float m_flBoostMaxSpeed; // 0x161c	
	// MPropertyDescription "How fast you have to be moving on flat ground to be able to initiate a slide."
	float m_flMinActivationSpeed; // 0x1620	
	// MPropertyDescription "If your slide speed falls below this on flat ground, you will stop sliding."
	float m_flMinSustainSpeed; // 0x1624	
	// MPropertyDescription "The amount of speed boost to apply when running forward and initiating a slide."
	float m_flSprintBoostSpeed; // 0x1628	
	// MPropertyDescription "The time after dashing to start a slide to get the full speed dash slide"
	float m_flDashSlideStartTime; // 0x162c	
	// MPropertyDescription "The speed to start a slide out of a dash."
	float m_flDashSlideSpeed; // 0x1630	
	// MPropertyDescription "The speed to start a slide out of a dash if the timing was incorrect."
	float m_flDashSlideFailSpeed; // 0x1634	
	// MPropertyDescription "Sound for succesfully executing a dash-slide"
	CSoundEventName m_strDashSlideActivate; // 0x1638	
	// MPropertyDescription "How long to apply 'Dash Boost Friction' after starting a slide out of a dash."
	float m_flDashSlideFrictionTime; // 0x1648	
	// MPropertyDescription "The friction to apply after starting a slide out of a dash."
	float m_flDashSlideFriction; // 0x164c	
	// MPropertyDescription "How fast you have to be moving while dashing to initiate a slide.  Mainly to prevent slowed-dash flowing into a weirdly fast slides."
	float m_flDashMinActivationSpeed; // 0x1650	
	// MPropertyDescription "The shallowest slope degree to start applying downhill acceleration."
	float m_flAccMinSlopeDeg; // 0x1654	
	// MPropertyDescription "The angle we consider the most extreme slope for applying downhill acceleration."
	float m_flAccMaxSlopeDeg; // 0x1658	
	// MPropertyDescription "How much of the downhill acceleration to apply at the minimum angle."
	float m_flAccMinSlopeScale; // 0x165c	
	// MPropertyDescription "When sliding, how far forward to look when determining our averaged current slope"
	float m_flSlideProbeForwardOffset; // 0x1660	
	// MPropertyDescription "When running on flat ground and trying to initiate a slide, how far forward to look for a slope that will let's us trigger a slide early."
	float m_flSlideActivationProbeForwardOffset; // 0x1664	
	// MPropertyDescription "Maximum distance between probe samples"
	float m_flMaxDistanceBetweenProbeSamples; // 0x1668	
	// MPropertyDescription "If activating via the lookahead probe's normal, use that normal for this long after activating to help us get over that slope."
	float m_flInitialSlideUseForwardProbeTime; // 0x166c	
	// MPropertyDescription "When trying to determine what slope we're currently only, sample this far around the player"
	float m_flCurrentSlopeSampleDistance; // 0x1670	
	// MPropertyDescription "Ignore slopes whose angle different from our velocity is this many std deviations out when sampling for current slope"
	float m_flSampleVelDiffStdDevScaleCutoff; // 0x1674	
	// MPropertyDescription "If facing further than this angle away from the direction of the slope, dont initiate a slide on it."
	float m_flSlopeFacingAngleToActivate; // 0x1678	
	// MPropertyDescription "Maximum air-drag to apply when jumping out of a slide."
	float m_flAirDragAfterJump; // 0x167c	
	// MPropertyDescription "How long to apply air-drag after jumping out of a slide."
	float m_flAirDragAfterJumpTime; // 0x1680	
	// MPropertyDescription "Air-drag applied when jumping out of a slide linearly ramps from 100% to 0% from 0' to this angle."
	float m_flAirDragMaxAngle; // 0x1684	
	// MPropertyDescription "How long you have to be walking around, not sliding until we clear the air-drag flag on jumps."
	float m_flAirDragResetTime; // 0x1688	
	// MPropertyDescription "How long after you stop sliding do we consider it to still be a slide-jump."
	float m_flLateSlideJumpWindow; // 0x168c	
	// MPropertyDescription "Speed remap to slide effect intensity"
	CRemapFloat m_SlideEffectRemap; // 0x1690	
	// MPropertyDescription "The curve defining the getup anim's speed penalty duration(x) and severity(y)."
	CPiecewiseCurve m_GetupSpeedCurve; // 0x16a0	
	// MPropertyDescription "How long after you stop sliding do we consider it to still be a slide-jump."
	float m_flGetupBusyDuration; // 0x16e0	
	// MPropertyDescription "The amount that sliding reduces recoil. 100 = no recoil at all."
	float m_flSlidingRecoilReduction; // 0x16e4	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceStartSliding; // 0x16e8	
	CitadelCameraOperationsSequence_t m_cameraSequenceEndSliding; // 0x1770	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlideParticle; // 0x17f8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strStartSound; // 0x18d8	
	CSoundEventName m_strLoopingSound; // 0x18e8	
	CSoundEventName m_strStopSound; // 0x18f8	
};

