#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x220
// Has VTable
class CCitadel_Modifier_Chomp_Hobbled : public CCitadelModifier
{
public:
	GameTime_t m_LastUpdate; // 0xc0	
	float m_flDamageTime; // 0xc4	
	float m_flMovementTime; // 0xc8	
	CHandle< C_BaseEntity > m_hGrappler; // 0xcc	
};

