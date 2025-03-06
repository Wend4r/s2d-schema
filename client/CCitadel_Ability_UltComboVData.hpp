#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x17c0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_UltComboVData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Visuals"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeSwingParticle; // 0x15c8	
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeImpactParticle; // 0x16a8	
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_SelfModifier; // 0x1788	
	CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // 0x1798	
	CEmbeddedSubclass< CCitadelModifier > m_KillCheckModifier; // 0x17a8	
	// MPropertyStartGroup "Gameplay"
	float m_flKillCheckWindow; // 0x17b8	
};

