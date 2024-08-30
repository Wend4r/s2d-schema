#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1508
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ZipLineBoost_VData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ZipboostModifier; // 0x14f0	
	// MPropertyGroupName "Gameplay"
	float m_flTimeToActivate; // 0x1500	
	float m_flTimeForHint; // 0x1504	
};

