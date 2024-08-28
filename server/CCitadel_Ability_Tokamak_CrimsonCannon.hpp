#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcd0
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
class CCitadel_Ability_Tokamak_CrimsonCannon : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ab0[0x20]; // 0xab0
public:
	CUtlVector< ParticleIndex_t > m_TargetPreviews; // 0xad0	
	// MNetworkEnable
	bool m_bAirCast; // 0xae8	
};

