#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x580
// Has VTable
// 
// MNetworkVarNames "CHandle< C_BaseEntity> m_hEntAttached"
// MNetworkVarNames "bool m_bCheapEffect"
class C_EntityFlame : public C_BaseEntity
{
public:
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hEntAttached; // 0x548	
private:
	[[maybe_unused]] uint8_t __pad054c[0x24]; // 0x54c
public:
	CHandle< C_BaseEntity > m_hOldAttached; // 0x570	
	// MNetworkEnable
	bool m_bCheapEffect; // 0x574	
	
	// Datamap fields:
	// void m_hEffect; // 0x550
};

