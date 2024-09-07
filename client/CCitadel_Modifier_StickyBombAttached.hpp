#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x110
// Has VTable
class CCitadel_Modifier_StickyBombAttached : public CCitadelModifier
{
public:
	bool m_bDetonateSoundStarted; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c1[0xb]; // 0xc1
public:
	float m_flDamage; // 0xcc	
	ParticleIndex_t m_nParticleIndex; // 0xd0	
};

