#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1f0
// Has VTable
class CCitadel_Modifier_LockDown_Debuff : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c8[0x118]; // 0xc8
public:
	Vector m_vEscapeTarget; // 0x1e0	
};

