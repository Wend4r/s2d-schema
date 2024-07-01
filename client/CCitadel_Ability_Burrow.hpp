#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd10
// Has VTable
// 
// MNetworkVarNames "bool m_bInGround"
class CCitadel_Ability_Burrow : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0xe0]; // 0xc28
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bInGround; // 0xd08	
private:
	[[maybe_unused]] uint8_t __pad0d09[0x3]; // 0xd09
public:
	ParticleIndex_t m_nBurrowEffect; // 0xd0c	
};

