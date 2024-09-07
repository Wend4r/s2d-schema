#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1b8
// Has VTable
class CCitadel_Modifier_NapalmProjectile : public CCitadel_Modifier_Intrinsic_Base
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0xe0]; // 0xc0
public:
	Vector m_vInitialCastPosition; // 0x1a0	
	float m_flProjectileSpeed; // 0x1ac	
	ParticleIndex_t m_iParticleEffect; // 0x1b0	
};

