#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd68
// Has VTable
class CCitadel_Ability_SunfireCataclysm : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ab0[0x2a0]; // 0xab0
public:
	Vector m_vecCastPos; // 0xd50	
	ParticleIndex_t m_nFXPreviewParticle; // 0xd5c	
	ParticleIndex_t m_hChargingParticle; // 0xd60	
};

