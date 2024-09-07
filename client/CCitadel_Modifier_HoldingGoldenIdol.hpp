#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x138
// Has VTable
class CCitadel_Modifier_HoldingGoldenIdol : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x70]; // 0xc0
public:
	ParticleIndex_t m_iIdolParticle; // 0x130	
	int32_t m_nGoldValue; // 0x134	
};

