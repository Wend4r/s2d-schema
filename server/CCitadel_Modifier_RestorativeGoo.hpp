#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x348
// Has VTable
class CCitadel_Modifier_RestorativeGoo : public CCitadelModifier
{
public:
	GameTime_t m_flBreakoutStartTime; // 0xc8	
	float m_flBreakoutPercentage; // 0xcc	
private:
	[[maybe_unused]] uint8_t __pad00d0[0x268]; // 0xd0
public:
	CHandle< CCitadel_RestorativeGooCube > m_hGooCube; // 0x338	
};

