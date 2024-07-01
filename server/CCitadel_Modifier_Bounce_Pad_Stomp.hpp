#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x300
// Has VTable
class CCitadel_Modifier_Bounce_Pad_Stomp : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c8[0x230]; // 0xc8
public:
	bool m_bStomped; // 0x2f8	
};

