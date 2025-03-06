#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe40
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
class CCitadel_Ability_Tokamak_CrimsonCannon : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	bool m_bAirCast; // 0xc50	
private:
	[[maybe_unused]] uint8_t __pad0c51[0x1c7]; // 0xc51
public:
	bool m_bIsZoomed; // 0xe18	
};

