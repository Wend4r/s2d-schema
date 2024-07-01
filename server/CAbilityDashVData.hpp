#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1858
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityDashVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashParticle; // 0x14e0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DownDashParticle; // 0x15c0	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strArriveSound; // 0x16a0	
	CSoundEventName m_strStaminaDrainedSound; // 0x16b0	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceGroundDashActivate; // 0x16c0	
	CitadelCameraOperationsSequence_t m_cameraSequenceAirDashActivate; // 0x1740	
	// MPropertyStartGroup "Ground Dash Stuff"
	float m_flMaxAngDiff; // 0x17c0	
	float m_flDurationScaleForSpeed; // 0x17c4	
	float m_flSlideEarlyOutWindow; // 0x17c8	
	float m_flSlideLockoutTime; // 0x17cc	
	float m_flGroundDashAirbornDrag; // 0x17d0	
	float m_flGroundDashAirbornSpeedClamp; // 0x17d4	
	CSoundEventName m_strGroundDashActivate; // 0x17d8	
	CPiecewiseCurve m_curvePosition; // 0x17e8	
	float m_flGroundDashDuration; // 0x1828	
	float m_flGroundDashDistanceInMeters; // 0x182c	
	// MPropertyStartGroup "Air Dash Stuff"
	float m_flAirDashEndVelocityScale; // 0x1830	
	float m_flAirDashAccPct; // 0x1834	
	float m_flDuringDrag; // 0x1838	
	float m_flPostDrag; // 0x183c	
	float m_flPostDragDuration; // 0x1840	
	float m_flDownwardAirDashSpeed; // 0x1844	
	CSoundEventName m_strDashActivate; // 0x1848	
};

