#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x658
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ScalingPowerUpVData : public CCitadelModifierVData
{
public:
	CUtlVector< ScalingPowerupDefinition_t > m_vecModifierValues; // 0x638	
	float m_flTimeMin; // 0x650	
	float m_flTimeMax; // 0x654	
};

