#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe50
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
class CCitadel_Ability_Tokamak_CrimsonCannon : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	bool m_bAirCast; // 0xc60	
private:
	[[maybe_unused]] uint8_t __pad0c61[0x1c7]; // 0xc61
public:
	bool m_bIsZoomed; // 0xe28	
};

