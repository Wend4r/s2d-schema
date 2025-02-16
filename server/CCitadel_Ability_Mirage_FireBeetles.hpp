#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc38
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flCastStartTime"
class CCitadel_Ability_Mirage_FireBeetles : public CCitadelBaseAbility
{
public:
	Vector m_vLaunchPosition; // 0xb00	
	QAngle m_qLaunchAngle; // 0xb0c	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flCastStartTime; // 0xb18	
};

