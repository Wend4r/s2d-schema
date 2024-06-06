#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x48
// Has VTable
// 
// MNetworkVarNames "item_definition_index_t m_unDefIdx"
// MNetworkVarNames "int m_nCost"
// MNetworkVarNames "int m_nPrevArmor"
// MNetworkVarNames "bool m_bPrevHelmet"
// MNetworkVarNames "CEntityHandle m_hItem"
struct SellbackPurchaseEntry_t
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
public:
	// MNetworkEnable
	uint16_t m_unDefIdx; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0032[0x2]; // 0x32
public:
	// MNetworkEnable
	int32_t m_nCost; // 0x34	
	// MNetworkEnable
	int32_t m_nPrevArmor; // 0x38	
	// MNetworkEnable
	bool m_bPrevHelmet; // 0x3c	
private:
	[[maybe_unused]] uint8_t __pad003d[0x3]; // 0x3d
public:
	// MNetworkEnable
	CEntityHandle m_hItem; // 0x40	
};

