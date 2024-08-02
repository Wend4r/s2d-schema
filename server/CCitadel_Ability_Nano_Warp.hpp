#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc08
// Has VTable
class CCitadel_Ability_Nano_Warp : public CCitadelBaseAbility
{
public:
	Vector m_vTeleportTarget; // 0xaa8	
	ParticleIndex_t m_ChannelParticle; // 0xab4	
};

