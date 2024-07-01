#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1b8
// Has VTable
class CCitadel_Modifier_Nano_PredatoryStatueTarget : public CCitadelModifier
{
public:
	Vector m_vecStatuePos; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00cc[0xe4]; // 0xcc
public:
	CHandle< C_BaseEntity > m_hStatue; // 0x1b0	
};

