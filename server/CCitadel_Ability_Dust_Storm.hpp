#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xb90
// Has VTable
class CCitadel_Ability_Dust_Storm : public CCitadelBaseAbility
{
public:
	CHandle< CCitadel_Ability_Spinning_Blade > m_hSpinningBladeAbility; // 0xb00	
private:
	[[maybe_unused]] uint8_t __pad0b04[0x4]; // 0xb04
public:
	CUtlVector< CHandle< CBaseEntity > > m_vTargets; // 0xb08	
};

