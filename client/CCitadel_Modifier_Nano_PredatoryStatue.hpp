#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x1c8
// Has VTable
class CCitadel_Modifier_Nano_PredatoryStatue : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x1c]; // 0xc0
public:
	GameTime_t m_GameTimeEnabled; // 0xdc	
	GameTime_t m_LastCatInAreaTime; // 0xe0	
};

