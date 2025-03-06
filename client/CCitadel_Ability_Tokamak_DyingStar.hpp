#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd38
// Has VTable
// 
// MNetworkVarNames "bool m_bInFlight"
class CCitadel_Ability_Tokamak_DyingStar : public C_CitadelBaseAbility
{
public:
	ParticleIndex_t m_nRollFXIndex; // 0xc50	
	// MNetworkEnable
	bool m_bInFlight; // 0xc54	
};

