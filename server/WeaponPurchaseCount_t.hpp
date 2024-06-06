#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MNetworkVarNames "uint16 m_nItemDefIndex"
// MNetworkVarNames "uint16 m_nCount"
struct WeaponPurchaseCount_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// MNetworkEnable
	uint16_t m_nItemDefIndex; // 0x30	
	// MNetworkEnable
	uint16_t m_nCount; // 0x32	
};

