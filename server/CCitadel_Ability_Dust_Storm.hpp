#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb68
// Has VTable
class CCitadel_Ability_Dust_Storm : public CCitadelBaseAbility
{
public:
	CHandle< CCitadel_Ability_Spinning_Blade > m_hSpinningBladeAbility; // 0xad8	
private:
	[[maybe_unused]] uint8_t __pad0adc[0x4]; // 0xadc
public:
	CUtlVector< CHandle< CBaseEntity > > m_vTargets; // 0xae0	
};

