#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x15e0
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Ability_ZipLineBoost_VData : public CitadelAbilityVData
{
public:
	// MPropertyGroupName "Modifiers"
	CEmbeddedSubclass< CCitadelModifier > m_ZipboostModifier; // 0x15c8	
	// MPropertyGroupName "Gameplay"
	float m_flTimeToActivate; // 0x15d8	
	float m_flTimeForHint; // 0x15dc	
};

