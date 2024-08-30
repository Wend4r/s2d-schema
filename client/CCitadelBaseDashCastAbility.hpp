#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xca0
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flDashCastStartTime"
// MNetworkVarNames "Vector m_vDashCastDir"
class CCitadelBaseDashCastAbility : public C_CitadelBaseAbility
{
public:
	CHandle< C_CitadelBaseAbility > m_hAbilityToTrigger; // 0xc50	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flDashCastStartTime; // 0xc54	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vDashCastDir; // 0xc58	
};

