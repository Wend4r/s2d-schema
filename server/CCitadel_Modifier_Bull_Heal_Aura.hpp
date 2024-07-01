#pragma once

#include <cstdint>

struct ParticleIndex_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x130
// Has VTable
class CCitadel_Modifier_Bull_Heal_Aura : public CCitadelModifierAura_Cone
{
public:
	QAngle m_playerAngles; // 0xe8	
	ParticleIndex_t m_ConeParticle; // 0xf4	
};

