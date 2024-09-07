#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x2e0
// Has VTable
class CCitadel_Modifier_Slork_Invis : public CCitadel_Modifier_Invis
{
private:
	[[maybe_unused]] uint8_t __pad0268[0x70]; // 0x268
public:
	bool m_bHasGoneFullyInvis; // 0x2d8	
};

