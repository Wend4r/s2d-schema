#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc58
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flSelfCastEndTime"
class CCitadel_Ability_RestorativeGoo : public C_CitadelBaseAbility
{
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flSelfCastEndTime; // 0xc50	
};

