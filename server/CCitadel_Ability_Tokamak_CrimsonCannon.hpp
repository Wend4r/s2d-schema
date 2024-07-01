#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcc8
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
class CCitadel_Ability_Tokamak_CrimsonCannon : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0aa8[0x20]; // 0xaa8
public:
	CUtlVector< ParticleIndex_t > m_TargetPreviews; // 0xac8	
	// MNetworkEnable
	bool m_bAirCast; // 0xae0	
};

