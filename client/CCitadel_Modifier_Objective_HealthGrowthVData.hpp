#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x668
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Objective_HealthGrowthVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Objective Health Growth"
	// MPropertyDescription "How much health per Minute"
	int32_t m_iGrowthPerMinute; // 0x658	
	// MPropertyDescription "How often do we update (seconds)"
	float m_flTickRate; // 0x65c	
	int32_t m_iGrowthStartTimeInMinutes; // 0x660	
};

