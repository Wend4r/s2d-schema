#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xbd0
// Has VTable
class CCitadel_Ability_Slork_Scald : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ad8[0xe0]; // 0xad8
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecDamagedTargets; // 0xbb8	
};

