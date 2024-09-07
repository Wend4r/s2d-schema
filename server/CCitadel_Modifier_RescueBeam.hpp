#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1b0
// Has VTable
class CCitadel_Modifier_RescueBeam : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c8[0xe0]; // 0xc8
public:
	float m_flHealthPerTick; // 0x1a8	
	ParticleIndex_t m_nBeamIndex; // 0x1ac	
};

