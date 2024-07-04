#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd0
// Has VTable
class CCitadel_Modifier_HoldingGoldenIdol : public CCitadelModifier
{
public:
	ParticleIndex_t m_iIdolParticle; // 0xc8	
	int32_t m_nGoldValue; // 0xcc	
};

