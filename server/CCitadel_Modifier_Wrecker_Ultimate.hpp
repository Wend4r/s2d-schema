#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x2a8
// Has VTable
class CCitadel_Modifier_Wrecker_Ultimate : public CCitadelModifier
{
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecGrabbed; // 0xc8	
	ParticleIndex_t m_nFXIndex; // 0xe0	
};

