#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x968
// Has VTable
// 
// MNetworkOverride "m_hWeapon"
// MNetworkVarNames "bool m_bShouldIgnoreOffsetAndAccuracy"
// MNetworkVarNames "uint32 m_nWeaponParity"
class CCSGOViewModel : public CPredictedViewModel
{
public:
	// MNetworkEnable
	bool m_bShouldIgnoreOffsetAndAccuracy; // 0x930	
private:
	[[maybe_unused]] uint8_t __pad0931[0x3]; // 0x931
public:
	// MNetworkEnable
	uint32_t m_nWeaponParity; // 0x934	
	uint32_t m_nOldWeaponParity; // 0x938	
};

