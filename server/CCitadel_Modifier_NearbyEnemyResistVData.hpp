#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x658
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_NearbyEnemyResistVData : public CCitadelModifierVData
{
public:
	float m_flNearbyEnemyResistRange; // 0x638	
private:
	[[maybe_unused]] uint8_t __pad063c[0x4]; // 0x63c
public:
	CUtlVector< float32 > m_flResistValues; // 0x640	
};

