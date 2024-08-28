#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xaf0
// Has VTable
// 
// MNetworkVarNames "bool m_bActive"
class CCitadel_Ability_RiotProtocol : public CCitadelBaseAbility
{
public:
	ParticleIndex_t m_ChargeUpParticle; // 0xab0	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bActive; // 0xab4	
};

