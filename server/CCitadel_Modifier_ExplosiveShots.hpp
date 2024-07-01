#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x190
// Has VTable
class CCitadel_Modifier_ExplosiveShots : public CCitadelModifier
{
public:
	CUtlVector< CCitadel_Modifier_ExplosiveShots::BulletEntityPair_t > m_vecHitEnts; // 0xc8	
	bool m_bExplosionCanHitMultipleTimes; // 0xe0	
};

