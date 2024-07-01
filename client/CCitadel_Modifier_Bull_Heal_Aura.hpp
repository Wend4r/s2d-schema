#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x128
// Has VTable
class CCitadel_Modifier_Bull_Heal_Aura : public CCitadelModifierAura_Cone
{
public:
	QAngle m_playerAngles; // 0xe0	
	ParticleIndex_t m_ConeParticle; // 0xec	
};

