#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe20
// Has VTable
// 
// MNetworkVarNames "bool m_bInGround"
// MNetworkVarNames "GameTime_t m_flLastDamageTime"
// MNetworkVarNames "GameTime_t m_SpinEndTime"
class CCitadel_Ability_Burrow : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0x1c0]; // 0xc50
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	bool m_bInGround; // 0xe10	
private:
	[[maybe_unused]] uint8_t __pad0e11[0x3]; // 0xe11
public:
	// MNetworkEnable
	GameTime_t m_flLastDamageTime; // 0xe14	
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
	GameTime_t m_SpinEndTime; // 0xe18	
	ParticleIndex_t m_nBurrowEffect; // 0xe1c	
};

