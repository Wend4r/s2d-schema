#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd0
// Has VTable
class CCitadel_Modifier_NeutralShield : public CCitadelModifier
{
public:
	float m_flShieldActivateDelay; // 0xc8	
	GameTime_t m_timeEnemyDisappeared; // 0xcc	
};

