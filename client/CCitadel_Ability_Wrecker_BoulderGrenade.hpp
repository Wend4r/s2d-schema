#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe10
// Has VTable
class CCitadel_Ability_Wrecker_BoulderGrenade : public C_CitadelBaseAbility
{
public:
	CUtlVector< CHandle< C_BaseEntity > > m_hHitTroopers; // 0xca0	
private:
	[[maybe_unused]] uint8_t __pad0cb8[0x4]; // 0xcb8
public:
	ParticleIndex_t m_nBallParticle; // 0xcbc	
};

