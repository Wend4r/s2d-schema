#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x548
// Has VTable
// 
// MNetworkVarNames "CHandle< C_BaseEntity> m_hEntAttached"
// MNetworkVarNames "bool m_bCheapEffect"
class C_EntityFlame : public C_BaseEntity
{
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEntAttached; // 0x510	
private:
	[[maybe_unused]] uint8_t __pad0514[0x24]; // 0x514
public:
	CHandle< C_BaseEntity > m_hOldAttached; // 0x538	
	// MNetworkEnable
	bool m_bCheapEffect; // 0x53c	
	
	// Datamap fields:
	// void m_hEffect; // 0x518
};

