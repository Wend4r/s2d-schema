#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x330
// Has VTable
class CCitadel_Modifier_RestorativeGoo : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x268]; // 0xc0
public:
	CHandle< C_Citadel_RestorativeGooCube > m_hGooCube; // 0x328	
};

