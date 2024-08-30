#pragma once

#include <cstdint>

struct ShotID_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd58
// Has VTable
class CAbility_Synth_Barrage : public CCitadelBaseAbility
{
public:
	ShotID_t m_tLastShotID; // 0xad8	
private:
	[[maybe_unused]] uint8_t __pad0adc[0x26c]; // 0xadc
public:
	int32_t m_nProjectilesScheduled; // 0xd48	
	float m_fProjectileInterval; // 0xd4c	
	ParticleIndex_t m_ChannelParticle; // 0xd50	
};

