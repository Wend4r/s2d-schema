#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb98
// Has VTable
class CCitadel_Ability_Nano_Warp : public CCitadelBaseAbility
{
public:
	ParticleIndex_t m_ChannelParticle; // 0xaa8	
	Vector m_vTeleportTarget; // 0xaac	
};

