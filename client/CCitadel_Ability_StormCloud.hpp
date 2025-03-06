#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdf0
// Has VTable
// 
// MNetworkVarNames "float m_flFloat"
// MNetworkVarNames "int m_nLightningStrikesRemaining"
class CCitadel_Ability_StormCloud : public C_CitadelBaseAbility
{
public:
	ParticleIndex_t m_nTargetingParticleIndex; // 0xc50	
private:
	[[maybe_unused]] uint8_t __pad0c54[0x18c]; // 0xc54
public:
	// MNetworkEnable
	float m_flFloat; // 0xde0	
	// MNetworkEnable
	int32_t m_nLightningStrikesRemaining; // 0xde4	
};

