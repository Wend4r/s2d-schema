#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x140
// Has VTable
class CCitadel_Modifier_HoldingGoldenIdol : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c8[0x70]; // 0xc8
public:
	ParticleIndex_t m_iIdolParticle; // 0x138	
	int32_t m_nGoldValue; // 0x13c	
};

