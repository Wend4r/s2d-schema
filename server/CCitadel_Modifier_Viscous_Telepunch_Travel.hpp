#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x138
// Has VTable
class CCitadel_Modifier_Viscous_Telepunch_Travel : public CCitadelModifier
{
public:
	ParticleIndex_t m_particleStart; // 0xc8	
	ParticleIndex_t m_particleEnd; // 0xcc	
	ParticleIndex_t m_particleTrail; // 0xd0	
	Vector m_vecEndLocation; // 0xd4	
	Vector m_vecStartPosition; // 0xe0	
	float m_flStartDelay; // 0xec	
	Vector m_vecApplyOffset; // 0xf0	
};

