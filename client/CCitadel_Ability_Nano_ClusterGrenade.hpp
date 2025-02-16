#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf28
// Has VTable
class CCitadel_Ability_Nano_ClusterGrenade : public C_CitadelBaseAbility
{
public:
	CUtlVector< CHandle< C_BaseEntity > > m_vecHitEnemies; // 0xca0	
	GameTime_t m_flNextProjectileTime; // 0xcb8	
};

