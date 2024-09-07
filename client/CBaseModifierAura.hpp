#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xe0
// Has VTable
// Is Abstract
class CBaseModifierAura : public CCitadelModifier
{
public:
	CUtlVector< CHandle< C_BaseEntity > > m_hAuraUnits; // 0xc0	
	ParticleIndex_t m_hAmbientEffect; // 0xd8	
};

