#pragma once

#include <cstdint>

struct GameTime_t;
struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd40
// Has VTable
// 
// MNetworkVarNames "bool m_bInGround"
// MNetworkVarNames "GameTime_t m_SpinEndTime"
class CCitadel_Ability_Burrow : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c50[0xe0]; // 0xc50
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bInGround; // 0xd30	
private:
	[[maybe_unused]] uint8_t __pad0d31[0x3]; // 0xd31
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	GameTime_t m_SpinEndTime; // 0xd34	
	ParticleIndex_t m_nBurrowEffect; // 0xd38	
};

