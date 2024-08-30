#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x868
// Has VTable
class CCitadel_Projectile_Viscous_GooGrenade : public CCitadelProjectile
{
public:
	int32_t m_nBounces; // 0x820	
	GameTime_t m_tNextDetonateTime; // 0x824	
	CUtlVector< CHandle< CBaseEntity > > m_vecProjectileHitTargets; // 0x828	
};

