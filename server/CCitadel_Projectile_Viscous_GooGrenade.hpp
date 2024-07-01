#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x818
// Has VTable
class CCitadel_Projectile_Viscous_GooGrenade : public CCitadelProjectile
{
public:
	int32_t m_nBounces; // 0x7f8	
	GameTime_t m_tNextDetonateTime; // 0x7fc	
	CUtlVector< CHandle< CBaseEntity > > m_vecProjectileHitTargets; // 0x800	
};

