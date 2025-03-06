#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd88
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flCastStartTime"
class CCitadel_Ability_Mirage_FireBeetles : public C_CitadelBaseAbility
{
public:
	Vector m_vLaunchPosition; // 0xc50	
	QAngle m_qLaunchAngle; // 0xc5c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flCastStartTime; // 0xc68	
};

