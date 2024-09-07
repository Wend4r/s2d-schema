#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd0
// Has VTable
class CCitadel_Modifier_TeamRelativeParticle : public CCitadelModifier
{
public:
	ParticleIndex_t m_nParentViewParticle; // 0xc8	
	ParticleIndex_t m_nOtherPlayerViewParticle; // 0xcc	
};

