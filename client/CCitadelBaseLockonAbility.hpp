#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdd8
// Has VTable
// 
// MNetworkVarNames "LockonTarget_t m_vecLockonTargets"
// MNetworkVarNames "GameTime_t m_LockOnStartTime"
class CCitadelBaseLockonAbility : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c60[0x118]; // 0xc60
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	C_UtlVectorEmbeddedNetworkVar< LockonTarget_t > m_vecLockonTargets; // 0xd78	
	// MNetworkEnable
	GameTime_t m_LockOnStartTime; // 0xdc8	
private:
	[[maybe_unused]] uint8_t __pad0dcc[0x4]; // 0xdcc
public:
	ParticleIndex_t m_nTargetingLightEffect; // 0xdd0	
};

