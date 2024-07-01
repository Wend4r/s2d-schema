#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x8b8
// Has VTable
class C_Citadel_Projectile_Viscous_GooGrenade : public C_CitadelProjectile
{
public:
	int32_t m_nBounces; // 0x898	
	GameTime_t m_tNextDetonateTime; // 0x89c	
	CUtlVector< CHandle< C_BaseEntity > > m_vecProjectileHitTargets; // 0x8a0	
};

