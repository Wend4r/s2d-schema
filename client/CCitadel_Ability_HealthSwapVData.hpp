#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_HealthSwapVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SwapParticle; // 0x14f0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SwapModifier; // 0x15d0	
	CEmbeddedSubclass< CCitadelModifier > m_PreCastModifier; // 0x15e0	
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x15f0	
};

