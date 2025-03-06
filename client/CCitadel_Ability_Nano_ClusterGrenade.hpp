#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xed8
// Has VTable
class CCitadel_Ability_Nano_ClusterGrenade : public C_CitadelBaseAbility
{
public:
	CUtlVector< CHandle< C_BaseEntity > > m_vecHitEnemies; // 0xc50	
	GameTime_t m_flNextProjectileTime; // 0xc68	
};

