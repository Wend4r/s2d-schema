#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xf08
// Has VTable
class CCitadel_Ability_Uppercut : public CCitadel_Ability_Melee_Base
{
private:
	[[maybe_unused]] uint8_t __pad0cd0[0x230]; // 0xcd0
public:
	bool m_bShouldUseResources; // 0xf00	
};

