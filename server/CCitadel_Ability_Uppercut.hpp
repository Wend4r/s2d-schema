#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xde0
// Has VTable
class CCitadel_Ability_Uppercut : public CCitadel_Ability_Melee_Base
{
public:
	CUtlStringToken m_TypeIDStickyBombAttached; // 0xba0	
private:
	[[maybe_unused]] uint8_t __pad0ba4[0x234]; // 0xba4
public:
	bool m_bShouldUseResources; // 0xdd8	
};

