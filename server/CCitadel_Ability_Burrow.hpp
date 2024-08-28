#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xba0
// Has VTable
// 
// MNetworkVarNames "bool m_bInGround"
// MNetworkVarNames "GameTime_t m_SpinEndTime"
class CCitadel_Ability_Burrow : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ab0[0xe0]; // 0xab0
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bInGround; // 0xb90	
private:
	[[maybe_unused]] uint8_t __pad0b91[0x3]; // 0xb91
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_SpinEndTime; // 0xb94	
	ParticleIndex_t m_nBurrowEffect; // 0xb98	
};

