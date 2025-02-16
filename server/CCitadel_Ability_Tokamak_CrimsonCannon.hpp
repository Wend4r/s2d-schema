#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd20
// Has VTable
// 
// MNetworkVarNames "bool m_bAirCast"
class CCitadel_Ability_Tokamak_CrimsonCannon : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x20]; // 0xb00
public:
	CUtlVector< ParticleIndex_t > m_TargetPreviews; // 0xb20	
	// MNetworkEnable
	bool m_bAirCast; // 0xb38	
};

