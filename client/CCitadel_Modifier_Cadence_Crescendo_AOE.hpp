#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf0
// Has VTable
class CCitadel_Modifier_Cadence_Crescendo_AOE : public CCitadelModifierAura
{
private:
	[[maybe_unused]] uint8_t __pad00e0[0x8]; // 0xe0
public:
	int32_t m_nTicks; // 0xe8	
};

