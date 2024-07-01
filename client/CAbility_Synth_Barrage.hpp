#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xea0
// Has VTable
class CAbility_Synth_Barrage : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x268]; // 0xc28
public:
	int32_t m_nProjectilesScheduled; // 0xe90	
	float m_fProjectileInterval; // 0xe94	
	ParticleIndex_t m_ChannelParticle; // 0xe98	
};

