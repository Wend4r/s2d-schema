#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd18
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flExplodeEndTime"
// MNetworkVarNames "GameTime_t m_flBuffEndTime"
class CCitadel_Ability_InfinitySlash : public CCitadelBaseYamatoAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c68[0xa8]; // 0xc68
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flExplodeEndTime; // 0xd10	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flBuffEndTime; // 0xd14	
};

