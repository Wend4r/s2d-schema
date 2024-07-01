#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xae8
// Has VTable
// 
// MNetworkVarNames "bool m_bActive"
class CCitadel_Ability_RiotProtocol : public CCitadelBaseAbility
{
public:
	ParticleIndex_t m_ChargeUpParticle; // 0xaa8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bActive; // 0xaac	
};

