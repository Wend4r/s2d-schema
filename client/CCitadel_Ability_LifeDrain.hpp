#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcd0
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_tDrainLifeStopTime"
// MNetworkVarNames "GameTime_t m_tSlowStartTime"
// MNetworkVarNames "GameTime_t m_tSlowStopTime"
class CCitadel_Ability_LifeDrain : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_tDrainLifeStopTime; // 0xc50	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_tSlowStartTime; // 0xc54	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_tSlowStopTime; // 0xc58	
};

