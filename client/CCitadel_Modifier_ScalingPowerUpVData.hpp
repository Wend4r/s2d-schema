#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x678
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_ScalingPowerUpVData : public CCitadelModifierVData
{
public:
	CUtlVector< ScalingPowerupDefinition_t > m_vecModifierValues; // 0x658	
	float m_flTimeMin; // 0x670	
	float m_flTimeMax; // 0x674	
};

