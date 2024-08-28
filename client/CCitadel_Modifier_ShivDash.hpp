#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x100
// Has VTable
class CCitadel_Modifier_ShivDash : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x38]; // 0xc0
public:
	bool m_bUseTrail; // 0xf8	
};

