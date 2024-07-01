#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x300
// Has VTable
class CCitadel_Modifier_Chrono_KineticCarbine : public CCitadelModifier
{
public:
	int32_t m_nBulletCount; // 0xc0	
	float m_flElapsedPct; // 0xc4	
	CHandle< CCitadelBulletTimeWarp > m_hTimeWarp; // 0xc8	
	ParticleIndex_t m_nFullyChargedParticle; // 0xcc	
};

