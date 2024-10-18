#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xa88
// Has VTable
// 
// MNetworkVarNames "CHandle<CCSPlayerPawn> m_OwningPlayer"
// MNetworkVarNames "CHandle<CCSPlayerPawn> m_KillingPlayer"
class CItemDogtags : public CItem
{
public:
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_OwningPlayer; // 0xa80	
	// MNetworkEnable
	CHandle< CCSPlayerPawn > m_KillingPlayer; // 0xa84	
};

