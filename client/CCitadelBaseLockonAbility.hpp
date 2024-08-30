#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdc8
// Has VTable
// 
// MNetworkVarNames "LockonTarget_t m_vecLockonTargets"
// MNetworkVarNames "GameTime_t m_LockOnStartTime"
class CCitadelBaseLockonAbility : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x118]; // 0xc50
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	C_UtlVectorEmbeddedNetworkVar< LockonTarget_t > m_vecLockonTargets; // 0xd68	
	// MNetworkEnable
	GameTime_t m_LockOnStartTime; // 0xdb8	
private:
	[[maybe_unused]] uint8_t __pad0dbc[0x4]; // 0xdbc
public:
	ParticleIndex_t m_nTargetingLightEffect; // 0xdc0	
};

