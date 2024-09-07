#pragma once

#include <cstdint>

// Registered binary: client.dll (project 'client')
// Alignment: 8
// Size: 0xc78
// Has VTable
class CCitadel_Ability_TangoTether_Trigger : public CCitadelBaseTriggerAbility
{
private:
	[[maybe_unused]] uint8_t __pad0c70[0x4]; // 0xc70
public:
	CHandle< C_CitadelBaseAbility > m_hBaseAbility; // 0xc74	
};

