#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1a8
// Has VTable
class CCitadel_Modifier_Nano_PredatoryStatue : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c8[0x28]; // 0xc8
public:
	GameTime_t m_GameTimeEnabled; // 0xf0	
	GameTime_t m_LastCatInAreaTime; // 0xf4	
	CHandle< CCitadel_Nano_Predatory_Statue > m_hStatue; // 0xf8	
};

