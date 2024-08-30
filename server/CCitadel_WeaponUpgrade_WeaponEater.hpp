#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbe0
// Has VTable
// 
// MNetworkVarNames "int m_nWeaponPower"
class CCitadel_WeaponUpgrade_WeaponEater : public CCitadel_Item
{
private:
	[[maybe_unused]] uint8_t __pad0af8[0xe0]; // 0xaf8
public:
	// MNetworkEnable
	int32_t m_nWeaponPower; // 0xbd8	
};

