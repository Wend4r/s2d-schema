#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xac0
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_tDrainLifeStopTime"
class CCitadel_Ability_LifeDrain : public CCitadelBaseAbility
{
public:
	CHandle< CBaseEntity > m_hTarget; // 0xab0	
	// MNetworkEnable
	GameTime_t m_tDrainLifeStopTime; // 0xab4	
};

