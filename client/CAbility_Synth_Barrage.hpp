#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xed8
// Has VTable
class CAbility_Synth_Barrage : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c60[0x268]; // 0xc60
public:
	int32_t m_nProjectilesScheduled; // 0xec8	
	float m_fProjectileInterval; // 0xecc	
	ParticleIndex_t m_ChannelParticle; // 0xed0	
};

