#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x600
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_DamageResistanceVData : public CCitadelModifierVData
{
public:
	float m_flDamageResistancePerSecond; // 0x5f0	
	float m_flTickInterval; // 0x5f4	
	float m_flDamageResistanceBonusPerGameMinute; // 0x5f8	
};

