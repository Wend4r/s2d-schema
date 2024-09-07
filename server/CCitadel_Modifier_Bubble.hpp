#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1f8
// Has VTable
class CCitadel_Modifier_Bubble : public CCitadel_Modifier_Silenced
{
public:
	float m_flDampingFactor; // 0xd0	
private:
	[[maybe_unused]] uint8_t __pad00d4[0x11c]; // 0xd4
public:
	ParticleIndex_t m_ParticleIndex; // 0x1f0	
};

