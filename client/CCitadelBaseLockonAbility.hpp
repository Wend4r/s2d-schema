#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xda0
// Has VTable
// 
// MNetworkVarNames "LockonTarget_t m_vecLockonTargets"
// MNetworkVarNames "GameTime_t m_LockOnStartTime"
class CCitadelBaseLockonAbility : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x118]; // 0xc28
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	C_UtlVectorEmbeddedNetworkVar< LockonTarget_t > m_vecLockonTargets; // 0xd40	
	// MNetworkEnable
	GameTime_t m_LockOnStartTime; // 0xd90	
private:
	[[maybe_unused]] uint8_t __pad0d94[0x4]; // 0xd94
public:
	ParticleIndex_t m_nTargetingLightEffect; // 0xd98	
};

