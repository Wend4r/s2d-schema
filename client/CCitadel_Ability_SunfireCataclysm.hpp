#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xee0
// Has VTable
class CCitadel_Ability_SunfireCataclysm : public C_CitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c28[0x2a0]; // 0xc28
public:
	Vector m_vecCastPos; // 0xec8	
	ParticleIndex_t m_nFXPreviewParticle; // 0xed4	
	ParticleIndex_t m_hChargingParticle; // 0xed8	
};

