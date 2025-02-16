#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc98
// Has VTable
// 
// MNetworkVarNames "float m_flFloat"
// MNetworkVarNames "int m_nLightningStrikesRemaining"
class CCitadel_Ability_StormCloud : public CCitadelBaseAbility
{
public:
	ParticleIndex_t m_nTargetingParticleIndex; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b04[0x18c]; // 0xb04
public:
	// MNetworkEnable
	float m_flFloat; // 0xc90	
	// MNetworkEnable
	int32_t m_nLightningStrikesRemaining; // 0xc94	
};

