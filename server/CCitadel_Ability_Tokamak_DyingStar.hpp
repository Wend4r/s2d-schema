#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbe8
// Has VTable
// 
// MNetworkVarNames "bool m_bInFlight"
class CCitadel_Ability_Tokamak_DyingStar : public CCitadelBaseAbility
{
public:
	ParticleIndex_t m_nRollFXIndex; // 0xb00	
	// MNetworkEnable
	bool m_bInFlight; // 0xb04	
};

