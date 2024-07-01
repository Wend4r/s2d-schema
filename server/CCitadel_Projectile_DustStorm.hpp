#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x9c0
// Has VTable
class CCitadel_Projectile_DustStorm : public CCitadelProjectile
{
public:
	int32_t m_cTicksNoMovement; // 0x7f8	
	CHandle< CCitadel_Ability_Dust_Storm > m_DustStormAbility; // 0x7fc	
};

