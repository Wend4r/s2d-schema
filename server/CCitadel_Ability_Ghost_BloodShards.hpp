#pragma once

#include <cstdint>

// Registered binary: server.dll (project 'server')
// Alignment: 8
// Size: 0xc40
// Has VTable
class CCitadel_Ability_Ghost_BloodShards : public CCitadelBaseAbility
{
private:
	[[maybe_unused]] uint8_t __pad0ad8[0x150]; // 0xad8
public:
	CUtlVector< CHandle< CBaseEntity > > m_vecDamagedTargets; // 0xc28	
};

