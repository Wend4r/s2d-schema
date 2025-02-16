#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x100
// Has VTable
class CCitadel_Modifier_Tech_Bleed : public CCitadelModifier
{
public:
	bool m_bNoDeath; // 0xc0	
	bool m_bDamageInProgress; // 0xc1	
private:
	[[maybe_unused]] uint8_t __pad00c2[0x2]; // 0xc2
public:
	float m_flDamage; // 0xc4	
};

