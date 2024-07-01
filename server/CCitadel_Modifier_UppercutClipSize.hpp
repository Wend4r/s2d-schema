#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x108
// Has VTable
class CCitadel_Modifier_UppercutClipSize : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c8[0x38]; // 0xc8
public:
	int32_t m_nPreClipSize; // 0x100	
};

