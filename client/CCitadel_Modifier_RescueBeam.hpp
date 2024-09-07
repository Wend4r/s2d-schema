#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1a8
// Has VTable
class CCitadel_Modifier_RescueBeam : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0xe0]; // 0xc0
public:
	float m_flHealthPerTick; // 0x1a0	
	ParticleIndex_t m_nBeamIndex; // 0x1a4	
};

