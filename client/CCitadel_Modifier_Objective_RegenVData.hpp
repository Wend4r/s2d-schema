#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x660
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Objective_RegenVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Objective Health Regen"
	// MPropertyDescription "How health per second when out of combat?"
	float m_flOutOfCombatHealthRegen; // 0x658	
	// MPropertyDescription "How longer after taking no damage will out out of combat regen kick in?"
	float m_flOutOfCombatRegenDelay; // 0x65c	
};

