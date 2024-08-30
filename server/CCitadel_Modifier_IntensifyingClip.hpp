#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x140
// Has VTable
class CCitadel_Modifier_IntensifyingClip : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c8[0x70]; // 0xc8
public:
	GameTime_t m_LastThinkTime; // 0x138	
	float m_flSpinUpTime; // 0x13c	
};

