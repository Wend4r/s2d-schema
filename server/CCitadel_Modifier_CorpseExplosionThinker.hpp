#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd0
// Has VTable
class CCitadel_Modifier_CorpseExplosionThinker : public CCitadelModifier
{
public:
	GameTime_t m_flExplosionTime; // 0xc0	
	float m_flRadius; // 0xc4	
	float m_flDamage; // 0xc8	
};

