#pragma once

#include <cstdint>

struct CitadelCameraOperationsSequence_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1918
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityDashVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashParticle; // 0x1590	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DownDashParticle; // 0x1670	
	// MPropertyStartGroup "Sounds"
	CSoundEventName m_strArriveSound; // 0x1750	
	CSoundEventName m_strStaminaDrainedSound; // 0x1760	
	// MPropertyStartGroup "Camera"
	CitadelCameraOperationsSequence_t m_cameraSequenceGroundDashActivate; // 0x1770	
	CitadelCameraOperationsSequence_t m_cameraSequenceAirDashActivate; // 0x17f8	
	// MPropertyStartGroup "Ground Dash Stuff"
	float m_flMaxAngDiff; // 0x1880	
	float m_flDurationScaleForSpeed; // 0x1884	
	float m_flSlideEarlyOutWindow; // 0x1888	
	float m_flSlideLockoutTime; // 0x188c	
	float m_flGroundDashAirbornDrag; // 0x1890	
	float m_flGroundDashAirbornSpeedClamp; // 0x1894	
	CSoundEventName m_strGroundDashActivate; // 0x1898	
	CPiecewiseCurve m_curvePosition; // 0x18a8	
	float m_flGroundDashDuration; // 0x18e8	
	float m_flGroundDashDistanceInMeters; // 0x18ec	
	// MPropertyStartGroup "Air Dash Stuff"
	float m_flAirDashEndVelocityScale; // 0x18f0	
	float m_flAirDashAccPct; // 0x18f4	
	float m_flDuringDrag; // 0x18f8	
	float m_flPostDrag; // 0x18fc	
	float m_flPostDragDuration; // 0x1900	
	float m_flDownwardAirDashSpeed; // 0x1904	
	CSoundEventName m_strDashActivate; // 0x1908	
};

