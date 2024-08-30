#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbc8
// Has VTable
// 
// MNetworkVarNames "bool m_bInGround"
// MNetworkVarNames "GameTime_t m_SpinEndTime"
class CCitadel_Ability_Burrow : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ad8[0xe0]; // 0xad8
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bInGround; // 0xbb8	
private:
	[[maybe_unused]] uint8_t __pad0bb9[0x3]; // 0xbb9
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_SpinEndTime; // 0xbbc	
	ParticleIndex_t m_nBurrowEffect; // 0xbc0	
};

