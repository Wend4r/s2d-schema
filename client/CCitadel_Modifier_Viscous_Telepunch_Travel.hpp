#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_Viscous_Telepunch_Travel : public CCitadelModifier
{
public:
	ParticleIndex_t m_particleStart; // 0xc0	
	ParticleIndex_t m_particleEnd; // 0xc4	
	ParticleIndex_t m_particleTrail; // 0xc8	
	Vector m_vecEndLocation; // 0xcc	
	Vector m_vecStartPosition; // 0xd8	
	float m_flStartDelay; // 0xe4	
	Vector m_vecApplyOffset; // 0xe8	
};

