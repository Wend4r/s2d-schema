#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb90
// Has VTable
// 
// MNetworkVarNames "bool m_bInGround"
class CCitadel_Ability_Burrow : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0aa8[0xe0]; // 0xaa8
public:
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerOwnerExclusive"
	bool m_bInGround; // 0xb88	
private:
	[[maybe_unused]] uint8_t __pad0b89[0x3]; // 0xb89
public:
	ParticleIndex_t m_nBurrowEffect; // 0xb8c	
};

