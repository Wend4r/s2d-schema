#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8a8
// Has VTable
class C_Citadel_Projectile_Tier2Boss_RocketBarrage : public C_CitadelProjectile
{
public:
	ParticleIndex_t m_nLaserParticleIndex; // 0x898	
	Vector m_vecSmoothedVelocity; // 0x89c	
};

