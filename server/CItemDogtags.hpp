#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9c8
// Has VTable
// 
// MNetworkVarNames "CHandle<CCSPlayerPawn> m_OwningPlayer"
// MNetworkVarNames "CHandle<CCSPlayerPawn> m_KillingPlayer"
class CItemDogtags : public CItem
{
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_OwningPlayer; // 0x9c0	
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_KillingPlayer; // 0x9c4	
};

