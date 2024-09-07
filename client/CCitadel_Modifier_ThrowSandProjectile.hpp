#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x140
// Has VTable
class CCitadel_Modifier_ThrowSandProjectile : public CCitadel_Modifier_Intrinsic_Base
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x70]; // 0xc0
public:
	Vector m_vInitialCastPosition; // 0x130	
	ParticleIndex_t m_iParticleEffect; // 0x13c	
};

