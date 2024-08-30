#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xea8
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flScopeStartTime"
class CCitadel_Ability_Hornet_Snipe : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x20c]; // 0xc50
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flScopeStartTime; // 0xe5c	
};

