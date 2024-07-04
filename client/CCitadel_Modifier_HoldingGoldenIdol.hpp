#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc8
// Has VTable
class CCitadel_Modifier_HoldingGoldenIdol : public CCitadelModifier
{
public:
	ParticleIndex_t m_iIdolParticle; // 0xc0	
	int32_t m_nGoldValue; // 0xc4	
};

