#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x180
// Has VTable
class CCitadel_Modifier_Thumper_2_Aura : public CCitadelModifierAura
{
public:
	Vector m_vecOrigin; // 0xe8	
	Vector m_vecWorldSpaceMins; // 0xf4	
	Vector m_vecWorldSpaceMaxs; // 0x100	
	float m_flBarbedWireAuraRadius; // 0x10c	
};

