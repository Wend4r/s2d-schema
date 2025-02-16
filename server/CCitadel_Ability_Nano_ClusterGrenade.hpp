#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd88
// Has VTable
class CCitadel_Ability_Nano_ClusterGrenade : public CCitadelBaseAbility
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecHitEnemies; // 0xb00	
	GameTime_t m_flNextProjectileTime; // 0xb18	
};

