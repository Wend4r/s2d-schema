#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_HealthSwapVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SwapParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SilenceExplodeParticle; // 0x16a8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SwapModifier; // 0x1788	
	CEmbeddedSubclass< CCitadelModifier > m_PreCastModifier; // 0x1798	
	CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // 0x17a8	
	CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // 0x17b8	
};

