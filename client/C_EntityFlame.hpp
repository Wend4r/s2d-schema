#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x5a0
// Has VTable
// 
// MNetworkVarNames "CHandle< C_BaseEntity> m_hEntAttached"
// MNetworkVarNames "bool m_bCheapEffect"
class C_EntityFlame : public C_BaseEntity
{
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEntAttached; // 0x568	
private:
	[[maybe_unused]] uint8_t __pad056c[0x24]; // 0x56c
public:
	CHandle< C_BaseEntity > m_hOldAttached; // 0x590	
	// MNetworkEnable
	bool m_bCheapEffect; // 0x594	
	
	// Datamap fields:
	// void m_hEffect; // 0x570
};

