#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1950
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityDashVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DownDashParticle; // 0x16a8	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strArriveSound; // 0x1788	
	CSoundEventName m_strStaminaDrainedSound; // 0x1798	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceGroundDashActivate; // 0x17a8	
	CitadelCameraOperationsSequence_t m_cameraSequenceAirDashActivate; // 0x1830	
	// MPropertyStartGroup "Ground Dash Stuff"
	float m_flMaxAngDiff; // 0x18b8	
	float m_flDurationScaleForSpeed; // 0x18bc	
	float m_flSlideEarlyOutWindow; // 0x18c0	
	float m_flSlideLockoutTime; // 0x18c4	
	float m_flGroundDashAirbornDrag; // 0x18c8	
	float m_flGroundDashAirbornSpeedClamp; // 0x18cc	
	CSoundEventName m_strGroundDashActivate; // 0x18d0	
	CPiecewiseCurve m_curvePosition; // 0x18e0	
	float m_flGroundDashDuration; // 0x1920	
	float m_flGroundDashDistanceInMeters; // 0x1924	
	// MPropertyStartGroup "Air Dash Stuff"
	float m_flAirDashEndVelocityScale; // 0x1928	
	float m_flAirDashAccPct; // 0x192c	
	float m_flDuringDrag; // 0x1930	
	float m_flPostDrag; // 0x1934	
	float m_flPostDragDuration; // 0x1938	
	float m_flDownwardAirDashSpeed; // 0x193c	
	CSoundEventName m_strDashActivate; // 0x1940	
};

