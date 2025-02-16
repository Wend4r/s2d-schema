#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc70
// Has VTable
class CCitadel_Ability_Wrecker_BoulderGrenade : public CCitadelBaseAbility
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_hHitTroopers; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b18[0x4]; // 0xb18
public:
	ParticleIndex_t m_nBallParticle; // 0xb1c	
};

