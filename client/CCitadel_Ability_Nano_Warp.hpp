#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd88
// Has VTable
class CCitadel_Ability_Nano_Warp : public C_CitadelBaseAbility
{
public:
	Vector m_vTeleportTarget; // 0xc28	
	ParticleIndex_t m_ChannelParticle; // 0xc34	
};

