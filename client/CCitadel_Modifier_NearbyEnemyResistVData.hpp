#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x678
// Has VTable
// 
// MGetKV3ClassDefaults
class CCitadel_Modifier_NearbyEnemyResistVData : public CCitadelModifierVData
{
public:
	float m_flNearbyEnemyResistRange; // 0x658	
private:
	[[maybe_unused]] uint8_t __pad065c[0x4]; // 0x65c
public:
	CUtlVector< float32 > m_flResistValues; // 0x660	
};

