#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1d0
// Has VTable
class CCitadel_Modifier_Nano_PredatoryStatue : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c8[0x1c]; // 0xc8
public:
	GameTime_t m_GameTimeEnabled; // 0xe4	
	GameTime_t m_LastCatInAreaTime; // 0xe8	
};

