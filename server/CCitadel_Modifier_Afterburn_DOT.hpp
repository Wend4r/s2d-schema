#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x1b0
// Has VTable
class CCitadel_Modifier_Afterburn_DOT : public CCitadel_Modifier_Burning
{
public:
	bool m_bCheckForExplosion; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00c9[0x3]; // 0xc9
public:
	GameTime_t m_flLastBurnTime; // 0xcc	
};

