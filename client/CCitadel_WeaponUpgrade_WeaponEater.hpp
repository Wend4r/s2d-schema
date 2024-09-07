#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd60
// Has VTable
// 
// MNetworkVarNames "int m_nWeaponPower"
class CCitadel_WeaponUpgrade_WeaponEater : public CCitadel_Item
{
private:
	[[maybe_unused]] uint8_t __pad0c78[0xe0]; // 0xc78
public:
	// MNetworkEnable
	int32_t m_nWeaponPower; // 0xd58	
};

