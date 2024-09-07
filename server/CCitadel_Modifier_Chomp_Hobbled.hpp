#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x228
// Has VTable
class CCitadel_Modifier_Chomp_Hobbled : public CCitadelModifier
{
public:
	GameTime_t m_LastUpdate; // 0xc8	
	float m_flDamageTime; // 0xcc	
	float m_flMovementTime; // 0xd0	
	CHandle< CBaseEntity > m_hGrappler; // 0xd4	
};

