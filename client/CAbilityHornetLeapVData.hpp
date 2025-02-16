#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1860
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityHornetLeapVData : public CitadelAbilityVData
{
public:
	float m_flChannelingAirDrag; // 0x1590	
	float m_flChannelingMaxFallSpeed; // 0x1594	
	float m_flVerticalMoveSpeedPercent; // 0x1598	
	float m_flAirDrag; // 0x159c	
	float m_flAirAcceleration; // 0x15a0	
	float m_flLaunchAirDrag; // 0x15a4	
	float m_flLaunchTime; // 0x15a8	
	float m_flMoveSpeedAboveBaseScale; // 0x15ac	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_LeapModifier; // 0x15b0	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DustParticle; // 0x15c0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TrailParticle; // 0x16a0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x1780	
};

