#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd0
// Has VTable
class CCitadel_Modifier_Stunned : public CCitadelModifier
{
public:
	bool m_bEnabled; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00c9[0x3]; // 0xc9
public:
	ParticleIndex_t m_nParticleIndex; // 0xcc	
};

