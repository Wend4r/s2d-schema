#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x140
// Has VTable
class CCitadel_Modifier_Tokamak_HeatSinks_DOT : public CCitadel_Modifier_Burning
{
public:
	GameTime_t m_flLastBurnTime; // 0xc8	
	float m_flScaledDPS; // 0xcc	
};

