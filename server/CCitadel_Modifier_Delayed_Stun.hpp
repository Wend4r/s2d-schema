#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x140
// Has VTable
class CCitadel_Modifier_Delayed_Stun : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c8[0x70]; // 0xc8
public:
	float m_flRadius; // 0x138	
};

