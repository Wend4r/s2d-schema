#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc70
// Has VTable
// 
// MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbilityToTrigger"
// MNetworkVarNames "GameTime_t m_SwappedToTime"
class CCitadelBaseTriggerAbility : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CHandle< C_CitadelBaseAbility > m_hAbilityToTrigger; // 0xc60	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_SwappedToTime; // 0xc64	
};

