#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x140
// Has VTable
class CCitadel_Modifier_StaticCharge : public CCitadelModifier
{
public:
	ParticleIndex_t m_hRingEffect; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c4[0x74]; // 0xc4
public:
	float m_flRadius; // 0x138	
};

