#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xe0
// Has VTable
class CCitadel_Modifier_Push : public CCitadelModifier
{
public:
	Vector m_vPushForce; // 0xc8	
	float m_flDecayRate; // 0xd4	
	GameTime_t m_TimeDestroy; // 0xd8	
};

