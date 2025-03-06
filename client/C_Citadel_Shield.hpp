#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x818
// Has VTable
// 
// MNetworkVarNames "bool m_bAllowRotatingUp"
// MNetworkVarNames "bool m_bFixedPosition"
// MNetworkVarNames "float m_flShieldOffset"
class C_Citadel_Shield : public CCitadelModelEntity
{
public:
	// MNetworkEnable
	bool m_bAllowRotatingUp; // 0x810	
	// MNetworkEnable
	bool m_bFixedPosition; // 0x811	
private:
	[[maybe_unused]] uint8_t __pad0812[0x2]; // 0x812
public:
	// MNetworkEnable
	float m_flShieldOffset; // 0x814	
};

