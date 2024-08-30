#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd28
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flScopeStartTime"
class CCitadel_Ability_Hornet_Snipe : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ad8[0x20c]; // 0xad8
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flScopeStartTime; // 0xce4	
};

