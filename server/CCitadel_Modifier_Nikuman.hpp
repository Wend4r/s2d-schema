#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x208
// Has VTable
class CCitadel_Modifier_Nikuman : public CCitadelModifierAura
{
private:
	[[maybe_unused]] uint8_t __pad00e8[0x118]; // 0xe8
public:
	int32_t m_nTotalSelfHeal; // 0x200	
	int32_t m_nTotalTeammateHeal; // 0x204	
};

