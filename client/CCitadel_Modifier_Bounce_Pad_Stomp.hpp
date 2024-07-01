#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x2f8
// Has VTable
class CCitadel_Modifier_Bounce_Pad_Stomp : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x230]; // 0xc0
public:
	bool m_bStomped; // 0x2f0	
};

