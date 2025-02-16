#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x15b8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ShieldedSentry_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_InnateModifier; // 0x1590	
	CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // 0x15a0	
	// MPropertyStartGroup "Gameplay"
	float m_flDamageFalloffEndScale; // 0x15b0	
};

