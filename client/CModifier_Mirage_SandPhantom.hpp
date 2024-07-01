#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x270
// Has VTable
class CModifier_Mirage_SandPhantom : public CCitadelModifier
{
public:
	ParticleIndex_t m_particleStart; // 0xc0	
	ParticleIndex_t m_particleEnd; // 0xc4	
	ParticleIndex_t m_particleTrail; // 0xc8	
	Vector m_vecStartPosition; // 0xcc	
	float m_flStartDelay; // 0xd8	
	Vector m_vecApplyOffset; // 0xdc	
};

