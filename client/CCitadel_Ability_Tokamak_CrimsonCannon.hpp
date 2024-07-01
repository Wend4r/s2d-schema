#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe18
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
class CCitadel_Ability_Tokamak_CrimsonCannon : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	bool m_bAirCast; // 0xc28	
private:
	[[maybe_unused]] uint8_t __pad0c29[0x1c7]; // 0xc29
public:
	bool m_bIsZoomed; // 0xdf0	
};

