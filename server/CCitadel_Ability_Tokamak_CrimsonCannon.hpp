#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcf8
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
class CCitadel_Ability_Tokamak_CrimsonCannon : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ad8[0x20]; // 0xad8
public:
	CUtlVector< ParticleIndex_t > m_TargetPreviews; // 0xaf8	
	// MNetworkEnable
	bool m_bAirCast; // 0xb10	
};

