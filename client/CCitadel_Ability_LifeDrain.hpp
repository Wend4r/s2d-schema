#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc30
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_tDrainLifeStopTime"
class CCitadel_Ability_LifeDrain : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	GameTime_t m_tDrainLifeStopTime; // 0xc28	
};

