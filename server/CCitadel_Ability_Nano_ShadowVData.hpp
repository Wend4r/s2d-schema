#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_Nano_ShadowVData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ShadowModifier; // 0x15c8	
	CEmbeddedSubclass< CCitadelModifier > m_PurgeModifier; // 0x15d8	
	CEmbeddedSubclass< CCitadelModifier > m_EnemyAura; // 0x15e8	
	// MPropertyGroupName "GamePlay"
	float m_flAuraRadius; // 0x15f8	
};

