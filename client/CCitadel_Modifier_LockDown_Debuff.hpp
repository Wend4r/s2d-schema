#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1e8
// Has VTable
class CCitadel_Modifier_LockDown_Debuff : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x118]; // 0xc0
public:
	Vector m_vEscapeTarget; // 0x1d8	
};

