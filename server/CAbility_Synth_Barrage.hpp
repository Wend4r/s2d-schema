#pragma once

#include <cstdint>

struct ShotID_t;
struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd28
// Has VTable
class CAbility_Synth_Barrage : public CCitadelBaseAbility
{
public:
	ShotID_t m_tLastShotID; // 0xaa8	
private:
	[[maybe_unused]] uint8_t __pad0aac[0x26c]; // 0xaac
public:
	int32_t m_nProjectilesScheduled; // 0xd18	
	float m_fProjectileInterval; // 0xd1c	
	ParticleIndex_t m_ChannelParticle; // 0xd20	
};

