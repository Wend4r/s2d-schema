#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb20
// Has VTable
// 
// MNetworkVarNames "EntitySubclassID_t m_vecComponentsConsumed"
class CCitadel_Item : public CCitadelBaseAbility
{
public:
	bool m_bEquipped; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b01[0x7]; // 0xb01
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CNetworkUtlVectorBase< CUtlStringToken > m_vecComponentsConsumed; // 0xb08	
};

