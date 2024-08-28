#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xad0
// Has VTable
// 
// MNetworkVarNames "EntitySubclassID_t m_vecComponentsConsumed"
class CCitadel_Item : public CCitadelBaseAbility
{
public:
	bool m_bEquipped; // 0xab0	
private:
	[[maybe_unused]] uint8_t __pad0ab1[0x7]; // 0xab1
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CNetworkUtlVectorBase< CUtlStringToken > m_vecComponentsConsumed; // 0xab8	
};

