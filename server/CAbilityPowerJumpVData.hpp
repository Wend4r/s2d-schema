#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15f0
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityPowerJumpVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_JumpParticle; // 0x14f0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_InAirModifier; // 0x15d0	
	CEmbeddedSubclass< CCitadelModifier > m_PowerJumpModifier; // 0x15e0	
};

