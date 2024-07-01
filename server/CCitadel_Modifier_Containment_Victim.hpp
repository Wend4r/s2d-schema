#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x128
// Has VTable
class CCitadel_Modifier_Containment_Victim : public CCitadelModifier
{
public:
	float m_flGoalHeight; // 0xc8	
	float m_flFallRate; // 0xcc	
	ParticleIndex_t m_nFXIndex; // 0xd0	
	ParticleIndex_t m_nFXIndexVictim; // 0xd4	
	ParticleIndex_t m_nChainFxIndex; // 0xd8	
	float m_flTetherRadius; // 0xdc	
	Vector m_vecOrigin; // 0xe0	
};

