#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x278
// Has VTable
class CModifier_Mirage_SandPhantom : public CCitadelModifier
{
public:
	ParticleIndex_t m_particleStart; // 0xc8	
	ParticleIndex_t m_particleEnd; // 0xcc	
	ParticleIndex_t m_particleTrail; // 0xd0	
	Vector m_vecStartPosition; // 0xd4	
	float m_flStartDelay; // 0xe0	
	Vector m_vecApplyOffset; // 0xe4	
};

