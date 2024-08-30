#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc48
// Has VTable
// 
// MNetworkVarNames "LockonTarget_t m_vecLockonTargets"
// MNetworkVarNames "GameTime_t m_LockOnStartTime"
class CCitadelBaseLockonAbility : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ad8[0x118]; // 0xad8
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	CUtlVectorEmbeddedNetworkVar< LockonTarget_t > m_vecLockonTargets; // 0xbf0	
	// MNetworkEnable
	GameTime_t m_LockOnStartTime; // 0xc40	
};

