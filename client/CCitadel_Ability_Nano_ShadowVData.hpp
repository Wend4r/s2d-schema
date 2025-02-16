#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15c8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Nano_ShadowVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ShadowModifier; // 0x1590	
	CEmbeddedSubclass< CCitadelModifier > m_PurgeModifier; // 0x15a0	
	CEmbeddedSubclass< CCitadelModifier > m_EnemyAura; // 0x15b0	
	// MPropertyGroupName "GamePlay"
	float m_flAuraRadius; // 0x15c0	
};

