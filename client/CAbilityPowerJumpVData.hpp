#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CAbilityPowerJumpVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_JumpParticle; // 0x15c8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_InAirModifier; // 0x16a8	
	CEmbeddedSubclass< CCitadelModifier > m_PowerJumpModifier; // 0x16b8	
};

