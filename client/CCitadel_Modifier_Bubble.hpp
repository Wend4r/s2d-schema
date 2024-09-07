#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1e8
// Has VTable
class CCitadel_Modifier_Bubble : public CCitadel_Modifier_Silenced
{
public:
	float m_flDampingFactor; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c4[0x11c]; // 0xc4
public:
	ParticleIndex_t m_ParticleIndex; // 0x1e0	
};

