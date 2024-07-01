#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x358
// Has VTable
class CCitadel_Modifier_RocketBarrageVolley : public CCitadelModifier
{
public:
	float m_flFiringInterval; // 0xc8	
	GameTime_t m_flCastTime; // 0xcc	
	GameTime_t m_flNextRocketTime; // 0xd0	
	int32_t m_nGrenadesLeft; // 0xd4	
};

