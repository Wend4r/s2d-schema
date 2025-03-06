#pragma once

#include <cstdint>

struct CCitadelAutoScaledTime;
struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xce8
// Has VTable
// 
// MNetworkVarNames "CCitadelAutoScaledTime m_flDetonateTime"
// MNetworkVarNames "GameTime_t m_flStartTime"
class CCitadel_Ability_FireBomb : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x78]; // 0xc50
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	CCitadelAutoScaledTime m_flDetonateTime; // 0xcc8	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_flStartTime; // 0xce0	
};

