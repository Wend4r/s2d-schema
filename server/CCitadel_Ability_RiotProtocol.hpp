#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb18
// Has VTable
// 
// MNetworkVarNames "bool m_bActive"
class CCitadel_Ability_RiotProtocol : public CCitadelBaseAbility
{
public:
	ParticleIndex_t m_ChargeUpParticle; // 0xad8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bActive; // 0xadc	
};

