#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbb8
// Has VTable
class CCitadel_Ability_Shakedown_Target : public CCitadelBaseAbility
{
public:
	CHandle< CCitadel_Ability_Yakuza_Shakedown > m_hShadowdownAbility; // 0xb00	
	Vector m_AimPos; // 0xb04	
};

