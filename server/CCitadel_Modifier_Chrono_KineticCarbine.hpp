#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x308
// Has VTable
class CCitadel_Modifier_Chrono_KineticCarbine : public CCitadelModifier
{
public:
	int32_t m_nBulletCount; // 0xc8	
	float m_flElapsedPct; // 0xcc	
	CHandle< CCitadelBulletTimeWarp > m_hTimeWarp; // 0xd0	
	ParticleIndex_t m_nFullyChargedParticle; // 0xd4	
};

