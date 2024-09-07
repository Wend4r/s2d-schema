#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xd8
// Has VTable
class CCitadel_Modifier_Push : public CCitadelModifier
{
public:
	Vector m_vPushForce; // 0xc0	
	float m_flDecayRate; // 0xcc	
	GameTime_t m_TimeDestroy; // 0xd0	
};

