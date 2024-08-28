#pragma once

#include <cstdint>

struct ShotID_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd30
// Has VTable
class CAbility_Synth_Barrage : public CCitadelBaseAbility
{
public:
	ShotID_t m_tLastShotID; // 0xab0	
private:
	[[maybe_unused]] uint8_t __pad0ab4[0x26c]; // 0xab4
public:
	int32_t m_nProjectilesScheduled; // 0xd20	
	float m_fProjectileInterval; // 0xd24	
	ParticleIndex_t m_ChannelParticle; // 0xd28	
};

