#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe40
// Has VTable
// 
// MNetworkVarNames "float m_flFloat"
// MNetworkVarNames "int m_nLightningStrikesRemaining"
class CCitadel_Ability_StormCloud : public C_CitadelBaseAbility
{
public:
	ParticleIndex_t m_nTargetingParticleIndex; // 0xca0	
private:
	[[maybe_unused]] uint8_t __pad0ca4[0x18c]; // 0xca4
public:
	// MNetworkEnable
	float m_flFloat; // 0xe30	
	// MNetworkEnable
	int32_t m_nLightningStrikesRemaining; // 0xe34	
};

