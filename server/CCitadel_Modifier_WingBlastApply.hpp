#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x198
// Has VTable
class CCitadel_Modifier_WingBlastApply : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c8[0xa8]; // 0xc8
public:
	Vector m_vStart; // 0x170	
	Vector m_vEnd; // 0x17c	
	Vector m_vPush; // 0x188	
};

