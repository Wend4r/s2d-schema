#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd60
// Has VTable
class CCitadel_Ability_SunfireCataclysm : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0aa8[0x2a0]; // 0xaa8
public:
	Vector m_vecCastPos; // 0xd48	
	ParticleIndex_t m_nFXPreviewParticle; // 0xd54	
	ParticleIndex_t m_hChargingParticle; // 0xd58	
};

