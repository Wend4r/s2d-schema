#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xcd0
// Has VTable
// 
// MNetworkVarNames "bool m_bInGround"
// MNetworkVarNames "GameTime_t m_flLastDamageTime"
// MNetworkVarNames "GameTime_t m_SpinEndTime"
class CCitadel_Ability_Burrow : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0b00[0x1c0]; // 0xb00
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bInGround; // 0xcc0	
private:
	[[maybe_unused]] uint8_t __pad0cc1[0x3]; // 0xcc1
public:
	// MNetworkEnable
	GameTime_t m_flLastDamageTime; // 0xcc4	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_SpinEndTime; // 0xcc8	
	ParticleIndex_t m_nBurrowEffect; // 0xccc	
};

