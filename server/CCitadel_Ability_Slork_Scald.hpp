#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xba8
// Has VTable
class CCitadel_Ability_Slork_Scald : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ab0[0xe0]; // 0xab0
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecDamagedTargets; // 0xb90	
};

