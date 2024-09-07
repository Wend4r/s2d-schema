#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x3b8
// Has VTable
class CCitadel_Modifier_RestorativeGoo : public CCitadelModifier
{
public:
	GameTime_t m_flEarliestBreakoutTime; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00cc[0x2dc]; // 0xcc
public:
	CHandle< CCitadel_RestorativeGooCube > m_hGooCube; // 0x3a8	
	float m_flBreakoutPercentage; // 0x3ac	
};

