#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xcb8
// Has VTable
class CCitadel_Ability_TangoTether_Trigger : public CCitadelBaseTriggerAbility
{
private:
	[[maybe_unused]] uint8_t __pad0cb0[0x4]; // 0xcb0
public:
	CHandle< C_CitadelBaseAbility > m_hBaseAbility; // 0xcb4	
};

