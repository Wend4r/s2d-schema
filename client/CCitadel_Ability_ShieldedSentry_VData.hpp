#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1510
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ShieldedSentry_VData : public CitadelAbilityVData
{
public:
	// MPropertyStartGroup "Modifiers"
	CEmbeddedSubclass< CBaseModifier > m_InnateModifier; // 0x14e8	
	CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // 0x14f8	
	// MPropertyStartGroup "Gameplay"
	float m_flDamageFalloffEndScale; // 0x1508	
};

