#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xdc0
// Has VTable
class CCitadel_Ability_Wrecker_BoulderGrenade : public C_CitadelBaseAbility
{
public:
	CUtlVector< CHandle< C_BaseEntity > > m_hHitTroopers; // 0xc50	
private:
	[[maybe_unused]] uint8_t __pad0c68[0x4]; // 0xc68
public:
	ParticleIndex_t m_nBallParticle; // 0xc6c	
};

