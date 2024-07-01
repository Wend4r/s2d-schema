#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x108
// Has VTable
class CCitadel_Modifier_ChargedBomb : public CCitadelModifier
{
public:
	GameTime_t m_flNextBeep; // 0xc8	
	float m_flBeepInterval; // 0xcc	
};

