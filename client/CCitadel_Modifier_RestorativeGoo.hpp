#pragma once

#include <cstdint>

struct GameTime_t;
// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0x3b0
// Has VTable
class CCitadel_Modifier_RestorativeGoo : public CCitadelModifier
{
public:
	GameTime_t m_flEarliestBreakoutTime; // 0xc0	
private:
	[[maybe_unused]] uint8_t __pad00c4[0x2dc]; // 0xc4
public:
	CHandle< C_Citadel_RestorativeGooCube > m_hGooCube; // 0x3a0	
	float m_flBreakoutPercentage; // 0x3a4	
};

