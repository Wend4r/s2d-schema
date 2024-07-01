#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x8d0
// Has VTable
// 
// MNetworkVarNames "bool m_bAllowRotatingUp"
// MNetworkVarNames "bool m_bFixedPosition"
// MNetworkVarNames "float m_flShieldOffset"
class CCitadel_Shield : public CCitadelModelEntity
{
public:
	// MNetworkEnable
	bool m_bAllowRotatingUp; // 0x8c8	
	// MNetworkEnable
	bool m_bFixedPosition; // 0x8c9	
private:
	[[maybe_unused]] uint8_t __pad08ca[0x2]; // 0x8ca
public:
	// MNetworkEnable
	float m_flShieldOffset; // 0x8cc	
};

