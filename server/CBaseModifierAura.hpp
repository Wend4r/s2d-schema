#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe8
// Has VTable
// Is Abstract
class CBaseModifierAura : public CCitadelModifier
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_hAuraUnits; // 0xc8	
	ParticleIndex_t m_hAmbientEffect; // 0xe0	
};

