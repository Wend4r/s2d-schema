#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb78
// Has VTable
class CCitadel_Ability_PowerSurge : public CCitadelBaseAbility
{
public:
	GameTime_t m_flNextProcTime; // 0xb00	
	float m_flBaseCooldown; // 0xb04	
};

