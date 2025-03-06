#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb98
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_tDrainLifeStopTime"
// MNetworkVarNames "GameTime_t m_tSlowStartTime"
// MNetworkVarNames "GameTime_t m_tSlowStopTime"
class CCitadel_Ability_LifeDrain : public CCitadelBaseAbility
{
public:
	CUtlVector< CModifierHandleTyped< CCitadelModifier > > m_vecModifiers; // 0xb00	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_tDrainLifeStopTime; // 0xb18	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_tSlowStartTime; // 0xb1c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_tSlowStopTime; // 0xb20	
};

