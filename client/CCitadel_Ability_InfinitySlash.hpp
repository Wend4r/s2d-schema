#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd08
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flExplodeEndTime"
// MNetworkVarNames "GameTime_t m_flBuffEndTime"
class CCitadel_Ability_InfinitySlash : public CCitadelBaseYamatoAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c58[0xa8]; // 0xc58
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flExplodeEndTime; // 0xd00	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_flBuffEndTime; // 0xd04	
};

