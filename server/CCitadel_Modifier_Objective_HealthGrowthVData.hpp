#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x648
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_Objective_HealthGrowthVData : public CCitadelModifierVData
{
public:
	// MPropertyStartGroup "Objective Health Growth"
	// MPropertyDescription "How much health per Minute"
	int32_t m_iGrowthPerMinute; // 0x638	
	// MPropertyDescription "How often do we update (seconds)"
	float m_flTickRate; // 0x63c	
	int32_t m_iGrowthStartTimeInMinutes; // 0x640	
};

