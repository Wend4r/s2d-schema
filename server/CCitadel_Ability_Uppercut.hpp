#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xd38
// Has VTable
class CCitadel_Ability_Uppercut : public CCitadel_Ability_Melee_Base
{
public:
	CUtlStringToken m_TypeIDStickyBombAttached; // 0xb30	
private:
	[[maybe_unused]] uint8_t __pad0b34[0x1fc]; // 0xb34
public:
	bool m_bShouldUseResources; // 0xd30	
};

