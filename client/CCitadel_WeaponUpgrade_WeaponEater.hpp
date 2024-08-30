#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd50
// Has VTable
// 
// MNetworkVarNames "int m_nWeaponPower"
class CCitadel_WeaponUpgrade_WeaponEater : public CCitadel_Item
{
private:
	[[maybe_unused]] uint8_t __pad0c68[0xe0]; // 0xc68
public:
	// MNetworkEnable
	int32_t m_nWeaponPower; // 0xd48	
};

