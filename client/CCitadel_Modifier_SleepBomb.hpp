#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x220
// Has VTable
class CCitadel_Modifier_SleepBomb : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x150]; // 0xc0
public:
	Vector m_vecOrigin; // 0x210	
};

