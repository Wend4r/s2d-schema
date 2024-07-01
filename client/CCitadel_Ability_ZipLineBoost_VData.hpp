#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x14f8
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ZipLineBoost_VData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ZipboostModifier; // 0x14e0	
	// MPropertyGroupName "Gameplay"
	float m_flTimeToActivate; // 0x14f0	
	float m_flTimeForHint; // 0x14f4	
};

