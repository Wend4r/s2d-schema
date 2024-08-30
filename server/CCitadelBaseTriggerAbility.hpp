#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xae8
// Has VTable
// 
// MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbilityToTrigger"
// MNetworkVarNames "GameTime_t m_SwappedToTime"
class CCitadelBaseTriggerAbility : public CCitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CHandle< CCitadelBaseAbility > m_hAbilityToTrigger; // 0xad8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_SwappedToTime; // 0xadc	
};

