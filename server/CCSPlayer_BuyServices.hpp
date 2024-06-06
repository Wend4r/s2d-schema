#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x138
// Has VTable
// 
// MNetworkVarNames "SellbackPurchaseEntry_t m_vecSellbackPurchaseEntries"
class CCSPlayer_BuyServices : public CPlayerPawnComponent
{
private:
	[[maybe_unused]] uint8_t __pad0040[0x88]; // 0x40
public:
	// MNetworkEnable
	CUtlVectorEmbeddedNetworkVar< SellbackPurchaseEntry_t > m_vecSellbackPurchaseEntries; // 0xc8	
};

