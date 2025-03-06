#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1898
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityHornetLeapVData : public CitadelAbilityVData
{
public:
	float m_flChannelingAirDrag; // 0x15c8	
	float m_flChannelingMaxFallSpeed; // 0x15cc	
	float m_flVerticalMoveSpeedPercent; // 0x15d0	
	float m_flAirDrag; // 0x15d4	
	float m_flAirAcceleration; // 0x15d8	
	float m_flLaunchAirDrag; // 0x15dc	
	float m_flLaunchTime; // 0x15e0	
	float m_flMoveSpeedAboveBaseScale; // 0x15e4	
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_LeapModifier; // 0x15e8	
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DustParticle; // 0x15f8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TrailParticle; // 0x16d8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // 0x17b8	
};

