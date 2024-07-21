#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0x380
// Has VTable
class CCitadel_Modifier_RestorativeGoo : public CCitadelModifier
{
public:
	GameTime_t m_flEarliestBreakoutTime; // 0xc8	
private:
	[[maybe_unused]] uint8_t __pad00cc[0x2a4]; // 0xcc
public:
	CHandle< CCitadel_RestorativeGooCube > m_hGooCube; // 0x370	
	float m_flBreakoutPercentage; // 0x374	
};

