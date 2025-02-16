#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe90
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
class CCitadel_Ability_Tokamak_CrimsonCannon : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	bool m_bAirCast; // 0xca0	
private:
	[[maybe_unused]] uint8_t __pad0ca1[0x1c7]; // 0xca1
public:
	bool m_bIsZoomed; // 0xe68	
};

