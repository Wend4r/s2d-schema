#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x830
// Has VTable
class CCitadel_Projectile_Tier2Boss_RocketBarrage : public CCitadelProjectile
{
public:
	ParticleIndex_t m_nLaserParticleIndex; // 0x820	
	Vector m_vecSmoothedVelocity; // 0x824	
};

