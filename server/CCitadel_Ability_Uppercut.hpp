#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd78
// Has VTable
class CCitadel_Ability_Uppercut : public CCitadel_Ability_Melee_Base
{
public:
	CUtlStringToken m_TypeIDStickyBombAttached; // 0xb38	
private:
	[[maybe_unused]] uint8_t __pad0b3c[0x234]; // 0xb3c
public:
	bool m_bShouldUseResources; // 0xd70	
};

