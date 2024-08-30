#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x16d0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_UltComboVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeSwingParticle; // 0x14f0	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeImpactParticle; // 0x15d0	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SelfModifier; // 0x16b0	
	CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // 0x16c0	
};

