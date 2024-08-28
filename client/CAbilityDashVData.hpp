#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1860
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityDashVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashParticle; // 0x14e8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DownDashParticle; // 0x15c8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strArriveSound; // 0x16a8	
	CSoundEventName m_strStaminaDrainedSound; // 0x16b8	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceGroundDashActivate; // 0x16c8	
	CitadelCameraOperationsSequence_t m_cameraSequenceAirDashActivate; // 0x1748	
	// MPropertyStartGroup "Ground Dash Stuff"
	float m_flMaxAngDiff; // 0x17c8	
	float m_flDurationScaleForSpeed; // 0x17cc	
	float m_flSlideEarlyOutWindow; // 0x17d0	
	float m_flSlideLockoutTime; // 0x17d4	
	float m_flGroundDashAirbornDrag; // 0x17d8	
	float m_flGroundDashAirbornSpeedClamp; // 0x17dc	
	CSoundEventName m_strGroundDashActivate; // 0x17e0	
	CPiecewiseCurve m_curvePosition; // 0x17f0	
	float m_flGroundDashDuration; // 0x1830	
	float m_flGroundDashDistanceInMeters; // 0x1834	
	// MPropertyStartGroup "Air Dash Stuff"
	float m_flAirDashEndVelocityScale; // 0x1838	
	float m_flAirDashAccPct; // 0x183c	
	float m_flDuringDrag; // 0x1840	
	float m_flPostDrag; // 0x1844	
	float m_flPostDragDuration; // 0x1848	
	float m_flDownwardAirDashSpeed; // 0x184c	
	CSoundEventName m_strDashActivate; // 0x1850	
};

