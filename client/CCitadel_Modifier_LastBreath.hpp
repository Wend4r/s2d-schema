#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x170
// Has VTable
class CCitadel_Modifier_LastBreath : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0xa8]; // 0xc0
public:
	float m_flDamageToAbsorb; // 0x168	
};

