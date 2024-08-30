#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb28
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flDashCastStartTime"
// MNetworkVarNames "Vector m_vDashCastDir"
class CCitadelBaseDashCastAbility : public CCitadelBaseAbility
{
public:
	CHandle< CCitadelBaseAbility > m_hAbilityToTrigger; // 0xad8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flDashCastStartTime; // 0xadc	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	Vector m_vDashCastDir; // 0xae0	
};

