#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb40
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flDomeStartTime"
// MNetworkVarNames "GameTime_t m_flDomeEndTime"
class CCitadel_Ability_IceDome : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x38]; // 0xb00
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDomeStartTime; // 0xb38	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDomeEndTime; // 0xb3c	
};

