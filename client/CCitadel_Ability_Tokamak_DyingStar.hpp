#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd10
// Has VTable
// 
// MNetworkVarNames "bool m_bInFlight"
class CCitadel_Ability_Tokamak_DyingStar : public C_CitadelBaseAbility
{
public:
	ParticleIndex_t m_nRollFXIndex; // 0xc28	
	// MNetworkEnable
	bool m_bInFlight; // 0xc2c	
};

