#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x138
// Has VTable
class CCitadel_Modifier_IntensifyingClip : public CCitadelModifier
{
private:
	[[maybe_unused]] uint8_t __pad00c0[0x70]; // 0xc0
public:
	GameTime_t m_LastThinkTime; // 0x130	
	float m_flSpinUpTime; // 0x134	
};

