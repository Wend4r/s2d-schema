#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc90
// Has VTable
// 
// MNetworkVarNames "GameTime_t m_flDomeStartTime"
// MNetworkVarNames "GameTime_t m_flDomeEndTime"
class CCitadel_Ability_IceDome : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x38]; // 0xc50
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDomeStartTime; // 0xc88	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flDomeEndTime; // 0xc8c	
};

